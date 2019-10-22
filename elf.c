#include "defines.h"
#include "elf.h"
#include "lib.h"

struct elf_header{
    /*マジックナンバ*/
    struct{
        unsigned char magic[4];/*マジック・ナンバ*/
        unsigned char class;/*32/64bitの区別*/
        unsigned char format;/*エンディアン情報*/
        unsigned char version;/*ELFフォーマットのバージョン*/
        unsigned char abi;/*OSの種別*/
        unsigned char abi_version;/*OSのバージョン*/
        unsigned char reserve[7];/*予約領域*/
    } id;
    short type;/*ファイルの種別*/
    short arch;/*CPUの種類*/
    long version;/*ELF形式のバージョン*/
    long entry_point;/*実行開始アドレス*/
    long program_header_offset;/*プログラムヘッダーテーブルの位置*/
    long section_header_offset;/*セクションヘッダーテーブルの位置*/
    long flags;/*各種フラグ*/
    short header_size;/*ELFヘッダーのサイズ*/
    short program_header_size;/*プログラムヘッダーのサイズ*/
    short program_header_num;/*プログラムヘッダーの個数*/
    short section_header_size;/*セクションヘッダーのサイズ*/
    short section_header_num;/*セクションヘッダーの個数*/
    short section_name_index;/*セクション名を格納するセクション*/
};

/*プログラムヘッダーの定義*/
struct elf_program_header{
    long type;/*セグメントの種類*/
    long offset;/*ファイル中の位置*/
    long virtual_addr;/*論理アドレス*/
    long physical_addr;/*物理アドレス*/
    long file_size;/*ファイル中でのサイズ*/
    long memory_size;/*メモリ上でのサイズ*/
    long flags;/*各種フラグ*/
    long align;/*アライメント*/
};

/* ELF ヘッダーのチェック */
static int elf_check(struct elf_header* header)
{
    if(memcmp(header->id.magic,"\x7f" "ELF",4)){
        return -1;
    }

    if(header->id.class != 1){return -1;}/*elf32*/
    if(header->id.format != 2){return -1;}/*Big endian*/
    if(header->id.version != 1){return -1;}/*version 1*/
    if(header->type != 2){return -1;}/*Excecutable file*/
    if(header->version != 1){return -1;}/*version 1*/

    /*アーキテクチチャがH8であることのチェック*/
    if((header->arch != 46) && (header->arch != 47)){
        return -1;
    }

    return 0;
}

static int elf_load_program(struct elf_header* header)
{
    int i;
    struct elf_program_header* phdr;

    for(i=0;i<header->program_header_num;i++){
        /*プログラムヘッダーを取得*/
        phdr = (struct elf_program_header*)((char*)header+header->program_header_offset+header->program_header_size*i);
        
        /*ロード可能かどうかのチェック*/
        if(phdr->type != 1){
            continue;
        }

        putxval(phdr->offset,6); putc(' ');
        putxval(phdr->virtual_addr,8); putc(' ');
        putxval(phdr->physical_addr,8); putc(' ');
        putxval(phdr->file_size,5); putc(' ');
        putxval(phdr->memory_size,5); putc(' ');
        putxval(phdr->flags,2); putc(' ');
        putxval(phdr->align,2); putc('\n');
    }

    return 0;
}

int elf_load(char* buf)
{
    struct elf_header* header = (struct elf_header*)buf;

    if(elf_check(header) < 0){
        return -1;
    }

    if(elf_load_program(header) < 0){
        return -1;
    }

    return 0;
}
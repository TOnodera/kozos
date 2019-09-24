/* Generated automatically by the program `genopinit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "flags.h"
#include "insn-config.h"
#include "recog.h"
#include "expr.h"
#include "optabs.h"
#include "reload.h"

void
init_all_optabs (void)
{
#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  int i, j;
#endif

  movstrict_optab->handlers[QImode].insn_code = CODE_FOR_movstrictqi;
  movstrict_optab->handlers[HImode].insn_code = CODE_FOR_movstricthi;
  tst_optab->handlers[QImode].insn_code = CODE_FOR_tstqi;
  tst_optab->handlers[HImode].insn_code = CODE_FOR_tsthi;
  if (HAVE_tstsi)
    tst_optab->handlers[SImode].insn_code = CODE_FOR_tstsi;
  cmp_optab->handlers[QImode].insn_code = CODE_FOR_cmpqi;
  if (HAVE_cmpsi)
    cmp_optab->handlers[SImode].insn_code = CODE_FOR_cmpsi;
  add_optab->handlers[QImode].insn_code = CODE_FOR_addqi3;
  sub_optab->handlers[QImode].insn_code = CODE_FOR_subqi3;
  if (HAVE_mulqihi3)
    smul_widen_optab->handlers[HImode].insn_code = CODE_FOR_mulqihi3;
  if (HAVE_mulhisi3)
    smul_widen_optab->handlers[SImode].insn_code = CODE_FOR_mulhisi3;
  umul_widen_optab->handlers[HImode].insn_code = CODE_FOR_umulqihi3;
  if (HAVE_umulhisi3)
    umul_widen_optab->handlers[SImode].insn_code = CODE_FOR_umulhisi3;
  udivmod_optab->handlers[QImode].insn_code = CODE_FOR_udivmodqi4;
  if (HAVE_divmodqi4)
    sdivmod_optab->handlers[QImode].insn_code = CODE_FOR_divmodqi4;
  if (HAVE_udivmodhi4)
    udivmod_optab->handlers[HImode].insn_code = CODE_FOR_udivmodhi4;
  if (HAVE_divmodhi4)
    sdivmod_optab->handlers[HImode].insn_code = CODE_FOR_divmodhi4;
  neg_optab->handlers[QImode].insn_code = CODE_FOR_negqi2;
  one_cmpl_optab->handlers[QImode].insn_code = CODE_FOR_one_cmplqi2;
  push_optab->handlers[QImode].insn_code = CODE_FOR_pushqi1;
  mov_optab->handlers[QImode].insn_code = CODE_FOR_movqi;
  push_optab->handlers[HImode].insn_code = CODE_FOR_pushhi1;
  mov_optab->handlers[HImode].insn_code = CODE_FOR_movhi;
  mov_optab->handlers[SImode].insn_code = CODE_FOR_movsi;
  mov_optab->handlers[SFmode].insn_code = CODE_FOR_movsf;
  cmp_optab->handlers[HImode].insn_code = CODE_FOR_cmphi;
  add_optab->handlers[HImode].insn_code = CODE_FOR_addhi3;
  add_optab->handlers[SImode].insn_code = CODE_FOR_addsi3;
  sub_optab->handlers[HImode].insn_code = CODE_FOR_subhi3;
  sub_optab->handlers[SImode].insn_code = CODE_FOR_subsi3;
  and_optab->handlers[QImode].insn_code = CODE_FOR_andqi3;
  and_optab->handlers[HImode].insn_code = CODE_FOR_andhi3;
  and_optab->handlers[SImode].insn_code = CODE_FOR_andsi3;
  ior_optab->handlers[QImode].insn_code = CODE_FOR_iorqi3;
  ior_optab->handlers[HImode].insn_code = CODE_FOR_iorhi3;
  ior_optab->handlers[SImode].insn_code = CODE_FOR_iorsi3;
  xor_optab->handlers[QImode].insn_code = CODE_FOR_xorqi3;
  xor_optab->handlers[HImode].insn_code = CODE_FOR_xorhi3;
  xor_optab->handlers[SImode].insn_code = CODE_FOR_xorsi3;
  neg_optab->handlers[HImode].insn_code = CODE_FOR_neghi2;
  neg_optab->handlers[SImode].insn_code = CODE_FOR_negsi2;
  negv_optab->handlers[SFmode].insn_code =
    neg_optab->handlers[SFmode].insn_code = CODE_FOR_negsf2;
  absv_optab->handlers[SFmode].insn_code =
    abs_optab->handlers[SFmode].insn_code = CODE_FOR_abssf2;
  one_cmpl_optab->handlers[HImode].insn_code = CODE_FOR_one_cmplhi2;
  one_cmpl_optab->handlers[SImode].insn_code = CODE_FOR_one_cmplsi2;
  bcc_gen_fctn[LE] = gen_ble;
  bcc_gen_fctn[LEU] = gen_bleu;
  bcc_gen_fctn[GE] = gen_bge;
  bcc_gen_fctn[GEU] = gen_bgeu;
  bcc_gen_fctn[LT] = gen_blt;
  bcc_gen_fctn[LTU] = gen_bltu;
  bcc_gen_fctn[GT] = gen_bgt;
  bcc_gen_fctn[GTU] = gen_bgtu;
  bcc_gen_fctn[EQ] = gen_beq;
  bcc_gen_fctn[NE] = gen_bne;
  zext_optab->handlers[HImode][QImode].insn_code = CODE_FOR_zero_extendqihi2;
  zext_optab->handlers[SImode][QImode].insn_code = CODE_FOR_zero_extendqisi2;
  zext_optab->handlers[SImode][HImode].insn_code = CODE_FOR_zero_extendhisi2;
  sext_optab->handlers[HImode][QImode].insn_code = CODE_FOR_extendqihi2;
  sext_optab->handlers[SImode][QImode].insn_code = CODE_FOR_extendqisi2;
  sext_optab->handlers[SImode][HImode].insn_code = CODE_FOR_extendhisi2;
  ashl_optab->handlers[QImode].insn_code = CODE_FOR_ashlqi3;
  ashr_optab->handlers[QImode].insn_code = CODE_FOR_ashrqi3;
  lshr_optab->handlers[QImode].insn_code = CODE_FOR_lshrqi3;
  ashl_optab->handlers[HImode].insn_code = CODE_FOR_ashlhi3;
  lshr_optab->handlers[HImode].insn_code = CODE_FOR_lshrhi3;
  ashr_optab->handlers[HImode].insn_code = CODE_FOR_ashrhi3;
  ashl_optab->handlers[SImode].insn_code = CODE_FOR_ashlsi3;
  lshr_optab->handlers[SImode].insn_code = CODE_FOR_lshrsi3;
  ashr_optab->handlers[SImode].insn_code = CODE_FOR_ashrsi3;
  rotl_optab->handlers[QImode].insn_code = CODE_FOR_rotlqi3;
  rotl_optab->handlers[HImode].insn_code = CODE_FOR_rotlhi3;
  if (HAVE_rotlsi3)
    rotl_optab->handlers[SImode].insn_code = CODE_FOR_rotlsi3;

#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  /* This flag says the same insns that convert to a signed fixnum
     also convert validly to an unsigned one.  */
  for (i = 0; i < NUM_MACHINE_MODES; i++)
    for (j = 0; j < NUM_MACHINE_MODES; j++)
      ufixtrunc_optab->handlers[i][j].insn_code
      = sfixtrunc_optab->handlers[i][j].insn_code;
#endif
}

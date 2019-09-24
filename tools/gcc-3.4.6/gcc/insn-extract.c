/* Generated automatically by the program `genextract'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

static rtx junk ATTRIBUTE_UNUSED;
void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED;

  switch (INSN_CODE (insn))
    {
    case -1:
      fatal_insn_not_found (insn);

    case 175:  /* *h8300.md:3699 */
    case 174:  /* *h8300.md:3679 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 173:  /* *h8300.md:3669 */
    case 172:  /* *h8300.md:3659 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 167:  /* *iorsi3_ashift_16_ashift_24_mem */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 165:  /* *iorsi2_and_1_lshiftrt_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 168:  /* *addsi3_shift */
    case 164:  /* *iorsi3_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 163:  /* *iorsi3_and_lshiftrt_9_sb */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 161:  /* *iorsi3_zero_extract */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 160:  /* *iorsi3_and_lshiftrt */
    case 159:  /* *iorsi3_and_ashift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 154:  /* *iorsi3_two_qi_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      break;

    case 156:  /* *iorsi3_two_qi_sext */
    case 152:  /* *iorhi3_two_qi_mem */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 148:  /* *ixorsi3_lshiftrt_16 */
    case 147:  /* *ixorsi3_ashift_16 */
    case 146:  /* *ixorsi3_zext_hi */
    case 145:  /* *ixorsi3_zext_qi */
    case 144:  /* *ixorhi3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 162:  /* *iorsi3_and_lshiftrt_n_sb */
    case 143:  /* *addsi3_and_not_r_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 158:  /* *iorsi3_ashift_31 */
    case 150:  /* *iorhi3_lshiftrt_8 */
    case 149:  /* *iorhi3_ashift_8 */
    case 142:  /* *addsi3_and_r_1 */
    case 140:  /* *addsi3_upper */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 138:  /* *andsi3_lshiftrt_n_sb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 137:  /* *andsi3_ashift_n_lower */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 171:  /* *h8300.md:3650 */
    case 170:  /* *h8300.md:3639 */
    case 169:  /* *ashiftsi_sextqi_7 */
    case 139:  /* *andsi3_lshiftrt_9_sb */
    case 136:  /* *twoshifts_l16_r1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 134:  /* *extzv_16_8 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 131:  /* *insv_si_8_8_lshiftrt_8 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 129:  /* *insv_si_1_n_lshiftrt_16 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 128:  /* *insv_si_1_n_lshiftrt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 126:  /* *h8300.md:2907 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 1));
      break;

    case 125:  /* *h8300.md:2895 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 1));
      break;

    case 127:  /* *insv_si_1_n */
    case 124:  /* *h8300.md:2866 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 2));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 123:  /* *extzv_1_r_inv_h8300hs */
    case 122:  /* *extzv_1_r_inv_h8300 */
    case 119:  /* *h8300.md:2780 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 121:  /* *extzv_1_r_h8300hs */
    case 120:  /* *extzv_1_r_h8300 */
    case 118:  /* *h8300.md:2766 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 114:  /* *shiftsi */
    case 113:  /* *shifthi */
    case 112:  /* *shiftqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 97:  /* ldm_h8300s_4_normal */
    case 96:  /* ldm_h8300s_4_advanced */
    case 91:  /* stm_h8300s_4_normal */
    case 90:  /* stm_h8300s_4_advanced */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 4), 1));
      break;

    case 95:  /* ldm_h8300s_3_normal */
    case 94:  /* ldm_h8300s_3_advanced */
    case 89:  /* stm_h8300s_3_normal */
    case 88:  /* stm_h8300s_3_advanced */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 1));
      break;

    case 93:  /* ldm_h8300s_2_normal */
    case 92:  /* ldm_h8300s_2_advanced */
    case 87:  /* stm_h8300s_2_normal */
    case 86:  /* stm_h8300s_2_advanced */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 1));
      break;

    case 99:  /* monitor_prologue */
    case 98:  /* *return_1 */
    case 85:  /* nop */
      break;

    case 79:  /* *tablejump_h8300hs_normal */
    case 78:  /* *tablejump_h8300hs_advanced */
    case 77:  /* *tablejump_h8300 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 75:  /* branch_false */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 74:  /* branch_true */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 135:  /* *extzv_8_23 */
    case 133:  /* *extzv_8_16 */
    case 132:  /* *extzv_8_8 */
    case 111:  /* *extendhisi2_h8300hs */
    case 110:  /* *extendhisi2_h8300 */
    case 109:  /* *extendqisi2_h8300hs */
    case 108:  /* *extendqisi2_h8300 */
    case 107:  /* *extendqihi2_h8300hs */
    case 106:  /* *extendqihi2_h8300 */
    case 105:  /* *zero_extendhisi2_h8300hs */
    case 104:  /* *zero_extendhisi2_h8300 */
    case 103:  /* *zero_extendqisi2_h8300hs */
    case 102:  /* *zero_extendqisi2_h8300 */
    case 101:  /* *zero_extendqihi2_h8300hs */
    case 100:  /* *zero_extendqihi2_h8300 */
    case 73:  /* *one_complsi2_h8300hs */
    case 72:  /* *one_complsi2_h8300 */
    case 71:  /* *one_cmplhi2_h8300hs */
    case 70:  /* *one_cmplhi2_h8300 */
    case 69:  /* one_cmplqi2 */
    case 68:  /* *abssf2_h8300hs */
    case 67:  /* *abssf2_h8300 */
    case 66:  /* *negsf2_h8300hs */
    case 65:  /* *negsf2_h8300 */
    case 64:  /* *negsi2_h8300hs */
    case 63:  /* *neghi2_h8300hs */
    case 62:  /* negqi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 61:  /* *logicalsi3 */
    case 60:  /* *logicalhi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 57:  /* *andorsi3_shift_8 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 56:  /* *andorsi3 */
    case 55:  /* *andorhi3 */
    case 54:  /* *andorqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 52:  /* divmodhi4 */
    case 51:  /* udivmodhi4 */
    case 50:  /* divmodqi4 */
    case 49:  /* udivmodqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 48:  /* *h8300.md:1088 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 47:  /* *h8300.md:1076 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      break;

    case 166:  /* *iorsi3_ashift_16_ashift_24 */
    case 157:  /* *iorsi3_w */
    case 155:  /* *iorsi3_e2f */
    case 153:  /* *iorsi3_two_hi */
    case 151:  /* *iorhi3_two_qi */
    case 141:  /* *addsi3_lshiftrt_16_zexthi */
    case 46:  /* umulhisi3 */
    case 45:  /* umulqihi3 */
    case 44:  /* mulhisi3 */
    case 43:  /* mulqihi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 37:  /* *addsi3_incdec */
    case 34:  /* *addhi3_incdec */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 117:  /* *rotlsi3_1 */
    case 116:  /* *rotlhi3_1 */
    case 115:  /* *rotlqi3_1 */
    case 84:  /* call_value */
    case 59:  /* *xorqi3_1 */
    case 58:  /* *iorqi3_1 */
    case 53:  /* *andqi3_1 */
    case 42:  /* *subsi3_h8300hs */
    case 41:  /* *subsi3_h8300 */
    case 40:  /* *subhi3_h8300hs */
    case 39:  /* *subhi3_h8300 */
    case 38:  /* subqi3 */
    case 36:  /* *addsi_h8300hs */
    case 35:  /* *addsi_h8300 */
    case 33:  /* *addhi3_h8300hs */
    case 32:  /* *addhi3_h8300 */
    case 31:  /* addqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 30:  /* cmpsi */
    case 29:  /* *cmphi_h8300hs */
    case 28:  /* *cmphi_h8300 */
    case 27:  /* cmpqi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 76:  /* jump */
    case 26:  /* *tstsi_upper */
    case 24:  /* *tsthi_upper */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 82:  /* *indirect_jump_h8300hs_normal */
    case 81:  /* *indirect_jump_h8300hs_advanced */
    case 80:  /* *indirect_jump_h8300 */
    case 25:  /* tstsi */
    case 23:  /* tsthi */
    case 22:  /* tstqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 21:  /* *tstsi_variable_bit_qi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 20:  /* *tstsi_variable_bit */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 19:  /* *tstsi_upper_bit */
    case 17:  /* *tst_extzv_1_n */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 18:  /* *h8300.md:657 */
    case 16:  /* *h8300.md:625 */
    case 15:  /* *h8300.md:616 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 130:  /* *insv_si_8_8 */
    case 10:  /* movstricthi */
    case 5:  /* movstrictqi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 83:  /* call */
    case 14:  /* *movsf_h8300hs */
    case 13:  /* *movsi_h8300hs */
    case 12:  /* *movsf_h8300 */
    case 11:  /* *movsi_h8300 */
    case 9:  /* *movhi_h8300hs */
    case 8:  /* *movhi_h8300 */
    case 4:  /* *movqi_h8300hs */
    case 3:  /* *movqi_h8300 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 7:  /* pushhi1_h8300hs_normal */
    case 6:  /* pushhi1_h8300hs */
    case 2:  /* pushqi1_h8300hs_normal */
    case 1:  /* pushqi1_h8300hs */
    case 0:  /* pushqi1_h8300 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1));
      break;

    default:
      abort ();
    }
}

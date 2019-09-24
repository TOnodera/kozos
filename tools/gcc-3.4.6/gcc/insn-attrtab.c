/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

int
insn_current_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 76:
    case 75:
    case 74:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-126)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (126)))
        {
	  return 2;
        }
      else
        {
	  if ((((cpu_type) == (CPU_H8300H))) && ((((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) >= (-32000)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0)) <= (32000))))
	    {
	      return 4;
	    }
	  else
	    {
	      return 6;
	    }
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 76:
    case 75:
    case 74:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_default_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 33:
    case 32:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 175:
    case 174:
    case 169:
    case 168:
    case 167:
    case 166:
    case 164:
    case 156:
    case 154:
    case 143:
    case 142:
    case 139:
    case 137:
    case 136:
    case 135:
    case 109:
    case 103:
    case 19:
      return 200 /* 0xc8 */;

    case 3:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_constrain_insn_cached (insn);
      if ((TARGET_H8300) != (0))
        {
	  return 4;
        }
      else if (((TARGET_H8300H) != (0)) || ((TARGET_H8300S) != (0)))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 14 /* 0xe */;
        }

    case 173:
    case 172:
    case 163:
      return 10 /* 0xa */;

    case 171:
    case 170:
    case 162:
    case 138:
    case 134:
    case 122:
    case 120:
    case 119:
    case 72:
      return 8;

    case 76:
    case 75:
    case 74:
    case 165:
    case 161:
    case 160:
    case 159:
    case 158:
    case 141:
    case 133:
    case 129:
    case 126:
    case 125:
    case 118:
    case 56:
    case 55:
    case 54:
    case 52:
    case 50:
    case 47:
    case 41:
      return 6;

    case 157:
    case 59:
    case 58:
    case 53:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 8;
        }

    case 152:
      return 16 /* 0x10 */;

    case 132:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 128:
    case 127:
    case 124:
    case 97:
    case 96:
    case 95:
    case 94:
    case 93:
    case 92:
    case 91:
    case 90:
    case 89:
    case 88:
    case 87:
    case 86:
    case 70:
    case 68:
    case 66:
    case 51:
    case 49:
    case 48:
    case 44:
    case 43:
    case 7:
    case 6:
    case 2:
    case 1:
      return 4;

    case 123:
    case 121:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 6;
        }

    case 117:
      extract_constrain_insn_cached (insn);
      return compute_a_rotate_length (operands);

    case 116:
      extract_constrain_insn_cached (insn);
      return compute_a_rotate_length (operands);

    case 115:
      extract_constrain_insn_cached (insn);
      return compute_a_rotate_length (operands);

    case 114:
      extract_constrain_insn_cached (insn);
      return compute_a_shift_length (insn, operands);

    case 113:
      extract_constrain_insn_cached (insn);
      return compute_a_shift_length (insn, operands);

    case 112:
      extract_constrain_insn_cached (insn);
      return compute_a_shift_length (insn, operands);

    case 110:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 6;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 108:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 106:
    case 102:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 104:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else
        {
	  return 6;
        }

    case 101:
    case 100:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 99:
      return 20 /* 0x14 */;

    case 84:
    case 83:
      extract_insn_cached (insn);
      if (small_call_insn_operand (operands[0], QImode))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 61:
      extract_constrain_insn_cached (insn);
      return compute_logical_op_length (SImode, operands);

    case 60:
      extract_constrain_insn_cached (insn);
      return compute_logical_op_length (HImode, operands);

    case 42:
    case 30:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 6;
        }

    case 40:
    case 39:
    case 29:
    case 15:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 36:
      extract_constrain_insn_cached (insn);
      return compute_plussi_length (operands);

    case 35:
      extract_constrain_insn_cached (insn);
      return compute_plussi_length (operands);

    case 21:
    case 17:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 14:
      extract_constrain_insn_cached (insn);
      return compute_mov_length (operands);

    case 13:
      extract_constrain_insn_cached (insn);
      return compute_mov_length (operands);

    case 12:
      extract_constrain_insn_cached (insn);
      return compute_mov_length (operands);

    case 11:
      extract_constrain_insn_cached (insn);
      return compute_mov_length (operands);

    case 10:
      extract_constrain_insn_cached (insn);
      return compute_mov_length (operands);

    case 9:
      extract_constrain_insn_cached (insn);
      return compute_mov_length (operands);

    case 8:
      extract_constrain_insn_cached (insn);
      return compute_mov_length (operands);

    case 5:
      extract_constrain_insn_cached (insn);
      return compute_mov_length (operands);

    case 4:
      extract_constrain_insn_cached (insn);
      return compute_mov_length (operands);

    default:
      return 2;

    }
}

enum attr_cc
get_attr_cc (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 33:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return CC_NONE_0HIT;
        }
      else if (which_alternative == 2)
        {
	  return CC_CLOBBER;
        }
      else
        {
	  return CC_SET_ZN;
        }

    case 32:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return CC_NONE_0HIT;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return CC_CLOBBER;
        }
      else
        {
	  return CC_SET_ZN;
        }

    case 13:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_SET_ZN;
        }
      else if (which_alternative == 1)
        {
	  return CC_SET_ZNV;
        }
      else if (which_alternative == 2)
        {
	  return CC_CLOBBER;
        }
      else if (((1 << which_alternative) & 0x78))
        {
	  return CC_SET_ZNV;
        }
      else if (((1 << which_alternative) & 0x180))
        {
	  return CC_NONE_0HIT;
        }
      else
        {
	  return CC_SET_ZNV;
        }

    case 4:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_SET_ZN;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return CC_SET_ZNV;
        }
      else if (which_alternative == 3)
        {
	  return CC_CLOBBER;
        }
      else
        {
	  return CC_SET_ZNV;
        }

    case 14:
    case 10:
    case 9:
    case 8:
    case 5:
    case 3:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_SET_ZN;
        }
      else
        {
	  return CC_SET_ZNV;
        }

    case 35:
      extract_constrain_insn_cached (insn);
      return compute_plussi_cc (operands);

    case 36:
      extract_constrain_insn_cached (insn);
      return compute_plussi_cc (operands);

    case 39:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_SET_ZN;
        }
      else
        {
	  return CC_CLOBBER;
        }

    case 53:
    case 58:
    case 59:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_SET_ZNV;
        }
      else
        {
	  return CC_NONE_0HIT;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      return compute_logical_op_cc (HImode, operands);

    case 61:
      extract_constrain_insn_cached (insn);
      return compute_logical_op_cc (SImode, operands);

    case 112:
      extract_constrain_insn_cached (insn);
      return compute_a_shift_cc (insn, operands);

    case 113:
      extract_constrain_insn_cached (insn);
      return compute_a_shift_cc (insn, operands);

    case 114:
      extract_constrain_insn_cached (insn);
      return compute_a_shift_cc (insn, operands);

    case 132:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CC_SET_ZNV;
        }
      else
        {
	  return CC_CLOBBER;
        }

    case 27:
    case 28:
    case 29:
    case 30:
      return CC_COMPARE;

    case 15:
    case 16:
    case 17:
    case 18:
    case 20:
    case 21:
    case 31:
    case 34:
    case 37:
    case 38:
    case 40:
    case 42:
    case 43:
    case 44:
    case 62:
    case 63:
    case 64:
      return CC_SET_ZN;

    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 69:
    case 71:
    case 73:
    case 101:
    case 105:
    case 107:
    case 111:
    case 121:
    case 123:
    case 133:
    case 134:
    case 158:
    case 170:
    case 171:
    case 172:
    case 173:
      return CC_SET_ZNV;

    case 45:
    case 46:
    case 47:
    case 48:
      return CC_NONE_0HIT;

    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
      return CC_NONE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return CC_CLOBBER;

    }
}

enum attr_type
get_attr_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 74:
    case 75:
    case 76:
      return TYPE_BRANCH;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return TYPE_ARITH;

    }
}

int length_unit_log = 0;

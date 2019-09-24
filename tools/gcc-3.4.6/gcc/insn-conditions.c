/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "insn-constants.h"

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "gensupport.h"

#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

/* If we don't have __builtin_constant_p, or it's not acceptable in
   array initializers, fall back to assuming that all conditions
   potentially vary at run time.  It works in 3.0.1 and later; 3.0
   only when not optimizing.  */
#if (GCC_VERSION >= 3001) || ((GCC_VERSION == 3000) && !__OPTIMIZE__)
# define MAYBE_EVAL(expr) (__builtin_constant_p(expr) ? (int) (expr) : -1)
#else
# define MAYBE_EVAL(expr) -1
#endif

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time. */

const struct c_test insn_conditions[] = {
  { "TARGET_H8300S\n\
   && REGNO (operands[0]) == 0\n\
   && REGNO (operands[1]) == 1\n\
   && REGNO (operands[2]) == 2\n\
   && REGNO (operands[3]) == 3",
    MAYBE_EVAL (TARGET_H8300S
   && REGNO (operands[0]) == 0
   && REGNO (operands[1]) == 1
   && REGNO (operands[2]) == 2
   && REGNO (operands[3]) == 3) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && operands[0] != stack_pointer_rtx",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && operands[0] != stack_pointer_rtx) },
  { "flow2_completed\n\
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))",
    MAYBE_EVAL (flow2_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))) },
  { "TARGET_H8300S && !TARGET_NORMAL_MODE\n\
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1)\n\
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3)\n\
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5))",
    MAYBE_EVAL (TARGET_H8300S && !TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1)
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3)
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[1]) < 16",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16) },
  { "TARGET_H8300S && TARGET_NORMAL_MODE\n\
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1)\n\
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3)\n\
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5))",
    MAYBE_EVAL (TARGET_H8300S && TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1)
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3)
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[1]) <= 15",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) <= 15) },
  { "h8300_can_use_return_insn_p ()",
    MAYBE_EVAL (h8300_can_use_return_insn_p ()) },
  { "reload_completed",
    MAYBE_EVAL (reload_completed) },
  { "(TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[1]) >= 16&& reload_completed",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16&& reload_completed) },
  { "TARGET_H8300\n\
   && INTVAL (operands[2]) < 16",
    MAYBE_EVAL (TARGET_H8300
   && INTVAL (operands[2]) < 16) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && exact_log2 (INTVAL (operands[3])) < 16\n\
   && INTVAL (operands[2]) + exact_log2 (INTVAL (operands[3])) == 31",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && exact_log2 (INTVAL (operands[3])) < 16
   && INTVAL (operands[2]) + exact_log2 (INTVAL (operands[3])) == 31) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && REG_P (operands[0]) && REG_P (operands[1])\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && !CONST_OK_FOR_L (INTVAL (operands[2]))\n\
   && !CONST_OK_FOR_N (INTVAL (operands[2]))\n\
   && ((INTVAL (operands[2]) & 0xff) == INTVAL (operands[2])\n\
       || (INTVAL (operands[2]) & 0xff00) == INTVAL (operands[2])\n\
       || INTVAL (operands[2]) == 0xffff\n\
       || INTVAL (operands[2]) == 0xfffe)",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) != REGNO (operands[1])
   && !CONST_OK_FOR_L (INTVAL (operands[2]))
   && !CONST_OK_FOR_N (INTVAL (operands[2]))
   && ((INTVAL (operands[2]) & 0xff) == INTVAL (operands[2])
       || (INTVAL (operands[2]) & 0xff00) == INTVAL (operands[2])
       || INTVAL (operands[2]) == 0xffff
       || INTVAL (operands[2]) == 0xfffe)) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && ((INTVAL (operands[3]) << INTVAL (operands[2])) & ~0xffff) == 0",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && ((INTVAL (operands[3]) << INTVAL (operands[2])) & ~0xffff) == 0) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))) },
  { "TARGET_H8300S && !TARGET_NORMAL_MODE\n\
   && ((REGNO (operands[0]) == 0\n\
	&& REGNO (operands[1]) == 1\n\
	&& REGNO (operands[2]) == 2)\n\
       || (REGNO (operands[0]) == 4\n\
	   && REGNO (operands[1]) == 5\n\
	   && REGNO (operands[2]) == 6))",
    MAYBE_EVAL (TARGET_H8300S && !TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0
	&& REGNO (operands[1]) == 1
	&& REGNO (operands[2]) == 2)
       || (REGNO (operands[0]) == 4
	   && REGNO (operands[1]) == 5
	   && REGNO (operands[2]) == 6))) },
  { "INTVAL (operands[3]) == (255 >> INTVAL (operands[1]))",
    MAYBE_EVAL (INTVAL (operands[3]) == (255 >> INTVAL (operands[1]))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[1]) < 16\n\
   && INTVAL (operands[3]) < 16",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16
   && INTVAL (operands[3]) < 16) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[1]) >= 16",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16) },
  { "(TARGET_H8300H || TARGET_H8300S)",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)) },
  { "TARGET_H8300S && !TARGET_NORMAL_MODE",
    MAYBE_EVAL (TARGET_H8300S && !TARGET_NORMAL_MODE) },
  { "TARGET_H8300S && TARGET_NORMAL_MODE",
    MAYBE_EVAL (TARGET_H8300S && TARGET_NORMAL_MODE) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && !reg_overlap_mentioned_p (operands[2], operands[1])\n\
   && REGNO (operands[0]) == REGNO (operands[2])",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[2], operands[1])
   && REGNO (operands[0]) == REGNO (operands[2])) },
  { "TARGET_H8300",
    MAYBE_EVAL (TARGET_H8300) },
  { "(TARGET_H8300H || TARGET_H8300S)&& reload_completed\n\
   && !EXTRA_CONSTRAINT (operands[0], 'U')",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)&& reload_completed
   && !EXTRA_CONSTRAINT (operands[0], 'U')) },
  { "(TARGET_H8300H || TARGET_H8300S)&& reload_completed",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)&& reload_completed) },
  { "TARGET_H8300\n\
   && INTVAL (operands[2]) < 16\n\
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])",
    MAYBE_EVAL (TARGET_H8300
   && INTVAL (operands[2]) < 16
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && !peep2_reg_dead_p (1, operands[0])\n\
   && (INTVAL (operands[1]) == 1\n\
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))\n\
   && !same_cmp_preceding_p (insn)",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && !peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))
   && !same_cmp_preceding_p (insn)) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && flow2_completed\n\
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))\n\
   && REGNO (operands[0]) != REGNO (operands[1])",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && flow2_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])) },
  { "TARGET_H8300\n\
   && (register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    MAYBE_EVAL (TARGET_H8300
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))) },
  { "TARGET_H8300H && TARGET_H8300S && TARGET_NORMAL_MODE",
    MAYBE_EVAL (TARGET_H8300H && TARGET_H8300S && TARGET_NORMAL_MODE) },
  { "(INTVAL (operands[3]) & 0xffff) != 0",
    MAYBE_EVAL ((INTVAL (operands[3]) & 0xffff) != 0) },
  { "register_operand (operands[0], QImode)\n\
   || single_zero_operand (operands[2], QImode)",
    MAYBE_EVAL (register_operand (operands[0], QImode)
   || single_zero_operand (operands[2], QImode)) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && peep2_reg_dead_p (1, operands[0])",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])) },
  { "TARGET_H8300H",
    MAYBE_EVAL (TARGET_H8300H) },
  { "TARGET_H8300H && TARGET_H8300S && !TARGET_NORMAL_MODE",
    MAYBE_EVAL (TARGET_H8300H && TARGET_H8300S && !TARGET_NORMAL_MODE) },
  { "TARGET_H8300S\n\
   && ((REGNO (operands[0]) == 0\n\
	&& REGNO (operands[1]) == 1\n\
	&& REGNO (operands[2]) == 2)\n\
       || (REGNO (operands[0]) == 4\n\
	   && REGNO (operands[1]) == 5\n\
	   && REGNO (operands[2]) == 6))",
    MAYBE_EVAL (TARGET_H8300S
   && ((REGNO (operands[0]) == 0
	&& REGNO (operands[1]) == 1
	&& REGNO (operands[2]) == 2)
       || (REGNO (operands[0]) == 4
	   && REGNO (operands[1]) == 5
	   && REGNO (operands[2]) == 6))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && (INTVAL (operands[3]) & ~0xffff) == 0",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && (INTVAL (operands[3]) & ~0xffff) == 0) },
  { "peep2_reg_dead_p (2, operands[0])",
    MAYBE_EVAL (peep2_reg_dead_p (2, operands[0])) },
  { "TARGET_H8300S && TARGET_NORMAL_MODE\n\
   && ((REGNO (operands[0]) == 0\n\
	&& REGNO (operands[1]) == 1\n\
	&& REGNO (operands[2]) == 2)\n\
       || (REGNO (operands[0]) == 4\n\
	   && REGNO (operands[1]) == 5\n\
	   && REGNO (operands[2]) == 6))",
    MAYBE_EVAL (TARGET_H8300S && TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0
	&& REGNO (operands[1]) == 1
	&& REGNO (operands[2]) == 2)
       || (REGNO (operands[0]) == 4
	   && REGNO (operands[1]) == 5
	   && REGNO (operands[2]) == 6))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[2]) < 16",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16) },
  { "TARGET_H8300S\n\
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1)\n\
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3)\n\
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5))",
    MAYBE_EVAL (TARGET_H8300S
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1)
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3)
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && peep2_reg_dead_p (1, operands[0])\n\
   && (INTVAL (operands[1]) == 1\n\
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[2]) <= 15\n\
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)&& reload_completed",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)&& reload_completed) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && peep2_reg_dead_p (1, operands[0])\n\
   && ((INTVAL (operands[1]) | 0x00ff) == -1\n\
	|| (INTVAL (operands[1]) | 0xff00) == -1)\n\
   && INTVAL (operands[1]) != -1\n\
   && INTVAL (operands[1]) != -2",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((INTVAL (operands[1]) | 0x00ff) == -1
	|| (INTVAL (operands[1]) | 0xff00) == -1)
   && INTVAL (operands[1]) != -1
   && INTVAL (operands[1]) != -2) },
  { "TARGET_H8300H || TARGET_H8300S",
    MAYBE_EVAL (TARGET_H8300H || TARGET_H8300S) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && peep2_reg_dead_p (1, operands[0])\n\
   && (INTVAL (operands[1]) == -2147483647 - 1\n\
       || (TARGET_H8300S && INTVAL (operands[1]) == 1073741824))",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == -2147483647 - 1
       || (TARGET_H8300S && INTVAL (operands[1]) == 1073741824))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && (GET_MODE (operands[0]) == QImode\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == SImode)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && REGNO (operands[0]) == REGNO (operands[2])\n\
   && !reg_overlap_mentioned_p (operands[2], operands[1])\n\
   && !(GET_MODE (operands[1]) != QImode\n\
	&& GET_CODE (operands[1]) == MEM\n\
	&& MEM_VOLATILE_P (operands[1]))",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && (GET_MODE (operands[0]) == QImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == SImode)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && REGNO (operands[0]) == REGNO (operands[2])
   && !reg_overlap_mentioned_p (operands[2], operands[1])
   && !(GET_MODE (operands[1]) != QImode
	&& GET_CODE (operands[1]) == MEM
	&& MEM_VOLATILE_P (operands[1]))) },
  { "register_operand (operands[0], QImode)\n\
   || single_one_operand (operands[2], QImode)",
    MAYBE_EVAL (register_operand (operands[0], QImode)
   || single_one_operand (operands[2], QImode)) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && peep2_reg_dead_p (1, operands[0])\n\
   && (INTVAL (operands[1]) == -131072\n\
       || INTVAL (operands[1]) == -65536\n\
       || INTVAL (operands[1]) == 65536\n\
       || INTVAL (operands[1]) == 131072)",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == -131072
       || INTVAL (operands[1]) == -65536
       || INTVAL (operands[1]) == 65536
       || INTVAL (operands[1]) == 131072)) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && flow2_completed\n\
   && !(find_regno_note (insn, REG_DEAD, REGNO (operands[1]))\n\
        && REGNO (operands[0]) != REGNO (operands[1]))",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && flow2_completed
   && !(find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
        && REGNO (operands[0]) != REGNO (operands[1]))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && REG_P (operands[0]) && REG_P (operands[2])\n\
   && REGNO (operands[0]) != REGNO (operands[2])\n\
   && (CONST_OK_FOR_L (INTVAL (operands[1]))\n\
       || CONST_OK_FOR_N (INTVAL (operands[1])))",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && REG_P (operands[0]) && REG_P (operands[2])
   && REGNO (operands[0]) != REGNO (operands[2])
   && (CONST_OK_FOR_L (INTVAL (operands[1]))
       || CONST_OK_FOR_N (INTVAL (operands[1])))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && !peep2_reg_dead_p (1, operands[0])\n\
   && !same_cmp_following_p (insn)",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && !peep2_reg_dead_p (1, operands[0])
   && !same_cmp_following_p (insn)) },
  { "INTVAL (operands[3]) == (255 << INTVAL (operands[1]))",
    MAYBE_EVAL (INTVAL (operands[3]) == (255 << INTVAL (operands[1]))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && peep2_reg_dead_p (1, operands[0])\n\
   && ((INTVAL (operands[1]) & 0x00ff) == INTVAL (operands[1])\n\
       || (INTVAL (operands[1]) & 0xff00) == INTVAL (operands[1])\n\
       || INTVAL (operands[1]) == 0x0000ffff)\n\
   && INTVAL (operands[1]) != 1\n\
   && INTVAL (operands[1]) != 2",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((INTVAL (operands[1]) & 0x00ff) == INTVAL (operands[1])
       || (INTVAL (operands[1]) & 0xff00) == INTVAL (operands[1])
       || INTVAL (operands[1]) == 0x0000ffff)
   && INTVAL (operands[1]) != 1
   && INTVAL (operands[1]) != 2) },
  { "TARGET_H8300 && flow2_completed",
    MAYBE_EVAL (TARGET_H8300 && flow2_completed) },
  { "(TARGET_H8300H || TARGET_H8300S) && TARGET_NORMAL_MODE",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S) && TARGET_NORMAL_MODE) },
  { "REG_P (operands[0]) && REG_P (operands[2])\n\
   && REGNO (operands[0]) != REGNO (operands[2])\n\
   && (CONST_OK_FOR_J (INTVAL (operands[1]))\n\
       || CONST_OK_FOR_L (INTVAL (operands[1]))\n\
       || CONST_OK_FOR_N (INTVAL (operands[1])))",
    MAYBE_EVAL (REG_P (operands[0]) && REG_P (operands[2])
   && REGNO (operands[0]) != REGNO (operands[2])
   && (CONST_OK_FOR_J (INTVAL (operands[1]))
       || CONST_OK_FOR_L (INTVAL (operands[1]))
       || CONST_OK_FOR_N (INTVAL (operands[1])))) },
  { "peep2_reg_dead_p (3, operands[0])\n\
   && (~INTVAL (operands[1]) & INTVAL (operands[2])) == 0",
    MAYBE_EVAL (peep2_reg_dead_p (3, operands[0])
   && (~INTVAL (operands[1]) & INTVAL (operands[2])) == 0) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[2]) <= 15\n\
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)) },
  { "TARGET_H8300S && !TARGET_NORMAL_MODE\n\
   && REGNO (operands[0]) == 0\n\
   && REGNO (operands[1]) == 1\n\
   && REGNO (operands[2]) == 2\n\
   && REGNO (operands[3]) == 3",
    MAYBE_EVAL (TARGET_H8300S && !TARGET_NORMAL_MODE
   && REGNO (operands[0]) == 0
   && REGNO (operands[1]) == 1
   && REGNO (operands[2]) == 2
   && REGNO (operands[3]) == 3) },
  { "TARGET_H8300S && TARGET_NORMAL_MODE\n\
   && REGNO (operands[0]) == 0\n\
   && REGNO (operands[1]) == 1\n\
   && REGNO (operands[2]) == 2\n\
   && REGNO (operands[3]) == 3",
    MAYBE_EVAL (TARGET_H8300S && TARGET_NORMAL_MODE
   && REGNO (operands[0]) == 0
   && REGNO (operands[1]) == 1
   && REGNO (operands[2]) == 2
   && REGNO (operands[3]) == 3) },
  { "TARGET_H8300\n\
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])",
    MAYBE_EVAL (TARGET_H8300
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && (register_operand (operands[0], SFmode)\n\
       || register_operand (operands[1], SFmode))",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))) },
  { "TARGET_H8300\n\
   && (register_operand (operands[0], SFmode)\n\
       || register_operand (operands[1], SFmode))",
    MAYBE_EVAL (TARGET_H8300
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))) },
  { "flow2_completed\n\
   && !find_regno_note (insn, REG_DEAD, REGNO (operands[1]))",
    MAYBE_EVAL (flow2_completed
   && !find_regno_note (insn, REG_DEAD, REGNO (operands[1]))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && peep2_reg_dead_p (1, operands[0])\n\
   && ((TARGET_H8300H && INTVAL (operands[1]) == 3)\n\
       || INTVAL (operands[1]) == 7\n\
       || INTVAL (operands[1]) == 15\n\
       || INTVAL (operands[1]) == 31\n\
       || INTVAL (operands[1]) == 63\n\
       || INTVAL (operands[1]) == 127\n\
       || INTVAL (operands[1]) == 255)",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((TARGET_H8300H && INTVAL (operands[1]) == 3)
       || INTVAL (operands[1]) == 7
       || INTVAL (operands[1]) == 15
       || INTVAL (operands[1]) == 31
       || INTVAL (operands[1]) == 63
       || INTVAL (operands[1]) == 127
       || INTVAL (operands[1]) == 255)) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && !(GET_CODE (operands[1]) == MEM && MEM_VOLATILE_P (operands[1]))",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !(GET_CODE (operands[1]) == MEM && MEM_VOLATILE_P (operands[1]))) },
  { "TARGET_H8300\n\
   && operands[0] != stack_pointer_rtx",
    MAYBE_EVAL (TARGET_H8300
   && operands[0] != stack_pointer_rtx) },
  { "TARGET_H8300\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))\n\
   && !(GET_CODE (operands[0]) == MEM\n\
	&& GET_CODE (XEXP (operands[0], 0)) == PRE_DEC\n\
	&& GET_CODE (XEXP (XEXP (operands[0], 0), 0)) == REG\n\
	&& GET_CODE (operands[1]) == REG\n\
	&& REGNO (XEXP (XEXP (operands[0], 0), 0)) == REGNO (operands[1]))",
    MAYBE_EVAL (TARGET_H8300
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))
   && !(GET_CODE (operands[0]) == MEM
	&& GET_CODE (XEXP (operands[0], 0)) == PRE_DEC
	&& GET_CODE (XEXP (XEXP (operands[0], 0), 0)) == REG
	&& GET_CODE (operands[1]) == REG
	&& REGNO (XEXP (XEXP (operands[0], 0), 0)) == REGNO (operands[1]))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && reload_completed",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && reload_completed) },
  { "INTVAL (operands[3]) == (65535 << INTVAL (operands[1]))",
    MAYBE_EVAL (INTVAL (operands[3]) == (65535 << INTVAL (operands[1]))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1])) },
  { "TARGET_H8300\n\
   && (register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    MAYBE_EVAL (TARGET_H8300
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))) },
  { "INTVAL (operands[3]) == (65535 >> INTVAL (operands[1]))",
    MAYBE_EVAL (INTVAL (operands[3]) == (65535 >> INTVAL (operands[1]))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && reload_completed",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && reg_overlap_mentioned_p (operands[0], operands[1])
   && reload_completed) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && (register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))) },
  { "(TARGET_H8300S || TARGET_H8300H)\n\
   && (register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))\n\
   && !(GET_CODE (operands[0]) == MEM\n\
	&& GET_CODE (XEXP (operands[0], 0)) == PRE_DEC\n\
	&& GET_CODE (XEXP (XEXP (operands[0], 0), 0)) == REG\n\
	&& GET_CODE (operands[1]) == REG\n\
	&& REGNO (XEXP (XEXP (operands[0], 0), 0)) == REGNO (operands[1]))",
    MAYBE_EVAL ((TARGET_H8300S || TARGET_H8300H)
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))
   && !(GET_CODE (operands[0]) == MEM
	&& GET_CODE (XEXP (operands[0], 0)) == PRE_DEC
	&& GET_CODE (XEXP (XEXP (operands[0], 0), 0)) == REG
	&& GET_CODE (operands[1]) == REG
	&& REGNO (XEXP (XEXP (operands[0], 0), 0)) == REGNO (operands[1]))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && reload_completed\n\
   && byte_accesses_mergeable_p (XEXP (operands[2], 0), XEXP (operands[1], 0))",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && reload_completed
   && byte_accesses_mergeable_p (XEXP (operands[2], 0), XEXP (operands[1], 0))) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && INTVAL (operands[2]) < 16\n\
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])) },
  { "(TARGET_H8300H || TARGET_H8300S)\n\
   && !MEM_VOLATILE_P (operands[1])\n\
   && (INTVAL (operands[2]) & ~0xffff) == 0\n\
   && INTVAL (operands[2]) != 255",
    MAYBE_EVAL ((TARGET_H8300H || TARGET_H8300S)
   && !MEM_VOLATILE_P (operands[1])
   && (INTVAL (operands[2]) & ~0xffff) == 0
   && INTVAL (operands[2]) != 255) },
  { "TARGET_MAC",
    MAYBE_EVAL (TARGET_MAC) },
};

const size_t n_insn_conditions = 83;
const int insn_elision_unavailable = 0;

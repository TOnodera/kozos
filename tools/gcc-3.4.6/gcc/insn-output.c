/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"

static const char * const output_3[] = {
  "sub.b	%X0,%X0",
  "mov.b	%R1,%X0",
  "mov.b	%X1,%R0",
  "mov.b	%R1,%X0",
  "mov.b	%R1,%X0",
  "mov.b	%X1,%R0",
};

static const char * const output_4[] = {
  "sub.b	%X0,%X0",
  "mov.b	%R1,%X0",
  "mov.b	%X1,%R0",
  "mov.b	%R1,%X0",
  "mov.b	%R1,%X0",
  "mov.b	%X1,%R0",
};

static const char * const output_5[] = {
  "sub.b	%X0,%X0",
  "mov.b	%X1,%X0",
  "mov.b	%R1,%X0",
  "mov.b	%X1,%X0",
  "mov.b	%R1,%X0",
};

static const char * const output_8[] = {
  "sub.w	%T0,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
};

static const char * const output_9[] = {
  "sub.w	%T0,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
};

static const char * const output_10[] = {
  "sub.w	%T0,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
  "mov.w	%T1,%T0",
};

static const char *
output_11 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  unsigned int rn = -1;
  switch (which_alternative)
    {
    case 0:
      return "sub.w	%e0,%e0\n\tsub.w	%f0,%f0";
    case 1:
      if (REGNO (operands[0]) < REGNO (operands[1]))
	return "mov.w	%e1,%e0\n\tmov.w	%f1,%f0";
      else
	return "mov.w	%f1,%f0\n\tmov.w	%e1,%e0";
    case 2:
      /* Make sure we don't trample the register we index with.  */
      if (GET_CODE (operands[1]) == MEM)
	{
	  rtx inside = XEXP (operands[1], 0);
	  if (REG_P (inside))
	    {
	      rn = REGNO (inside);
	    }
	  else if (GET_CODE (inside) == PLUS)
	    {
	      rtx lhs = XEXP (inside, 0);
	      rtx rhs = XEXP (inside, 1);
	      if (REG_P (lhs)) rn = REGNO (lhs);
	      if (REG_P (rhs)) rn = REGNO (rhs);
	    }
	}
      if (rn == REGNO (operands[0]))
	{
	  /* Move the second word first.  */
	  return "mov.w	%f1,%f0\n\tmov.w	%e1,%e0";
	}
      else
	{
	  if (GET_CODE (operands[1]) == CONST_INT)
	    {
	      /* If either half is zero, use sub.w to clear that
		 half.  */
	      if ((INTVAL (operands[1]) & 0xffff) == 0)
		return "mov.w	%e1,%e0\n\tsub.w	%f0,%f0";
	      if (((INTVAL (operands[1]) >> 16) & 0xffff) == 0)
		return "sub.w	%e0,%e0\n\tmov.w	%f1,%f0";
	      /* If the upper half and the lower half are the same,
		 copy one half to the other.  */
	      if ((INTVAL (operands[1]) & 0xffff)
		  == ((INTVAL (operands[1]) >> 16) & 0xffff))
		return "mov.w\t%e1,%e0\n\tmov.w\t%e0,%f0";
	    }
	  return "mov.w	%e1,%e0\n\tmov.w	%f1,%f0";
	}
    case 3:
      return "mov.w	%e1,%e0\n\tmov.w	%f1,%f0";
    case 4:
      return "mov.w	%f1,%T0\n\tmov.w	%e1,%T0";
    case 5:
      return "mov.w	%T1,%e0\n\tmov.w	%T1,%f0";
    default:
      abort ();
    }
}
}

static const char *
output_12 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  /* Copy of the movsi stuff.  */
  unsigned int rn = -1;
  switch (which_alternative)
    {
    case 0:
      return "sub.w	%e0,%e0\n\tsub.w	%f0,%f0";
    case 1:
      if (REGNO (operands[0]) < REGNO (operands[1]))
	return "mov.w	%e1,%e0\n\tmov.w	%f1,%f0";
      else
	return "mov.w	%f1,%f0\n\tmov.w	%e1,%e0";
    case 2:
      /* Make sure we don't trample the register we index with.  */
      if (GET_CODE (operands[1]) == MEM)
	{
	  rtx inside = XEXP (operands[1], 0);
	  if (REG_P (inside))
	    {
	      rn = REGNO (inside);
	    }
	  else if (GET_CODE (inside) == PLUS)
	    {
	      rtx lhs = XEXP (inside, 0);
	      rtx rhs = XEXP (inside, 1);
	      if (REG_P (lhs)) rn = REGNO (lhs);
	      if (REG_P (rhs)) rn = REGNO (rhs);
	    }
	}
      if (rn == REGNO (operands[0]))
	/* Move the second word first.  */
	return "mov.w	%f1,%f0\n\tmov.w	%e1,%e0";
      else
	/* Move the first word first.  */
	return "mov.w	%e1,%e0\n\tmov.w	%f1,%f0";

    case 3:
      return "mov.w	%e1,%e0\n\tmov.w	%f1,%f0";
    case 4:
      return "mov.w	%f1,%T0\n\tmov.w	%e1,%T0";
    case 5:
      return "mov.w	%T1,%e0\n\tmov.w	%T1,%f0";
    default:
      abort ();
    }
}
}

static const char *
output_13 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  switch (which_alternative)
    {
    case 0:
      return "sub.l	%S0,%S0";
    case 7:
      return "clrmac";
    case 8:
      return "clrmac\n\tldmac %1,macl";
    case 9:
      return "stmac	macl,%0";
    default:
      if (GET_CODE (operands[1]) == CONST_INT)
	{
	  int val = INTVAL (operands[1]);

	  /* Look for constants which can be made by adding an 8-bit
	     number to zero in one of the two low bytes.  */
	  if (val == (val & 0xff))
	    {
	      operands[1] = GEN_INT ((char) val & 0xff);
	      return "sub.l\t%S0,%S0\n\tadd.b\t%1,%w0";
	    }

	  if (val == (val & 0xff00))
	    {
	      operands[1] = GEN_INT ((char) (val >> 8) & 0xff);
	      return "sub.l\t%S0,%S0\n\tadd.b\t%1,%x0";
	    }

	  /* Look for constants that can be obtained by subs, inc, and
	     dec to 0.  */
	  switch (val & 0xffffffff)
	    {
	    case 0xffffffff:
	      return "sub.l\t%S0,%S0\n\tsubs\t#1,%S0";
	    case 0xfffffffe:
	      return "sub.l\t%S0,%S0\n\tsubs\t#2,%S0";
	    case 0xfffffffc:
	      return "sub.l\t%S0,%S0\n\tsubs\t#4,%S0";

	    case 0x0000ffff:
	      return "sub.l\t%S0,%S0\n\tdec.w\t#1,%f0";
	    case 0x0000fffe:
	      return "sub.l\t%S0,%S0\n\tdec.w\t#2,%f0";

	    case 0xffff0000:
	      return "sub.l\t%S0,%S0\n\tdec.w\t#1,%e0";
	    case 0xfffe0000:
	      return "sub.l\t%S0,%S0\n\tdec.w\t#2,%e0";

	    case 0x00010000:
	      return "sub.l\t%S0,%S0\n\tinc.w\t#1,%e0";
	    case 0x00020000:
	      return "sub.l\t%S0,%S0\n\tinc.w\t#2,%e0";
	    }
	}
    }
   return "mov.l	%S1,%S0";
}
}

static const char * const output_14[] = {
  "sub.l	%S0,%S0",
  "mov.l	%S1,%S0",
  "mov.l	%S1,%S0",
  "mov.l	%S1,%S0",
  "mov.l	%S1,%S0",
  "mov.l	%S1,%S0",
};

static const char * const output_17[] = {
  "btst\t%Z1,%Y0",
  "btst\t%Z1,%Y0",
  "#",
};

static const char * const output_21[] = {
  "btst\t%w1,%X0",
  "btst\t%w1,%X0",
  "#",
};

static const char * const output_32[] = {
  "adds	%2,%T0",
  "subs	%G2,%T0",
  "add.b	%t2,%t0",
  "add.b	%s2,%s0\n\taddx	%t2,%t0",
  "add.w	%T2,%T0",
};

static const char * const output_33[] = {
  "adds	%2,%S0",
  "subs	%G2,%S0",
  "add.b	%t2,%t0",
  "add.w	%T2,%T0",
  "add.w	%T2,%T0",
};

static const char * const output_34[] = {
  "inc.w	%2,%T0",
  "dec.w	%G2,%T0",
};

static const char *
output_35 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_plussi (operands);
}

static const char *
output_36 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_plussi (operands);
}

static const char * const output_37[] = {
  "inc.l	%2,%S0",
  "dec.l	%G2,%S0",
};

static const char * const output_39[] = {
  "sub.w	%T2,%T0",
  "add.b	%E2,%s0\n\taddx	%F2,%t0",
};

static const char * const output_40[] = {
  "sub.w	%T2,%T0",
  "sub.w	%T2,%T0",
};

static const char * const output_42[] = {
  "sub.l	%S2,%S0",
  "sub.l	%S2,%S0",
};

static const char *
output_49 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  if (find_reg_note (insn, REG_UNUSED, operands[3]))
    return "divxu.b\t%X2,%T0";
  else
    return "divxu.b\t%X2,%T0\n\tmov.b\t%t0,%s3";
}
}

static const char *
output_50 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  if (find_reg_note (insn, REG_UNUSED, operands[3]))
    return "divxs.b\t%X2,%T0";
  else
    return "divxs.b\t%X2,%T0\n\tmov.b\t%t0,%s3";
}
}

static const char *
output_51 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  if (find_reg_note (insn, REG_UNUSED, operands[3]))
    return "divxu.w\t%T2,%S0";
  else
    return "divxu.w\t%T2,%S0\n\tmov.w\t%e0,%f3";
}
}

static const char *
output_52 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  if (find_reg_note (insn, REG_UNUSED, operands[3]))
    return "divxs.w\t%T2,%S0";
  else
    return "divxs.w\t%T2,%S0\n\tmov.w\t%e0,%f3";
}
}

static const char * const output_53[] = {
  "and	%X2,%X0",
  "bclr	%W2,%R0",
};

static const char *
output_55 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  operands[3] = GEN_INT (INTVAL (operands[3]) & 0xffff);
  if (INTVAL (operands[3]) > 128)
    {
      operands[3] = GEN_INT (INTVAL (operands[3]) >> 8);
      return "bld\t%V3,%t2\n\tbor\t%V3,%t0\n\tbst\t%V3,%t0";
    }
  return "bld\t%V3,%s2\n\tbor\t%V3,%s0\n\tbst\t%V3,%s0";
}
}

static const char *
output_56 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  operands[3] = GEN_INT (INTVAL (operands[3]) & 0xffff);
  if (INTVAL (operands[3]) > 128)
    {
      operands[3] = GEN_INT (INTVAL (operands[3]) >> 8);
      return "bld\t%V3,%x2\n\tbor\t%V3,%x0\n\tbst\t%V3,%x0";
    }
  return "bld\t%V3,%w2\n\tbor\t%V3,%w0\n\tbst\t%V3,%w0";
}
}

static const char * const output_58[] = {
  "or\t%X2,%X0",
  "bset\t%V2,%R0",
};

static const char * const output_59[] = {
  "xor\t%X2,%X0",
  "bnot\t%V2,%R0",
};

static const char *
output_60 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_logical_op (HImode, operands);
}

static const char *
output_61 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_logical_op (SImode, operands);
}

static const char *
output_74 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  if ((cc_status.flags & CC_OVERFLOW_UNUSABLE) != 0
      && (GET_CODE (operands[1]) == GT
	  || GET_CODE (operands[1]) == GE
	  || GET_CODE (operands[1]) == LE
	  || GET_CODE (operands[1]) == LT))
    {
      cc_status.flags &= ~CC_OVERFLOW_UNUSABLE;
      return 0;
    }

  if (get_attr_length (insn) == 2)
    return "b%j1	%l0";
  else if (get_attr_length (insn) == 4)
    return "b%j1	%l0:16";
  else
    return "b%k1	.Lh8BR%=\n\tjmp	@%l0\n.Lh8BR%=:";
}
}

static const char *
output_75 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  if ((cc_status.flags & CC_OVERFLOW_UNUSABLE) != 0
      && (GET_CODE (operands[1]) == GT
	  || GET_CODE (operands[1]) == GE
	  || GET_CODE (operands[1]) == LE
	  || GET_CODE (operands[1]) == LT))
    {
      cc_status.flags &= ~CC_OVERFLOW_UNUSABLE;
      return 0;
    }

  if (get_attr_length (insn) == 2)
    return "b%k1	%l0";
  else if (get_attr_length (insn) == 4)
    return "b%k1	%l0:16";
  else
    return "b%j1	.Lh8BR%=\n\tjmp	@%l0\n.Lh8BR%=:";
}
}

static const char *
output_76 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  if (get_attr_length (insn) == 2)
    return "bra	%l0";
  else if (get_attr_length (insn) == 4)
    return "bra	%l0:16";
  else
    return "jmp	@%l0";
}
}

static const char *
output_83 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  if (GET_CODE (XEXP (operands[0], 0)) == SYMBOL_REF
      && SYMBOL_REF_FLAG (XEXP (operands[0], 0)))
    return "jsr\t@%0:8";
  else
    return "jsr\t%0";
}
}

static const char *
output_84 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  if (GET_CODE (XEXP (operands[1], 0)) == SYMBOL_REF
      && SYMBOL_REF_FLAG (XEXP (operands[1], 0)))
    return "jsr\t@%1:8";
  else
    return "jsr\t%1";
}
}

static const char *
output_98 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  if (h8300_current_function_interrupt_function_p ())
    return "rte";
  else
    return "rts";
}
}

static const char *
output_99 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  if (TARGET_H8300)
    return "subs\t#2,r7\n\tmov.w\tr0,@-r7\n\tstc\tccr,r0l\n\tmov.b\tr0l,@(2,r7)\n\tmov.w\t@r7+,r0\n\torc\t#128,ccr";
  else if (TARGET_H8300H)
    return "mov.l\ter0,@-er7\n\tstc\tccr,r0l\n\tmov.b\tr0l,@(4,er7)\n\tmov.l\t@er7+,er0\n\torc\t#128,ccr";
  else if (TARGET_H8300S)
    return "stc\texr,@-er7\n\tmov.l\ter0,@-er7\n\tstc\tccr,r0l\n\tmov.b\tr0l,@(6,er7)\n\tmov.l\t@er7+,er0\n\torc\t#128,ccr";
    abort ();
}
}

static const char * const output_100[] = {
  "mov.b	#0,%t0",
  "#",
};

static const char * const output_101[] = {
  "extu.w	%T0",
  "#",
};

static const char * const output_102[] = {
  "mov.b	#0,%x0\n\tsub.w	%e0,%e0",
  "mov.b	%R1,%w0\n\tmov.b	#0,%x0\n\tsub.w	%e0,%e0",
};

static const char * const output_104[] = {
  "sub.w	%e0,%e0",
  "mov.w	%f1,%f0\n\tsub.w	%e0,%e0",
  "mov.w	%e1,%f0\n\tsub.w	%e0,%e0",
};

static const char * const output_106[] = {
  "bld	#7,%s0\n\tsubx	%t0,%t0",
  "mov.b	%R1,%s0\n\tbld	#7,%s0\n\tsubx	%t0,%t0",
};

static const char * const output_108[] = {
  "bld	#7,%w0\n\tsubx	%x0,%x0\n\tsubx	%y0,%y0\n\tsubx	%z0,%z0",
  "mov.b	%R1,%w0\n\tbld	#7,%w0\n\tsubx	%x0,%x0\n\tsubx	%y0,%y0\n\tsubx	%z0,%z0",
};

static const char * const output_110[] = {
  "bld	#7,%x0\n\tsubx	%y0,%y0\n\tsubx	%z0,%z0",
  "mov.w	%T1,%f0\n\tbld	#7,%x0\n\tsubx	%y0,%y0\n\tsubx	%z0,%z0",
};

static const char *
output_112 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_a_shift (operands);
}

static const char *
output_113 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_a_shift (operands);
}

static const char *
output_114 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_a_shift (operands);
}

static const char *
output_115 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_a_rotate (ROTATE, operands);
}

static const char *
output_116 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_a_rotate (ROTATE, operands);
}

static const char *
output_117 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_a_rotate (ROTATE, operands);
}

static const char *
output_120 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_simode_bld (0, operands);
}

static const char *
output_121 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_simode_bld (0, operands);
}

static const char *
output_122 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_simode_bld (1, operands);
}

static const char *
output_123 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_simode_bld (1, operands);
}

static const char * const output_132[] = {
  "mov.b\t%x1,%w0\n\textu.w\t%f0\n\textu.l\t%S0",
  "sub.l\t%S0,%S0\n\tmov.b\t%x1,%w0",
};

static const char *
output_138 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  return "shll.l\t%S0\n\txor.l\t%S0,%S0\n\tbst\t%Z3,%Y0";
}
}

static const char *
output_159 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  rtx srcpos = GEN_INT (exact_log2 (INTVAL (operands[3]))
			- INTVAL (operands[2]));
  rtx dstpos = GEN_INT (exact_log2 (INTVAL (operands[3])));
  operands[2] = srcpos;
  operands[3] = dstpos;
  return "bld\t%Z2,%Y1\n\tbor\t%Z3,%Y0\n\tbst\t%Z3,%Y0";
}
}

static const char *
output_160 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  rtx srcpos = GEN_INT (exact_log2 (INTVAL (operands[3]))
			+ INTVAL (operands[2]));
  rtx dstpos = GEN_INT (exact_log2 (INTVAL (operands[3])));
  operands[2] = srcpos;
  operands[3] = dstpos;
  return "bld\t%Z2,%Y1\n\tbor\t%Z3,%Y0\n\tbst\t%Z3,%Y0";
}
}

static const char *
output_163 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "shll.l\t%S1\n\txor.w\t%T3,%T3\n\tbst\t#6,%s3\n\tor.w\t%T3,%e0";
  else
    return "rotl.l\t%S1\n\trotr.l\t%S1\n\txor.w\t%T3,%T3\n\tbst\t#6,%s3\n\tor.w\t%T3,%e0";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    general_operand_dst,
    "=r,r,<,r,r,m",
    QImode,
    0,
    1
  },
  {
    general_operand_src,
    "I,r>,r,n,m,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r,r,r,r,r",
    QImode,
    1,
    1
  },
  {
    general_operand_src,
    "I,r,n,>,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    general_operand_dst,
    "=r,r,<,r,r,m",
    HImode,
    0,
    1
  },
  {
    general_operand_src,
    "I,r>,r,i,m,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r,r,r,r,r",
    HImode,
    1,
    1
  },
  {
    general_operand_src,
    "I,r,i,>,m",
    HImode,
    0,
    1
  },
  {
    general_operand_dst,
    "=r,r,r,o,<,r",
    SImode,
    0,
    1
  },
  {
    general_operand_src,
    "I,r,io,r,r,>",
    SImode,
    0,
    1
  },
  {
    general_operand_dst,
    "=r,r,r,o,<,r",
    SFmode,
    0,
    1
  },
  {
    general_operand_src,
    "G,r,io,r,r,>",
    SFmode,
    0,
    1
  },
  {
    general_operand_dst,
    "=r,r,r,<,r,r,m,*a,*a,r",
    SImode,
    0,
    1
  },
  {
    general_operand_src,
    "I,r,i,r,>,m,r,I,r,*a",
    SImode,
    0,
    1
  },
  {
    general_operand_dst,
    "=r,r,r,m,<,r",
    SFmode,
    0,
    1
  },
  {
    general_operand_src,
    "G,r,im,r,r,>",
    SFmode,
    0,
    1
  },
  {
    bit_memory_operand,
    "r,U",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "n,n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    general_operand_src,
    "r,U,mn>",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "n,n,n",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,&r",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    general_operand_src,
    "r,U,mn>",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,&r",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "rn",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "r,n",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "r,i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "rn",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%0,0,0,0,0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "L,N,J,n,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    incdec_operand,
    "M,O",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "n,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "i,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    incdec_operand,
    "M,O",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "r,n",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "r,i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    bit_operand,
    "=r,U",
    QImode,
    0,
    1
  },
  {
    bit_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "rn,n",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    single_one_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    single_one_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    single_one_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "rn",
    HImode,
    0,
    1
  },
  {
    bit_operator,
    "",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "rn",
    SImode,
    0,
    1
  },
  {
    bit_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    jump_address_operand,
    "Vr",
    HImode,
    0,
    1
  },
  {
    jump_address_operand,
    "Vr",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "or",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "g",
    HImode,
    0,
    1
  },
  {
    0,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "or",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "g",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    general_operand_src,
    "0,g>",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    general_operand_src,
    "0,g>",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    general_operand_src,
    "0,i,g>",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand_src,
    "0,g>",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    general_operand_src,
    "0,g>",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "R,rn",
    QImode,
    0,
    1
  },
  {
    nshift_operator,
    "",
    QImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,&r",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "S,rn",
    QImode,
    0,
    1
  },
  {
    nshift_operator,
    "",
    HImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,&r",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "T,rn",
    QImode,
    0,
    1
  },
  {
    nshift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,&r",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "?0,r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n,n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "?0,r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n,n",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n,n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    bit_operand,
    "=Ur",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    bit_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    bit_operator,
    "",
    HImode,
    0,
    0
  },
  {
    bit_operand,
    "=Ur",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    bit_operator,
    "",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "S,n",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&r",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    single_one_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    iorxor_operator,
    "",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    iorxor_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    iorxor_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    iorxor_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,&r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    general_operand_src,
    "r,g>",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    single_one_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    general_operand_dst,
    "=rm<",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    general_operand_dst,
    "=rm<",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand_dst,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand_src,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand_dst,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand_src,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand_dst,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand_src,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand_dst,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand_src,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand_src,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    general_operand_src,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    stack_pointer_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_gt_2_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    stack_pointer_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_ge_8_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    two_insn_adds_subs_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    two_insn_adds_subs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    bit_operand,
    "",
    QImode,
    0,
    1
  },
  {
    bit_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    jump_address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand_src,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand_src,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nshift_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    bit_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    0,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    incdec_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    incdec_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_qi_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    incdec_operand,
    "",
    HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    gtle_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    gtle_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    incdec_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gtle_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gtle_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    incdec_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_qi_operand,
    "",
    HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_qi_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_hi_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_qi_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_qi_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    eqne_operator,
    "",
    VOIDmode,
    0,
    0
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  {
    "pushqi1_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%T0,@-r7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pushqi1_h8300,
    &operand_data[1],
    1,
    0,
    1,
    1
  },
  {
    "pushqi1_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.l\t%S0,@-er7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pushqi1_h8300hs,
    &operand_data[1],
    1,
    0,
    1,
    1
  },
  {
    "pushqi1_h8300hs_normal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.l\t%S0,@-er7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pushqi1_h8300hs_normal,
    &operand_data[1],
    1,
    0,
    1,
    1
  },
  {
    "*movqi_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_3 },
#else
    { 0, output_3, 0 },
#endif
    0,
    &operand_data[2],
    2,
    0,
    6,
    2
  },
  {
    "*movqi_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_4 },
#else
    { 0, output_4, 0 },
#endif
    0,
    &operand_data[2],
    2,
    0,
    6,
    2
  },
  {
    "movstrictqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_5 },
#else
    { 0, output_5, 0 },
#endif
    (insn_gen_fn) gen_movstrictqi,
    &operand_data[4],
    2,
    0,
    5,
    2
  },
  {
    "pushhi1_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.l\t%S0,@-er7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pushhi1_h8300hs,
    &operand_data[6],
    1,
    0,
    1,
    1
  },
  {
    "pushhi1_h8300hs_normal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.l\t%S0,@-er7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pushhi1_h8300hs_normal,
    &operand_data[6],
    1,
    0,
    1,
    1
  },
  {
    "*movhi_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_8 },
#else
    { 0, output_8, 0 },
#endif
    0,
    &operand_data[7],
    2,
    0,
    6,
    2
  },
  {
    "*movhi_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_9 },
#else
    { 0, output_9, 0 },
#endif
    0,
    &operand_data[7],
    2,
    0,
    6,
    2
  },
  {
    "movstricthi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_10 },
#else
    { 0, output_10, 0 },
#endif
    (insn_gen_fn) gen_movstricthi,
    &operand_data[9],
    2,
    0,
    5,
    2
  },
  {
    "*movsi_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_11 },
#else
    { 0, 0, output_11 },
#endif
    0,
    &operand_data[11],
    2,
    0,
    6,
    3
  },
  {
    "*movsf_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_12 },
#else
    { 0, 0, output_12 },
#endif
    0,
    &operand_data[13],
    2,
    0,
    6,
    3
  },
  {
    "*movsi_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_13 },
#else
    { 0, 0, output_13 },
#endif
    0,
    &operand_data[15],
    2,
    0,
    10,
    3
  },
  {
    "*movsf_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_14 },
#else
    { 0, output_14, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    6,
    2
  },
  {
    "*h8300.md:616",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "btst	%Z1,%Y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[19],
    2,
    0,
    2,
    1
  },
  {
    "*h8300.md:625",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "btst	%Z1,%Y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[21],
    2,
    0,
    1,
    1
  },
  {
    "*tst_extzv_1_n",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_17 },
#else
    { 0, output_17, 0 },
#endif
    0,
    &operand_data[23],
    3,
    0,
    3,
    2
  },
  {
    "*h8300.md:657",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "btst	%Z1,%Y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[26],
    2,
    0,
    1,
    1
  },
  {
    "*tstsi_upper_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[26],
    3,
    0,
    1,
    1
  },
  {
    "*tstsi_variable_bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "btst	%w1,%w0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[29],
    2,
    0,
    1,
    1
  },
  {
    "*tstsi_variable_bit_qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_21 },
#else
    { 0, output_21, 0 },
#endif
    0,
    &operand_data[31],
    3,
    0,
    3,
    2
  },
  {
    "tstqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b	%X0,%X0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tstqi,
    &operand_data[1],
    1,
    0,
    1,
    1
  },
  {
    "tsthi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w	%T0,%T0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tsthi,
    &operand_data[6],
    1,
    0,
    1,
    1
  },
  {
    "*tsthi_upper",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b	%t0,%t0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[6],
    1,
    0,
    1,
    1
  },
  {
    "tstsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.l	%S0,%S0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tstsi,
    &operand_data[26],
    1,
    0,
    1,
    1
  },
  {
    "*tstsi_upper",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w	%e0,%e0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[26],
    1,
    0,
    1,
    1
  },
  {
    "cmpqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp.b	%X1,%X0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cmpqi,
    &operand_data[34],
    2,
    0,
    1,
    1
  },
  {
    "*cmphi_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp.w	%T1,%T0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[36],
    2,
    0,
    1,
    1
  },
  {
    "*cmphi_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp.w	%T1,%T0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[38],
    2,
    0,
    2,
    1
  },
  {
    "cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp.l	%S1,%S0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cmpsi,
    &operand_data[40],
    2,
    0,
    2,
    1
  },
  {
    "addqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.b	%X2,%X0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addqi3,
    &operand_data[42],
    3,
    0,
    1,
    1
  },
  {
    "*addhi3_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_32 },
#else
    { 0, output_32, 0 },
#endif
    0,
    &operand_data[45],
    3,
    0,
    5,
    2
  },
  {
    "*addhi3_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_33 },
#else
    { 0, output_33, 0 },
#endif
    0,
    &operand_data[45],
    3,
    0,
    5,
    2
  },
  {
    "*addhi3_incdec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_34 },
#else
    { 0, output_34, 0 },
#endif
    0,
    &operand_data[48],
    3,
    0,
    2,
    2
  },
  {
    "*addsi_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_35 },
#else
    { 0, 0, output_35 },
#endif
    0,
    &operand_data[51],
    3,
    0,
    2,
    3
  },
  {
    "*addsi_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_36 },
#else
    { 0, 0, output_36 },
#endif
    0,
    &operand_data[54],
    3,
    0,
    2,
    3
  },
  {
    "*addsi3_incdec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_37 },
#else
    { 0, output_37, 0 },
#endif
    0,
    &operand_data[57],
    3,
    0,
    2,
    2
  },
  {
    "subqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.b	%X2,%X0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subqi3,
    &operand_data[60],
    3,
    0,
    1,
    1
  },
  {
    "*subhi3_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_39 },
#else
    { 0, output_39, 0 },
#endif
    0,
    &operand_data[63],
    3,
    0,
    2,
    2
  },
  {
    "*subhi3_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_40 },
#else
    { 0, output_40, 0 },
#endif
    0,
    &operand_data[63],
    3,
    0,
    2,
    2
  },
  {
    "*subsi3_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.w	%f2,%f0\n\tsubx	%y2,%y0\n\tsubx	%z2,%z0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[66],
    3,
    0,
    1,
    1
  },
  {
    "*subsi3_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_42 },
#else
    { 0, output_42, 0 },
#endif
    0,
    &operand_data[69],
    3,
    0,
    2,
    2
  },
  {
    "mulqihi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulxs.b	%X2,%T0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulqihi3,
    &operand_data[72],
    3,
    0,
    1,
    1
  },
  {
    "mulhisi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulxs.w	%T2,%S0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulhisi3,
    &operand_data[75],
    3,
    0,
    1,
    1
  },
  {
    "umulqihi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulxu	%X2,%T0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulqihi3,
    &operand_data[72],
    3,
    0,
    1,
    1
  },
  {
    "umulhisi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulxu.w	%T2,%S0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulhisi3,
    &operand_data[75],
    3,
    0,
    1,
    1
  },
  {
    "*h8300.md:1076",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "clrmac\n\tmac	@%2+,@%1+",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[78],
    3,
    0,
    1,
    1
  },
  {
    "*h8300.md:1088",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mac	@%2+,@%1+",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[78],
    4,
    0,
    1,
    1
  },
  {
    "udivmodqi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_49 },
#else
    { 0, 0, output_49 },
#endif
    (insn_gen_fn) gen_udivmodqi4,
    &operand_data[82],
    4,
    2,
    1,
    3
  },
  {
    "divmodqi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_50 },
#else
    { 0, 0, output_50 },
#endif
    (insn_gen_fn) gen_divmodqi4,
    &operand_data[82],
    4,
    2,
    1,
    3
  },
  {
    "udivmodhi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_51 },
#else
    { 0, 0, output_51 },
#endif
    (insn_gen_fn) gen_udivmodhi4,
    &operand_data[86],
    4,
    2,
    1,
    3
  },
  {
    "divmodhi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_52 },
#else
    { 0, 0, output_52 },
#endif
    (insn_gen_fn) gen_divmodhi4,
    &operand_data[86],
    4,
    2,
    1,
    3
  },
  {
    "*andqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_53 },
#else
    { 0, output_53, 0 },
#endif
    0,
    &operand_data[90],
    3,
    0,
    2,
    2
  },
  {
    "*andorqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld\t%V3,%X2\n\tbor\t%V3,%X0\n\tbst\t%V3,%X0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[93],
    4,
    0,
    1,
    1
  },
  {
    "*andorhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_55 },
#else
    { 0, 0, output_55 },
#endif
    0,
    &operand_data[97],
    4,
    0,
    1,
    3
  },
  {
    "*andorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_56 },
#else
    { 0, 0, output_56 },
#endif
    0,
    &operand_data[101],
    4,
    0,
    1,
    3
  },
  {
    "*andorsi3_shift_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or.b\t%w2,%x0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[66],
    3,
    0,
    1,
    1
  },
  {
    "*iorqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_58 },
#else
    { 0, output_58, 0 },
#endif
    0,
    &operand_data[90],
    3,
    0,
    2,
    2
  },
  {
    "*xorqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_59 },
#else
    { 0, output_59, 0 },
#endif
    0,
    &operand_data[90],
    3,
    0,
    2,
    2
  },
  {
    "*logicalhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_60 },
#else
    { 0, 0, output_60 },
#endif
    0,
    &operand_data[105],
    4,
    0,
    1,
    3
  },
  {
    "*logicalsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_61 },
#else
    { 0, 0, output_61 },
#endif
    0,
    &operand_data[109],
    4,
    0,
    1,
    3
  },
  {
    "negqi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg	%X0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negqi2,
    &operand_data[60],
    2,
    0,
    1,
    1
  },
  {
    "*neghi2_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg	%T0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[97],
    2,
    0,
    1,
    1
  },
  {
    "*negsi2_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg	%S0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[66],
    2,
    0,
    1,
    1
  },
  {
    "*negsf2_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor.b\t#128,%z0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[113],
    2,
    0,
    1,
    1
  },
  {
    "*negsf2_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor.w\t#32768,%e0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[113],
    2,
    0,
    1,
    1
  },
  {
    "*abssf2_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and.b\t#127,%z0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[113],
    2,
    0,
    1,
    1
  },
  {
    "*abssf2_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and.w\t#32767,%e0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[113],
    2,
    0,
    1,
    1
  },
  {
    "one_cmplqi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not	%X0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplqi2,
    &operand_data[60],
    2,
    0,
    1,
    1
  },
  {
    "*one_cmplhi2_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not	%s0\n\tnot	%t0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[97],
    2,
    0,
    1,
    1
  },
  {
    "*one_cmplhi2_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not	%T0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[97],
    2,
    0,
    1,
    1
  },
  {
    "*one_complsi2_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not	%w0\n\tnot	%x0\n\tnot	%y0\n\tnot	%z0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[66],
    2,
    0,
    1,
    1
  },
  {
    "*one_complsi2_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "not	%S0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[66],
    2,
    0,
    1,
    1
  },
  {
    "branch_true",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_74 },
#else
    { 0, 0, output_74 },
#endif
    (insn_gen_fn) gen_branch_true,
    &operand_data[115],
    2,
    0,
    0,
    3
  },
  {
    "branch_false",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_75 },
#else
    { 0, 0, output_75 },
#endif
    (insn_gen_fn) gen_branch_false,
    &operand_data[115],
    2,
    0,
    0,
    3
  },
  {
    "jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_76 },
#else
    { 0, 0, output_76 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[115],
    1,
    0,
    0,
    3
  },
  {
    "*tablejump_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp	@%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[117],
    2,
    0,
    1,
    1
  },
  {
    "*tablejump_h8300hs_advanced",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp	@%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[119],
    2,
    0,
    1,
    1
  },
  {
    "*tablejump_h8300hs_normal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp @%S0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[117],
    2,
    0,
    1,
    1
  },
  {
    "*indirect_jump_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp	@%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[121],
    1,
    0,
    1,
    1
  },
  {
    "*indirect_jump_h8300hs_advanced",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp @%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[122],
    1,
    0,
    1,
    1
  },
  {
    "*indirect_jump_h8300hs_normal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp @%S0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[121],
    1,
    0,
    1,
    1
  },
  {
    "call",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_83 },
#else
    { 0, 0, output_83 },
#endif
    (insn_gen_fn) gen_call,
    &operand_data[123],
    2,
    0,
    1,
    3
  },
  {
    "call_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_84 },
#else
    { 0, 0, output_84 },
#endif
    (insn_gen_fn) gen_call_value,
    &operand_data[125],
    3,
    0,
    1,
    3
  },
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "stm_h8300s_2_advanced",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm.l\t%S0-%S1,@-er7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stm_h8300s_2_advanced,
    &operand_data[128],
    2,
    0,
    0,
    1
  },
  {
    "stm_h8300s_2_normal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm.l\t%S0-%S1,@-er7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stm_h8300s_2_normal,
    &operand_data[128],
    2,
    0,
    0,
    1
  },
  {
    "stm_h8300s_3_advanced",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm.l\t%S0-%S2,@-er7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stm_h8300s_3_advanced,
    &operand_data[128],
    3,
    0,
    0,
    1
  },
  {
    "stm_h8300s_3_normal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm.l\t%S0-%S2,@-er7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stm_h8300s_3_normal,
    &operand_data[128],
    3,
    0,
    0,
    1
  },
  {
    "stm_h8300s_4_advanced",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm.l\t%S0-%S3,@-er7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stm_h8300s_4_advanced,
    &operand_data[128],
    4,
    0,
    0,
    1
  },
  {
    "stm_h8300s_4_normal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm.l\t%S0-%S3,@-er7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stm_h8300s_4_normal,
    &operand_data[128],
    4,
    0,
    0,
    1
  },
  {
    "ldm_h8300s_2_advanced",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm.l\t@er7+,%S0-%S1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ldm_h8300s_2_advanced,
    &operand_data[128],
    2,
    0,
    0,
    1
  },
  {
    "ldm_h8300s_2_normal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm.l\t@er7+,%S0-%S1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ldm_h8300s_2_normal,
    &operand_data[128],
    2,
    0,
    0,
    1
  },
  {
    "ldm_h8300s_3_advanced",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm.l\t@er7+,%S0-%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ldm_h8300s_3_advanced,
    &operand_data[128],
    3,
    0,
    0,
    1
  },
  {
    "ldm_h8300s_3_normal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm.l\t@er7+,%S0-%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ldm_h8300s_3_normal,
    &operand_data[128],
    3,
    0,
    0,
    1
  },
  {
    "ldm_h8300s_4_advanced",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm.l\t@er7+,%S0-%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ldm_h8300s_4_advanced,
    &operand_data[128],
    4,
    0,
    0,
    1
  },
  {
    "ldm_h8300s_4_normal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm.l\t@er7+,%S0-%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ldm_h8300s_4_normal,
    &operand_data[128],
    4,
    0,
    0,
    1
  },
  {
    "*return_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_98 },
#else
    { 0, 0, output_98 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  {
    "monitor_prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_99 },
#else
    { 0, 0, output_99 },
#endif
    (insn_gen_fn) gen_monitor_prologue,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  {
    "*zero_extendqihi2_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_100 },
#else
    { 0, output_100, 0 },
#endif
    0,
    &operand_data[132],
    2,
    0,
    2,
    2
  },
  {
    "*zero_extendqihi2_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_101 },
#else
    { 0, output_101, 0 },
#endif
    0,
    &operand_data[132],
    2,
    0,
    2,
    2
  },
  {
    "*zero_extendqisi2_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_102 },
#else
    { 0, output_102, 0 },
#endif
    0,
    &operand_data[134],
    2,
    0,
    2,
    2
  },
  {
    "*zero_extendqisi2_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[134],
    2,
    0,
    2,
    1
  },
  {
    "*zero_extendhisi2_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_104 },
#else
    { 0, output_104, 0 },
#endif
    0,
    &operand_data[136],
    2,
    0,
    3,
    2
  },
  {
    "*zero_extendhisi2_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "extu.l	%S0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[138],
    2,
    0,
    1,
    1
  },
  {
    "*extendqihi2_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_106 },
#else
    { 0, output_106, 0 },
#endif
    0,
    &operand_data[132],
    2,
    0,
    2,
    2
  },
  {
    "*extendqihi2_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts.w	%T0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[140],
    2,
    0,
    1,
    1
  },
  {
    "*extendqisi2_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_108 },
#else
    { 0, output_108, 0 },
#endif
    0,
    &operand_data[142],
    2,
    0,
    2,
    2
  },
  {
    "*extendqisi2_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[144],
    2,
    0,
    1,
    1
  },
  {
    "*extendhisi2_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_110 },
#else
    { 0, output_110, 0 },
#endif
    0,
    &operand_data[146],
    2,
    0,
    2,
    2
  },
  {
    "*extendhisi2_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "exts.l	%S0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[138],
    2,
    0,
    1,
    1
  },
  {
    "*shiftqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_112 },
#else
    { 0, 0, output_112 },
#endif
    0,
    &operand_data[148],
    5,
    0,
    2,
    3
  },
  {
    "*shifthi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_113 },
#else
    { 0, 0, output_113 },
#endif
    0,
    &operand_data[153],
    5,
    0,
    2,
    3
  },
  {
    "*shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_114 },
#else
    { 0, 0, output_114 },
#endif
    0,
    &operand_data[158],
    5,
    0,
    2,
    3
  },
  {
    "*rotlqi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_115 },
#else
    { 0, 0, output_115 },
#endif
    0,
    &operand_data[163],
    3,
    0,
    1,
    3
  },
  {
    "*rotlhi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_116 },
#else
    { 0, 0, output_116 },
#endif
    0,
    &operand_data[166],
    3,
    0,
    1,
    3
  },
  {
    "*rotlsi3_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_117 },
#else
    { 0, 0, output_117 },
#endif
    0,
    &operand_data[169],
    3,
    0,
    1,
    3
  },
  {
    "*h8300.md:2766",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.w	%0,%0\n\tbld	%Z2,%Y1\n\tbst	#0,%X0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[172],
    3,
    0,
    1,
    1
  },
  {
    "*h8300.md:2780",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.w	%0,%0\n\tbild	%Z2,%Y1\n\tbst	#0,%X0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[175],
    4,
    0,
    1,
    1
  },
  {
    "*extzv_1_r_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_120 },
#else
    { 0, 0, output_120 },
#endif
    0,
    &operand_data[179],
    3,
    0,
    1,
    3
  },
  {
    "*extzv_1_r_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_121 },
#else
    { 0, 0, output_121 },
#endif
    0,
    &operand_data[182],
    3,
    0,
    2,
    3
  },
  {
    "*extzv_1_r_inv_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_122 },
#else
    { 0, 0, output_122 },
#endif
    0,
    &operand_data[185],
    4,
    0,
    1,
    3
  },
  {
    "*extzv_1_r_inv_h8300hs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_123 },
#else
    { 0, 0, output_123 },
#endif
    0,
    &operand_data[189],
    4,
    0,
    2,
    3
  },
  {
    "*h8300.md:2866",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld	#0,%R2\n\tbst	%Z1,%Y0 ; i1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[193],
    3,
    0,
    1,
    1
  },
  {
    "*h8300.md:2895",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld	%Z2,%Y1\n\tb%c4	#0,%R0\n\tbst	#0,%R0; bl1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[196],
    5,
    0,
    1,
    1
  },
  {
    "*h8300.md:2907",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld	%Z2,%Y1\n\tb%c5	%Z4,%Y3\n\tbst	#0,%R0; bl3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[201],
    6,
    0,
    1,
    1
  },
  {
    "*insv_si_1_n",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld\t#0,%w2\n\tbst\t%Z1,%Y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[207],
    3,
    0,
    1,
    1
  },
  {
    "*insv_si_1_n_lshiftrt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld\t%Z3,%Y2\n\tbst\t%Z1,%Y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[207],
    4,
    0,
    1,
    1
  },
  {
    "*insv_si_1_n_lshiftrt_16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rotr.w\t%e2\n\trotl.w\t%e2\n\tbst\t%Z1,%Y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[207],
    3,
    0,
    1,
    1
  },
  {
    "*insv_si_8_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%w1,%x0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[211],
    2,
    0,
    1,
    1
  },
  {
    "*insv_si_8_8_lshiftrt_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%x1,%x0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[211],
    2,
    0,
    1,
    1
  },
  {
    "*extzv_8_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_132 },
#else
    { 0, output_132, 0 },
#endif
    0,
    &operand_data[182],
    2,
    0,
    2,
    2
  },
  {
    "*extzv_8_16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%e1,%f0\n\textu.w\t%f0\n\textu.l\t%S0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[213],
    2,
    0,
    1,
    1
  },
  {
    "*extzv_16_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%e1,%f2\n\tmov.b\t%x1,%w0\n\tmov.b\t%w2,%x0\n\textu.l\t%S0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[213],
    3,
    0,
    1,
    1
  },
  {
    "*extzv_8_23",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[66],
    2,
    0,
    1,
    1
  },
  {
    "*twoshifts_l16_r1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[66],
    2,
    0,
    1,
    1
  },
  {
    "*andsi3_ashift_n_lower",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[216],
    5,
    0,
    2,
    1
  },
  {
    "*andsi3_lshiftrt_n_sb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_138 },
#else
    { 0, 0, output_138 },
#endif
    0,
    &operand_data[221],
    4,
    0,
    1,
    3
  },
  {
    "*andsi3_lshiftrt_9_sb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[66],
    2,
    0,
    1,
    1
  },
  {
    "*addsi3_upper",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.w\t%f1,%e0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[225],
    3,
    0,
    1,
    1
  },
  {
    "*addsi3_lshiftrt_16_zexthi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.w\t%e1,%f0\n\txor.w\t%e0,%e0\n\trotxl.w\t%e0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[228],
    3,
    0,
    1,
    1
  },
  {
    "*addsi3_and_r_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[225],
    3,
    0,
    1,
    1
  },
  {
    "*addsi3_and_not_r_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[225],
    3,
    0,
    1,
    1
  },
  {
    "*ixorhi3_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%c1.b\t%X2,%s0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[231],
    4,
    0,
    1,
    1
  },
  {
    "*ixorsi3_zext_qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%c1.b\t%X2,%w0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[235],
    4,
    0,
    1,
    1
  },
  {
    "*ixorsi3_zext_hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%c1.w\t%T2,%f0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[239],
    4,
    0,
    1,
    1
  },
  {
    "*ixorsi3_ashift_16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%c1.w\t%f2,%e0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[243],
    4,
    0,
    1,
    1
  },
  {
    "*ixorsi3_lshiftrt_16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%c1.w\t%e2,%f0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[243],
    4,
    0,
    1,
    1
  },
  {
    "*iorhi3_ashift_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or.b\t%s1,%t0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[247],
    3,
    0,
    1,
    1
  },
  {
    "*iorhi3_lshiftrt_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or.b\t%t1,%s0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[247],
    3,
    0,
    1,
    1
  },
  {
    "*iorhi3_two_qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%s2,%t0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[250],
    3,
    0,
    1,
    1
  },
  {
    "*iorhi3_two_qi_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%X2,%t0\n\tmov.b\t%X1,%s0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[253],
    3,
    0,
    1,
    1
  },
  {
    "*iorsi3_two_hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%f2,%e0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[256],
    3,
    0,
    1,
    1
  },
  {
    "*iorsi3_two_qi_zext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[259],
    3,
    0,
    1,
    1
  },
  {
    "*iorsi3_e2f",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%e2,%f0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[66],
    3,
    0,
    1,
    1
  },
  {
    "*iorsi3_two_qi_sext",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[262],
    3,
    0,
    1,
    1
  },
  {
    "*iorsi3_w",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%X2,%w0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[265],
    3,
    0,
    2,
    1
  },
  {
    "*iorsi3_ashift_31",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rotxl.l\t%S0\n\tbor\t#0,%w1\n\trotxr.l\t%S0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[268],
    3,
    0,
    1,
    1
  },
  {
    "*iorsi3_and_ashift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_159 },
#else
    { 0, 0, output_159 },
#endif
    0,
    &operand_data[271],
    5,
    0,
    1,
    3
  },
  {
    "*iorsi3_and_lshiftrt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_160 },
#else
    { 0, 0, output_160 },
#endif
    0,
    &operand_data[271],
    5,
    0,
    1,
    3
  },
  {
    "*iorsi3_zero_extract",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bld\t%Z2,%Y1\n\tbor\t#0,%w0\n\tbst\t#0,%w0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[276],
    4,
    0,
    1,
    1
  },
  {
    "*iorsi3_and_lshiftrt_n_sb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rotl.l\t%S1\n\trotr.l\t%S1\n\tbor\t#1,%w0\n\tbst\t#1,%w0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[225],
    3,
    0,
    1,
    1
  },
  {
    "*iorsi3_and_lshiftrt_9_sb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_163 },
#else
    { 0, 0, output_163 },
#endif
    0,
    &operand_data[280],
    4,
    0,
    1,
    3
  },
  {
    "*iorsi3_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[284],
    4,
    0,
    1,
    1
  },
  {
    "*iorsi2_and_1_lshiftrt_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "shlr.l\t%S0\n\tbor\t#0,%w0\n\tbst\t#0,%w0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[66],
    2,
    1,
    1,
    1
  },
  {
    "*iorsi3_ashift_16_ashift_24",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[66],
    3,
    0,
    1,
    1
  },
  {
    "*iorsi3_ashift_16_ashift_24_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[259],
    3,
    0,
    1,
    1
  },
  {
    "*addsi3_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[284],
    4,
    0,
    1,
    1
  },
  {
    "*ashiftsi_sextqi_7",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[144],
    2,
    0,
    1,
    1
  },
  {
    "*h8300.md:3639",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%t1,%R0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[288],
    2,
    0,
    1,
    1
  },
  {
    "*h8300.md:3650",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.b\t%x1,%R0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[290],
    2,
    0,
    1,
    1
  },
  {
    "*h8300.md:3659",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%e1,%f2\n\tmov.b\t%w2,%R0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[290],
    3,
    0,
    1,
    1
  },
  {
    "*h8300.md:3669",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov.w\t%e1,%f2\n\tmov.b\t%x2,%R0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[290],
    3,
    0,
    1,
    1
  },
  {
    "*h8300.md:3679",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[293],
    2,
    0,
    0,
    1
  },
  {
    "*h8300.md:3699",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[293],
    2,
    0,
    0,
    1
  },
  {
    "pushqi1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pushqi1,
    &operand_data[293],
    1,
    0,
    0,
    0
  },
  {
    "movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqi,
    &operand_data[295],
    2,
    0,
    0,
    0
  },
  {
    "pushhi1_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pushhi1_h8300,
    &operand_data[297],
    1,
    0,
    0,
    0
  },
  {
    "pushhi1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pushhi1,
    &operand_data[297],
    1,
    0,
    0,
    0
  },
  {
    "movhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi,
    &operand_data[298],
    2,
    0,
    0,
    0
  },
  {
    "movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi,
    &operand_data[300],
    2,
    0,
    0,
    0
  },
  {
    "movsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsf,
    &operand_data[302],
    2,
    0,
    0,
    0
  },
  {
    "movsf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[304],
    3,
    0,
    0,
    0
  },
  {
    "movsf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[307],
    3,
    0,
    0,
    0
  },
  {
    "cmphi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[310],
    3,
    0,
    0,
    0
  },
  {
    "cmphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmphi,
    &operand_data[313],
    2,
    0,
    0,
    0
  },
  {
    "addhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addhi3,
    &operand_data[315],
    3,
    0,
    0,
    0
  },
  {
    "addhi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[318],
    2,
    0,
    0,
    0
  },
  {
    "addhi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[320],
    3,
    0,
    0,
    0
  },
  {
    "addsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[323],
    2,
    0,
    0,
    0
  },
  {
    "addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsi3,
    &operand_data[325],
    3,
    0,
    0,
    0
  },
  {
    "addsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[328],
    2,
    0,
    0,
    0
  },
  {
    "subhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subhi3,
    &operand_data[330],
    3,
    0,
    0,
    0
  },
  {
    "subsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subsi3,
    &operand_data[325],
    3,
    0,
    0,
    0
  },
  {
    "andqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andqi3,
    &operand_data[333],
    3,
    0,
    0,
    0
  },
  {
    "andhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andhi3,
    &operand_data[315],
    3,
    0,
    0,
    0
  },
  {
    "andsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andsi3,
    &operand_data[325],
    3,
    0,
    0,
    0
  },
  {
    "iorqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorqi3,
    &operand_data[333],
    3,
    0,
    0,
    0
  },
  {
    "iorhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorhi3,
    &operand_data[315],
    3,
    0,
    0,
    0
  },
  {
    "iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorsi3,
    &operand_data[325],
    3,
    0,
    0,
    0
  },
  {
    "xorqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorqi3,
    &operand_data[333],
    3,
    0,
    0,
    0
  },
  {
    "xorhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorhi3,
    &operand_data[315],
    3,
    0,
    0,
    0
  },
  {
    "xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorsi3,
    &operand_data[325],
    3,
    0,
    0,
    0
  },
  {
    "neghi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_neghi2,
    &operand_data[315],
    2,
    0,
    0,
    0
  },
  {
    "neghi2_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_neghi2_h8300,
    &operand_data[315],
    2,
    4,
    0,
    0
  },
  {
    "negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsi2,
    &operand_data[128],
    2,
    0,
    0,
    0
  },
  {
    "negsi2_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsi2_h8300,
    &operand_data[128],
    2,
    4,
    0,
    0
  },
  {
    "negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsf2,
    &operand_data[336],
    2,
    0,
    0,
    0
  },
  {
    "abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abssf2,
    &operand_data[336],
    2,
    0,
    0,
    0
  },
  {
    "one_cmplhi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplhi2,
    &operand_data[97],
    2,
    0,
    1,
    0
  },
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplsi2,
    &operand_data[66],
    2,
    0,
    1,
    0
  },
  {
    "ble",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ble,
    &operand_data[115],
    1,
    0,
    0,
    0
  },
  {
    "bleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bleu,
    &operand_data[115],
    1,
    0,
    0,
    0
  },
  {
    "bge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bge,
    &operand_data[115],
    1,
    0,
    0,
    0
  },
  {
    "bgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgeu,
    &operand_data[115],
    1,
    0,
    0,
    0
  },
  {
    "blt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_blt,
    &operand_data[115],
    1,
    0,
    0,
    0
  },
  {
    "bltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltu,
    &operand_data[115],
    1,
    0,
    0,
    0
  },
  {
    "bgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgt,
    &operand_data[115],
    1,
    0,
    0,
    0
  },
  {
    "bgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgtu,
    &operand_data[115],
    1,
    0,
    0,
    0
  },
  {
    "beq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_beq,
    &operand_data[115],
    1,
    0,
    0,
    0
  },
  {
    "bne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bne,
    &operand_data[115],
    1,
    0,
    0,
    0
  },
  {
    "tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump,
    &operand_data[338],
    2,
    0,
    0,
    0
  },
  {
    "indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[340],
    1,
    0,
    0,
    0
  },
  {
    "push_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_push_h8300,
    &operand_data[297],
    1,
    0,
    0,
    0
  },
  {
    "push_h8300hs_advanced",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_push_h8300hs_advanced,
    &operand_data[128],
    1,
    0,
    0,
    0
  },
  {
    "push_h8300hs_normal",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_push_h8300hs_normal,
    &operand_data[128],
    1,
    0,
    0,
    0
  },
  {
    "pop_h8300",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pop_h8300,
    &operand_data[297],
    1,
    0,
    0,
    0
  },
  {
    "pop_h8300hs_advanced",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pop_h8300hs_advanced,
    &operand_data[128],
    1,
    0,
    0,
    0
  },
  {
    "pop_h8300hs_normal",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pop_h8300hs_normal,
    &operand_data[128],
    1,
    0,
    0,
    0
  },
  {
    "stm_h8300s_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_stm_h8300s_2,
    &operand_data[128],
    2,
    0,
    0,
    0
  },
  {
    "stm_h8300s_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_stm_h8300s_3,
    &operand_data[128],
    3,
    0,
    0,
    0
  },
  {
    "stm_h8300s_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_stm_h8300s_4,
    &operand_data[128],
    4,
    0,
    0,
    0
  },
  {
    "ldm_h8300s_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldm_h8300s_2,
    &operand_data[128],
    2,
    0,
    0,
    0
  },
  {
    "ldm_h8300s_3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldm_h8300s_3,
    &operand_data[128],
    3,
    0,
    0,
    0
  },
  {
    "ldm_h8300s_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ldm_h8300s_4,
    &operand_data[128],
    4,
    0,
    0,
    0
  },
  {
    "return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_return,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  {
    "prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  {
    "epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[341],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqihi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[341],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[343],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[343],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendhisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[343],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[345],
    2,
    0,
    0,
    0
  },
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[346],
    2,
    0,
    0,
    0
  },
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[348],
    2,
    0,
    0,
    0
  },
  {
    "extendqisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[348],
    2,
    0,
    0,
    0
  },
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[345],
    2,
    0,
    0,
    0
  },
  {
    "ashlqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlqi3,
    &operand_data[349],
    3,
    0,
    0,
    0
  },
  {
    "ashrqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrqi3,
    &operand_data[349],
    3,
    0,
    0,
    0
  },
  {
    "lshrqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrqi3,
    &operand_data[349],
    3,
    0,
    0,
    0
  },
  {
    "ashlhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlhi3,
    &operand_data[352],
    3,
    0,
    0,
    0
  },
  {
    "lshrhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrhi3,
    &operand_data[355],
    3,
    0,
    0,
    0
  },
  {
    "ashrhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrhi3,
    &operand_data[358],
    3,
    0,
    0,
    0
  },
  {
    "ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlsi3,
    &operand_data[361],
    3,
    0,
    0,
    0
  },
  {
    "lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrsi3,
    &operand_data[361],
    3,
    0,
    0,
    0
  },
  {
    "ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrsi3,
    &operand_data[361],
    3,
    0,
    0,
    0
  },
  {
    "ashrsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[364],
    4,
    0,
    0,
    0
  },
  {
    "rotlqi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[364],
    4,
    0,
    0,
    0
  },
  {
    "rotlqi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotlqi3,
    &operand_data[349],
    3,
    0,
    0,
    0
  },
  {
    "rotlhi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotlhi3,
    &operand_data[358],
    3,
    0,
    0,
    0
  },
  {
    "rotlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotlsi3,
    &operand_data[368],
    3,
    0,
    0,
    0
  },
  {
    "insv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_insv,
    &operand_data[371],
    4,
    0,
    0,
    0
  },
  {
    "extzv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extzv,
    &operand_data[375],
    4,
    0,
    0,
    0
  },
  {
    "extzv+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    2,
    0,
    0,
    0
  },
  {
    "extzv+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    2,
    0,
    0,
    0
  },
  {
    "extzv+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[379],
    5,
    0,
    0,
    0
  },
  {
    "extzv+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    2,
    0,
    0,
    0
  },
  {
    "extzv+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    3,
    0,
    0,
    0
  },
  {
    "extzv+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    3,
    0,
    0,
    0
  },
  {
    "extzv+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[384],
    3,
    0,
    0,
    0
  },
  {
    "extzv+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[387],
    3,
    0,
    0,
    0
  },
  {
    "extzv+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[348],
    3,
    0,
    0,
    0
  },
  {
    "extzv+10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    3,
    0,
    0,
    0
  },
  {
    "extzv+11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    3,
    0,
    0,
    0
  },
  {
    "extzv+12",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    3,
    0,
    0,
    0
  },
  {
    "extzv+13",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[387],
    3,
    0,
    0,
    0
  },
  {
    "extzv+14",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    3,
    0,
    0,
    0
  },
  {
    "extzv+15",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    3,
    0,
    0,
    0
  },
  {
    "extzv+16",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[348],
    2,
    0,
    0,
    0
  },
  {
    "extzv+17",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[293],
    2,
    0,
    0,
    0
  },
  {
    "extzv+18",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[293],
    2,
    0,
    0,
    0
  },
  {
    "extzv+19",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[390],
    4,
    0,
    0,
    0
  },
  {
    "extzv+20",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[390],
    4,
    0,
    0,
    0
  },
  {
    "extzv+21",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[394],
    4,
    0,
    0,
    0
  },
  {
    "extzv+22",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[394],
    4,
    0,
    0,
    0
  },
  {
    "extzv+23",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[394],
    4,
    0,
    0,
    0
  },
  {
    "extzv+24",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[394],
    4,
    0,
    0,
    0
  },
  {
    "extzv+25",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[293],
    1,
    0,
    0,
    0
  },
  {
    "extzv+26",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[293],
    1,
    0,
    0,
    0
  },
  {
    "extzv+27",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[297],
    1,
    0,
    0,
    0
  },
  {
    "extzv+28",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[297],
    1,
    0,
    0,
    0
  },
  {
    "extzv+29",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    4,
    0,
    0,
    0
  },
  {
    "extzv+30",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    4,
    0,
    0,
    0
  },
  {
    "extzv+31",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    3,
    0,
    0,
    0
  },
  {
    "extzv+32",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    3,
    0,
    0,
    0
  },
  {
    "extzv+33",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    2,
    0,
    0,
    0
  },
  {
    "extzv+34",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    2,
    0,
    0,
    0
  },
  {
    "extzv+35",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[398],
    3,
    0,
    0,
    0
  },
  {
    "extzv+36",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[401],
    3,
    0,
    0,
    0
  },
  {
    "extzv+37",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[403],
    3,
    0,
    0,
    0
  },
  {
    "extzv+38",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[406],
    4,
    0,
    0,
    0
  },
  {
    "extzv+39",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[410],
    4,
    0,
    0,
    0
  },
  {
    "extzv+40",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[414],
    3,
    0,
    0,
    0
  },
  {
    "extzv+41",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[417],
    3,
    0,
    0,
    0
  },
  {
    "extzv+42",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[361],
    2,
    0,
    0,
    0
  },
  {
    "extzv+43",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[420],
    4,
    0,
    0,
    0
  },
  {
    "extzv+44",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[128],
    2,
    0,
    0,
    0
  },
  {
    "extzv+45",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[424],
    3,
    0,
    0,
    0
  },
  {
    "extzv+46",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[427],
    4,
    0,
    0,
    0
  },
  {
    "extzv+47",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[431],
    4,
    0,
    0,
    0
  },
  {
    "extzv+48",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[435],
    3,
    0,
    0,
    0
  },
  {
    "extzv+49",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[438],
    4,
    0,
    0,
    0
  },
  {
    "extzv+50",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[442],
    4,
    0,
    0,
    0
  },
  {
    "extzv+51",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[442],
    4,
    0,
    0,
    0
  },
  {
    "extzv+52",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[442],
    4,
    0,
    0,
    0
  },
  {
    "extzv+53",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[442],
    4,
    0,
    0,
    0
  },
  {
    "extzv+54",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[446],
    5,
    0,
    0,
    0
  },
  {
    "extzv+55",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[446],
    4,
    0,
    0,
    0
  },
  {
    "extzv+56",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[446],
    4,
    0,
    0,
    0
  },
  {
    "extzv+57",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[451],
    3,
    0,
    0,
    0
  },
  {
    "extzv+58",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[454],
    5,
    0,
    0,
    0
  },
  {
    "extzv+59",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[459],
    4,
    0,
    0,
    0
  },
  {
    "extzv+60",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[463],
    4,
    0,
    0,
    0
  },
  {
    "extzv+61",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[467],
    4,
    0,
    0,
    0
  },
  {
    "extzv+62",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[471],
    5,
    0,
    0,
    0
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}

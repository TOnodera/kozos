/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_183 (rtx *);
extern rtx gen_split_184 (rtx *);
extern rtx gen_split_185 (rtx *);
extern rtx gen_split_188 (rtx *);
extern rtx gen_peephole2_189 (rtx, rtx *);
extern rtx gen_split_190 (rtx *);
extern rtx gen_split_192 (rtx *);
extern rtx gen_split_240 (rtx *);
extern rtx gen_split_242 (rtx *);
extern rtx gen_split_243 (rtx *);
extern rtx gen_split_247 (rtx *);
extern rtx gen_split_258 (rtx *);
extern rtx gen_split_259 (rtx *);
extern rtx gen_split_265 (rtx *);
extern rtx gen_split_266 (rtx *);
extern rtx gen_split_267 (rtx *);
extern rtx gen_split_268 (rtx *);
extern rtx gen_split_269 (rtx *);
extern rtx gen_split_270 (rtx *);
extern rtx gen_split_271 (rtx *);
extern rtx gen_split_272 (rtx *);
extern rtx gen_split_273 (rtx *);
extern rtx gen_split_274 (rtx *);
extern rtx gen_split_275 (rtx *);
extern rtx gen_split_276 (rtx *);
extern rtx gen_split_277 (rtx *);
extern rtx gen_split_278 (rtx *);
extern rtx gen_split_279 (rtx *);
extern rtx gen_split_280 (rtx *);
extern rtx gen_split_281 (rtx *);
extern rtx gen_split_282 (rtx *);
extern rtx gen_peephole2_283 (rtx, rtx *);
extern rtx gen_peephole2_284 (rtx, rtx *);
extern rtx gen_peephole2_285 (rtx, rtx *);
extern rtx gen_peephole2_286 (rtx, rtx *);
extern rtx gen_peephole2_287 (rtx, rtx *);
extern rtx gen_peephole2_288 (rtx, rtx *);
extern rtx gen_peephole2_289 (rtx, rtx *);
extern rtx gen_peephole2_290 (rtx, rtx *);
extern rtx gen_peephole2_291 (rtx, rtx *);
extern rtx gen_peephole2_292 (rtx, rtx *);
extern rtx gen_peephole2_293 (rtx, rtx *);
extern rtx gen_peephole2_294 (rtx, rtx *);
extern rtx gen_peephole2_295 (rtx, rtx *);
extern rtx gen_peephole2_296 (rtx, rtx *);
extern rtx gen_peephole2_297 (rtx, rtx *);
extern rtx gen_peephole2_298 (rtx, rtx *);
extern rtx gen_peephole2_299 (rtx, rtx *);
extern rtx gen_peephole2_300 (rtx, rtx *);
extern rtx gen_peephole2_301 (rtx, rtx *);
extern rtx gen_peephole2_302 (rtx, rtx *);
extern rtx gen_peephole2_303 (rtx, rtx *);
extern rtx gen_peephole2_304 (rtx, rtx *);
extern rtx gen_peephole2_305 (rtx, rtx *);
extern rtx gen_peephole2_306 (rtx, rtx *);
extern rtx gen_peephole2_307 (rtx, rtx *);
extern rtx gen_peephole2_308 (rtx, rtx *);
extern rtx gen_peephole2_309 (rtx, rtx *);
extern rtx gen_peephole2_310 (rtx, rtx *);
extern rtx gen_peephole2_311 (rtx, rtx *);
extern rtx gen_peephole2_312 (rtx, rtx *);
extern rtx gen_peephole2_313 (rtx, rtx *);
extern rtx gen_peephole2_314 (rtx, rtx *);
extern rtx gen_peephole2_315 (rtx, rtx *);
extern rtx gen_peephole2_316 (rtx, rtx *);
extern rtx gen_peephole2_317 (rtx, rtx *);
extern rtx gen_peephole2_318 (rtx, rtx *);
extern rtx gen_peephole2_319 (rtx, rtx *);
extern rtx gen_peephole2_320 (rtx, rtx *);
extern rtx gen_peephole2_321 (rtx, rtx *);
extern rtx gen_peephole2_322 (rtx, rtx *);
extern rtx gen_peephole2_323 (rtx, rtx *);
extern rtx gen_peephole2_324 (rtx, rtx *);
extern rtx gen_peephole2_325 (rtx, rtx *);
extern rtx gen_peephole2_326 (rtx, rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L2490;
    case SImode:
      goto L2491;
    case QImode:
      goto L2492;
    default:
      break;
    }
 L121: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case CC0:
      goto L122;
    case PC:
      goto L562;
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L1505;
    default:
      goto ret0;
   }
 L1505: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x2, QImode))
    {
      operands[0] = x2;
      goto L1506;
    }
  goto ret0;

 L2490: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L3;
 L2493: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L393;
    }
  goto L121;

 L3: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L4;
  x2 = XEXP (x1, 0);
  goto L2493;

 L4: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L5;
  x2 = XEXP (x1, 0);
  goto L2493;

 L5: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L2495;
  x2 = XEXP (x1, 0);
  goto L2493;

 L2495: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case -2L:
        goto L6;
      case -4L:
        goto L32;
      default:
        break;
      }
  x2 = XEXP (x1, 0);
  goto L2493;

 L6: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L7;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L7: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L8;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L8: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L9;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L9: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L10;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L10: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -1L)
    goto L11;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L11: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L12;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L12: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300
   && operands[0] != stack_pointer_rtx))
    {
      return 0;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L32: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L33;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L33: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L2497;
    case HImode:
      goto L2498;
    default:
      break;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L2497: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L34;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L34: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L35;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L35: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L36;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L36: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -3L)
    goto L37;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L37: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L38;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L38: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && operands[0] != stack_pointer_rtx))
    {
      return 2;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L2498: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L72;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L72: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L73;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L73: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L74;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L74: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -2L)
    goto L75;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L75: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L76;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L76: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && operands[0] != stack_pointer_rtx))
    {
      return 7;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2493;

 L393: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L2499;
  x2 = XEXP (x1, 0);
  goto L121;

 L2499: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L394;
  if (nshift_operator (x2, HImode))
    {
      operands[3] = x2;
      goto L973;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L394: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L2501;
  x2 = XEXP (x1, 0);
  goto L121;

 L2501: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case UDIV:
      goto L395;
    case DIV:
      goto L410;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L121;

 L395: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L396;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L396: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L397;
  x2 = XEXP (x1, 0);
  goto L121;

 L397: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, HImode))
    {
      operands[2] = x5;
      goto L398;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L398: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L399;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L400;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == TRUNCATE)
    goto L401;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UMOD)
    goto L402;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L402: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L403;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L403: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L404;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L404: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2])
      && (TARGET_H8300H || TARGET_H8300S))
    {
      return 51;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L410: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L411;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L411: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L412;
  x2 = XEXP (x1, 0);
  goto L121;

 L412: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, HImode))
    {
      operands[2] = x5;
      goto L413;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L413: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L414;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L415;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == TRUNCATE)
    goto L416;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L416: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MOD)
    goto L417;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L417: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L418;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L418: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L419;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L419: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2])
      && (TARGET_H8300H || TARGET_H8300S))
    {
      return 52;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L973: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L974;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L974: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L975;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L975: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L976;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L976: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[4] = x2;
      return 113;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L2491: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L16;
 L2494: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L986;
    }
  goto L121;

 L16: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L17;
  x2 = XEXP (x1, 0);
  goto L2494;

 L17: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L18;
  x2 = XEXP (x1, 0);
  goto L2494;

 L18: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -4L)
    goto L19;
  x2 = XEXP (x1, 0);
  goto L2494;

 L19: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L20;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L20: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L2503;
    case HImode:
      goto L2504;
    default:
      break;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L2503: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L21;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L21: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L22;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L22: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L23;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L23: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -3L)
    goto L24;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L24: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L25;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L25: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && operands[0] != stack_pointer_rtx))
    {
      return 1;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L2504: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L59;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L59: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L60;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L60: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L61;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L61: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -2L)
    goto L62;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L62: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L63;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L63: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && operands[0] != stack_pointer_rtx))
    {
      return 6;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2494;

 L986: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L2506;
  x2 = XEXP (x1, 0);
  goto L121;

 L2506: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTRACT:
      goto L1141;
    case AND:
      goto L1170;
    case IOR:
      goto L1397;
    case PLUS:
      goto L1470;
    case ASHIFTRT:
    case LSHIFTRT:
    case ASHIFT:
      goto L2505;
    default:
      x2 = XEXP (x1, 0);
      goto L121;
   }
 L2505: ATTRIBUTE_UNUSED_LABEL
  if (nshift_operator (x2, SImode))
    {
      operands[3] = x2;
      goto L987;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L1141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1142;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L1142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L)
    goto L1143;
  x2 = XEXP (x1, 0);
  goto L121;

 L1143: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L)
    goto L1144;
  x2 = XEXP (x1, 0);
  goto L121;

 L1144: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1145;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1146;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1146: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H))
    {
      return 134;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1170: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L1171;
  x2 = XEXP (x1, 0);
  goto L121;

 L1171: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1172;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L1172: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1173;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L1173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1174;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L1174: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1175;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[4] = x2;
      goto L1176;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1176: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)))
    {
      return 137;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1397: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L2510;
  x2 = XEXP (x1, 0);
  goto L121;

 L2510: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case AND:
      goto L1398;
    case ASHIFT:
      goto L1421;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L121;

 L1398: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == LSHIFTRT)
    goto L1399;
  x2 = XEXP (x1, 0);
  goto L121;

 L1399: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1400;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L1400: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 9L)
    goto L1401;
  x2 = XEXP (x1, 0);
  goto L121;

 L1401: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4194304L)
    goto L1402;
  x2 = XEXP (x1, 0);
  goto L121;

 L1402: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1403;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L1403: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1404;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L1405;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1405: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)))
    {
      return 163;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1421: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1422;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L1422: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 23L)
    goto L1423;
  x2 = XEXP (x1, 0);
  goto L121;

 L1423: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1424;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L1424: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1425;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1426;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1426: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 164;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1470: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L1471;
  x2 = XEXP (x1, 0);
  goto L121;

 L1471: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1472;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L1472: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8388608L)
    goto L1473;
  x2 = XEXP (x1, 0);
  goto L121;

 L1473: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1474;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L1474: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1475;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1475: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1476;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L1476: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 168;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L987: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L988;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L988: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L989;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L989: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L990;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[4] = x2;
      return 114;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L2492: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L363;
    }
  goto L121;

 L363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode)
    goto L2512;
  x2 = XEXP (x1, 0);
  goto L121;

 L2512: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L364;
  if (nshift_operator (x2, QImode))
    {
      operands[3] = x2;
      goto L959;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L364: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L2514;
  x2 = XEXP (x1, 0);
  goto L121;

 L2514: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case UDIV:
      goto L365;
    case DIV:
      goto L380;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L121;

 L365: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L366;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L366: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L367;
  x2 = XEXP (x1, 0);
  goto L121;

 L367: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, QImode))
    {
      operands[2] = x5;
      goto L368;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L368: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L369;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L370;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == TRUNCATE)
    goto L371;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L371: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == UMOD)
    goto L372;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L372: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L373;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L373: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L374;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L374: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    {
      return 49;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L380: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L381;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L381: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L382;
  x2 = XEXP (x1, 0);
  goto L121;

 L382: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, QImode))
    {
      operands[2] = x5;
      goto L383;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L383: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L384;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L385;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == TRUNCATE)
    goto L386;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L386: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == MOD)
    goto L387;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L387: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L388;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L388: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L389;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L389: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2])
      && (TARGET_H8300H || TARGET_H8300S))
    {
      return 50;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L959: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L960;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L960: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L961;
    }
  x2 = XEXP (x1, 0);
  goto L121;

 L961: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L962;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L962: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[4] = x2;
      return 112;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L121;

 L122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L147;
  goto ret0;

 L147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L2517;
  if (general_operand_src (x3, QImode))
    {
      operands[0] = x3;
      goto L124;
    }
  goto ret0;

 L2517: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTEND)
    goto L173;
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L148;
    }
  goto ret0;

 L173: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand_src (x4, QImode))
    {
      operands[0] = x4;
      goto L174;
    }
  goto ret0;

 L174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L175;
  goto ret0;

 L175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == AND)
    goto L176;
  goto ret0;

 L176: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L177;
    }
  goto ret0;

 L177: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7L)
    goto L178;
  goto ret0;

 L178: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L179;
  goto ret0;

 L179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L180;
    }
  goto ret0;

 L180: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)))
    {
      return 21;
    }
  goto ret0;

 L148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L149;
  goto ret0;

 L149: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L150;
    }
  goto ret0;

 L150: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L151;
  goto ret0;

 L151: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L152;
    }
  goto ret0;

 L152: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16))
    {
      return 19;
    }
  goto ret0;

 L124: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L125;
  goto ret0;

 L125: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L126;
    }
  goto ret0;

 L126: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L127;
  goto ret0;

 L127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L128;
    }
  goto ret0;

 L128: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)))
    {
      return 17;
    }
  goto ret0;

 L562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L2518;
    case SImode:
      goto L2519;
    default:
      break;
    }
  goto ret0;

 L2518: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L563;
    }
  goto ret0;

 L563: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L564;
  goto ret0;

 L564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L565;
  goto ret0;

 L565: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L566;

 L566: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 77;
    }
 L582: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S) && TARGET_NORMAL_MODE))
    {
      return 79;
    }
  goto ret0;

 L2519: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L571;
    }
  goto ret0;

 L571: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L572;
  goto ret0;

 L572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L573;
  goto ret0;

 L573: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L574;

 L574: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE))
    {
      return 78;
    }
  goto ret0;

 L1506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SUBREG
      && XINT (x2, 1) == 3)
    goto L1507;
  goto ret0;

 L1507: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L1508;
  goto ret0;

 L1508: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1509;
    }
  goto ret0;

 L1509: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L2520;
  goto ret0;

 L2520: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 16L:
        goto L1510;
      case 24L:
        goto L1526;
      default:
        break;
      }
  goto ret0;

 L1510: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1511;
  goto ret0;

 L1511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1512;
    }
  goto ret0;

 L1512: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 172;
    }
  goto ret0;

 L1526: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1527;
  goto ret0;

 L1527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1528;
    }
  goto ret0;

 L1528: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 173;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L2534;
    case HImode:
      goto L2535;
    default:
      break;
    }
  goto ret0;

 L2534: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L695;
  goto ret0;

 L695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L696;
  goto ret0;

 L696: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L697;
  goto ret0;

 L697: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L2536;
  goto ret0;

 L2536: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case -16L:
        goto L698;
      case 16L:
        goto L840;
      default:
        break;
      }
  goto ret0;

 L698: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L699;
  goto ret0;

 L699: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L700;
  goto ret0;

 L700: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L701;
  goto ret0;

 L701: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L702;
  goto ret0;

 L702: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -4L)
    goto L703;
  goto ret0;

 L703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L704;
    }
  goto ret0;

 L704: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L705;
  goto ret0;

 L705: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L706;
  goto ret0;

 L706: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L707;
  goto ret0;

 L707: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L708;
  goto ret0;

 L708: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -8L)
    goto L709;
  goto ret0;

 L709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L710;
    }
  goto ret0;

 L710: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L711;
  goto ret0;

 L711: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L712;
  goto ret0;

 L712: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L713;
  goto ret0;

 L713: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L714;
  goto ret0;

 L714: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -12L)
    goto L715;
  goto ret0;

 L715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L716;
    }
  goto ret0;

 L716: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L717;
  goto ret0;

 L717: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L718;
  goto ret0;

 L718: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L719;
  goto ret0;

 L719: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L720;
  goto ret0;

 L720: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -16L)
    goto L721;
  goto ret0;

 L721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L722;
    }
  goto ret0;

 L722: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && !TARGET_NORMAL_MODE
   && REGNO (operands[0]) == 0
   && REGNO (operands[1]) == 1
   && REGNO (operands[2]) == 2
   && REGNO (operands[3]) == 3))
    {
      return 90;
    }
  goto ret0;

 L840: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L841;
  goto ret0;

 L841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L842;
  goto ret0;

 L842: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L843;
  goto ret0;

 L843: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L844;
  goto ret0;

 L844: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 12L)
    goto L845;
  goto ret0;

 L845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L846;
    }
  goto ret0;

 L846: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L847;
  goto ret0;

 L847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L848;
  goto ret0;

 L848: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L849;
  goto ret0;

 L849: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L850;
  goto ret0;

 L850: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L851;
  goto ret0;

 L851: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L852;
    }
  goto ret0;

 L852: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L853;
  goto ret0;

 L853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L854;
  goto ret0;

 L854: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L855;
  goto ret0;

 L855: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L856;
  goto ret0;

 L856: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L857;
  goto ret0;

 L857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L858;
    }
  goto ret0;

 L858: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L859;
  goto ret0;

 L859: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L860;
  goto ret0;

 L860: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L861;
  goto ret0;

 L861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L862;
    }
  goto ret0;

 L862: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && !TARGET_NORMAL_MODE
   && REGNO (operands[0]) == 0
   && REGNO (operands[1]) == 1
   && REGNO (operands[2]) == 2
   && REGNO (operands[3]) == 3))
    {
      return 96;
    }
  goto ret0;

 L2535: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L726;
  goto ret0;

 L726: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L727;
  goto ret0;

 L727: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L728;
  goto ret0;

 L728: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L2538;
  goto ret0;

 L2538: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case -16L:
        goto L729;
      case 16L:
        goto L869;
      default:
        break;
      }
  goto ret0;

 L729: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L730;
  goto ret0;

 L730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L731;
  goto ret0;

 L731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L732;
  goto ret0;

 L732: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L733;
  goto ret0;

 L733: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -4L)
    goto L734;
  goto ret0;

 L734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L735;
    }
  goto ret0;

 L735: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L736;
  goto ret0;

 L736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L737;
  goto ret0;

 L737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L738;
  goto ret0;

 L738: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L739;
  goto ret0;

 L739: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -8L)
    goto L740;
  goto ret0;

 L740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L741;
    }
  goto ret0;

 L741: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L742;
  goto ret0;

 L742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L743;
  goto ret0;

 L743: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L744;
  goto ret0;

 L744: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L745;
  goto ret0;

 L745: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -12L)
    goto L746;
  goto ret0;

 L746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L747;
    }
  goto ret0;

 L747: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L748;
  goto ret0;

 L748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L749;
  goto ret0;

 L749: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L750;
  goto ret0;

 L750: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L751;
  goto ret0;

 L751: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -16L)
    goto L752;
  goto ret0;

 L752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L753;
    }
  goto ret0;

 L753: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && TARGET_NORMAL_MODE
   && REGNO (operands[0]) == 0
   && REGNO (operands[1]) == 1
   && REGNO (operands[2]) == 2
   && REGNO (operands[3]) == 3))
    {
      return 91;
    }
  goto ret0;

 L869: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L870;
  goto ret0;

 L870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L871;
  goto ret0;

 L871: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L872;
  goto ret0;

 L872: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L873;
  goto ret0;

 L873: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 12L)
    goto L874;
  goto ret0;

 L874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L875;
    }
  goto ret0;

 L875: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L876;
  goto ret0;

 L876: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L877;
  goto ret0;

 L877: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L878;
  goto ret0;

 L878: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L879;
  goto ret0;

 L879: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L880;
  goto ret0;

 L880: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L881;
    }
  goto ret0;

 L881: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L882;
  goto ret0;

 L882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L883;
  goto ret0;

 L883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L884;
  goto ret0;

 L884: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L885;
  goto ret0;

 L885: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L886;
  goto ret0;

 L886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L887;
    }
  goto ret0;

 L887: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L888;
  goto ret0;

 L888: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L889;
  goto ret0;

 L889: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L890;
  goto ret0;

 L890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L891;
    }
  goto ret0;

 L891: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && !TARGET_NORMAL_MODE
   && REGNO (operands[0]) == 0
   && REGNO (operands[1]) == 1
   && REGNO (operands[2]) == 2
   && REGNO (operands[3]) == 3))
    {
      return 97;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L1;
    case 3:
      goto L605;
    case 4:
      goto L643;
    case 5:
      goto L693;
    default:
      break;
    }
  goto ret0;

 L1: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L2;
  goto ret0;

 L2: ATTRIBUTE_UNUSED_LABEL
  return recog_1 (x0, insn, pnum_clobbers);

 L605: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L606;
  goto ret0;

 L606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L2522;
    case HImode:
      goto L2523;
    default:
      break;
    }
  goto ret0;

 L2522: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L607;
  goto ret0;

 L607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L608;
  goto ret0;

 L608: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L609;
  goto ret0;

 L609: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L2524;
  goto ret0;

 L2524: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case -8L:
        goto L610;
      case 8L:
        goto L760;
      default:
        break;
      }
  goto ret0;

 L610: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L611;
  goto ret0;

 L611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L612;
  goto ret0;

 L612: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L613;
  goto ret0;

 L613: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L614;
  goto ret0;

 L614: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -4L)
    goto L615;
  goto ret0;

 L615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L616;
    }
  goto ret0;

 L616: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L617;
  goto ret0;

 L617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L618;
  goto ret0;

 L618: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L619;
  goto ret0;

 L619: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L620;
  goto ret0;

 L620: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -8L)
    goto L621;
  goto ret0;

 L621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L622;
    }
  goto ret0;

 L622: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && !TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1)
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3)
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5))))
    {
      return 86;
    }
  goto ret0;

 L760: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L761;
  goto ret0;

 L761: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L762;
  goto ret0;

 L762: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L763;
  goto ret0;

 L763: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L764;
  goto ret0;

 L764: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L765;
  goto ret0;

 L765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L766;
    }
  goto ret0;

 L766: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L767;
  goto ret0;

 L767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L768;
  goto ret0;

 L768: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L769;
  goto ret0;

 L769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L770;
    }
  goto ret0;

 L770: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && !TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1)
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3)
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5))))
    {
      return 92;
    }
  goto ret0;

 L2523: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L626;
  goto ret0;

 L626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L627;
  goto ret0;

 L627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L628;
  goto ret0;

 L628: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L2526;
  goto ret0;

 L2526: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case -8L:
        goto L629;
      case 8L:
        goto L777;
      default:
        break;
      }
  goto ret0;

 L629: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L630;
  goto ret0;

 L630: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L631;
  goto ret0;

 L631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L632;
  goto ret0;

 L632: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L633;
  goto ret0;

 L633: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -4L)
    goto L634;
  goto ret0;

 L634: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L635;
    }
  goto ret0;

 L635: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L636;
  goto ret0;

 L636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L637;
  goto ret0;

 L637: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L638;
  goto ret0;

 L638: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L639;
  goto ret0;

 L639: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -8L)
    goto L640;
  goto ret0;

 L640: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L641;
    }
  goto ret0;

 L641: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1)
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3)
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5))))
    {
      return 87;
    }
  goto ret0;

 L777: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L778;
  goto ret0;

 L778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L779;
  goto ret0;

 L779: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L780;
  goto ret0;

 L780: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L781;
  goto ret0;

 L781: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L782;
  goto ret0;

 L782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L783;
    }
  goto ret0;

 L783: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L784;
  goto ret0;

 L784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L785;
  goto ret0;

 L785: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L786;
  goto ret0;

 L786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L787;
    }
  goto ret0;

 L787: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1)
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3)
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5))))
    {
      return 93;
    }
  goto ret0;

 L643: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L644;
  goto ret0;

 L644: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L2528;
    case HImode:
      goto L2529;
    default:
      break;
    }
  goto ret0;

 L2528: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L645;
  goto ret0;

 L645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L646;
  goto ret0;

 L646: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L647;
  goto ret0;

 L647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L2530;
  goto ret0;

 L2530: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case -12L:
        goto L648;
      case 12L:
        goto L794;
      default:
        break;
      }
  goto ret0;

 L648: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L649;
  goto ret0;

 L649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L650;
  goto ret0;

 L650: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L651;
  goto ret0;

 L651: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L652;
  goto ret0;

 L652: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -4L)
    goto L653;
  goto ret0;

 L653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L654;
    }
  goto ret0;

 L654: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L655;
  goto ret0;

 L655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L656;
  goto ret0;

 L656: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L657;
  goto ret0;

 L657: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L658;
  goto ret0;

 L658: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -8L)
    goto L659;
  goto ret0;

 L659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L660;
    }
  goto ret0;

 L660: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L661;
  goto ret0;

 L661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L662;
  goto ret0;

 L662: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L663;
  goto ret0;

 L663: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L664;
  goto ret0;

 L664: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -12L)
    goto L665;
  goto ret0;

 L665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L666;
    }
  goto ret0;

 L666: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && !TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0
	&& REGNO (operands[1]) == 1
	&& REGNO (operands[2]) == 2)
       || (REGNO (operands[0]) == 4
	   && REGNO (operands[1]) == 5
	   && REGNO (operands[2]) == 6))))
    {
      return 88;
    }
  goto ret0;

 L794: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L795;
  goto ret0;

 L795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L796;
  goto ret0;

 L796: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L797;
  goto ret0;

 L797: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L798;
  goto ret0;

 L798: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L799;
  goto ret0;

 L799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L800;
    }
  goto ret0;

 L800: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L801;
  goto ret0;

 L801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L802;
  goto ret0;

 L802: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L803;
  goto ret0;

 L803: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L804;
  goto ret0;

 L804: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L805;
  goto ret0;

 L805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L806;
    }
  goto ret0;

 L806: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L807;
  goto ret0;

 L807: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L808;
  goto ret0;

 L808: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L809;
  goto ret0;

 L809: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L810;
    }
  goto ret0;

 L810: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && !TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0
	&& REGNO (operands[1]) == 1
	&& REGNO (operands[2]) == 2)
       || (REGNO (operands[0]) == 4
	   && REGNO (operands[1]) == 5
	   && REGNO (operands[2]) == 6))))
    {
      return 94;
    }
  goto ret0;

 L2529: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L670;
  goto ret0;

 L670: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L671;
  goto ret0;

 L671: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L672;
  goto ret0;

 L672: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L2532;
  goto ret0;

 L2532: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case -12L:
        goto L673;
      case 12L:
        goto L817;
      default:
        break;
      }
  goto ret0;

 L673: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L674;
  goto ret0;

 L674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L675;
  goto ret0;

 L675: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L676;
  goto ret0;

 L676: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L677;
  goto ret0;

 L677: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -4L)
    goto L678;
  goto ret0;

 L678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L679;
    }
  goto ret0;

 L679: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L680;
  goto ret0;

 L680: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L681;
  goto ret0;

 L681: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L682;
  goto ret0;

 L682: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L683;
  goto ret0;

 L683: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -8L)
    goto L684;
  goto ret0;

 L684: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L685;
    }
  goto ret0;

 L685: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L686;
  goto ret0;

 L686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L687;
  goto ret0;

 L687: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L688;
  goto ret0;

 L688: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L689;
  goto ret0;

 L689: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -12L)
    goto L690;
  goto ret0;

 L690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L691;
    }
  goto ret0;

 L691: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0
	&& REGNO (operands[1]) == 1
	&& REGNO (operands[2]) == 2)
       || (REGNO (operands[0]) == 4
	   && REGNO (operands[1]) == 5
	   && REGNO (operands[2]) == 6))))
    {
      return 89;
    }
  goto ret0;

 L817: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L818;
  goto ret0;

 L818: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L819;
  goto ret0;

 L819: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L820;
  goto ret0;

 L820: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L821;
  goto ret0;

 L821: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L822;
  goto ret0;

 L822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L823;
    }
  goto ret0;

 L823: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L824;
  goto ret0;

 L824: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L825;
  goto ret0;

 L825: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L826;
  goto ret0;

 L826: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L827;
  goto ret0;

 L827: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L828;
  goto ret0;

 L828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L829;
    }
  goto ret0;

 L829: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L830;
  goto ret0;

 L830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L831;
  goto ret0;

 L831: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L832;
  goto ret0;

 L832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L833;
    }
  goto ret0;

 L833: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0
	&& REGNO (operands[1]) == 1
	&& REGNO (operands[2]) == 2)
       || (REGNO (operands[0]) == 4
	   && REGNO (operands[1]) == 5
	   && REGNO (operands[2]) == 6))))
    {
      return 95;
    }
  goto ret0;

 L693: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L694;
  goto ret0;

 L694: ATTRIBUTE_UNUSED_LABEL
  return recog_2 (x0, insn, pnum_clobbers);
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L908;
    case SIGN_EXTEND:
      goto L938;
    case ROTATE:
      goto L1010;
    case ZERO_EXTRACT:
      goto L1032;
    case AND:
      goto L1162;
    case PLUS:
      goto L1203;
    case IOR:
      goto L1303;
    case ASHIFT:
      goto L1488;
    default:
     break;
   }
 L2633: ATTRIBUTE_UNUSED_LABEL
  if (nshift_operator (x1, SImode))
    {
      operands[3] = x1;
      goto L994;
    }
 L2638: ATTRIBUTE_UNUSED_LABEL
  if (iorxor_operator (x1, SImode))
    {
      operands[1] = x1;
      goto L1243;
    }
  goto ret0;

 L908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand_src (x2, QImode))
    {
      operands[1] = x2;
      goto L909;
    }
 L918: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_src (x2, HImode))
    {
      operands[1] = x2;
      goto L919;
    }
 L923: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L924;
    }
  goto ret0;

 L909: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 102;
    }
 L914: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 103;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L918;

 L919: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 104;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L923;

 L924: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 105;
    }
  goto ret0;

 L938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand_src (x2, QImode))
    {
      operands[1] = x2;
      goto L939;
    }
 L943: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L944;
    }
  if (general_operand_src (x2, HImode))
    {
      operands[1] = x2;
      goto L949;
    }
 L953: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L954;
    }
  goto ret0;

 L939: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 108;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L943;

 L944: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)))
    {
      return 109;
    }
  goto ret0;

 L949: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 110;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L953;

 L954: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 111;
    }
  goto ret0;

 L1010: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1011;
    }
  goto ret0;

 L1011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1012;
    }
  goto ret0;

 L1012: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 117;
    }
  goto ret0;

 L1032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L2643;
    case SImode:
      goto L2644;
    default:
      break;
    }
  goto ret0;

 L2643: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L1047;
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1033;
    }
  goto ret0;

 L1047: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1048;
    }
  goto ret0;

 L1048: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L1049;
    }
  goto ret0;

 L1049: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L)
    goto L1050;
  goto ret0;

 L1050: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1051;
    }
  goto ret0;

 L1051: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300
   && INTVAL (operands[2]) < 16
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])))
    {
      return 122;
    }
  goto ret0;

 L1033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L)
    goto L1034;
  goto ret0;

 L1034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1035;
    }
  goto ret0;

 L1035: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300
   && INTVAL (operands[2]) < 16))
    {
      return 120;
    }
  goto ret0;

 L2644: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L1056;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1040;
    }
  goto ret0;

 L1056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1057;
    }
  goto ret0;

 L1057: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L1058;
    }
  goto ret0;

 L1058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L)
    goto L1059;
  goto ret0;

 L1059: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1060;
    }
  goto ret0;

 L1060: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])))
    {
      return 123;
    }
  goto ret0;

 L1040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L2645;
  goto ret0;

 L2645: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 1L:
        goto L1041;
      case 8L:
        goto L1130;
      case 16L:
        goto L1152;
      default:
        break;
      }
  goto ret0;

 L1041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1042;
    }
  goto ret0;

 L1042: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16))
    {
      return 121;
    }
  goto ret0;

 L1130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT)
    goto L2648;
  goto ret0;

 L2648: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 8L:
        goto L2651;
      case 16L:
        goto L2652;
      case 23L:
        goto L2653;
      default:
        break;
      }
  goto ret0;

 L2651: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 132;
    }
  goto ret0;

 L2652: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 133;
    }
  goto ret0;

 L2653: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)))
    {
      return 135;
    }
  goto ret0;

 L1152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8L
      && (TARGET_H8300H)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 134;
    }
  goto ret0;

 L1162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L2654;
  goto ret0;

 L2654: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L1163;
    case LSHIFTRT:
      goto L1189;
    default:
     break;
   }
  goto ret0;

 L1163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1164;
    }
  goto ret0;

 L1164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L2656;
  goto ret0;

 L2656: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 15L)
    goto L1165;
 L2657: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1183;
    }
  goto ret0;

 L1165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 2147450880L
      && ((TARGET_H8300H || TARGET_H8300S)))
    {
      return 136;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L2657;

 L1183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1184;
    }
  goto ret0;

 L1184: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 137;
    }
  goto ret0;

 L1189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1190;
    }
  goto ret0;

 L1190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L2658;
  goto ret0;

 L2658: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1191;
    }
 L2659: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 9L)
    goto L1199;
  goto ret0;

 L1191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (single_one_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1192;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L2659;

 L1192: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && exact_log2 (INTVAL (operands[3])) < 16
   && INTVAL (operands[2]) + exact_log2 (INTVAL (operands[3])) == 31))
    {
      return 138;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L2659;

 L1199: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 4194304L
      && ((TARGET_H8300H || TARGET_H8300S)))
    {
      return 139;
    }
  goto ret0;

 L1203: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L2660;
  goto ret0;

 L2660: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L1204;
    case LSHIFTRT:
      goto L1212;
    case AND:
      goto L1221;
    default:
     break;
   }
  goto ret0;

 L1204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1205;
    }
  goto ret0;

 L1205: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L2663;
  goto ret0;

 L2663: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 65536L:
        goto L1206;
      case 8388608L:
        goto L1483;
      default:
        break;
      }
  goto ret0;

 L1206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1207;
    }
  goto ret0;

 L1207: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 140;
    }
  goto ret0;

 L1483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1484;
    }
  goto ret0;

 L1484: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 168;
    }
  goto ret0;

 L1212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1213;
    }
  goto ret0;

 L1213: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L)
    goto L1214;
  goto ret0;

 L1214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1215;
  goto ret0;

 L1215: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1216;
    }
  goto ret0;

 L1216: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 141;
    }
  goto ret0;

 L1221: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L2666;
  goto ret0;

 L2666: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NOT)
    goto L1230;
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1222;
    }
  goto ret0;

 L1230: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1231;
    }
  goto ret0;

 L1231: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L1232;
  goto ret0;

 L1232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1233;
    }
  goto ret0;

 L1233: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)))
    {
      return 143;
    }
  goto ret0;

 L1222: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L1223;
  goto ret0;

 L1223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1224;
    }
  goto ret0;

 L1224: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)))
    {
      return 142;
    }
  goto ret0;

 L1303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L2667;
  goto L2638;

 L2667: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L1304;
    case AND:
      goto L1323;
    case ASHIFT:
      goto L1350;
    case ZERO_EXTRACT:
      goto L1378;
    default:
     break;
   }
  goto L2638;

 L1304: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L2671;
    case QImode:
      goto L2672;
    default:
      break;
    }
  goto L2638;

 L2671: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1305;
    }
  goto L2638;

 L1305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L1306;
  goto L2638;

 L1306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1307;
    }
  goto L2638;

 L1307: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L
      && (TARGET_H8300H || TARGET_H8300S))
    {
      return 153;
    }
  goto L2638;

 L2672: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1313;
    }
 L2673: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1333;
    }
  goto L2638;

 L1313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L1314;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2673;

 L1314: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L1315;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2673;

 L1315: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L1316;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2673;

 L1316: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (memory_operand (x5, QImode))
    {
      operands[2] = x5;
      goto L1317;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2673;

 L1317: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L1318;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2673;

 L1318: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 65280L
      && ((TARGET_H8300H || TARGET_H8300S)))
    {
      return 154;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2673;

 L1333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L1334;
  goto L2638;

 L1334: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L1335;
  goto L2638;

 L1335: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1336;
    }
  goto L2638;

 L1336: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L
      && ((TARGET_H8300H || TARGET_H8300S)))
    {
      return 156;
    }
  goto L2638;

 L1323: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L2675;
  goto L2638;

 L2675: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ASHIFT:
      goto L1359;
    case LSHIFTRT:
      goto L1369;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L2674;
    default:
      goto L2638;
   }
 L2674: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1324;
    }
  goto L2638;

 L1359: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L2678;
  goto L2638;

 L2678: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L1459;
 L2677: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1360;
    }
  goto L2638;

 L1459: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (memory_operand (x5, QImode))
    {
      operands[1] = x5;
      goto L1460;
    }
  goto L2677;

 L1460: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 16L)
    goto L1461;
  x4 = XEXP (x3, 0);
  goto L2677;

 L1461: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16711680L)
    goto L1462;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2677;

 L1462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L1463;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2677;

 L1463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L1464;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2677;

 L1464: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (memory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1465;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2677;

 L1465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 24L
      && ((TARGET_H8300H || TARGET_H8300S)))
    {
      return 167;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2677;

 L1360: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1361;
    }
  goto L2638;

 L1361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (single_one_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1362;
    }
  goto L2638;

 L1362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1363;
    }
  goto L2638;

 L1363: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && (INTVAL (operands[3]) & ~0xffff) == 0))
    {
      return 159;
    }
  x1 = XEXP (x0, 1);
  goto L2638;

 L1369: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1370;
    }
  goto L2638;

 L1370: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT)
    goto L2679;
  goto L2638;

 L2679: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1371;
    }
 L2680: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 30L:
        goto L1390;
      case 9L:
        goto L1413;
      default:
        break;
      }
  goto L2638;

 L1371: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (single_one_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1372;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L2680;

 L1372: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1373;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L2680;

 L1373: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && ((INTVAL (operands[3]) << INTVAL (operands[2])) & ~0xffff) == 0))
    {
      return 160;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  goto L2680;

 L1390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 2L)
    goto L1391;
  goto L2638;

 L1391: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1392;
    }
  goto L2638;

 L1392: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)))
    {
      return 162;
    }
  x1 = XEXP (x0, 1);
  goto L2638;

 L1413: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 4194304L)
    goto L1414;
  goto L2638;

 L1414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1415;
    }
  goto L2638;

 L1415: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 163;
    }
  x1 = XEXP (x0, 1);
  goto L2638;

 L1324: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L2682;
  goto L2638;

 L2682: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case -65536L:
        goto L1325;
      case -256L:
        goto L1343;
      case 1L:
        goto L1441;
      default:
        break;
      }
  goto L2638;

 L1325: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L1326;
  goto L2638;

 L1326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1327;
    }
  goto L2638;

 L1327: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L
      && (TARGET_H8300H || TARGET_H8300S))
    {
      return 155;
    }
  goto L2638;

 L1343: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1344;
  goto L2638;

 L1344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand_src (x3, QImode))
    {
      operands[2] = x3;
      goto L1345;
    }
  goto L2638;

 L1345: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 157;
    }
  x1 = XEXP (x0, 1);
  goto L2638;

 L1441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L1442;
  goto L2638;

 L1442: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1443;
  goto L2638;

 L1443: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L
      && (TARGET_H8300H || TARGET_H8300S))
    {
      return 165;
    }
  goto L2638;

 L1350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1351;
    }
  goto L2638;

 L1351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L2685;
  goto L2638;

 L2685: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 31L:
        goto L1352;
      case 23L:
        goto L1433;
      case 16L:
        goto L1450;
      default:
        break;
      }
  goto L2638;

 L1352: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1353;
    }
  goto L2638;

 L1353: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 158;
    }
  x1 = XEXP (x0, 1);
  goto L2638;

 L1433: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1434;
    }
  goto L2638;

 L1434: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 164;
    }
  x1 = XEXP (x0, 1);
  goto L2638;

 L1450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L1451;
  goto L2638;

 L1451: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1452;
    }
  goto L2638;

 L1452: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 24L
      && ((TARGET_H8300H || TARGET_H8300S)))
    {
      return 166;
    }
  goto L2638;

 L1378: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1379;
    }
  goto L2638;

 L1379: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L1380;
  goto L2638;

 L1380: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1381;
    }
  goto L2638;

 L1381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1382;
    }
  goto L2638;

 L1382: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) < 16))
    {
      return 161;
    }
  x1 = XEXP (x0, 1);
  goto L2638;

 L1488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L1489;
  goto L2633;

 L1489: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1490;
    }
  goto L2633;

 L1490: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 7L
      && ((TARGET_H8300H || TARGET_H8300S)))
    {
      return 169;
    }
  goto L2633;

 L994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L995;
    }
  goto ret0;

 L995: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L996;
    }
  goto ret0;

 L996: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 114;
    }
  goto ret0;

 L1243: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L2688;
  goto ret0;

 L2688: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L1244;
    case ASHIFT:
      goto L1257;
    case LSHIFTRT:
      goto L1265;
    default:
     break;
   }
  goto ret0;

 L1244: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case QImode:
      goto L2691;
    case HImode:
      goto L2692;
    default:
      break;
    }
  goto ret0;

 L2691: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1245;
    }
  goto ret0;

 L1245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      return 145;
    }
  goto ret0;

 L2692: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1251;
    }
  goto ret0;

 L1251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1252;
    }
  goto ret0;

 L1252: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 146;
    }
  goto ret0;

 L1257: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1258;
    }
  goto ret0;

 L1258: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L)
    goto L1259;
  goto ret0;

 L1259: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1260;
    }
  goto ret0;

 L1260: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 147;
    }
  goto ret0;

 L1265: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1266;
    }
  goto ret0;

 L1266: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L)
    goto L1267;
  goto ret0;

 L1267: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1268;
    }
  goto ret0;

 L1268: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 148;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case QImode:
      goto L2540;
    case HImode:
      goto L2541;
    case SImode:
      goto L2542;
    case SFmode:
      goto L2544;
    default:
      break;
    }
 L48: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case STRICT_LOW_PART:
      goto L49;
    case CC0:
      goto L107;
    case PC:
      goto L585;
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
    case SUBREG:
    case REG:
    case MEM:
    case ADDRESSOF:
      goto L40;
    default:
      goto L78;
   }
 L40: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x1, QImode))
    {
      operands[0] = x1;
      goto L41;
    }
 L78: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x1, HImode))
    {
      operands[0] = x1;
      goto L79;
    }
 L90: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x1, SImode))
    {
      operands[0] = x1;
      goto L91;
    }
 L94: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x1, SFmode))
    {
      operands[0] = x1;
      goto L95;
    }
 L98: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x1, SImode))
    {
      operands[0] = x1;
      goto L99;
    }
 L102: ATTRIBUTE_UNUSED_LABEL
  if (general_operand_dst (x1, SFmode))
    {
      operands[0] = x1;
      goto L103;
    }
 L599: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L600;
 L896: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case HImode:
      goto L2548;
    case SImode:
      goto L2550;
    case QImode:
      goto L2547;
    default:
      break;
    }
 L1536: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L1537;
  if (general_operand_dst (x1, QImode))
    {
      operands[0] = x1;
      goto L1493;
    }
  goto ret0;

 L2540: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L235;
    }
 L2543: ATTRIBUTE_UNUSED_LABEL
  if (bit_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L422;
    }
  goto L48;

 L235: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L2551;
  x1 = XEXP (x0, 0);
  goto L2543;

 L2551: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L236;
    case MINUS:
      goto L277;
    case IOR:
      goto L429;
    case NEG:
      goto L482;
    case NOT:
      goto L516;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2543;

 L236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L237;
    }
  x1 = XEXP (x0, 0);
  goto L2543;

 L237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      return 31;
    }
  x1 = XEXP (x0, 0);
  goto L2543;

 L277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L278;
    }
  x1 = XEXP (x0, 0);
  goto L2543;

 L278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      return 38;
    }
  x1 = XEXP (x0, 0);
  goto L2543;

 L429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == AND)
    goto L430;
  x1 = XEXP (x0, 0);
  goto L2543;

 L430: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L431;
    }
  x1 = XEXP (x0, 0);
  goto L2543;

 L431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (single_one_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L432;
    }
  x1 = XEXP (x0, 0);
  goto L2543;

 L432: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      return 54;
    }
  x1 = XEXP (x0, 0);
  goto L2543;

 L482: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      return 62;
    }
  x1 = XEXP (x0, 0);
  goto L2543;

 L516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      return 69;
    }
  x1 = XEXP (x0, 0);
  goto L2543;

 L422: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L2556;
  x1 = XEXP (x0, 0);
  goto L48;

 L2556: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L423;
    case IOR:
      goto L460;
    case XOR:
      goto L466;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L48;

 L423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L424;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L425;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L425: ATTRIBUTE_UNUSED_LABEL
  if ((register_operand (operands[0], QImode)
   || single_zero_operand (operands[2], QImode)))
    {
      return 53;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L460: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L461;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L462;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L462: ATTRIBUTE_UNUSED_LABEL
  if ((register_operand (operands[0], QImode)
   || single_one_operand (operands[2], QImode)))
    {
      return 58;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bit_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L467;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L468;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L468: ATTRIBUTE_UNUSED_LABEL
  if ((register_operand (operands[0], QImode)
   || single_one_operand (operands[2], QImode)))
    {
      return 59;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L2541: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L240;
    }
  goto L48;

 L240: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L2559;
  x1 = XEXP (x0, 0);
  goto L48;

 L2559: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L241;
    case UNSPEC:
      goto L2567;
    case MINUS:
      goto L282;
    case MULT:
      goto L306;
    case IOR:
      goto L436;
    case NEG:
      goto L486;
    case NOT:
      goto L520;
    default:
     break;
   }
 L2564: ATTRIBUTE_UNUSED_LABEL
  if (bit_operator (x1, HImode))
    {
      operands[3] = x1;
      goto L472;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L242;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L243;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L243: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 32;
    }
 L249: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 33;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L2567: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 0)
    goto L253;
  x1 = XEXP (x0, 0);
  goto L48;

 L253: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L254;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L254: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (incdec_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L255;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L255: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 34;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L283;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L284;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L284: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 39;
    }
 L290: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 40;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L306: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L2568;
  x1 = XEXP (x0, 0);
  goto L48;

 L2568: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L307;
    case ZERO_EXTEND:
      goto L323;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L48;

 L307: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L308;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L309;
  x1 = XEXP (x0, 0);
  goto L48;

 L309: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L310;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L310: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 43;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L323: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L324;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L324: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L325;
  x1 = XEXP (x0, 0);
  goto L48;

 L325: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      return 45;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L436: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == AND)
    goto L437;
  goto L2564;

 L437: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L438;
    }
  goto L2564;

 L438: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (single_one_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L439;
    }
  goto L2564;

 L439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      return 55;
    }
  goto L2564;

 L486: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L487;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L487: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 63;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L521;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L521: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 70;
    }
 L526: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 71;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L473;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, HImode))
    {
      operands[2] = x2;
      return 60;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L2542: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L258;
    }
  goto L48;

 L258: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L2570;
  x1 = XEXP (x0, 0);
  goto L48;

 L2570: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L259;
    case UNSPEC:
      goto L2578;
    case MINUS:
      goto L294;
    case MULT:
      goto L314;
    case IOR:
      goto L443;
    case NEG:
      goto L491;
    case NOT:
      goto L530;
    default:
     break;
   }
 L2575: ATTRIBUTE_UNUSED_LABEL
  if (bit_operator (x1, SImode))
    {
      operands[3] = x1;
      goto L477;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L259: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L2580;
  x1 = XEXP (x0, 0);
  goto L48;

 L2580: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L350;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L260;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L351;
  x1 = XEXP (x0, 0);
  goto L48;

 L351: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == MEM)
    goto L352;
  x1 = XEXP (x0, 0);
  goto L48;

 L352: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == POST_INC)
    goto L353;
  x1 = XEXP (x0, 0);
  goto L48;

 L353: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L354;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L354: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L355;
  x1 = XEXP (x0, 0);
  goto L48;

 L355: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == MEM)
    goto L356;
  x1 = XEXP (x0, 0);
  goto L48;

 L356: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == POST_INC)
    goto L357;
  x1 = XEXP (x0, 0);
  goto L48;

 L357: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L358;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L359;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L359: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MAC))
    {
      return 48;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L261;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L261: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 35;
    }
 L267: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 36;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L2578: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 0)
    goto L271;
  x1 = XEXP (x0, 0);
  goto L48;

 L271: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L272;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L272: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (incdec_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L273;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L273: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 37;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L294: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L295;
    }
 L300: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L301;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L295: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L296;
    }
  x2 = XEXP (x1, 0);
  goto L300;

 L296: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 41;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L300;

 L301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L302;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L302: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 42;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L2581;
  x1 = XEXP (x0, 0);
  goto L48;

 L2581: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L315;
    case ZERO_EXTEND:
      goto L330;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L48;

 L315: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode)
    goto L2584;
  x1 = XEXP (x0, 0);
  goto L48;

 L2584: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MEM)
    goto L339;
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L316;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L339: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == POST_INC)
    goto L340;
  x1 = XEXP (x0, 0);
  goto L48;

 L340: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L341;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L341: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L342;
  x1 = XEXP (x0, 0);
  goto L48;

 L342: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == MEM)
    goto L343;
  x1 = XEXP (x0, 0);
  goto L48;

 L343: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == POST_INC)
    goto L344;
  x1 = XEXP (x0, 0);
  goto L48;

 L344: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L345;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L345: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MAC))
    {
      return 47;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L317;
  x1 = XEXP (x0, 0);
  goto L48;

 L317: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L318;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L318: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 44;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L330: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L331;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L332;
  x1 = XEXP (x0, 0);
  goto L48;

 L332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L333;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L333: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 46;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L444;
  goto L2575;

 L444: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L2586;
  goto L2575;

 L2586: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ASHIFT)
    goto L453;
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L445;
    }
  goto L2575;

 L453: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L454;
    }
  goto L2575;

 L454: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L455;
  goto L2575;

 L455: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 65280L)
    goto L456;
  goto L2575;

 L456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 57;
    }
  goto L2575;

 L445: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (single_one_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L446;
    }
  goto L2575;

 L446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L447;
    }
  goto L2575;

 L447: ATTRIBUTE_UNUSED_LABEL
  if (((INTVAL (operands[3]) & 0xffff) != 0))
    {
      return 56;
    }
  x1 = XEXP (x0, 1);
  goto L2575;

 L491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L492;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L492: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 64;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L531;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L531: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 72;
    }
 L536: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 73;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L478;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      return 61;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L2544: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L495;
    }
  goto L48;

 L495: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L2587;
  x1 = XEXP (x0, 0);
  goto L48;

 L2587: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L496;
    case ABS:
      goto L506;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L48;

 L496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L497;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L497: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 65;
    }
 L502: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 66;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L507;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L507: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 67;
    }
 L512: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 68;
    }
  x1 = XEXP (x0, 0);
  goto L48;

 L49: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L2589;
    case HImode:
      goto L2590;
    default:
      break;
    }
  goto L599;

 L2589: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L50;
    }
  goto L599;

 L50: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, QImode))
    {
      operands[1] = x1;
      return 5;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L2590: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L88;
    }
  goto L599;

 L88: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, HImode))
    {
      operands[1] = x1;
      return 10;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L107: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case HImode:
      goto L2591;
    case SImode:
      goto L2592;
    case QImode:
      goto L2593;
    default:
      break;
    }
 L212: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == COMPARE)
    goto L213;
  x1 = XEXP (x0, 0);
  goto L599;

 L2591: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTRACT:
      goto L108;
    case AND:
      goto L199;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L2594;
    default:
      goto L212;
   }
 L2594: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      return 23;
    }
  goto L212;

 L108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L2598;
    case HImode:
      goto L2599;
    default:
      break;
    }
  goto L212;

 L2598: ATTRIBUTE_UNUSED_LABEL
  if (bit_memory_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L109;
    }
  goto L212;

 L109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L)
    goto L110;
  goto L212;

 L110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L111;
    }
  goto L212;

 L111: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 15;
    }
  x1 = XEXP (x0, 1);
  goto L212;

 L2599: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L116;
    }
  goto L212;

 L116: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L)
    goto L117;
  goto L212;

 L117: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L118;
    }
  goto L212;

 L118: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 16;
    }
  x1 = XEXP (x0, 1);
  goto L212;

 L199: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L200;
    }
  goto L212;

 L200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == -256L)
    {
      return 24;
    }
  goto L212;

 L2592: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTRACT:
      goto L139;
    case AND:
      goto L208;
    case SUBREG:
    case REG:
    case ADDRESSOF:
      goto L2596;
    default:
      goto L212;
   }
 L2596: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L204;
    }
  goto L212;

 L139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L2601;
  if (general_operand_src (x2, QImode))
    {
      operands[0] = x2;
      goto L133;
    }
  goto L212;

 L2601: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == ZERO_EXTEND)
    goto L185;
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L140;
    }
  goto L212;

 L185: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand_src (x3, QImode))
    {
      operands[0] = x3;
      goto L186;
    }
  goto L212;

 L186: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L)
    goto L187;
  goto L212;

 L187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L188;
  goto L212;

 L188: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L189;
    }
  goto L212;

 L189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 7L
      && ((TARGET_H8300H || TARGET_H8300S))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 21;
    }
  goto L212;

 L140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L)
    goto L165;
  goto L212;

 L165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L166;
  if (const_int_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L142;
    }
  goto L212;

 L166: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L167;
    }
  goto L212;

 L167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 7L
      && (TARGET_H8300H || TARGET_H8300S))
    {
      return 20;
    }
  goto L212;

 L142: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) <= 15))
    {
      return 18;
    }
 L159: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 19;
    }
  x1 = XEXP (x0, 1);
  goto L212;

 L133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L)
    goto L134;
  goto L212;

 L134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L135;
    }
  goto L212;

 L135: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 17;
    }
  x1 = XEXP (x0, 1);
  goto L212;

 L208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L209;
    }
  goto L212;

 L209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == -65536L)
    {
      return 26;
    }
  goto L212;

 L204: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 25;
    }
  x1 = XEXP (x0, 1);
  goto L212;

 L2593: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      return 22;
    }
  goto L212;

 L213: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L2602;
    case HImode:
      goto L2603;
    case SImode:
      goto L2604;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L2602: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L214;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[1] = x2;
      return 27;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L2603: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L219;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L220;
    }
 L225: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L226;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L220: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 28;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L225;

 L226: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 29;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L2604: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L231;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L231: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L232;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L232: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 30;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L585: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case HImode:
      goto L2605;
    case SImode:
      goto L2606;
    default:
      break;
    }
 L539: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L540;
    case LABEL_REF:
      goto L558;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L599;

 L2605: ATTRIBUTE_UNUSED_LABEL
  if (jump_address_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L586;
    }
  goto L539;

 L586: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 80;
    }
 L594: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S) && TARGET_NORMAL_MODE))
    {
      return 82;
    }
  x1 = XEXP (x0, 1);
  goto L539;

 L2606: ATTRIBUTE_UNUSED_LABEL
  if (jump_address_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L590;
    }
  goto L539;

 L590: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S) && !TARGET_NORMAL_MODE))
    {
      return 81;
    }
  x1 = XEXP (x0, 1);
  goto L539;

 L540: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L541;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L541: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L542;
  x1 = XEXP (x0, 0);
  goto L599;

 L542: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L543;
  x1 = XEXP (x0, 0);
  goto L599;

 L543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L544;
    case PC:
      goto L553;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L599;

 L544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L545;

 L545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 74;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L554;
  x1 = XEXP (x0, 0);
  goto L599;

 L554: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 75;

 L558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  return 76;

 L41: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, QImode))
    {
      operands[1] = x1;
      goto L42;
    }
  x1 = XEXP (x0, 0);
  goto L78;

 L42: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    {
      return 3;
    }
 L46: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    {
      return 4;
    }
  x1 = XEXP (x0, 0);
  goto L78;

 L79: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, HImode))
    {
      operands[1] = x1;
      goto L80;
    }
  x1 = XEXP (x0, 0);
  goto L90;

 L80: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))
   && !(GET_CODE (operands[0]) == MEM
	&& GET_CODE (XEXP (operands[0], 0)) == PRE_DEC
	&& GET_CODE (XEXP (XEXP (operands[0], 0), 0)) == REG
	&& GET_CODE (operands[1]) == REG
	&& REGNO (XEXP (XEXP (operands[0], 0), 0)) == REGNO (operands[1]))))
    {
      return 8;
    }
 L84: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    {
      return 9;
    }
  x1 = XEXP (x0, 0);
  goto L90;

 L91: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, SImode))
    {
      operands[1] = x1;
      goto L92;
    }
  x1 = XEXP (x0, 0);
  goto L94;

 L92: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    {
      return 11;
    }
  x1 = XEXP (x0, 0);
  goto L94;

 L95: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, SFmode))
    {
      operands[1] = x1;
      goto L96;
    }
  x1 = XEXP (x0, 0);
  goto L98;

 L96: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))))
    {
      return 12;
    }
  x1 = XEXP (x0, 0);
  goto L98;

 L99: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, SImode))
    {
      operands[1] = x1;
      goto L100;
    }
  x1 = XEXP (x0, 0);
  goto L102;

 L100: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300S || TARGET_H8300H)
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))
   && !(GET_CODE (operands[0]) == MEM
	&& GET_CODE (XEXP (operands[0], 0)) == PRE_DEC
	&& GET_CODE (XEXP (XEXP (operands[0], 0), 0)) == REG
	&& GET_CODE (operands[1]) == REG
	&& REGNO (XEXP (XEXP (operands[0], 0), 0)) == REGNO (operands[1]))))
    {
      return 13;
    }
  x1 = XEXP (x0, 0);
  goto L102;

 L103: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand_src (x1, SFmode))
    {
      operands[1] = x1;
      goto L104;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L104: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))))
    {
      return 14;
    }
  x1 = XEXP (x0, 0);
  goto L599;

 L600: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L601;
  x1 = XEXP (x0, 0);
  goto L896;

 L601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (call_insn_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L602;
    }
  x1 = XEXP (x0, 0);
  goto L896;

 L602: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      return 84;
    }
  x1 = XEXP (x0, 0);
  goto L896;

 L2548: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == ZERO_EXTRACT)
    goto L1063;
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L897;
    }
 L2549: ATTRIBUTE_UNUSED_LABEL
  if (bit_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1069;
    }
  goto L1536;

 L1063: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1064;
    }
  goto L1536;

 L1064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L)
    goto L1065;
  goto L1536;

 L1065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1066;
    }
  goto L1536;

 L1066: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, HImode))
    {
      operands[2] = x1;
      return 124;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L897: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L2607;
  x1 = XEXP (x0, 0);
  goto L2549;

 L2607: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L898;
    case SIGN_EXTEND:
      goto L928;
    case ROTATE:
      goto L1005;
    case ZERO_EXTRACT:
      goto L1016;
    case IOR:
      goto L1272;
    case ASHIFTRT:
    case LSHIFTRT:
    case ASHIFT:
      goto L2609;
    default:
      goto L2612;
   }
 L2609: ATTRIBUTE_UNUSED_LABEL
  if (nshift_operator (x1, HImode))
    {
      operands[3] = x1;
      goto L980;
    }
 L2612: ATTRIBUTE_UNUSED_LABEL
  if (iorxor_operator (x1, HImode))
    {
      operands[1] = x1;
      goto L1237;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand_src (x2, QImode))
    {
      operands[1] = x2;
      goto L899;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L899: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 100;
    }
 L904: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 101;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand_src (x2, QImode))
    {
      operands[1] = x2;
      goto L929;
    }
 L933: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L934;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L929: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 106;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L933;

 L934: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 107;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L1005: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1006;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L1006: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      return 116;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L1016: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L2615;
  x1 = XEXP (x0, 0);
  goto L2549;

 L2615: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == XOR)
    goto L1024;
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1017;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L1024: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1025;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L1025: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L1026;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L1026: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L)
    goto L1027;
  x1 = XEXP (x0, 0);
  goto L2549;

 L1027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1028;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L1028: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300
   && (1 << INTVAL (operands[2])) == INTVAL (operands[3])))
    {
      return 119;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L1017: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L)
    goto L1018;
  x1 = XEXP (x0, 0);
  goto L2549;

 L1018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L1019;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L1019: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300))
    {
      return 118;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L1272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode)
    goto L2616;
  goto L2612;

 L2616: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L1273;
    case LSHIFTRT:
      goto L1280;
    case ZERO_EXTEND:
      goto L1287;
    default:
     break;
   }
  goto L2612;

 L1273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1274;
    }
  goto L2612;

 L1274: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L)
    goto L1275;
  goto L2612;

 L1275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      return 149;
    }
  goto L2612;

 L1280: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1281;
    }
  goto L2612;

 L1281: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L)
    goto L1282;
  goto L2612;

 L1282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[2] = x2;
      return 150;
    }
  goto L2612;

 L1287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode)
    goto L2619;
  goto L2612;

 L2619: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1288;
    }
 L2620: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1296;
    }
  goto L2612;

 L1288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFT)
    goto L1289;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2620;

 L1289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1290;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2620;

 L1290: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L)
    {
      return 151;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2620;

 L1296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFT)
    goto L1297;
  goto L2612;

 L1297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L1298;
  goto L2612;

 L1298: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (memory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1299;
    }
  goto L2612;

 L1299: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L)
    {
      return 152;
    }
  goto L2612;

 L980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L981;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L981: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L982;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L982: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 113;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L1237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1238;
  x1 = XEXP (x0, 0);
  goto L2549;

 L1238: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[2] = x3;
      goto L1239;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L1239: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[3] = x2;
      return 144;
    }
  x1 = XEXP (x0, 0);
  goto L2549;

 L1069: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L2621;
  x1 = XEXP (x0, 0);
  goto L1536;

 L2621: ATTRIBUTE_UNUSED_LABEL
  if (bit_operator (x1, HImode))
    {
      operands[4] = x1;
      goto L1070;
    }
 L2622: ATTRIBUTE_UNUSED_LABEL
  if (bit_operator (x1, HImode))
    {
      operands[5] = x1;
      goto L1078;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1070: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1071;
  goto L2622;

 L1071: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1072;
    }
  goto L2622;

 L1072: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L1073;
  goto L2622;

 L1073: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1074;
    }
  goto L2622;

 L1074: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (bit_operand (x2, HImode))
    {
      operands[3] = x2;
      return 125;
    }
  goto L2622;

 L1078: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1079;
  x1 = XEXP (x0, 0);
  goto L1536;

 L1079: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1080;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1080: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L1081;
  x1 = XEXP (x0, 0);
  goto L1536;

 L1081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (immediate_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L1082;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1082: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1083;
  x1 = XEXP (x0, 0);
  goto L1536;

 L1083: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L1084;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1084: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L1085;
  x1 = XEXP (x0, 0);
  goto L1536;

 L1085: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (immediate_operand (x3, HImode))
    {
      operands[4] = x3;
      return 126;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L2550: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == ZERO_EXTRACT)
    goto L1088;
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L907;
    }
  goto L1536;

 L1088: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1089;
    }
  goto L1536;

 L1089: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L2623;
  goto L1536;

 L2623: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x2, 0) == XWINT (x2, 0))
    switch ((int) XWINT (x2, 0))
      {
      case 1L:
        goto L1090;
      case 8L:
        goto L1114;
      default:
        break;
      }
  goto L1536;

 L1090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1091;
    }
  goto L1536;

 L1091: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L2626;
  x1 = XEXP (x0, 0);
  goto L1536;

 L2626: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == LSHIFTRT)
    goto L1099;
  if (register_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L1092;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1100;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L2627;
  x1 = XEXP (x0, 0);
  goto L1536;

 L2627: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1101;
    }
 L2628: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 16L
      && ((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16))
    {
      return 129;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1101: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16
   && INTVAL (operands[3]) < 16))
    {
      return 128;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2628;

 L1092: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) < 16))
    {
      return 127;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8L)
    goto L1115;
  goto L1536;

 L1115: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L2630;
  x1 = XEXP (x0, 0);
  goto L1536;

 L2630: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == LSHIFTRT)
    goto L1123;
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L1116;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1124;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8L
      && (TARGET_H8300H || TARGET_H8300S))
    {
      return 131;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1116: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return 130;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L907: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L2631;
  x1 = XEXP (x0, 0);
  goto L1536;

 L2631: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L1536;

 L2547: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L965;
    }
  goto L1536;

 L965: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L2694;
  x1 = XEXP (x0, 0);
  goto L1536;

 L2694: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == ROTATE)
    goto L1000;
  if (nshift_operator (x1, QImode))
    {
      operands[3] = x1;
      goto L966;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1001;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1001: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, QImode))
    {
      operands[2] = x2;
      return 115;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L967;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L967: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L968;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L968: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 112;
    }
  x1 = XEXP (x0, 0);
  goto L1536;

 L1537: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == IF_THEN_ELSE)
    goto L1538;
  goto ret0;

 L1538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case EQ:
      goto L1539;
    case NE:
      goto L1552;
    default:
     break;
   }
  goto ret0;

 L1539: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L1540;
  goto ret0;

 L1540: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L1541;
  goto ret0;

 L1541: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, QImode))
    {
      operands[0] = x5;
      goto L1542;
    }
  goto ret0;

 L1542: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L1543;
  goto ret0;

 L1543: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7L)
    goto L1544;
  goto ret0;

 L1544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L1545;
  goto ret0;

 L1545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1546;
  goto ret0;

 L1546: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1547;

 L1547: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 174;
    }
  goto ret0;

 L1552: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L1553;
  goto ret0;

 L1553: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L1554;
  goto ret0;

 L1554: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, QImode))
    {
      operands[0] = x5;
      goto L1555;
    }
  goto ret0;

 L1555: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L1556;
  goto ret0;

 L1556: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7L)
    goto L1557;
  goto ret0;

 L1557: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L1558;
  goto ret0;

 L1558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1559;
  goto ret0;

 L1559: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1560;

 L1560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 175;
    }
  goto ret0;

 L1493: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L2695;
  goto ret0;

 L2695: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == SUBREG)
    goto L2697;
  goto ret0;

 L2697: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1L:
      goto L1494;
    case 3L:
      goto L1500;
    default:
      break;
    }
  goto ret0;

 L1494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L1495;
  goto ret0;

 L1495: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1496;
    }
  goto ret0;

 L1496: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L)
    {
      return 170;
    }
  goto ret0;

 L1500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L1501;
  goto ret0;

 L1501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1502;
    }
  goto ret0;

 L1502: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L2699;
  goto ret0;

 L2699: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 8L:
        goto L2702;
      case 16L:
        goto L2703;
      case 24L:
        goto L2704;
      default:
        break;
      }
  goto ret0;

 L2702: ATTRIBUTE_UNUSED_LABEL
  return 171;

 L2703: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 172;
    }
  goto ret0;

 L2704: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 173;
    }
  goto ret0;
 ret0:
  return -1;
}

int
recog (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case PARALLEL:
      goto L2483;
    case SET:
      goto L234;
    case CALL:
      goto L596;
    case CONST_INT:
      goto L2484;
    case RETURN:
      goto L2488;
    case UNSPEC_VOLATILE:
      goto L2489;
    default:
     break;
   }
  goto ret0;

 L2483: ATTRIBUTE_UNUSED_LABEL
  return recog_3 (x0, insn, pnum_clobbers);

 L234: ATTRIBUTE_UNUSED_LABEL
  return recog_5 (x0, insn, pnum_clobbers);

 L596: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (call_insn_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L597;
    }
  goto ret0;

 L597: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      return 83;
    }
  goto ret0;

 L2484: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x0, 0) == 0L)
    {
      return 85;
    }
  goto ret0;

 L2488: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return 98;
    }
  goto ret0;

 L2489: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 1
      && XINT (x0, 1) == 1)
    goto L894;
  goto ret0;

 L894: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0L)
    {
      return 99;
    }
  goto ret0;
 ret0:
  return -1;
}

static rtx
split_1 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case HImode:
      goto L2711;
    case SImode:
      goto L2713;
    default:
      break;
    }
 L1806: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L1807;
  goto ret0;

 L2711: ATTRIBUTE_UNUSED_LABEL
  if (stack_pointer_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1596;
    }
 L2712: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1609;
    }
  goto L1806;

 L1596: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == PLUS)
    goto L1597;
  x1 = XEXP (x0, 0);
  goto L2712;

 L1597: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1598;
  x1 = XEXP (x0, 0);
  goto L2712;

 L1598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_gt_2_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L1599;
    }
  x1 = XEXP (x0, 0);
  goto L2712;

 L1599: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300 && flow2_completed))
    {
      return gen_split_188 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L2712;

 L1609: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L2714;
  x1 = XEXP (x0, 0);
  goto L1806;

 L2714: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1610;
    case ZERO_EXTEND:
      goto L1621;
    case IOR:
      goto L1707;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1611;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (two_insn_adds_subs_operand (x2, HImode))
    {
      operands[1] = x2;
      return gen_split_190 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand_src (x2, QImode))
    {
      operands[1] = x2;
      goto L1622;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1622: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return gen_split_240 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1707: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L1708;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1708: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1709;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == ASHIFT)
    goto L1710;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L1711;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1711: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (memory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1712;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1712: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L
      && ((TARGET_H8300H || TARGET_H8300S)
   && reload_completed
   && byte_accesses_mergeable_p (XEXP (operands[2], 0), XEXP (operands[1], 0))))
    {
      return gen_split_271 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L2713: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1614;
    }
  goto L1806;

 L1614: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L2717;
  x1 = XEXP (x0, 0);
  goto L1806;

 L2717: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L1690;
    case ZERO_EXTEND:
      goto L1626;
    case SIGN_EXTEND:
      goto L1636;
    case ZERO_EXTRACT:
      goto L1659;
    case AND:
      goto L1665;
    case IOR:
      goto L1716;
    case ASHIFT:
      goto L1802;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L1691;
 L1615: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L1616;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1691: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L2725;
  goto L1615;

 L2725: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NOT)
    goto L1700;
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1692;
    }
  goto L1615;

 L1700: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1701;
    }
  goto L1615;

 L1701: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L1702;
  goto L1615;

 L1702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1703;
    }
  x2 = XEXP (x1, 0);
  goto L1615;

 L1703: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)&& reload_completed))
    {
      return gen_split_270 (operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L1615;

 L1692: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L1693;
  goto L1615;

 L1693: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1694;
    }
  x2 = XEXP (x1, 0);
  goto L1615;

 L1694: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)&& reload_completed))
    {
      return gen_split_269 (operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L1615;

 L1616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (two_insn_adds_subs_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1617;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1617: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300H || TARGET_H8300S))
    {
      return gen_split_192 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand_src (x2, QImode))
    {
      operands[1] = x2;
      goto L1627;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1627: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && reg_overlap_mentioned_p (operands[0], operands[1])
   && reload_completed))
    {
      return gen_split_242 (operands);
    }
 L1632: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && reload_completed))
    {
      return gen_split_243 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1637;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1637: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)&& reload_completed))
    {
      return gen_split_247 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1660;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 8L)
    goto L1661;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 23L
      && ((TARGET_H8300H || TARGET_H8300S)&& reload_completed))
    {
      return gen_split_265 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L2726;
  x1 = XEXP (x0, 0);
  goto L1806;

 L2726: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      goto L1666;
    case LSHIFTRT:
      goto L1684;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1667;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1667: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 15L)
    goto L1668;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1668: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 2147450880L
      && ((TARGET_H8300H || TARGET_H8300S)&& reload_completed))
    {
      return gen_split_266 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1684: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1685;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1685: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 9L)
    goto L1686;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 4194304L
      && ((TARGET_H8300H || TARGET_H8300S)&& reload_completed))
    {
      return gen_split_268 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L2728;
  x1 = XEXP (x0, 0);
  goto L1806;

 L2728: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L1717;
    case ASHIFT:
      goto L1759;
    case AND:
      goto L1768;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1717: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode)
    goto L2731;
  x1 = XEXP (x0, 0);
  goto L1806;

 L2731: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1718;
    }
 L2732: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1729;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1718: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L1719;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2732;

 L1719: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L1720;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2732;

 L1720: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L1721;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2732;

 L1721: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (memory_operand (x5, QImode))
    {
      operands[2] = x5;
      goto L1722;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2732;

 L1722: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L1723;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2732;

 L1723: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 65280L
      && ((TARGET_H8300H || TARGET_H8300S)&& reload_completed))
    {
      return gen_split_272 (operands);
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2732;

 L1729: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L1730;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1730: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L1731;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1731: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1732;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L
      && ((TARGET_H8300H || TARGET_H8300S)&& reload_completed))
    {
      return gen_split_273 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1759: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1760;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1760: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L)
    goto L1761;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1761: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L1762;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1762: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1763;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1763: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 24L
      && ((TARGET_H8300H || TARGET_H8300S)&& reload_completed))
    {
      return gen_split_276 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1768: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L1769;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1769: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L1770;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1770: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (memory_operand (x5, QImode))
    {
      operands[1] = x5;
      goto L1771;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1771: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 16L)
    goto L1772;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1772: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16711680L)
    goto L1773;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ASHIFT)
    goto L1774;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1774: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L1775;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1775: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (memory_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1776;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1776: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 24L
      && ((TARGET_H8300H || TARGET_H8300S)&& reload_completed))
    {
      return gen_split_277 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L1803;
  x1 = XEXP (x0, 0);
  goto L1806;

 L1803: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1804;
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 7L
      && ((TARGET_H8300H || TARGET_H8300S)&& reload_completed))
    {
      return gen_split_280 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L1806;

 L1807: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == IF_THEN_ELSE)
    goto L1808;
  goto ret0;

 L1808: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case EQ:
      goto L1809;
    case NE:
      goto L1822;
    default:
     break;
   }
  goto ret0;

 L1809: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L1810;
  goto ret0;

 L1810: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L1811;
  goto ret0;

 L1811: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, QImode))
    {
      operands[0] = x5;
      goto L1812;
    }
  goto ret0;

 L1812: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L1813;
  goto ret0;

 L1813: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7L)
    goto L1814;
  goto ret0;

 L1814: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L1815;
  goto ret0;

 L1815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1816;
  goto ret0;

 L1816: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1817;

 L1817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return gen_split_281 (operands);
    }
  goto ret0;

 L1822: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L1823;
  goto ret0;

 L1823: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L1824;
  goto ret0;

 L1824: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, QImode))
    {
      operands[0] = x5;
      goto L1825;
    }
  goto ret0;

 L1825: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L1826;
  goto ret0;

 L1826: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7L)
    goto L1827;
  goto ret0;

 L1827: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L1828;
  goto ret0;

 L1828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1829;
  goto ret0;

 L1829: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1830;

 L1830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return gen_split_282 (operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
split_insns (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case PARALLEL:
      goto L2705;
    case SET:
      goto L1595;
    default:
     break;
   }
  goto ret0;

 L2705: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2)
    goto L1562;
  goto ret0;

 L1562: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1671;
  goto ret0;

 L1671: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1672;
    }
  if (GET_CODE (x2) == CC0)
    goto L1564;
 L1640: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L1641;
    }
  goto ret0;

 L1672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L2706;
  x2 = XEXP (x1, 0);
  goto L1640;

 L2706: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case AND:
      goto L1673;
    case IOR:
      goto L1737;
    case PLUS:
      goto L1781;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L1640;

 L1673: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L1674;
  x2 = XEXP (x1, 0);
  goto L1640;

 L1674: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1675;
    }
  x2 = XEXP (x1, 0);
  goto L1640;

 L1675: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, QImode))
    {
      operands[2] = x4;
      goto L1676;
    }
  x2 = XEXP (x1, 0);
  goto L1640;

 L1676: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1677;
    }
  x2 = XEXP (x1, 0);
  goto L1640;

 L1677: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1678;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1640;

 L1678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[4] = x2;
      goto L1679;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1640;

 L1679: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[2]) <= 15
   && INTVAL (operands[3]) == ((-1 << INTVAL (operands[2])) & 0xffff)&& reload_completed))
    {
      return gen_split_267 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1640;

 L1737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L1738;
  x2 = XEXP (x1, 0);
  goto L1640;

 L1738: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1739;
    }
  x2 = XEXP (x1, 0);
  goto L1640;

 L1739: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 23L)
    goto L1740;
  x2 = XEXP (x1, 0);
  goto L1640;

 L1740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L1741;
  x2 = XEXP (x1, 0);
  goto L1640;

 L1741: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1742;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1640;

 L1742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1743;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1640;

 L1743: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && flow2_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])))
    {
      return gen_split_274 (operands);
    }
 L1754: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && flow2_completed
   && !(find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
        && REGNO (operands[0]) != REGNO (operands[1]))))
    {
      return gen_split_275 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1640;

 L1781: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L1782;
  x2 = XEXP (x1, 0);
  goto L1640;

 L1782: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1783;
    }
  x2 = XEXP (x1, 0);
  goto L1640;

 L1783: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8388608L)
    goto L1784;
  x2 = XEXP (x1, 0);
  goto L1640;

 L1784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L1785;
  x2 = XEXP (x1, 0);
  goto L1640;

 L1785: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1786;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1640;

 L1786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1787;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1640;

 L1787: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && flow2_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])))
    {
      return gen_split_278 (operands);
    }
 L1798: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && flow2_completed
   && !(find_regno_note (insn, REG_DEAD, REGNO (operands[1]))
        && REGNO (operands[0]) != REGNO (operands[1]))))
    {
      return gen_split_279 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1640;

 L1564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L1575;
  goto ret0;

 L1575: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L2710;
  if (general_operand_src (x3, QImode))
    {
      operands[0] = x3;
      goto L1566;
    }
  goto ret0;

 L2710: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == ZERO_EXTEND)
    goto L1586;
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L1576;
    }
  goto ret0;

 L1586: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand_src (x4, QImode))
    {
      operands[0] = x4;
      goto L1587;
    }
  goto ret0;

 L1587: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L1588;
  goto ret0;

 L1588: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == AND)
    goto L1589;
  goto ret0;

 L1589: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1590;
    }
  goto ret0;

 L1590: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7L)
    goto L1591;
  goto ret0;

 L1591: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1592;
  goto ret0;

 L1592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1593;
    }
  goto ret0;

 L1593: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)&& reload_completed
   && !EXTRA_CONSTRAINT (operands[0], 'U')))
    {
      return gen_split_185 (operands);
    }
  goto ret0;

 L1576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L1577;
  goto ret0;

 L1577: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1578;
    }
  goto ret0;

 L1578: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1579;
  goto ret0;

 L1579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1580;
    }
  goto ret0;

 L1580: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && INTVAL (operands[1]) >= 16&& reload_completed))
    {
      return gen_split_184 (operands);
    }
  goto ret0;

 L1566: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L1567;
  goto ret0;

 L1567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L1568;
    }
  goto ret0;

 L1568: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1569;
  goto ret0;

 L1569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1570;
    }
  goto ret0;

 L1570: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)&& reload_completed
   && !EXTRA_CONSTRAINT (operands[0], 'U')))
    {
      return gen_split_183 (operands);
    }
  goto ret0;

 L1641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nshift_operator (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1642;
    }
  goto ret0;

 L1642: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1643;
  goto ret0;

 L1643: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L1644;
    }
  goto ret0;

 L1644: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1645;
  goto ret0;

 L1645: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L1646;
    }
  goto ret0;

 L1646: ATTRIBUTE_UNUSED_LABEL
  if ((flow2_completed
   && find_regno_note (insn, REG_DEAD, REGNO (operands[1]))))
    {
      return gen_split_258 (operands);
    }
 L1655: ATTRIBUTE_UNUSED_LABEL
  if ((flow2_completed
   && !find_regno_note (insn, REG_DEAD, REGNO (operands[1]))))
    {
      return gen_split_259 (operands);
    }
  goto ret0;

 L1595: ATTRIBUTE_UNUSED_LABEL
  return split_1 (x0, insn);
 ret0:
  return 0;
}

static rtx
peephole2_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case HImode:
      goto L2734;
    case SImode:
      goto L2735;
    case QImode:
      goto L2738;
    default:
      break;
    }
 L2213: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == CC0)
    goto L2214;
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2185;
    }
 L2194: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2195;
    }
  goto ret0;

 L2734: ATTRIBUTE_UNUSED_LABEL
  if (stack_pointer_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1603;
    }
 L2736: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L2112;
    }
  goto L2213;

 L1603: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == PLUS)
    goto L1604;
  x1 = XEXP (x0, 0);
  goto L2736;

 L1604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1605;
  x1 = XEXP (x0, 0);
  goto L2736;

 L1605: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_ge_8_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1606;
    }
  x1 = XEXP (x0, 0);
  goto L2736;

 L1606: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (0);
  if (tem == NULL_RTX)
    goto L2736;
  x1 = PATTERN (tem);
  if ((TARGET_H8300))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_189 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L2736;

 L2112: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L2739;
 L2082: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L2083;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L2739: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L2113;
    case AND:
      goto L2410;
    default:
     break;
   }
  goto L2082;

 L2113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2114;
  goto L2082;

 L2114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (incdec_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L2115;
    }
  goto L2082;

 L2115: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2082;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2116;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2116: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L2117;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2117: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    goto L2118;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2118: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  if (tem == NULL_RTX)
    goto L2082;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2119;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2120;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2121;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2122;
    }
  x1 = XEXP (x0, 1);
  goto L2082;

 L2122: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2123;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2123: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2124;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2124: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2125;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2125: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L2126;

 L2126: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && (TARGET_H8300H || TARGET_H8300S))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_302 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L2082;

 L2410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2411;
  goto L2082;

 L2411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_qi_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2412;
    }
  goto L2082;

 L2412: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2082;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2413;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L2414;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    goto L2415;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2415: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  if (tem == NULL_RTX)
    goto L2082;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2416;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2416: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2417;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2418;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2418: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2419;
    }
  x1 = XEXP (x0, 1);
  goto L2082;

 L2419: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2420;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2420: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2421;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2421: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2422;
  x1 = XEXP (x0, 1);
  goto L2082;

 L2422: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L2423;

 L2423: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && (peep2_reg_dead_p (2, operands[0])))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_323 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L2082;

 L2083: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2213;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2084;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2085;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L2086;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2086: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2087;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2087: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L2088;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L2088: ATTRIBUTE_UNUSED_LABEL
  if ((REG_P (operands[0]) && REG_P (operands[2])
   && REGNO (operands[0]) != REGNO (operands[2])
   && (CONST_OK_FOR_J (INTVAL (operands[1]))
       || CONST_OK_FOR_L (INTVAL (operands[1]))
       || CONST_OK_FOR_N (INTVAL (operands[1])))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_299 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L2735: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L1980;
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2102;
    }
  goto L2213;

 L1980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L2741;
    case HImode:
      goto L2742;
    default:
      break;
    }
  goto L2213;

 L2741: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PRE_DEC)
    goto L1981;
  goto L2213;

 L1981: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L1982;
  goto L2213;

 L1982: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1983;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L1983: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2213;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L1984;
  x1 = XEXP (x0, 0);
  goto L2213;

 L1984: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1985;
  x1 = XEXP (x0, 0);
  goto L2213;

 L1985: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PRE_DEC)
    goto L1986;
  x1 = XEXP (x0, 0);
  goto L2213;

 L1986: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L1987;
  x1 = XEXP (x0, 0);
  goto L2213;

 L1987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L2743;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2743: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1988;
    }
 L2744: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2066;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L1988: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  if (tem == NULL_RTX)
    goto L2744;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L1989;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2744;

 L1989: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1990;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2744;

 L1990: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PRE_DEC)
    goto L1991;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2744;

 L1991: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L1992;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2744;

 L1992: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L2745;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2744;

 L2745: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1993;
    }
 L2746: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2037;
    }
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2744;

 L1993: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (3);
  if (tem == NULL_RTX)
    goto L2746;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L1994;
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2746;

 L1994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1995;
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2746;

 L1995: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PRE_DEC)
    goto L1996;
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2746;

 L1996: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L1997;
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2746;

 L1997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1998;
    }
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2746;

 L1998: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && !TARGET_NORMAL_MODE
   && REGNO (operands[0]) == 0
   && REGNO (operands[1]) == 1
   && REGNO (operands[2]) == 2
   && REGNO (operands[3]) == 3))
    {
      *_pmatch_len = 3;
      tem = gen_peephole2_293 (insn, operands);
      if (tem != 0)
        return tem;
    }
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2746;

 L2037: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && !TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0
	&& REGNO (operands[1]) == 1
	&& REGNO (operands[2]) == 2)
       || (REGNO (operands[0]) == 4
	   && REGNO (operands[1]) == 5
	   && REGNO (operands[2]) == 6))))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_295 (insn, operands);
      if (tem != 0)
        return tem;
    }
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2744;

 L2066: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && !TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1)
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3)
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_297 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L2742: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PRE_DEC)
    goto L2003;
  goto L2213;

 L2003: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L2004;
  goto L2213;

 L2004: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2005;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L2005: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2213;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2006;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2006: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2007;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2007: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PRE_DEC)
    goto L2008;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2008: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L2009;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2009: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L2747;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2747: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2010;
    }
 L2748: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2078;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L2010: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  if (tem == NULL_RTX)
    goto L2748;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2011;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2748;

 L2011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2012;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2748;

 L2012: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PRE_DEC)
    goto L2013;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2748;

 L2013: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L2014;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2748;

 L2014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L2749;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2748;

 L2749: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2015;
    }
 L2750: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2054;
    }
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2748;

 L2015: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (3);
  if (tem == NULL_RTX)
    goto L2750;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2016;
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2750;

 L2016: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2017;
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2750;

 L2017: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PRE_DEC)
    goto L2018;
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2750;

 L2018: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L2019;
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2750;

 L2019: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2020;
    }
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2750;

 L2020: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && TARGET_NORMAL_MODE
   && REGNO (operands[0]) == 0
   && REGNO (operands[1]) == 1
   && REGNO (operands[2]) == 2
   && REGNO (operands[3]) == 3))
    {
      *_pmatch_len = 3;
      tem = gen_peephole2_294 (insn, operands);
      if (tem != 0)
        return tem;
    }
  tem = peep2_next_insn (2);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2750;

 L2054: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0
	&& REGNO (operands[1]) == 1
	&& REGNO (operands[2]) == 2)
       || (REGNO (operands[0]) == 4
	   && REGNO (operands[1]) == 5
	   && REGNO (operands[2]) == 6))))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_296 (insn, operands);
      if (tem != 0)
        return tem;
    }
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 1);
  goto L2748;

 L2078: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_H8300S && TARGET_NORMAL_MODE
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1)
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3)
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_298 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L2102: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L2752;
 L2092: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2093;
    }
 L2176: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2177;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L2752: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PLUS)
    goto L2131;
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2103;
    }
  goto L2092;

 L2131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2132;
  goto L2092;

 L2132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (incdec_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L2133;
    }
  goto L2092;

 L2133: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2092;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2134;
  x1 = XEXP (x0, 1);
  goto L2092;

 L2134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L2135;
  x1 = XEXP (x0, 1);
  goto L2092;

 L2135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    goto L2136;
  x1 = XEXP (x0, 1);
  goto L2092;

 L2136: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  if (tem == NULL_RTX)
    goto L2092;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2137;
  x1 = XEXP (x0, 1);
  goto L2092;

 L2137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2138;
  x1 = XEXP (x0, 1);
  goto L2092;

 L2138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2139;
  x1 = XEXP (x0, 1);
  goto L2092;

 L2139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2140;
    }
  x1 = XEXP (x0, 1);
  goto L2092;

 L2140: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2141;
  x1 = XEXP (x0, 1);
  goto L2092;

 L2141: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2142;
  x1 = XEXP (x0, 1);
  goto L2092;

 L2142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2143;
  x1 = XEXP (x0, 1);
  goto L2092;

 L2143: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L2144;

 L2144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && (TARGET_H8300H || TARGET_H8300S))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_303 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L2092;

 L2103: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2092;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2104;
  x1 = XEXP (x0, 1);
  goto L2092;

 L2104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2105;
  x1 = XEXP (x0, 1);
  goto L2092;

 L2105: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2106;
  x1 = XEXP (x0, 1);
  goto L2092;

 L2106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2107;
  x1 = XEXP (x0, 1);
  goto L2092;

 L2107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2108;
    }
  x1 = XEXP (x0, 1);
  goto L2092;

 L2108: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) != REGNO (operands[1])
   && !CONST_OK_FOR_L (INTVAL (operands[2]))
   && !CONST_OK_FOR_N (INTVAL (operands[2]))
   && ((INTVAL (operands[2]) & 0xff) == INTVAL (operands[2])
       || (INTVAL (operands[2]) & 0xff00) == INTVAL (operands[2])
       || INTVAL (operands[2]) == 0xffff
       || INTVAL (operands[2]) == 0xfffe)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_301 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L2092;

 L2093: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2176;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2094;
  x1 = XEXP (x0, 1);
  goto L2176;

 L2094: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2095;
  x1 = XEXP (x0, 1);
  goto L2176;

 L2095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2096;
  x1 = XEXP (x0, 1);
  goto L2176;

 L2096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2097;
  x1 = XEXP (x0, 1);
  goto L2176;

 L2097: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2098;
    }
  x1 = XEXP (x0, 1);
  goto L2176;

 L2098: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && REG_P (operands[0]) && REG_P (operands[2])
   && REGNO (operands[0]) != REGNO (operands[2])
   && (CONST_OK_FOR_L (INTVAL (operands[1]))
       || CONST_OK_FOR_N (INTVAL (operands[1])))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_300 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L2176;

 L2177: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2213;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2178;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2179;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2180;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2180: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2181;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2181: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 255L
      && ((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !(GET_CODE (operands[1]) == MEM && MEM_VOLATILE_P (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_306 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L2738: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L2167;
    }
  goto L2213;

 L2167: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L2168;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L2168: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2213;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2169;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2170;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L2170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2171;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2172;
  x1 = XEXP (x0, 0);
  goto L2213;

 L2172: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 255L
      && ((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[2], operands[1])
   && REGNO (operands[0]) == REGNO (operands[2])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_305 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L2213;

 L2214: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE)
    goto L2215;
  goto ret0;

 L2215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L2753;
    case SImode:
      goto L2754;
    default:
      break;
    }
  goto ret0;

 L2753: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L2216;
    }
  goto ret0;

 L2216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L2755;
  goto ret0;

 L2755: ATTRIBUTE_UNUSED_LABEL
  if (incdec_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2217;
    }
 L2756: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L2232;
    }
 L2757: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 255L)
    goto L2247;
  goto ret0;

 L2217: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2756;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2218;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2756;

 L2218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2219;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2756;

 L2219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2220;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2756;

 L2220: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2221;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2756;

 L2221: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2222;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2756;

 L2222: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2223;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2756;

 L2223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2224;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2756;

 L2224: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L2225;

 L2225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && ((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_310 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2756;

 L2232: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2757;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2233;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2757;

 L2233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2234;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2757;

 L2234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2235;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2757;

 L2235: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (gtle_operator (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2236;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2757;

 L2236: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2237;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2757;

 L2237: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2238;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2757;

 L2238: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2239;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2757;

 L2239: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L2240;

 L2240: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && ((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_311 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2757;

 L2247: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2248;
  goto ret0;

 L2248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2249;
  goto ret0;

 L2249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2250;
  goto ret0;

 L2250: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (gtle_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2251;
    }
  goto ret0;

 L2251: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2252;
  goto ret0;

 L2252: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2253;
  goto ret0;

 L2253: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2254;
  goto ret0;

 L2254: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L2255;

 L2255: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && (TARGET_H8300H || TARGET_H8300S))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_312 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2754: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2261;
    }
  goto ret0;

 L2261: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L2758;
  goto ret0;

 L2758: ATTRIBUTE_UNUSED_LABEL
  if (incdec_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2262;
    }
 L2759: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2277;
    }
 L2760: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 65535L)
    goto L2382;
 L2761: ATTRIBUTE_UNUSED_LABEL
  if (incdec_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2397;
    }
  goto ret0;

 L2262: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2759;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2263;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2759;

 L2263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2264;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2759;

 L2264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2265;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2759;

 L2265: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2266;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2759;

 L2266: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2267;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2759;

 L2267: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2268;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2759;

 L2268: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2269;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2759;

 L2269: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L2270;

 L2270: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && ((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_313 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2759;

 L2277: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2760;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2278;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2279;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2279: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2280;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2280: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2281;
    }
  if (gtle_operator (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2341;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2281: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2282;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2282: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2283;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2284;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2284: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L2285;

 L2285: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L2762;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2762: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == -131072
       || INTVAL (operands[1]) == -65536
       || INTVAL (operands[1]) == 65536
       || INTVAL (operands[1]) == 131072)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_314 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L2763: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((INTVAL (operands[1]) & 0x00ff) == INTVAL (operands[1])
       || (INTVAL (operands[1]) & 0xff00) == INTVAL (operands[1])
       || INTVAL (operands[1]) == 0x0000ffff)
   && INTVAL (operands[1]) != 1
   && INTVAL (operands[1]) != 2))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_315 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L2764: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((INTVAL (operands[1]) | 0x00ff) == -1
	|| (INTVAL (operands[1]) | 0xff00) == -1)
   && INTVAL (operands[1]) != -1
   && INTVAL (operands[1]) != -2))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_316 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L2765: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == -2147483647 - 1
       || (TARGET_H8300S && INTVAL (operands[1]) == 1073741824))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_317 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2341: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2342;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2342: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2343;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2343: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2344;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2344: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L2345;

 L2345: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L2766;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2766: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && !peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))
   && !same_cmp_preceding_p (insn)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_318 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L2767: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && (INTVAL (operands[1]) == 1
	|| (TARGET_H8300S && INTVAL (operands[1]) == 3))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_319 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L2768: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && peep2_reg_dead_p (1, operands[0])
   && ((TARGET_H8300H && INTVAL (operands[1]) == 3)
       || INTVAL (operands[1]) == 7
       || INTVAL (operands[1]) == 15
       || INTVAL (operands[1]) == 31
       || INTVAL (operands[1]) == 63
       || INTVAL (operands[1]) == 127
       || INTVAL (operands[1]) == 255)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_320 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2760;

 L2382: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2761;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2383;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2761;

 L2383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2384;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2761;

 L2384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2385;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2761;

 L2385: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (gtle_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2386;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2761;

 L2386: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2387;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2761;

 L2387: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2388;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2761;

 L2388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2389;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2761;

 L2389: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L2390;

 L2390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && (TARGET_H8300H || TARGET_H8300S))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_321 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2761;

 L2397: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2398;
  goto ret0;

 L2398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2399;
  goto ret0;

 L2399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2400;
  goto ret0;

 L2400: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2401;
    }
  goto ret0;

 L2401: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2402;
  goto ret0;

 L2402: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2403;
  goto ret0;

 L2403: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2404;
  goto ret0;

 L2404: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L2405;

 L2405: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && ((TARGET_H8300H || TARGET_H8300S)
   && !peep2_reg_dead_p (1, operands[0])
   && !same_cmp_following_p (insn)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_322 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2185: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L2186;
    }
  x1 = XEXP (x0, 0);
  goto L2194;

 L2186: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2194;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2187;
  x1 = XEXP (x0, 0);
  goto L2194;

 L2187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2188;
    }
  x1 = XEXP (x0, 0);
  goto L2194;

 L2188: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2189;
  x1 = XEXP (x0, 0);
  goto L2194;

 L2189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2190;
  x1 = XEXP (x0, 0);
  goto L2194;

 L2190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_qi_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2191;
    }
  x1 = XEXP (x0, 0);
  goto L2194;

 L2191: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && (GET_MODE (operands[0]) == QImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == SImode)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && REGNO (operands[0]) == REGNO (operands[2])
   && !reg_overlap_mentioned_p (operands[2], operands[1])
   && !(GET_MODE (operands[1]) != QImode
	&& GET_CODE (operands[1]) == MEM
	&& MEM_VOLATILE_P (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_307 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L2194;

 L2195: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L2771;
  goto ret0;

 L2771: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == AND)
    goto L2428;
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2196;
    }
 L2770: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L2205;
    }
  goto ret0;

 L2428: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2429;
  goto ret0;

 L2429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L2772;
  goto ret0;

 L2772: ATTRIBUTE_UNUSED_LABEL
  if (const_int_qi_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2430;
    }
 L2773: ATTRIBUTE_UNUSED_LABEL
  if (const_int_hi_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2448;
    }
  goto ret0;

 L2430: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2773;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2431;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2431: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L2432;
 L2467: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0]))
    goto L2468;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2432: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    goto L2433;
  x2 = XEXP (x1, 0);
  goto L2467;

 L2433: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  if (tem == NULL_RTX)
    goto L2467;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2434;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 0);
  goto L2467;

 L2434: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2435;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 0);
  goto L2467;

 L2435: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2436;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 0);
  goto L2467;

 L2436: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2437;
    }
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 0);
  goto L2467;

 L2437: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2438;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 0);
  goto L2467;

 L2438: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2439;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 0);
  goto L2467;

 L2439: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2440;
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 0);
  goto L2467;

 L2440: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L2441;

 L2441: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && (peep2_reg_dead_p (2, operands[0])))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_324 (insn, operands);
      if (tem != 0)
        return tem;
    }
  tem = peep2_next_insn (1);
  x1 = PATTERN (tem);
  x2 = XEXP (x1, 0);
  goto L2467;

 L2468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L2469;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2469: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2470;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2470: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_qi_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2471;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2471: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  if (tem == NULL_RTX)
    goto L2773;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2472;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L2473;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    goto L2474;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2474: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (3);
  if (tem == NULL_RTX)
    goto L2773;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2475;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2475: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2476;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2476: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2477;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2477: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L2478;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2478: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2479;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2479: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2480;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2480: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2481;
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2481: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L2482;

 L2482: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && (peep2_reg_dead_p (3, operands[0])
   && (~INTVAL (operands[1]) & INTVAL (operands[2])) == 0))
    {
      *_pmatch_len = 3;
      tem = gen_peephole2_326 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2773;

 L2448: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2449;
  goto ret0;

 L2449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0)
    goto L2450;
  goto ret0;

 L2450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0]))
    goto L2451;
  goto ret0;

 L2451: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2452;
  goto ret0;

 L2452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2453;
  goto ret0;

 L2453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2454;
  goto ret0;

 L2454: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2455;
    }
  goto ret0;

 L2455: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2456;
  goto ret0;

 L2456: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2457;
  goto ret0;

 L2457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2458;
  goto ret0;

 L2458: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L2459;

 L2459: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && (peep2_reg_dead_p (2, operands[0])))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_325 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L2196: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2770;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2197;
  x1 = XEXP (x0, 1);
  goto L2770;

 L2197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2198;
  x1 = XEXP (x0, 1);
  goto L2770;

 L2198: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2199;
  x1 = XEXP (x0, 1);
  goto L2770;

 L2199: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2200;
  x1 = XEXP (x0, 1);
  goto L2770;

 L2200: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 65280L
      && ((TARGET_H8300H || TARGET_H8300S)
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_308 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  goto L2770;

 L2205: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2206;
  goto ret0;

 L2206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L2207;
  goto ret0;

 L2207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2208;
  goto ret0;

 L2208: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L2209;
  goto ret0;

 L2209: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2210;
    }
  goto ret0;

 L2210: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_H8300H || TARGET_H8300S)
   && !MEM_VOLATILE_P (operands[1])
   && (INTVAL (operands[2]) & ~0xffff) == 0
   && INTVAL (operands[2]) != 255))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_309 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

static rtx
peephole2_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L2777;
    case SImode:
      goto L2776;
    default:
      break;
    }
 L2148: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == CC0)
    goto L2149;
  goto ret0;

 L2777: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L1939;
 L2774: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1835;
    }
  goto L2148;

 L1939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == PLUS)
    goto L1940;
  x2 = XEXP (x1, 0);
  goto L2774;

 L1940: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L1941;
  x2 = XEXP (x1, 0);
  goto L2774;

 L1941: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -4L)
    goto L1942;
  x2 = XEXP (x1, 0);
  goto L2774;

 L1942: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1943;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L1943: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L2778;
    case HImode:
      goto L2779;
    default:
      break;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L2778: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L1944;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L1944: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L1945;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L1945: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L1946;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L1946: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -3L)
    goto L1947;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L1947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1948;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L1948: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (0);
  if (tem == NULL_RTX)
    goto L2774;
  x1 = PATTERN (tem);
  if ((TARGET_H8300S && TARGET_NORMAL_MODE))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_290 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L2779: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L1972;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L1972: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == PLUS)
    goto L1973;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L1973: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L1974;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L1974: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -2L)
    goto L1975;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L1975: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1976;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L1976: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (0);
  if (tem == NULL_RTX)
    goto L2774;
  x1 = PATTERN (tem);
  if ((TARGET_H8300S && TARGET_NORMAL_MODE))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_292 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2774;

 L1835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode)
    goto L2780;
  x2 = XEXP (x1, 0);
  goto L2148;

 L2780: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L1836;
    case ASHIFT:
      goto L1851;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2148;

 L1836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1837;
  x2 = XEXP (x1, 0);
  goto L2148;

 L1837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1838;
    }
  x2 = XEXP (x1, 0);
  goto L2148;

 L1838: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1839;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1839: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L1840;

 L1840: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2148;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L1841;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1841: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1842;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1842: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == AND)
    goto L1843;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1843: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1844;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L1845;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1845: ATTRIBUTE_UNUSED_LABEL
  if ((INTVAL (operands[3]) == (255 >> INTVAL (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_283 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1851: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1852;
  x2 = XEXP (x1, 0);
  goto L2148;

 L1852: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1853;
    }
  x2 = XEXP (x1, 0);
  goto L2148;

 L1853: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1854;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L1855;

 L1855: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2148;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L1856;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1857;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == AND)
    goto L1858;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1858: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1859;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1859: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L1860;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1860: ATTRIBUTE_UNUSED_LABEL
  if ((INTVAL (operands[3]) == (255 << INTVAL (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_284 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L2776: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 7)
    goto L1925;
 L2775: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1865;
    }
  goto L2148;

 L1925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1926;
  x2 = XEXP (x1, 0);
  goto L2775;

 L1926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 7)
    goto L1927;
  x2 = XEXP (x1, 0);
  goto L2775;

 L1927: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -4L)
    goto L1928;
  x2 = XEXP (x1, 0);
  goto L2775;

 L1928: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1929;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L1929: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L2782;
    case HImode:
      goto L2783;
    default:
      break;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L2782: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L1930;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L1930: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1931;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L1931: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L1932;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L1932: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -3L)
    goto L1933;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L1933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1934;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L1934: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (0);
  if (tem == NULL_RTX)
    goto L2775;
  x1 = PATTERN (tem);
  if ((TARGET_H8300S && !TARGET_NORMAL_MODE))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_289 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L2783: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L1958;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L1958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1959;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L1959: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 7)
    goto L1960;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L1960: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == -2L)
    goto L1961;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L1961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1962;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L1962: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (0);
  if (tem == NULL_RTX)
    goto L2775;
  x1 = PATTERN (tem);
  if ((TARGET_H8300S && !TARGET_NORMAL_MODE))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_291 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2775;

 L1865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L2784;
  x2 = XEXP (x1, 0);
  goto L2148;

 L2784: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L1866;
    case ASHIFT:
      goto L1881;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2148;

 L1866: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1867;
  x2 = XEXP (x1, 0);
  goto L2148;

 L1867: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1868;
    }
  x2 = XEXP (x1, 0);
  goto L2148;

 L1868: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1869;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L1870;

 L1870: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2148;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L1871;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1872;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L1873;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1874;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1874: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1875;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1875: ATTRIBUTE_UNUSED_LABEL
  if ((INTVAL (operands[3]) == (255 >> INTVAL (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_285 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L1905: ATTRIBUTE_UNUSED_LABEL
  if ((INTVAL (operands[3]) == (65535 >> INTVAL (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_287 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1881: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1882;
  x2 = XEXP (x1, 0);
  goto L2148;

 L1882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1883;
    }
  x2 = XEXP (x1, 0);
  goto L2148;

 L1883: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1884;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L1885;

 L1885: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L2148;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L1886;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L1887;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L1888;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1888: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L1889;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1889: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1890;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L1890: ATTRIBUTE_UNUSED_LABEL
  if ((INTVAL (operands[3]) == (255 << INTVAL (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_286 (insn, operands);
      if (tem != 0)
        return tem;
    }
 L1920: ATTRIBUTE_UNUSED_LABEL
  if ((INTVAL (operands[3]) == (65535 << INTVAL (operands[1]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_288 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2148;

 L2149: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L2150;
  goto ret0;

 L2150: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[0] = x3;
      goto L2151;
    }
  goto ret0;

 L2151: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L2152;
  goto ret0;

 L2152: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 7L)
    goto L2153;
  goto ret0;

 L2153: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2154;
  goto ret0;

 L2154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == SCRATCH)
    goto L2155;
  goto ret0;

 L2155: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L2156;
  goto ret0;

 L2156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L2157;
  goto ret0;

 L2157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2158;
  goto ret0;

 L2158: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (eqne_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2159;
    }
  goto ret0;

 L2159: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == CC0)
    goto L2160;
  goto ret0;

 L2160: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2161;
  goto ret0;

 L2161: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2162;
  goto ret0;

 L2162: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L2163;

 L2163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC
      && ((TARGET_H8300H || TARGET_H8300S)))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_304 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
peephole2_insns (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L1602;
    case PARALLEL:
      goto L2733;
    default:
     break;
   }
  goto ret0;

 L1602: ATTRIBUTE_UNUSED_LABEL
  return peephole2_1 (x0, insn, _pmatch_len);

 L2733: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2)
    goto L1833;
  goto ret0;

 L1833: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1834;
  goto ret0;

 L1834: ATTRIBUTE_UNUSED_LABEL
  return peephole2_2 (x0, insn, _pmatch_len);
 ret0:
  return 0;
}


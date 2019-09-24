/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "real.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "toplev.h"
#include "ggc.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* ./config/h8300/h8300.md:122 */
rtx
gen_pushqi1_h8300 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-2L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	constm1_rtx)),
	operand0)));
}

/* ./config/h8300/h8300.md:133 */
rtx
gen_pushqi1_h8300hs (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-4L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-3L))),
	operand0)));
}

/* ./config/h8300/h8300.md:144 */
rtx
gen_pushqi1_h8300hs_normal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-4L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-3L))),
	operand0)));
}

/* ./config/h8300/h8300.md:216 */
rtx
gen_movstrictqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1);
}

/* ./config/h8300/h8300.md:240 */
rtx
gen_pushhi1_h8300hs (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-4L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-2L))),
	operand0)));
}

/* ./config/h8300/h8300.md:251 */
rtx
gen_pushhi1_h8300hs_normal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-4L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-2L))),
	operand0)));
}

/* ./config/h8300/h8300.md:329 */
rtx
gen_movstricthi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1);
}

/* ./config/h8300/h8300.md:724 */
rtx
gen_tstqi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0);
}

/* ./config/h8300/h8300.md:731 */
rtx
gen_tsthi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0);
}

/* ./config/h8300/h8300.md:747 */
rtx
gen_tstsi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0);
}

/* ./config/h8300/h8300.md:763 */
rtx
gen_cmpqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

/* ./config/h8300/h8300.md:803 */
rtx
gen_cmpsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

/* ./config/h8300/h8300.md:816 */
rtx
gen_addqi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2));
}

/* ./config/h8300/h8300.md:962 */
rtx
gen_subqi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2));
}

/* ./config/h8300/h8300.md:1033 */
rtx
gen_mulqihi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1),
	gen_rtx_SIGN_EXTEND (HImode,
	operand2)));
}

/* ./config/h8300/h8300.md:1042 */
rtx
gen_mulhisi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)));
}

/* ./config/h8300/h8300.md:1051 */
rtx
gen_umulqihi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (HImode,
	operand2)));
}

/* ./config/h8300/h8300.md:1060 */
rtx
gen_umulhisi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (SImode,
	operand2)));
}

/* ./config/h8300/h8300.md:1105 */
rtx
gen_udivmodqi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (QImode,
	gen_rtx_UDIV (HImode,
	operand1,
	gen_rtx_ZERO_EXTEND (HImode,
	operand2)))),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_TRUNCATE (QImode,
	gen_rtx_UMOD (HImode,
	operand1,
	gen_rtx_ZERO_EXTEND (HImode,
	operand2))))));
}

/* ./config/h8300/h8300.md:1127 */
rtx
gen_divmodqi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (QImode,
	gen_rtx_DIV (HImode,
	operand1,
	gen_rtx_SIGN_EXTEND (HImode,
	operand2)))),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_TRUNCATE (QImode,
	gen_rtx_MOD (HImode,
	operand1,
	gen_rtx_SIGN_EXTEND (HImode,
	operand2))))));
}

/* ./config/h8300/h8300.md:1149 */
rtx
gen_udivmodhi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_UDIV (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2)))),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_UMOD (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))))));
}

/* ./config/h8300/h8300.md:1171 */
rtx
gen_divmodhi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_DIV (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)))),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_MOD (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))))));
}

/* ./config/h8300/h8300.md:1407 */
rtx
gen_negqi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (QImode,
	operand1));
}

/* ./config/h8300/h8300.md:1527 */
rtx
gen_one_cmplqi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (QImode,
	operand1));
}

/* ./config/h8300/h8300.md:1675 */
rtx
gen_branch_true (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand1), VOIDmode,
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* ./config/h8300/h8300.md:1704 */
rtx
gen_branch_false (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand1), VOIDmode,
		cc0_rtx,
		const0_rtx),
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0)));
}

/* ./config/h8300/h8300.md:1735 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* ./config/h8300/h8300.md:1815 */
rtx
gen_call (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_CALL (VOIDmode,
	operand0,
	operand1);
}

/* ./config/h8300/h8300.md:1838 */
rtx
gen_call_value (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2));
}

/* ./config/h8300/h8300.md:1857 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* ./config/h8300/h8300.md:1904 */
rtx
gen_stm_h8300s_2_advanced (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8L))),
	operand1)));
}

/* ./config/h8300/h8300.md:1920 */
rtx
gen_stm_h8300s_2_normal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-8L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-8L))),
	operand1)));
}

/* ./config/h8300/h8300.md:1952 */
rtx
gen_stm_h8300s_3_advanced (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-12L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8L))),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-12L))),
	operand2)));
}

/* ./config/h8300/h8300.md:1973 */
rtx
gen_stm_h8300s_3_normal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-12L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-8L))),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-12L))),
	operand2)));
}

/* ./config/h8300/h8300.md:2016 */
rtx
gen_stm_h8300s_4_advanced (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8L))),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-12L))),
	operand2),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16L))),
	operand3)));
}

/* ./config/h8300/h8300.md:2037 */
rtx
gen_stm_h8300s_4_normal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-16L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-8L))),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-12L))),
	operand2),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-16L))),
	operand3)));
}

/* ./config/h8300/h8300.md:2079 */
rtx
gen_ldm_h8300s_2_advanced (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (8L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7)),
	operand1)));
}

/* ./config/h8300/h8300.md:2095 */
rtx
gen_ldm_h8300s_2_normal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (8L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (HImode,
	7)),
	operand1)));
}

/* ./config/h8300/h8300.md:2127 */
rtx
gen_ldm_h8300s_3_advanced (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (12L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (8L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4L))),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7)),
	operand2)));
}

/* ./config/h8300/h8300.md:2148 */
rtx
gen_ldm_h8300s_3_normal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (12L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (8L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (4L))),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (HImode,
	7)),
	operand2)));
}

/* ./config/h8300/h8300.md:2191 */
rtx
gen_ldm_h8300s_4_advanced (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (16L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (12L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (8L))),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4L))),
	operand2),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7)),
	operand3)));
}

/* ./config/h8300/h8300.md:2212 */
rtx
gen_ldm_h8300s_4_normal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (16L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (12L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (8L))),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (4L))),
	operand2),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (HImode,
	7)),
	operand3)));
}

/* ./config/h8300/h8300.md:2282 */
rtx
gen_monitor_prologue (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	1);
}

/* ./config/h8300/h8300.md:155 */
rtx
gen_pushqi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;

{
  if (TARGET_H8300)
    emit_insn (gen_pushqi1_h8300 (operands[0]));
  else if (!TARGET_NORMAL_MODE)
    emit_insn (gen_pushqi1_h8300hs (operands[0]));
  else
    emit_insn (gen_pushqi1_h8300hs_normal (operands[0]));
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:202 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

{
  /* One of the ops has to be in a register.  */
  if (!register_operand (operand0, QImode)
      && !register_operand (operand1, QImode))
    {
      operands[1] = copy_to_mode_reg (QImode, operand1);
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:233 */
rtx
gen_pushhi1_h8300 (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	gen_rtx_PRE_DEC (HImode,
	gen_rtx_REG (HImode,
	7))),
	operand0);
}

/* ./config/h8300/h8300.md:262 */
rtx
gen_pushhi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;

{
  if (TARGET_H8300)
    emit_insn (gen_pushhi1_h8300 (operands[0]));
  else if (!TARGET_NORMAL_MODE)
    emit_insn (gen_pushhi1_h8300hs (operands[0]));
  else
    emit_insn (gen_pushhi1_h8300hs_normal (operands[0]));
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:315 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

{
  /* One of the ops has to be in a register.  */
  if (!register_operand (operand1, HImode)
      && !register_operand (operand0, HImode))
    {
      operands[1] = copy_to_mode_reg (HImode, operand1);
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:346 */
rtx
gen_movsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

{
  if (TARGET_H8300)
    {
      if (h8300_expand_movsi (operands))
	DONE;
    }
  else
    {
      /* One of the ops has to be in a register.  */
      if (!register_operand (operand1, SImode)
	  && !register_operand (operand0, SImode))
	{
	  operands[1] = copy_to_mode_reg (SImode, operand1);
	}
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:368 */
rtx
gen_movsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

{
  if (TARGET_H8300)
    {
      if (h8300_expand_movsi (operands))
	DONE;
    }
  else
    {
      /* One of the ops has to be in a register.  */
      if (!register_operand (operand1, SFmode)
	  && !register_operand (operand0, SFmode))
	{
	  operands[1] = copy_to_mode_reg (SFmode, operand1);
	}
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:634 */
extern rtx gen_split_183 (rtx *);
rtx
gen_split_183 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand2),
	const1_rtx,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:667 */
extern rtx gen_split_184 (rtx *);
rtx
gen_split_184 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[3] = GEN_INT (INTVAL (operands[1]) - 16);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_IOR (SImode,
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	GEN_INT (-65536L)),
	gen_rtx_LSHIFTRT (SImode,
	operand0,
	GEN_INT (16L)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand2),
	const1_rtx,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:699 */
extern rtx gen_split_185 (rtx *);
rtx
gen_split_185 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_ZERO_EXTRACT (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	copy_rtx (operand2)),
	const1_rtx,
	gen_rtx_AND (SImode,
	operand1,
	GEN_INT (7L)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:772 */
rtx
gen_cmphi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

{
  /* Force operand1 into a register if we're compiling
     for the H8/300.  */
  if (GET_CODE (operands[1]) != REG && TARGET_H8300)
    operands[1] = force_reg (HImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:825 */
rtx
gen_addhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2));
}

/* ./config/h8300/h8300.md:854 */
extern rtx gen_split_188 (rtx *);
rtx
gen_split_188 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
split_adds_subs (HImode, operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:862 */
extern rtx gen_peephole2_189 (rtx, rtx *);
rtx
gen_peephole2_189 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:901 */
extern rtx gen_split_190 (rtx *);
rtx
gen_split_190 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
split_adds_subs (HImode, operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:909 */
rtx
gen_addsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2));
}

/* ./config/h8300/h8300.md:950 */
extern rtx gen_split_192 (rtx *);
rtx
gen_split_192 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
split_adds_subs (SImode, operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:971 */
rtx
gen_subhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2));
}

/* ./config/h8300/h8300.md:1000 */
rtx
gen_subsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2));
}

/* ./config/h8300/h8300.md:1209 */
rtx
gen_andqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

{
  if (fix_bit_operand (operands, 0, AND))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:1220 */
rtx
gen_andhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2));
}

/* ./config/h8300/h8300.md:1286 */
rtx
gen_andsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2));
}

/* ./config/h8300/h8300.md:1309 */
rtx
gen_iorqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

{
  if (fix_bit_operand (operands, 1, IOR))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:1320 */
rtx
gen_iorhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2));
}

/* ./config/h8300/h8300.md:1327 */
rtx
gen_iorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2));
}

/* ./config/h8300/h8300.md:1350 */
rtx
gen_xorqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

{
  if (fix_bit_operand (operands, 1, XOR))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:1361 */
rtx
gen_xorhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2));
}

/* ./config/h8300/h8300.md:1368 */
rtx
gen_xorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2));
}

/* ./config/h8300/h8300.md:1415 */
rtx
gen_neghi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

{
  if (TARGET_H8300)
    {
      emit_insn (gen_neghi2_h8300 (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:1428 */
rtx
gen_neghi2_h8300 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
operands[2] = gen_reg_rtx (HImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NOT (HImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_PLUS (HImode,
	operand2,
	const1_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:1445 */
rtx
gen_negsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

{
  if (TARGET_H8300)
    {
      emit_insn (gen_negsi2_h8300 (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:1458 */
rtx
gen_negsi2_h8300 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
operands[2] = gen_reg_rtx (SImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NOT (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_PLUS (SImode,
	operand2,
	const1_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:1475 */
rtx
gen_negsf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1));
}

/* ./config/h8300/h8300.md:1501 */
rtx
gen_abssf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1));
}

/* ./config/h8300/h8300.md:1535 */
rtx
gen_one_cmplhi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (HImode,
	operand1));
}

/* ./config/h8300/h8300.md:1557 */
rtx
gen_one_cmplsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1));
}

/* ./config/h8300/h8300.md:1585 */
rtx
gen_ble (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* ./config/h8300/h8300.md:1594 */
rtx
gen_bleu (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LEU (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* ./config/h8300/h8300.md:1603 */
rtx
gen_bge (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* ./config/h8300/h8300.md:1612 */
rtx
gen_bgeu (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GEU (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* ./config/h8300/h8300.md:1621 */
rtx
gen_blt (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LT (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* ./config/h8300/h8300.md:1630 */
rtx
gen_bltu (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LTU (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* ./config/h8300/h8300.md:1639 */
rtx
gen_bgt (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GT (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* ./config/h8300/h8300.md:1648 */
rtx
gen_bgtu (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GTU (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* ./config/h8300/h8300.md:1657 */
rtx
gen_beq (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_EQ (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* ./config/h8300/h8300.md:1666 */
rtx
gen_bne (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

/* ./config/h8300/h8300.md:1753 */
rtx
gen_tablejump (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* ./config/h8300/h8300.md:1785 */
rtx
gen_indirect_jump (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* ./config/h8300/h8300.md:1868 */
rtx
gen_push_h8300 (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	gen_rtx_PRE_DEC (HImode,
	gen_rtx_REG (HImode,
	7))),
	operand0);
}

/* ./config/h8300/h8300.md:1874 */
rtx
gen_push_h8300hs_advanced (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	operand0);
}

/* ./config/h8300/h8300.md:1880 */
rtx
gen_push_h8300hs_normal (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (HImode,
	gen_rtx_REG (HImode,
	7))),
	operand0);
}

/* ./config/h8300/h8300.md:1886 */
rtx
gen_pop_h8300 (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (HImode,
	gen_rtx_POST_INC (HImode,
	gen_rtx_REG (HImode,
	7))));
}

/* ./config/h8300/h8300.md:1892 */
rtx
gen_pop_h8300hs_advanced (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_POST_INC (SImode,
	gen_rtx_REG (SImode,
	7))));
}

/* ./config/h8300/h8300.md:1898 */
rtx
gen_pop_h8300hs_normal (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_POST_INC (HImode,
	gen_rtx_REG (HImode,
	7))));
}

/* ./config/h8300/h8300.md:1936 */
rtx
gen_stm_h8300s_2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

{
  if (!TARGET_NORMAL_MODE)
    emit_insn (gen_stm_h8300s_2_advanced (operands[0], operands[1]));
  else
    emit_insn (gen_stm_h8300s_2_normal (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:1994 */
rtx
gen_stm_h8300s_3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

{
  if (!TARGET_NORMAL_MODE)
    emit_insn (gen_stm_h8300s_3_advanced (operands[0], operands[1],
					  operands[2]));
  else
    emit_insn (gen_stm_h8300s_3_normal (operands[0], operands[1],
					operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2058 */
rtx
gen_stm_h8300s_4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

{
  if (!TARGET_NORMAL_MODE)
    emit_insn (gen_stm_h8300s_4_advanced (operands[0], operands[1],
					  operands[2], operands[3]));
  else
    emit_insn (gen_stm_h8300s_4_normal (operands[0], operands[1],
					operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2111 */
rtx
gen_ldm_h8300s_2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

{
  if (!TARGET_NORMAL_MODE)
    emit_insn (gen_ldm_h8300s_2_advanced (operands[0], operands[1]));
  else
    emit_insn (gen_ldm_h8300s_2_normal (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2169 */
rtx
gen_ldm_h8300s_3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

{
  if (!TARGET_NORMAL_MODE)
    emit_insn (gen_ldm_h8300s_3_advanced (operands[0], operands[1],
					  operands[2]));
  else
    emit_insn (gen_ldm_h8300s_3_normal (operands[0], operands[1],
					operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2233 */
rtx
gen_ldm_h8300s_4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

{
  if (!TARGET_NORMAL_MODE)
    emit_insn (gen_ldm_h8300s_4_advanced (operands[0], operands[1],
					  operands[2], operands[3]));
  else
    emit_insn (gen_ldm_h8300s_4_normal (operands[0], operands[1],
					operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2254 */
rtx
gen_return (void)
{
  return gen_rtx_RETURN (VOIDmode);
}

/* ./config/h8300/h8300.md:2272 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
h8300_expand_prologue (); DONE;
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2277 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
h8300_expand_epilogue ();
  }
  emit_jump_insn (gen_rtx_RETURN (VOIDmode));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2302 */
rtx
gen_zero_extendqihi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1));
}

/* ./config/h8300/h8300.md:2333 */
extern rtx gen_split_240 (rtx *);
rtx
gen_split_240 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_rtx_REG (QImode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2343 */
rtx
gen_zero_extendqisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* ./config/h8300/h8300.md:2365 */
extern rtx gen_split_242 (rtx *);
rtx
gen_split_242 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_lowpart (QImode, operands[0]);
   operands[3] = gen_lowpart (HImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ZERO_EXTEND (HImode,
	copy_rtx (operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2380 */
extern rtx gen_split_243 (rtx *);
rtx
gen_split_243 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_rtx_REG (QImode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2392 */
rtx
gen_zero_extendhisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* ./config/h8300/h8300.md:2418 */
rtx
gen_extendqihi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* ./config/h8300/h8300.md:2442 */
rtx
gen_extendqisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* ./config/h8300/h8300.md:2462 */
extern rtx gen_split_247 (rtx *);
rtx
gen_split_247 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_rtx_REG (HImode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2474 */
rtx
gen_extendhisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* ./config/h8300/h8300.md:2519 */
rtx
gen_ashlqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
expand_a_shift (QImode, ASHIFT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2526 */
rtx
gen_ashrqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
expand_a_shift (QImode, ASHIFTRT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2533 */
rtx
gen_lshrqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
expand_a_shift (QImode, LSHIFTRT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2555 */
rtx
gen_ashlhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
expand_a_shift (HImode, ASHIFT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2562 */
rtx
gen_lshrhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
expand_a_shift (HImode, LSHIFTRT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2569 */
rtx
gen_ashrhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
expand_a_shift (HImode, ASHIFTRT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2591 */
rtx
gen_ashlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
expand_a_shift (SImode, ASHIFT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2598 */
rtx
gen_lshrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
expand_a_shift (SImode, LSHIFTRT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2605 */
rtx
gen_ashrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
expand_a_shift (SImode, ASHIFTRT, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2628 */
extern rtx gen_split_258 (rtx *);
rtx
gen_split_258 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
operands[4] = gen_label_rtx ();
   operands[5] = gen_label_rtx ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand1));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand5),
	pc_rtx)));
  emit (operand4);
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand2), GET_MODE (operand2),
		copy_rtx (operand0),
		const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_PLUS (QImode,
	copy_rtx (operand1),
	constm1_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand1)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	copy_rtx (operand4)),
	pc_rtx)));
  emit (copy_rtx (operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2660 */
extern rtx gen_split_259 (rtx *);
rtx
gen_split_259 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
operands[4] = gen_label_rtx ();
   operands[5] = gen_label_rtx ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand3)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand5),
	pc_rtx)));
  emit (operand4);
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand2), GET_MODE (operand2),
		copy_rtx (operand0),
		const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_PLUS (QImode,
	copy_rtx (operand3),
	constm1_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand3)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	copy_rtx (operand4)),
	pc_rtx)));
  emit (copy_rtx (operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2698 */
rtx
gen_rotlqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
if (expand_a_rotate (ROTATE, operands)) DONE; else FAIL;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2715 */
rtx
gen_rotlhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
if (expand_a_rotate (ROTATE, operands)) DONE; else FAIL;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2732 */
rtx
gen_rotlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
if (expand_a_rotate (ROTATE, operands)) DONE; else FAIL;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2848 */
rtx
gen_insv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

{
  /* We only have single bit bit-field instructions.  */
  if (INTVAL (operands[1]) != 1)
    FAIL;

  /* For now, we don't allow memory operands.  */
  if (GET_CODE (operands[0]) == MEM
      || GET_CODE (operands[3]) == MEM)
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (HImode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:2876 */
rtx
gen_extzv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

{
  /* We only have single bit bit-field instructions.  */
  if (INTVAL (operands[2]) != 1)
    FAIL;

  /* For now, we don't allow memory operands.  */
  if (GET_CODE (operands[1]) == MEM)
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (HImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3021 */
extern rtx gen_split_265 (rtx *);
rtx
gen_split_265 (rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	GEN_INT (24L))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3043 */
extern rtx gen_split_266 (rtx *);
rtx
gen_split_266 (rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	GEN_INT (16L))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3063 */
extern rtx gen_split_267 (rtx *);
rtx
gen_split_267 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
operands[5] = gen_rtx_REG (HImode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand5),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	copy_rtx (operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3100 */
extern rtx gen_split_268 (rtx *);
rtx
gen_split_268 (rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	GEN_INT (25L)),
	GEN_INT (64L))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	GEN_INT (16L))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3140 */
extern rtx gen_split_269 (rtx *);
rtx
gen_split_269 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[3] = gen_label_rtx ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const1_rtx,
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_EQ (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	const1_rtx)));
  emit (copy_rtx (operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3163 */
extern rtx gen_split_270 (rtx *);
rtx
gen_split_270 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[3] = gen_label_rtx ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const1_rtx,
	const0_rtx)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	const1_rtx)));
  emit (copy_rtx (operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3284 */
extern rtx gen_split_271 (rtx *);
rtx
gen_split_271 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[3] = gen_rtx_MEM (HImode, XEXP (operands[2], 0));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3308 */
extern rtx gen_split_272 (rtx *);
rtx
gen_split_272 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[3] = gen_rtx_REG (HImode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	gen_rtx_ASHIFT (HImode,
	gen_rtx_SUBREG (HImode,
	operand2,
	0),
	GEN_INT (8L)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3337 */
extern rtx gen_split_273 (rtx *);
rtx
gen_split_273 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
operands[3] = gen_rtx_REG (HImode, REGNO (operands[0]));
   operands[4] = gen_rtx_REG (HImode, REGNO (operands[2]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	gen_rtx_ASHIFT (HImode,
	operand4,
	GEN_INT (8L)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3466 */
extern rtx gen_split_274 (rtx *);
rtx
gen_split_274 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[3] = gen_rtx_REG (HImode, REGNO (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand3),
	GEN_INT (7L))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	operand1,
	GEN_INT (16L)),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3487 */
extern rtx gen_split_275 (rtx *);
rtx
gen_split_275 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[3] = gen_rtx_REG (HImode, REGNO (operands[2]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand3),
	GEN_INT (7L))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand2),
	GEN_INT (16L)),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3521 */
extern rtx gen_split_276 (rtx *);
rtx
gen_split_276 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
operands[3] = gen_rtx_REG (HImode, REGNO (operands[0]));
   operands[4] = gen_rtx_REG (HImode, REGNO (operands[2]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (HImode,
	gen_rtx_ASHIFT (HImode,
	operand4,
	GEN_INT (8L)),
	copy_rtx (operand3))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	GEN_INT (16L))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3541 */
extern rtx gen_split_277 (rtx *);
rtx
gen_split_277 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[3] = gen_rtx_REG (HImode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IOR (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	gen_rtx_ASHIFT (HImode,
	gen_rtx_SUBREG (HImode,
	operand2,
	0),
	GEN_INT (8L)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	GEN_INT (16L))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3572 */
extern rtx gen_split_278 (rtx *);
rtx
gen_split_278 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[3] = gen_rtx_REG (HImode, REGNO (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand3),
	GEN_INT (7L))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	GEN_INT (65536L)),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3593 */
extern rtx gen_split_279 (rtx *);
rtx
gen_split_279 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[3] = gen_rtx_REG (HImode, REGNO (operands[2]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand3),
	GEN_INT (7L))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	copy_rtx (operand2),
	GEN_INT (65536L)),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3618 */
extern rtx gen_split_280 (rtx *);
rtx
gen_split_280 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_rtx_REG (HImode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand2),
	GEN_INT (8L))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	copy_rtx (operand2))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3679 */
extern rtx gen_split_281 (rtx *);
rtx
gen_split_281 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3699 */
extern rtx gen_split_282 (rtx *);
rtx
gen_split_282 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LT (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3725 */
extern rtx gen_peephole2_283 (rtx, rtx *);
rtx
gen_peephole2_283 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	copy_rtx (operand0),
	GEN_INT (255L))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (HImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3747 */
extern rtx gen_peephole2_284 (rtx, rtx *);
rtx
gen_peephole2_284 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	copy_rtx (operand0),
	GEN_INT (255L))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (HImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3769 */
extern rtx gen_peephole2_285 (rtx, rtx *);
rtx
gen_peephole2_285 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (255L))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3791 */
extern rtx gen_peephole2_286 (rtx, rtx *);
rtx
gen_peephole2_286 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (255L))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3813 */
extern rtx gen_peephole2_287 (rtx, rtx *);
rtx
gen_peephole2_287 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (65535L))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3835 */
extern rtx gen_peephole2_288 (rtx, rtx *);
rtx
gen_peephole2_288 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (65535L))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3858 */
extern rtx gen_peephole2_289 (rtx, rtx *);
rtx
gen_peephole2_289 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[0] = gen_rtx_REG (SImode, REGNO (operands[0]));
  operand0 = operands[0];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3868 */
extern rtx gen_peephole2_290 (rtx, rtx *);
rtx
gen_peephole2_290 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[0] = gen_rtx_REG (SImode, REGNO (operands[0]));
  operand0 = operands[0];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (HImode,
	gen_rtx_REG (HImode,
	7))),
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3881 */
extern rtx gen_peephole2_291 (rtx, rtx *);
rtx
gen_peephole2_291 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[0] = gen_rtx_REG (SImode, REGNO (operands[0]));
  operand0 = operands[0];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3891 */
extern rtx gen_peephole2_292 (rtx, rtx *);
rtx
gen_peephole2_292 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[0] = gen_rtx_REG (SImode, REGNO (operands[0]));
  operand0 = operands[0];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (HImode,
	gen_rtx_REG (HImode,
	7))),
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3903 */
extern rtx gen_peephole2_293 (rtx, rtx *);
rtx
gen_peephole2_293 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8L))),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-12L))),
	operand2),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16L))),
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3930 */
extern rtx gen_peephole2_294 (rtx, rtx *);
rtx
gen_peephole2_294 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-16L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-8L))),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-12L))),
	operand2),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-16L))),
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3959 */
extern rtx gen_peephole2_295 (rtx, rtx *);
rtx
gen_peephole2_295 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-12L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8L))),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-12L))),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:3984 */
extern rtx gen_peephole2_296 (rtx, rtx *);
rtx
gen_peephole2_296 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-12L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-8L))),
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-12L))),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4011 */
extern rtx gen_peephole2_297 (rtx, rtx *);
rtx
gen_peephole2_297 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8L))),
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4029 */
extern rtx gen_peephole2_298 (rtx, rtx *);
rtx
gen_peephole2_298 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	7),
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-8L))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-4L))),
	operand0),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_REG (HImode,
	7),
	GEN_INT (-8L))),
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4057 */
extern rtx gen_peephole2_299 (rtx, rtx *);
rtx
gen_peephole2_299 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (HImode,
	copy_rtx (operand0),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4086 */
extern rtx gen_peephole2_300 (rtx, rtx *);
rtx
gen_peephole2_300 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4115 */
extern rtx gen_peephole2_301 (rtx, rtx *);
rtx
gen_peephole2_301 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4148 */
extern rtx gen_peephole2_302 (rtx, rtx *);
rtx
gen_peephole2_302 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		operand1),
	0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand0)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4174 */
extern rtx gen_peephole2_303 (rtx, rtx *);
rtx
gen_peephole2_303 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		operand1),
	0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand0)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4198 */
extern rtx gen_peephole2_304 (rtx, rtx *);
rtx
gen_peephole2_304 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[3] = ((GET_CODE (operands[1]) == EQ)
		  ? gen_rtx_GE (VOIDmode, cc0_rtx, const0_rtx)
		  : gen_rtx_LT (VOIDmode, cc0_rtx, const0_rtx));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4231 */
extern rtx gen_peephole2_305 (rtx, rtx *);
rtx
gen_peephole2_305 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4246 */
extern rtx gen_peephole2_306 (rtx, rtx *);
rtx
gen_peephole2_306 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[2] = gen_lowpart (QImode, operands[0]);
   operands[3] = gen_lowpart (QImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4262 */
extern rtx gen_peephole2_307 (rtx, rtx *);
rtx
gen_peephole2_307 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[4] = gen_lowpart (QImode, operands[0]);
   operands[5] = gen_lowpart (QImode, operands[1]);
   operands[6] = GEN_INT (~0xff | INTVAL (operands[3]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand4),
	operand5));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	operand6)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4289 */
extern rtx gen_peephole2_308 (rtx, rtx *);
rtx
gen_peephole2_308 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	GEN_INT (8L),
	GEN_INT (8L)),
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	GEN_INT (8L))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4309 */
extern rtx gen_peephole2_309 (rtx, rtx *);
rtx
gen_peephole2_309 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[3] = gen_lowpart (HImode, operands[0]);
   operands[4] = gen_lowpart (HImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4353 */
extern rtx gen_peephole2_310 (rtx, rtx *);
rtx
gen_peephole2_310 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[4] = GEN_INT (- INTVAL (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		operand4),
	0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand0)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4386 */
extern rtx gen_peephole2_311 (rtx, rtx *);
rtx
gen_peephole2_311 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
switch (GET_CODE (operands[2]))
     {
     case GTU:
       operands[4] = gen_rtx_NE (VOIDmode, cc0_rtx, const0_rtx);
       break;
     case LEU:
       operands[4] = gen_rtx_EQ (VOIDmode, cc0_rtx, const0_rtx);
       break;
     default:
       operands[4] = operands[2];
       break;
     }
   operands[5] = GEN_INT (exact_log2 (INTVAL (operands[1]) + 1));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (HImode,
	copy_rtx (operand0),
	operand5)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand0)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand4,
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4433 */
extern rtx gen_peephole2_312 (rtx, rtx *);
rtx
gen_peephole2_312 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
switch (GET_CODE (operands[1]))
     {
     case GTU:
       operands[3] = gen_rtx_NE (VOIDmode, cc0_rtx, const0_rtx);
       break;
     case LEU:
       operands[3] = gen_rtx_EQ (VOIDmode, cc0_rtx, const0_rtx);
       break;
     default:
       operands[3] = operands[1];
       break;
     }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_AND (HImode,
	operand0,
	GEN_INT (-256L))));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand3,
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4512 */
extern rtx gen_peephole2_313 (rtx, rtx *);
rtx
gen_peephole2_313 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[4] = GEN_INT (- INTVAL (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		operand4),
	0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand0)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4535 */
extern rtx gen_peephole2_314 (rtx, rtx *);
rtx
gen_peephole2_314 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[4] = GEN_INT (- INTVAL (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand0)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4565 */
extern rtx gen_peephole2_315 (rtx, rtx *);
rtx
gen_peephole2_315 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand0)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4592 */
extern rtx gen_peephole2_316 (rtx, rtx *);
rtx
gen_peephole2_316 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[4] = GEN_INT (INTVAL (operands[1]) ^ -1);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_NOT (SImode,
	copy_rtx (operand0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand0)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4620 */
extern rtx gen_peephole2_317 (rtx, rtx *);
rtx
gen_peephole2_317 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[4] = GEN_INT (INTVAL (operands[1]) == -2147483647 - 1 ? 1 : 2);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	copy_rtx (operand0),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		constm1_rtx),
	0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand0)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4662 */
extern rtx gen_peephole2_318 (rtx, rtx *);
rtx
gen_peephole2_318 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[4] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
switch (GET_CODE (operands[2]))
     {
     case GTU:
       operands[5] = gen_rtx_NE (VOIDmode, cc0_rtx, const0_rtx);
       break;
     case LEU:
       operands[5] = gen_rtx_EQ (VOIDmode, cc0_rtx, const0_rtx);
       break;
     default:
       operands[5] = operands[2];
       break;
     }
   operands[6] = GEN_INT (exact_log2 (INTVAL (operands[1]) + 1));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand4),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand4),
	operand6)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand4)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand5,
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4713 */
extern rtx gen_peephole2_319 (rtx, rtx *);
rtx
gen_peephole2_319 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
switch (GET_CODE (operands[2]))
     {
     case GTU:
       operands[4] = gen_rtx_NE (VOIDmode, cc0_rtx, const0_rtx);
       break;
     case LEU:
       operands[4] = gen_rtx_EQ (VOIDmode, cc0_rtx, const0_rtx);
       break;
     default:
       operands[4] = operands[2];
       break;
     }
   operands[5] = GEN_INT (exact_log2 (INTVAL (operands[1]) + 1));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	operand5)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand0)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand4,
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4761 */
extern rtx gen_peephole2_320 (rtx, rtx *);
rtx
gen_peephole2_320 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
switch (GET_CODE (operands[2]))
     {
     case GTU:
       operands[4] = gen_rtx_NE (VOIDmode, cc0_rtx, const0_rtx);
       break;
     case LEU:
       operands[4] = gen_rtx_EQ (VOIDmode, cc0_rtx, const0_rtx);
       break;
     default:
       operands[4] = operands[2];
       break;
     }
   operands[5] = GEN_INT (~INTVAL (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand0)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand4,
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4804 */
extern rtx gen_peephole2_321 (rtx, rtx *);
rtx
gen_peephole2_321 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
switch (GET_CODE (operands[1]))
     {
     case GTU:
       operands[3] = gen_rtx_NE (VOIDmode, cc0_rtx, const0_rtx);
       break;
     case LEU:
       operands[3] = gen_rtx_EQ (VOIDmode, cc0_rtx, const0_rtx);
       break;
     default:
       operands[3] = operands[1];
       break;
     }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_AND (SImode,
	operand0,
	GEN_INT (-65536L))));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand3,
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4839 */
extern rtx gen_peephole2_322 (rtx, rtx *);
rtx
gen_peephole2_322 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[4] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
operands[5] = GEN_INT (- INTVAL (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand4),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand4),
		operand5),
	0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand4)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4868 */
extern rtx gen_peephole2_323 (rtx, rtx *);
rtx
gen_peephole2_323 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[4] = gen_rtx_REG (QImode, REGNO (operands[0]));
   operands[5] = gen_int_mode (INTVAL (operands[1]), QImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (QImode,
	copy_rtx (operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand4)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4892 */
extern rtx gen_peephole2_324 (rtx, rtx *);
rtx
gen_peephole2_324 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[4] = gen_rtx_REG (QImode, REGNO (operands[0]));
   operands[5] = gen_int_mode (INTVAL (operands[1]), QImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (QImode,
	copy_rtx (operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand4)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4916 */
extern rtx gen_peephole2_325 (rtx, rtx *);
rtx
gen_peephole2_325 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[4] = gen_rtx_REG (HImode, REGNO (operands[0]));
   operands[5] = gen_int_mode (INTVAL (operands[1]), HImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (HImode,
	copy_rtx (operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand4)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ./config/h8300/h8300.md:4940 */
extern rtx gen_peephole2_326 (rtx, rtx *);
rtx
gen_peephole2_326 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[5] = gen_rtx_REG (QImode, REGNO (operands[0]));
   operands[6] = gen_int_mode (INTVAL (operands[1]), QImode);
   operands[7] = gen_int_mode (INTVAL (operands[2]), QImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_AND (QImode,
	copy_rtx (operand5),
	operand6)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand5),
	gen_rtx_XOR (QImode,
	copy_rtx (operand5),
	operand7)));
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	copy_rtx (operand5)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand4), GET_MODE (operand4),
		cc0_rtx,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 163:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode));
      break;

    case 173:
    case 172:
    case 168:
    case 164:
    case 134:
    case 19:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 137:
    case 114:
    case 113:
    case 112:
    case 21:
    case 17:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode));
      break;

    default:
      abort ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 163:
    case 173:
    case 172:
    case 168:
    case 164:
    case 134:
    case 19:
    case 137:
    case 114:
    case 113:
    case 112:
    case 21:
    case 17:
      return 0;

    default:
      abort ();
    }
}

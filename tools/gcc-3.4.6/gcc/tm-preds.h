/* Generated automatically by the program `genpreds'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef RTX_CODE

extern int general_operand_src (rtx, enum machine_mode);
extern int general_operand_dst (rtx, enum machine_mode);
extern int single_one_operand (rtx, enum machine_mode);
extern int single_zero_operand (rtx, enum machine_mode);
extern int call_insn_operand (rtx, enum machine_mode);
extern int small_call_insn_operand (rtx, enum machine_mode);
extern int jump_address_operand (rtx, enum machine_mode);
extern int two_insn_adds_subs_operand (rtx, enum machine_mode);
extern int bit_operand (rtx, enum machine_mode);
extern int bit_memory_operand (rtx, enum machine_mode);
extern int stack_pointer_operand (rtx, enum machine_mode);
extern int const_int_gt_2_operand (rtx, enum machine_mode);
extern int const_int_ge_8_operand (rtx, enum machine_mode);
extern int const_int_qi_operand (rtx, enum machine_mode);
extern int const_int_hi_operand (rtx, enum machine_mode);
extern int incdec_operand (rtx, enum machine_mode);
extern int bit_operator (rtx, enum machine_mode);
extern int nshift_operator (rtx, enum machine_mode);
extern int eqne_operator (rtx, enum machine_mode);
extern int gtle_operator (rtx, enum machine_mode);
extern int gtuleu_operator (rtx, enum machine_mode);
extern int iorxor_operator (rtx, enum machine_mode);

#endif /* RTX_CODE */

#endif /* GCC_TM_PREDS_H */

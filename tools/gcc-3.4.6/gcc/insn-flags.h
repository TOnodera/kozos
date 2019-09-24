/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_pushqi1_h8300 (TARGET_H8300 \
   && operands[0] != stack_pointer_rtx)
#define HAVE_pushqi1_h8300hs ((TARGET_H8300H || TARGET_H8300S) \
   && operands[0] != stack_pointer_rtx)
#define HAVE_pushqi1_h8300hs_normal ((TARGET_H8300H || TARGET_H8300S) \
   && operands[0] != stack_pointer_rtx)
#define HAVE_movstrictqi 1
#define HAVE_pushhi1_h8300hs ((TARGET_H8300H || TARGET_H8300S) \
   && operands[0] != stack_pointer_rtx)
#define HAVE_pushhi1_h8300hs_normal ((TARGET_H8300H || TARGET_H8300S) \
   && operands[0] != stack_pointer_rtx)
#define HAVE_movstricthi 1
#define HAVE_tstqi 1
#define HAVE_tsthi 1
#define HAVE_tstsi (TARGET_H8300H || TARGET_H8300S)
#define HAVE_cmpqi 1
#define HAVE_cmpsi (TARGET_H8300H || TARGET_H8300S)
#define HAVE_addqi3 1
#define HAVE_subqi3 1
#define HAVE_mulqihi3 (TARGET_H8300H || TARGET_H8300S)
#define HAVE_mulhisi3 (TARGET_H8300H || TARGET_H8300S)
#define HAVE_umulqihi3 1
#define HAVE_umulhisi3 (TARGET_H8300H || TARGET_H8300S)
#define HAVE_udivmodqi4 1
#define HAVE_divmodqi4 (TARGET_H8300H || TARGET_H8300S)
#define HAVE_udivmodhi4 (TARGET_H8300H || TARGET_H8300S)
#define HAVE_divmodhi4 (TARGET_H8300H || TARGET_H8300S)
#define HAVE_negqi2 1
#define HAVE_one_cmplqi2 1
#define HAVE_branch_true 1
#define HAVE_branch_false 1
#define HAVE_jump 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_nop 1
#define HAVE_stm_h8300s_2_advanced (TARGET_H8300S && !TARGET_NORMAL_MODE \
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1) \
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3) \
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5)))
#define HAVE_stm_h8300s_2_normal (TARGET_H8300S && TARGET_NORMAL_MODE \
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1) \
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3) \
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5)))
#define HAVE_stm_h8300s_3_advanced (TARGET_H8300S && !TARGET_NORMAL_MODE \
   && ((REGNO (operands[0]) == 0 \
	&& REGNO (operands[1]) == 1 \
	&& REGNO (operands[2]) == 2) \
       || (REGNO (operands[0]) == 4 \
	   && REGNO (operands[1]) == 5 \
	   && REGNO (operands[2]) == 6)))
#define HAVE_stm_h8300s_3_normal (TARGET_H8300S && TARGET_NORMAL_MODE \
   && ((REGNO (operands[0]) == 0 \
	&& REGNO (operands[1]) == 1 \
	&& REGNO (operands[2]) == 2) \
       || (REGNO (operands[0]) == 4 \
	   && REGNO (operands[1]) == 5 \
	   && REGNO (operands[2]) == 6)))
#define HAVE_stm_h8300s_4_advanced (TARGET_H8300S && !TARGET_NORMAL_MODE \
   && REGNO (operands[0]) == 0 \
   && REGNO (operands[1]) == 1 \
   && REGNO (operands[2]) == 2 \
   && REGNO (operands[3]) == 3)
#define HAVE_stm_h8300s_4_normal (TARGET_H8300S && TARGET_NORMAL_MODE \
   && REGNO (operands[0]) == 0 \
   && REGNO (operands[1]) == 1 \
   && REGNO (operands[2]) == 2 \
   && REGNO (operands[3]) == 3)
#define HAVE_ldm_h8300s_2_advanced (TARGET_H8300S && !TARGET_NORMAL_MODE \
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1) \
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3) \
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5)))
#define HAVE_ldm_h8300s_2_normal (TARGET_H8300S && TARGET_NORMAL_MODE \
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1) \
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3) \
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5)))
#define HAVE_ldm_h8300s_3_advanced (TARGET_H8300S && !TARGET_NORMAL_MODE \
   && ((REGNO (operands[0]) == 0 \
	&& REGNO (operands[1]) == 1 \
	&& REGNO (operands[2]) == 2) \
       || (REGNO (operands[0]) == 4 \
	   && REGNO (operands[1]) == 5 \
	   && REGNO (operands[2]) == 6)))
#define HAVE_ldm_h8300s_3_normal (TARGET_H8300S && TARGET_NORMAL_MODE \
   && ((REGNO (operands[0]) == 0 \
	&& REGNO (operands[1]) == 1 \
	&& REGNO (operands[2]) == 2) \
       || (REGNO (operands[0]) == 4 \
	   && REGNO (operands[1]) == 5 \
	   && REGNO (operands[2]) == 6)))
#define HAVE_ldm_h8300s_4_advanced (TARGET_H8300S && !TARGET_NORMAL_MODE \
   && REGNO (operands[0]) == 0 \
   && REGNO (operands[1]) == 1 \
   && REGNO (operands[2]) == 2 \
   && REGNO (operands[3]) == 3)
#define HAVE_ldm_h8300s_4_normal (TARGET_H8300S && !TARGET_NORMAL_MODE \
   && REGNO (operands[0]) == 0 \
   && REGNO (operands[1]) == 1 \
   && REGNO (operands[2]) == 2 \
   && REGNO (operands[3]) == 3)
#define HAVE_monitor_prologue 1
#define HAVE_pushqi1 1
#define HAVE_movqi 1
#define HAVE_pushhi1_h8300 (TARGET_H8300 \
   && operands[0] != stack_pointer_rtx)
#define HAVE_pushhi1 1
#define HAVE_movhi 1
#define HAVE_movsi 1
#define HAVE_movsf 1
#define HAVE_cmphi 1
#define HAVE_addhi3 1
#define HAVE_addsi3 1
#define HAVE_subhi3 1
#define HAVE_subsi3 1
#define HAVE_andqi3 1
#define HAVE_andhi3 1
#define HAVE_andsi3 1
#define HAVE_iorqi3 1
#define HAVE_iorhi3 1
#define HAVE_iorsi3 1
#define HAVE_xorqi3 1
#define HAVE_xorhi3 1
#define HAVE_xorsi3 1
#define HAVE_neghi2 1
#define HAVE_neghi2_h8300 1
#define HAVE_negsi2 1
#define HAVE_negsi2_h8300 1
#define HAVE_negsf2 1
#define HAVE_abssf2 1
#define HAVE_one_cmplhi2 1
#define HAVE_one_cmplsi2 1
#define HAVE_ble 1
#define HAVE_bleu 1
#define HAVE_bge 1
#define HAVE_bgeu 1
#define HAVE_blt 1
#define HAVE_bltu 1
#define HAVE_bgt 1
#define HAVE_bgtu 1
#define HAVE_beq 1
#define HAVE_bne 1
#define HAVE_tablejump 1
#define HAVE_indirect_jump 1
#define HAVE_push_h8300 (TARGET_H8300)
#define HAVE_push_h8300hs_advanced (TARGET_H8300H && TARGET_H8300S && !TARGET_NORMAL_MODE)
#define HAVE_push_h8300hs_normal (TARGET_H8300H && TARGET_H8300S && TARGET_NORMAL_MODE)
#define HAVE_pop_h8300 (TARGET_H8300)
#define HAVE_pop_h8300hs_advanced (TARGET_H8300H && TARGET_H8300S && !TARGET_NORMAL_MODE)
#define HAVE_pop_h8300hs_normal (TARGET_H8300H && TARGET_H8300S && TARGET_NORMAL_MODE)
#define HAVE_stm_h8300s_2 (TARGET_H8300S \
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1) \
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3) \
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5)))
#define HAVE_stm_h8300s_3 (TARGET_H8300S \
   && ((REGNO (operands[0]) == 0 \
	&& REGNO (operands[1]) == 1 \
	&& REGNO (operands[2]) == 2) \
       || (REGNO (operands[0]) == 4 \
	   && REGNO (operands[1]) == 5 \
	   && REGNO (operands[2]) == 6)))
#define HAVE_stm_h8300s_4 (TARGET_H8300S \
   && REGNO (operands[0]) == 0 \
   && REGNO (operands[1]) == 1 \
   && REGNO (operands[2]) == 2 \
   && REGNO (operands[3]) == 3)
#define HAVE_ldm_h8300s_2 (TARGET_H8300S \
   && ((REGNO (operands[0]) == 0 && REGNO (operands[1]) == 1) \
       || (REGNO (operands[0]) == 2 && REGNO (operands[1]) == 3) \
       || (REGNO (operands[0]) == 4 && REGNO (operands[1]) == 5)))
#define HAVE_ldm_h8300s_3 (TARGET_H8300S \
   && ((REGNO (operands[0]) == 0 \
	&& REGNO (operands[1]) == 1 \
	&& REGNO (operands[2]) == 2) \
       || (REGNO (operands[0]) == 4 \
	   && REGNO (operands[1]) == 5 \
	   && REGNO (operands[2]) == 6)))
#define HAVE_ldm_h8300s_4 (TARGET_H8300S && !TARGET_NORMAL_MODE \
   && REGNO (operands[0]) == 0 \
   && REGNO (operands[1]) == 1 \
   && REGNO (operands[2]) == 2 \
   && REGNO (operands[3]) == 3)
#define HAVE_return (h8300_can_use_return_insn_p ())
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_zero_extendqihi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendhisi2 1
#define HAVE_extendqihi2 1
#define HAVE_extendqisi2 1
#define HAVE_extendhisi2 1
#define HAVE_ashlqi3 1
#define HAVE_ashrqi3 1
#define HAVE_lshrqi3 1
#define HAVE_ashlhi3 1
#define HAVE_lshrhi3 1
#define HAVE_ashrhi3 1
#define HAVE_ashlsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashrsi3 1
#define HAVE_rotlqi3 1
#define HAVE_rotlhi3 1
#define HAVE_rotlsi3 (TARGET_H8300H || TARGET_H8300S)
#define HAVE_insv (TARGET_H8300)
#define HAVE_extzv (TARGET_H8300)
extern rtx        gen_pushqi1_h8300          (rtx);
extern rtx        gen_pushqi1_h8300hs        (rtx);
extern rtx        gen_pushqi1_h8300hs_normal (rtx);
extern rtx        gen_movstrictqi            (rtx, rtx);
extern rtx        gen_pushhi1_h8300hs        (rtx);
extern rtx        gen_pushhi1_h8300hs_normal (rtx);
extern rtx        gen_movstricthi            (rtx, rtx);
extern rtx        gen_tstqi                  (rtx);
extern rtx        gen_tsthi                  (rtx);
extern rtx        gen_tstsi                  (rtx);
extern rtx        gen_cmpqi                  (rtx, rtx);
extern rtx        gen_cmpsi                  (rtx, rtx);
extern rtx        gen_addqi3                 (rtx, rtx, rtx);
extern rtx        gen_subqi3                 (rtx, rtx, rtx);
extern rtx        gen_mulqihi3               (rtx, rtx, rtx);
extern rtx        gen_mulhisi3               (rtx, rtx, rtx);
extern rtx        gen_umulqihi3              (rtx, rtx, rtx);
extern rtx        gen_umulhisi3              (rtx, rtx, rtx);
extern rtx        gen_udivmodqi4             (rtx, rtx, rtx, rtx);
extern rtx        gen_divmodqi4              (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmodhi4             (rtx, rtx, rtx, rtx);
extern rtx        gen_divmodhi4              (rtx, rtx, rtx, rtx);
extern rtx        gen_negqi2                 (rtx, rtx);
extern rtx        gen_one_cmplqi2            (rtx, rtx);
extern rtx        gen_branch_true            (rtx, rtx);
extern rtx        gen_branch_false           (rtx, rtx);
extern rtx        gen_jump                   (rtx);
#define GEN_CALL(A, B, C, D) gen_call ((A), (B))
extern rtx        gen_call                   (rtx, rtx);
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C))
extern rtx        gen_call_value             (rtx, rtx, rtx);
extern rtx        gen_nop                    (void);
extern rtx        gen_stm_h8300s_2_advanced  (rtx, rtx);
extern rtx        gen_stm_h8300s_2_normal    (rtx, rtx);
extern rtx        gen_stm_h8300s_3_advanced  (rtx, rtx, rtx);
extern rtx        gen_stm_h8300s_3_normal    (rtx, rtx, rtx);
extern rtx        gen_stm_h8300s_4_advanced  (rtx, rtx, rtx, rtx);
extern rtx        gen_stm_h8300s_4_normal    (rtx, rtx, rtx, rtx);
extern rtx        gen_ldm_h8300s_2_advanced  (rtx, rtx);
extern rtx        gen_ldm_h8300s_2_normal    (rtx, rtx);
extern rtx        gen_ldm_h8300s_3_advanced  (rtx, rtx, rtx);
extern rtx        gen_ldm_h8300s_3_normal    (rtx, rtx, rtx);
extern rtx        gen_ldm_h8300s_4_advanced  (rtx, rtx, rtx, rtx);
extern rtx        gen_ldm_h8300s_4_normal    (rtx, rtx, rtx, rtx);
extern rtx        gen_monitor_prologue       (void);
extern rtx        gen_pushqi1                (rtx);
extern rtx        gen_movqi                  (rtx, rtx);
extern rtx        gen_pushhi1_h8300          (rtx);
extern rtx        gen_pushhi1                (rtx);
extern rtx        gen_movhi                  (rtx, rtx);
extern rtx        gen_movsi                  (rtx, rtx);
extern rtx        gen_movsf                  (rtx, rtx);
extern rtx        gen_cmphi                  (rtx, rtx);
extern rtx        gen_addhi3                 (rtx, rtx, rtx);
extern rtx        gen_addsi3                 (rtx, rtx, rtx);
extern rtx        gen_subhi3                 (rtx, rtx, rtx);
extern rtx        gen_subsi3                 (rtx, rtx, rtx);
extern rtx        gen_andqi3                 (rtx, rtx, rtx);
extern rtx        gen_andhi3                 (rtx, rtx, rtx);
extern rtx        gen_andsi3                 (rtx, rtx, rtx);
extern rtx        gen_iorqi3                 (rtx, rtx, rtx);
extern rtx        gen_iorhi3                 (rtx, rtx, rtx);
extern rtx        gen_iorsi3                 (rtx, rtx, rtx);
extern rtx        gen_xorqi3                 (rtx, rtx, rtx);
extern rtx        gen_xorhi3                 (rtx, rtx, rtx);
extern rtx        gen_xorsi3                 (rtx, rtx, rtx);
extern rtx        gen_neghi2                 (rtx, rtx);
extern rtx        gen_neghi2_h8300           (rtx, rtx);
extern rtx        gen_negsi2                 (rtx, rtx);
extern rtx        gen_negsi2_h8300           (rtx, rtx);
extern rtx        gen_negsf2                 (rtx, rtx);
extern rtx        gen_abssf2                 (rtx, rtx);
extern rtx        gen_one_cmplhi2            (rtx, rtx);
extern rtx        gen_one_cmplsi2            (rtx, rtx);
extern rtx        gen_ble                    (rtx);
extern rtx        gen_bleu                   (rtx);
extern rtx        gen_bge                    (rtx);
extern rtx        gen_bgeu                   (rtx);
extern rtx        gen_blt                    (rtx);
extern rtx        gen_bltu                   (rtx);
extern rtx        gen_bgt                    (rtx);
extern rtx        gen_bgtu                   (rtx);
extern rtx        gen_beq                    (rtx);
extern rtx        gen_bne                    (rtx);
extern rtx        gen_tablejump              (rtx, rtx);
extern rtx        gen_indirect_jump          (rtx);
extern rtx        gen_push_h8300             (rtx);
extern rtx        gen_push_h8300hs_advanced  (rtx);
extern rtx        gen_push_h8300hs_normal    (rtx);
extern rtx        gen_pop_h8300              (rtx);
extern rtx        gen_pop_h8300hs_advanced   (rtx);
extern rtx        gen_pop_h8300hs_normal     (rtx);
extern rtx        gen_stm_h8300s_2           (rtx, rtx);
extern rtx        gen_stm_h8300s_3           (rtx, rtx, rtx);
extern rtx        gen_stm_h8300s_4           (rtx, rtx, rtx, rtx);
extern rtx        gen_ldm_h8300s_2           (rtx, rtx);
extern rtx        gen_ldm_h8300s_3           (rtx, rtx, rtx);
extern rtx        gen_ldm_h8300s_4           (rtx, rtx, rtx, rtx);
extern rtx        gen_return                 (void);
extern rtx        gen_prologue               (void);
extern rtx        gen_epilogue               (void);
extern rtx        gen_zero_extendqihi2       (rtx, rtx);
extern rtx        gen_zero_extendqisi2       (rtx, rtx);
extern rtx        gen_zero_extendhisi2       (rtx, rtx);
extern rtx        gen_extendqihi2            (rtx, rtx);
extern rtx        gen_extendqisi2            (rtx, rtx);
extern rtx        gen_extendhisi2            (rtx, rtx);
extern rtx        gen_ashlqi3                (rtx, rtx, rtx);
extern rtx        gen_ashrqi3                (rtx, rtx, rtx);
extern rtx        gen_lshrqi3                (rtx, rtx, rtx);
extern rtx        gen_ashlhi3                (rtx, rtx, rtx);
extern rtx        gen_lshrhi3                (rtx, rtx, rtx);
extern rtx        gen_ashrhi3                (rtx, rtx, rtx);
extern rtx        gen_ashlsi3                (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                (rtx, rtx, rtx);
extern rtx        gen_rotlqi3                (rtx, rtx, rtx);
extern rtx        gen_rotlhi3                (rtx, rtx, rtx);
extern rtx        gen_rotlsi3                (rtx, rtx, rtx);
extern rtx        gen_insv                   (rtx, rtx, rtx, rtx);
extern rtx        gen_extzv                  (rtx, rtx, rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */

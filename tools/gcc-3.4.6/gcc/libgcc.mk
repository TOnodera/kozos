srcdir = .
VPATH = .
EQ = =

force:

libgcc/./_cmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_cmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_cmpsi2.o
libgcc/h8300h/_cmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -DL_cmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/_cmpsi2.o
libgcc/h8300s/_cmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -DL_cmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/_cmpsi2.o
libgcc/h8300h/normal/_cmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -DL_cmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/_cmpsi2.o
libgcc/h8300h/int32/_cmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -DL_cmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/int32/_cmpsi2.o
libgcc/h8300h/normal/int32/_cmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -DL_cmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/int32/_cmpsi2.o
libgcc/h8300s/normal/_cmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -DL_cmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/_cmpsi2.o
libgcc/h8300s/int32/_cmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -DL_cmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/int32/_cmpsi2.o
libgcc/h8300s/normal/int32/_cmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -DL_cmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/int32/_cmpsi2.o
libgcc/./_ucmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ucmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_ucmpsi2.o
libgcc/h8300h/_ucmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -DL_ucmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/_ucmpsi2.o
libgcc/h8300s/_ucmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -DL_ucmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/_ucmpsi2.o
libgcc/h8300h/normal/_ucmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -DL_ucmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/_ucmpsi2.o
libgcc/h8300h/int32/_ucmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -DL_ucmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/int32/_ucmpsi2.o
libgcc/h8300h/normal/int32/_ucmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -DL_ucmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/int32/_ucmpsi2.o
libgcc/h8300s/normal/_ucmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -DL_ucmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/_ucmpsi2.o
libgcc/h8300s/int32/_ucmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -DL_ucmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/int32/_ucmpsi2.o
libgcc/h8300s/normal/int32/_ucmpsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -DL_ucmpsi2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/int32/_ucmpsi2.o
libgcc/./_divhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_divhi3.o
libgcc/h8300h/_divhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -DL_divhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/_divhi3.o
libgcc/h8300s/_divhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -DL_divhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/_divhi3.o
libgcc/h8300h/normal/_divhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -DL_divhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/_divhi3.o
libgcc/h8300h/int32/_divhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -DL_divhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/int32/_divhi3.o
libgcc/h8300h/normal/int32/_divhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -DL_divhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/int32/_divhi3.o
libgcc/h8300s/normal/_divhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -DL_divhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/_divhi3.o
libgcc/h8300s/int32/_divhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -DL_divhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/int32/_divhi3.o
libgcc/h8300s/normal/int32/_divhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -DL_divhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/int32/_divhi3.o
libgcc/./_divsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_divsi3.o
libgcc/h8300h/_divsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -DL_divsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/_divsi3.o
libgcc/h8300s/_divsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -DL_divsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/_divsi3.o
libgcc/h8300h/normal/_divsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -DL_divsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/_divsi3.o
libgcc/h8300h/int32/_divsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -DL_divsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/int32/_divsi3.o
libgcc/h8300h/normal/int32/_divsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -DL_divsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/int32/_divsi3.o
libgcc/h8300s/normal/_divsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -DL_divsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/_divsi3.o
libgcc/h8300s/int32/_divsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -DL_divsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/int32/_divsi3.o
libgcc/h8300s/normal/int32/_divsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -DL_divsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/int32/_divsi3.o
libgcc/./_mulhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_mulhi3.o
libgcc/h8300h/_mulhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -DL_mulhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/_mulhi3.o
libgcc/h8300s/_mulhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -DL_mulhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/_mulhi3.o
libgcc/h8300h/normal/_mulhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -DL_mulhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/_mulhi3.o
libgcc/h8300h/int32/_mulhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -DL_mulhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/int32/_mulhi3.o
libgcc/h8300h/normal/int32/_mulhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -DL_mulhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/int32/_mulhi3.o
libgcc/h8300s/normal/_mulhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -DL_mulhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/_mulhi3.o
libgcc/h8300s/int32/_mulhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -DL_mulhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/int32/_mulhi3.o
libgcc/h8300s/normal/int32/_mulhi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -DL_mulhi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/int32/_mulhi3.o
libgcc/./_mulsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_mulsi3.o
libgcc/h8300h/_mulsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -DL_mulsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/_mulsi3.o
libgcc/h8300s/_mulsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -DL_mulsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/_mulsi3.o
libgcc/h8300h/normal/_mulsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -DL_mulsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/_mulsi3.o
libgcc/h8300h/int32/_mulsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -DL_mulsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/int32/_mulsi3.o
libgcc/h8300h/normal/int32/_mulsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -DL_mulsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/int32/_mulsi3.o
libgcc/h8300s/normal/_mulsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -DL_mulsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/_mulsi3.o
libgcc/h8300s/int32/_mulsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -DL_mulsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/int32/_mulsi3.o
libgcc/h8300s/normal/int32/_mulsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -DL_mulsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/int32/_mulsi3.o
libgcc/./_fixunssfsi_asm.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunssfsi_asm -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_fixunssfsi_asm.o
libgcc/h8300h/_fixunssfsi_asm.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -DL_fixunssfsi_asm -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/_fixunssfsi_asm.o
libgcc/h8300s/_fixunssfsi_asm.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -DL_fixunssfsi_asm -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/_fixunssfsi_asm.o
libgcc/h8300h/normal/_fixunssfsi_asm.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -DL_fixunssfsi_asm -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/_fixunssfsi_asm.o
libgcc/h8300h/int32/_fixunssfsi_asm.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -DL_fixunssfsi_asm -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/int32/_fixunssfsi_asm.o
libgcc/h8300h/normal/int32/_fixunssfsi_asm.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -DL_fixunssfsi_asm -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300h/normal/int32/_fixunssfsi_asm.o
libgcc/h8300s/normal/_fixunssfsi_asm.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -DL_fixunssfsi_asm -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/_fixunssfsi_asm.o
libgcc/h8300s/int32/_fixunssfsi_asm.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -DL_fixunssfsi_asm -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/int32/_fixunssfsi_asm.o
libgcc/h8300s/normal/int32/_fixunssfsi_asm.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -DL_fixunssfsi_asm -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/h8300s/normal/int32/_fixunssfsi_asm.o
libgcc/./_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_muldi3.o
libgcc/h8300h/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_muldi3.o
libgcc/h8300s/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_muldi3.o
libgcc/h8300h/normal/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_muldi3.o
libgcc/h8300h/int32/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_muldi3.o
libgcc/h8300h/normal/int32/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_muldi3.o
libgcc/h8300s/normal/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_muldi3.o
libgcc/h8300s/int32/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_muldi3.o
libgcc/h8300s/normal/int32/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_muldi3.o
libgcc/./_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negdi2.o
libgcc/h8300h/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_negdi2.o
libgcc/h8300s/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_negdi2.o
libgcc/h8300h/normal/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_negdi2.o
libgcc/h8300h/int32/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_negdi2.o
libgcc/h8300h/normal/int32/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_negdi2.o
libgcc/h8300s/normal/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_negdi2.o
libgcc/h8300s/int32/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_negdi2.o
libgcc/h8300s/normal/int32/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_negdi2.o
libgcc/./_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_lshrdi3.o
libgcc/h8300h/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_lshrdi3.o
libgcc/h8300s/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_lshrdi3.o
libgcc/h8300h/normal/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_lshrdi3.o
libgcc/h8300h/int32/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_lshrdi3.o
libgcc/h8300h/normal/int32/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_lshrdi3.o
libgcc/h8300s/normal/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_lshrdi3.o
libgcc/h8300s/int32/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_lshrdi3.o
libgcc/h8300s/normal/int32/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_lshrdi3.o
libgcc/./_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashldi3.o
libgcc/h8300h/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_ashldi3.o
libgcc/h8300s/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_ashldi3.o
libgcc/h8300h/normal/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_ashldi3.o
libgcc/h8300h/int32/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_ashldi3.o
libgcc/h8300h/normal/int32/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_ashldi3.o
libgcc/h8300s/normal/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_ashldi3.o
libgcc/h8300s/int32/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_ashldi3.o
libgcc/h8300s/normal/int32/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_ashldi3.o
libgcc/./_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashrdi3.o
libgcc/h8300h/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_ashrdi3.o
libgcc/h8300s/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_ashrdi3.o
libgcc/h8300h/normal/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_ashrdi3.o
libgcc/h8300h/int32/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_ashrdi3.o
libgcc/h8300h/normal/int32/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_ashrdi3.o
libgcc/h8300s/normal/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_ashrdi3.o
libgcc/h8300s/int32/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_ashrdi3.o
libgcc/h8300s/normal/int32/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_ashrdi3.o
libgcc/./_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_cmpdi2.o
libgcc/h8300h/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_cmpdi2.o
libgcc/h8300s/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_cmpdi2.o
libgcc/h8300h/normal/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_cmpdi2.o
libgcc/h8300h/int32/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_cmpdi2.o
libgcc/h8300h/normal/int32/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_cmpdi2.o
libgcc/h8300s/normal/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_cmpdi2.o
libgcc/h8300s/int32/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_cmpdi2.o
libgcc/h8300s/normal/int32/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_cmpdi2.o
libgcc/./_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ucmpdi2.o
libgcc/h8300h/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_ucmpdi2.o
libgcc/h8300s/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_ucmpdi2.o
libgcc/h8300h/normal/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_ucmpdi2.o
libgcc/h8300h/int32/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_ucmpdi2.o
libgcc/h8300h/normal/int32/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_ucmpdi2.o
libgcc/h8300s/normal/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_ucmpdi2.o
libgcc/h8300s/int32/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_ucmpdi2.o
libgcc/h8300s/normal/int32/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_ucmpdi2.o
libgcc/./_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdidf.o
libgcc/h8300h/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_floatdidf.o
libgcc/h8300s/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_floatdidf.o
libgcc/h8300h/normal/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_floatdidf.o
libgcc/h8300h/int32/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_floatdidf.o
libgcc/h8300h/normal/int32/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_floatdidf.o
libgcc/h8300s/normal/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_floatdidf.o
libgcc/h8300s/int32/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_floatdidf.o
libgcc/h8300s/normal/int32/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_floatdidf.o
libgcc/./_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdisf.o
libgcc/h8300h/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_floatdisf.o
libgcc/h8300s/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_floatdisf.o
libgcc/h8300h/normal/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_floatdisf.o
libgcc/h8300h/int32/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_floatdisf.o
libgcc/h8300h/normal/int32/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_floatdisf.o
libgcc/h8300s/normal/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_floatdisf.o
libgcc/h8300s/int32/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_floatdisf.o
libgcc/h8300s/normal/int32/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_floatdisf.o
libgcc/./_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfsi.o
libgcc/h8300h/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_fixunsdfsi.o
libgcc/h8300s/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_fixunsdfsi.o
libgcc/h8300h/normal/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_fixunsdfsi.o
libgcc/h8300h/int32/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_fixunsdfsi.o
libgcc/h8300h/normal/int32/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_fixunsdfsi.o
libgcc/h8300s/normal/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_fixunsdfsi.o
libgcc/h8300s/int32/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_fixunsdfsi.o
libgcc/h8300s/normal/int32/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_fixunsdfsi.o
libgcc/./_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfsi.o
libgcc/h8300h/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_fixunssfsi.o
libgcc/h8300s/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_fixunssfsi.o
libgcc/h8300h/normal/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_fixunssfsi.o
libgcc/h8300h/int32/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_fixunssfsi.o
libgcc/h8300h/normal/int32/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_fixunssfsi.o
libgcc/h8300s/normal/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_fixunssfsi.o
libgcc/h8300s/int32/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_fixunssfsi.o
libgcc/h8300s/normal/int32/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_fixunssfsi.o
libgcc/./_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfdi.o
libgcc/h8300h/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_fixunsdfdi.o
libgcc/h8300s/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_fixunsdfdi.o
libgcc/h8300h/normal/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_fixunsdfdi.o
libgcc/h8300h/int32/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_fixunsdfdi.o
libgcc/h8300h/normal/int32/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_fixunsdfdi.o
libgcc/h8300s/normal/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_fixunsdfdi.o
libgcc/h8300s/int32/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_fixunsdfdi.o
libgcc/h8300s/normal/int32/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_fixunsdfdi.o
libgcc/./_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixdfdi.o
libgcc/h8300h/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_fixdfdi.o
libgcc/h8300s/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_fixdfdi.o
libgcc/h8300h/normal/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_fixdfdi.o
libgcc/h8300h/int32/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_fixdfdi.o
libgcc/h8300h/normal/int32/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_fixdfdi.o
libgcc/h8300s/normal/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_fixdfdi.o
libgcc/h8300s/int32/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_fixdfdi.o
libgcc/h8300s/normal/int32/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_fixdfdi.o
libgcc/./_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfdi.o
libgcc/h8300h/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_fixunssfdi.o
libgcc/h8300s/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_fixunssfdi.o
libgcc/h8300h/normal/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_fixunssfdi.o
libgcc/h8300h/int32/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_fixunssfdi.o
libgcc/h8300h/normal/int32/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_fixunssfdi.o
libgcc/h8300s/normal/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_fixunssfdi.o
libgcc/h8300s/int32/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_fixunssfdi.o
libgcc/h8300s/normal/int32/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_fixunssfdi.o
libgcc/./_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixsfdi.o
libgcc/h8300h/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_fixsfdi.o
libgcc/h8300s/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_fixsfdi.o
libgcc/h8300h/normal/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_fixsfdi.o
libgcc/h8300h/int32/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_fixsfdi.o
libgcc/h8300h/normal/int32/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_fixsfdi.o
libgcc/h8300s/normal/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_fixsfdi.o
libgcc/h8300s/int32/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_fixsfdi.o
libgcc/h8300s/normal/int32/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_fixsfdi.o
libgcc/./_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixxfdi.o
libgcc/h8300h/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_fixxfdi.o
libgcc/h8300s/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_fixxfdi.o
libgcc/h8300h/normal/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_fixxfdi.o
libgcc/h8300h/int32/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_fixxfdi.o
libgcc/h8300h/normal/int32/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_fixxfdi.o
libgcc/h8300s/normal/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_fixxfdi.o
libgcc/h8300s/int32/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_fixxfdi.o
libgcc/h8300s/normal/int32/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_fixxfdi.o
libgcc/./_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfdi.o
libgcc/h8300h/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_fixunsxfdi.o
libgcc/h8300s/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_fixunsxfdi.o
libgcc/h8300h/normal/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_fixunsxfdi.o
libgcc/h8300h/int32/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_fixunsxfdi.o
libgcc/h8300h/normal/int32/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_fixunsxfdi.o
libgcc/h8300s/normal/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_fixunsxfdi.o
libgcc/h8300s/int32/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_fixunsxfdi.o
libgcc/h8300s/normal/int32/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_fixunsxfdi.o
libgcc/./_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdixf.o
libgcc/h8300h/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_floatdixf.o
libgcc/h8300s/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_floatdixf.o
libgcc/h8300h/normal/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_floatdixf.o
libgcc/h8300h/int32/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_floatdixf.o
libgcc/h8300h/normal/int32/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_floatdixf.o
libgcc/h8300s/normal/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_floatdixf.o
libgcc/h8300s/int32/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_floatdixf.o
libgcc/h8300s/normal/int32/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_floatdixf.o
libgcc/./_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfsi.o
libgcc/h8300h/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_fixunsxfsi.o
libgcc/h8300s/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_fixunsxfsi.o
libgcc/h8300h/normal/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_fixunsxfsi.o
libgcc/h8300h/int32/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_fixunsxfsi.o
libgcc/h8300h/normal/int32/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_fixunsxfsi.o
libgcc/h8300s/normal/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_fixunsxfsi.o
libgcc/h8300s/int32/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_fixunsxfsi.o
libgcc/h8300s/normal/int32/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_fixunsxfsi.o
libgcc/./_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixtfdi.o
libgcc/h8300h/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_fixtfdi.o
libgcc/h8300s/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_fixtfdi.o
libgcc/h8300h/normal/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_fixtfdi.o
libgcc/h8300h/int32/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_fixtfdi.o
libgcc/h8300h/normal/int32/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_fixtfdi.o
libgcc/h8300s/normal/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_fixtfdi.o
libgcc/h8300s/int32/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_fixtfdi.o
libgcc/h8300s/normal/int32/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_fixtfdi.o
libgcc/./_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunstfdi.o
libgcc/h8300h/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_fixunstfdi.o
libgcc/h8300s/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_fixunstfdi.o
libgcc/h8300h/normal/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_fixunstfdi.o
libgcc/h8300h/int32/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_fixunstfdi.o
libgcc/h8300h/normal/int32/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_fixunstfdi.o
libgcc/h8300s/normal/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_fixunstfdi.o
libgcc/h8300s/int32/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_fixunstfdi.o
libgcc/h8300s/normal/int32/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_fixunstfdi.o
libgcc/./_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/./_floatditf.o
libgcc/h8300h/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_floatditf.o
libgcc/h8300s/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_floatditf.o
libgcc/h8300h/normal/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_floatditf.o
libgcc/h8300h/int32/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_floatditf.o
libgcc/h8300h/normal/int32/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_floatditf.o
libgcc/h8300s/normal/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_floatditf.o
libgcc/h8300s/int32/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_floatditf.o
libgcc/h8300s/normal/int32/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_floatditf.o
libgcc/./_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/./_clear_cache.o
libgcc/h8300h/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_clear_cache.o
libgcc/h8300s/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_clear_cache.o
libgcc/h8300h/normal/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_clear_cache.o
libgcc/h8300h/int32/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_clear_cache.o
libgcc/h8300h/normal/int32/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_clear_cache.o
libgcc/h8300s/normal/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_clear_cache.o
libgcc/h8300s/int32/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_clear_cache.o
libgcc/h8300s/normal/int32/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_clear_cache.o
libgcc/./_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/./_enable_execute_stack.o
libgcc/h8300h/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_enable_execute_stack.o
libgcc/h8300s/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_enable_execute_stack.o
libgcc/h8300h/normal/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_enable_execute_stack.o
libgcc/h8300h/int32/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_enable_execute_stack.o
libgcc/h8300h/normal/int32/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_enable_execute_stack.o
libgcc/h8300s/normal/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_enable_execute_stack.o
libgcc/h8300s/int32/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_enable_execute_stack.o
libgcc/h8300s/normal/int32/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_enable_execute_stack.o
libgcc/./_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/./_trampoline.o
libgcc/h8300h/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_trampoline.o
libgcc/h8300s/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_trampoline.o
libgcc/h8300h/normal/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_trampoline.o
libgcc/h8300h/int32/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_trampoline.o
libgcc/h8300h/normal/int32/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_trampoline.o
libgcc/h8300s/normal/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_trampoline.o
libgcc/h8300s/int32/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_trampoline.o
libgcc/h8300s/normal/int32/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_trampoline.o
libgcc/./__main.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL__main -c $(srcdir)/libgcc2.c -o libgcc/./__main.o
libgcc/h8300h/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL__main -c $(srcdir)/libgcc2.c -o libgcc/h8300h/__main.o
libgcc/h8300s/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL__main -c $(srcdir)/libgcc2.c -o libgcc/h8300s/__main.o
libgcc/h8300h/normal/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL__main -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/__main.o
libgcc/h8300h/int32/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL__main -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/__main.o
libgcc/h8300h/normal/int32/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL__main -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/__main.o
libgcc/h8300s/normal/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL__main -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/__main.o
libgcc/h8300s/int32/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL__main -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/__main.o
libgcc/h8300s/normal/int32/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL__main -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/__main.o
libgcc/./_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvsi2.o
libgcc/h8300h/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_absvsi2.o
libgcc/h8300s/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_absvsi2.o
libgcc/h8300h/normal/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_absvsi2.o
libgcc/h8300h/int32/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_absvsi2.o
libgcc/h8300h/normal/int32/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_absvsi2.o
libgcc/h8300s/normal/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_absvsi2.o
libgcc/h8300s/int32/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_absvsi2.o
libgcc/h8300s/normal/int32/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_absvsi2.o
libgcc/./_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvdi2.o
libgcc/h8300h/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_absvdi2.o
libgcc/h8300s/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_absvdi2.o
libgcc/h8300h/normal/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_absvdi2.o
libgcc/h8300h/int32/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_absvdi2.o
libgcc/h8300h/normal/int32/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_absvdi2.o
libgcc/h8300s/normal/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_absvdi2.o
libgcc/h8300s/int32/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_absvdi2.o
libgcc/h8300s/normal/int32/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_absvdi2.o
libgcc/./_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvsi3.o
libgcc/h8300h/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_addvsi3.o
libgcc/h8300s/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_addvsi3.o
libgcc/h8300h/normal/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_addvsi3.o
libgcc/h8300h/int32/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_addvsi3.o
libgcc/h8300h/normal/int32/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_addvsi3.o
libgcc/h8300s/normal/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_addvsi3.o
libgcc/h8300s/int32/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_addvsi3.o
libgcc/h8300s/normal/int32/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_addvsi3.o
libgcc/./_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvdi3.o
libgcc/h8300h/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_addvdi3.o
libgcc/h8300s/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_addvdi3.o
libgcc/h8300h/normal/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_addvdi3.o
libgcc/h8300h/int32/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_addvdi3.o
libgcc/h8300h/normal/int32/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_addvdi3.o
libgcc/h8300s/normal/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_addvdi3.o
libgcc/h8300s/int32/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_addvdi3.o
libgcc/h8300s/normal/int32/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_addvdi3.o
libgcc/./_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvsi3.o
libgcc/h8300h/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_subvsi3.o
libgcc/h8300s/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_subvsi3.o
libgcc/h8300h/normal/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_subvsi3.o
libgcc/h8300h/int32/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_subvsi3.o
libgcc/h8300h/normal/int32/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_subvsi3.o
libgcc/h8300s/normal/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_subvsi3.o
libgcc/h8300s/int32/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_subvsi3.o
libgcc/h8300s/normal/int32/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_subvsi3.o
libgcc/./_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvdi3.o
libgcc/h8300h/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_subvdi3.o
libgcc/h8300s/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_subvdi3.o
libgcc/h8300h/normal/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_subvdi3.o
libgcc/h8300h/int32/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_subvdi3.o
libgcc/h8300h/normal/int32/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_subvdi3.o
libgcc/h8300s/normal/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_subvdi3.o
libgcc/h8300s/int32/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_subvdi3.o
libgcc/h8300s/normal/int32/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_subvdi3.o
libgcc/./_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvsi3.o
libgcc/h8300h/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_mulvsi3.o
libgcc/h8300s/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_mulvsi3.o
libgcc/h8300h/normal/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_mulvsi3.o
libgcc/h8300h/int32/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_mulvsi3.o
libgcc/h8300h/normal/int32/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_mulvsi3.o
libgcc/h8300s/normal/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_mulvsi3.o
libgcc/h8300s/int32/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_mulvsi3.o
libgcc/h8300s/normal/int32/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_mulvsi3.o
libgcc/./_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvdi3.o
libgcc/h8300h/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_mulvdi3.o
libgcc/h8300s/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_mulvdi3.o
libgcc/h8300h/normal/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_mulvdi3.o
libgcc/h8300h/int32/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_mulvdi3.o
libgcc/h8300h/normal/int32/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_mulvdi3.o
libgcc/h8300s/normal/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_mulvdi3.o
libgcc/h8300s/int32/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_mulvdi3.o
libgcc/h8300s/normal/int32/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_mulvdi3.o
libgcc/./_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvsi2.o
libgcc/h8300h/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_negvsi2.o
libgcc/h8300s/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_negvsi2.o
libgcc/h8300h/normal/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_negvsi2.o
libgcc/h8300h/int32/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_negvsi2.o
libgcc/h8300h/normal/int32/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_negvsi2.o
libgcc/h8300s/normal/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_negvsi2.o
libgcc/h8300s/int32/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_negvsi2.o
libgcc/h8300s/normal/int32/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_negvsi2.o
libgcc/./_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvdi2.o
libgcc/h8300h/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_negvdi2.o
libgcc/h8300s/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_negvdi2.o
libgcc/h8300h/normal/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_negvdi2.o
libgcc/h8300h/int32/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_negvdi2.o
libgcc/h8300h/normal/int32/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_negvdi2.o
libgcc/h8300s/normal/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_negvdi2.o
libgcc/h8300s/int32/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_negvdi2.o
libgcc/h8300s/normal/int32/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_negvdi2.o
libgcc/./_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/./_ctors.o
libgcc/h8300h/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_ctors.o
libgcc/h8300s/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_ctors.o
libgcc/h8300h/normal/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_ctors.o
libgcc/h8300h/int32/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_ctors.o
libgcc/h8300h/normal/int32/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_ctors.o
libgcc/h8300s/normal/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_ctors.o
libgcc/h8300s/int32/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_ctors.o
libgcc/h8300s/normal/int32/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_ctors.o
libgcc/./_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffssi2.o
libgcc/h8300h/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_ffssi2.o
libgcc/h8300s/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_ffssi2.o
libgcc/h8300h/normal/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_ffssi2.o
libgcc/h8300h/int32/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_ffssi2.o
libgcc/h8300h/normal/int32/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_ffssi2.o
libgcc/h8300s/normal/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_ffssi2.o
libgcc/h8300s/int32/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_ffssi2.o
libgcc/h8300s/normal/int32/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_ffssi2.o
libgcc/./_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffsdi2.o
libgcc/h8300h/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_ffsdi2.o
libgcc/h8300s/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_ffsdi2.o
libgcc/h8300h/normal/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_ffsdi2.o
libgcc/h8300h/int32/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_ffsdi2.o
libgcc/h8300h/normal/int32/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_ffsdi2.o
libgcc/h8300s/normal/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_ffsdi2.o
libgcc/h8300s/int32/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_ffsdi2.o
libgcc/h8300s/normal/int32/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_ffsdi2.o
libgcc/./_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/./_clz.o
libgcc/h8300h/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_clz.o
libgcc/h8300s/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_clz.o
libgcc/h8300h/normal/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_clz.o
libgcc/h8300h/int32/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_clz.o
libgcc/h8300h/normal/int32/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_clz.o
libgcc/h8300s/normal/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_clz.o
libgcc/h8300s/int32/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_clz.o
libgcc/h8300s/normal/int32/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_clz.o
libgcc/./_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzsi2.o
libgcc/h8300h/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_clzsi2.o
libgcc/h8300s/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_clzsi2.o
libgcc/h8300h/normal/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_clzsi2.o
libgcc/h8300h/int32/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_clzsi2.o
libgcc/h8300h/normal/int32/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_clzsi2.o
libgcc/h8300s/normal/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_clzsi2.o
libgcc/h8300s/int32/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_clzsi2.o
libgcc/h8300s/normal/int32/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_clzsi2.o
libgcc/./_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzdi2.o
libgcc/h8300h/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_clzdi2.o
libgcc/h8300s/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_clzdi2.o
libgcc/h8300h/normal/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_clzdi2.o
libgcc/h8300h/int32/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_clzdi2.o
libgcc/h8300h/normal/int32/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_clzdi2.o
libgcc/h8300s/normal/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_clzdi2.o
libgcc/h8300s/int32/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_clzdi2.o
libgcc/h8300s/normal/int32/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_clzdi2.o
libgcc/./_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzsi2.o
libgcc/h8300h/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_ctzsi2.o
libgcc/h8300s/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_ctzsi2.o
libgcc/h8300h/normal/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_ctzsi2.o
libgcc/h8300h/int32/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_ctzsi2.o
libgcc/h8300h/normal/int32/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_ctzsi2.o
libgcc/h8300s/normal/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_ctzsi2.o
libgcc/h8300s/int32/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_ctzsi2.o
libgcc/h8300s/normal/int32/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_ctzsi2.o
libgcc/./_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzdi2.o
libgcc/h8300h/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_ctzdi2.o
libgcc/h8300s/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_ctzdi2.o
libgcc/h8300h/normal/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_ctzdi2.o
libgcc/h8300h/int32/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_ctzdi2.o
libgcc/h8300h/normal/int32/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_ctzdi2.o
libgcc/h8300s/normal/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_ctzdi2.o
libgcc/h8300s/int32/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_ctzdi2.o
libgcc/h8300s/normal/int32/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_ctzdi2.o
libgcc/./_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/./_popcount_tab.o
libgcc/h8300h/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_popcount_tab.o
libgcc/h8300s/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_popcount_tab.o
libgcc/h8300h/normal/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_popcount_tab.o
libgcc/h8300h/int32/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_popcount_tab.o
libgcc/h8300h/normal/int32/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_popcount_tab.o
libgcc/h8300s/normal/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_popcount_tab.o
libgcc/h8300s/int32/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_popcount_tab.o
libgcc/h8300s/normal/int32/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_popcount_tab.o
libgcc/./_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountsi2.o
libgcc/h8300h/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_popcountsi2.o
libgcc/h8300s/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_popcountsi2.o
libgcc/h8300h/normal/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_popcountsi2.o
libgcc/h8300h/int32/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_popcountsi2.o
libgcc/h8300h/normal/int32/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_popcountsi2.o
libgcc/h8300s/normal/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_popcountsi2.o
libgcc/h8300s/int32/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_popcountsi2.o
libgcc/h8300s/normal/int32/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_popcountsi2.o
libgcc/./_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountdi2.o
libgcc/h8300h/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_popcountdi2.o
libgcc/h8300s/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_popcountdi2.o
libgcc/h8300h/normal/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_popcountdi2.o
libgcc/h8300h/int32/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_popcountdi2.o
libgcc/h8300h/normal/int32/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_popcountdi2.o
libgcc/h8300s/normal/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_popcountdi2.o
libgcc/h8300s/int32/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_popcountdi2.o
libgcc/h8300s/normal/int32/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_popcountdi2.o
libgcc/./_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritysi2.o
libgcc/h8300h/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_paritysi2.o
libgcc/h8300s/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_paritysi2.o
libgcc/h8300h/normal/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_paritysi2.o
libgcc/h8300h/int32/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_paritysi2.o
libgcc/h8300h/normal/int32/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_paritysi2.o
libgcc/h8300s/normal/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_paritysi2.o
libgcc/h8300s/int32/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_paritysi2.o
libgcc/h8300s/normal/int32/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_paritysi2.o
libgcc/./_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritydi2.o
libgcc/h8300h/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_paritydi2.o
libgcc/h8300s/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_paritydi2.o
libgcc/h8300h/normal/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_paritydi2.o
libgcc/h8300h/int32/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_paritydi2.o
libgcc/h8300h/normal/int32/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_paritydi2.o
libgcc/h8300s/normal/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_paritydi2.o
libgcc/h8300s/int32/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_paritydi2.o
libgcc/h8300s/normal/int32/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_paritydi2.o
libgcc/./_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_eprintf -c $(srcdir)/libgcc2.c -o libgcc/./_eprintf.o
libgcc/h8300h/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_eprintf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/_eprintf.o
libgcc/h8300s/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_eprintf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/_eprintf.o
libgcc/h8300h/normal/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_eprintf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/_eprintf.o
libgcc/h8300h/int32/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_eprintf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/_eprintf.o
libgcc/h8300h/normal/int32/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_eprintf -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/_eprintf.o
libgcc/h8300s/normal/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_eprintf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/_eprintf.o
libgcc/h8300s/int32/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_eprintf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/_eprintf.o
libgcc/h8300s/normal/int32/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_eprintf -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/_eprintf.o
libgcc/./__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL__gcc_bcmp -c $(srcdir)/libgcc2.c -o libgcc/./__gcc_bcmp.o
libgcc/h8300h/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL__gcc_bcmp -c $(srcdir)/libgcc2.c -o libgcc/h8300h/__gcc_bcmp.o
libgcc/h8300s/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL__gcc_bcmp -c $(srcdir)/libgcc2.c -o libgcc/h8300s/__gcc_bcmp.o
libgcc/h8300h/normal/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL__gcc_bcmp -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/__gcc_bcmp.o
libgcc/h8300h/int32/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL__gcc_bcmp -c $(srcdir)/libgcc2.c -o libgcc/h8300h/int32/__gcc_bcmp.o
libgcc/h8300h/normal/int32/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL__gcc_bcmp -c $(srcdir)/libgcc2.c -o libgcc/h8300h/normal/int32/__gcc_bcmp.o
libgcc/h8300s/normal/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL__gcc_bcmp -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/__gcc_bcmp.o
libgcc/h8300s/int32/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL__gcc_bcmp -c $(srcdir)/libgcc2.c -o libgcc/h8300s/int32/__gcc_bcmp.o
libgcc/h8300s/normal/int32/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL__gcc_bcmp -c $(srcdir)/libgcc2.c -o libgcc/h8300s/normal/int32/__gcc_bcmp.o
libgcc/./_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_divdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_divdi3.o
libgcc/h8300h/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_divdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/_divdi3.o
libgcc/h8300s/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_divdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/_divdi3.o
libgcc/h8300h/normal/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_divdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/normal/_divdi3.o
libgcc/h8300h/int32/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_divdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/int32/_divdi3.o
libgcc/h8300h/normal/int32/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_divdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/normal/int32/_divdi3.o
libgcc/h8300s/normal/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_divdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/normal/_divdi3.o
libgcc/h8300s/int32/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_divdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/int32/_divdi3.o
libgcc/h8300s/normal/int32/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_divdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/normal/int32/_divdi3.o
libgcc/./_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_moddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_moddi3.o
libgcc/h8300h/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_moddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/_moddi3.o
libgcc/h8300s/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_moddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/_moddi3.o
libgcc/h8300h/normal/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_moddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/normal/_moddi3.o
libgcc/h8300h/int32/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_moddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/int32/_moddi3.o
libgcc/h8300h/normal/int32/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_moddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/normal/int32/_moddi3.o
libgcc/h8300s/normal/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_moddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/normal/_moddi3.o
libgcc/h8300s/int32/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_moddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/int32/_moddi3.o
libgcc/h8300s/normal/int32/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_moddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/normal/int32/_moddi3.o
libgcc/./_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_udivdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_udivdi3.o
libgcc/h8300h/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_udivdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/_udivdi3.o
libgcc/h8300s/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_udivdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/_udivdi3.o
libgcc/h8300h/normal/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_udivdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/normal/_udivdi3.o
libgcc/h8300h/int32/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_udivdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/int32/_udivdi3.o
libgcc/h8300h/normal/int32/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_udivdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/normal/int32/_udivdi3.o
libgcc/h8300s/normal/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_udivdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/normal/_udivdi3.o
libgcc/h8300s/int32/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_udivdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/int32/_udivdi3.o
libgcc/h8300s/normal/int32/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_udivdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/normal/int32/_udivdi3.o
libgcc/./_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_umoddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_umoddi3.o
libgcc/h8300h/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_umoddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/_umoddi3.o
libgcc/h8300s/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_umoddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/_umoddi3.o
libgcc/h8300h/normal/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_umoddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/normal/_umoddi3.o
libgcc/h8300h/int32/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_umoddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/int32/_umoddi3.o
libgcc/h8300h/normal/int32/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_umoddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/normal/int32/_umoddi3.o
libgcc/h8300s/normal/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_umoddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/normal/_umoddi3.o
libgcc/h8300s/int32/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_umoddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/int32/_umoddi3.o
libgcc/h8300s/normal/int32/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_umoddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/normal/int32/_umoddi3.o
libgcc/./_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_udiv_w_sdiv.o
libgcc/h8300h/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/_udiv_w_sdiv.o
libgcc/h8300s/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/_udiv_w_sdiv.o
libgcc/h8300h/normal/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/normal/_udiv_w_sdiv.o
libgcc/h8300h/int32/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/int32/_udiv_w_sdiv.o
libgcc/h8300h/normal/int32/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/normal/int32/_udiv_w_sdiv.o
libgcc/h8300s/normal/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/normal/_udiv_w_sdiv.o
libgcc/h8300s/int32/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/int32/_udiv_w_sdiv.o
libgcc/h8300s/normal/int32/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/normal/int32/_udiv_w_sdiv.o
libgcc/./_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_udivmoddi4.o
libgcc/h8300h/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/_udivmoddi4.o
libgcc/h8300s/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/_udivmoddi4.o
libgcc/h8300h/normal/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/normal/_udivmoddi4.o
libgcc/h8300h/int32/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/int32/_udivmoddi4.o
libgcc/h8300h/normal/int32/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300h/normal/int32/_udivmoddi4.o
libgcc/h8300s/normal/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/normal/_udivmoddi4.o
libgcc/h8300s/int32/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/int32/_udivmoddi4.o
libgcc/h8300s/normal/int32/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/h8300s/normal/int32/_udivmoddi4.o
libgcc/./_pack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_pack_sf -c fp-bit.c -o libgcc/./_pack_sf.o
libgcc/h8300h/_pack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_pack_sf -c fp-bit.c -o libgcc/h8300h/_pack_sf.o
libgcc/h8300s/_pack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_pack_sf -c fp-bit.c -o libgcc/h8300s/_pack_sf.o
libgcc/h8300h/normal/_pack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_pack_sf -c fp-bit.c -o libgcc/h8300h/normal/_pack_sf.o
libgcc/h8300h/int32/_pack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_pack_sf -c fp-bit.c -o libgcc/h8300h/int32/_pack_sf.o
libgcc/h8300h/normal/int32/_pack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_pack_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_pack_sf.o
libgcc/h8300s/normal/_pack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_pack_sf -c fp-bit.c -o libgcc/h8300s/normal/_pack_sf.o
libgcc/h8300s/int32/_pack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_pack_sf -c fp-bit.c -o libgcc/h8300s/int32/_pack_sf.o
libgcc/h8300s/normal/int32/_pack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_pack_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_pack_sf.o
libgcc/./_unpack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unpack_sf -c fp-bit.c -o libgcc/./_unpack_sf.o
libgcc/h8300h/_unpack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_unpack_sf -c fp-bit.c -o libgcc/h8300h/_unpack_sf.o
libgcc/h8300s/_unpack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_unpack_sf -c fp-bit.c -o libgcc/h8300s/_unpack_sf.o
libgcc/h8300h/normal/_unpack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_unpack_sf -c fp-bit.c -o libgcc/h8300h/normal/_unpack_sf.o
libgcc/h8300h/int32/_unpack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_unpack_sf -c fp-bit.c -o libgcc/h8300h/int32/_unpack_sf.o
libgcc/h8300h/normal/int32/_unpack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_unpack_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_unpack_sf.o
libgcc/h8300s/normal/_unpack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_unpack_sf -c fp-bit.c -o libgcc/h8300s/normal/_unpack_sf.o
libgcc/h8300s/int32/_unpack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_unpack_sf -c fp-bit.c -o libgcc/h8300s/int32/_unpack_sf.o
libgcc/h8300s/normal/int32/_unpack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_unpack_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_unpack_sf.o
libgcc/./_addsub_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_addsub_sf -c fp-bit.c -o libgcc/./_addsub_sf.o
libgcc/h8300h/_addsub_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_addsub_sf -c fp-bit.c -o libgcc/h8300h/_addsub_sf.o
libgcc/h8300s/_addsub_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_addsub_sf -c fp-bit.c -o libgcc/h8300s/_addsub_sf.o
libgcc/h8300h/normal/_addsub_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_addsub_sf -c fp-bit.c -o libgcc/h8300h/normal/_addsub_sf.o
libgcc/h8300h/int32/_addsub_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_addsub_sf -c fp-bit.c -o libgcc/h8300h/int32/_addsub_sf.o
libgcc/h8300h/normal/int32/_addsub_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_addsub_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_addsub_sf.o
libgcc/h8300s/normal/_addsub_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_addsub_sf -c fp-bit.c -o libgcc/h8300s/normal/_addsub_sf.o
libgcc/h8300s/int32/_addsub_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_addsub_sf -c fp-bit.c -o libgcc/h8300s/int32/_addsub_sf.o
libgcc/h8300s/normal/int32/_addsub_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_addsub_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_addsub_sf.o
libgcc/./_mul_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_mul_sf -c fp-bit.c -o libgcc/./_mul_sf.o
libgcc/h8300h/_mul_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_mul_sf -c fp-bit.c -o libgcc/h8300h/_mul_sf.o
libgcc/h8300s/_mul_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_mul_sf -c fp-bit.c -o libgcc/h8300s/_mul_sf.o
libgcc/h8300h/normal/_mul_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_mul_sf -c fp-bit.c -o libgcc/h8300h/normal/_mul_sf.o
libgcc/h8300h/int32/_mul_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_mul_sf -c fp-bit.c -o libgcc/h8300h/int32/_mul_sf.o
libgcc/h8300h/normal/int32/_mul_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_mul_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_mul_sf.o
libgcc/h8300s/normal/_mul_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_mul_sf -c fp-bit.c -o libgcc/h8300s/normal/_mul_sf.o
libgcc/h8300s/int32/_mul_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_mul_sf -c fp-bit.c -o libgcc/h8300s/int32/_mul_sf.o
libgcc/h8300s/normal/int32/_mul_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_mul_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_mul_sf.o
libgcc/./_div_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_div_sf -c fp-bit.c -o libgcc/./_div_sf.o
libgcc/h8300h/_div_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_div_sf -c fp-bit.c -o libgcc/h8300h/_div_sf.o
libgcc/h8300s/_div_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_div_sf -c fp-bit.c -o libgcc/h8300s/_div_sf.o
libgcc/h8300h/normal/_div_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_div_sf -c fp-bit.c -o libgcc/h8300h/normal/_div_sf.o
libgcc/h8300h/int32/_div_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_div_sf -c fp-bit.c -o libgcc/h8300h/int32/_div_sf.o
libgcc/h8300h/normal/int32/_div_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_div_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_div_sf.o
libgcc/h8300s/normal/_div_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_div_sf -c fp-bit.c -o libgcc/h8300s/normal/_div_sf.o
libgcc/h8300s/int32/_div_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_div_sf -c fp-bit.c -o libgcc/h8300s/int32/_div_sf.o
libgcc/h8300s/normal/int32/_div_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_div_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_div_sf.o
libgcc/./_fpcmp_parts_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_fpcmp_parts_sf -c fp-bit.c -o libgcc/./_fpcmp_parts_sf.o
libgcc/h8300h/_fpcmp_parts_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_fpcmp_parts_sf -c fp-bit.c -o libgcc/h8300h/_fpcmp_parts_sf.o
libgcc/h8300s/_fpcmp_parts_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_fpcmp_parts_sf -c fp-bit.c -o libgcc/h8300s/_fpcmp_parts_sf.o
libgcc/h8300h/normal/_fpcmp_parts_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_fpcmp_parts_sf -c fp-bit.c -o libgcc/h8300h/normal/_fpcmp_parts_sf.o
libgcc/h8300h/int32/_fpcmp_parts_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_fpcmp_parts_sf -c fp-bit.c -o libgcc/h8300h/int32/_fpcmp_parts_sf.o
libgcc/h8300h/normal/int32/_fpcmp_parts_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_fpcmp_parts_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_fpcmp_parts_sf.o
libgcc/h8300s/normal/_fpcmp_parts_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_fpcmp_parts_sf -c fp-bit.c -o libgcc/h8300s/normal/_fpcmp_parts_sf.o
libgcc/h8300s/int32/_fpcmp_parts_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_fpcmp_parts_sf -c fp-bit.c -o libgcc/h8300s/int32/_fpcmp_parts_sf.o
libgcc/h8300s/normal/int32/_fpcmp_parts_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_fpcmp_parts_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_fpcmp_parts_sf.o
libgcc/./_compare_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_compare_sf -c fp-bit.c -o libgcc/./_compare_sf.o
libgcc/h8300h/_compare_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_compare_sf -c fp-bit.c -o libgcc/h8300h/_compare_sf.o
libgcc/h8300s/_compare_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_compare_sf -c fp-bit.c -o libgcc/h8300s/_compare_sf.o
libgcc/h8300h/normal/_compare_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_compare_sf -c fp-bit.c -o libgcc/h8300h/normal/_compare_sf.o
libgcc/h8300h/int32/_compare_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_compare_sf -c fp-bit.c -o libgcc/h8300h/int32/_compare_sf.o
libgcc/h8300h/normal/int32/_compare_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_compare_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_compare_sf.o
libgcc/h8300s/normal/_compare_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_compare_sf -c fp-bit.c -o libgcc/h8300s/normal/_compare_sf.o
libgcc/h8300s/int32/_compare_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_compare_sf -c fp-bit.c -o libgcc/h8300s/int32/_compare_sf.o
libgcc/h8300s/normal/int32/_compare_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_compare_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_compare_sf.o
libgcc/./_eq_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_eq_sf -c fp-bit.c -o libgcc/./_eq_sf.o
libgcc/h8300h/_eq_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_eq_sf -c fp-bit.c -o libgcc/h8300h/_eq_sf.o
libgcc/h8300s/_eq_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_eq_sf -c fp-bit.c -o libgcc/h8300s/_eq_sf.o
libgcc/h8300h/normal/_eq_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_eq_sf -c fp-bit.c -o libgcc/h8300h/normal/_eq_sf.o
libgcc/h8300h/int32/_eq_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_eq_sf -c fp-bit.c -o libgcc/h8300h/int32/_eq_sf.o
libgcc/h8300h/normal/int32/_eq_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_eq_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_eq_sf.o
libgcc/h8300s/normal/_eq_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_eq_sf -c fp-bit.c -o libgcc/h8300s/normal/_eq_sf.o
libgcc/h8300s/int32/_eq_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_eq_sf -c fp-bit.c -o libgcc/h8300s/int32/_eq_sf.o
libgcc/h8300s/normal/int32/_eq_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_eq_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_eq_sf.o
libgcc/./_ne_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ne_sf -c fp-bit.c -o libgcc/./_ne_sf.o
libgcc/h8300h/_ne_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_ne_sf -c fp-bit.c -o libgcc/h8300h/_ne_sf.o
libgcc/h8300s/_ne_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_ne_sf -c fp-bit.c -o libgcc/h8300s/_ne_sf.o
libgcc/h8300h/normal/_ne_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_ne_sf -c fp-bit.c -o libgcc/h8300h/normal/_ne_sf.o
libgcc/h8300h/int32/_ne_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_ne_sf -c fp-bit.c -o libgcc/h8300h/int32/_ne_sf.o
libgcc/h8300h/normal/int32/_ne_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_ne_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_ne_sf.o
libgcc/h8300s/normal/_ne_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_ne_sf -c fp-bit.c -o libgcc/h8300s/normal/_ne_sf.o
libgcc/h8300s/int32/_ne_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_ne_sf -c fp-bit.c -o libgcc/h8300s/int32/_ne_sf.o
libgcc/h8300s/normal/int32/_ne_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_ne_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_ne_sf.o
libgcc/./_gt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_gt_sf -c fp-bit.c -o libgcc/./_gt_sf.o
libgcc/h8300h/_gt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_gt_sf -c fp-bit.c -o libgcc/h8300h/_gt_sf.o
libgcc/h8300s/_gt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_gt_sf -c fp-bit.c -o libgcc/h8300s/_gt_sf.o
libgcc/h8300h/normal/_gt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_gt_sf -c fp-bit.c -o libgcc/h8300h/normal/_gt_sf.o
libgcc/h8300h/int32/_gt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_gt_sf -c fp-bit.c -o libgcc/h8300h/int32/_gt_sf.o
libgcc/h8300h/normal/int32/_gt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_gt_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_gt_sf.o
libgcc/h8300s/normal/_gt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_gt_sf -c fp-bit.c -o libgcc/h8300s/normal/_gt_sf.o
libgcc/h8300s/int32/_gt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_gt_sf -c fp-bit.c -o libgcc/h8300s/int32/_gt_sf.o
libgcc/h8300s/normal/int32/_gt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_gt_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_gt_sf.o
libgcc/./_ge_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ge_sf -c fp-bit.c -o libgcc/./_ge_sf.o
libgcc/h8300h/_ge_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_ge_sf -c fp-bit.c -o libgcc/h8300h/_ge_sf.o
libgcc/h8300s/_ge_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_ge_sf -c fp-bit.c -o libgcc/h8300s/_ge_sf.o
libgcc/h8300h/normal/_ge_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_ge_sf -c fp-bit.c -o libgcc/h8300h/normal/_ge_sf.o
libgcc/h8300h/int32/_ge_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_ge_sf -c fp-bit.c -o libgcc/h8300h/int32/_ge_sf.o
libgcc/h8300h/normal/int32/_ge_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_ge_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_ge_sf.o
libgcc/h8300s/normal/_ge_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_ge_sf -c fp-bit.c -o libgcc/h8300s/normal/_ge_sf.o
libgcc/h8300s/int32/_ge_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_ge_sf -c fp-bit.c -o libgcc/h8300s/int32/_ge_sf.o
libgcc/h8300s/normal/int32/_ge_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_ge_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_ge_sf.o
libgcc/./_lt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_lt_sf -c fp-bit.c -o libgcc/./_lt_sf.o
libgcc/h8300h/_lt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_lt_sf -c fp-bit.c -o libgcc/h8300h/_lt_sf.o
libgcc/h8300s/_lt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_lt_sf -c fp-bit.c -o libgcc/h8300s/_lt_sf.o
libgcc/h8300h/normal/_lt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_lt_sf -c fp-bit.c -o libgcc/h8300h/normal/_lt_sf.o
libgcc/h8300h/int32/_lt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_lt_sf -c fp-bit.c -o libgcc/h8300h/int32/_lt_sf.o
libgcc/h8300h/normal/int32/_lt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_lt_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_lt_sf.o
libgcc/h8300s/normal/_lt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_lt_sf -c fp-bit.c -o libgcc/h8300s/normal/_lt_sf.o
libgcc/h8300s/int32/_lt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_lt_sf -c fp-bit.c -o libgcc/h8300s/int32/_lt_sf.o
libgcc/h8300s/normal/int32/_lt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_lt_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_lt_sf.o
libgcc/./_le_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_le_sf -c fp-bit.c -o libgcc/./_le_sf.o
libgcc/h8300h/_le_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_le_sf -c fp-bit.c -o libgcc/h8300h/_le_sf.o
libgcc/h8300s/_le_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_le_sf -c fp-bit.c -o libgcc/h8300s/_le_sf.o
libgcc/h8300h/normal/_le_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_le_sf -c fp-bit.c -o libgcc/h8300h/normal/_le_sf.o
libgcc/h8300h/int32/_le_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_le_sf -c fp-bit.c -o libgcc/h8300h/int32/_le_sf.o
libgcc/h8300h/normal/int32/_le_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_le_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_le_sf.o
libgcc/h8300s/normal/_le_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_le_sf -c fp-bit.c -o libgcc/h8300s/normal/_le_sf.o
libgcc/h8300s/int32/_le_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_le_sf -c fp-bit.c -o libgcc/h8300s/int32/_le_sf.o
libgcc/h8300s/normal/int32/_le_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_le_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_le_sf.o
libgcc/./_unord_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unord_sf -c fp-bit.c -o libgcc/./_unord_sf.o
libgcc/h8300h/_unord_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_unord_sf -c fp-bit.c -o libgcc/h8300h/_unord_sf.o
libgcc/h8300s/_unord_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_unord_sf -c fp-bit.c -o libgcc/h8300s/_unord_sf.o
libgcc/h8300h/normal/_unord_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_unord_sf -c fp-bit.c -o libgcc/h8300h/normal/_unord_sf.o
libgcc/h8300h/int32/_unord_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_unord_sf -c fp-bit.c -o libgcc/h8300h/int32/_unord_sf.o
libgcc/h8300h/normal/int32/_unord_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_unord_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_unord_sf.o
libgcc/h8300s/normal/_unord_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_unord_sf -c fp-bit.c -o libgcc/h8300s/normal/_unord_sf.o
libgcc/h8300s/int32/_unord_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_unord_sf -c fp-bit.c -o libgcc/h8300s/int32/_unord_sf.o
libgcc/h8300s/normal/int32/_unord_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_unord_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_unord_sf.o
libgcc/./_si_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_si_to_sf -c fp-bit.c -o libgcc/./_si_to_sf.o
libgcc/h8300h/_si_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_si_to_sf -c fp-bit.c -o libgcc/h8300h/_si_to_sf.o
libgcc/h8300s/_si_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_si_to_sf -c fp-bit.c -o libgcc/h8300s/_si_to_sf.o
libgcc/h8300h/normal/_si_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_si_to_sf -c fp-bit.c -o libgcc/h8300h/normal/_si_to_sf.o
libgcc/h8300h/int32/_si_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_si_to_sf -c fp-bit.c -o libgcc/h8300h/int32/_si_to_sf.o
libgcc/h8300h/normal/int32/_si_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_si_to_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_si_to_sf.o
libgcc/h8300s/normal/_si_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_si_to_sf -c fp-bit.c -o libgcc/h8300s/normal/_si_to_sf.o
libgcc/h8300s/int32/_si_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_si_to_sf -c fp-bit.c -o libgcc/h8300s/int32/_si_to_sf.o
libgcc/h8300s/normal/int32/_si_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_si_to_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_si_to_sf.o
libgcc/./_sf_to_si.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_si -c fp-bit.c -o libgcc/./_sf_to_si.o
libgcc/h8300h/_sf_to_si.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_sf_to_si -c fp-bit.c -o libgcc/h8300h/_sf_to_si.o
libgcc/h8300s/_sf_to_si.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_sf_to_si -c fp-bit.c -o libgcc/h8300s/_sf_to_si.o
libgcc/h8300h/normal/_sf_to_si.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_sf_to_si -c fp-bit.c -o libgcc/h8300h/normal/_sf_to_si.o
libgcc/h8300h/int32/_sf_to_si.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_sf_to_si -c fp-bit.c -o libgcc/h8300h/int32/_sf_to_si.o
libgcc/h8300h/normal/int32/_sf_to_si.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_sf_to_si -c fp-bit.c -o libgcc/h8300h/normal/int32/_sf_to_si.o
libgcc/h8300s/normal/_sf_to_si.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_sf_to_si -c fp-bit.c -o libgcc/h8300s/normal/_sf_to_si.o
libgcc/h8300s/int32/_sf_to_si.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_sf_to_si -c fp-bit.c -o libgcc/h8300s/int32/_sf_to_si.o
libgcc/h8300s/normal/int32/_sf_to_si.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_sf_to_si -c fp-bit.c -o libgcc/h8300s/normal/int32/_sf_to_si.o
libgcc/./_negate_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_negate_sf -c fp-bit.c -o libgcc/./_negate_sf.o
libgcc/h8300h/_negate_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_negate_sf -c fp-bit.c -o libgcc/h8300h/_negate_sf.o
libgcc/h8300s/_negate_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_negate_sf -c fp-bit.c -o libgcc/h8300s/_negate_sf.o
libgcc/h8300h/normal/_negate_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_negate_sf -c fp-bit.c -o libgcc/h8300h/normal/_negate_sf.o
libgcc/h8300h/int32/_negate_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_negate_sf -c fp-bit.c -o libgcc/h8300h/int32/_negate_sf.o
libgcc/h8300h/normal/int32/_negate_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_negate_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_negate_sf.o
libgcc/h8300s/normal/_negate_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_negate_sf -c fp-bit.c -o libgcc/h8300s/normal/_negate_sf.o
libgcc/h8300s/int32/_negate_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_negate_sf -c fp-bit.c -o libgcc/h8300s/int32/_negate_sf.o
libgcc/h8300s/normal/int32/_negate_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_negate_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_negate_sf.o
libgcc/./_make_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_make_sf -c fp-bit.c -o libgcc/./_make_sf.o
libgcc/h8300h/_make_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_make_sf -c fp-bit.c -o libgcc/h8300h/_make_sf.o
libgcc/h8300s/_make_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_make_sf -c fp-bit.c -o libgcc/h8300s/_make_sf.o
libgcc/h8300h/normal/_make_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_make_sf -c fp-bit.c -o libgcc/h8300h/normal/_make_sf.o
libgcc/h8300h/int32/_make_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_make_sf -c fp-bit.c -o libgcc/h8300h/int32/_make_sf.o
libgcc/h8300h/normal/int32/_make_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_make_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_make_sf.o
libgcc/h8300s/normal/_make_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_make_sf -c fp-bit.c -o libgcc/h8300s/normal/_make_sf.o
libgcc/h8300s/int32/_make_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_make_sf -c fp-bit.c -o libgcc/h8300s/int32/_make_sf.o
libgcc/h8300s/normal/int32/_make_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_make_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_make_sf.o
libgcc/./_sf_to_df.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_df -c fp-bit.c -o libgcc/./_sf_to_df.o
libgcc/h8300h/_sf_to_df.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_sf_to_df -c fp-bit.c -o libgcc/h8300h/_sf_to_df.o
libgcc/h8300s/_sf_to_df.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_sf_to_df -c fp-bit.c -o libgcc/h8300s/_sf_to_df.o
libgcc/h8300h/normal/_sf_to_df.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_sf_to_df -c fp-bit.c -o libgcc/h8300h/normal/_sf_to_df.o
libgcc/h8300h/int32/_sf_to_df.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_sf_to_df -c fp-bit.c -o libgcc/h8300h/int32/_sf_to_df.o
libgcc/h8300h/normal/int32/_sf_to_df.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_sf_to_df -c fp-bit.c -o libgcc/h8300h/normal/int32/_sf_to_df.o
libgcc/h8300s/normal/_sf_to_df.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_sf_to_df -c fp-bit.c -o libgcc/h8300s/normal/_sf_to_df.o
libgcc/h8300s/int32/_sf_to_df.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_sf_to_df -c fp-bit.c -o libgcc/h8300s/int32/_sf_to_df.o
libgcc/h8300s/normal/int32/_sf_to_df.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_sf_to_df -c fp-bit.c -o libgcc/h8300s/normal/int32/_sf_to_df.o
libgcc/./_sf_to_tf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_tf -c fp-bit.c -o libgcc/./_sf_to_tf.o
libgcc/h8300h/_sf_to_tf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_sf_to_tf -c fp-bit.c -o libgcc/h8300h/_sf_to_tf.o
libgcc/h8300s/_sf_to_tf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_sf_to_tf -c fp-bit.c -o libgcc/h8300s/_sf_to_tf.o
libgcc/h8300h/normal/_sf_to_tf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_sf_to_tf -c fp-bit.c -o libgcc/h8300h/normal/_sf_to_tf.o
libgcc/h8300h/int32/_sf_to_tf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_sf_to_tf -c fp-bit.c -o libgcc/h8300h/int32/_sf_to_tf.o
libgcc/h8300h/normal/int32/_sf_to_tf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_sf_to_tf -c fp-bit.c -o libgcc/h8300h/normal/int32/_sf_to_tf.o
libgcc/h8300s/normal/_sf_to_tf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_sf_to_tf -c fp-bit.c -o libgcc/h8300s/normal/_sf_to_tf.o
libgcc/h8300s/int32/_sf_to_tf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_sf_to_tf -c fp-bit.c -o libgcc/h8300s/int32/_sf_to_tf.o
libgcc/h8300s/normal/int32/_sf_to_tf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_sf_to_tf -c fp-bit.c -o libgcc/h8300s/normal/int32/_sf_to_tf.o
libgcc/./_thenan_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_thenan_sf -c fp-bit.c -o libgcc/./_thenan_sf.o
libgcc/h8300h/_thenan_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_thenan_sf -c fp-bit.c -o libgcc/h8300h/_thenan_sf.o
libgcc/h8300s/_thenan_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_thenan_sf -c fp-bit.c -o libgcc/h8300s/_thenan_sf.o
libgcc/h8300h/normal/_thenan_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_thenan_sf -c fp-bit.c -o libgcc/h8300h/normal/_thenan_sf.o
libgcc/h8300h/int32/_thenan_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_thenan_sf -c fp-bit.c -o libgcc/h8300h/int32/_thenan_sf.o
libgcc/h8300h/normal/int32/_thenan_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_thenan_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_thenan_sf.o
libgcc/h8300s/normal/_thenan_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_thenan_sf -c fp-bit.c -o libgcc/h8300s/normal/_thenan_sf.o
libgcc/h8300s/int32/_thenan_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_thenan_sf -c fp-bit.c -o libgcc/h8300s/int32/_thenan_sf.o
libgcc/h8300s/normal/int32/_thenan_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_thenan_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_thenan_sf.o
libgcc/./_sf_to_usi.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_usi -c fp-bit.c -o libgcc/./_sf_to_usi.o
libgcc/h8300h/_sf_to_usi.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_sf_to_usi -c fp-bit.c -o libgcc/h8300h/_sf_to_usi.o
libgcc/h8300s/_sf_to_usi.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_sf_to_usi -c fp-bit.c -o libgcc/h8300s/_sf_to_usi.o
libgcc/h8300h/normal/_sf_to_usi.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_sf_to_usi -c fp-bit.c -o libgcc/h8300h/normal/_sf_to_usi.o
libgcc/h8300h/int32/_sf_to_usi.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_sf_to_usi -c fp-bit.c -o libgcc/h8300h/int32/_sf_to_usi.o
libgcc/h8300h/normal/int32/_sf_to_usi.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_sf_to_usi -c fp-bit.c -o libgcc/h8300h/normal/int32/_sf_to_usi.o
libgcc/h8300s/normal/_sf_to_usi.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_sf_to_usi -c fp-bit.c -o libgcc/h8300s/normal/_sf_to_usi.o
libgcc/h8300s/int32/_sf_to_usi.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_sf_to_usi -c fp-bit.c -o libgcc/h8300s/int32/_sf_to_usi.o
libgcc/h8300s/normal/int32/_sf_to_usi.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_sf_to_usi -c fp-bit.c -o libgcc/h8300s/normal/int32/_sf_to_usi.o
libgcc/./_usi_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_usi_to_sf -c fp-bit.c -o libgcc/./_usi_to_sf.o
libgcc/h8300h/_usi_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -DL_usi_to_sf -c fp-bit.c -o libgcc/h8300h/_usi_to_sf.o
libgcc/h8300s/_usi_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -DL_usi_to_sf -c fp-bit.c -o libgcc/h8300s/_usi_to_sf.o
libgcc/h8300h/normal/_usi_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -DL_usi_to_sf -c fp-bit.c -o libgcc/h8300h/normal/_usi_to_sf.o
libgcc/h8300h/int32/_usi_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mint32 -DL_usi_to_sf -c fp-bit.c -o libgcc/h8300h/int32/_usi_to_sf.o
libgcc/h8300h/normal/int32/_usi_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -mh -mn -mint32 -DL_usi_to_sf -c fp-bit.c -o libgcc/h8300h/normal/int32/_usi_to_sf.o
libgcc/h8300s/normal/_usi_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -DL_usi_to_sf -c fp-bit.c -o libgcc/h8300s/normal/_usi_to_sf.o
libgcc/h8300s/int32/_usi_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mint32 -DL_usi_to_sf -c fp-bit.c -o libgcc/h8300s/int32/_usi_to_sf.o
libgcc/h8300s/normal/int32/_usi_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -ms -mn -mint32 -DL_usi_to_sf -c fp-bit.c -o libgcc/h8300s/normal/int32/_usi_to_sf.o
libgcc/./clzhi2.o: stmp-dirs ./config/h8300/clzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -c ./config/h8300/clzhi2.c -o libgcc/./clzhi2.o
libgcc/h8300h/clzhi2.o: stmp-dirs ./config/h8300/clzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -c ./config/h8300/clzhi2.c -o libgcc/h8300h/clzhi2.o
libgcc/h8300s/clzhi2.o: stmp-dirs ./config/h8300/clzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -c ./config/h8300/clzhi2.c -o libgcc/h8300s/clzhi2.o
libgcc/h8300h/normal/clzhi2.o: stmp-dirs ./config/h8300/clzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -c ./config/h8300/clzhi2.c -o libgcc/h8300h/normal/clzhi2.o
libgcc/h8300h/int32/clzhi2.o: stmp-dirs ./config/h8300/clzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -c ./config/h8300/clzhi2.c -o libgcc/h8300h/int32/clzhi2.o
libgcc/h8300h/normal/int32/clzhi2.o: stmp-dirs ./config/h8300/clzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -c ./config/h8300/clzhi2.c -o libgcc/h8300h/normal/int32/clzhi2.o
libgcc/h8300s/normal/clzhi2.o: stmp-dirs ./config/h8300/clzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -c ./config/h8300/clzhi2.c -o libgcc/h8300s/normal/clzhi2.o
libgcc/h8300s/int32/clzhi2.o: stmp-dirs ./config/h8300/clzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -c ./config/h8300/clzhi2.c -o libgcc/h8300s/int32/clzhi2.o
libgcc/h8300s/normal/int32/clzhi2.o: stmp-dirs ./config/h8300/clzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -c ./config/h8300/clzhi2.c -o libgcc/h8300s/normal/int32/clzhi2.o
libgcc/./ctzhi2.o: stmp-dirs ./config/h8300/ctzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -c ./config/h8300/ctzhi2.c -o libgcc/./ctzhi2.o
libgcc/h8300h/ctzhi2.o: stmp-dirs ./config/h8300/ctzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -c ./config/h8300/ctzhi2.c -o libgcc/h8300h/ctzhi2.o
libgcc/h8300s/ctzhi2.o: stmp-dirs ./config/h8300/ctzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -c ./config/h8300/ctzhi2.c -o libgcc/h8300s/ctzhi2.o
libgcc/h8300h/normal/ctzhi2.o: stmp-dirs ./config/h8300/ctzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -c ./config/h8300/ctzhi2.c -o libgcc/h8300h/normal/ctzhi2.o
libgcc/h8300h/int32/ctzhi2.o: stmp-dirs ./config/h8300/ctzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -c ./config/h8300/ctzhi2.c -o libgcc/h8300h/int32/ctzhi2.o
libgcc/h8300h/normal/int32/ctzhi2.o: stmp-dirs ./config/h8300/ctzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -c ./config/h8300/ctzhi2.c -o libgcc/h8300h/normal/int32/ctzhi2.o
libgcc/h8300s/normal/ctzhi2.o: stmp-dirs ./config/h8300/ctzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -c ./config/h8300/ctzhi2.c -o libgcc/h8300s/normal/ctzhi2.o
libgcc/h8300s/int32/ctzhi2.o: stmp-dirs ./config/h8300/ctzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -c ./config/h8300/ctzhi2.c -o libgcc/h8300s/int32/ctzhi2.o
libgcc/h8300s/normal/int32/ctzhi2.o: stmp-dirs ./config/h8300/ctzhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -c ./config/h8300/ctzhi2.c -o libgcc/h8300s/normal/int32/ctzhi2.o
libgcc/./parityhi2.o: stmp-dirs ./config/h8300/parityhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -c ./config/h8300/parityhi2.c -o libgcc/./parityhi2.o
libgcc/h8300h/parityhi2.o: stmp-dirs ./config/h8300/parityhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -c ./config/h8300/parityhi2.c -o libgcc/h8300h/parityhi2.o
libgcc/h8300s/parityhi2.o: stmp-dirs ./config/h8300/parityhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -c ./config/h8300/parityhi2.c -o libgcc/h8300s/parityhi2.o
libgcc/h8300h/normal/parityhi2.o: stmp-dirs ./config/h8300/parityhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -c ./config/h8300/parityhi2.c -o libgcc/h8300h/normal/parityhi2.o
libgcc/h8300h/int32/parityhi2.o: stmp-dirs ./config/h8300/parityhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -c ./config/h8300/parityhi2.c -o libgcc/h8300h/int32/parityhi2.o
libgcc/h8300h/normal/int32/parityhi2.o: stmp-dirs ./config/h8300/parityhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -c ./config/h8300/parityhi2.c -o libgcc/h8300h/normal/int32/parityhi2.o
libgcc/h8300s/normal/parityhi2.o: stmp-dirs ./config/h8300/parityhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -c ./config/h8300/parityhi2.c -o libgcc/h8300s/normal/parityhi2.o
libgcc/h8300s/int32/parityhi2.o: stmp-dirs ./config/h8300/parityhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -c ./config/h8300/parityhi2.c -o libgcc/h8300s/int32/parityhi2.o
libgcc/h8300s/normal/int32/parityhi2.o: stmp-dirs ./config/h8300/parityhi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -c ./config/h8300/parityhi2.c -o libgcc/h8300s/normal/int32/parityhi2.o
libgcc/./popcounthi2.o: stmp-dirs ./config/h8300/popcounthi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -c ./config/h8300/popcounthi2.c -o libgcc/./popcounthi2.o
libgcc/h8300h/popcounthi2.o: stmp-dirs ./config/h8300/popcounthi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -c ./config/h8300/popcounthi2.c -o libgcc/h8300h/popcounthi2.o
libgcc/h8300s/popcounthi2.o: stmp-dirs ./config/h8300/popcounthi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -c ./config/h8300/popcounthi2.c -o libgcc/h8300s/popcounthi2.o
libgcc/h8300h/normal/popcounthi2.o: stmp-dirs ./config/h8300/popcounthi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -c ./config/h8300/popcounthi2.c -o libgcc/h8300h/normal/popcounthi2.o
libgcc/h8300h/int32/popcounthi2.o: stmp-dirs ./config/h8300/popcounthi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -c ./config/h8300/popcounthi2.c -o libgcc/h8300h/int32/popcounthi2.o
libgcc/h8300h/normal/int32/popcounthi2.o: stmp-dirs ./config/h8300/popcounthi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -c ./config/h8300/popcounthi2.c -o libgcc/h8300h/normal/int32/popcounthi2.o
libgcc/h8300s/normal/popcounthi2.o: stmp-dirs ./config/h8300/popcounthi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -c ./config/h8300/popcounthi2.c -o libgcc/h8300s/normal/popcounthi2.o
libgcc/h8300s/int32/popcounthi2.o: stmp-dirs ./config/h8300/popcounthi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -c ./config/h8300/popcounthi2.c -o libgcc/h8300s/int32/popcounthi2.o
libgcc/h8300s/normal/int32/popcounthi2.o: stmp-dirs ./config/h8300/popcounthi2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -c ./config/h8300/popcounthi2.c -o libgcc/h8300s/normal/int32/popcounthi2.o
libgcc/./fixunssfsi.o: stmp-dirs ./config/h8300/fixunssfsi.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -c ./config/h8300/fixunssfsi.c -o libgcc/./fixunssfsi.o
libgcc/h8300h/fixunssfsi.o: stmp-dirs ./config/h8300/fixunssfsi.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -c ./config/h8300/fixunssfsi.c -o libgcc/h8300h/fixunssfsi.o
libgcc/h8300s/fixunssfsi.o: stmp-dirs ./config/h8300/fixunssfsi.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -c ./config/h8300/fixunssfsi.c -o libgcc/h8300s/fixunssfsi.o
libgcc/h8300h/normal/fixunssfsi.o: stmp-dirs ./config/h8300/fixunssfsi.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -c ./config/h8300/fixunssfsi.c -o libgcc/h8300h/normal/fixunssfsi.o
libgcc/h8300h/int32/fixunssfsi.o: stmp-dirs ./config/h8300/fixunssfsi.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -c ./config/h8300/fixunssfsi.c -o libgcc/h8300h/int32/fixunssfsi.o
libgcc/h8300h/normal/int32/fixunssfsi.o: stmp-dirs ./config/h8300/fixunssfsi.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -c ./config/h8300/fixunssfsi.c -o libgcc/h8300h/normal/int32/fixunssfsi.o
libgcc/h8300s/normal/fixunssfsi.o: stmp-dirs ./config/h8300/fixunssfsi.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -c ./config/h8300/fixunssfsi.c -o libgcc/h8300s/normal/fixunssfsi.o
libgcc/h8300s/int32/fixunssfsi.o: stmp-dirs ./config/h8300/fixunssfsi.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -c ./config/h8300/fixunssfsi.c -o libgcc/h8300s/int32/fixunssfsi.o
libgcc/h8300s/normal/int32/fixunssfsi.o: stmp-dirs ./config/h8300/fixunssfsi.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -c ./config/h8300/fixunssfsi.c -o libgcc/h8300s/normal/int32/fixunssfsi.o
libgcc/./unwind-dw2.o: stmp-dirs ./unwind-dw2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c ./unwind-dw2.c -o libgcc/./unwind-dw2.o
libgcc/h8300h/unwind-dw2.o: stmp-dirs ./unwind-dw2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -fexceptions -c ./unwind-dw2.c -o libgcc/h8300h/unwind-dw2.o
libgcc/h8300s/unwind-dw2.o: stmp-dirs ./unwind-dw2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -fexceptions -c ./unwind-dw2.c -o libgcc/h8300s/unwind-dw2.o
libgcc/h8300h/normal/unwind-dw2.o: stmp-dirs ./unwind-dw2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -fexceptions -c ./unwind-dw2.c -o libgcc/h8300h/normal/unwind-dw2.o
libgcc/h8300h/int32/unwind-dw2.o: stmp-dirs ./unwind-dw2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -fexceptions -c ./unwind-dw2.c -o libgcc/h8300h/int32/unwind-dw2.o
libgcc/h8300h/normal/int32/unwind-dw2.o: stmp-dirs ./unwind-dw2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -fexceptions -c ./unwind-dw2.c -o libgcc/h8300h/normal/int32/unwind-dw2.o
libgcc/h8300s/normal/unwind-dw2.o: stmp-dirs ./unwind-dw2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -fexceptions -c ./unwind-dw2.c -o libgcc/h8300s/normal/unwind-dw2.o
libgcc/h8300s/int32/unwind-dw2.o: stmp-dirs ./unwind-dw2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -fexceptions -c ./unwind-dw2.c -o libgcc/h8300s/int32/unwind-dw2.o
libgcc/h8300s/normal/int32/unwind-dw2.o: stmp-dirs ./unwind-dw2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -fexceptions -c ./unwind-dw2.c -o libgcc/h8300s/normal/int32/unwind-dw2.o
libgcc/./unwind-dw2-fde.o: stmp-dirs ./unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c ./unwind-dw2-fde.c -o libgcc/./unwind-dw2-fde.o
libgcc/h8300h/unwind-dw2-fde.o: stmp-dirs ./unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -fexceptions -c ./unwind-dw2-fde.c -o libgcc/h8300h/unwind-dw2-fde.o
libgcc/h8300s/unwind-dw2-fde.o: stmp-dirs ./unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -fexceptions -c ./unwind-dw2-fde.c -o libgcc/h8300s/unwind-dw2-fde.o
libgcc/h8300h/normal/unwind-dw2-fde.o: stmp-dirs ./unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -fexceptions -c ./unwind-dw2-fde.c -o libgcc/h8300h/normal/unwind-dw2-fde.o
libgcc/h8300h/int32/unwind-dw2-fde.o: stmp-dirs ./unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -fexceptions -c ./unwind-dw2-fde.c -o libgcc/h8300h/int32/unwind-dw2-fde.o
libgcc/h8300h/normal/int32/unwind-dw2-fde.o: stmp-dirs ./unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -fexceptions -c ./unwind-dw2-fde.c -o libgcc/h8300h/normal/int32/unwind-dw2-fde.o
libgcc/h8300s/normal/unwind-dw2-fde.o: stmp-dirs ./unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -fexceptions -c ./unwind-dw2-fde.c -o libgcc/h8300s/normal/unwind-dw2-fde.o
libgcc/h8300s/int32/unwind-dw2-fde.o: stmp-dirs ./unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -fexceptions -c ./unwind-dw2-fde.c -o libgcc/h8300s/int32/unwind-dw2-fde.o
libgcc/h8300s/normal/int32/unwind-dw2-fde.o: stmp-dirs ./unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -fexceptions -c ./unwind-dw2-fde.c -o libgcc/h8300s/normal/int32/unwind-dw2-fde.o
libgcc/./unwind-sjlj.o: stmp-dirs ./unwind-sjlj.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c ./unwind-sjlj.c -o libgcc/./unwind-sjlj.o
libgcc/h8300h/unwind-sjlj.o: stmp-dirs ./unwind-sjlj.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -fexceptions -c ./unwind-sjlj.c -o libgcc/h8300h/unwind-sjlj.o
libgcc/h8300s/unwind-sjlj.o: stmp-dirs ./unwind-sjlj.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -fexceptions -c ./unwind-sjlj.c -o libgcc/h8300s/unwind-sjlj.o
libgcc/h8300h/normal/unwind-sjlj.o: stmp-dirs ./unwind-sjlj.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -fexceptions -c ./unwind-sjlj.c -o libgcc/h8300h/normal/unwind-sjlj.o
libgcc/h8300h/int32/unwind-sjlj.o: stmp-dirs ./unwind-sjlj.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -fexceptions -c ./unwind-sjlj.c -o libgcc/h8300h/int32/unwind-sjlj.o
libgcc/h8300h/normal/int32/unwind-sjlj.o: stmp-dirs ./unwind-sjlj.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -fexceptions -c ./unwind-sjlj.c -o libgcc/h8300h/normal/int32/unwind-sjlj.o
libgcc/h8300s/normal/unwind-sjlj.o: stmp-dirs ./unwind-sjlj.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -fexceptions -c ./unwind-sjlj.c -o libgcc/h8300s/normal/unwind-sjlj.o
libgcc/h8300s/int32/unwind-sjlj.o: stmp-dirs ./unwind-sjlj.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -fexceptions -c ./unwind-sjlj.c -o libgcc/h8300s/int32/unwind-sjlj.o
libgcc/h8300s/normal/int32/unwind-sjlj.o: stmp-dirs ./unwind-sjlj.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -fexceptions -c ./unwind-sjlj.c -o libgcc/h8300s/normal/int32/unwind-sjlj.o
libgcc/./gthr-gnat.o: stmp-dirs ./gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c ./gthr-gnat.c -o libgcc/./gthr-gnat.o
libgcc/h8300h/gthr-gnat.o: stmp-dirs ./gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -fexceptions -c ./gthr-gnat.c -o libgcc/h8300h/gthr-gnat.o
libgcc/h8300s/gthr-gnat.o: stmp-dirs ./gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -fexceptions -c ./gthr-gnat.c -o libgcc/h8300s/gthr-gnat.o
libgcc/h8300h/normal/gthr-gnat.o: stmp-dirs ./gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -fexceptions -c ./gthr-gnat.c -o libgcc/h8300h/normal/gthr-gnat.o
libgcc/h8300h/int32/gthr-gnat.o: stmp-dirs ./gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -fexceptions -c ./gthr-gnat.c -o libgcc/h8300h/int32/gthr-gnat.o
libgcc/h8300h/normal/int32/gthr-gnat.o: stmp-dirs ./gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -fexceptions -c ./gthr-gnat.c -o libgcc/h8300h/normal/int32/gthr-gnat.o
libgcc/h8300s/normal/gthr-gnat.o: stmp-dirs ./gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -fexceptions -c ./gthr-gnat.c -o libgcc/h8300s/normal/gthr-gnat.o
libgcc/h8300s/int32/gthr-gnat.o: stmp-dirs ./gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -fexceptions -c ./gthr-gnat.c -o libgcc/h8300s/int32/gthr-gnat.o
libgcc/h8300s/normal/int32/gthr-gnat.o: stmp-dirs ./gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -fexceptions -c ./gthr-gnat.c -o libgcc/h8300s/normal/int32/gthr-gnat.o
libgcc/./unwind-c.o: stmp-dirs ./unwind-c.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c ./unwind-c.c -o libgcc/./unwind-c.o
libgcc/h8300h/unwind-c.o: stmp-dirs ./unwind-c.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -fexceptions -c ./unwind-c.c -o libgcc/h8300h/unwind-c.o
libgcc/h8300s/unwind-c.o: stmp-dirs ./unwind-c.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -fexceptions -c ./unwind-c.c -o libgcc/h8300s/unwind-c.o
libgcc/h8300h/normal/unwind-c.o: stmp-dirs ./unwind-c.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -fexceptions -c ./unwind-c.c -o libgcc/h8300h/normal/unwind-c.o
libgcc/h8300h/int32/unwind-c.o: stmp-dirs ./unwind-c.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mint32 -fexceptions -c ./unwind-c.c -o libgcc/h8300h/int32/unwind-c.o
libgcc/h8300h/normal/int32/unwind-c.o: stmp-dirs ./unwind-c.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -mh -mn -mint32 -fexceptions -c ./unwind-c.c -o libgcc/h8300h/normal/int32/unwind-c.o
libgcc/h8300s/normal/unwind-c.o: stmp-dirs ./unwind-c.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -fexceptions -c ./unwind-c.c -o libgcc/h8300s/normal/unwind-c.o
libgcc/h8300s/int32/unwind-c.o: stmp-dirs ./unwind-c.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mint32 -fexceptions -c ./unwind-c.c -o libgcc/h8300s/int32/unwind-c.o
libgcc/h8300s/normal/int32/unwind-c.o: stmp-dirs ./unwind-c.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -ms -mn -mint32 -fexceptions -c ./unwind-c.c -o libgcc/h8300s/normal/int32/unwind-c.o
libgcc/./_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/./_gcov.o
libgcc/h8300h/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/h8300h/_gcov.o
libgcc/h8300s/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/h8300s/_gcov.o
libgcc/h8300h/normal/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/h8300h/normal/_gcov.o
libgcc/h8300h/int32/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/h8300h/int32/_gcov.o
libgcc/h8300h/normal/int32/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/h8300h/normal/int32/_gcov.o
libgcc/h8300s/normal/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/h8300s/normal/_gcov.o
libgcc/h8300s/int32/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/h8300s/int32/_gcov.o
libgcc/h8300s/normal/int32/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/h8300s/normal/int32/_gcov.o
libgcc/./_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_add.o
libgcc/h8300h/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/h8300h/_gcov_merge_add.o
libgcc/h8300s/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/h8300s/_gcov_merge_add.o
libgcc/h8300h/normal/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/h8300h/normal/_gcov_merge_add.o
libgcc/h8300h/int32/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/h8300h/int32/_gcov_merge_add.o
libgcc/h8300h/normal/int32/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/h8300h/normal/int32/_gcov_merge_add.o
libgcc/h8300s/normal/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/h8300s/normal/_gcov_merge_add.o
libgcc/h8300s/int32/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/h8300s/int32/_gcov_merge_add.o
libgcc/h8300s/normal/int32/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/h8300s/normal/int32/_gcov_merge_add.o
libgcc/./_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_single.o
libgcc/h8300h/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/h8300h/_gcov_merge_single.o
libgcc/h8300s/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/h8300s/_gcov_merge_single.o
libgcc/h8300h/normal/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/h8300h/normal/_gcov_merge_single.o
libgcc/h8300h/int32/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/h8300h/int32/_gcov_merge_single.o
libgcc/h8300h/normal/int32/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/h8300h/normal/int32/_gcov_merge_single.o
libgcc/h8300s/normal/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/h8300s/normal/_gcov_merge_single.o
libgcc/h8300s/int32/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/h8300s/int32/_gcov_merge_single.o
libgcc/h8300s/normal/int32/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/h8300s/normal/int32/_gcov_merge_single.o
libgcc/./_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_delta.o
libgcc/h8300h/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/h8300h/_gcov_merge_delta.o
libgcc/h8300s/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/h8300s/_gcov_merge_delta.o
libgcc/h8300h/normal/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/h8300h/normal/_gcov_merge_delta.o
libgcc/h8300h/int32/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mint32 -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/h8300h/int32/_gcov_merge_delta.o
libgcc/h8300h/normal/int32/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -mh -mn -mint32 -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/h8300h/normal/int32/_gcov_merge_delta.o
libgcc/h8300s/normal/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/h8300s/normal/_gcov_merge_delta.o
libgcc/h8300s/int32/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mint32 -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/h8300s/int32/_gcov_merge_delta.o
libgcc/h8300s/normal/int32/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -ms -mn -mint32 -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/h8300s/normal/int32/_gcov_merge_delta.o

./libgcc.a: stmp-dirs  libgcc/./_cmpsi2.o libgcc/./_ucmpsi2.o libgcc/./_divhi3.o libgcc/./_divsi3.o libgcc/./_mulhi3.o libgcc/./_mulsi3.o libgcc/./_fixunssfsi_asm.o libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfsi.o libgcc/./_fixunssfsi.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_enable_execute_stack.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_ffssi2.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_clzsi2.o libgcc/./_clzdi2.o libgcc/./_ctzsi2.o libgcc/./_ctzdi2.o libgcc/./_popcount_tab.o libgcc/./_popcountsi2.o libgcc/./_popcountdi2.o libgcc/./_paritysi2.o libgcc/./_paritydi2.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o libgcc/./_pack_sf.o libgcc/./_unpack_sf.o libgcc/./_addsub_sf.o libgcc/./_mul_sf.o libgcc/./_div_sf.o libgcc/./_fpcmp_parts_sf.o libgcc/./_compare_sf.o libgcc/./_eq_sf.o libgcc/./_ne_sf.o libgcc/./_gt_sf.o libgcc/./_ge_sf.o libgcc/./_lt_sf.o libgcc/./_le_sf.o libgcc/./_unord_sf.o libgcc/./_si_to_sf.o libgcc/./_sf_to_si.o libgcc/./_negate_sf.o libgcc/./_make_sf.o libgcc/./_sf_to_df.o libgcc/./_sf_to_tf.o libgcc/./_thenan_sf.o libgcc/./_sf_to_usi.o libgcc/./_usi_to_sf.o libgcc/./clzhi2.o libgcc/./ctzhi2.o libgcc/./parityhi2.o libgcc/./popcounthi2.o libgcc/./fixunssfsi.o libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde.o libgcc/./unwind-sjlj.o libgcc/./gthr-gnat.o libgcc/./unwind-c.o  libgcc/./_eprintf.o libgcc/./__gcc_bcmp.o
	-rm -rf ./libgcc.a
	$(AR_CREATE_FOR_TARGET) ./libgcc.a libgcc/./_cmpsi2.o libgcc/./_ucmpsi2.o libgcc/./_divhi3.o libgcc/./_divsi3.o libgcc/./_mulhi3.o libgcc/./_mulsi3.o libgcc/./_fixunssfsi_asm.o libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfsi.o libgcc/./_fixunssfsi.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_enable_execute_stack.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_ffssi2.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_clzsi2.o libgcc/./_clzdi2.o libgcc/./_ctzsi2.o libgcc/./_ctzdi2.o libgcc/./_popcount_tab.o libgcc/./_popcountsi2.o libgcc/./_popcountdi2.o libgcc/./_paritysi2.o libgcc/./_paritydi2.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o libgcc/./_pack_sf.o libgcc/./_unpack_sf.o libgcc/./_addsub_sf.o libgcc/./_mul_sf.o libgcc/./_div_sf.o libgcc/./_fpcmp_parts_sf.o libgcc/./_compare_sf.o libgcc/./_eq_sf.o libgcc/./_ne_sf.o libgcc/./_gt_sf.o libgcc/./_ge_sf.o libgcc/./_lt_sf.o libgcc/./_le_sf.o libgcc/./_unord_sf.o libgcc/./_si_to_sf.o libgcc/./_sf_to_si.o libgcc/./_negate_sf.o libgcc/./_make_sf.o libgcc/./_sf_to_df.o libgcc/./_sf_to_tf.o libgcc/./_thenan_sf.o libgcc/./_sf_to_usi.o libgcc/./_usi_to_sf.o libgcc/./clzhi2.o libgcc/./ctzhi2.o libgcc/./parityhi2.o libgcc/./popcounthi2.o libgcc/./fixunssfsi.o libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde.o libgcc/./unwind-sjlj.o libgcc/./gthr-gnat.o libgcc/./unwind-c.o libgcc/./_eprintf.o libgcc/./__gcc_bcmp.o
	$(RANLIB_FOR_TARGET) ./libgcc.a

./libgcov.a: stmp-dirs  libgcc/./_gcov.o libgcc/./_gcov_merge_add.o libgcc/./_gcov_merge_single.o libgcc/./_gcov_merge_delta.o
	-rm -rf ./libgcov.a
	$(AR_CREATE_FOR_TARGET) ./libgcov.a libgcc/./_gcov.o libgcc/./_gcov_merge_add.o libgcc/./_gcov_merge_single.o libgcc/./_gcov_merge_delta.o
	$(RANLIB_FOR_TARGET) ./libgcov.a

h8300h/libgcc.a: stmp-dirs  libgcc/h8300h/_cmpsi2.o libgcc/h8300h/_ucmpsi2.o libgcc/h8300h/_divhi3.o libgcc/h8300h/_divsi3.o libgcc/h8300h/_mulhi3.o libgcc/h8300h/_mulsi3.o libgcc/h8300h/_fixunssfsi_asm.o libgcc/h8300h/_muldi3.o libgcc/h8300h/_negdi2.o libgcc/h8300h/_lshrdi3.o libgcc/h8300h/_ashldi3.o libgcc/h8300h/_ashrdi3.o libgcc/h8300h/_cmpdi2.o libgcc/h8300h/_ucmpdi2.o libgcc/h8300h/_floatdidf.o libgcc/h8300h/_floatdisf.o libgcc/h8300h/_fixunsdfsi.o libgcc/h8300h/_fixunssfsi.o libgcc/h8300h/_fixunsdfdi.o libgcc/h8300h/_fixdfdi.o libgcc/h8300h/_fixunssfdi.o libgcc/h8300h/_fixsfdi.o libgcc/h8300h/_fixxfdi.o libgcc/h8300h/_fixunsxfdi.o libgcc/h8300h/_floatdixf.o libgcc/h8300h/_fixunsxfsi.o libgcc/h8300h/_fixtfdi.o libgcc/h8300h/_fixunstfdi.o libgcc/h8300h/_floatditf.o libgcc/h8300h/_clear_cache.o libgcc/h8300h/_enable_execute_stack.o libgcc/h8300h/_trampoline.o libgcc/h8300h/__main.o libgcc/h8300h/_absvsi2.o libgcc/h8300h/_absvdi2.o libgcc/h8300h/_addvsi3.o libgcc/h8300h/_addvdi3.o libgcc/h8300h/_subvsi3.o libgcc/h8300h/_subvdi3.o libgcc/h8300h/_mulvsi3.o libgcc/h8300h/_mulvdi3.o libgcc/h8300h/_negvsi2.o libgcc/h8300h/_negvdi2.o libgcc/h8300h/_ctors.o libgcc/h8300h/_ffssi2.o libgcc/h8300h/_ffsdi2.o libgcc/h8300h/_clz.o libgcc/h8300h/_clzsi2.o libgcc/h8300h/_clzdi2.o libgcc/h8300h/_ctzsi2.o libgcc/h8300h/_ctzdi2.o libgcc/h8300h/_popcount_tab.o libgcc/h8300h/_popcountsi2.o libgcc/h8300h/_popcountdi2.o libgcc/h8300h/_paritysi2.o libgcc/h8300h/_paritydi2.o libgcc/h8300h/_divdi3.o libgcc/h8300h/_moddi3.o libgcc/h8300h/_udivdi3.o libgcc/h8300h/_umoddi3.o libgcc/h8300h/_udiv_w_sdiv.o libgcc/h8300h/_udivmoddi4.o libgcc/h8300h/_pack_sf.o libgcc/h8300h/_unpack_sf.o libgcc/h8300h/_addsub_sf.o libgcc/h8300h/_mul_sf.o libgcc/h8300h/_div_sf.o libgcc/h8300h/_fpcmp_parts_sf.o libgcc/h8300h/_compare_sf.o libgcc/h8300h/_eq_sf.o libgcc/h8300h/_ne_sf.o libgcc/h8300h/_gt_sf.o libgcc/h8300h/_ge_sf.o libgcc/h8300h/_lt_sf.o libgcc/h8300h/_le_sf.o libgcc/h8300h/_unord_sf.o libgcc/h8300h/_si_to_sf.o libgcc/h8300h/_sf_to_si.o libgcc/h8300h/_negate_sf.o libgcc/h8300h/_make_sf.o libgcc/h8300h/_sf_to_df.o libgcc/h8300h/_sf_to_tf.o libgcc/h8300h/_thenan_sf.o libgcc/h8300h/_sf_to_usi.o libgcc/h8300h/_usi_to_sf.o libgcc/h8300h/clzhi2.o libgcc/h8300h/ctzhi2.o libgcc/h8300h/parityhi2.o libgcc/h8300h/popcounthi2.o libgcc/h8300h/fixunssfsi.o libgcc/h8300h/unwind-dw2.o libgcc/h8300h/unwind-dw2-fde.o libgcc/h8300h/unwind-sjlj.o libgcc/h8300h/gthr-gnat.o libgcc/h8300h/unwind-c.o  libgcc/h8300h/_eprintf.o libgcc/h8300h/__gcc_bcmp.o
	-rm -rf h8300h/libgcc.a
	$(AR_CREATE_FOR_TARGET) h8300h/libgcc.a libgcc/h8300h/_cmpsi2.o libgcc/h8300h/_ucmpsi2.o libgcc/h8300h/_divhi3.o libgcc/h8300h/_divsi3.o libgcc/h8300h/_mulhi3.o libgcc/h8300h/_mulsi3.o libgcc/h8300h/_fixunssfsi_asm.o libgcc/h8300h/_muldi3.o libgcc/h8300h/_negdi2.o libgcc/h8300h/_lshrdi3.o libgcc/h8300h/_ashldi3.o libgcc/h8300h/_ashrdi3.o libgcc/h8300h/_cmpdi2.o libgcc/h8300h/_ucmpdi2.o libgcc/h8300h/_floatdidf.o libgcc/h8300h/_floatdisf.o libgcc/h8300h/_fixunsdfsi.o libgcc/h8300h/_fixunssfsi.o libgcc/h8300h/_fixunsdfdi.o libgcc/h8300h/_fixdfdi.o libgcc/h8300h/_fixunssfdi.o libgcc/h8300h/_fixsfdi.o libgcc/h8300h/_fixxfdi.o libgcc/h8300h/_fixunsxfdi.o libgcc/h8300h/_floatdixf.o libgcc/h8300h/_fixunsxfsi.o libgcc/h8300h/_fixtfdi.o libgcc/h8300h/_fixunstfdi.o libgcc/h8300h/_floatditf.o libgcc/h8300h/_clear_cache.o libgcc/h8300h/_enable_execute_stack.o libgcc/h8300h/_trampoline.o libgcc/h8300h/__main.o libgcc/h8300h/_absvsi2.o libgcc/h8300h/_absvdi2.o libgcc/h8300h/_addvsi3.o libgcc/h8300h/_addvdi3.o libgcc/h8300h/_subvsi3.o libgcc/h8300h/_subvdi3.o libgcc/h8300h/_mulvsi3.o libgcc/h8300h/_mulvdi3.o libgcc/h8300h/_negvsi2.o libgcc/h8300h/_negvdi2.o libgcc/h8300h/_ctors.o libgcc/h8300h/_ffssi2.o libgcc/h8300h/_ffsdi2.o libgcc/h8300h/_clz.o libgcc/h8300h/_clzsi2.o libgcc/h8300h/_clzdi2.o libgcc/h8300h/_ctzsi2.o libgcc/h8300h/_ctzdi2.o libgcc/h8300h/_popcount_tab.o libgcc/h8300h/_popcountsi2.o libgcc/h8300h/_popcountdi2.o libgcc/h8300h/_paritysi2.o libgcc/h8300h/_paritydi2.o libgcc/h8300h/_divdi3.o libgcc/h8300h/_moddi3.o libgcc/h8300h/_udivdi3.o libgcc/h8300h/_umoddi3.o libgcc/h8300h/_udiv_w_sdiv.o libgcc/h8300h/_udivmoddi4.o libgcc/h8300h/_pack_sf.o libgcc/h8300h/_unpack_sf.o libgcc/h8300h/_addsub_sf.o libgcc/h8300h/_mul_sf.o libgcc/h8300h/_div_sf.o libgcc/h8300h/_fpcmp_parts_sf.o libgcc/h8300h/_compare_sf.o libgcc/h8300h/_eq_sf.o libgcc/h8300h/_ne_sf.o libgcc/h8300h/_gt_sf.o libgcc/h8300h/_ge_sf.o libgcc/h8300h/_lt_sf.o libgcc/h8300h/_le_sf.o libgcc/h8300h/_unord_sf.o libgcc/h8300h/_si_to_sf.o libgcc/h8300h/_sf_to_si.o libgcc/h8300h/_negate_sf.o libgcc/h8300h/_make_sf.o libgcc/h8300h/_sf_to_df.o libgcc/h8300h/_sf_to_tf.o libgcc/h8300h/_thenan_sf.o libgcc/h8300h/_sf_to_usi.o libgcc/h8300h/_usi_to_sf.o libgcc/h8300h/clzhi2.o libgcc/h8300h/ctzhi2.o libgcc/h8300h/parityhi2.o libgcc/h8300h/popcounthi2.o libgcc/h8300h/fixunssfsi.o libgcc/h8300h/unwind-dw2.o libgcc/h8300h/unwind-dw2-fde.o libgcc/h8300h/unwind-sjlj.o libgcc/h8300h/gthr-gnat.o libgcc/h8300h/unwind-c.o libgcc/h8300h/_eprintf.o libgcc/h8300h/__gcc_bcmp.o
	$(RANLIB_FOR_TARGET) h8300h/libgcc.a

h8300h/libgcov.a: stmp-dirs  libgcc/h8300h/_gcov.o libgcc/h8300h/_gcov_merge_add.o libgcc/h8300h/_gcov_merge_single.o libgcc/h8300h/_gcov_merge_delta.o
	-rm -rf h8300h/libgcov.a
	$(AR_CREATE_FOR_TARGET) h8300h/libgcov.a libgcc/h8300h/_gcov.o libgcc/h8300h/_gcov_merge_add.o libgcc/h8300h/_gcov_merge_single.o libgcc/h8300h/_gcov_merge_delta.o
	$(RANLIB_FOR_TARGET) h8300h/libgcov.a

h8300s/libgcc.a: stmp-dirs  libgcc/h8300s/_cmpsi2.o libgcc/h8300s/_ucmpsi2.o libgcc/h8300s/_divhi3.o libgcc/h8300s/_divsi3.o libgcc/h8300s/_mulhi3.o libgcc/h8300s/_mulsi3.o libgcc/h8300s/_fixunssfsi_asm.o libgcc/h8300s/_muldi3.o libgcc/h8300s/_negdi2.o libgcc/h8300s/_lshrdi3.o libgcc/h8300s/_ashldi3.o libgcc/h8300s/_ashrdi3.o libgcc/h8300s/_cmpdi2.o libgcc/h8300s/_ucmpdi2.o libgcc/h8300s/_floatdidf.o libgcc/h8300s/_floatdisf.o libgcc/h8300s/_fixunsdfsi.o libgcc/h8300s/_fixunssfsi.o libgcc/h8300s/_fixunsdfdi.o libgcc/h8300s/_fixdfdi.o libgcc/h8300s/_fixunssfdi.o libgcc/h8300s/_fixsfdi.o libgcc/h8300s/_fixxfdi.o libgcc/h8300s/_fixunsxfdi.o libgcc/h8300s/_floatdixf.o libgcc/h8300s/_fixunsxfsi.o libgcc/h8300s/_fixtfdi.o libgcc/h8300s/_fixunstfdi.o libgcc/h8300s/_floatditf.o libgcc/h8300s/_clear_cache.o libgcc/h8300s/_enable_execute_stack.o libgcc/h8300s/_trampoline.o libgcc/h8300s/__main.o libgcc/h8300s/_absvsi2.o libgcc/h8300s/_absvdi2.o libgcc/h8300s/_addvsi3.o libgcc/h8300s/_addvdi3.o libgcc/h8300s/_subvsi3.o libgcc/h8300s/_subvdi3.o libgcc/h8300s/_mulvsi3.o libgcc/h8300s/_mulvdi3.o libgcc/h8300s/_negvsi2.o libgcc/h8300s/_negvdi2.o libgcc/h8300s/_ctors.o libgcc/h8300s/_ffssi2.o libgcc/h8300s/_ffsdi2.o libgcc/h8300s/_clz.o libgcc/h8300s/_clzsi2.o libgcc/h8300s/_clzdi2.o libgcc/h8300s/_ctzsi2.o libgcc/h8300s/_ctzdi2.o libgcc/h8300s/_popcount_tab.o libgcc/h8300s/_popcountsi2.o libgcc/h8300s/_popcountdi2.o libgcc/h8300s/_paritysi2.o libgcc/h8300s/_paritydi2.o libgcc/h8300s/_divdi3.o libgcc/h8300s/_moddi3.o libgcc/h8300s/_udivdi3.o libgcc/h8300s/_umoddi3.o libgcc/h8300s/_udiv_w_sdiv.o libgcc/h8300s/_udivmoddi4.o libgcc/h8300s/_pack_sf.o libgcc/h8300s/_unpack_sf.o libgcc/h8300s/_addsub_sf.o libgcc/h8300s/_mul_sf.o libgcc/h8300s/_div_sf.o libgcc/h8300s/_fpcmp_parts_sf.o libgcc/h8300s/_compare_sf.o libgcc/h8300s/_eq_sf.o libgcc/h8300s/_ne_sf.o libgcc/h8300s/_gt_sf.o libgcc/h8300s/_ge_sf.o libgcc/h8300s/_lt_sf.o libgcc/h8300s/_le_sf.o libgcc/h8300s/_unord_sf.o libgcc/h8300s/_si_to_sf.o libgcc/h8300s/_sf_to_si.o libgcc/h8300s/_negate_sf.o libgcc/h8300s/_make_sf.o libgcc/h8300s/_sf_to_df.o libgcc/h8300s/_sf_to_tf.o libgcc/h8300s/_thenan_sf.o libgcc/h8300s/_sf_to_usi.o libgcc/h8300s/_usi_to_sf.o libgcc/h8300s/clzhi2.o libgcc/h8300s/ctzhi2.o libgcc/h8300s/parityhi2.o libgcc/h8300s/popcounthi2.o libgcc/h8300s/fixunssfsi.o libgcc/h8300s/unwind-dw2.o libgcc/h8300s/unwind-dw2-fde.o libgcc/h8300s/unwind-sjlj.o libgcc/h8300s/gthr-gnat.o libgcc/h8300s/unwind-c.o  libgcc/h8300s/_eprintf.o libgcc/h8300s/__gcc_bcmp.o
	-rm -rf h8300s/libgcc.a
	$(AR_CREATE_FOR_TARGET) h8300s/libgcc.a libgcc/h8300s/_cmpsi2.o libgcc/h8300s/_ucmpsi2.o libgcc/h8300s/_divhi3.o libgcc/h8300s/_divsi3.o libgcc/h8300s/_mulhi3.o libgcc/h8300s/_mulsi3.o libgcc/h8300s/_fixunssfsi_asm.o libgcc/h8300s/_muldi3.o libgcc/h8300s/_negdi2.o libgcc/h8300s/_lshrdi3.o libgcc/h8300s/_ashldi3.o libgcc/h8300s/_ashrdi3.o libgcc/h8300s/_cmpdi2.o libgcc/h8300s/_ucmpdi2.o libgcc/h8300s/_floatdidf.o libgcc/h8300s/_floatdisf.o libgcc/h8300s/_fixunsdfsi.o libgcc/h8300s/_fixunssfsi.o libgcc/h8300s/_fixunsdfdi.o libgcc/h8300s/_fixdfdi.o libgcc/h8300s/_fixunssfdi.o libgcc/h8300s/_fixsfdi.o libgcc/h8300s/_fixxfdi.o libgcc/h8300s/_fixunsxfdi.o libgcc/h8300s/_floatdixf.o libgcc/h8300s/_fixunsxfsi.o libgcc/h8300s/_fixtfdi.o libgcc/h8300s/_fixunstfdi.o libgcc/h8300s/_floatditf.o libgcc/h8300s/_clear_cache.o libgcc/h8300s/_enable_execute_stack.o libgcc/h8300s/_trampoline.o libgcc/h8300s/__main.o libgcc/h8300s/_absvsi2.o libgcc/h8300s/_absvdi2.o libgcc/h8300s/_addvsi3.o libgcc/h8300s/_addvdi3.o libgcc/h8300s/_subvsi3.o libgcc/h8300s/_subvdi3.o libgcc/h8300s/_mulvsi3.o libgcc/h8300s/_mulvdi3.o libgcc/h8300s/_negvsi2.o libgcc/h8300s/_negvdi2.o libgcc/h8300s/_ctors.o libgcc/h8300s/_ffssi2.o libgcc/h8300s/_ffsdi2.o libgcc/h8300s/_clz.o libgcc/h8300s/_clzsi2.o libgcc/h8300s/_clzdi2.o libgcc/h8300s/_ctzsi2.o libgcc/h8300s/_ctzdi2.o libgcc/h8300s/_popcount_tab.o libgcc/h8300s/_popcountsi2.o libgcc/h8300s/_popcountdi2.o libgcc/h8300s/_paritysi2.o libgcc/h8300s/_paritydi2.o libgcc/h8300s/_divdi3.o libgcc/h8300s/_moddi3.o libgcc/h8300s/_udivdi3.o libgcc/h8300s/_umoddi3.o libgcc/h8300s/_udiv_w_sdiv.o libgcc/h8300s/_udivmoddi4.o libgcc/h8300s/_pack_sf.o libgcc/h8300s/_unpack_sf.o libgcc/h8300s/_addsub_sf.o libgcc/h8300s/_mul_sf.o libgcc/h8300s/_div_sf.o libgcc/h8300s/_fpcmp_parts_sf.o libgcc/h8300s/_compare_sf.o libgcc/h8300s/_eq_sf.o libgcc/h8300s/_ne_sf.o libgcc/h8300s/_gt_sf.o libgcc/h8300s/_ge_sf.o libgcc/h8300s/_lt_sf.o libgcc/h8300s/_le_sf.o libgcc/h8300s/_unord_sf.o libgcc/h8300s/_si_to_sf.o libgcc/h8300s/_sf_to_si.o libgcc/h8300s/_negate_sf.o libgcc/h8300s/_make_sf.o libgcc/h8300s/_sf_to_df.o libgcc/h8300s/_sf_to_tf.o libgcc/h8300s/_thenan_sf.o libgcc/h8300s/_sf_to_usi.o libgcc/h8300s/_usi_to_sf.o libgcc/h8300s/clzhi2.o libgcc/h8300s/ctzhi2.o libgcc/h8300s/parityhi2.o libgcc/h8300s/popcounthi2.o libgcc/h8300s/fixunssfsi.o libgcc/h8300s/unwind-dw2.o libgcc/h8300s/unwind-dw2-fde.o libgcc/h8300s/unwind-sjlj.o libgcc/h8300s/gthr-gnat.o libgcc/h8300s/unwind-c.o libgcc/h8300s/_eprintf.o libgcc/h8300s/__gcc_bcmp.o
	$(RANLIB_FOR_TARGET) h8300s/libgcc.a

h8300s/libgcov.a: stmp-dirs  libgcc/h8300s/_gcov.o libgcc/h8300s/_gcov_merge_add.o libgcc/h8300s/_gcov_merge_single.o libgcc/h8300s/_gcov_merge_delta.o
	-rm -rf h8300s/libgcov.a
	$(AR_CREATE_FOR_TARGET) h8300s/libgcov.a libgcc/h8300s/_gcov.o libgcc/h8300s/_gcov_merge_add.o libgcc/h8300s/_gcov_merge_single.o libgcc/h8300s/_gcov_merge_delta.o
	$(RANLIB_FOR_TARGET) h8300s/libgcov.a

h8300h/normal/libgcc.a: stmp-dirs  libgcc/h8300h/normal/_cmpsi2.o libgcc/h8300h/normal/_ucmpsi2.o libgcc/h8300h/normal/_divhi3.o libgcc/h8300h/normal/_divsi3.o libgcc/h8300h/normal/_mulhi3.o libgcc/h8300h/normal/_mulsi3.o libgcc/h8300h/normal/_fixunssfsi_asm.o libgcc/h8300h/normal/_muldi3.o libgcc/h8300h/normal/_negdi2.o libgcc/h8300h/normal/_lshrdi3.o libgcc/h8300h/normal/_ashldi3.o libgcc/h8300h/normal/_ashrdi3.o libgcc/h8300h/normal/_cmpdi2.o libgcc/h8300h/normal/_ucmpdi2.o libgcc/h8300h/normal/_floatdidf.o libgcc/h8300h/normal/_floatdisf.o libgcc/h8300h/normal/_fixunsdfsi.o libgcc/h8300h/normal/_fixunssfsi.o libgcc/h8300h/normal/_fixunsdfdi.o libgcc/h8300h/normal/_fixdfdi.o libgcc/h8300h/normal/_fixunssfdi.o libgcc/h8300h/normal/_fixsfdi.o libgcc/h8300h/normal/_fixxfdi.o libgcc/h8300h/normal/_fixunsxfdi.o libgcc/h8300h/normal/_floatdixf.o libgcc/h8300h/normal/_fixunsxfsi.o libgcc/h8300h/normal/_fixtfdi.o libgcc/h8300h/normal/_fixunstfdi.o libgcc/h8300h/normal/_floatditf.o libgcc/h8300h/normal/_clear_cache.o libgcc/h8300h/normal/_enable_execute_stack.o libgcc/h8300h/normal/_trampoline.o libgcc/h8300h/normal/__main.o libgcc/h8300h/normal/_absvsi2.o libgcc/h8300h/normal/_absvdi2.o libgcc/h8300h/normal/_addvsi3.o libgcc/h8300h/normal/_addvdi3.o libgcc/h8300h/normal/_subvsi3.o libgcc/h8300h/normal/_subvdi3.o libgcc/h8300h/normal/_mulvsi3.o libgcc/h8300h/normal/_mulvdi3.o libgcc/h8300h/normal/_negvsi2.o libgcc/h8300h/normal/_negvdi2.o libgcc/h8300h/normal/_ctors.o libgcc/h8300h/normal/_ffssi2.o libgcc/h8300h/normal/_ffsdi2.o libgcc/h8300h/normal/_clz.o libgcc/h8300h/normal/_clzsi2.o libgcc/h8300h/normal/_clzdi2.o libgcc/h8300h/normal/_ctzsi2.o libgcc/h8300h/normal/_ctzdi2.o libgcc/h8300h/normal/_popcount_tab.o libgcc/h8300h/normal/_popcountsi2.o libgcc/h8300h/normal/_popcountdi2.o libgcc/h8300h/normal/_paritysi2.o libgcc/h8300h/normal/_paritydi2.o libgcc/h8300h/normal/_divdi3.o libgcc/h8300h/normal/_moddi3.o libgcc/h8300h/normal/_udivdi3.o libgcc/h8300h/normal/_umoddi3.o libgcc/h8300h/normal/_udiv_w_sdiv.o libgcc/h8300h/normal/_udivmoddi4.o libgcc/h8300h/normal/_pack_sf.o libgcc/h8300h/normal/_unpack_sf.o libgcc/h8300h/normal/_addsub_sf.o libgcc/h8300h/normal/_mul_sf.o libgcc/h8300h/normal/_div_sf.o libgcc/h8300h/normal/_fpcmp_parts_sf.o libgcc/h8300h/normal/_compare_sf.o libgcc/h8300h/normal/_eq_sf.o libgcc/h8300h/normal/_ne_sf.o libgcc/h8300h/normal/_gt_sf.o libgcc/h8300h/normal/_ge_sf.o libgcc/h8300h/normal/_lt_sf.o libgcc/h8300h/normal/_le_sf.o libgcc/h8300h/normal/_unord_sf.o libgcc/h8300h/normal/_si_to_sf.o libgcc/h8300h/normal/_sf_to_si.o libgcc/h8300h/normal/_negate_sf.o libgcc/h8300h/normal/_make_sf.o libgcc/h8300h/normal/_sf_to_df.o libgcc/h8300h/normal/_sf_to_tf.o libgcc/h8300h/normal/_thenan_sf.o libgcc/h8300h/normal/_sf_to_usi.o libgcc/h8300h/normal/_usi_to_sf.o libgcc/h8300h/normal/clzhi2.o libgcc/h8300h/normal/ctzhi2.o libgcc/h8300h/normal/parityhi2.o libgcc/h8300h/normal/popcounthi2.o libgcc/h8300h/normal/fixunssfsi.o libgcc/h8300h/normal/unwind-dw2.o libgcc/h8300h/normal/unwind-dw2-fde.o libgcc/h8300h/normal/unwind-sjlj.o libgcc/h8300h/normal/gthr-gnat.o libgcc/h8300h/normal/unwind-c.o  libgcc/h8300h/normal/_eprintf.o libgcc/h8300h/normal/__gcc_bcmp.o
	-rm -rf h8300h/normal/libgcc.a
	$(AR_CREATE_FOR_TARGET) h8300h/normal/libgcc.a libgcc/h8300h/normal/_cmpsi2.o libgcc/h8300h/normal/_ucmpsi2.o libgcc/h8300h/normal/_divhi3.o libgcc/h8300h/normal/_divsi3.o libgcc/h8300h/normal/_mulhi3.o libgcc/h8300h/normal/_mulsi3.o libgcc/h8300h/normal/_fixunssfsi_asm.o libgcc/h8300h/normal/_muldi3.o libgcc/h8300h/normal/_negdi2.o libgcc/h8300h/normal/_lshrdi3.o libgcc/h8300h/normal/_ashldi3.o libgcc/h8300h/normal/_ashrdi3.o libgcc/h8300h/normal/_cmpdi2.o libgcc/h8300h/normal/_ucmpdi2.o libgcc/h8300h/normal/_floatdidf.o libgcc/h8300h/normal/_floatdisf.o libgcc/h8300h/normal/_fixunsdfsi.o libgcc/h8300h/normal/_fixunssfsi.o libgcc/h8300h/normal/_fixunsdfdi.o libgcc/h8300h/normal/_fixdfdi.o libgcc/h8300h/normal/_fixunssfdi.o libgcc/h8300h/normal/_fixsfdi.o libgcc/h8300h/normal/_fixxfdi.o libgcc/h8300h/normal/_fixunsxfdi.o libgcc/h8300h/normal/_floatdixf.o libgcc/h8300h/normal/_fixunsxfsi.o libgcc/h8300h/normal/_fixtfdi.o libgcc/h8300h/normal/_fixunstfdi.o libgcc/h8300h/normal/_floatditf.o libgcc/h8300h/normal/_clear_cache.o libgcc/h8300h/normal/_enable_execute_stack.o libgcc/h8300h/normal/_trampoline.o libgcc/h8300h/normal/__main.o libgcc/h8300h/normal/_absvsi2.o libgcc/h8300h/normal/_absvdi2.o libgcc/h8300h/normal/_addvsi3.o libgcc/h8300h/normal/_addvdi3.o libgcc/h8300h/normal/_subvsi3.o libgcc/h8300h/normal/_subvdi3.o libgcc/h8300h/normal/_mulvsi3.o libgcc/h8300h/normal/_mulvdi3.o libgcc/h8300h/normal/_negvsi2.o libgcc/h8300h/normal/_negvdi2.o libgcc/h8300h/normal/_ctors.o libgcc/h8300h/normal/_ffssi2.o libgcc/h8300h/normal/_ffsdi2.o libgcc/h8300h/normal/_clz.o libgcc/h8300h/normal/_clzsi2.o libgcc/h8300h/normal/_clzdi2.o libgcc/h8300h/normal/_ctzsi2.o libgcc/h8300h/normal/_ctzdi2.o libgcc/h8300h/normal/_popcount_tab.o libgcc/h8300h/normal/_popcountsi2.o libgcc/h8300h/normal/_popcountdi2.o libgcc/h8300h/normal/_paritysi2.o libgcc/h8300h/normal/_paritydi2.o libgcc/h8300h/normal/_divdi3.o libgcc/h8300h/normal/_moddi3.o libgcc/h8300h/normal/_udivdi3.o libgcc/h8300h/normal/_umoddi3.o libgcc/h8300h/normal/_udiv_w_sdiv.o libgcc/h8300h/normal/_udivmoddi4.o libgcc/h8300h/normal/_pack_sf.o libgcc/h8300h/normal/_unpack_sf.o libgcc/h8300h/normal/_addsub_sf.o libgcc/h8300h/normal/_mul_sf.o libgcc/h8300h/normal/_div_sf.o libgcc/h8300h/normal/_fpcmp_parts_sf.o libgcc/h8300h/normal/_compare_sf.o libgcc/h8300h/normal/_eq_sf.o libgcc/h8300h/normal/_ne_sf.o libgcc/h8300h/normal/_gt_sf.o libgcc/h8300h/normal/_ge_sf.o libgcc/h8300h/normal/_lt_sf.o libgcc/h8300h/normal/_le_sf.o libgcc/h8300h/normal/_unord_sf.o libgcc/h8300h/normal/_si_to_sf.o libgcc/h8300h/normal/_sf_to_si.o libgcc/h8300h/normal/_negate_sf.o libgcc/h8300h/normal/_make_sf.o libgcc/h8300h/normal/_sf_to_df.o libgcc/h8300h/normal/_sf_to_tf.o libgcc/h8300h/normal/_thenan_sf.o libgcc/h8300h/normal/_sf_to_usi.o libgcc/h8300h/normal/_usi_to_sf.o libgcc/h8300h/normal/clzhi2.o libgcc/h8300h/normal/ctzhi2.o libgcc/h8300h/normal/parityhi2.o libgcc/h8300h/normal/popcounthi2.o libgcc/h8300h/normal/fixunssfsi.o libgcc/h8300h/normal/unwind-dw2.o libgcc/h8300h/normal/unwind-dw2-fde.o libgcc/h8300h/normal/unwind-sjlj.o libgcc/h8300h/normal/gthr-gnat.o libgcc/h8300h/normal/unwind-c.o libgcc/h8300h/normal/_eprintf.o libgcc/h8300h/normal/__gcc_bcmp.o
	$(RANLIB_FOR_TARGET) h8300h/normal/libgcc.a

h8300h/normal/libgcov.a: stmp-dirs  libgcc/h8300h/normal/_gcov.o libgcc/h8300h/normal/_gcov_merge_add.o libgcc/h8300h/normal/_gcov_merge_single.o libgcc/h8300h/normal/_gcov_merge_delta.o
	-rm -rf h8300h/normal/libgcov.a
	$(AR_CREATE_FOR_TARGET) h8300h/normal/libgcov.a libgcc/h8300h/normal/_gcov.o libgcc/h8300h/normal/_gcov_merge_add.o libgcc/h8300h/normal/_gcov_merge_single.o libgcc/h8300h/normal/_gcov_merge_delta.o
	$(RANLIB_FOR_TARGET) h8300h/normal/libgcov.a

h8300h/int32/libgcc.a: stmp-dirs  libgcc/h8300h/int32/_cmpsi2.o libgcc/h8300h/int32/_ucmpsi2.o libgcc/h8300h/int32/_divhi3.o libgcc/h8300h/int32/_divsi3.o libgcc/h8300h/int32/_mulhi3.o libgcc/h8300h/int32/_mulsi3.o libgcc/h8300h/int32/_fixunssfsi_asm.o libgcc/h8300h/int32/_muldi3.o libgcc/h8300h/int32/_negdi2.o libgcc/h8300h/int32/_lshrdi3.o libgcc/h8300h/int32/_ashldi3.o libgcc/h8300h/int32/_ashrdi3.o libgcc/h8300h/int32/_cmpdi2.o libgcc/h8300h/int32/_ucmpdi2.o libgcc/h8300h/int32/_floatdidf.o libgcc/h8300h/int32/_floatdisf.o libgcc/h8300h/int32/_fixunsdfsi.o libgcc/h8300h/int32/_fixunssfsi.o libgcc/h8300h/int32/_fixunsdfdi.o libgcc/h8300h/int32/_fixdfdi.o libgcc/h8300h/int32/_fixunssfdi.o libgcc/h8300h/int32/_fixsfdi.o libgcc/h8300h/int32/_fixxfdi.o libgcc/h8300h/int32/_fixunsxfdi.o libgcc/h8300h/int32/_floatdixf.o libgcc/h8300h/int32/_fixunsxfsi.o libgcc/h8300h/int32/_fixtfdi.o libgcc/h8300h/int32/_fixunstfdi.o libgcc/h8300h/int32/_floatditf.o libgcc/h8300h/int32/_clear_cache.o libgcc/h8300h/int32/_enable_execute_stack.o libgcc/h8300h/int32/_trampoline.o libgcc/h8300h/int32/__main.o libgcc/h8300h/int32/_absvsi2.o libgcc/h8300h/int32/_absvdi2.o libgcc/h8300h/int32/_addvsi3.o libgcc/h8300h/int32/_addvdi3.o libgcc/h8300h/int32/_subvsi3.o libgcc/h8300h/int32/_subvdi3.o libgcc/h8300h/int32/_mulvsi3.o libgcc/h8300h/int32/_mulvdi3.o libgcc/h8300h/int32/_negvsi2.o libgcc/h8300h/int32/_negvdi2.o libgcc/h8300h/int32/_ctors.o libgcc/h8300h/int32/_ffssi2.o libgcc/h8300h/int32/_ffsdi2.o libgcc/h8300h/int32/_clz.o libgcc/h8300h/int32/_clzsi2.o libgcc/h8300h/int32/_clzdi2.o libgcc/h8300h/int32/_ctzsi2.o libgcc/h8300h/int32/_ctzdi2.o libgcc/h8300h/int32/_popcount_tab.o libgcc/h8300h/int32/_popcountsi2.o libgcc/h8300h/int32/_popcountdi2.o libgcc/h8300h/int32/_paritysi2.o libgcc/h8300h/int32/_paritydi2.o libgcc/h8300h/int32/_divdi3.o libgcc/h8300h/int32/_moddi3.o libgcc/h8300h/int32/_udivdi3.o libgcc/h8300h/int32/_umoddi3.o libgcc/h8300h/int32/_udiv_w_sdiv.o libgcc/h8300h/int32/_udivmoddi4.o libgcc/h8300h/int32/_pack_sf.o libgcc/h8300h/int32/_unpack_sf.o libgcc/h8300h/int32/_addsub_sf.o libgcc/h8300h/int32/_mul_sf.o libgcc/h8300h/int32/_div_sf.o libgcc/h8300h/int32/_fpcmp_parts_sf.o libgcc/h8300h/int32/_compare_sf.o libgcc/h8300h/int32/_eq_sf.o libgcc/h8300h/int32/_ne_sf.o libgcc/h8300h/int32/_gt_sf.o libgcc/h8300h/int32/_ge_sf.o libgcc/h8300h/int32/_lt_sf.o libgcc/h8300h/int32/_le_sf.o libgcc/h8300h/int32/_unord_sf.o libgcc/h8300h/int32/_si_to_sf.o libgcc/h8300h/int32/_sf_to_si.o libgcc/h8300h/int32/_negate_sf.o libgcc/h8300h/int32/_make_sf.o libgcc/h8300h/int32/_sf_to_df.o libgcc/h8300h/int32/_sf_to_tf.o libgcc/h8300h/int32/_thenan_sf.o libgcc/h8300h/int32/_sf_to_usi.o libgcc/h8300h/int32/_usi_to_sf.o libgcc/h8300h/int32/clzhi2.o libgcc/h8300h/int32/ctzhi2.o libgcc/h8300h/int32/parityhi2.o libgcc/h8300h/int32/popcounthi2.o libgcc/h8300h/int32/fixunssfsi.o libgcc/h8300h/int32/unwind-dw2.o libgcc/h8300h/int32/unwind-dw2-fde.o libgcc/h8300h/int32/unwind-sjlj.o libgcc/h8300h/int32/gthr-gnat.o libgcc/h8300h/int32/unwind-c.o  libgcc/h8300h/int32/_eprintf.o libgcc/h8300h/int32/__gcc_bcmp.o
	-rm -rf h8300h/int32/libgcc.a
	$(AR_CREATE_FOR_TARGET) h8300h/int32/libgcc.a libgcc/h8300h/int32/_cmpsi2.o libgcc/h8300h/int32/_ucmpsi2.o libgcc/h8300h/int32/_divhi3.o libgcc/h8300h/int32/_divsi3.o libgcc/h8300h/int32/_mulhi3.o libgcc/h8300h/int32/_mulsi3.o libgcc/h8300h/int32/_fixunssfsi_asm.o libgcc/h8300h/int32/_muldi3.o libgcc/h8300h/int32/_negdi2.o libgcc/h8300h/int32/_lshrdi3.o libgcc/h8300h/int32/_ashldi3.o libgcc/h8300h/int32/_ashrdi3.o libgcc/h8300h/int32/_cmpdi2.o libgcc/h8300h/int32/_ucmpdi2.o libgcc/h8300h/int32/_floatdidf.o libgcc/h8300h/int32/_floatdisf.o libgcc/h8300h/int32/_fixunsdfsi.o libgcc/h8300h/int32/_fixunssfsi.o libgcc/h8300h/int32/_fixunsdfdi.o libgcc/h8300h/int32/_fixdfdi.o libgcc/h8300h/int32/_fixunssfdi.o libgcc/h8300h/int32/_fixsfdi.o libgcc/h8300h/int32/_fixxfdi.o libgcc/h8300h/int32/_fixunsxfdi.o libgcc/h8300h/int32/_floatdixf.o libgcc/h8300h/int32/_fixunsxfsi.o libgcc/h8300h/int32/_fixtfdi.o libgcc/h8300h/int32/_fixunstfdi.o libgcc/h8300h/int32/_floatditf.o libgcc/h8300h/int32/_clear_cache.o libgcc/h8300h/int32/_enable_execute_stack.o libgcc/h8300h/int32/_trampoline.o libgcc/h8300h/int32/__main.o libgcc/h8300h/int32/_absvsi2.o libgcc/h8300h/int32/_absvdi2.o libgcc/h8300h/int32/_addvsi3.o libgcc/h8300h/int32/_addvdi3.o libgcc/h8300h/int32/_subvsi3.o libgcc/h8300h/int32/_subvdi3.o libgcc/h8300h/int32/_mulvsi3.o libgcc/h8300h/int32/_mulvdi3.o libgcc/h8300h/int32/_negvsi2.o libgcc/h8300h/int32/_negvdi2.o libgcc/h8300h/int32/_ctors.o libgcc/h8300h/int32/_ffssi2.o libgcc/h8300h/int32/_ffsdi2.o libgcc/h8300h/int32/_clz.o libgcc/h8300h/int32/_clzsi2.o libgcc/h8300h/int32/_clzdi2.o libgcc/h8300h/int32/_ctzsi2.o libgcc/h8300h/int32/_ctzdi2.o libgcc/h8300h/int32/_popcount_tab.o libgcc/h8300h/int32/_popcountsi2.o libgcc/h8300h/int32/_popcountdi2.o libgcc/h8300h/int32/_paritysi2.o libgcc/h8300h/int32/_paritydi2.o libgcc/h8300h/int32/_divdi3.o libgcc/h8300h/int32/_moddi3.o libgcc/h8300h/int32/_udivdi3.o libgcc/h8300h/int32/_umoddi3.o libgcc/h8300h/int32/_udiv_w_sdiv.o libgcc/h8300h/int32/_udivmoddi4.o libgcc/h8300h/int32/_pack_sf.o libgcc/h8300h/int32/_unpack_sf.o libgcc/h8300h/int32/_addsub_sf.o libgcc/h8300h/int32/_mul_sf.o libgcc/h8300h/int32/_div_sf.o libgcc/h8300h/int32/_fpcmp_parts_sf.o libgcc/h8300h/int32/_compare_sf.o libgcc/h8300h/int32/_eq_sf.o libgcc/h8300h/int32/_ne_sf.o libgcc/h8300h/int32/_gt_sf.o libgcc/h8300h/int32/_ge_sf.o libgcc/h8300h/int32/_lt_sf.o libgcc/h8300h/int32/_le_sf.o libgcc/h8300h/int32/_unord_sf.o libgcc/h8300h/int32/_si_to_sf.o libgcc/h8300h/int32/_sf_to_si.o libgcc/h8300h/int32/_negate_sf.o libgcc/h8300h/int32/_make_sf.o libgcc/h8300h/int32/_sf_to_df.o libgcc/h8300h/int32/_sf_to_tf.o libgcc/h8300h/int32/_thenan_sf.o libgcc/h8300h/int32/_sf_to_usi.o libgcc/h8300h/int32/_usi_to_sf.o libgcc/h8300h/int32/clzhi2.o libgcc/h8300h/int32/ctzhi2.o libgcc/h8300h/int32/parityhi2.o libgcc/h8300h/int32/popcounthi2.o libgcc/h8300h/int32/fixunssfsi.o libgcc/h8300h/int32/unwind-dw2.o libgcc/h8300h/int32/unwind-dw2-fde.o libgcc/h8300h/int32/unwind-sjlj.o libgcc/h8300h/int32/gthr-gnat.o libgcc/h8300h/int32/unwind-c.o libgcc/h8300h/int32/_eprintf.o libgcc/h8300h/int32/__gcc_bcmp.o
	$(RANLIB_FOR_TARGET) h8300h/int32/libgcc.a

h8300h/int32/libgcov.a: stmp-dirs  libgcc/h8300h/int32/_gcov.o libgcc/h8300h/int32/_gcov_merge_add.o libgcc/h8300h/int32/_gcov_merge_single.o libgcc/h8300h/int32/_gcov_merge_delta.o
	-rm -rf h8300h/int32/libgcov.a
	$(AR_CREATE_FOR_TARGET) h8300h/int32/libgcov.a libgcc/h8300h/int32/_gcov.o libgcc/h8300h/int32/_gcov_merge_add.o libgcc/h8300h/int32/_gcov_merge_single.o libgcc/h8300h/int32/_gcov_merge_delta.o
	$(RANLIB_FOR_TARGET) h8300h/int32/libgcov.a

h8300h/normal/int32/libgcc.a: stmp-dirs  libgcc/h8300h/normal/int32/_cmpsi2.o libgcc/h8300h/normal/int32/_ucmpsi2.o libgcc/h8300h/normal/int32/_divhi3.o libgcc/h8300h/normal/int32/_divsi3.o libgcc/h8300h/normal/int32/_mulhi3.o libgcc/h8300h/normal/int32/_mulsi3.o libgcc/h8300h/normal/int32/_fixunssfsi_asm.o libgcc/h8300h/normal/int32/_muldi3.o libgcc/h8300h/normal/int32/_negdi2.o libgcc/h8300h/normal/int32/_lshrdi3.o libgcc/h8300h/normal/int32/_ashldi3.o libgcc/h8300h/normal/int32/_ashrdi3.o libgcc/h8300h/normal/int32/_cmpdi2.o libgcc/h8300h/normal/int32/_ucmpdi2.o libgcc/h8300h/normal/int32/_floatdidf.o libgcc/h8300h/normal/int32/_floatdisf.o libgcc/h8300h/normal/int32/_fixunsdfsi.o libgcc/h8300h/normal/int32/_fixunssfsi.o libgcc/h8300h/normal/int32/_fixunsdfdi.o libgcc/h8300h/normal/int32/_fixdfdi.o libgcc/h8300h/normal/int32/_fixunssfdi.o libgcc/h8300h/normal/int32/_fixsfdi.o libgcc/h8300h/normal/int32/_fixxfdi.o libgcc/h8300h/normal/int32/_fixunsxfdi.o libgcc/h8300h/normal/int32/_floatdixf.o libgcc/h8300h/normal/int32/_fixunsxfsi.o libgcc/h8300h/normal/int32/_fixtfdi.o libgcc/h8300h/normal/int32/_fixunstfdi.o libgcc/h8300h/normal/int32/_floatditf.o libgcc/h8300h/normal/int32/_clear_cache.o libgcc/h8300h/normal/int32/_enable_execute_stack.o libgcc/h8300h/normal/int32/_trampoline.o libgcc/h8300h/normal/int32/__main.o libgcc/h8300h/normal/int32/_absvsi2.o libgcc/h8300h/normal/int32/_absvdi2.o libgcc/h8300h/normal/int32/_addvsi3.o libgcc/h8300h/normal/int32/_addvdi3.o libgcc/h8300h/normal/int32/_subvsi3.o libgcc/h8300h/normal/int32/_subvdi3.o libgcc/h8300h/normal/int32/_mulvsi3.o libgcc/h8300h/normal/int32/_mulvdi3.o libgcc/h8300h/normal/int32/_negvsi2.o libgcc/h8300h/normal/int32/_negvdi2.o libgcc/h8300h/normal/int32/_ctors.o libgcc/h8300h/normal/int32/_ffssi2.o libgcc/h8300h/normal/int32/_ffsdi2.o libgcc/h8300h/normal/int32/_clz.o libgcc/h8300h/normal/int32/_clzsi2.o libgcc/h8300h/normal/int32/_clzdi2.o libgcc/h8300h/normal/int32/_ctzsi2.o libgcc/h8300h/normal/int32/_ctzdi2.o libgcc/h8300h/normal/int32/_popcount_tab.o libgcc/h8300h/normal/int32/_popcountsi2.o libgcc/h8300h/normal/int32/_popcountdi2.o libgcc/h8300h/normal/int32/_paritysi2.o libgcc/h8300h/normal/int32/_paritydi2.o libgcc/h8300h/normal/int32/_divdi3.o libgcc/h8300h/normal/int32/_moddi3.o libgcc/h8300h/normal/int32/_udivdi3.o libgcc/h8300h/normal/int32/_umoddi3.o libgcc/h8300h/normal/int32/_udiv_w_sdiv.o libgcc/h8300h/normal/int32/_udivmoddi4.o libgcc/h8300h/normal/int32/_pack_sf.o libgcc/h8300h/normal/int32/_unpack_sf.o libgcc/h8300h/normal/int32/_addsub_sf.o libgcc/h8300h/normal/int32/_mul_sf.o libgcc/h8300h/normal/int32/_div_sf.o libgcc/h8300h/normal/int32/_fpcmp_parts_sf.o libgcc/h8300h/normal/int32/_compare_sf.o libgcc/h8300h/normal/int32/_eq_sf.o libgcc/h8300h/normal/int32/_ne_sf.o libgcc/h8300h/normal/int32/_gt_sf.o libgcc/h8300h/normal/int32/_ge_sf.o libgcc/h8300h/normal/int32/_lt_sf.o libgcc/h8300h/normal/int32/_le_sf.o libgcc/h8300h/normal/int32/_unord_sf.o libgcc/h8300h/normal/int32/_si_to_sf.o libgcc/h8300h/normal/int32/_sf_to_si.o libgcc/h8300h/normal/int32/_negate_sf.o libgcc/h8300h/normal/int32/_make_sf.o libgcc/h8300h/normal/int32/_sf_to_df.o libgcc/h8300h/normal/int32/_sf_to_tf.o libgcc/h8300h/normal/int32/_thenan_sf.o libgcc/h8300h/normal/int32/_sf_to_usi.o libgcc/h8300h/normal/int32/_usi_to_sf.o libgcc/h8300h/normal/int32/clzhi2.o libgcc/h8300h/normal/int32/ctzhi2.o libgcc/h8300h/normal/int32/parityhi2.o libgcc/h8300h/normal/int32/popcounthi2.o libgcc/h8300h/normal/int32/fixunssfsi.o libgcc/h8300h/normal/int32/unwind-dw2.o libgcc/h8300h/normal/int32/unwind-dw2-fde.o libgcc/h8300h/normal/int32/unwind-sjlj.o libgcc/h8300h/normal/int32/gthr-gnat.o libgcc/h8300h/normal/int32/unwind-c.o  libgcc/h8300h/normal/int32/_eprintf.o libgcc/h8300h/normal/int32/__gcc_bcmp.o
	-rm -rf h8300h/normal/int32/libgcc.a
	$(AR_CREATE_FOR_TARGET) h8300h/normal/int32/libgcc.a libgcc/h8300h/normal/int32/_cmpsi2.o libgcc/h8300h/normal/int32/_ucmpsi2.o libgcc/h8300h/normal/int32/_divhi3.o libgcc/h8300h/normal/int32/_divsi3.o libgcc/h8300h/normal/int32/_mulhi3.o libgcc/h8300h/normal/int32/_mulsi3.o libgcc/h8300h/normal/int32/_fixunssfsi_asm.o libgcc/h8300h/normal/int32/_muldi3.o libgcc/h8300h/normal/int32/_negdi2.o libgcc/h8300h/normal/int32/_lshrdi3.o libgcc/h8300h/normal/int32/_ashldi3.o libgcc/h8300h/normal/int32/_ashrdi3.o libgcc/h8300h/normal/int32/_cmpdi2.o libgcc/h8300h/normal/int32/_ucmpdi2.o libgcc/h8300h/normal/int32/_floatdidf.o libgcc/h8300h/normal/int32/_floatdisf.o libgcc/h8300h/normal/int32/_fixunsdfsi.o libgcc/h8300h/normal/int32/_fixunssfsi.o libgcc/h8300h/normal/int32/_fixunsdfdi.o libgcc/h8300h/normal/int32/_fixdfdi.o libgcc/h8300h/normal/int32/_fixunssfdi.o libgcc/h8300h/normal/int32/_fixsfdi.o libgcc/h8300h/normal/int32/_fixxfdi.o libgcc/h8300h/normal/int32/_fixunsxfdi.o libgcc/h8300h/normal/int32/_floatdixf.o libgcc/h8300h/normal/int32/_fixunsxfsi.o libgcc/h8300h/normal/int32/_fixtfdi.o libgcc/h8300h/normal/int32/_fixunstfdi.o libgcc/h8300h/normal/int32/_floatditf.o libgcc/h8300h/normal/int32/_clear_cache.o libgcc/h8300h/normal/int32/_enable_execute_stack.o libgcc/h8300h/normal/int32/_trampoline.o libgcc/h8300h/normal/int32/__main.o libgcc/h8300h/normal/int32/_absvsi2.o libgcc/h8300h/normal/int32/_absvdi2.o libgcc/h8300h/normal/int32/_addvsi3.o libgcc/h8300h/normal/int32/_addvdi3.o libgcc/h8300h/normal/int32/_subvsi3.o libgcc/h8300h/normal/int32/_subvdi3.o libgcc/h8300h/normal/int32/_mulvsi3.o libgcc/h8300h/normal/int32/_mulvdi3.o libgcc/h8300h/normal/int32/_negvsi2.o libgcc/h8300h/normal/int32/_negvdi2.o libgcc/h8300h/normal/int32/_ctors.o libgcc/h8300h/normal/int32/_ffssi2.o libgcc/h8300h/normal/int32/_ffsdi2.o libgcc/h8300h/normal/int32/_clz.o libgcc/h8300h/normal/int32/_clzsi2.o libgcc/h8300h/normal/int32/_clzdi2.o libgcc/h8300h/normal/int32/_ctzsi2.o libgcc/h8300h/normal/int32/_ctzdi2.o libgcc/h8300h/normal/int32/_popcount_tab.o libgcc/h8300h/normal/int32/_popcountsi2.o libgcc/h8300h/normal/int32/_popcountdi2.o libgcc/h8300h/normal/int32/_paritysi2.o libgcc/h8300h/normal/int32/_paritydi2.o libgcc/h8300h/normal/int32/_divdi3.o libgcc/h8300h/normal/int32/_moddi3.o libgcc/h8300h/normal/int32/_udivdi3.o libgcc/h8300h/normal/int32/_umoddi3.o libgcc/h8300h/normal/int32/_udiv_w_sdiv.o libgcc/h8300h/normal/int32/_udivmoddi4.o libgcc/h8300h/normal/int32/_pack_sf.o libgcc/h8300h/normal/int32/_unpack_sf.o libgcc/h8300h/normal/int32/_addsub_sf.o libgcc/h8300h/normal/int32/_mul_sf.o libgcc/h8300h/normal/int32/_div_sf.o libgcc/h8300h/normal/int32/_fpcmp_parts_sf.o libgcc/h8300h/normal/int32/_compare_sf.o libgcc/h8300h/normal/int32/_eq_sf.o libgcc/h8300h/normal/int32/_ne_sf.o libgcc/h8300h/normal/int32/_gt_sf.o libgcc/h8300h/normal/int32/_ge_sf.o libgcc/h8300h/normal/int32/_lt_sf.o libgcc/h8300h/normal/int32/_le_sf.o libgcc/h8300h/normal/int32/_unord_sf.o libgcc/h8300h/normal/int32/_si_to_sf.o libgcc/h8300h/normal/int32/_sf_to_si.o libgcc/h8300h/normal/int32/_negate_sf.o libgcc/h8300h/normal/int32/_make_sf.o libgcc/h8300h/normal/int32/_sf_to_df.o libgcc/h8300h/normal/int32/_sf_to_tf.o libgcc/h8300h/normal/int32/_thenan_sf.o libgcc/h8300h/normal/int32/_sf_to_usi.o libgcc/h8300h/normal/int32/_usi_to_sf.o libgcc/h8300h/normal/int32/clzhi2.o libgcc/h8300h/normal/int32/ctzhi2.o libgcc/h8300h/normal/int32/parityhi2.o libgcc/h8300h/normal/int32/popcounthi2.o libgcc/h8300h/normal/int32/fixunssfsi.o libgcc/h8300h/normal/int32/unwind-dw2.o libgcc/h8300h/normal/int32/unwind-dw2-fde.o libgcc/h8300h/normal/int32/unwind-sjlj.o libgcc/h8300h/normal/int32/gthr-gnat.o libgcc/h8300h/normal/int32/unwind-c.o libgcc/h8300h/normal/int32/_eprintf.o libgcc/h8300h/normal/int32/__gcc_bcmp.o
	$(RANLIB_FOR_TARGET) h8300h/normal/int32/libgcc.a

h8300h/normal/int32/libgcov.a: stmp-dirs  libgcc/h8300h/normal/int32/_gcov.o libgcc/h8300h/normal/int32/_gcov_merge_add.o libgcc/h8300h/normal/int32/_gcov_merge_single.o libgcc/h8300h/normal/int32/_gcov_merge_delta.o
	-rm -rf h8300h/normal/int32/libgcov.a
	$(AR_CREATE_FOR_TARGET) h8300h/normal/int32/libgcov.a libgcc/h8300h/normal/int32/_gcov.o libgcc/h8300h/normal/int32/_gcov_merge_add.o libgcc/h8300h/normal/int32/_gcov_merge_single.o libgcc/h8300h/normal/int32/_gcov_merge_delta.o
	$(RANLIB_FOR_TARGET) h8300h/normal/int32/libgcov.a

h8300s/normal/libgcc.a: stmp-dirs  libgcc/h8300s/normal/_cmpsi2.o libgcc/h8300s/normal/_ucmpsi2.o libgcc/h8300s/normal/_divhi3.o libgcc/h8300s/normal/_divsi3.o libgcc/h8300s/normal/_mulhi3.o libgcc/h8300s/normal/_mulsi3.o libgcc/h8300s/normal/_fixunssfsi_asm.o libgcc/h8300s/normal/_muldi3.o libgcc/h8300s/normal/_negdi2.o libgcc/h8300s/normal/_lshrdi3.o libgcc/h8300s/normal/_ashldi3.o libgcc/h8300s/normal/_ashrdi3.o libgcc/h8300s/normal/_cmpdi2.o libgcc/h8300s/normal/_ucmpdi2.o libgcc/h8300s/normal/_floatdidf.o libgcc/h8300s/normal/_floatdisf.o libgcc/h8300s/normal/_fixunsdfsi.o libgcc/h8300s/normal/_fixunssfsi.o libgcc/h8300s/normal/_fixunsdfdi.o libgcc/h8300s/normal/_fixdfdi.o libgcc/h8300s/normal/_fixunssfdi.o libgcc/h8300s/normal/_fixsfdi.o libgcc/h8300s/normal/_fixxfdi.o libgcc/h8300s/normal/_fixunsxfdi.o libgcc/h8300s/normal/_floatdixf.o libgcc/h8300s/normal/_fixunsxfsi.o libgcc/h8300s/normal/_fixtfdi.o libgcc/h8300s/normal/_fixunstfdi.o libgcc/h8300s/normal/_floatditf.o libgcc/h8300s/normal/_clear_cache.o libgcc/h8300s/normal/_enable_execute_stack.o libgcc/h8300s/normal/_trampoline.o libgcc/h8300s/normal/__main.o libgcc/h8300s/normal/_absvsi2.o libgcc/h8300s/normal/_absvdi2.o libgcc/h8300s/normal/_addvsi3.o libgcc/h8300s/normal/_addvdi3.o libgcc/h8300s/normal/_subvsi3.o libgcc/h8300s/normal/_subvdi3.o libgcc/h8300s/normal/_mulvsi3.o libgcc/h8300s/normal/_mulvdi3.o libgcc/h8300s/normal/_negvsi2.o libgcc/h8300s/normal/_negvdi2.o libgcc/h8300s/normal/_ctors.o libgcc/h8300s/normal/_ffssi2.o libgcc/h8300s/normal/_ffsdi2.o libgcc/h8300s/normal/_clz.o libgcc/h8300s/normal/_clzsi2.o libgcc/h8300s/normal/_clzdi2.o libgcc/h8300s/normal/_ctzsi2.o libgcc/h8300s/normal/_ctzdi2.o libgcc/h8300s/normal/_popcount_tab.o libgcc/h8300s/normal/_popcountsi2.o libgcc/h8300s/normal/_popcountdi2.o libgcc/h8300s/normal/_paritysi2.o libgcc/h8300s/normal/_paritydi2.o libgcc/h8300s/normal/_divdi3.o libgcc/h8300s/normal/_moddi3.o libgcc/h8300s/normal/_udivdi3.o libgcc/h8300s/normal/_umoddi3.o libgcc/h8300s/normal/_udiv_w_sdiv.o libgcc/h8300s/normal/_udivmoddi4.o libgcc/h8300s/normal/_pack_sf.o libgcc/h8300s/normal/_unpack_sf.o libgcc/h8300s/normal/_addsub_sf.o libgcc/h8300s/normal/_mul_sf.o libgcc/h8300s/normal/_div_sf.o libgcc/h8300s/normal/_fpcmp_parts_sf.o libgcc/h8300s/normal/_compare_sf.o libgcc/h8300s/normal/_eq_sf.o libgcc/h8300s/normal/_ne_sf.o libgcc/h8300s/normal/_gt_sf.o libgcc/h8300s/normal/_ge_sf.o libgcc/h8300s/normal/_lt_sf.o libgcc/h8300s/normal/_le_sf.o libgcc/h8300s/normal/_unord_sf.o libgcc/h8300s/normal/_si_to_sf.o libgcc/h8300s/normal/_sf_to_si.o libgcc/h8300s/normal/_negate_sf.o libgcc/h8300s/normal/_make_sf.o libgcc/h8300s/normal/_sf_to_df.o libgcc/h8300s/normal/_sf_to_tf.o libgcc/h8300s/normal/_thenan_sf.o libgcc/h8300s/normal/_sf_to_usi.o libgcc/h8300s/normal/_usi_to_sf.o libgcc/h8300s/normal/clzhi2.o libgcc/h8300s/normal/ctzhi2.o libgcc/h8300s/normal/parityhi2.o libgcc/h8300s/normal/popcounthi2.o libgcc/h8300s/normal/fixunssfsi.o libgcc/h8300s/normal/unwind-dw2.o libgcc/h8300s/normal/unwind-dw2-fde.o libgcc/h8300s/normal/unwind-sjlj.o libgcc/h8300s/normal/gthr-gnat.o libgcc/h8300s/normal/unwind-c.o  libgcc/h8300s/normal/_eprintf.o libgcc/h8300s/normal/__gcc_bcmp.o
	-rm -rf h8300s/normal/libgcc.a
	$(AR_CREATE_FOR_TARGET) h8300s/normal/libgcc.a libgcc/h8300s/normal/_cmpsi2.o libgcc/h8300s/normal/_ucmpsi2.o libgcc/h8300s/normal/_divhi3.o libgcc/h8300s/normal/_divsi3.o libgcc/h8300s/normal/_mulhi3.o libgcc/h8300s/normal/_mulsi3.o libgcc/h8300s/normal/_fixunssfsi_asm.o libgcc/h8300s/normal/_muldi3.o libgcc/h8300s/normal/_negdi2.o libgcc/h8300s/normal/_lshrdi3.o libgcc/h8300s/normal/_ashldi3.o libgcc/h8300s/normal/_ashrdi3.o libgcc/h8300s/normal/_cmpdi2.o libgcc/h8300s/normal/_ucmpdi2.o libgcc/h8300s/normal/_floatdidf.o libgcc/h8300s/normal/_floatdisf.o libgcc/h8300s/normal/_fixunsdfsi.o libgcc/h8300s/normal/_fixunssfsi.o libgcc/h8300s/normal/_fixunsdfdi.o libgcc/h8300s/normal/_fixdfdi.o libgcc/h8300s/normal/_fixunssfdi.o libgcc/h8300s/normal/_fixsfdi.o libgcc/h8300s/normal/_fixxfdi.o libgcc/h8300s/normal/_fixunsxfdi.o libgcc/h8300s/normal/_floatdixf.o libgcc/h8300s/normal/_fixunsxfsi.o libgcc/h8300s/normal/_fixtfdi.o libgcc/h8300s/normal/_fixunstfdi.o libgcc/h8300s/normal/_floatditf.o libgcc/h8300s/normal/_clear_cache.o libgcc/h8300s/normal/_enable_execute_stack.o libgcc/h8300s/normal/_trampoline.o libgcc/h8300s/normal/__main.o libgcc/h8300s/normal/_absvsi2.o libgcc/h8300s/normal/_absvdi2.o libgcc/h8300s/normal/_addvsi3.o libgcc/h8300s/normal/_addvdi3.o libgcc/h8300s/normal/_subvsi3.o libgcc/h8300s/normal/_subvdi3.o libgcc/h8300s/normal/_mulvsi3.o libgcc/h8300s/normal/_mulvdi3.o libgcc/h8300s/normal/_negvsi2.o libgcc/h8300s/normal/_negvdi2.o libgcc/h8300s/normal/_ctors.o libgcc/h8300s/normal/_ffssi2.o libgcc/h8300s/normal/_ffsdi2.o libgcc/h8300s/normal/_clz.o libgcc/h8300s/normal/_clzsi2.o libgcc/h8300s/normal/_clzdi2.o libgcc/h8300s/normal/_ctzsi2.o libgcc/h8300s/normal/_ctzdi2.o libgcc/h8300s/normal/_popcount_tab.o libgcc/h8300s/normal/_popcountsi2.o libgcc/h8300s/normal/_popcountdi2.o libgcc/h8300s/normal/_paritysi2.o libgcc/h8300s/normal/_paritydi2.o libgcc/h8300s/normal/_divdi3.o libgcc/h8300s/normal/_moddi3.o libgcc/h8300s/normal/_udivdi3.o libgcc/h8300s/normal/_umoddi3.o libgcc/h8300s/normal/_udiv_w_sdiv.o libgcc/h8300s/normal/_udivmoddi4.o libgcc/h8300s/normal/_pack_sf.o libgcc/h8300s/normal/_unpack_sf.o libgcc/h8300s/normal/_addsub_sf.o libgcc/h8300s/normal/_mul_sf.o libgcc/h8300s/normal/_div_sf.o libgcc/h8300s/normal/_fpcmp_parts_sf.o libgcc/h8300s/normal/_compare_sf.o libgcc/h8300s/normal/_eq_sf.o libgcc/h8300s/normal/_ne_sf.o libgcc/h8300s/normal/_gt_sf.o libgcc/h8300s/normal/_ge_sf.o libgcc/h8300s/normal/_lt_sf.o libgcc/h8300s/normal/_le_sf.o libgcc/h8300s/normal/_unord_sf.o libgcc/h8300s/normal/_si_to_sf.o libgcc/h8300s/normal/_sf_to_si.o libgcc/h8300s/normal/_negate_sf.o libgcc/h8300s/normal/_make_sf.o libgcc/h8300s/normal/_sf_to_df.o libgcc/h8300s/normal/_sf_to_tf.o libgcc/h8300s/normal/_thenan_sf.o libgcc/h8300s/normal/_sf_to_usi.o libgcc/h8300s/normal/_usi_to_sf.o libgcc/h8300s/normal/clzhi2.o libgcc/h8300s/normal/ctzhi2.o libgcc/h8300s/normal/parityhi2.o libgcc/h8300s/normal/popcounthi2.o libgcc/h8300s/normal/fixunssfsi.o libgcc/h8300s/normal/unwind-dw2.o libgcc/h8300s/normal/unwind-dw2-fde.o libgcc/h8300s/normal/unwind-sjlj.o libgcc/h8300s/normal/gthr-gnat.o libgcc/h8300s/normal/unwind-c.o libgcc/h8300s/normal/_eprintf.o libgcc/h8300s/normal/__gcc_bcmp.o
	$(RANLIB_FOR_TARGET) h8300s/normal/libgcc.a

h8300s/normal/libgcov.a: stmp-dirs  libgcc/h8300s/normal/_gcov.o libgcc/h8300s/normal/_gcov_merge_add.o libgcc/h8300s/normal/_gcov_merge_single.o libgcc/h8300s/normal/_gcov_merge_delta.o
	-rm -rf h8300s/normal/libgcov.a
	$(AR_CREATE_FOR_TARGET) h8300s/normal/libgcov.a libgcc/h8300s/normal/_gcov.o libgcc/h8300s/normal/_gcov_merge_add.o libgcc/h8300s/normal/_gcov_merge_single.o libgcc/h8300s/normal/_gcov_merge_delta.o
	$(RANLIB_FOR_TARGET) h8300s/normal/libgcov.a

h8300s/int32/libgcc.a: stmp-dirs  libgcc/h8300s/int32/_cmpsi2.o libgcc/h8300s/int32/_ucmpsi2.o libgcc/h8300s/int32/_divhi3.o libgcc/h8300s/int32/_divsi3.o libgcc/h8300s/int32/_mulhi3.o libgcc/h8300s/int32/_mulsi3.o libgcc/h8300s/int32/_fixunssfsi_asm.o libgcc/h8300s/int32/_muldi3.o libgcc/h8300s/int32/_negdi2.o libgcc/h8300s/int32/_lshrdi3.o libgcc/h8300s/int32/_ashldi3.o libgcc/h8300s/int32/_ashrdi3.o libgcc/h8300s/int32/_cmpdi2.o libgcc/h8300s/int32/_ucmpdi2.o libgcc/h8300s/int32/_floatdidf.o libgcc/h8300s/int32/_floatdisf.o libgcc/h8300s/int32/_fixunsdfsi.o libgcc/h8300s/int32/_fixunssfsi.o libgcc/h8300s/int32/_fixunsdfdi.o libgcc/h8300s/int32/_fixdfdi.o libgcc/h8300s/int32/_fixunssfdi.o libgcc/h8300s/int32/_fixsfdi.o libgcc/h8300s/int32/_fixxfdi.o libgcc/h8300s/int32/_fixunsxfdi.o libgcc/h8300s/int32/_floatdixf.o libgcc/h8300s/int32/_fixunsxfsi.o libgcc/h8300s/int32/_fixtfdi.o libgcc/h8300s/int32/_fixunstfdi.o libgcc/h8300s/int32/_floatditf.o libgcc/h8300s/int32/_clear_cache.o libgcc/h8300s/int32/_enable_execute_stack.o libgcc/h8300s/int32/_trampoline.o libgcc/h8300s/int32/__main.o libgcc/h8300s/int32/_absvsi2.o libgcc/h8300s/int32/_absvdi2.o libgcc/h8300s/int32/_addvsi3.o libgcc/h8300s/int32/_addvdi3.o libgcc/h8300s/int32/_subvsi3.o libgcc/h8300s/int32/_subvdi3.o libgcc/h8300s/int32/_mulvsi3.o libgcc/h8300s/int32/_mulvdi3.o libgcc/h8300s/int32/_negvsi2.o libgcc/h8300s/int32/_negvdi2.o libgcc/h8300s/int32/_ctors.o libgcc/h8300s/int32/_ffssi2.o libgcc/h8300s/int32/_ffsdi2.o libgcc/h8300s/int32/_clz.o libgcc/h8300s/int32/_clzsi2.o libgcc/h8300s/int32/_clzdi2.o libgcc/h8300s/int32/_ctzsi2.o libgcc/h8300s/int32/_ctzdi2.o libgcc/h8300s/int32/_popcount_tab.o libgcc/h8300s/int32/_popcountsi2.o libgcc/h8300s/int32/_popcountdi2.o libgcc/h8300s/int32/_paritysi2.o libgcc/h8300s/int32/_paritydi2.o libgcc/h8300s/int32/_divdi3.o libgcc/h8300s/int32/_moddi3.o libgcc/h8300s/int32/_udivdi3.o libgcc/h8300s/int32/_umoddi3.o libgcc/h8300s/int32/_udiv_w_sdiv.o libgcc/h8300s/int32/_udivmoddi4.o libgcc/h8300s/int32/_pack_sf.o libgcc/h8300s/int32/_unpack_sf.o libgcc/h8300s/int32/_addsub_sf.o libgcc/h8300s/int32/_mul_sf.o libgcc/h8300s/int32/_div_sf.o libgcc/h8300s/int32/_fpcmp_parts_sf.o libgcc/h8300s/int32/_compare_sf.o libgcc/h8300s/int32/_eq_sf.o libgcc/h8300s/int32/_ne_sf.o libgcc/h8300s/int32/_gt_sf.o libgcc/h8300s/int32/_ge_sf.o libgcc/h8300s/int32/_lt_sf.o libgcc/h8300s/int32/_le_sf.o libgcc/h8300s/int32/_unord_sf.o libgcc/h8300s/int32/_si_to_sf.o libgcc/h8300s/int32/_sf_to_si.o libgcc/h8300s/int32/_negate_sf.o libgcc/h8300s/int32/_make_sf.o libgcc/h8300s/int32/_sf_to_df.o libgcc/h8300s/int32/_sf_to_tf.o libgcc/h8300s/int32/_thenan_sf.o libgcc/h8300s/int32/_sf_to_usi.o libgcc/h8300s/int32/_usi_to_sf.o libgcc/h8300s/int32/clzhi2.o libgcc/h8300s/int32/ctzhi2.o libgcc/h8300s/int32/parityhi2.o libgcc/h8300s/int32/popcounthi2.o libgcc/h8300s/int32/fixunssfsi.o libgcc/h8300s/int32/unwind-dw2.o libgcc/h8300s/int32/unwind-dw2-fde.o libgcc/h8300s/int32/unwind-sjlj.o libgcc/h8300s/int32/gthr-gnat.o libgcc/h8300s/int32/unwind-c.o  libgcc/h8300s/int32/_eprintf.o libgcc/h8300s/int32/__gcc_bcmp.o
	-rm -rf h8300s/int32/libgcc.a
	$(AR_CREATE_FOR_TARGET) h8300s/int32/libgcc.a libgcc/h8300s/int32/_cmpsi2.o libgcc/h8300s/int32/_ucmpsi2.o libgcc/h8300s/int32/_divhi3.o libgcc/h8300s/int32/_divsi3.o libgcc/h8300s/int32/_mulhi3.o libgcc/h8300s/int32/_mulsi3.o libgcc/h8300s/int32/_fixunssfsi_asm.o libgcc/h8300s/int32/_muldi3.o libgcc/h8300s/int32/_negdi2.o libgcc/h8300s/int32/_lshrdi3.o libgcc/h8300s/int32/_ashldi3.o libgcc/h8300s/int32/_ashrdi3.o libgcc/h8300s/int32/_cmpdi2.o libgcc/h8300s/int32/_ucmpdi2.o libgcc/h8300s/int32/_floatdidf.o libgcc/h8300s/int32/_floatdisf.o libgcc/h8300s/int32/_fixunsdfsi.o libgcc/h8300s/int32/_fixunssfsi.o libgcc/h8300s/int32/_fixunsdfdi.o libgcc/h8300s/int32/_fixdfdi.o libgcc/h8300s/int32/_fixunssfdi.o libgcc/h8300s/int32/_fixsfdi.o libgcc/h8300s/int32/_fixxfdi.o libgcc/h8300s/int32/_fixunsxfdi.o libgcc/h8300s/int32/_floatdixf.o libgcc/h8300s/int32/_fixunsxfsi.o libgcc/h8300s/int32/_fixtfdi.o libgcc/h8300s/int32/_fixunstfdi.o libgcc/h8300s/int32/_floatditf.o libgcc/h8300s/int32/_clear_cache.o libgcc/h8300s/int32/_enable_execute_stack.o libgcc/h8300s/int32/_trampoline.o libgcc/h8300s/int32/__main.o libgcc/h8300s/int32/_absvsi2.o libgcc/h8300s/int32/_absvdi2.o libgcc/h8300s/int32/_addvsi3.o libgcc/h8300s/int32/_addvdi3.o libgcc/h8300s/int32/_subvsi3.o libgcc/h8300s/int32/_subvdi3.o libgcc/h8300s/int32/_mulvsi3.o libgcc/h8300s/int32/_mulvdi3.o libgcc/h8300s/int32/_negvsi2.o libgcc/h8300s/int32/_negvdi2.o libgcc/h8300s/int32/_ctors.o libgcc/h8300s/int32/_ffssi2.o libgcc/h8300s/int32/_ffsdi2.o libgcc/h8300s/int32/_clz.o libgcc/h8300s/int32/_clzsi2.o libgcc/h8300s/int32/_clzdi2.o libgcc/h8300s/int32/_ctzsi2.o libgcc/h8300s/int32/_ctzdi2.o libgcc/h8300s/int32/_popcount_tab.o libgcc/h8300s/int32/_popcountsi2.o libgcc/h8300s/int32/_popcountdi2.o libgcc/h8300s/int32/_paritysi2.o libgcc/h8300s/int32/_paritydi2.o libgcc/h8300s/int32/_divdi3.o libgcc/h8300s/int32/_moddi3.o libgcc/h8300s/int32/_udivdi3.o libgcc/h8300s/int32/_umoddi3.o libgcc/h8300s/int32/_udiv_w_sdiv.o libgcc/h8300s/int32/_udivmoddi4.o libgcc/h8300s/int32/_pack_sf.o libgcc/h8300s/int32/_unpack_sf.o libgcc/h8300s/int32/_addsub_sf.o libgcc/h8300s/int32/_mul_sf.o libgcc/h8300s/int32/_div_sf.o libgcc/h8300s/int32/_fpcmp_parts_sf.o libgcc/h8300s/int32/_compare_sf.o libgcc/h8300s/int32/_eq_sf.o libgcc/h8300s/int32/_ne_sf.o libgcc/h8300s/int32/_gt_sf.o libgcc/h8300s/int32/_ge_sf.o libgcc/h8300s/int32/_lt_sf.o libgcc/h8300s/int32/_le_sf.o libgcc/h8300s/int32/_unord_sf.o libgcc/h8300s/int32/_si_to_sf.o libgcc/h8300s/int32/_sf_to_si.o libgcc/h8300s/int32/_negate_sf.o libgcc/h8300s/int32/_make_sf.o libgcc/h8300s/int32/_sf_to_df.o libgcc/h8300s/int32/_sf_to_tf.o libgcc/h8300s/int32/_thenan_sf.o libgcc/h8300s/int32/_sf_to_usi.o libgcc/h8300s/int32/_usi_to_sf.o libgcc/h8300s/int32/clzhi2.o libgcc/h8300s/int32/ctzhi2.o libgcc/h8300s/int32/parityhi2.o libgcc/h8300s/int32/popcounthi2.o libgcc/h8300s/int32/fixunssfsi.o libgcc/h8300s/int32/unwind-dw2.o libgcc/h8300s/int32/unwind-dw2-fde.o libgcc/h8300s/int32/unwind-sjlj.o libgcc/h8300s/int32/gthr-gnat.o libgcc/h8300s/int32/unwind-c.o libgcc/h8300s/int32/_eprintf.o libgcc/h8300s/int32/__gcc_bcmp.o
	$(RANLIB_FOR_TARGET) h8300s/int32/libgcc.a

h8300s/int32/libgcov.a: stmp-dirs  libgcc/h8300s/int32/_gcov.o libgcc/h8300s/int32/_gcov_merge_add.o libgcc/h8300s/int32/_gcov_merge_single.o libgcc/h8300s/int32/_gcov_merge_delta.o
	-rm -rf h8300s/int32/libgcov.a
	$(AR_CREATE_FOR_TARGET) h8300s/int32/libgcov.a libgcc/h8300s/int32/_gcov.o libgcc/h8300s/int32/_gcov_merge_add.o libgcc/h8300s/int32/_gcov_merge_single.o libgcc/h8300s/int32/_gcov_merge_delta.o
	$(RANLIB_FOR_TARGET) h8300s/int32/libgcov.a

h8300s/normal/int32/libgcc.a: stmp-dirs  libgcc/h8300s/normal/int32/_cmpsi2.o libgcc/h8300s/normal/int32/_ucmpsi2.o libgcc/h8300s/normal/int32/_divhi3.o libgcc/h8300s/normal/int32/_divsi3.o libgcc/h8300s/normal/int32/_mulhi3.o libgcc/h8300s/normal/int32/_mulsi3.o libgcc/h8300s/normal/int32/_fixunssfsi_asm.o libgcc/h8300s/normal/int32/_muldi3.o libgcc/h8300s/normal/int32/_negdi2.o libgcc/h8300s/normal/int32/_lshrdi3.o libgcc/h8300s/normal/int32/_ashldi3.o libgcc/h8300s/normal/int32/_ashrdi3.o libgcc/h8300s/normal/int32/_cmpdi2.o libgcc/h8300s/normal/int32/_ucmpdi2.o libgcc/h8300s/normal/int32/_floatdidf.o libgcc/h8300s/normal/int32/_floatdisf.o libgcc/h8300s/normal/int32/_fixunsdfsi.o libgcc/h8300s/normal/int32/_fixunssfsi.o libgcc/h8300s/normal/int32/_fixunsdfdi.o libgcc/h8300s/normal/int32/_fixdfdi.o libgcc/h8300s/normal/int32/_fixunssfdi.o libgcc/h8300s/normal/int32/_fixsfdi.o libgcc/h8300s/normal/int32/_fixxfdi.o libgcc/h8300s/normal/int32/_fixunsxfdi.o libgcc/h8300s/normal/int32/_floatdixf.o libgcc/h8300s/normal/int32/_fixunsxfsi.o libgcc/h8300s/normal/int32/_fixtfdi.o libgcc/h8300s/normal/int32/_fixunstfdi.o libgcc/h8300s/normal/int32/_floatditf.o libgcc/h8300s/normal/int32/_clear_cache.o libgcc/h8300s/normal/int32/_enable_execute_stack.o libgcc/h8300s/normal/int32/_trampoline.o libgcc/h8300s/normal/int32/__main.o libgcc/h8300s/normal/int32/_absvsi2.o libgcc/h8300s/normal/int32/_absvdi2.o libgcc/h8300s/normal/int32/_addvsi3.o libgcc/h8300s/normal/int32/_addvdi3.o libgcc/h8300s/normal/int32/_subvsi3.o libgcc/h8300s/normal/int32/_subvdi3.o libgcc/h8300s/normal/int32/_mulvsi3.o libgcc/h8300s/normal/int32/_mulvdi3.o libgcc/h8300s/normal/int32/_negvsi2.o libgcc/h8300s/normal/int32/_negvdi2.o libgcc/h8300s/normal/int32/_ctors.o libgcc/h8300s/normal/int32/_ffssi2.o libgcc/h8300s/normal/int32/_ffsdi2.o libgcc/h8300s/normal/int32/_clz.o libgcc/h8300s/normal/int32/_clzsi2.o libgcc/h8300s/normal/int32/_clzdi2.o libgcc/h8300s/normal/int32/_ctzsi2.o libgcc/h8300s/normal/int32/_ctzdi2.o libgcc/h8300s/normal/int32/_popcount_tab.o libgcc/h8300s/normal/int32/_popcountsi2.o libgcc/h8300s/normal/int32/_popcountdi2.o libgcc/h8300s/normal/int32/_paritysi2.o libgcc/h8300s/normal/int32/_paritydi2.o libgcc/h8300s/normal/int32/_divdi3.o libgcc/h8300s/normal/int32/_moddi3.o libgcc/h8300s/normal/int32/_udivdi3.o libgcc/h8300s/normal/int32/_umoddi3.o libgcc/h8300s/normal/int32/_udiv_w_sdiv.o libgcc/h8300s/normal/int32/_udivmoddi4.o libgcc/h8300s/normal/int32/_pack_sf.o libgcc/h8300s/normal/int32/_unpack_sf.o libgcc/h8300s/normal/int32/_addsub_sf.o libgcc/h8300s/normal/int32/_mul_sf.o libgcc/h8300s/normal/int32/_div_sf.o libgcc/h8300s/normal/int32/_fpcmp_parts_sf.o libgcc/h8300s/normal/int32/_compare_sf.o libgcc/h8300s/normal/int32/_eq_sf.o libgcc/h8300s/normal/int32/_ne_sf.o libgcc/h8300s/normal/int32/_gt_sf.o libgcc/h8300s/normal/int32/_ge_sf.o libgcc/h8300s/normal/int32/_lt_sf.o libgcc/h8300s/normal/int32/_le_sf.o libgcc/h8300s/normal/int32/_unord_sf.o libgcc/h8300s/normal/int32/_si_to_sf.o libgcc/h8300s/normal/int32/_sf_to_si.o libgcc/h8300s/normal/int32/_negate_sf.o libgcc/h8300s/normal/int32/_make_sf.o libgcc/h8300s/normal/int32/_sf_to_df.o libgcc/h8300s/normal/int32/_sf_to_tf.o libgcc/h8300s/normal/int32/_thenan_sf.o libgcc/h8300s/normal/int32/_sf_to_usi.o libgcc/h8300s/normal/int32/_usi_to_sf.o libgcc/h8300s/normal/int32/clzhi2.o libgcc/h8300s/normal/int32/ctzhi2.o libgcc/h8300s/normal/int32/parityhi2.o libgcc/h8300s/normal/int32/popcounthi2.o libgcc/h8300s/normal/int32/fixunssfsi.o libgcc/h8300s/normal/int32/unwind-dw2.o libgcc/h8300s/normal/int32/unwind-dw2-fde.o libgcc/h8300s/normal/int32/unwind-sjlj.o libgcc/h8300s/normal/int32/gthr-gnat.o libgcc/h8300s/normal/int32/unwind-c.o  libgcc/h8300s/normal/int32/_eprintf.o libgcc/h8300s/normal/int32/__gcc_bcmp.o
	-rm -rf h8300s/normal/int32/libgcc.a
	$(AR_CREATE_FOR_TARGET) h8300s/normal/int32/libgcc.a libgcc/h8300s/normal/int32/_cmpsi2.o libgcc/h8300s/normal/int32/_ucmpsi2.o libgcc/h8300s/normal/int32/_divhi3.o libgcc/h8300s/normal/int32/_divsi3.o libgcc/h8300s/normal/int32/_mulhi3.o libgcc/h8300s/normal/int32/_mulsi3.o libgcc/h8300s/normal/int32/_fixunssfsi_asm.o libgcc/h8300s/normal/int32/_muldi3.o libgcc/h8300s/normal/int32/_negdi2.o libgcc/h8300s/normal/int32/_lshrdi3.o libgcc/h8300s/normal/int32/_ashldi3.o libgcc/h8300s/normal/int32/_ashrdi3.o libgcc/h8300s/normal/int32/_cmpdi2.o libgcc/h8300s/normal/int32/_ucmpdi2.o libgcc/h8300s/normal/int32/_floatdidf.o libgcc/h8300s/normal/int32/_floatdisf.o libgcc/h8300s/normal/int32/_fixunsdfsi.o libgcc/h8300s/normal/int32/_fixunssfsi.o libgcc/h8300s/normal/int32/_fixunsdfdi.o libgcc/h8300s/normal/int32/_fixdfdi.o libgcc/h8300s/normal/int32/_fixunssfdi.o libgcc/h8300s/normal/int32/_fixsfdi.o libgcc/h8300s/normal/int32/_fixxfdi.o libgcc/h8300s/normal/int32/_fixunsxfdi.o libgcc/h8300s/normal/int32/_floatdixf.o libgcc/h8300s/normal/int32/_fixunsxfsi.o libgcc/h8300s/normal/int32/_fixtfdi.o libgcc/h8300s/normal/int32/_fixunstfdi.o libgcc/h8300s/normal/int32/_floatditf.o libgcc/h8300s/normal/int32/_clear_cache.o libgcc/h8300s/normal/int32/_enable_execute_stack.o libgcc/h8300s/normal/int32/_trampoline.o libgcc/h8300s/normal/int32/__main.o libgcc/h8300s/normal/int32/_absvsi2.o libgcc/h8300s/normal/int32/_absvdi2.o libgcc/h8300s/normal/int32/_addvsi3.o libgcc/h8300s/normal/int32/_addvdi3.o libgcc/h8300s/normal/int32/_subvsi3.o libgcc/h8300s/normal/int32/_subvdi3.o libgcc/h8300s/normal/int32/_mulvsi3.o libgcc/h8300s/normal/int32/_mulvdi3.o libgcc/h8300s/normal/int32/_negvsi2.o libgcc/h8300s/normal/int32/_negvdi2.o libgcc/h8300s/normal/int32/_ctors.o libgcc/h8300s/normal/int32/_ffssi2.o libgcc/h8300s/normal/int32/_ffsdi2.o libgcc/h8300s/normal/int32/_clz.o libgcc/h8300s/normal/int32/_clzsi2.o libgcc/h8300s/normal/int32/_clzdi2.o libgcc/h8300s/normal/int32/_ctzsi2.o libgcc/h8300s/normal/int32/_ctzdi2.o libgcc/h8300s/normal/int32/_popcount_tab.o libgcc/h8300s/normal/int32/_popcountsi2.o libgcc/h8300s/normal/int32/_popcountdi2.o libgcc/h8300s/normal/int32/_paritysi2.o libgcc/h8300s/normal/int32/_paritydi2.o libgcc/h8300s/normal/int32/_divdi3.o libgcc/h8300s/normal/int32/_moddi3.o libgcc/h8300s/normal/int32/_udivdi3.o libgcc/h8300s/normal/int32/_umoddi3.o libgcc/h8300s/normal/int32/_udiv_w_sdiv.o libgcc/h8300s/normal/int32/_udivmoddi4.o libgcc/h8300s/normal/int32/_pack_sf.o libgcc/h8300s/normal/int32/_unpack_sf.o libgcc/h8300s/normal/int32/_addsub_sf.o libgcc/h8300s/normal/int32/_mul_sf.o libgcc/h8300s/normal/int32/_div_sf.o libgcc/h8300s/normal/int32/_fpcmp_parts_sf.o libgcc/h8300s/normal/int32/_compare_sf.o libgcc/h8300s/normal/int32/_eq_sf.o libgcc/h8300s/normal/int32/_ne_sf.o libgcc/h8300s/normal/int32/_gt_sf.o libgcc/h8300s/normal/int32/_ge_sf.o libgcc/h8300s/normal/int32/_lt_sf.o libgcc/h8300s/normal/int32/_le_sf.o libgcc/h8300s/normal/int32/_unord_sf.o libgcc/h8300s/normal/int32/_si_to_sf.o libgcc/h8300s/normal/int32/_sf_to_si.o libgcc/h8300s/normal/int32/_negate_sf.o libgcc/h8300s/normal/int32/_make_sf.o libgcc/h8300s/normal/int32/_sf_to_df.o libgcc/h8300s/normal/int32/_sf_to_tf.o libgcc/h8300s/normal/int32/_thenan_sf.o libgcc/h8300s/normal/int32/_sf_to_usi.o libgcc/h8300s/normal/int32/_usi_to_sf.o libgcc/h8300s/normal/int32/clzhi2.o libgcc/h8300s/normal/int32/ctzhi2.o libgcc/h8300s/normal/int32/parityhi2.o libgcc/h8300s/normal/int32/popcounthi2.o libgcc/h8300s/normal/int32/fixunssfsi.o libgcc/h8300s/normal/int32/unwind-dw2.o libgcc/h8300s/normal/int32/unwind-dw2-fde.o libgcc/h8300s/normal/int32/unwind-sjlj.o libgcc/h8300s/normal/int32/gthr-gnat.o libgcc/h8300s/normal/int32/unwind-c.o libgcc/h8300s/normal/int32/_eprintf.o libgcc/h8300s/normal/int32/__gcc_bcmp.o
	$(RANLIB_FOR_TARGET) h8300s/normal/int32/libgcc.a

h8300s/normal/int32/libgcov.a: stmp-dirs  libgcc/h8300s/normal/int32/_gcov.o libgcc/h8300s/normal/int32/_gcov_merge_add.o libgcc/h8300s/normal/int32/_gcov_merge_single.o libgcc/h8300s/normal/int32/_gcov_merge_delta.o
	-rm -rf h8300s/normal/int32/libgcov.a
	$(AR_CREATE_FOR_TARGET) h8300s/normal/int32/libgcov.a libgcc/h8300s/normal/int32/_gcov.o libgcc/h8300s/normal/int32/_gcov_merge_add.o libgcc/h8300s/normal/int32/_gcov_merge_single.o libgcc/h8300s/normal/int32/_gcov_merge_delta.o
	$(RANLIB_FOR_TARGET) h8300s/normal/int32/libgcov.a

libgcc-stage-start:
	for dir in libgcc h8300h libgcc/h8300h h8300s libgcc/h8300s h8300h/normal libgcc/h8300h/normal h8300h/int32 libgcc/h8300h/int32 h8300h/normal/int32 libgcc/h8300h/normal/int32 h8300s/normal libgcc/h8300s/normal h8300s/int32 libgcc/h8300s/int32 h8300s/normal/int32 libgcc/h8300s/normal/int32; do \
	  if [ -d $(stage)/$$dir ]; then true; else /bin/sh ./mkinstalldirs $(stage)/$$dir; fi; \
	done
	-for dir in libgcc h8300h libgcc/h8300h h8300s libgcc/h8300s h8300h/normal libgcc/h8300h/normal h8300h/int32 libgcc/h8300h/int32 h8300h/normal/int32 libgcc/h8300h/normal/int32 h8300s/normal libgcc/h8300s/normal h8300s/int32 libgcc/h8300s/int32 h8300s/normal/int32 libgcc/h8300s/normal/int32; do \
	  mv $$dir/*.o $(stage)/$$dir; \
	  mv $$dir/*.os $(stage)/$$dir || true; \
	  test ! -f $$dir/stacknote.s || mv $$dir/stacknote.s $(stage)/$$dir; \
	  test ! -f $$dir/libgcc.a || mv $$dir/lib* $(stage)/$$dir; \
	done

stmp-dirs: force
	for d in libgcc h8300h libgcc/h8300h h8300s libgcc/h8300s h8300h/normal libgcc/h8300h/normal h8300h/int32 libgcc/h8300h/int32 h8300h/normal/int32 libgcc/h8300h/normal/int32 h8300s/normal libgcc/h8300s/normal h8300s/int32 libgcc/h8300s/int32 h8300s/normal/int32 libgcc/h8300s/normal/int32; do \
	  if [ -d $$d ]; then true; else /bin/sh ./mkinstalldirs $$d; fi; \
	done
	if [ -f stmp-dirs ]; then true; else touch stmp-dirs; fi
crti.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) "  \
	  MULTILIB_CFLAGS="" T= crti.o
h8300h/crti.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh "  \
	  MULTILIB_CFLAGS=" -mh" T=h8300h/ h8300h/crti.o
h8300s/crti.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms "  \
	  MULTILIB_CFLAGS=" -ms" T=h8300s/ h8300s/crti.o
h8300h/normal/crti.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh -mn "  \
	  MULTILIB_CFLAGS=" -mh -mn" T=h8300h/normal/ h8300h/normal/crti.o
h8300h/int32/crti.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh -mint32 "  \
	  MULTILIB_CFLAGS=" -mh -mint32" T=h8300h/int32/ h8300h/int32/crti.o
h8300h/normal/int32/crti.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh -mn -mint32 "  \
	  MULTILIB_CFLAGS=" -mh -mn -mint32" T=h8300h/normal/int32/ h8300h/normal/int32/crti.o
h8300s/normal/crti.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms -mn "  \
	  MULTILIB_CFLAGS=" -ms -mn" T=h8300s/normal/ h8300s/normal/crti.o
h8300s/int32/crti.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms -mint32 "  \
	  MULTILIB_CFLAGS=" -ms -mint32" T=h8300s/int32/ h8300s/int32/crti.o
h8300s/normal/int32/crti.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms -mn -mint32 "  \
	  MULTILIB_CFLAGS=" -ms -mn -mint32" T=h8300s/normal/int32/ h8300s/normal/int32/crti.o
crtn.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) "  \
	  MULTILIB_CFLAGS="" T= crtn.o
h8300h/crtn.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh "  \
	  MULTILIB_CFLAGS=" -mh" T=h8300h/ h8300h/crtn.o
h8300s/crtn.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms "  \
	  MULTILIB_CFLAGS=" -ms" T=h8300s/ h8300s/crtn.o
h8300h/normal/crtn.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh -mn "  \
	  MULTILIB_CFLAGS=" -mh -mn" T=h8300h/normal/ h8300h/normal/crtn.o
h8300h/int32/crtn.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh -mint32 "  \
	  MULTILIB_CFLAGS=" -mh -mint32" T=h8300h/int32/ h8300h/int32/crtn.o
h8300h/normal/int32/crtn.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh -mn -mint32 "  \
	  MULTILIB_CFLAGS=" -mh -mn -mint32" T=h8300h/normal/int32/ h8300h/normal/int32/crtn.o
h8300s/normal/crtn.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms -mn "  \
	  MULTILIB_CFLAGS=" -ms -mn" T=h8300s/normal/ h8300s/normal/crtn.o
h8300s/int32/crtn.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms -mint32 "  \
	  MULTILIB_CFLAGS=" -ms -mint32" T=h8300s/int32/ h8300s/int32/crtn.o
h8300s/normal/int32/crtn.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms -mn -mint32 "  \
	  MULTILIB_CFLAGS=" -ms -mn -mint32" T=h8300s/normal/int32/ h8300s/normal/int32/crtn.o
crtbegin.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) "  \
	  MULTILIB_CFLAGS="" T= crtbegin.o
h8300h/crtbegin.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh "  \
	  MULTILIB_CFLAGS=" -mh" T=h8300h/ h8300h/crtbegin.o
h8300s/crtbegin.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms "  \
	  MULTILIB_CFLAGS=" -ms" T=h8300s/ h8300s/crtbegin.o
h8300h/normal/crtbegin.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh -mn "  \
	  MULTILIB_CFLAGS=" -mh -mn" T=h8300h/normal/ h8300h/normal/crtbegin.o
h8300h/int32/crtbegin.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh -mint32 "  \
	  MULTILIB_CFLAGS=" -mh -mint32" T=h8300h/int32/ h8300h/int32/crtbegin.o
h8300h/normal/int32/crtbegin.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh -mn -mint32 "  \
	  MULTILIB_CFLAGS=" -mh -mn -mint32" T=h8300h/normal/int32/ h8300h/normal/int32/crtbegin.o
h8300s/normal/crtbegin.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms -mn "  \
	  MULTILIB_CFLAGS=" -ms -mn" T=h8300s/normal/ h8300s/normal/crtbegin.o
h8300s/int32/crtbegin.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms -mint32 "  \
	  MULTILIB_CFLAGS=" -ms -mint32" T=h8300s/int32/ h8300s/int32/crtbegin.o
h8300s/normal/int32/crtbegin.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms -mn -mint32 "  \
	  MULTILIB_CFLAGS=" -ms -mn -mint32" T=h8300s/normal/int32/ h8300s/normal/int32/crtbegin.o
crtend.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) "  \
	  MULTILIB_CFLAGS="" T= crtend.o
h8300h/crtend.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh "  \
	  MULTILIB_CFLAGS=" -mh" T=h8300h/ h8300h/crtend.o
h8300s/crtend.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms "  \
	  MULTILIB_CFLAGS=" -ms" T=h8300s/ h8300s/crtend.o
h8300h/normal/crtend.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh -mn "  \
	  MULTILIB_CFLAGS=" -mh -mn" T=h8300h/normal/ h8300h/normal/crtend.o
h8300h/int32/crtend.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh -mint32 "  \
	  MULTILIB_CFLAGS=" -mh -mint32" T=h8300h/int32/ h8300h/int32/crtend.o
h8300h/normal/int32/crtend.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -mh -mn -mint32 "  \
	  MULTILIB_CFLAGS=" -mh -mn -mint32" T=h8300h/normal/int32/ h8300h/normal/int32/crtend.o
h8300s/normal/crtend.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms -mn "  \
	  MULTILIB_CFLAGS=" -ms -mn" T=h8300s/normal/ h8300s/normal/crtend.o
h8300s/int32/crtend.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms -mint32 "  \
	  MULTILIB_CFLAGS=" -ms -mint32" T=h8300s/int32/ h8300s/int32/crtend.o
h8300s/normal/int32/crtend.o: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -ms -mn -mint32 "  \
	  MULTILIB_CFLAGS=" -ms -mn -mint32" T=h8300s/normal/int32/ h8300s/normal/int32/crtend.o

all: stmp-dirs ./libgcc.a ./libgcov.a h8300h/libgcc.a h8300h/libgcov.a h8300s/libgcc.a h8300s/libgcov.a h8300h/normal/libgcc.a h8300h/normal/libgcov.a h8300h/int32/libgcc.a h8300h/int32/libgcov.a h8300h/normal/int32/libgcc.a h8300h/normal/int32/libgcov.a h8300s/normal/libgcc.a h8300s/normal/libgcov.a h8300s/int32/libgcc.a h8300s/int32/libgcov.a h8300s/normal/int32/libgcc.a h8300s/normal/int32/libgcov.a crti.o h8300h/crti.o h8300s/crti.o h8300h/normal/crti.o h8300h/int32/crti.o h8300h/normal/int32/crti.o h8300s/normal/crti.o h8300s/int32/crti.o h8300s/normal/int32/crti.o crtn.o h8300h/crtn.o h8300s/crtn.o h8300h/normal/crtn.o h8300h/int32/crtn.o h8300h/normal/int32/crtn.o h8300s/normal/crtn.o h8300s/int32/crtn.o h8300s/normal/int32/crtn.o crtbegin.o h8300h/crtbegin.o h8300s/crtbegin.o h8300h/normal/crtbegin.o h8300h/int32/crtbegin.o h8300h/normal/int32/crtbegin.o h8300s/normal/crtbegin.o h8300s/int32/crtbegin.o h8300s/normal/int32/crtbegin.o crtend.o h8300h/crtend.o h8300s/crtend.o h8300h/normal/crtend.o h8300h/int32/crtend.o h8300h/normal/int32/crtend.o h8300s/normal/crtend.o h8300s/int32/crtend.o h8300s/normal/int32/crtend.o

install: stmp-dirs ./libgcc.a ./libgcov.a h8300h/libgcc.a h8300h/libgcov.a h8300s/libgcc.a h8300s/libgcov.a h8300h/normal/libgcc.a h8300h/normal/libgcov.a h8300h/int32/libgcc.a h8300h/int32/libgcov.a h8300h/normal/int32/libgcc.a h8300h/normal/int32/libgcov.a h8300s/normal/libgcc.a h8300s/normal/libgcov.a h8300s/int32/libgcc.a h8300s/int32/libgcov.a h8300s/normal/int32/libgcc.a h8300s/normal/int32/libgcov.a crti.o h8300h/crti.o h8300s/crti.o h8300h/normal/crti.o h8300h/int32/crti.o h8300h/normal/int32/crti.o h8300s/normal/crti.o h8300s/int32/crti.o h8300s/normal/int32/crti.o crtn.o h8300h/crtn.o h8300s/crtn.o h8300h/normal/crtn.o h8300h/int32/crtn.o h8300h/normal/int32/crtn.o h8300s/normal/crtn.o h8300s/int32/crtn.o h8300s/normal/int32/crtn.o crtbegin.o h8300h/crtbegin.o h8300s/crtbegin.o h8300h/normal/crtbegin.o h8300h/int32/crtbegin.o h8300h/normal/int32/crtbegin.o h8300s/normal/crtbegin.o h8300s/int32/crtbegin.o h8300s/normal/int32/crtbegin.o crtend.o h8300h/crtend.o h8300s/crtend.o h8300h/normal/crtend.o h8300h/int32/crtend.o h8300h/normal/int32/crtend.o h8300s/normal/crtend.o h8300s/int32/crtend.o h8300s/normal/int32/crtend.o
	$(INSTALL_DATA) ./libgcc.a $(DESTDIR)$(libsubdir)/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcc.a
	$(INSTALL_DATA) ./libgcov.a $(DESTDIR)$(libsubdir)/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcov.a
	if [ -d $(DESTDIR)$(libsubdir)/h8300h ]; then true; else /bin/sh ./mkinstalldirs $(DESTDIR)$(libsubdir)/h8300h; chmod a+rx $(DESTDIR)$(libsubdir)/h8300h; fi;
	$(INSTALL_DATA) h8300h/libgcc.a $(DESTDIR)$(libsubdir)/h8300h/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300h/libgcc.a
	$(INSTALL_DATA) h8300h/libgcov.a $(DESTDIR)$(libsubdir)/h8300h/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300h/libgcov.a
	if [ -d $(DESTDIR)$(libsubdir)/h8300s ]; then true; else /bin/sh ./mkinstalldirs $(DESTDIR)$(libsubdir)/h8300s; chmod a+rx $(DESTDIR)$(libsubdir)/h8300s; fi;
	$(INSTALL_DATA) h8300s/libgcc.a $(DESTDIR)$(libsubdir)/h8300s/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300s/libgcc.a
	$(INSTALL_DATA) h8300s/libgcov.a $(DESTDIR)$(libsubdir)/h8300s/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300s/libgcov.a
	if [ -d $(DESTDIR)$(libsubdir)/h8300h/normal ]; then true; else /bin/sh ./mkinstalldirs $(DESTDIR)$(libsubdir)/h8300h/normal; chmod a+rx $(DESTDIR)$(libsubdir)/h8300h/normal; fi;
	$(INSTALL_DATA) h8300h/normal/libgcc.a $(DESTDIR)$(libsubdir)/h8300h/normal/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300h/normal/libgcc.a
	$(INSTALL_DATA) h8300h/normal/libgcov.a $(DESTDIR)$(libsubdir)/h8300h/normal/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300h/normal/libgcov.a
	if [ -d $(DESTDIR)$(libsubdir)/h8300h/int32 ]; then true; else /bin/sh ./mkinstalldirs $(DESTDIR)$(libsubdir)/h8300h/int32; chmod a+rx $(DESTDIR)$(libsubdir)/h8300h/int32; fi;
	$(INSTALL_DATA) h8300h/int32/libgcc.a $(DESTDIR)$(libsubdir)/h8300h/int32/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300h/int32/libgcc.a
	$(INSTALL_DATA) h8300h/int32/libgcov.a $(DESTDIR)$(libsubdir)/h8300h/int32/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300h/int32/libgcov.a
	if [ -d $(DESTDIR)$(libsubdir)/h8300h/normal/int32 ]; then true; else /bin/sh ./mkinstalldirs $(DESTDIR)$(libsubdir)/h8300h/normal/int32; chmod a+rx $(DESTDIR)$(libsubdir)/h8300h/normal/int32; fi;
	$(INSTALL_DATA) h8300h/normal/int32/libgcc.a $(DESTDIR)$(libsubdir)/h8300h/normal/int32/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300h/normal/int32/libgcc.a
	$(INSTALL_DATA) h8300h/normal/int32/libgcov.a $(DESTDIR)$(libsubdir)/h8300h/normal/int32/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300h/normal/int32/libgcov.a
	if [ -d $(DESTDIR)$(libsubdir)/h8300s/normal ]; then true; else /bin/sh ./mkinstalldirs $(DESTDIR)$(libsubdir)/h8300s/normal; chmod a+rx $(DESTDIR)$(libsubdir)/h8300s/normal; fi;
	$(INSTALL_DATA) h8300s/normal/libgcc.a $(DESTDIR)$(libsubdir)/h8300s/normal/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300s/normal/libgcc.a
	$(INSTALL_DATA) h8300s/normal/libgcov.a $(DESTDIR)$(libsubdir)/h8300s/normal/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300s/normal/libgcov.a
	if [ -d $(DESTDIR)$(libsubdir)/h8300s/int32 ]; then true; else /bin/sh ./mkinstalldirs $(DESTDIR)$(libsubdir)/h8300s/int32; chmod a+rx $(DESTDIR)$(libsubdir)/h8300s/int32; fi;
	$(INSTALL_DATA) h8300s/int32/libgcc.a $(DESTDIR)$(libsubdir)/h8300s/int32/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300s/int32/libgcc.a
	$(INSTALL_DATA) h8300s/int32/libgcov.a $(DESTDIR)$(libsubdir)/h8300s/int32/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300s/int32/libgcov.a
	if [ -d $(DESTDIR)$(libsubdir)/h8300s/normal/int32 ]; then true; else /bin/sh ./mkinstalldirs $(DESTDIR)$(libsubdir)/h8300s/normal/int32; chmod a+rx $(DESTDIR)$(libsubdir)/h8300s/normal/int32; fi;
	$(INSTALL_DATA) h8300s/normal/int32/libgcc.a $(DESTDIR)$(libsubdir)/h8300s/normal/int32/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300s/normal/int32/libgcc.a
	$(INSTALL_DATA) h8300s/normal/int32/libgcov.a $(DESTDIR)$(libsubdir)/h8300s/normal/int32/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/h8300s/normal/int32/libgcov.a
	$(INSTALL_DATA) crti.o $(DESTDIR)$(libsubdir)/
	$(INSTALL_DATA) h8300h/crti.o $(DESTDIR)$(libsubdir)/h8300h/
	$(INSTALL_DATA) h8300s/crti.o $(DESTDIR)$(libsubdir)/h8300s/
	$(INSTALL_DATA) h8300h/normal/crti.o $(DESTDIR)$(libsubdir)/h8300h/normal/
	$(INSTALL_DATA) h8300h/int32/crti.o $(DESTDIR)$(libsubdir)/h8300h/int32/
	$(INSTALL_DATA) h8300h/normal/int32/crti.o $(DESTDIR)$(libsubdir)/h8300h/normal/int32/
	$(INSTALL_DATA) h8300s/normal/crti.o $(DESTDIR)$(libsubdir)/h8300s/normal/
	$(INSTALL_DATA) h8300s/int32/crti.o $(DESTDIR)$(libsubdir)/h8300s/int32/
	$(INSTALL_DATA) h8300s/normal/int32/crti.o $(DESTDIR)$(libsubdir)/h8300s/normal/int32/
	$(INSTALL_DATA) crtn.o $(DESTDIR)$(libsubdir)/
	$(INSTALL_DATA) h8300h/crtn.o $(DESTDIR)$(libsubdir)/h8300h/
	$(INSTALL_DATA) h8300s/crtn.o $(DESTDIR)$(libsubdir)/h8300s/
	$(INSTALL_DATA) h8300h/normal/crtn.o $(DESTDIR)$(libsubdir)/h8300h/normal/
	$(INSTALL_DATA) h8300h/int32/crtn.o $(DESTDIR)$(libsubdir)/h8300h/int32/
	$(INSTALL_DATA) h8300h/normal/int32/crtn.o $(DESTDIR)$(libsubdir)/h8300h/normal/int32/
	$(INSTALL_DATA) h8300s/normal/crtn.o $(DESTDIR)$(libsubdir)/h8300s/normal/
	$(INSTALL_DATA) h8300s/int32/crtn.o $(DESTDIR)$(libsubdir)/h8300s/int32/
	$(INSTALL_DATA) h8300s/normal/int32/crtn.o $(DESTDIR)$(libsubdir)/h8300s/normal/int32/
	$(INSTALL_DATA) crtbegin.o $(DESTDIR)$(libsubdir)/
	$(INSTALL_DATA) h8300h/crtbegin.o $(DESTDIR)$(libsubdir)/h8300h/
	$(INSTALL_DATA) h8300s/crtbegin.o $(DESTDIR)$(libsubdir)/h8300s/
	$(INSTALL_DATA) h8300h/normal/crtbegin.o $(DESTDIR)$(libsubdir)/h8300h/normal/
	$(INSTALL_DATA) h8300h/int32/crtbegin.o $(DESTDIR)$(libsubdir)/h8300h/int32/
	$(INSTALL_DATA) h8300h/normal/int32/crtbegin.o $(DESTDIR)$(libsubdir)/h8300h/normal/int32/
	$(INSTALL_DATA) h8300s/normal/crtbegin.o $(DESTDIR)$(libsubdir)/h8300s/normal/
	$(INSTALL_DATA) h8300s/int32/crtbegin.o $(DESTDIR)$(libsubdir)/h8300s/int32/
	$(INSTALL_DATA) h8300s/normal/int32/crtbegin.o $(DESTDIR)$(libsubdir)/h8300s/normal/int32/
	$(INSTALL_DATA) crtend.o $(DESTDIR)$(libsubdir)/
	$(INSTALL_DATA) h8300h/crtend.o $(DESTDIR)$(libsubdir)/h8300h/
	$(INSTALL_DATA) h8300s/crtend.o $(DESTDIR)$(libsubdir)/h8300s/
	$(INSTALL_DATA) h8300h/normal/crtend.o $(DESTDIR)$(libsubdir)/h8300h/normal/
	$(INSTALL_DATA) h8300h/int32/crtend.o $(DESTDIR)$(libsubdir)/h8300h/int32/
	$(INSTALL_DATA) h8300h/normal/int32/crtend.o $(DESTDIR)$(libsubdir)/h8300h/normal/int32/
	$(INSTALL_DATA) h8300s/normal/crtend.o $(DESTDIR)$(libsubdir)/h8300s/normal/
	$(INSTALL_DATA) h8300s/int32/crtend.o $(DESTDIR)$(libsubdir)/h8300s/int32/
	$(INSTALL_DATA) h8300s/normal/int32/crtend.o $(DESTDIR)$(libsubdir)/h8300s/normal/int32/

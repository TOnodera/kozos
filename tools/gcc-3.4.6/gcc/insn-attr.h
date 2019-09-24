/* Generated automatically by the program `genattr'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_H
#define GCC_INSN_ATTR_H

#define HAVE_ATTR_alternative
#define get_attr_alternative(insn) which_alternative
#define HAVE_ATTR_cpu
enum attr_cpu {CPU_H8300, CPU_H8300H};
extern enum attr_cpu get_attr_cpu (void);

#define HAVE_ATTR_type
enum attr_type {TYPE_BRANCH, TYPE_ARITH};
extern enum attr_type get_attr_type (rtx);

#define HAVE_ATTR_length
extern int get_attr_length (rtx);
extern void shorten_branches (rtx);
extern int insn_default_length (rtx);
extern int insn_variable_length_p (rtx);
extern int insn_current_length (rtx);

#include "insn-addr.h"

#define HAVE_ATTR_cc
enum attr_cc {CC_NONE, CC_NONE_0HIT, CC_SET_ZNV, CC_SET_ZN, CC_COMPARE, CC_CLOBBER};
extern enum attr_cc get_attr_cc (rtx);

typedef void *state_t;


#define ATTR_FLAG_forward	0x1
#define ATTR_FLAG_backward	0x2
#define ATTR_FLAG_likely	0x4
#define ATTR_FLAG_very_likely	0x8
#define ATTR_FLAG_unlikely	0x10
#define ATTR_FLAG_very_unlikely	0x20

#endif /* GCC_INSN_ATTR_H */

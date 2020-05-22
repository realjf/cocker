#ifndef LOGC_H_INCLUDED
#define LOGC_H_INCLUDED

#ifndef STRCMP
#define STRCMP(_a_,_C_,_b_) ( strcmp(_a_,_b_) _C_ 0 )
#define STRNCMP(_a_,_C_,_b_,_n_) ( strncmp(_a_,_b_,_n_) _C_ 0 )
#endif // STRCMP

#endif // LOGC_H_INCLUDED

#define M_RETI_ARG27(x,y,z,aa, ...)    aa
#define M_RET_ARG27(...)        M_RETI_ARG27(__VA_ARGS__)
#define M_COMMA_P(...)          M_RET_ARG27(__VA_ARGS__, 1, 1, 0, useless)
#define M_EMPTYI_DETECT(...)    0, 1,
#define M_EMPTYI_P_C1(...)      M_COMMA_P(M_EMPTYI_DETECT __VA_ARGS__ () )
#define EX
#define empty(x)
#define fnlike(x) yeah x
/* If the following macro is called with empty arg (X183), the use
   of 'x' between fnlike and '(' doesn't hinder the recognition of this
   being a further fnlike macro invocation.  */
#define usefnlike(x) fnlike x (x)
X181 M_EMPTYI_P_C1()
X182 M_EMPTYI_P_C1(x)
X183 usefnlike()

#define ABC(x) ABC : x
#define A(a,b,c) a ## b ## c
#define B(a,b,c) A(a,b,c)
#define C(a,b,c) a b c
B(
    C(A,C(,,),),
    C(B(,,),B,B(,,)),
    C(B(,,),B(,,),C)
    )/* */(a b c)

#define TEST(x) TEST : x
#define K(a,b) a ## b
#define L(a,b) K( TE  a , b  ST )
L(,)(t e s t)

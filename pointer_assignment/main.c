struct Square {
    int x;
    int y;
    int h;
} Square_default = { .x = 0, .y = 0, .h = 0 };

typedef struct Square Square_t;

/*
    C11 § 6.5.16.1 Simple assignment ¶ 1
    […] (considering the type the left operand would have after lvalue 
    conversion) both operands are pointers to qualified or unqualified 
    versions of compatible types, and the type pointed to by the left 
    has all the qualifiers of the type pointed to by the right […]
*/
int main(int argc, char **argv)
{
    Square_t x;
    Square_t *y = &(Square_t){};
    /* Works fine according to c11 standard */
    Square_t const *p = &x;
    /* First part of the rule not met (gcc - warning, g++ - error)*/
    Square_t const **pp = &y;
/*  
    Square_t const * const *pp = &y; 
    works in g++ since *pp becomes unmodifiable
    no difference in gcc since qualifiers are ignored during type checking
*/

    /* Second part of the rule not met */
    Square_t volatile a;
    Square_t *b = &a;

    /* It protects from this happening */
    char *p1;
    char const **pp1 = &p1;
    *pp1 = "Hello world!";
//    *p1 = 'X'; /* Undefined behavior */

    return 0;
}

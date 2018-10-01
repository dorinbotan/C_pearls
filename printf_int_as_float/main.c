#include <stdio.h>

int main()
{
    /* both GCC & Clang give different results when the below lines are interchanged  */
    printf("%f\n", 3);
    printf("%f\n", 3.0);


    printf("--------------\n");

    /* interchanging the lines here does not act strange  */
    printf("%f\n", 3);
    printf("Hello world\n");
    printf("%f\n", 3.0);
}

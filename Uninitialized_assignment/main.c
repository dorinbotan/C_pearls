#include <stdio.h>

int main()
{
    long i = i; // No error nor warning here when compiled with GCC & Clang

/*
    Code above is simmilar to:

    long i;
    i = i;
*/

    return 0;
}

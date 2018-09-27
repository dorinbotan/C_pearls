#include <stdio.h>
#include <string.h>

int main()
{
    int n = 5;

    sizeof(n++);
    printf("%d\n", n);

    sizeof(int [n++]);
    printf("%d\n", n);

    return 0;
}

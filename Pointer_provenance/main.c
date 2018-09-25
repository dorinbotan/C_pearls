#include <stdio.h>
#include <string.h>

int y = 2, x = 1;

int main()
{
    int *p = &x + 1;
    int *q = &y;

    printf("p: %p q: %p\n", (void*)p, (void*)q);

    if(!memcmp(&p, &q, sizeof(p)))
    {
        *p = 11;
        printf("x: %d y: %d *p: %d *q: %d\n", x, y, *p, *q);
    }
}

#include <stdio.h>

typedef int (*function_t)();

void foo()
{
	printf("Hello world!\n");
}

/* Will print out 13, which is the return value of printf       			 */
/* Undefined behavior                                           			 */
/* Reason for this happening, on a x86 system is that printf would place the */
/* return value in eax, from where later 'a' would read it's value, assuming */
/* it's the return value of foo()                                            */
int main()
{
	int a = ((function_t)foo)();
	printf("%d\n", a);
	return 0;
}

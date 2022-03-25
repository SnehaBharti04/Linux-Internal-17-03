#include<stdio.h>

void call1(void) 
{
	printf("Calling 1st function\n");
}
void call2(void) 
{
	printf("Calling 2nd function\n");
}
void call3(void) 
{
	printf("Calling 3rd function\n");
}

int main()
{
printf("1\n");
atexit(call1);

printf("2\n");
atexit(call2);

printf("3\n");
atexit(call3);

exit(0);
}

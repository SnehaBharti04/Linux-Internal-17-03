#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
 printf("XL statement \n");

 execl("/bin/ls", "ls", "-lh", 0);

 printf("Not executed xl");

 return 0;
}

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
 execl("/usr/bin/PStree", "./PStree", 0);

 return 0;
}

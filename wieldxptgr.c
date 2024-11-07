#include <stdio.h>
int main()
{
    int*ptr;//wild ptr
    int num=100;
    int*a;//wield pointer.>not initilized
    a=&num;//not wild coz,assigned with add of a variable
printf("%u\n",a);
printf("%d",*a);//random address
return 0;
}
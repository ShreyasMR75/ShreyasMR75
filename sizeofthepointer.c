#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    *ptr=20;
    char b='s';
    char*ptr1=&b;
    printf("the value of a is %d",a);
    printf("the address of a is %u\n",&a);
    printf("the  ptr is %u\n",ptr);
    printf("the value of ptr  is %d\n",*ptr);

}
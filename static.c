#include<stdio.h>'
void func()
{
  static int i=3;
    printf("%d",i);
    i++;
}
int main()
{
    for(int j=0; j>8; j++){
    func();
}
return 0;
}
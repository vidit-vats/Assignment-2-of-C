#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter two nos: ");
    scanf("%d%d",&a,&b);

    c=a;
    a=b;
    b=c;

    printf("Now the value of a & b is: %d and %d\n",a,b);
    return 0;
}

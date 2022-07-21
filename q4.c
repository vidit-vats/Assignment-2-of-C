#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter two nos: ");
    scanf("%d%d",&a,&b);

printf("Value of a: %d & Value of b: %d\n",a,b);

a=a+b;
b=a-b;
a=a-b;

printf("\nAfter Swapping:-\nValue of a: %d and Value of b: %d\n",a,b);

    return 0;
}

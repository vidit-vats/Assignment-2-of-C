#include <stdio.h>
int main(int argc, char const *argv[])
{
    int no,x,y,z,res;
    printf("Enter a 3-digit no: ");
    scanf("%d",&no);

x=no%10;
no=no/10;
y=no%10;
no=no/10;
z=no%10;

printf("Sum of digits: %d\n",x+y+z);
    return 0;
}

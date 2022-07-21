#include <stdio.h>
int main(int argc, char const *argv[])
{
    int no,x,y,z,d1,d2,d3;
    printf("Enter a no: ");
    scanf("%d",&no);

d1=no%10;
no=no/10;
d2=no%10;
no=no/10;
d3=no%10;

printf("After rotating a single digit towards right, result is:%d",((d1*100)+(d2*1)+(d3*10)));

}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    

    int no,res,count=0;
    printf("Enter a no: ");
    scanf("%d",&no);

res=no&1;
if (res==0)
printf("Even no\n");

else
printf("Odd no\n"); 

    return 0;
}

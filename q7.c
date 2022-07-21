#include <stdio.h>
int main(int argc, char const *argv[])
{
    // program to check whether no is even or odd 

    int no,res,count=0;
    printf("Enter a no: ");
    scanf("%d",&no);


while(no!=1)
{
    res=no&1;

    if(res==1)
    {
        count++;
        break;
    }
no=no>>1;
count++;
}

printf("Position of 1st 1 is: %d\n",count);
    return 0;
}

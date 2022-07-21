#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x,res,dig;
    printf("Enter a no and a digit: ");
    scanf("%d%d",&x,&dig);

printf("Entered No: %d\n",x); // kya entered digit 1 to 9 hona chahie ya fir kitne b digits ka possible h i.e. 2 digits and son on ??
printf("Entered Digit: %d\n",dig);

printf("Result: %d\n",(x*10+dig));

    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    printf("Price of 1$ is: 76.23\n");
    printf("Enter the INR value: ");
    float inr;
    scanf("%f",&inr);

    printf("Value of entered INR in USD is: %f\n",(1/76.23)*inr);
    return 0;
}

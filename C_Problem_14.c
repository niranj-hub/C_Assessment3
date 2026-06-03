#include <stdio.h>
int main() 
{
    int a,ones,tens,hundreds,thousands;
    printf("Enter a four digit number:");
    scanf("%d",&a);
    ones=a%10;
    tens=(a/10)%10;
    hundreds=(a/100)%10;
    thousands=a/1000;
    if ((ones==hundreds)&(tens==thousands))
      printf("Success");
    else
      printf("Failure");
    return 0;
}

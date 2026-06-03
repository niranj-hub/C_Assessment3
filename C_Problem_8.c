#include <stdio.h>
int main() 
{
    int a,ones,tens;
    printf("Enter a two digit number:");
    scanf("%d",&a);
    ones=a%10;
    tens=a/10;
    if (ones!=tens)
      printf("Success");
    else
      printf("Failure");
    return 0;
}

#include <stdio.h>
int main()
{
    int n, sum=0, firstDigit, lastDigit;
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);
    if( n>=100 && n<=999)
   {
	 lastDigit = n % 10;
    
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);
}
else
{
	printf("Enter the valid number " );
}
    return 0;
}

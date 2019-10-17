#include <stdio.h>
#include <stdlib.h>
long long int get_prn()
{
	long long int a;
	printf("Enter your PRN: ");
	scanf("%lld",&a);
	return a;
}
int main()
{
    long long int b;
    b = get_prn();
    printf("your PRN is: %lld",b);
    return 0;
} 

///5. WAP to print factorial of given number.



#include<stdio.h>
void main(){
    int n;
    int i=1;
    int fact=1; 

    printf("\nEnter the number: ");
    scanf("%d",&n);

    do
    {
        fact = fact * i;
        i++;
    } while (i<=n);
    
    printf("\nFactorial is: %d",fact);

}


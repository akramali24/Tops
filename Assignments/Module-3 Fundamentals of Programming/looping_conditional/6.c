// //6. WAP to print Fibonacci series up to given numbers 


#include<stdio.h>
void main(){
    int a=0,b=1,temp,n,count=1;

    printf("\nenter number: ");
    scanf("%d",&n);

    printf("%d\t%d\t",a,b);
    
    while (count<=n)
    {

        temp = a + b;
        a = b;
        b = temp;

        count++;

        printf("%d\t",temp);
    }
}


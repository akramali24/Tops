//4. WAP to print table up to given numbers.


#include<stdio.h>
void main(){
    int i = 1;
    int n, m;

    printf("\nEnter the number: ");
    scanf("%d",&n);

    printf("Enter the maximum multiplier for table: ");
    scanf("%d",&m);

    while(i<=m){
        printf("\n%d * %d = %d\n",n,i,n*i);
        i++;
    }
}


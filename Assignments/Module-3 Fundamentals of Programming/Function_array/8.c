// 8. WAP to reverse a string and check that the string is palindrome or not.

#include<stdio.h>                                               // without using another string.
#include<string.h>
void main(){
    char str[50];
    int i, len=0, r=0;

    printf("\nenter string: ");
    gets(str);

    len = strlen(str);

    for(i=0; i < len/2; i++){

        if(str[i] == str[len-i-1]){
            r++;
        }
    }

    if(r == len/2){
        printf("\nstring is palindrome- %s",str);
    }
    else{
        printf("\nstring is not palindrome- %s",str);        
    }
   
}


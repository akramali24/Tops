// 14. Write a program in C to combine two strings manually 

#include <stdio.h>
#include <string.h>

void main(){
    int i, a, b, c;
    char str1[100], str2[100];


    printf("Enter string 1: ");
    gets(str1);
    
    printf("\nEnter string 2: ");
    gets(str2);

    a = strlen(str1);
    b = strlen(str2);

    c = a + b;

    char combine[c + 1];
  

    for(i=0; i<c; i++){
        
        if(i < a){
            combine[i] = str1[i];
        }
        else{
            combine[i] = str2[i - a];
        }
    }

    combine[c] = '\0';             

    printf("\nCombine string is: %s",combine);    
}

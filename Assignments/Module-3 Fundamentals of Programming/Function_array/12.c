// 12. WAP to accept 5 students name and store it in array

#include<stdio.h>
void main(){
    int i;
    char s_name[5][50];

    
    printf("\nEnter 5 students name. \n");
    for(i=0; i<5; i++){
        printf("\nEnter name %i: ",i+1);
        fgets(s_name[i], sizeof(s_name[i]), stdin);    
    
    }

    for(i=0; i<5; i++){
        printf("\nName %d: %s",i+1, s_name[i]);
    }
}
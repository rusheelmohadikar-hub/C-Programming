#include<stdio.h>
void ind();
void fre();
int main(){
    char ch;
    printf("Enter i if Indian or f if French: ");
    scanf("%c",&ch);
    if (ch == 'i'){
         ind();
    }
    else if(ch == 'f'){
        
         fre();
    }
    else{
        printf("ERROR!!");
    }
    return 0;
}
void ind(){
    printf("Namaste");
}
void fre(){
    printf("Bonjour");
}
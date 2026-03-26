#include<stdio.h>
#include<unistd.h>
int main(){
    union test {
    int a;
    char b;
    } t;

    t.a = 100;   // binary of 65 = 01000001

    printf("%c", t.b);

    return 0;
}
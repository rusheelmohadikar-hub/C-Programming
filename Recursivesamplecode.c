#include<stdio.h>
void printhw(int num);
int main()
{
    printhw(6);
    return 0;
}
//Recursive Function.
void printhw(int num){
    if (num == 0){
        return;
    }
    printf("Hello Rusheel\n");
    printhw(num-1);

}
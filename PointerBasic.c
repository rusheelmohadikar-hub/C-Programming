#include<stdio.h>
int main()
{
    //int age = 18;
    //int *ptr = &age; * means value of address | & means address of
    //int _age = *ptr;
    //How to print Address:-


    //printf("%d",_age);
    //printf("%p\n",&age); //It will give you an hexadecimal value.

    //By writing %p and assigning a address of a varialbe it will give position of the memory in which the variable is placed.
    //And if the output we want an integer value you can type cast the value by using %u.
    //printf("%u\n",&age);
    //printf("%p\n",ptr); //Gives The address of the variable ptr.
    //printf("%u\n",ptr); //Gives integer values.
    //printf("%u\n",&ptr);

    //How to print Value:-

    //printf("%d\n",age);
    //printf("%d\n",*ptr);//("%d",value at address ptr);
    //printf("%d\n",*(&age));//("%d",value at address address of age);
    
    //Sample Example:-
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf("x = %d\n",x); // output = 0
    printf("*ptr = %d\n",*ptr); // output = 0
    
    *ptr += 5;
    printf("x = %d\n",x); // output = 5
    printf("*ptr = %d\n",*ptr); // output = 5

    (*ptr)++;
    printf("x = %d\n",x); // output = 6
    printf("*ptr = %d\n",*ptr); // output = 6
    return 0 ;
}
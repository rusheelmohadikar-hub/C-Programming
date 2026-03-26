/*#include<stdio.h> 
void change(int num);
int main() { 
 int x=100; 
 printf("Before function call x=%d \n", x); 
 change(x);//passing value in function 
 printf("After function call x=%d \n", x); 
return 0; 
} 
void change(int num) { +
 printf("Before adding value inside function num=%d \n",num); 
 num=num+100; 
 printf("After adding value inside function num=%d \n", num); 
}*/

#include<stdio.h>
int main(){
    int age ,*ptr;
    age = 18;
    ptr = &age;
   
    printf("Value of variable age is :%d\n",age);
    printf("Address of variable age is :%p\n",&age);
    return 0;
}
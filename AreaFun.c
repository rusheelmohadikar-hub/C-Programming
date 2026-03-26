#include<stdio.h>
int circle(int r);
int rect(int b,int h);
int squ(int s);
int main(){
    int r,b,h,s;
    printf("Enter Radius of a Circle: ");
    scanf("%d",&r);
    circle(r);
    printf("Enter Base and Height of a Rectangle: ");
    scanf("%d%d",&b,&h);
    rect(b,h);
    printf("Enter side of a Square: ");
    scanf("%d",&s);
    squ(s);
}
int circle(int r){
    int area = 3.14*r*r;
    printf("Area of Circle is : %d\n",area);
}
int rect(int b,int h){
    int area = b*h;
    printf("Area of Rectangle = %d\n",area);
}
int squ(int s){
    int area = s*s;
    printf("Area of Square is : %d\n",area);
}
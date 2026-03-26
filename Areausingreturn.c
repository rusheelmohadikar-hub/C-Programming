#include<stdio.h>
int circle(int r);
int rect(int b,int h);
int squ(int s);
int main(){
    int r,b,h,s;
    printf("Enter Radius of a Circle: ");
    scanf("%d",&r);
    printf("Area of circle is: %d\n",circle(r));
    printf("Enter Base and Height of a Rectangle: ");
    scanf("%d%d",&b,&h);
    printf("Area of Rectangle is: %d\n",rect(b,h));
    printf("Enter side of a Square: ");
    scanf("%d",&s);
    printf("Area of Square is: %d\n",squ(s));
}
int circle(int r){
    return 3.14*r*r;
}
int rect(int b,int h){
    return  b*h;
}
int squ(int s){
    return s*s;
}
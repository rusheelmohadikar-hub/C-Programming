#include<stdio.h>
float degree(float conv);
int main()
{
   float conv;
   printf("Enter Celcius Value To Convert Into Farenhite: ");
   scanf("%f",&conv);
   degree(conv);
   printf("Conversion Into Farenhite is %f",degree(conv));
   return 0;

}
float degree(float conv){
    float c;
     c = (conv*1.8)+32;
   return c;
}
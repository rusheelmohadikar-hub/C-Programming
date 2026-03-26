#include<stdio.h>
int percentage(int math,int sci,int san);
int main()
{     
    int math,sci,san;
    printf("Enter Marks of Maths Science and Snskrit : ");//all in out off 100
    scanf("%d%d%d",&math,&sci,&san);
    printf("Percentage you get out of 100 percent is %d",percentage( math, sci, san));
    return 0;
}
int percentage(int math,int sci,int san){
   
    return ((math + sci + san) / 3);
}

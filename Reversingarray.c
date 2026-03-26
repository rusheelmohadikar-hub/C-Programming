#include<stdio.h>
int main()
{
int array[5],i;
printf("Enter 5 Elements of an Array:\n ");
for(i=0;i<5;i++){
    scanf("%d\n",&array[i]);
}
printf("Entered Elements of an Array :\n");
for(i=0;i<5;i++){
    printf("%d\n",array[i]);
}
printf("Reversed Elements of Array:");
for(i=5;i>=0;--i){
    printf("%d\n",array[i]);
}
return 0;
}


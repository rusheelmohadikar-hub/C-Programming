#include<stdio.h>
struct employee{
    char name[30];
    char department[30];
};
int main(){
    struct employee p1;
    printf("Name of Employee : ");
    scanf("%s",&p1.name);
    printf("Department of Employee: ");
    scanf("%s",&p1.department);
    printf("Detailes: \n");
    printf("Name: %s\n",p1.name);
    printf("Department : %s\n",p1.department);
    return 0;
}
#include<stdio.h>
#include<string.h>
struct company{
    char name, address;
    int phone, noofemployee;
};
int main(){
struct company c1,c2;
    printf("Enter Company Name: ");
    scanf("%s",&c1.name);
    printf("Enter Address: ");
    scanf("%s",&c1.address);
    printf("Enter Phone Number: ");
    scanf("%d",&c2.phone);
    printf("Enter No .of Employee: ");
    scanf("%d",&c2.noofemployee);
    {
    printf("Entered Details:\n ");
    printf("Company : %s\n",c1.name);
    printf("Address: %s\n",c1.address);
    printf("Phone Number:%d\n ",c2.phone);
    printf("No.of Employee:%d\n ",c2.noofemployee);
    }
    return 0;
}
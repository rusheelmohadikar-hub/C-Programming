/*#include<stdio.h>
#include<string.h>

//Structure is a User defined data type.

struct student{       //This is Now our data type.

    char name[100];    // 
    int rollno;        // This are the prperties.
    float cgpa;        //

};

int main(){
    struct student s1;
    s1.rollno = 46;
    s1.cgpa = 8.3;
    //s1.name = "Rusheel"  //As such you cant insert values directly in array. So we have to use some library.
    strcpy(s1.name,"Rusheel");
    printf("Name of Student: %s\n",s1.name);
    printf("Roll No. of Student: %d\n",s1.rollno);
    printf("CGPA of Student: %f\n",s1.cgpa);

    struct student s2;
    strcpy(s2.name,"Pranil");
    s2.rollno = 44;
    s2.cgpa = 9.2;
    printf("Name of Student : %s\n",s2.name);
    printf("Roll no of Student: %d\n",s2.rollno);
    printf("CGPA of Student: %f\n",s2.cgpa);

    struct student s3;
    strcpy(s3.name,"Shashank");
    s3.rollno = 51;
    s3.cgpa = 9.6;
    printf("Name of Student : %s\n",s3.name);
    printf("Roll no of Student: %d\n",s3.rollno);
    printf("CGPA of Student: %f\n",s3.cgpa);

    struct student s4;
    strcpy(s4.name,"Sanchal");
    s4.rollno = 48;
    s4.cgpa = 10;
    printf("Name of Student: %s\n",s4.name);
    printf("Roll no. of Student:%d\n",s4.rollno);
    printf("CGPA of Student: %f\n",s4.cgpa);

    struct student s5;
    strcpy(s5.name,"Dhruv");
    s5.rollno = 34;
    s5.cgpa = 10;
    printf("Name of Student:%s\n",s5.name);
    printf("Roll no. of Student:%d\n",s5.rollno);
    printf("CGPA of Student:%f\n",s5.cgpa);
    return 0;
}*\

/*Write a program to create a structure DATE having members day, month, year & assign 
initial values to that structure.*/

/*#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};
int main(){
    struct date s1;
    s1.day = 23;
    s1.month = 01;
    s1.year = 2006;
    
    printf("The Date is : %d/%d/%d",s1.day,s1.month,s1.year);
    return 0;
}*\

/*#include<stdio.h>
struct itperson{
    char name;
    int age;
    int salary;
};
int main(){
    struct itperson p1,p2;
    printf("Enter Name : ");
    scanf("%s",&p1.name);
    printf("Enter Age: ");
    scanf("%d",&p1.age);
    printf("Enter Salary: ");
    scanf("%d",&p1.salary);
    printf("Enter Name : ");
    scanf("%s",&p2.name);
    printf("Enter Age: ");
    scanf("%d",&p2.age);
    printf("Enter Salary: ");
    scanf("%d",&p2.salary);
    int avg = (p1.salary + p2.salary)/2;
    printf("Average of Salary is: %d",avg);
    return 0;
}*\

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

/*
#include<stdio.h>
struct student{
    char name[20];
    int rank;
};
int main(){
    struct student variable = {"Pranil",1};
    struct student *ptr;
    ptr = &variable;
    printf("Name:%s\n",ptr->name);
    printf("Rank:%d",ptr->rank);
    return 0;
}*/


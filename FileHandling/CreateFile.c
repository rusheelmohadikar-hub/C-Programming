#include<stdio.h>
int main(){
    FILE *file_pointer = NULL;
    //file_pointer = fopen("Rusheel.txt","r");//if i want to open the file in read and file is not present then it will not create a file in c
    file_pointer = fopen("Rusheel.txt","w");//It will create the file named Rusheel.txt
    //If i write on Rusheel.txt and save it now again i run this program the existing file will clear and a brandnew file will be created.
    if(file_pointer == NULL){
        printf("Error while opeaning the file");
    }
    else{
        printf("File opened successfully");
        fclose(file_pointer);
    }
    return 0;
}
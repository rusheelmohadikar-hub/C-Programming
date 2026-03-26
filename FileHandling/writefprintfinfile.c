#include<stdio.h>
int main(){
    int result = -1;
    FILE *File_Pointer = NULL;
    File_Pointer = fopen("Rusheel2.txt","w");
    if(File_Pointer == NULL){
        perror("SOME ERROR OCCCURED");
        return 1;
    }
    result = fprintf(File_Pointer,"Hi Rusheel Here\n");
    printf("result : %d\n",result);
    result = fprintf(File_Pointer,"Hello my name is %s and age is %d","Rusheel Mohadikar",20);
    printf("result : %d\n",result);
    fprintf(stdout,"result : %d",result);//fprintf(fp, ...) → write to file
                                         //fprintf(stdout, ...) → write to screen(stdout - standard output). same as printf("result : %d\n",result)
    return 0;
}
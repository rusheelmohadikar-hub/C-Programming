#include<stdio.h>
int main(){
    FILE *File_Pointer = NULL;
    File_Pointer = fopen("Rusheel.txt","r");
    if(File_Pointer == NULL){
        printf("Some ERROR OCCCURED");
    }
    else{
        int ch = '\0';
        //ch = fgetc(File_Pointer);
        //printf("%d : %c",ch,ch);

        //ch = fgetc(File_Pointer);
        //printf("%d : %c",ch,ch);
        /*while((ch = fgetc(File_Pointer)) !=  EOF){
            printf("%d : %c\n",ch,ch);//If file is empty it will retrun an end of file notation -1.
        }*/
        while((ch = fgetc(File_Pointer)) !=  EOF){
            printf("%c",ch);//If file is empty it will retrun an end of file notation -1.
        }
    }
    fclose(File_Pointer);
    return 0;
}
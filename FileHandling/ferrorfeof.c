#include<stdio.h>
int main(){
    FILE *File_Pointer = NULL;
    //File_Pointer = fopen("Rusheel.txt","r");
    File_Pointer = fopen("Rusheel.txt","w");
    if(File_Pointer == NULL){
        perror("Error Identified");//It gives error by printing this text as well as beside by giving colon it also prints the actual console message.
    }
    else{
        int ch;
        ch = fgetc(File_Pointer);
        putchar(ch);
        /*while((ch = fgetc(File_Pointer)) != EOF){
            putchar(ch);
        }*/
        if(feof(File_Pointer)){// it only execute after moving from last character of file.
            printf("\nFile read is completed!!");
        }
        if(ferror(File_Pointer)){
            printf("Error occured while reading File");//now such error when a file is created through w mode but contents not consist thus it will run.
        }
        clearerr(File_Pointer);//it mainly resets the internal error flags.
        if(ferror(File_Pointer)){
            printf("Error occured while reading File");//now such error when a file is created through w mode but contents not consist thus it will run.
        }
    }
    fclose(File_Pointer);
    return 0;
    //Drawbag of feof(File_Pointer) is that it only prints or perform action when it passes the last character of file.
    //As same EOF flag is not set until last character of file is passed
}
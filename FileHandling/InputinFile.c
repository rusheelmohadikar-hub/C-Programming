#include<stdio.h>
int main(){
    FILE *File_Pointer = NULL;
    File_Pointer = fopen("Rusheel.txt","w");
    char data[] = "Something to do!!";
    if(File_Pointer == NULL){
        printf("Some Error Occur");
    }
    else{
        int i = 0;
        while(data[i] != '\0'){// utilize only '\0' here as "\0" it's a string and '\0' for char.
            printf("%c",fputc(data[i],File_Pointer));
            i++;
        }
        printf("%c",fputc(66,File_Pointer));//we can aslo specify ASCII codes in it as follows: [A(65) to Z(90)] and [a(97) to z(122)]
        fputc('A',File_Pointer);//Always utilize (' ') for character and (" ") for string.
        fputc('B',File_Pointer);
        fclose(File_Pointer);
    }
    return 0;
}
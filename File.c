/*//Code to check file exist or not.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("NewText.exe","r");
    if (fptr == NULL){
        printf("File Does not Exist");
    }
    else{
          fclose(fptr);
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("NewFile.exe","w");
    if (fptr == NULL){
        printf("File Does not exist");
    }
    else{
        printf("File Created Successfully");
    }
    return 0;
}*/


/*Code to Make a New FILE.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("NewText.exe","w"); //If I write means w then a new file will create with the given name.Which will empty.
    if (fptr == NULL){
        printf("File Does not Exist");
    }
    else{
          fclose(fptr);
    }
    return 0;
}*/

//Code to read the character of a file and store it in a variable.
#include<stdio.h>
int main()
{
    FILE *fptr;
    char ch[100];
    fptr = fopen("Text.exe","r");  //IF you want to read integer data then write int instead of char and change the format specifer[%d].
    //fscanf(fptr,"%c",&ch);
    printf("Character is:%c\n",ch);
    fgets(ch,100,fptr);
    fclose(fptr);
    return 0;
}

/*//Code to write in an empty file. Now if i took Text.exe file then it will over write on the previous content of FILE.
#include<stdio.h>
int main(){
    FILE *fptr;
    char ch;
    fptr = fopen("Text.exe","w");
    fprintf(fptr,"M",&ch);
    fprintf(fptr,"a",&ch);
    fprintf(fptr,"n",&ch);
    fprintf(fptr,"g",&ch);
    fprintf(fptr,"o",&ch);
    fclose(fptr);
    return 0;
}*/

//Code to append in a file means to add without overwritting .
/*#include<stdio.h>
int main(){
FILE *fptr;
char ch[100];
fptr = fopen("Text.txt","a");
printf("Enter Your Message: ");
gets(ch);
fprintf(fptr, "%s",ch);
printf("Your message is appended in Text.txt file.");
fclose(fptr);
return 0 ;
}*/

//Another method to read the character of file.

/*#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Text.exe","r");
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    fclose(fptr);
    return 0;
}*/

//Code to write in the file using fputc()
/*#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Text.exe","w");
    fputc('M',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('g',fptr);
    fputc('o',fptr);
    fclose(fptr);
    return 0;
}*/

//Write a code to copy info into another file.
/*#include <stdio.h>
int main() 
{
char ch;
FILE *fptr1,*fptr2;
fptr1 = fopen("Text.txt","r");
fptr2 = fopen("Text2.txt","w");
ch = fgetc(fptr1);
while(ch != EOF)
{
fputc(ch,fptr2);
ch = fgetc(fptr1);
}
 // Closing files
 fclose(fptr2);
 fclose(fptr1);
 return 0;
}*/

/*#include<stdio.h>
int main(){
    FILE * fptr;
    char str1,str2,str3,year;
    fptr = fopen("Text.txt", "r");
    fscanf(fptr, "%s %s %s %d", str1, str2, str3, &year);
    char c = fgetc(fptr);
  
    return 0;
}*/








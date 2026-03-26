#include<stdio.h>
int main(){
    FILE *fp = NULL;
    int  age;
    float weight;
    char name[25];
    fp = fopen("Rusheel1.txt","r");
    if(fp == NULL){
        perror("Error Identified");
        return 1;//“return 1 indicates abnormal termination due to error.”
    }
    else{
        if(fscanf(fp,"%d %f %24[^\n]",&age,&weight,name) == 3){//%24s → reads maximum 24 characters (stops at space, tab, or newline)
                                                               //%24[^\n] → reads up to 24 characters OR until newline (whichever comes first)
          printf("Hello I'm %s age %d and weight %.2f",name,age,weight);// %.2f → prints float value with 2 digits after decimal.
        }else{
            printf("Unable to read three values");
        }
        printf("\n");
        if(fscanf(fp,"%d %f %24[^\n]",&age,&weight,name) == 3){//%24s → reads maximum 24 characters (stops at space, tab, or newline)
                                                               //%24[^\n] → reads up to 24 characters OR until newline (whichever comes first)
          printf("Hello I'm %s age %d and weight %.2f",name,age,weight);// %.2f → prints float value with 2 digits after decimal.
        }else{
            printf("Unable to read three values");
        }

    }
    fclose(fp);
    return 0;
}

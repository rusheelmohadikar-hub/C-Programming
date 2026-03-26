#include <stdio.h>
int main()
{
int a, b, c, d,e,f, g, sum = 0;
int first[10][10], second[10][10], multiply[10][10];
printf("Enter number of rows and columns of first matrix\n");
scanf("%d%d", &a, &b);
printf("Enter elements of first matrix\n");
for (c = 0; c < a; c++){
    for (d = 0; d < b; d++){
        scanf("%d", &first[c][d]);
   }
}
printf("Enter number of rows and columns of second matrix\n");
scanf("%d%d", &e, &f);
if (b != e){
printf("The multiplication isn't possible.\n");
}
else{
printf("Enter elements of second matrix\n");
for (c = 0; c < e; c++){
    for (d = 0; d < f; d++){
        scanf("%d", &second[c][d]);
    }
}
for (c = 0; c < a; c++){
    for (d = 0; d < f; d++){
        multiply[c][d] =0;
        for (g= 0; g < e; g++){
            multiply[c][d] = multiply[c][d]+ first[c][g]*second[g][d];
            }
        }
    }
printf("Product of the matrices:\n");
for (c = 0; c < a; c++) {
    for (d = 0; d < f; d++){
        printf("%d\t", multiply[c][d]);
        
    }
    printf("\n");
  }

}
return 0;

}


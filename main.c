#include <stdio.h>
#include <stdbool.h>
#include "my_mat.h"

int main(){
    int mat[10][10];
    char func;
    int i;
    int j;
    
    while(func != 'D'){
        scanf("%c" ,&func);
        if(func == 'A'){
            A(mat);
        }
        if(func == 'B'){
            scanf("%d" "%d", &i, &j);
            bool x = B(mat,i,j);
            printf("%s", x);
            printf("\n");
        }
        if(func == 'C'){
            scanf("%d" "%d", &i, &j);
            int x = C(mat,i,j);
            printf("%d", x);
            printf("\n");
        }
    }
}

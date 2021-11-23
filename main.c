#include <stdio.h>
#include "my_mat.h"

int main(){
    int mat[10][10];
    char func;
    int i;
    int j;
    
    scanf("%c" ,&func);
    while(func != 'D'){
        if(func == 'A'){
            A(mat);
        }
        if(func == 'B'){
            scanf("%d" "%d", &i, &j);
            bool x = B(mat,i,j);
            printf("%s", x ? "true" : "false");
        }
        if(func == 'C'){
            scanf("%d" "%d", &i, &j);
            printf("%d",C(mat,i,j));
        }
    }
    return 0;
}
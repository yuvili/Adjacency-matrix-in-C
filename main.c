#include <stdio.h>
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
            return B(i,j);
        }
        if(func == 'C'){
            scanf("%d" "%d", &i, &j);
            return C(i,j);
        }
    }
}
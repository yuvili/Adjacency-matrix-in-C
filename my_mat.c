#include<stdio.h>
#include "my_mat.h"

// 0 3 1 0 0 2 0 0 0 0 3 0 1 0 0 0 0 0 0 0 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 5 0 0 0 0 0 0 0 0 0 4 1 1 2 0 0 0 0 0 2 0 0 0 0 0 0 0 0 2 0 0 0 0 0 0 0 5 4 0 0 0 0 2 0 0 0 0 1 0 0 0 0 0 0 0 0 0 1 0 0 2 0 0
// B 6 2    B 6 4   B 2 3   C 0 1   C 1 5   C 7 8   C 1 1   B 1 1   C 5 9   B 5 9   D
// true     false   false     2       4       4       -1     false     -1   false   
int (*pointer)[10];
int mat[10][10];


void def(){
    pointer = mat;
}

int min(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}

void A(){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            scanf("%d" , &mat[i][j]);
        }
    }
    for (int k = 0; k < 10; k++){
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                if ((i != j) && (i!=k) && (j!=k)) {
                    if((mat[i][j] == 0) && (mat[i][k] !=0) && (mat[k][j] != 0)){
                    mat[i][j] =  mat[i][k] + mat[k][j];
                    }
                    else if((mat[i][j] != 0) && (mat[i][k] !=0) && (mat[k][j] != 0)){
                        mat[i][j] = min(mat[i][j] , mat[i][k] + mat[k][j]);
                    }
                    else if((mat[i][j] == 0) && (mat[i][k] ==0) && (mat[k][j] == 0)){
                        mat[i][j] = 0;
                    }
                }
            }
        }
    }
    def();
}

void B(){
    int i;
    int j;
    scanf("%d" "%d", &i, &j);
    printf("%d" , pointer[i][j]);
    if(pointer[i][j] == 0){
        printf("false");
    }
    else{
        printf("true");
    }
}

int C(){
    int i;
    int j;
    scanf("%d" "%d", &i, &j);
    if (pointer[i][j] == 0){
        return -1;
    }
    return pointer[i][j]; 
}

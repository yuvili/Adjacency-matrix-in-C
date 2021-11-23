#include<stdio.h>
#include <stdbool.h>
#include "my_mat.h"

int min(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}

void A(int mat[10][10]){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            scanf("%d" , &mat[i][j]);
        }
    }
}
bool B(int mat[10][10], int i, int j){
    if(mat[i][j] == 0){
        return false;
    }
    return true;
}

int C(int mat[10][10], int i, int j){
    for (int k = 0; k < 10; k++){
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                mat[i][j] = min(mat[i][j] , mat[i][k] + mat[k][j]);
            }
        }
    }
    
    if (!B(mat,i,j)){
        return -1;
    }
    return mat[i][j]; 
}

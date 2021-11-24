#include<stdio.h>
#include "my_mat.h"
 
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
<<<<<<< HEAD
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
=======
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
>>>>>>> 742271c1e3576c5bf857fbb0f514960e953ad86a
        return -1;
    }
    return pointer[i][j]; 
}

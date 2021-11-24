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
    if(pointer[i][j] == 0){
        printf("False");
    }
    else{
        printf("True");
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

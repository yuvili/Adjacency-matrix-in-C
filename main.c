#include <stdio.h>
#include "my_mat.h"

int main(){
char func;
int i;
int j;

while(func != 'D'){
    scanf("%c" ,&func);
    
    if(func == 'A'){
        A();
    }
    if(func == 'B'){
        scanf("%d" "%d", &i, &j);
        B(i,j);
    }
    if(func == 'C'){
        scanf("%d" "%d", &i, &j);
        C(i,j);
    }
}
}
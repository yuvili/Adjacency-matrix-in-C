#include <stdio.h>
#include "my_mat.h"

int main(){
    char func;
    
    while(func != 'D'){
        scanf("%c" ,&func);
        if(func == 'A'){
            A();
        }
        
        if(func == 'B'){
            B();
        }
        
        if(func == 'C'){
            int x = C();
            printf("%d", x);
             printf("\n");
        }
        scanf("%c" ,&func);
    }
    return 0;
}

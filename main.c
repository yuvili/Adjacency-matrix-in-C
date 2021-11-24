#include <stdio.h>
#include "my_mat.h"

int main(){
    char func;
    
    scanf("%c" ,&func);
    while(func != 'D'){
        if(func == 'A'){
            A();
        }
        
        if(func == 'B'){
            B();
        }
        
        if(func == 'C'){
            int x = C();
            printf("%d", x);
        }
        scanf("%c" ,&func);
    }
    return 0;
}

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
<<<<<<< HEAD
            scanf("%d" "%d", &i, &j);
            bool x = B(mat,i,j);
            printf("%s", x);
            printf("\n");
=======
            B();
>>>>>>> 742271c1e3576c5bf857fbb0f514960e953ad86a
        }
        
        if(func == 'C'){
<<<<<<< HEAD
            scanf("%d" "%d", &i, &j);
            int x = C(mat,i,j);
            printf("%d", x);
            printf("\n");
=======
            int x = C();
            printf("%d", x);
>>>>>>> 742271c1e3576c5bf857fbb0f514960e953ad86a
        }
        scanf("%c" ,&func);
    }
    return 0;
}

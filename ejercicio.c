#include <stdio.h>

int main() {
    int numeros[7] = {3,6,9,12,15,18,21};
    int *ptr;
    ptr = &numeros[0];
    
    //Segunda version del codigo para imprimir un puntero hacia un vector
    
    for(int i=0;i<7;i++){
        printf("%d ", numeros[i]);
        printf("%p \n",*ptr);
    }
    return 0;
}
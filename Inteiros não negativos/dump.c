#include <stdio.h>

// SOBRE BIG ENDIAN E LITTLE ENDIAN

// Este programa obtém um valor qualquer
// e exibe, separado por byte, os valores armazenados
// no espaço de memória ocupada pelo valor.

void dump(void *addr, int n){
    unsigned char *p = (unsigned char*) addr;

    while (n--) {
        printf("%p - %02x\n", p, *p);
        // %p: para ponteiro (naturalmente em hexadecimal)
        // %x: para exibir valor em hexadecimal
        p++;
    }
}

int main(){
    int i = 10000; // 4 bytes (int)

    dump(&i, sizeof(i));

    return 0;
}
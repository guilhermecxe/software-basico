#include <ctype.h>
#include <stdio.h>

int string2num(char *s, int b) {
    // Converte string em inteiro
    int a = 0;
    for ( ; *s; s++){ // Caminha na memória enquanto s for diferente de 0 (na tabela ascii, que é o '\0')
        if (*s >= '0' & *s <= '9'){
            a = a*b + (*s - '0'); // Se o caractere for um número, identificamos o número
        }
        else if(*s >= 'a' & *s <= 'z'){
            a = a*b + (*s - 'a' + 10); // Se o caractere for uma letra, identificamos o número correspondente
            // printf("%d\n", a);
        }
        // Para s = "12"
        // Iteração 1: a = 0*10 + ('1' - '0') = 0 + (49 - 48) = 1
        // Iteração 2: a = 1*10 + ('2' - '0') = 10 + (50 - 48) = 10 + 2 = 12
    }
    return a;
}

int main () {
    printf("==> %d\n", string2num("1234", 10));
    printf("==> %d\n", string2num("1234", 10) + 1);
    printf("==> %d\n", string2num("1234", 10) + string2num("1", 10));
    printf("==> %d\n", string2num("325", 8));
    printf("==> %d\n", string2num("af", 16));
    return 0;
}
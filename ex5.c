#include <stdio.h>

int main() {
    int v[4] = {1, 2, 3, 4};

    for(int i = 0; i < 4; i++) {
        printf("Endereço int %d: %p\n", i, (void *)&v[i]);
    }

    printf("\n");

    double d[4] = {1, 2, 3, 4};

    for(int i = 0; i < 4; i++) {
        printf("Endereço double %d: %p\n", i, (void *)&d[i]);
    }

    return 0;
}
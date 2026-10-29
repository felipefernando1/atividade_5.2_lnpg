#include <stdio.h>

int main() {
    char s[50];

    printf("Digite a palavra: ");
    scanf("%49s", s);

    int count = 0;

    for(int i = 0; i < 50; i++) {
        if(s[i] == '\0')
            break;
        count++;
    }
    printf("Quantidade de caracteres: %d\n", count);

    for(int i = 49; i >= 0; i--) {
        printf("%c", s[i]);
    }
    
    printf("\n");
    
    return 0;
}
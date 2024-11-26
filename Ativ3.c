/*Leia uma string e calcule o seu comprimento, sem usar a função strlen.*/

#include <stdio.h>
#include <string.h>

int calcComprimento(char string[]) {
    int comprimento = 0;
    while (string[comprimento] != '\0') {
        comprimento++;
    }
    return comprimento;
}

int main() {
    char string[100];
    
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    int comprimento = calcComprimento(string);
    printf("O comprimento da string eh: %d\n", comprimento);
}

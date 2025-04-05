#include <stdio.h>

int main() {
    // INICIO:
    // DECLARAÇÃO DE VARIAVEIS:
    // i para a primeira estrutura de repetição, j para o FOR e k para do...while:
    int i = 1, j = 1, k = 1;


    // PROCESSAMENTO:
    // Utilizando while para mostrar a movimentação da torre, cinco casas pra direita:
    while (i <= 5)
    {
        i++;
        printf("Torre avançou para direita\n");
    }
    
    // Utilizando FOR para mostrar a movimentação do bispo:
    for (; j <= 5; j++)
    {
        printf("Bispo avançou para cima, direita\n");
    }
    
    // Utilizando DO....WHILE para mostrar a movimentação da rainha:
    do{
        k++;
        printf("Rainha avançou para esquerda\n");
    } while(k <= 8);
    


    // FINAL:
    return 0;
}

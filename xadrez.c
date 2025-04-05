#include <stdio.h>

int main() {
    // INICIO:
    // DECLARAÇÃO DE VARIAVEIS:
    // i para a primeira estrutura de repetição, j para o FOR e k para do...while:
    int i = 1, j = 1, k = 1, m = 0;


    
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
    
    // declaração da variavel local L, dentro do proprio 'for':
    for (int l = 0; l < 1; l++)
    {
        // printf do lado de fora do while:
        printf("Cavalo avançou para ");

        // utilizei o loop while para exibir a palavra 'baixo' que aparece duas vezes:
        while (m <= 1)
        {
            printf("baixo, ");
            m++;
        }
        
        // printf novamente do lado de fora:
        printf("esquerda\n");
        
    }
    
    // FINAL:
    return 0;
}

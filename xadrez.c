#include <stdio.h>

// declarações de procedimentos fora da função principal:
// Procedimento pra torre:
void torre_avanca(int i) {
    // Condição de parada:
    if (i > 5) {
        return;
    }

    printf("Torre avançou para direita\n");
    torre_avanca(i + 1); // condição pra recursividade:
}

// Procedimento pra rainha:
void rainha_avanca(int j){
    // Condição de parada:
    if(j > 8) {
        return;
    }

    printf("Rainha avançou para esquerda\n");
    rainha_avanca(j + 1); // condição pra recursividade:
}



// Inicio da função principal:
int main() {
    // INICIO com variaveis locais declaradas dentro do seu respectivo bloco de comando:

    // PROCESSAMENTO:
    // chamando a função de movimentação da torre e atribuindo um valor inicial:
    torre_avanca(1);

    // Utilizando LOOPS ANINHADOS para mostrar a movimentação do bispo:
    for (int k = 1, l = 1; k <= 5; k++)
    {

        printf("Bispo avançou para cima, ");
        do{
            l++;
            printf("direita");

        } while (l <= 1);
        printf("\n");

    }

    // chamando a função de movimentação da rainha e atribuindo um valor inicial:
    rainha_avanca(1);

    // loop aninhado complexo para a movimentação do cavalo:
    for (int m = 0, o = 0; m < 1; m++)
    {
        // printf do lado de fora do while pra ser executado apenas uma vez:
        printf("Cavalo avançou para ");

        // utilizei o loop while para exibir a palavra 'cima' que aparece duas vezes:
        while (o <= 1)
        {
            printf("cima, ");
            o++;
        }
        
        // printf novamente do lado de fora, para imprimir na tela 'direita' uma única vez:
        printf("direita\n");
        
    }
    
    // FINAL:
    return 0;
}

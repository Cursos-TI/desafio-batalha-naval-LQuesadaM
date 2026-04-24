#include <stdio.h>

#define TAMANHO_TAB 10
#define TAMANHO_NAVIO 3

int main()
{
    // 1. Representação do Tabuleiro
    int tabuleiro[TAMANHO_TAB][TAMANHO_TAB] = {0};

    // 2. Coordenadas dos Navios
    int linhaNavio1 = 2;
    int colInicialNavio1 = 2;

    int linhaInicialNavio2 = 5;
    int colNavio2 = 7;

    // 3. Posicionando os Navios
    for (int i = 0; i < TAMANHO_NAVIO; i++)
    {
        tabuleiro[linhaNavio1][colInicialNavio1 + i] = 3;
    }

    for (int i = 0; i < TAMANHO_NAVIO; i++)
    {
        tabuleiro[linhaInicialNavio2 + i][colNavio2] = 3;
    }

    // --- 4. EXIBINDO O TABULEIRO COM O NOVO FORMATO ---

    // Imprime el título
    printf("  TABULEIRO BATALHA NAVAL\n");

    // Imprime las letras de las columnas con los espacios correctos para alinearlas
    printf("   A B C D E F G H I J\n");

    for (int linha = 0; linha < TAMANHO_TAB; linha++)
    {

        // Imprime el número de la fila (de 1 a 10).
        printf("%2d ", linha + 1);

        for (int coluna = 0; coluna < TAMANHO_TAB; coluna++)
        {
            printf("%d ", tabuleiro[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}
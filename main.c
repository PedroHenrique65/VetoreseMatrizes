#include <stdio.h>

 int main()
{

    int i,j,k1,k2;
    int linhaA,colunaA,linhaB,colunaB;
    printf("MultiplicaÃ§Ã£o de Matrizes A X B \n \n");
    printf("Qauntidade de linhas da Matriz A = ");
    scanf("%d", &linhaA);
    printf("Quantidade de colunas da Matriz A =");
    scanf("%d", &colunaA);
    printf("Quantidade de linhas da Matriz B =");
    scanf("%d", &linhaB);
    printf("Quantidade de colunas da Matriz B =");
    scanf("%d", &colunaB);

    float A[linhaA][colunaA];
    float B[linhaB][colunaB];
    float C[linhaA][linhaB];
    float temp;

    if(colunaA!=linhaB)
    {
        printf("A multiplicaÃ§Ã£o nao pode ser realizada.\n");
        printf("A quantidade de colunas de A e diferente do numero de linhas de B.\n");
        return 0;
    }

    // Carregando Matriz A
    printf(" \n CARREGAMENTO DA MATRIZ A \n \n");
    for(i=0;i<linhaA;i++)
    {
        for(j=0;j<colunaA;j++)
        {
            printf("A[%d][%d] = ",i+1,j+1);
            scanf("%f",&A[i][j]);
        }
    }

    // Carregando Matriz B
    printf("\n CARREGAMENTO DA MATRIZ B \n \n");
    for(i=0;i<linhaB;i++)
    {
        for(j=0;j<colunaB;j++)
        {
            printf("B[%d][%d] = ", i+1, j+1);
            scanf("%f", &B[i][j]);
        }
    }

    // Imprimindo Matriz A

    printf("\n MATRIZ A \n \n");
    for(i=0;i<linhaA;i++)
    {
        for(j=0;j<colunaA;j++)
        {
            if(j!=(colunaA-1))
                printf("%.2f \t", A[i][j]);
            else
                printf("%.2f \n", A[i][j]);
        }
    }
    printf("\n \n");
    system("pause");

    // Imprimindo Matriz B

    printf("\n MATRIZ B \n \n");
    for(i=0;i<linhaB;i++)
    {
        for(j=0;j<colunaB;j++)
        {
            if(j!=(colunaB-1))
                printf("%.2f \t", B[i][j]);
            else
                printf("%.2f \n", B[i][j]);
        }
    }

    for(k1=0;k1<linhaA;k1++)
    {
        for(k2=0;k2<colunaB;k2++)
        {
            temp=0.0;
            for(i=0;i<colunaA;i++)
            {
                temp=temp+A[k1][i]*B[i][k2];
            }
            C[k1][k2]=temp;
        }
    }

    printf("\n \n");
    system("pause");

    printf("\n MATRIZ C = A X B \n \n");

    for(i=0;i<linhaA;i++)
    {
        for(j=0;j<colunaB;j++)
        {
            if(j!=(colunaB-1))
            {
                printf("%.2f \t", C[i][j]);
            }
            else
            {
                printf("%.2f \n", C[i][j]);
            }
        }
    }

int tamL = 5, tamC = 4;
    int l, c, mat[tamL][tamC], trans[tamC][tamL];

    srand(time(NULL));

    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){
            mat[l][c] = rand() % 500;
        }
    }


    for(l = 0; l < linhaA; l++){
        for(c = 0; c < colunaA; c++){
            trans[c][l] = A[l][c];
        }
    }

    printf("\nMatriz transposta de A =\n");
    for(l = 0; l < linhaA; l++){
        for(c = 0; c < linhaA; c++){
            printf("%3d ", trans[l][c]);
        }
        printf("\n");
    }

    for(l = 0; l < linhaB; l++){
        for(c = 0; c < colunaB; c++){
            trans[c][l] = B[l][c];
        }
    }

    printf("Multiplicação pela transposta de B =\n ");
    for(int i=0; i<linhaB; i++){
      for(int j=0; j<colunaB;j++){
        trans[i][j] = A[i][j] * trans[i][j];
      }
    }
    for(l = 0; l < linhaB; l++){
        for(c = 0; c < linhaB; c++){
            printf("%3d ", trans[l][c]);
        }
        printf("\n");
    }
    return 0;
}
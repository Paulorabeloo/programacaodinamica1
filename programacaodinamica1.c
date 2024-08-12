#include <stdio.h>
#include <stdio.h>

typedef struct no
{
    int codigo;
    char nome[30];
} no;
    struct no *A, *B;

int main ()
{
    A = NULL;
    B = NULL;

    printf("Alocando endereço ao Ponteiro A \n");
    A = (no*)malloc(sizeof(no));
    printf("Entre com o codigo \n");
    scanf("%d", &A -> codigo);
    printf("Entre com o nome \n");
    scanf("%s", &A -> nome);

    printf("Alocando endereço de memória ao ponteiro B \n");
    B = (no*)malloc(sizeof(no));
    printf("Entre com o codigo \n");
    scanf("%d", &B -> codigo);
    printf("Entre com o nome \n");
    scanf("%s", &B -> nome);

    A = B;
    printf("%d", A -> codigo);
    printf("%s", A -> nome);
}

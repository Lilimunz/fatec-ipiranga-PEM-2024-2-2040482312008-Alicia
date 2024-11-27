
/* Disciplina: Programaçao Estruturada e Modular
Prof. Carlos Veríssimo                                    
--------------------------------------------------------
Objetivo do Programa: Refatoracao do codigo enviado por email
Data - 27/11/2024                                                
Autora: Alicia Abade Muniz - RA 2040482312008
--------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

// Define a estrutura de um produto, contendo seu ID, nome, quantidade em estoque e preço
typedef struct
{
    int id;
    char nome_produto[50];
    int estoque;
    double preco;
} produto;

// Adiciona um novo produto ao sistema
void adicionar_produto(produto *produtos[], int *cont)
{   // Aloca memória para um novo produto
    produto *novo_produto = (produto *)malloc(sizeof(produto));

    // Solicita os dados do produto ao usuário e verifica se o ID já existe
    printf("\nDigite o id do produto: ");
    scanf("%d", &novo_produto->id);
    for (int  i=0; i < *cont; i++){
        if(novo_produto->id == produtos[i]->id){
            printf("Já tem um produto cadastrado com este id!\n");
            return;
        }
    }
    printf("Digite o nome do produto: ");
    scanf("%s", novo_produto->nome_produto);
    printf("Quantidade em estoque: ");
    scanf("%d", &novo_produto->estoque);
    printf("Digite o preco: ");
    scanf("%lf", &novo_produto->preco);
// Adiciona o novo produto ao vetor de produtos e incrementa o contador
    produtos[*cont] = novo_produto;
    (*cont)++;

    printf("\nProduto de id %d foi criado com sucesso\n", novo_produto->id);
}

// Altera os dados de um produto existente
void alterar_produto(produto *produtos[], int cont)
{
    int ide;
    int achei = 0;
    printf("Digite o id para busca: ");
    scanf("%d", &ide);
    for (int i = 0; i < cont; i++)
    {
        if (ide == produtos[i]->id)
        {
            achei = 1;
            printf("O produto que esta sendo alterado eh: %d\n", produtos[i]->id);

            printf("Digite o novo nome do produto: \n");
            scanf("%s", produtos[i]->nome_produto);
            printf("Digite a quantidade atualizada do produto: \n");
            scanf("%d", &produtos[i]->estoque);
            printf("Digite o preco atualizado do produto: ");
            scanf("%lf", &produtos[i]->preco);

            printf("\nProduto de id %d foi alterado com sucesso\n", ide);

            break;
        }
    }

    if (!achei)
    {
        printf("Produto nao encontrado");
    }
}

// Simula a venda de um produto
void vender_produto(produto *produtos[], int *cont)
{
    int ide;
    int achei = 0;
    int quant;
    double total;

    printf("Digite o id do produto a ser comprado: ");
    scanf("%d", &ide);

    for (int i = 0; i < *cont; i++)
    {
        if (ide == produtos[i]->id)
        {
            achei = 1;
            printf("\nQuantos desse produto voce quer comprar: ");
            scanf("%d", &quant);
            if (quant > produtos[i]->estoque)
            {
                printf("\nNao temos esse numero de produtos disponiveis no momento");
            }
            else
            {
                produtos[i]->estoque -= quant;
                total = produtos[i]->preco * quant;
                printf("\nVoce comprou %d itens de %s\n", quant, produtos[i]->nome_produto);
                printf("Tudo certo! Compra de R$ %.2lf realizada\nVolte sempre!", total);
            }
        }
        break;
    }
    if (!achei)
    {
        printf("Produto nao encontrado");
    }
}

// Remove um produto do sistema
void excluir_produto(produto *produtos[], int *cont)
{
    int ide;
    int achei = 0;

    printf("Digite o id do produto a ser excluido: ");
    scanf("%d", &ide);

    for (int i = 0; i < *cont; i++)
    {
        if (ide == produtos[i]->id)
        {
            achei = 1;
            // Se o produto for encontrado, remove-o do vetor e libera a memória
            free(produtos[i]);
            (*cont)--;
            printf("\nO produto de id %d foi excluido", ide);
            break;
        }
    }
    if (!achei)
    {
        printf("Produto nao encontrado");
    }
}
// Imprime os dados de um produto
void imprimir_produto(produto *produtos)
{
    printf("\nO produto de id %d com nome %s tem:\n", produtos->id, produtos->nome_produto);
    printf("Quantidade: %d\nPreco: R$ %.2lf\n", produtos->estoque, produtos->preco);
}

void consultar_produto(produto *produtos[], int cont)
{
    int ide;
    int achei = 0;
    printf("Digite o id para busca: ");
    scanf("%d", &ide);
    for (int i = 0; i < cont; i++)
    {
        if (ide == produtos[i]->id)
        {
            achei = 1;
            // Se o produto for encontrado, chama a função imprimir_produto
            imprimir_produto(produtos[i]);
            break;
        }
    }
    if (!achei)
    {
        printf("Produto nao encontrado");
    }
}

int main()
{
    produto *produto[100];
    int opcao;
    int cont = 0;

    do
    {
        printf("\n1. Adicionar produto\n");
        printf("2. Consultar produto\n");
        printf("3. Alterar produto\n");
        printf("4. Comprar produto\n");
        printf("5. Excluir produto\n");
        printf("0. Encerrar o programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            adicionar_produto(produto, &cont);
            break;

        case 2:
            consultar_produto(produto, cont);
            break;

        case 3:
            alterar_produto(produto, cont);
            break;

        case 4:
            vender_produto(produto, &cont);
            break;

        case 5:
            excluir_produto(produto, &cont);
            break;

        case 0:
            printf("Programa encerrado!");
            break;

        default:
            printf("A opcao digitada nao existe no momento, tente as ja existentes");
            break;
        }
    } while (opcao != 0);

    return 0;
}
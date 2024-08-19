//Alicia Abade PEM 2-2024- n1-2
int main()
{ 
    float nota_final, notas,soma_notas, maior, menor;
    float vet_notas[100];// Vetor para armazenar as notas
    char materias[][50] = {// Array de strings para armazenar os nomes das matérias
    "raciocinio logico",
    "conceitos de gerenciamento de projetos",
    "lingua inglesa",
    "conceito de metodologia agil",
    "linguagem javascript"};
    int i,N; // i é o índice para o laço e N é o número de notas a serem inseridas
    
    int materias_indice = 0;
    
    while(1) { // Loop infinito que será interrompido quando o usuário inserir 0
        printf("Digite o numero de notas da prova 0 encerra o programa e mostra a nota final: ");
        scanf("%d", &N); // Lê o número de notas que o usuário vai digitar
        if (N == 0){
            break; //sai do loop se o N for igual a 0
        }
        soma_notas = 0;
        maior = -1;  // Inicializa com um valor que não está dentro do intervalo de notas conhecidas
        menor = 11;  // Inicializa o valor com um número que não será alcançado nas notas
        //Garante que nenhuma nota digitada será maior ou menor que as declaradas

        printf("Digite as %d notas (dando enter apos cada uma):\n", N);

        // Leitura das notas
        for (i = 0; i < N; i++) {
            printf("Nota %d: ", i + 1);
            scanf("%f", &notas);
            vet_notas[i] = notas; // Armazena a nota no vetor
          if (notas > maior) { // Atualiza o maior valor se a nota atual for maior
                maior = notas;
            }
            if (notas < menor) {// Atualiza o menor valor se a nota atual for menor
                menor = notas;
            }
            soma_notas = soma_notas + vet_notas[i]; // Acumula a soma das notas
        }
        soma_notas = soma_notas - maior - menor; // Calcula a soma das notas sem o maior e o menor valor
        
        printf("Nota %s = %f\n",materias[materias_indice], soma_notas); // Exibe a nota da matéria atual e a soma
        nota_final= nota_final + soma_notas; // Exibe a nota final acumulada até o momento
        materias_indice= materias_indice + 1; //após a somatória atualiza o indice para a próxima matéria

    printf("Nota final do candidato = %.0f\n", nota_final);
    }
    return 0;
}

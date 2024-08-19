//Alicia Abade PEM 2-2024- n1-2
int main()
{ 
    float nota_final, notas,soma_notas, maior, menor;
    float vet_notas[100];
    char materias[][50] = {"raciocinio logico",
    "conceitos de gerenciamento de projetos",
    "lingua inglesa",
    "conceito de metodologia agil",
    "linguagem javascript"};
    int i,N;
    
    int materias_indice = 0;
    
    while(1) {
        printf("Digite o numero de notas da prova o 0 encerra o programa e mostra a nota final: ");
        scanf("%d", &N);
        if (N == 0){
            break;
        }
        soma_notas = 0;
        maior = -1;  // Inicializa com um valor que não está dentro do intervalo de notas conhecidas
        menor = 11;  

        printf("Digite as %d notas (dando enter apos cada uma):\n", N);

        // Leitura das notas
        for (i = 0; i < N; i++) {
            printf("Nota %d: ", i + 1);
            scanf("%f", &notas);
            vet_notas[i] = notas;
          if (notas > maior) {
                maior = notas;
            }
            if (notas < menor) {
                menor = notas;
            }
            soma_notas = soma_notas + vet_notas[i];
        }
        soma_notas = soma_notas - maior - menor;
        
        printf("Nota %s = %f\n",materias[materias_indice], soma_notas);
        nota_final= nota_final + soma_notas;
        materias_indice= materias_indice + 1;

    printf("Nota final do candidato = %.0f\n", nota_final);
    }
    return 0;
}

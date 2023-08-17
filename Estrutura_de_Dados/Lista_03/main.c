#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void limpaBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void exemplo1() {
    char *x;

    //malloc e calloc permite alterar o tamanho dinâmicamente das variáveis
    //x = malloc(sizeof(int)); //Recebe apenas um elemento e o tamanho de alocação de memória
    x = calloc(1, sizeof(char)); //Recebe um ou mais elementos e o tamanho de alocação de memória de cada elemento

    if(x) {
        printf("Memória alocada com sucesso!\n");
        printf("x: %c\n", *x);
        *x = 'H';
        printf("x: %c\n", *x);
    } else {
        printf("Erro ao alocar memória!\n");
    }
}

void exemplo2() {
    int tam, *vet;

    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tam);
    srand(time(NULL));

    vet = malloc(sizeof(int) * tam);

    if(vet) {
        printf("Memória alocada com sucesso!\n");
        for (int i = 0; i < tam; ++i) {
            *(vet + i) = rand() % 100;
        }
        for (int i = 0; i < tam; ++i) {
            printf("%d ", *(vet + i));
        }
        printf("\n");
    } else {
        printf("Erro ao alocar memória!\n");
    }
}

//Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de
//memória. Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são
//ímpares.
void Exercicio1() {
    int tam, *vet;

    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tam);

    vet = malloc(sizeof(int) * tam);

    if(vet) {
        int totalPares = 0, totalImpares = 0;
        printf("Memória alocada com sucesso!\n");
        for (int i = 0; i < tam; ++i) {
            printf("Insira o valor do item de posição %d:\n", i);
            scanf("%d", vet + i);
        }
        printf("Dados inseridos:\n");
        for (int i = 0; i < tam; ++i) {
            printf("%d ", *(vet + i));
        }
        for (int i = 0; i < tam; ++i) {
            if (*(vet + i) % 2 == 0) {
                totalPares++;
            } else {
                totalImpares++;
            }
        }
        printf("\n");
        printf("Total de números pares: %d\n", totalPares);
        printf("Total de números pares: %d\n", totalImpares);
        printf("\n");
    } else {
        printf("Erro ao alocar memória!\n");
    }
}


//Faça um programa que receba do usuário o tamanho de uma string e chame uma função para alocar
//dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo dessa string. O programa
//imprime a string sem suas vogais.
void alocaString(char *ptr) {
    int i;
    for (i = 0; ptr[i] != '\0'; i++) {
        if (ptr[i] != 'A' && ptr[i] != 'a' && ptr[i] != 'E' && ptr[i] != 'e' && ptr[i] != 'I' && ptr[i] != 'i' && ptr[i] != 'O' && ptr[i] != 'o' && ptr[i] != 'U' && ptr[i] != 'u') {
            printf("%c", ptr[i]);
        }
    }
}

void Exercicio2() {
    char *x;
    int tam;
    printf("Informe o tamanho da string:\n");
    scanf("%i", &tam);
    x = (char *) malloc(tam * sizeof(char));
    if (x == NULL) {
        exit(1);
    }
    printf("Informe a palavra: ");
    scanf("%s\n", x);
    alocaString(x);
    free(x);
}


//Faça um programa que leia um número N e:
//Crie dinamicamente e leia um vetor de inteiro de N posições;
//Leia um número inteiro X e conte e mostre os múltiplos desse número que existem no vetor.
void Exercicio3() {

}

//Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6 números do seu
//bilhete. O programa então compara quantos números o jogador acertou. Em seguida, ele aloca espaço para
//um vetor de tamanho igual à quantidade de números corretos e guarda os números corretos nesse vetor.
//Finalmente, o programa exibe os números sorteados e os seus números corretos.
void Exercicio4() {

}

// Faça um programa que leia uma quantidade qualquer de números armazenando-os na memória e pare
//a leitura quando o usuário entrar um número negativo. Em seguida, imprima o vetor lido. Use a função
//REALLOC.
void Exercicio5() {

}

//Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensões definidas pelo
//usuário e a leia. Em seguida, implemente uma função que receba um valor, retorne 1 caso o valor esteja na
//matriz ou retorne 0 caso não esteja na matriz
void Exercicio6() {

}

//Faça um programa que leia dois números N e M e:
//? Crie e leia uma matriz de inteiros N x M;
//? Localize os dois maiores números de uma matriz e mostre a linha e a coluna onde estão.
void Exercicio7() {
    int **mat, M, N, maior1, maior2, maior1L, maior1C, maior2L, maior2C;
    printf("Insira o tamanho da matriz linha/coluna\n");
    scanf("%i%i", &M, &N);
    mat = (int *) malloc(M * sizeof(int)); //Linhas
    for (int i = 0; i < M; ++i) {
        mat[i] = (int *) malloc(N * sizeof (int)); //Colunas
    }
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("Insira o valor da linha: %d e coluna: %d\n", i, j);
            scanf("%i", &mat[i][j]);
            if(i == 0 && j == 0) {
                maior1 = mat[i][j];
                maior1L = i;
                maior1C = j;
                maior2 = mat[i][j] - mat[i][j];
            } else if(mat[i][j] > maior1) {
                maior1 = mat[i][j];
                maior1L = i;
                maior1C = j;
                printf("maior1: %d\n", maior1);
            } else if (mat[i][j] > maior2) {
                maior2 = mat[i][j];
                maior2L = i;
                maior2C = j;
                printf("maior2: %d\n", maior2);
            }
        }
    }

    /*for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == 0 && j == 1) {
                maior2 = mat[i][j];
                maior2L = i;
                maior2C = j;
            }
            if (maior2 < mat[i][j] && mat[i][j] != maior1) {
                maior2 = mat[i][j];
            }
        }
    }*/

    printf("Maior valor %i\n", maior1);
    printf("Segundo maior valor %i\n", maior2);
    free(mat);
}

//Crie um programa que declare uma estrutura (struct) para o cadastro de alunos.
//a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e ano de
//nascimento;
//b) Ao início do programa, o usuário deverá informar o número de alunos que serão armazenados;
//c) O programa deverá alocar dinamicamente a quantidade necessária de memória para armazenar
//os registros dos alunos;
//d) O programa deverá pedir ao usuário que entre com as informações dos alunos;
//e) Ao final, mostrar os dados armazenados e liberar a memória alocada.
void Exercicio8() {

}

//Considere um cadastro de produtos de um estoque, com as seguintes informações para cada produto:
//Código de identificação do produto: representado por um valor inteiro
//Nome do produto: com até 50 caracteres
//Quantidade disponível no estoque: representado por um número inteiro
//Preço de venda: representado por um valor real
//a) Defina uma estrutura, denominada produto, que tenha os campos apropriados para guardar as
//informações de um produto;
//b) Aloque inicialmente memória para 1 produto e deixe a critério do usuário (realloc) a inserção de
//mais unidades do mesmo;
//c) Encontre o produto com o maior preço de venda;
//d) Encontre o produto com a maior quantidade disponível no estoque
struct produto {
    int codigo, quantidade;
    char nome[50];
    float valor;
};

void Exercicio9() {
    int n = 1;
    struct produto *prod;
    char op;
    prod = (struct produto *) malloc(n * sizeof(struct produto));
    if (prod == NULL) {
        exit(1);
    }
    do {
        printf("Informe o nome do produto:\n");
        fflush(stdin);
        gets(prod[n - 1].nome);
        printf("Informe código:\n");
        scanf("%i", &prod[n - 1].codigo);
        printf("Deseja inserir novo produto? s/n\n");
        scanf("%s", &op);

        if (op == 'S' || op == 's') {
            n++;
            prod = (struct produto *) realloc(prod, n * sizeof(struct produto));
        }
    } while (op == 'S' || op == 's');

    for (int i = 0; i < n; ++i) {
        printf("%s, %i\n", prod[i].nome, prod[i].codigo);
    }
}

//
void desalocamento() {
    int *x, n, flag = 1, exclusao, auxiliar;
    char op;
    x = (int*) malloc(n * sizeof(int));
    if (x == NULL) {
        exit(1);
    }

    do {
        if (flag == 1) {
            printf("Insira valor:\n");
            scanf("%i", &x[n - 1]);
        }
        printf("Deseja inserir um novo valor ou excluir? (i/e)");
        scanf("%s", &op);
        if (op == 'I' || op == 'i') {
            n++;
            flag = 1;
            x = (int *) realloc(x, n * sizeof(int));
        } else if (op == 'E' || op == 'e') {
            printf("Qual valor deseja excluir?\n");
            scanf("%d", &exclusao);
            for (int i = 0; i < n; ++i) {
                if (x[i] == exclusao) {
                    if(i == n-1) {
                        n--;
                        x = (int *) realloc(x, n * sizeof(int));
                    } else {
                        auxiliar = x[i];
                        x[i] = x[n=1];
                        x[n - 1] = auxiliar;
                        n--;
                        x = (int *) realloc(x, n * sizeof(int));
                    }
                }
            }
            flag = 0;
        }
    } while (op == 'I' || op == 'i' || op == 'E' || op == 'e');

    for (int i = 0; i < n; ++i) {
        printf("%i ", x[i]);
    }
}

//Main
int main() {
    setlocale(LC_ALL,"");
    int running = 1;

    while (running == 1) {
        int selecao = 0;
        printf("Digite o número do exercício que deseja resolver (1 a 9):");
        scanf("%i", &selecao);

        switch (selecao) {
            case 1:
                Exercicio1();
                break;
            case 2:
                Exercicio2();
                break;
            case 3:
                Exercicio3();
                break;
            case 4:
                Exercicio4();
                break;
            case 5:
                Exercicio5();
                break;
            case 6:
                Exercicio6();
                break;
            case 7:
                Exercicio7();
                break;
            case 8:
                Exercicio8();
                break;
            case 9:
                Exercicio9();
                break;
            case 10:
                desalocamento();
                break;
            default:
                return running = 0;
        }
    }
}

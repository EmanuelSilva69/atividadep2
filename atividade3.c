#include <stdio.h>
#include <string.h>
#include <math.h>

/**************************************************************************
*                                                                         *
*           Universidade Federal do Maranhão                              *
*       Departamento de Engenharia da Computação                          *
*                                                                         *
*  Author: Professor Doutor Thales Levi Azevedo Valente                  *
*                                                                         *
*  Description: Material de Ensino - Laboratório de Programação C         *
*                                                                         *
*  Date: 05-11-2023                                                       *
*                                                                         *
* Este material fornece uma introdução profunda às operações com matrizes *
* 3x3 em C, com foco nas funções para manipulação e análise de matrizes.  *
*                                                                         *
* Conteúdos do Material:                                                  *
*   1. Soma de Matrizes 3x3                                               *
*   2. Transposição de Matriz 3x3                                         *
*   3. Multiplicação de Matrizes 3x3                                      *
*   4. Verificação de Matriz Identidade 3x3                               *
*   5. Cálculo do Traço de uma Matriz 3x3                                 *
*   6. Diagnóstico Médico Assistido por Rede Neural                       *
*   7. Simulação de Circuitos Elétricos                                   *
*   8. Transformações Geométricas em Sistemas de Automação                *
*                                                                         *
* Inicie o código abaixo para começar a exploração.                       *
*                                                                         *
***************************************************************************/


/* 
   Enunciado: Implemente uma função que recebe duas matrizes 3x3 e retorna a soma delas.
   Exemplo: 
   Entrada: 
   Matriz A:
   1 2 3
   4 5 6
   7 8 9
   Matriz B:
   9 8 7
   6 5 4
   3 2 1
   Saída: 
   10 10 10
   10 10 10
   10 10 10
*/
void soma_matrizes_3x3() {
    int matriz1 [3] [3];
  int matriz2 [3] [3];
  int linha, coluna;
int soma[3][3];
  for (linha=0;linha<3;linha++){
    for(coluna=0;coluna<3;coluna++){
      scanf("%d",&matriz1[linha][coluna]);
    }
  }
  for (linha=0;linha<3;linha++){
    for(coluna=0;coluna<3;coluna++){
      scanf("%d",&matriz2[linha][coluna]);
    }
  }
  for (linha=0;linha<3;linha++){
    for(coluna=0;coluna<3;coluna++){
      soma[linha][coluna]=matriz1[linha][coluna] + matriz2[linha][coluna];
    }
  }
  for (linha=0;linha<3;linha++){
    for(coluna=0;coluna<3;coluna++){
      printf("%d ",soma[linha][coluna]);
    }
    printf("\n");
  }
}

/* 
   Enunciado: Implemente uma função que recebe uma matriz 3x3 e retorna sua transposta.
   Exemplo: 
   Entrada: 
   1 2 3
   4 5 6
   7 8 9
   Saída: 
   1 4 7
   2 5 8
   3 6 9
*/
void transposicao_matriz_3x3() {
    // Implemente sua solução aqui
    int matriz1 [3] [3];
    int matriz2 [3] [3];
    int linha, coluna;
  int soma[3][3];
    for (linha=0;linha<3;linha++){
      for(coluna=0;coluna<3;coluna++){
        scanf("%d",&matriz1[linha][coluna]);
      }
    }
  for (linha=0;linha<3;linha++){
    for(coluna=0;coluna<3;coluna++){
      printf("%d ",matriz1[coluna][linha]);
    }
    printf("\n");
  }
}

/* 
   Enunciado: Implemente uma função que multiplica duas matrizes A e B 3x3.
   Exemplo: 
   Entrada: 
   Matriz A:
   1 0 2
   -1 3 1
   0 3 -1
   Matriz B:
   3 1 2
   2 1 1
   1 0 -1
   Saída: 
   5 1 0
   4 2 2
   3 3 2
*/
void multiplicacao_matrizes_3x3() {
    // Implemente sua solução aqui    
  int matriz1 [3] [3];
    int matriz2 [3] [3];
    int linha, coluna;
  int mult[3][3]={0};
    for (linha=0;linha<3;linha++){
      for(coluna=0;coluna<3;coluna++){
        scanf("%d",&matriz1[linha][coluna]);
      }
    }
    for (linha=0;linha<3;linha++){
      for(coluna=0;coluna<3;coluna++){
        scanf("%d",&matriz2[linha][coluna]);
      }
    }
    for (linha=0;linha<3;linha++){
      for(coluna=0;coluna<3;coluna++){
        for(int k = 0;k<3;k++){
          mult[linha][coluna]+=matriz1[linha][k]*matriz2[k][coluna];
        }
      }
    }
    for (linha=0;linha<3;linha++){
      for(coluna=0;coluna<3;coluna++){
        printf("%d ",mult[linha][coluna]);
      }
      printf("\n");
    }
}

/* 
   Enunciado: Implemente uma função que verifica se uma dada matriz 3x3 é uma matriz de identidade.
   Exemplo: 
   Entrada: 
   1 0 0
   0 1 0
   0 0 1
   Saída: 
   Identidade
*/
void verifica_matriz_identidade_3x3() {
  int matriz1 [3] [3];
    int matriz2 [3] [3];
    int linha, coluna;
  int n=0;
    for (linha=0;linha<3;linha++){
      for(coluna=0;coluna<3;coluna++){
        scanf("%d",&matriz1[linha][coluna]);
      }
    }
  for (linha=0;linha<3;linha++){
    for(coluna=0;coluna<3;coluna++){
      if(coluna==linha && matriz1[linha][coluna] != 1){
       n++;
      }
      if(coluna!=linha && matriz1[linha][coluna] != 0){
        n++; 
      }
    }
  }
  if(n==0){
    printf("Identidade\n");
  }
  else{
    printf("Nao Identidade\n");
  }
  
}

/* 
   Enunciado: Implemente uma função que calcula o traço (soma dos elementos da diagonal principal) de uma matriz 3x3.
   Exemplo: 
   Entrada: 
   1 2 3
   4 5 6
   7 8 9
   Saída: 
   15
*/
void calculo_traco_matriz_3x3() {
  int matriz1 [3] [3];
    int matriz2 [3] [3];
    int linha, coluna,soma=0;
  int n=0;
    for (linha=0;linha<3;linha++){
      for(coluna=0;coluna<3;coluna++){
        scanf("%d",&matriz1[linha][coluna]);
      }
    }
  for(int k=0;k<3;k++){
    soma=soma+matriz1[k][k];
  }
  printf("%d",soma);
}

/* 
   Enunciado: Implemente uma função que processa sinais vitais usando uma rede neural com pesos pré-definidos e classifica a saída.
   Exemplo: 
   Entrada: 
   Sinais vitais: [70, 120, 98]
   Pesos: [[0.2, 0.8, -0.5], [0.7, 0.1, 0.3], [0.4, -0.2, 0.5]]
   Saída esperada nos comentários: 
   [0.88]
   [0.64]
   [0.62]
*/
void diagnostico_medico_assistido() {
  float sinais_vitais[3] = {70, 120, 98}; // Valores de exemplo
    float pesos[3][3] = {{0.2, 0.8, -0.5}, {0.7, 0.1, 0.3}, {0.4, -0.2, 0.5}};
    float resultado[3]={0};
  int linha,coluna;

    for(coluna=0;coluna<3;coluna++){
      for(int k = 0;k<3;k++){
        resultado[coluna]+=sinais_vitais[k]*pesos[k][coluna];
      }
    }
  for(coluna=0;coluna<3;coluna++){
    printf("%.2f ",resultado[coluna]);
  }
  printf("\n");
}

/* 
   Enunciado: Implemente uma função que simula as tensões em um circuito elétrico dadas as resistências e correntes.
   Exemplo: 
   Entrada: 
   Correntes: [0.5, 0.3, 0.4]
   Resistências: [[5, 0, 0], [0, 10, 0], [0, 0, 15]]
   Saída esperada nos comentários: 
   [2.50]
   [3.00]
   [6.00]
*/
void simulacao_circuito_eletrico() {
    float correntes[3] = {0.5, 0.3, 0.4}; // Valores de exemplo
    float resistencias[3][3] = {{5, 0, 0}, {0, 10, 0}, {0, 0, 15}};
    float tensoes[3]={0};
  int linha,coluna;
    for(coluna=0;coluna<3;coluna++){
      for(int k = 0;k<3;k++){
        tensoes[coluna]+=correntes[k]*resistencias[k][coluna];
      }
    }
  for(coluna=0;coluna<3;coluna++){
    printf("%.2f ",tensoes[coluna]);
  }
}

/* 
   Enunciado: Implemente uma função que aplica transformações geométricas a um ponto no espaço.
   Exemplo: 
   Entrada: 
   Ponto: [1, 2, 3]
   Transformações: Rotação, Translação, Escala (matrizes fornecidas)
   Saída esperada nos comentários: 
   [4.00]
   [5.00]
   [6.00]
*/
void transformacoes_geometricas() {
float ponto[3] = {1, 2, 3}; // Valores de exemplo
  float rotacao[3][3] = {{0, -1, 0}, {1, 0, 0}, {0, 0, 1}};
  float translacao[3][3] = {{1, 0, 1}, {0, 1, 1}, {0, 0, 1}};
  float escala[3][3] = {{2, 0, 0}, {0, 2, 0}, {0, 0, 2}};
  float temp[3], resultado[3]={0};

  // Aplica rotação
int linha,coluna;
  for(coluna=0;coluna<3;coluna++){
    for(int k = 0;k<3;k++){
      resultado[coluna]+=ponto[k]*rotacao[k][coluna];
    }
  }

for (int i=0;i<3;i++){
temp[i]=resultado[i];
}
float resultado2[3]={0};
  // Aplica translação
for(coluna=0;coluna<3;coluna++){
    for(int k = 0;k<3;k++){
      resultado2[coluna]+=resultado[k]*translacao[k][coluna];
    }
  }
for (int i=0;i<3;i++){
temp[i]=resultado[i];
}
  float resultado3[3]={0};
  // Aplica escala
for(coluna=0;coluna<3;coluna++){
    for(int k = 0;k<3;k++){
      resultado3[coluna]+=resultado2[k]*escala[k][coluna];
    }
  }
for(coluna=0;coluna<3;coluna++){
  printf("%.2f ",resultado3[coluna]);
}
}

// Função main
int main() {
    char function_name[100];
    scanf("%s", function_name);

    if (strcmp(function_name, "soma_matrizes_3x3") == 0) {
        soma_matrizes_3x3();
    } else if (strcmp(function_name, "transposicao_matriz_3x3") == 0) {
        transposicao_matriz_3x3();
    } else if (strcmp(function_name, "multiplicacao_matrizes_3x3") == 0) {
        multiplicacao_matrizes_3x3();
    } else if (strcmp(function_name, "verifica_matriz_identidade_3x3") == 0) {
        verifica_matriz_identidade_3x3();
    } else if (strcmp(function_name, "calculo_traco_matriz_3x3") == 0) {
        calculo_traco_matriz_3x3();
    } else if (strcmp(function_name, "diagnostico_medico_assistido") == 0) {
        diagnostico_medico_assistido();
    } else if (strcmp(function_name, "simulacao_circuito_eletrico") == 0) {
        simulacao_circuito_eletrico();
    } else if (strcmp(function_name, "transformacoes_geometricas") == 0) {
        transformacoes_geometricas();
    }

    return 0;
}
#include <stdio.h>

int main() {
    //declaração de variaveis
    int tamanhoSala, qntDose;

    printf("João Pedro Domingues\n");
    printf("Sistema de informação de processos de vacinação de uma clinica médica\n\n");

    //solicitar nome, tamanho da sala e quantidade de doses disponiveis

    printf("------Seja bem vindo a Clinica X------\n");
    printf("Por favor, informe o tamanho da sala de triagem: \n");
    scanf("%d", &tamanhoSala);
    printf("Informe a quantidade de dose disponiveis: \n");
    scanf("%d", &qntDose);

    return 0;
}
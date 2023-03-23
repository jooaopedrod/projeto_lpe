#include <stdio.h>

int main() {
    //declaração de variaveis
    int tamanhoSala, qntDose, opcaoMenuPrincipal, opcaoMenuRelatorio, flag;

    printf("João Pedro Domingues\n");
    printf("Sistema de informação de processos de vacinação de uma clinica médica\n\n");

    //solicitar nome, tamanho da sala e quantidade de doses disponíveis

    printf("------Seja bem vindo a Clinica X------\n");
    printf("Por favor, informe o tamanho da sala de triagem: \n");
    scanf("%d", &tamanhoSala);
    printf("Informe a quantidade de dose disponíveis: \n");
    scanf("%d", &qntDose);

    flag = 0;

    do {
        printf("Que menu você deseja acessar?\n");
        printf("[1] - Cadastrar interessado\n");
        printf("[2] - Confirmar imunização\n");
        printf("[3] - Exibir fila em triagem\n");
        printf("[4] - Relatório\n");
        printf("[5] - Encerrar\n");

        scanf("%d", &opcaoMenuPrincipal);

        switch (opcaoMenuPrincipal) {
            case 1:
                printf("Pessoa cadastrada\n");
                break;
            case 2:
                printf("Imunização Confirmada");
                break;
            case 3:
                printf("Fila de triagem\n");
                break;
            case 4:
                printf("Relatório");
                printf("Que relatório gostaria de acessar?\n");
                printf("[1] - Quantidade de doses aplicadas e doses disponíveis\n");
                printf("[2] - Relação de pessoas imunizadas\n");
                printf("[3] - Relação de pessoas cadastradas na fila de espera e fora da triagem\n");
                printf("[4] - Gerar arquivo para impressão (com todas as informações de A, B e C)\n");
                printf("[5] - Voltar ao menu anterior\n");

                scanf("%d", &opcaoMenuRelatorio);

                switch (opcaoMenuRelatorio) {
                    case 1:
                        printf("Quantidade de doses aplicadas e disponiveis\n");
                        break;
                    case 2:
                        printf("Pessoas imunizadas\n");
                        break;
                    case 3:
                        printf("Pessoas cadastradas na fila de espera e fora da triagem\n");
                        break;
                    case 4:
                        printf("Relatório para impressão\n");
                        break;
                    case 5:
                        flag = 1;
                        printf("Saindo...\n");
                        break;
                    default:
                        flag = 1;
                        printf("Opção Invalida\n");
                        break;
                }
                break;
            case 5:
                flag = 0;
                printf("Saindo...\n");
                break;
            default:
                flag = 1;
                printf("Opção invalida\n");
                break;
        }
    } while (flag == 1);
    return 0;
}
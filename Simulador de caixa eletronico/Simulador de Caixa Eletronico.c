#include <stdio.h>

int main() {
    double saque, deposito, trasferencia;
    double saldo_total = 500.00;
    char login = 'S';  
    int opcao;

    printf("Deseja entrar ? [S/N]\n");
        scanf(" %c", &login);  

    printf("BEM VINDO AO BANCO UCB !!!\n");
                printf("---------------------------\n");
                
    while (login == 'S' || login == 's') {  
        
        if (login == 'S' || login == 's') {
            
            printf("\n[1]- SAQUE\n");
            printf("[2]- TRASFERENCIA\n");
            printf("[3]- DEPOSITO\n");
            printf("[4]- SALDO ATUAL\n");
            scanf("%d", &opcao);

            switch (opcao) {
                case 1:
                    printf("Quanto voce deseja sacar? ");
                    scanf("%lf", &saque);

                    if (saque <= saldo_total) {
                        saldo_total -= saque;
                        printf("Saque feito com sucesso\n");
                    } else {
                        printf("Saldo insuficiente\n");
                    }
                    break;

                case 2:
                    printf("Quanto voce deseja Transferir? ");
                    scanf("%lf", &trasferencia);

                    if (trasferencia <= saldo_total) {
                        saldo_total -= trasferencia;
                        printf("Transferencia feita com sucesso\n");
                    } else {
                        printf("Saldo insuficiente\n");
                    }
                    break;

                case 3:
                    printf("Quanto voce deseja depositar? ");
                    scanf("%lf", &deposito);
                    saldo_total += deposito;
                    printf("Deposito feito com sucesso\n");
                    break;

                case 4:
                    printf("Seu saldo atual e %.2lf\n", saldo_total);
                    break;

                default:
                    printf("Opcao invalida\n");
                    break;
            }
        }

        printf("\nDeseja continuar ? [S/N]\n");
        scanf(" %c", &login);  
    }

    printf("Obrigado por usar o banco UCB. Ate a proxima!\n");
    return 0;
}

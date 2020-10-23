#include <stdio.h>
#include <stdlib.h>


int main (void){
    int cargo,codca,codju,codgi,codra,codigo;

    codca=1234;
    codju=872;
    codgi=2055;
    codra=136;

    printf("\nSICA40 - Sistema Industrial para Controle de Acesso (versao de teste)");
    printf("\nAproxime seu cartao para realizar a autenticacao (selecione o tipo de usuario, digite seu codigo de acesso e pressione enter)...");
    printf("\nQual seu cargo? \n1- Operador \n2-Supervisor\n");
    scanf("%d", &cargo);
 
    switch (cargo)
    {
    case 1:
        printf("\nQual seu codigo de acesso?");
        scanf("%d",&codigo);

        if (codigo==codca){       
            printf("\nLiberado para ajustes e configuracoes.");
            printf("\nUsuario: Carlos Souza");
            printf("\nMaquina liberada para acesso presencial.\n\n");
            if (codigo<=500){
                codca=(codigo+10);
                printf("Senha gravada com sucesso, sua nova senha e %d\n",codca);
            } else{
                codca=(codigo-10);
                printf("Senha gravada com sucesso, sua nova senha e %d\n",codca);
            }
            
        }else if (codigo==codju) {
                     printf("\nLiberado para ajustes e configuracoes.");
            printf("\nUsuario: Julia Silveira");
            printf("\nMaquina liberada para acesso presencial.\n\n");
            if (codigo<=500){
                codju=(codigo+10);
                printf("Senha gravada com sucesso, sua nova senha e %d\n",codju);
            } else{
                codju=(codigo-10);
                printf("Senha gravada com sucesso, sua nova senha e %d\n",codju);
            }
        } else{
            printf("Codigo de acesso invalido, voce nao esta autorizado a acessar a maquina.");
        }
        break;

            case 2:
            printf("\nQual seu codigo de acesso?");
            scanf("%d",&codigo);

        if (codigo==codgi){       
            printf("\nLiberado para ajustes, configuracoes e desligamento.");
            printf("\nUsuario: Giovane Andrade");
            printf("\nMaquina liberada para acesso presencial.\n\n");
            if (codigo<=500){
                codgi=(codigo+10);
                printf("Senha gravada com sucesso, sua nova senha e %d\n",codgi);
            } else{
                codgi=(codigo-10);
                printf("Senha gravada com sucesso, sua nova senha e %d\n",codgi);
            } 
            
        }else if (codigo==codra) {
                     printf("\nLiberado para ajustes, configuracoes e desligamento.");
            printf("\nUsuario: Rafael Dias");
            printf("\nMaquina liberada para acesso presencial.\n\n");
            if (codigo<=500){
                codra=(codigo+10);
                printf("Senha gravada com sucesso, sua nova senha e %d\n",codra);
            } else{
                codra=(codigo-10);
                printf("Senha gravada com sucesso, sua nova senha e %d\n",codra);
            }


        } else{
            printf("Codigo de acesso invalido, voce nao esta autorizado a acessar a maquina.");
        }

    default:
        printf("Opcao invalida.");
        break;
    }
system ("pause");
return 0;
}

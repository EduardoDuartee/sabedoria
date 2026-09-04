#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//=============Geral=================
char produto[50];
char codigodoproduto[50];
char nomedoOperador[10];

int area;
int codigodeAtivacao;
int dia = 1;
int quantidadedoProduto;
int atividade;
//======================================

//=============Partes dos Quimicos=================

int quantdePalletsQ = 10;
int VagasQ1 = 2; 
int VagasQ2 = 5; 
int VagasQ3 = 3;

//=============Fim - partes dos Quimicos=================



//=============Partes dos Utensilhos=================

int quantdePalletsU = 10;
int VagasU1 = 2; 
int VagasU2 = 5; 
int VagasU3 = 3;

//=============Fim - partes dos Utensilhos=================

//=============Partes dos Descartaveis=================

int quantdePalletsD = 10;
int VagasD1 = 2; 
int VagasD2 = 5; 
int VagasD3 = 3;

//=============Fim - partes dos Descartaveis=================

FILE *Armazenamento;

void armazem()
{
    printf("\n\n<==== Bem - Vindo Ao Sistema de Armazenagem ====>");
    printf("\nQual nome do operador?");
    scanf("%s", nomedoOperador);
    printf("\nQual é sua senha de Liberação de Tarefa?:");
    scanf("%d", &codigodeAtivacao);

    if (codigodeAtivacao == 1010)
    {
        printf("\n\n==== Acesso Permitido ====");
        printf("\nAcesso de:%s | Dia %d", nomedoOperador, dia);

        printf("\n1 - Carga de Produtos Quimicos esperando para Armazenar");
        printf("\n2 - Carga de Utensilhos Esperando para Armazenar");
        printf("\n3 - Carga de Descartaveis PAra Armazenar");
        printf("\nQual Atividade vaii  escolher?:");
        scanf("%d", &atividade);

            switch (atividade)
            {
            case 1:
              quimicos();
            break;
            
            case 2:
              utensilhos();
            break;

            case 3:
                descartaveis();
            break;
            
            default:
            break;
            }
        
        

    }
    else
    {
        printf("\nAcesso Negado");
        printf("\nVoltando ao Inicio");
        armazem();
    }



}

void quimicos()
{
    printf("\nAcesso de:%s | Dia %d", nomedoOperador, dia);
    printf("\nSetor: Quimicos");
    printf("\nvagas Disponiveis no Setor:10");

        while (quantdePalletsQ >= 0)
        {
            printf("\n0 terreo do Setor %d", VagasQ1);
            printf("\n1 andar do Setor %d", VagasQ2);
            printf("\n2 andar do Setor %d", VagasQ3);
            printf("\nQual Area voce deseja?");
            scanf("%d", &area);
            switch (atividade)
            {
                case 1:
                    printf("\nvaga: %d", VagasQ1);
                    printf("Vaga Ocupada com sucesso");

                    VagasQ1 = VagasQ1 - 1;

                    printf("\nvaga: %d", VagasQ1);


                    if (VagasQ1 == 0)
                    {
                        printf("\nNão ha espaço disponivel");
                        armazem();
                    }
                break;
                case 2:
                    printf("\nvaga: %d", VagasQ2);
                    printf("Vaga Ocupada com sucesso");


                    VagasQ2 = VagasQ2 - 1;

                    printf("\nvaga: %d", VagasQ2);


                    if (VagasQ2 == 0)
                    {
                        printf("\nNão ha espaço disponivel");
                        armazem();
                    }
                break;
                case 3:
                    printf("\nvaga: %d", VagasQ3);
                    printf("Vaga Ocupada com sucesso");


                    VagasQ3 = VagasQ3 - 1;

                    printf("\nvaga: %d", VagasQ3);

                    if (VagasQ3 == 0)
                    {
                        printf("\nNão ha espaço disponivel");
                        armazem();
                    }
                break;
                
            }
        }
}


void utensilhos()
{
    printf("\nAcesso de:%s | Dia %d", nomedoOperador, dia);
    printf("\nSetor: Quimicos");
    printf("\nvagas Disponiveis no Setor:10");

        while (quantdePalletsU >= 0)
        {
            printf("\n0 terreo do Setor %d", VagasU1);
            printf("\n1 andar do Setor %d", VagasU2);
            printf("\n2 andar do Setor %d", VagasU3);
            printf("\nQual Area voce deseja?");
            scanf("%d", &area);
            switch (atividade)
            {
                case 1:
                    printf("\nvaga: %d", VagasU1);
                    printf("Vaga Ocupada com sucesso");

                    VagasU1 = VagasU1 - 1;

                    printf("\nvaga: %d", VagasU1);


                    if (VagasQ1 == 0)
                    {
                        printf("\nNão ha espaço disponivel");
                        armazem();
                    }
                break;
                case 2:
                    printf("\nvaga: %d", VagasU2);
                    printf("Vaga Ocupada com sucesso");


                    VagasU2 = VagasU2 - 1;

                    printf("\nvaga: %d", VagasU2);


                    if (VagasU2 == 0)
                    {
                        printf("\nNão ha espaço disponivel");
                        armazem();
                    }
                break;
                case 3:
                    printf("\nvaga: %d", VagasU3);
                    printf("Vaga Ocupada com sucesso");


                    VagasU3 = VagasU3 - 1;

                    printf("\nvaga: %d", VagasU3);

                    if (VagasU3 == 0)
                    {
                        printf("\nNão ha espaço disponivel");
                        armazem();
                    }
                break;
                
            }
        }
}

void descartaveis()
{
    printf("\nAcesso de:%s | Dia %d", nomedoOperador, dia);
    printf("\nSetor: Quimicos");
    printf("\nvagas Disponiveis no Setor:10");

        while (quantdePalletsD >= 0)
        {
            printf("\n0 terreo do Setor %d", VagasD1);
            printf("\n1 andar do Setor %d", VagasD2);
            printf("\n2 andar do Setor %d", VagasD3);
            printf("\nQual Area voce deseja?");
            scanf("%d", &area);
            switch (atividade)
            {
                case 1:
                    printf("\nvaga: %d", VagasD1);
                    printf("Vaga Ocupada com sucesso");

                    VagasD1 = VagasD1 - 1;

                    printf("\nvaga: %d", VagasD1);


                    if (VagasD1 == 0)
                    {
                        printf("\nNão ha espaço disponivel");
                        armazem();
                    }
                break;
                case 2:
                    printf("\nvaga: %d", VagasD2);
                    printf("Vaga Ocupada com sucesso");


                    VagasD2 = VagasD2 - 1;

                    printf("\nvaga: %d", VagasD2);


                    if (VagasD2 == 0)
                    {
                        printf("\nNão ha espaço disponivel");
                        armazem();
                    }
                break;
                case 3:
                    printf("\nvaga: %d", VagasD3);
                    printf("Vaga Ocupada com sucesso");


                    VagasD3 = VagasD3 - 1;

                    printf("\nvaga: %d", VagasD3);

                    if (VagasD3 == 0)
                    {
                        printf("\nNão ha espaço disponivel");
                        armazem();
                    }
                break;
                
            }
        }
}
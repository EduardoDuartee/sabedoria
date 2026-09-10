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

int vagastotais = 10;
//======================================

//=============Partes dos Quimicos=================

int quantdePalletsQ = 10;
int VagasQ1 = 2; 
int VagasQ2 = 5; 
int VagasQ3 = 3;
int vagasgeralQ = 10;
//=============Fim - partes dos Quimicos=================



//=============Partes dos Utensilhos=================

int quantdePalletsU = 10;
int VagasU1 = 2; 
int VagasU2 = 5; 
int VagasU3 = 3;
int vagasgeralU = 10;

//=============Fim - partes dos Utensilhos=================

//=============Partes dos Descartaveis=================

int quantdePalletsD = 10;
int VagasD1 = 2; 
int VagasD2 = 5; 
int VagasD3 = 3;
int vagasgeralD = 10;

//=============Fim - partes dos Descartaveis=================


void armazem()
{
    printf("\n\n<==== Bem - Vindo Ao Sistema de Armazenagem ====>");
    printf("\nQual nome do operador?");
    scanf("%s", nomedoOperador);
    printf("\nQual é sua senha de Liberação de Tarefa?:");
    scanf("%d", &codigodeAtivacao);
    acesso();
}

void acesso()
{
    

    if (codigodeAtivacao == 1010)
    {
        printf("\n\n==== Acesso Permitido ====");
        printf("\nAcesso de:%s | Dia %d", nomedoOperador, dia);

        printf("\n1 - Carga de Produtos Quimicos esperando para Armazenar");
        printf("\n2 - Carga de Utensilhos Esperando para Armazenar");
        printf("\n3 - Carga de Descartaveis Para Armazenar");
        printf("\n4 - Setores / Vagas");
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
            case 4:
                setor();
            break;
            
            default:
                printf("erro no sistema");    
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
    FILE *Armazenamento;

    Armazenamento = fopen( "controle/armazem.txt", "a");

    if (Armazenamento  == NULL)
    {
        printf("Armazenamento nao execultado");
    }
    
    printf("\nAcesso de:%s | Dia %d", nomedoOperador, dia);
    printf("\nSetor: Quimicos");
    printf("\nvagas Disponiveis no Setor:%d", vagasgeralQ);

        while (quantdePalletsQ >= 0)
        {
            printf("\nQuantidade de pallets: %d", quantdePalletsQ);
            printf("\n1 -  terreo do Setor %d", VagasQ1);
            printf("\n2 -  andar do Setor %d", VagasQ2);
            printf("\n3 - andar do Setor %d", VagasQ3);
            printf("\nQual Area voce deseja?");
            scanf("%d", &area);
            switch (area)
            {
                case 1:
                    if (VagasQ1 != 0 )
                    {
                    
                        printf("\nVaga Ocupada com sucesso");
                        quantdePalletsQ --;
                        VagasQ1 --;
                        vagasgeralQ--;
                       

                        printf("\nvagas Restantes: %d", VagasQ1);
                       
                    }
                    if (VagasQ1 == 0)
                    {
                     
                        printf("\nvagas indisponiveis nessa area");   
                    }
                    
                    
                break;
                case 2:
                    if (VagasQ2 != 0 )
                    {
                        printf("\nVaga Ocupada com sucesso");
                        quantdePalletsQ --;
                        VagasQ2 --;
                        vagasgeralQ--;


                        printf("\nvagas Restantes: %d", VagasQ2);
                       
                    }
                    else
                    { 
                        printf("\nvagas indisponiveis nessa area");   
                    }
                break;
                case 3:
                    if (VagasQ3 != 0 )
                    {
                        printf("\n\nVaga Ocupada com sucesso");
                        quantdePalletsQ --;
                        VagasQ3 --;
                        vagasgeralQ--;

                       
                        printf("\nvagas Restantes: %d", VagasQ3);
                    }
                    if (VagasQ3 == 0)
                    {
                        printf("Não há vagas %d", vagasgeralQ);
                        printf("\nvagas indisponiveis nessa area");   
                    }
                break;     
            }
            if (quantdePalletsQ == 0)
                {
                    printf("\nTodos os pallets estão guardados");
                    acesso();
                }
                fprintf(Armazenamento,"\nNome do Funcionario: %s | setor Quimico | dia: %d | Quantidade de paletes: %d", nomedoOperador, dia, quantdePalletsQ);
        }
        
        fclose(Armazenamento);
}


void utensilhos()
{
    printf("\nAcesso de:%s | Dia %d", nomedoOperador, dia);
    printf("\nSetor: Quimicos");
    printf("\nvagas Disponiveis no Setor:%d", vagasgeralU);

        if (vagasgeralQ != 0)
        {
           while (quantdePalletsU >= 0)
            {
                printf("\nQuantidade de pallets: %d", quantdePalletsU);
                printf("\n1 -  terreo do Setor %d", VagasU1);
                printf("\n2 -  andar do Setor %d", VagasU2);
                printf("\n3 - andar do Setor %d", VagasU3);
                printf("\nQual Area voce deseja?");
                scanf("%d", &area);
                switch (area)
                {
                    case 1:
                        if (VagasU1 != 0 )
                        {
                        
                            printf("\nVaga Ocupada com sucesso");
                            quantdePalletsU --;
                            VagasU1 --;
                            vagasgeralU--;
                        

                            printf("\nvagas Restantes: %d", VagasU1);
                        
                        }
                        if (VagasU1 == 0)
                        {
                        
                            printf("\nvagas indisponiveis nessa area");   
                        }
                        
                        
                    break;
                    case 2:
                        if (VagasU2 != 0 )
                        {
                            printf("\nVaga Ocupada com sucesso");
                            quantdePalletsU --;
                            VagasU2 --;
                            vagasgeralU--;


                            printf("\nvagas Restantes: %d", VagasU2);
                        
                        }
                        else
                        { 
                            printf("\nvagas indisponiveis nessa area");   
                        }
                    break;
                    case 3:
                        if (VagasU3 != 0 )
                        {
                            printf("\n\nVaga Ocupada com sucesso");
                            quantdePalletsU--;
                            VagasU3 --;
                            vagasgeralU--;

                        
                            printf("\nvagas Restantes: %d", VagasU3);
                        }
                        if (VagasU3 == 0)
                        {
                            printf("Não há vagas %d", vagasgeralU);
                            printf("\nvagas indisponiveis nessa area");   
                        }
                    break;     
                }
                if (quantdePalletsU == 0)
                    {
                        printf("\nTodos os pallets estão guardados");
                        acesso();
                    }
                
            }
        }
        else
        {
            printf("Não ha vagas Disponiveis");
        }
        
}

void descartaveis()
{
    printf("\nAcesso de:%s | Dia %d", nomedoOperador, dia);
    printf("\nSetor: Quimicos");
    printf("\nvagas Disponiveis no Setor:%d", vagasgeralD);

        while (quantdePalletsD >= 0)
        {
            printf("\nQuantidade de pallets: %d", quantdePalletsD);
            printf("\n1 -  terreo do Setor %d", VagasD1);
            printf("\n2 -  andar do Setor %d", VagasD2);
            printf("\n3 - andar do Setor %d", VagasD3);
            printf("\nQual Area voce deseja?");
            scanf("%d", &area);
            switch (area)
            {
                case 1:
                    if (VagasD1 != 0 )
                    {
                    
                        printf("\nVaga Ocupada com sucesso");
                        quantdePalletsD--;
                        VagasD1--;
                        vagasgeralD--;
                       

                        printf("\nvagas Restantes: %d", VagasD1);
                       
                    }
                    if (VagasD1 == 0)
                    {
                     
                        printf("\nvagas indisponiveis nessa area");   
                    }
                    
                    
                break;
                case 2:
                    if (VagasD2 != 0 )
                    {
                        printf("\nVaga Ocupada com sucesso");
                        quantdePalletsD--;
                        VagasD2--;
                        vagasgeralD--;


                        printf("\nvagas Restantes: %d", VagasD2);
                       
                    }
                    else
                    { 
                        printf("\nvagas indisponiveis nessa area");   
                    }
                break;
                case 3:
                    if (VagasD3 != 0 )
                    {
                        printf("\n\nVaga Ocupada com sucesso");
                        quantdePalletsD --;
                        VagasD3--;
                        vagasgeralD--;

                       
                        printf("\nvagas Restantes: %d", VagasD3);
                    }
                    if (VagasD3 == 0)
                    {
                        printf("Não há vagas %d", vagasgeralD);
                        printf("\nvagas indisponiveis nessa area");   
                    }
                break;     
            }
            if (quantdePalletsD == 0)
                {
                    printf("\nTodos os pallets estão guardados");
                    acesso();
                }
               
        }
}

void setor()
{
    printf("====Setores====");
    printf("\n- Setor Descartaveis Quantidade de vagas:%d",quantdePalletsD);
    printf("\n- Setor Quimico Quantidade de vagas:%d",quantdePalletsQ);
    printf("\n- Setor Utensilhos Quantidade de vagas:%d",quantdePalletsU);
    printf("\n1 - voltar ao menu");
    scanf("%d", &atividade);

    switch (atividade)
    {
    case 1:
        acesso();     
    break;
    
    default:
        break;
    }
}
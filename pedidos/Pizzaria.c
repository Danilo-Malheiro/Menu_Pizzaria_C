#include <stdio.h>   // scanf e printf
#include <stdlib.h>  // system
#include <locale.h>  // setlocale
#include <string.h>  // strcpy
int main() {
    setlocale(LC_ALL, "Portuguese"); // configura a localização para Português

    int menu, sabor, sabordoce, tamanhobebida, saborbebida; 
    double preco = 0, total = 0;
    char adicione; 
   
    // Vetores para armazenar o pedido
    char itens[50][100];   // até 50 itens, cada um com até 100 caracteres 
    double precos[50];     // preços correspondentes
    int qtdItens = 0;      // contador de itens
   
    do { // Laço de repetição
        preco = 0; // evita reaproveitar valor anterior
        system("cls"); // limpa a tela no Windows

        printf("-------Menu Pizzaria-------\n"); 
        printf("1- Pizza Grande (16 pedaços)\n");
        printf("2- Pizza Média (8 pedaços)\n");
        printf("3- Pizza Pequena (4 pedaços)\n"); 
        printf("4- Bebidas\n"); 
        printf("---------------------------\n");
        scanf(" %d", &menu);  

        if (menu == 1){  // Pizza Grande
            printf("Qual sabor você gostaria?\n");  
            printf("1- Calabresa (R$: 74,90) | 2- Muçarela (R$: 69,90) | 3- Portuguesa (R$: 84,90) | 4- Pizza Doce\n"); 
            scanf(" %d", &sabor); 

            if (sabor == 1){ 
				preco = 74.90;
                strcpy(itens[qtdItens], "Pizza Grande de Calabresa"); 
                printf("Pizza Grande de Calabresa adicionada no pedido!\n");
            } else if (sabor == 2){ 
                preco = 69.90;
                strcpy(itens[qtdItens], "Pizza Grande de Muçarela");
                printf("Pizza Grande de Muçarela adicionada no pedido!\n");
            } else if (sabor == 3){ 
                preco = 84.90;
                strcpy(itens[qtdItens], "Pizza Grande de Portuguesa");
           		printf("Pizza Grande de Portuguesa adicionada no pedido!\n");
		    } else if (sabor == 4){ 
                printf("Qual sabor de Pizza Doce você gostaria?\n");
                printf("1- Brigadeiro (R$: 94,90) | 2- Beijinho (R$: 80,90)\n"); 
                scanf(" %d", &sabordoce); 
                if (sabordoce == 1){ 
                    preco = 94.90;
                    strcpy(itens[qtdItens], "Pizza Grande de Brigadeiro");
                    printf("Pizza Grande de Brigadeiro adicionada ao pedido!\n");
                } else if (sabordoce == 2){ 
                    preco = 80.90;
                    strcpy(itens[qtdItens], "Pizza Grande de Beijinho"); 
                    printf("Pizza Grande de Beijinho adicionada ao pedido!\n");
                } else {
                    printf("Resposta inválida\n");
                }
            } else {
                printf("Resposta inválida\n"); 
            }

        } else if (menu == 2){  // Pizza Média
            printf("Qual sabor você gostaria?\n");
            printf("1- Calabresa (R$: 37,90)| 2- Muçarela (R$: 34,90)| 3- Portuguesa (R$: 39,90)| 4- Pizza Doce\n");
            scanf(" %d", &sabor); 

            if (sabor == 1){  
                preco = 37.90;
                strcpy(itens[qtdItens], "Pizza Média de Calabresa"); 
				printf("Pizza Média de Calabresa adicionada ao pedido!\n");			
            } else if (sabor == 2){ 
                preco = 34.90;
                strcpy(itens[qtdItens], "Pizza Média de Muçarela");
                printf("Pizza Média de Muçarela adicionada ao pedido!\n");
            } else if (sabor == 3){ 
                preco = 39.90;
                strcpy(itens[qtdItens], "Pizza Média de Portuguesa"); 
                printf("Pizza Média de Portuguesa adicionada ao pedido!\n");
            
			} else if (sabor == 4){ 
                printf("Qual sabor de Pizza Doce você gostaria?\n");
                printf("1- Brigadeiro (R$: 47,90)| 2- Beijinho (R$: 45,90)\n"); 
                scanf(" %d", &sabordoce); 
                if (sabordoce == 1){ 
                    preco = 47.90;
                    strcpy(itens[qtdItens], "Pizza Média de Brigadeiro"); 
                    printf("Pizza Média de Brigadeiro adicionada ao pedido!\n");
                } else if (sabordoce == 2){ 
                    preco = 45.90;
                    strcpy(itens[qtdItens], "Pizza Média de Beijinho");
                    printf("Pizza Média de Beijinho adicionada ao pedido!\n");
                } else {
                    printf("Resposta inválida\n"); 
                }
            } else {
                printf("Resposta inválida\n"); 
            }

        } else if (menu == 3){ // Pizza Pequena
            printf("Qual sabor você gostaria?\n");
            printf("1- Calabresa (R$: 21,90)| 2- Muçarela (R$: 19,90)| 3- Portuguesa (R$: 24,90)| 4- Pizza Doce\n");
            scanf(" %d", &sabor); 

            if (sabor == 1){ 
                preco = 21.90;
                strcpy(itens[qtdItens], "Pizza Pequena de Calabresa"); 
                printf("Pizza Pequena de Calabresa adicionada ao pedido!\n");
            } else if (sabor == 2){ 
                preco = 19.90;
                strcpy(itens[qtdItens], "Pizza Pequena de Muçarela"); 
                printf("Pizza Pequena de Muçarela adicionada ao pedido!\n");
            } else if (sabor == 3){ 
                preco = 24.90;
                strcpy(itens[qtdItens], "Pizza Pequena de Portuguesa");
                printf("Pizza Pequena de Portuguesa adicionada ao pedido!\n");
            
			} else if (sabor == 4){ 
                printf("Qual sabor de Pizza Doce você gostaria?\n");
                printf("1- Brigadeiro (R$: 27,90)| 2- Beijinho (R$: 26,90)\n"); 
                scanf(" %d", &sabordoce); 
                if (sabordoce == 1){ 
                    preco = 27.90;
                    strcpy(itens[qtdItens], "Pizza Pequena de Brigadeiro");
                    printf("Pizza Pequena de Brigadeiro adicionada ao pedido!\n");
                } else if (sabordoce == 2){ 
                    preco = 26.90;
                    strcpy(itens[qtdItens], "Pizza Pequena de Beijinho");
                    printf("Pizza Pequena de Beijinho adicionada ao pedido!\n");
                } else {
                    printf("Resposta inválida\n"); 
                }  
            } else {
                printf("Resposta inválida\n"); 
            }

        } else if (menu == 4) { // Bebida
            printf("Qual tamanho de bebida você gostaria?\n");
            printf("1- 1 Litro\n");
            printf("2- 2 Litros\n");
            scanf(" %d", &tamanhobebida); 

            if (tamanhobebida == 1){ 
                printf("Qual bebida você gostaria?\n"); 
                printf("1- Coca Cola (R$: 9,90)| 2- Fanta Laranja (R$: 8,90)| 3- Guaraná (R$: 8,90)\n"); 
                scanf(" %d", &saborbebida); 

                if (saborbebida == 1){ 
                    preco = 9.90;
                    strcpy(itens[qtdItens], "Coca Cola 1L");
                    printf("Coca Cola de 1L adicionado ao pedido!\n");
                } else if (saborbebida == 2) { 
                    preco = 8.90;
                    strcpy(itens[qtdItens], "Fanta Laranja 1L");
                    printf("Fanta Laranja de 1L adicionado ao pedido!\n");
                } else if (saborbebida == 3) { 
                    preco = 8.90;
                    strcpy(itens[qtdItens], "Guaraná 1L"); 
                    printf("Guaraná de 1L adicionado ao pedido!\n");
                } else { 
                    printf("Resposta inválida\n");
                }

            } else if (tamanhobebida == 2){ 
                printf("Qual bebida você gostaria?\n"); 
                printf("1- Coca Cola (R$: 14,90)| 2- Fanta Laranja (R$: 13,90)| 3- Guaraná (R$: 13,90)\n");
                scanf(" %d", &saborbebida); 

                if (saborbebida == 1){ 
                    preco = 14.90;
                    strcpy(itens[qtdItens], "Coca Cola 2L");
                    printf("Coca Cola de 2L adicionado ao pedido!\n");
                } else if (saborbebida == 2) { 
                    preco = 13.90;
                    strcpy(itens[qtdItens], "Fanta Laranja 2L");
                    printf("Fanta Laranja de 2L adicionado ao pedido!\n");
                } else if (saborbebida == 3) { 
                    preco = 13.90;
                    strcpy(itens[qtdItens], "Guaraná 2L");
                    printf("Guaraná de 2L adicionado ao pedido!\n");
                } else {
                    printf("Resposta inválida\n");
                }
            } else { 
                printf("Resposta inválida\n"); 
            }
        } else {
            printf("Resposta inválida\n");
        }

        // Salva no vetor se houve escolha válida
        if (preco > 0) {
            precos[qtdItens] = preco;
            qtdItens++;
            total += preco;
        }

        printf("Gostaria de adicionar algo mais no pedido? (s/n) ");
        scanf(" %c", &adicione); 

    } while (adicione == 's' || adicione == 'S'); // repete se usuário quiser continuar

    // Resumo do pedido
    system("cls");
    printf("\n---- Resumo do Pedido ----\n");
    for (int i = 0; i < qtdItens; i++) {
        printf("%d. %s - R$ %.2f\n", i+1, itens[i], precos[i]);
    }
    printf("--------------------------\n");
    printf("Valor total: R$ %.2f\n", total);
    printf("Obrigado pela preferência!\n");

	    // ---- Salvando o pedido em um arquivo ----
    FILE *arquivo;
    arquivo = fopen("pedidos.txt", "a");  // O "a" significa "adicionar no final", sem apagar o que já existe no arquivo.

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    fprintf(arquivo, "---- Resumo do Pedido ----\n");
    for (int i = 0; i < qtdItens; i++) { // Este loop vai escrever cada item do pedido um por um.
        fprintf(arquivo, "%d. %s - R$ %.2f\n", i+1, itens[i], precos[i]);
    }
    fprintf(arquivo, "--------------------------\n");
    fprintf(arquivo, "Valor total: R$ %.2f\n", total);
    fprintf(arquivo, "Obrigado pela preferência!\n");

    fclose(arquivo);
    printf("\nPedido salvo no arquivo 'pedidos.txt'!\n");

	system("pause"); 
	
    return 0;
}


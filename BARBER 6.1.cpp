/******************************************************************************

Barber Shop
Lizandra Longhi de Azevedo

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#define TAM 1000
#define CABELO 50.00                   // PREÇOS PODEM SER MUDADOS EM DEFINE(+PRÁTICO)
#define BARBA 30.00
#define SOBR 25.00
#define SHAMP 34.50
#define BALM 47.90
#define POMADA 56.00

    typedef struct{
        char nome[100];
        char email[100];
        int fone;
    }barber;


int main()
{   
    setlocale(LC_ALL,"");
    int controle=0;
    barber infos[TAM];                                                
    int menu1,menu2,menu3;                                             //<==MENUS
    int qntServ=0,qntCabelo=0,qntBarba=0,qntSobr=0;                  // <==QNT SERVIÇOS
    int qntProduto=0,qntShamp=0,qntBalm=0,qntPomada=0;                // <==QNT PRODUTOS
    float totalCustoShamp=0,totalCustoBalm=0,totalCustoPom=0;         //<==TOTAL CUSTO PRODUTOS (C/QUANT)
    float totalCabelo=0,totalBarba=0,totalSobr=0;                       //<==TOTAL CUSTO SERVIÇOS (C/ QUANTIDADE)
    float prodTotal=0,servTotal=0,notaTotal=0;                          //CUSTOS FINAIS PARA NOTA FISCAL
    int qntProdTotal=0,qntServTotal=0;                                  //	QUANTIDADE TOTAL DE PROD E SERV VENDIDOS
       
    printf("\n==================================");
    printf("\n== BARBER SHOP WILLIE NELSON 2.0 ==\n");
    do{
        
        printf("\n==================================");
        printf("\n** Escolha uma opção **");
        printf("\n 1 - Cadastrar cliente");
		printf("\n 2 - Exibir clientes cadastrados  ");                                                            //MENU PRINCIPAL
		printf("\n 3 - Serviços");
		printf("\n 4 - Produtos");
		printf("\n 5 - Gerar nota fiscal");
		printf("\n 6 - Zerar nota fiscal");
		printf("\n 7 - Relatório");
		printf("\n 0 - Sair  ");
		printf("\n==================================\n");
		scanf("%i",&menu1);
	    
	    switch(menu1){
	        case 1: printf("\n*Cadastrar cliente*\n");
	                printf("\nNome do cliente:  ");
	                fflush(stdin);
	                gets(infos[controle].nome);                                                                       //CADASTRO
	                printf("Email:  ");
	                fflush(stdin);
	                gets(infos[controle].email);
	                printf("Telefone:  ");
	                scanf("%i",&infos[controle].fone);
	                controle++;
	                printf("\nCliente cadastrado!\n\n");
	                break;
	        case 2:   
	            if(controle==0) printf("\nNenhum cliente cadastrado.\n");
	            
	            
	            else{
	                for(int x=0;x<controle;x++){
	                    
	                    printf("\nCliente %i: %s\n",x+1,infos[x].nome);
	                    printf("\nEmail: %s\n",infos[x].email);
	                    printf("\nTelefone: %i\n",infos[x].fone);
	                    printf("\n==================================");
                    }
	            }
	        break;    
	       
		    case 3: do{
    			        printf("\n\tServiços");
    					printf("\n==================================");
    				    printf("\n** Escolha uma opção **");
    				    printf("\n 1 - Corte de Cabelo");                                                          //MENU SERVIÇOS
    					printf("\n 2 - Barba Italiana");                                      
    					printf("\n 3 - Sobrancelhas");
    					printf("\n 4 - Sair menu de serviços");
    					printf("\n==================================\n");
    					scanf("%i",&menu2);
					    if(menu2<1 || menu2>4){
					        do{
					            printf("\nOpção inválida. Digite novamente.\n");
					            scanf("%i",&menu2);
					        }while(menu2<1||menu2>4);
					     }
					       
					     switch(menu2){
					         
					         case 1:  printf("Digite a quantidade: ");
                                      scanf("%i",&qntServ);
                                if(qntServ<0){
                                do{
                                    printf("Opção inválida. Digite novamente.\n");
                                    scanf("%i",&qntServ);
                                }while(qntServ<0);
                            }
					         if(qntServ>0){
					             qntCabelo=qntServ;
					             
					         }
					             totalCabelo= qntServ*CABELO;
					             printf("\nQuantidade de Cortes de Cabelo (%i)",qntServ);
        					     if(qntServ==0){
        					     	
									 printf("\nNenhum serviço foi selecionado.");	
								 }
								 else{
								 	printf("\nValor unitário R$ %.2f",CABELO);
								 }
								 printf("\nTotal de custo R$ %.2f\n",totalCabelo);
					             
					         break;
					         case 2:  printf("Digite a quantidade: ");
                                      scanf("%i",&qntServ);
                                if(qntServ<0){
                                do{
                                    printf("Opção inválida. Digite novamente.\n");
                                    scanf("%i",&qntServ);
                                }while(qntServ<0);
                            } 
					         if(qntServ>0){
					             qntBarba=qntServ;
					             
					         }
					             totalBarba= qntServ*BARBA;
					             printf("\nQuantidade de Barbas (%i)",qntServ);
        					     if(qntServ==0){
        					     	
									 printf("\nNenhum serviço foi selecionado.");	
								 }
								 else{
								 	printf("\nValor unitário R$ %.2f",BARBA);
								 }
        					     printf("\nTotal de custo R$ %.2f\n",totalBarba);
					             
					         break;
					         case 3:  printf("Digite a quantidade: ");
                                      scanf("%i",&qntServ);
                                if(qntServ<0){
                                do{
                                    printf("Opção inválida. Digite novamente.\n");
                                    scanf("%i",&qntServ);
                                }while(qntServ<0);
                            }
					         if(qntServ>0){
					             qntSobr=qntServ;
					             
					         }
					             totalSobr= qntServ*SOBR;
					             printf("\nQuantidade de Sobrancelhas (%i)",qntServ);
        					     if(qntServ==0){
        					     	
									 printf("\nNenhum serviço foi selecionado.");	
								 }
								 else{
								 	printf("\nValor unitário R$ %.2f",SOBR);
								 }
        					     printf("\nTotal de custo R$ %.2f\n",totalSobr);
					         
					         break;
					         case 4:
					         break;
					            default: printf("Opção inválida. Digite novamente.");
					     }
		        	}while(menu2!=4);
		    break;
		    
		    case 4: do{
    		            printf("\n\tProdutos");
    					printf("\n==================================");
    				    printf("\n** Escolha uma opção **");
    				    printf("\n 1 - Shampoo 3 em 1 Hirsutus by Tony Ramos");
    					printf("\n 2 - Bálsamo para Barba Lenhador das Estepes");                                    //MENU PRODUTOS
    					printf("\n 3 - Pomada Capilar Cachos Machos");
    					printf("\n 4 - Sair menu de produtos");
    					printf("\n==================================\n");
    					scanf("%i",&menu3);
					    if(menu3<1 || menu3>4){
					        do{
					            printf("\nOpção inválida. Digite novamente.\n");
					            scanf("%i",&menu3);
					        }while(menu3<1||menu3>4);
					     }
					     
					     switch(menu3){
					        
					         case 1:  printf("Digite a quantidade: ");
                                      scanf("%i",&qntProduto);
                                if(qntProduto<0){
                                do{
                                    printf("Opção inválida. Digite novamente.\n");
                                    scanf("%i",&qntProduto);
                                }while(qntProduto<0);
                            }
					         if(qntProduto>0){
					             qntShamp = qntProduto;
					         }
					        
    					         totalCustoShamp=qntProduto*SHAMP;
    					         
    					         printf("\nA quantidade de Shampoo (%i)",qntProduto);
    					         if(qntProduto==0){
        					     	
									 printf("\nNenhum produto foi selecionado.");	
								 }
								 else{
								 	printf("\nValor unitário R$ %.2f",SHAMP);
								 }
    					         printf("\nTotal de custo: %.2f\n",totalCustoShamp);
					                             
					         break;
					         case 2:  printf("Digite a quantidade: ");
                                      scanf("%i",&qntProduto);
                                if(qntProduto<0){
                                do{
                                    printf("Opção inválida. Digite novamente.\n");
                                    scanf("%i",&qntProduto);
                                }while(qntProduto<0);
                            }
					         if(qntProduto>0){
					             qntBalm = qntProduto;
					         }
					            totalCustoBalm = qntProduto*BALM;
					            printf("\nA quantidade de Bálsamo (%i)",qntProduto);
                                if(qntProduto==0){
        					     	
									 printf("\nNenhum produto foi selecionado.");	
								 }
								 else{
								 	printf("\nValor unitário R$ %.2f",BALM);
								 }
                                printf("\nTotal de custo: %.2f\n",totalCustoBalm);
					       
						    break;
					        case 3:  printf("Digite a quantidade: ");
                                     scanf("%i",&qntProduto);
                                if(qntProduto<0){
                                do{
                                    printf("Opção inválida. Digite novamente.\n");
                                    scanf("%i",&qntProduto);
                                }while(qntProduto<0);
                            }
					        if(qntProduto>0){
					            qntPomada = qntProduto;
					        }
					            totalCustoPom = qntProduto*POMADA;
					            printf("\nA quantidade de Pomada (%i)",qntProduto);
                                if(qntProduto==0){
        					     	
									 printf("\nNenhum produto foi selecionado.");	
								 }
								 else{
								 	printf("\nValor unitário R$ %.2f",POMADA);
								 }
                                printf("\nTotal de custo: %.2f\n",totalCustoPom);
					       
						    break;
						    case 4:
						    break;
					            default: printf("Opção inválida. Digite novamente.");
					     }
		            }while(menu3!=4); 
				   
		    break;
		    
		    case 5: printf("\n\tGerar nota fiscal");
		            printf("\n==================================");                                            //GERAR NOTA FISCAL
		                if(controle==0) printf("\nNenhum cliente cadastrado.\n");
	            
	            
	            else{
	                for(int x=0;x<controle;x++){
	                    
	                    printf("\nCliente %i: %s\n",x+1,infos[x].nome);
	                    printf("\nEmail: %s\n",infos[x].email);
	                    printf("\nTelefone: %i\n",infos[x].fone);
	                    printf("\n==================================");
                    }
	            }
						if(totalCabelo>0){
    		                totalCabelo=CABELO*qntCabelo;
    					    printf("\nQuantidade %i de Cortes de Cabelo",qntCabelo);
    					    printf("\nValor unitário R$ %.2f",CABELO);
    					    printf("\nTotal de custo R$ %.2f\n",totalCabelo);
		            }
		                if(totalBarba>0){                                            //NOTA SERVIÇOS
    		                totalBarba=BARBA*qntBarba;
    		                printf("\nQuantidade %i de Barbas ",qntBarba);
    					    printf("\nValor unitário R$ %.2f",BARBA);
    					    printf("\nTotal de custo R$ %.2f\n",totalBarba);
		            }
		                if(totalSobr>0){
    		                totalSobr=SOBR*qntSobr;
    		                printf("\nQuantidade %i de Sobrancelhas",qntSobr);
    					    printf("\nValor unitário R$ %.2f",SOBR);
    					    printf("\nTotal de custo R$ %.2f\n",totalSobr);
		            }
		                if(qntShamp>0){
                            totalCustoShamp=SHAMP*qntShamp;
                            printf("\nQuantidade %i de Shampoo",qntShamp);
                            printf("\nValor unitário: R$ %.2f",SHAMP);
                            printf("\nTotal de custo: %.2f\n",totalCustoShamp);            //NOTA PRODUTOS
    				}
		                if(qntBalm>0){
    		                totalCustoBalm=BALM*qntBalm;
    		                printf("\nQuantidade %i de Bálsamo ",qntBalm);
                            printf("\nValor unitário: R$ %.2f",BALM);
                            printf("\nTotal de custo: %.2f\n",totalCustoBalm);
		            }
		                if(qntPomada>0){
    		                totalCustoPom=POMADA*qntPomada;
    		                printf("\nQuantidade %i de Pomada ",qntPomada);
                            printf("\nValor unitário: R$ %.2f",POMADA);
                            printf("\nTotal de custo: %.2f\n",totalCustoPom);
		            }
    		            prodTotal=totalCustoShamp+totalCustoBalm+totalCustoPom;
    		            servTotal=totalCabelo+totalBarba+totalSobr;
    		            notaTotal=prodTotal+servTotal;
		            
        		        printf("\n\nTotal da Nota Fiscal R$ %.2f\n",notaTotal); 
        		        printf("\n==================================");
		    break;  
		    
		    case 6: 
								
					printf("\n==================================");        
                    printf("\nNota fiscal zerada\n");                                                 // ZERAR NOTA
		            printf("\n==================================\n");
		            		            
                     qntServ=0,qntCabelo=0,qntBarba=0,qntSobr=0; 
                     qntProduto=0,qntShamp=0,qntBalm=0,qntPomada=0;               
                     totalCustoShamp=0,totalCustoBalm=0,totalCustoPom=0; 
                     totalCabelo=0,totalBarba=0,totalSobr=0;                       
                     prodTotal=0,servTotal=0,notaTotal=0; 
                     qntProdTotal=0,qntServTotal=0; 
    
				    
            break;  
            case 7:	printf("\n\tRelatório");
		            printf("\n==================================");                                   //RELATÓRIO
            		if(totalCabelo>0){
    		                totalCabelo=CABELO*qntCabelo;
    					    printf("\nQuantidade %i de Cortes de Cabelo",qntCabelo);
    					    printf("\nTotal de custo R$ %.2f\n",totalCabelo);
		            }
		                if(totalBarba>0){                                                                 //SERVIÇOS
    		                totalBarba=BARBA*qntBarba;
    		                printf("\nQuantidade %i de Barbas ",qntBarba);
    					    printf("\nTotal de custo R$ %.2f\n",totalBarba);
		            }
		                if(totalSobr>0){
    		                totalSobr=SOBR*qntSobr;
    		                printf("\nQuantidade %i de Sobrancelhas",qntSobr);
    					    printf("\nTotal de custo R$ %.2f\n",totalSobr);
		            }
		                if(qntShamp>0){
                            totalCustoShamp=SHAMP*qntShamp;
                            printf("\nQuantidade %i de Shampoo",qntShamp);
                            printf("\nTotal de custo: %.2f\n",totalCustoShamp);                               //PRODUTOS
    				}
		                if(qntBalm>0){
    		                totalCustoBalm=BALM*qntBalm;
    		                printf("\nQuantidade %i de Bálsamo ",qntBalm);
                            printf("\nTotal de custo: %.2f\n",totalCustoBalm);
		            }
		                if(qntPomada>0){
    		                totalCustoPom=POMADA*qntPomada;
    		                printf("\nQuantidade %i de Pomada ",qntPomada);
                            printf("\nTotal de custo: %.2f\n",totalCustoPom);
		            }
    		            
    		            qntServTotal=qntSobr+qntBarba+qntCabelo;
						qntProdTotal=qntPomada+qntBalm+qntShamp;
						prodTotal=totalCustoShamp+totalCustoBalm+totalCustoPom;                            // QUANTIDADE PROD E SERVS RELATÓRIO
    		            servTotal=totalCabelo+totalBarba+totalSobr;
    		            notaTotal=prodTotal+servTotal;
		            	printf("\nQuantidade de serviços realizados: %i",qntServTotal);
						printf("\nQuantidade de produtos vendidos: %i",qntProdTotal);
        		        printf("\n\nFechamento de Caixa R$ %.2f\n",notaTotal); 
        		        printf("\n==================================");
            	
            	
            break;	
		    case 0:
	        
			break;
	                
	                default: printf("\nOpção inválida. Digite novamente.\n\n");
	       
	    }
	}while(menu1!=0);
    
    return 0; 
} 





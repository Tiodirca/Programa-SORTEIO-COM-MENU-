#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void header()
{
           printf("\n\t\t\t$S$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
           printf("\n\t\t\t$$$$$$$$$$ IPINEAPPLE  $$$$$$$$$$$$");
           printf("\n\t\t\t$S$$$$$$$$ DESDE 2007  $$$$$$$$$$$$");
           printf("\n\t\t\t$S$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
           printf("\n\tPrograma criado para gerar sorteios de brindes para clientes.");
           printf("\n\t\tApenas para valores acima de 500,00.\n");
           printf("\n Pressione a letra  A do teclado para ver a lista de Brindes.");
           printf("\n Pressione a letra  B do teclado para gerar o sorteio do premio.");
           printf("\n Pressione a letra  C do teclado para Limpar a tela.");
           printf("\n Pressione a letra  D do teclado para sair do programa.");
}
           
int main(void)
{
header();
system("color f0");
int valor_variavel,codigo,valor_codigo,menu,sorteio=0;
float valor_cliente;

do
{ 
                   menu = getch();
                   switch(menu)
{
case 'a':
                  printf("\n\n\nPremios para clientes que gastaram valores acima de 2500.");
                  printf("\n Teclado AlienWare - Headset Razer Electra V2  - HD Externo 4TB \n CD de Instalacao WINDOWS 10 PRO - HD Externo 2TB \n KIT de 06 Cartuchos de tinta para Impressora");
                  printf("\n\nPremios para clientes que gastaram valores entre 1000 a 2500.");
                  printf("\n HD Externo 1TB  - Bateria para notebook - Mouse Sem Fio \n Bolsa para Notebook - 3 Meses Pacote Premium NetFlix - Cartao de Memoria 64 GB");
                  printf("\n\nPremios para clientes que gastaram valores entre 200 a 1000.");
                  printf("\n Cartao de Memoria 16 GB - Pen Drive 8 GB -  Mouse com fio \n 01 Cartucho de tinta para Impressora - Capa para Notebook \n Cartao de Memoria 2 GB");
                  break;
                  getch();                 
case 'b':
         printf("\n\n\nDigite o valor total gasto pelo cliente:  ");
                              scanf("%f",&valor_cliente);
         srand(time(NULL));
for(valor_variavel=sorteio;valor_variavel<1;valor_variavel++)continue;
         printf("",sorteio=1+ rand()%6);
if(valor_cliente >=2500)
{
if(sorteio==1)
     printf(" O premio Sorteado: Teclado AlienWare.");
else if(sorteio==2)
     printf(" O premio Sorteado: Headset Razer Electra V2."); 
else if(sorteio==3)
     printf(" O premio Sorteado: HD Externo 4TB.");
else if(sorteio==4)
     printf(" O premio Sorteado: CD de Instalacao do WINDOWS 10 PRO."); 
else if(sorteio==5)
     printf(" O premio Sorteado: HD Externo 2TB.");
else if(sorteio==6)
     printf(" O  premio Sorteado: KIT com 06 Cartuchos de tinta para Impressora.");
}

else if(valor_cliente>=1500 && valor_cliente<2500 )
{
if(sorteio==1)
     printf(" O premio Sorteado: HD Externo 1TB.");
else if(sorteio==2)
     printf(" O premio Sorteado: Mouse Sem Fio."); 
else if(sorteio==3)
     printf(" O premio Sorteado: Bolsa para transporte de Notebook.");
else if(sorteio==4)
     printf(" O premio Sorteado: 3 Meses Pacote Premium NetFlix.");
else if(sorteio==5)
     printf(" O premio Sorteado: Bateria para notebook.");
else if(sorteio==6)
     printf(" O premio Sorteado: Cartao de Memoria 64 GB."); 
}

else if(valor_cliente >=500 && valor_cliente<1500)
{
if(sorteio==1)
     printf(" O premio Sorteado: Cartao de Memoria 16 GB.");
else if(sorteio==2)
     printf(" O premio Sorteado: Pen Drive 8 GB."); 
else if(sorteio==3)
     printf(" O premio Sorteado: Mouse com fio.");
else if(sorteio==4)
     printf(" O premio Sorteado: 01 Cartucho de tinta para Impressora.");
else if(sorteio==5)
     printf(" O premio Sorteado: Capa para Notebook.");
else if(sorteio==6)
     printf(" O premio Sorteado: Cartao de Memoria 2 GB.");
}
              if(valor_cliente <500)
           printf("\nO Valor informado acima nao atende os\nrequesitos minimos para participar do sorteio.");
           printf("\n\nO codigo do Cliente: %d",rand()%100000); 
           printf("\n\nPressione 2 vezes a letra B do teclado para inserir\num novo valor e gerar um novo sorteio.");
break;
getch();
                        
                     
case 'c':
                        system("cls");
                        header();
                               
                               break;
                               getch();
case 'd':	
          break;
          getch();
}

}while(menu != 'd');
return 0;
}

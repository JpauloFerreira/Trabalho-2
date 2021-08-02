//Algoritmo para gerar cartelas de bingo e fazer sorteio das cartelas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//funcão para criação das cartelas
void criaCartela(int cartela[25]){
	int i,j,aux=1,num;
	for(j=0;j<25;j++){
	do{
		aux=0;
		num=rand()%99+1;
		for(i=0;i<j;i++){
			if(num==cartela[i]){
				num=rand()%99+1;
				aux=1;
			}
		}
	}while(aux);
		cartela[j]=num;
	}
}
//funcao para ordenar as cartelas
void ordenaCartela(int cartela[25]){
	int i,j,aux2;
	for(j=0;j<25;j++){
		for(i=0;i<25;i++){
			if(cartela[i]>cartela[i+1]&&i+1!=25){
				aux2=cartela[i];
				cartela[i]=cartela[i+1];
				cartela[i+1]=aux2;
			}
		}
	}
}
//funcao para zerar o numero presente no centro da cartela
void zeraMeio(int cartela[25]){
	cartela[12]=0;
}
//funcao para imprimir as cartelas de bingo
void imprimeCartelas(int cartela[25],int cont){
	int i;
		printf("\n------------------------------------");
		printf("\n\nCartela numero %d:",cont);
		printf("\n------------------------------------\n");
		for(i=0;i<25;i++){
			printf("%d 	",cartela[i]);
			if(i==4||i==9||i==14||i==19){
			printf("\n\n");
		}
	}
}
//funcao para sortear os numeros e encontrar a cartela vencedora
void sorteiaCartela(int a1[25],int a2[25],int a3[25],int a4[25],int a5[25],int a6[25],int a7[25],int a8[25],int a9[25],int a10[25]){
	int i,j,aux,aux2,num,contador=0,cont[10]={0};
	int sorteados[100]={0};
	int c1[25],c2[25],c3[25],c4[25],c5[25],c6[25],c7[25],c8[25],c9[25],c10[25];
	for(i=0;i<25;i++){
		c1[i]=a1[i];
		c2[i]=a2[i];
		c3[i]=a3[i];
		c4[i]=a4[i];
		c5[i]=a5[i];
		c6[i]=a6[i];
		c7[i]=a7[i];
		c8[i]=a8[i];
		c9[i]=a9[i];
		c10[i]=a10[i];
	}
	srand(time(NULL));
	do{
		aux2=1;
		do{
			aux=0;
			num=rand()%99+1;
			for(i=1;i<99;i++){
				if(num==sorteados[i]){
					aux=1;
				}
			}
		}while(aux);
		sorteados[num]=num;
		contador++;
		
		for(i=0;i<25;i++){
			if(c1[i]==num){
			cont[0]++;
			c1[i]=0;
		}
			if(c2[i]==num){
			cont[1]++;
			c2[i]=0;
		}
			if(c3[i]==num){
			cont[2]++;
			c3[i]=0;
		}
			if(c4[i]==num){
			cont[3]++;
			c4[i]=0;
		}
			if(c5[i]==num){
			cont[4]++;
			c5[i]=0;
		}
			if(c6[i]==num){
			cont[5]++;
			c6[i]=0;
		}
		
			if(c7[i]==num){
			cont[6]++;
			c7[i]=0;
		}
			if(c8[i]==num){
			cont[7]++;
			c8[i]=0;
		}
		
			if(c9[i]==num){
			cont[8]++;
			c9[i]=0;
		}
			if(c10[i]==num){
			cont[9]++;
			c10[i]=0;
		}
	}
		for(i=0;i<10;i++){
			if(cont[i]==24){
				printf("\n\n\nCartela %d Ganhou!!",i+1);
				switch(i){
				case 0:{
					imprimeCartelas(a1,1);
					break;
				}
				case 1:{
					imprimeCartelas(a2,2);
					break;
				}
				case 2:{
					imprimeCartelas(a3,3);
					break;
				}
				case 3:{
					imprimeCartelas(a4,4);
					break;
				}
				case 4:{
					imprimeCartelas(a5,5);
					break;
				}
				case 5:{
					imprimeCartelas(a6,6);
					break;
				}
				case 6:{
					imprimeCartelas(a7,7);
					break;
				}
				case 7:{
					imprimeCartelas(a8,8);
					break;
				}
				case 8:{
					imprimeCartelas(a9,9);
					break;
				}
				case 9:{
					imprimeCartelas(a10,10);
					break;
				}
				
			}
				aux2=0;
			}
		}
	}while(aux2);
		
	printf("\n\n\n---------- %d Numeros Sorteados: ----------\n",contador);
	for(i=1;i<=99;i++){
		if(sorteados[i]!=0){
			printf("%d ",sorteados[i]);
		}
	}
	return;
}
void sorteiaNumANum(int a1[25],int a2[25],int a3[25],int a4[25],int a5[25],int a6[25],int a7[25],int a8[25],int a9[25],int a10[25]){
	int i,j,aux,aux2,num,contador=0,cont[10]={0};
	int sorteados[100]={0};
	int c1[25],c2[25],c3[25],c4[25],c5[25],c6[25],c7[25],c8[25],c9[25],c10[25];
	for(i=0;i<25;i++){
		c1[i]=a1[i];
		c2[i]=a2[i];
		c3[i]=a3[i];
		c4[i]=a4[i];
		c5[i]=a5[i];
		c6[i]=a6[i];
		c7[i]=a7[i];
		c8[i]=a8[i];
		c9[i]=a9[i];
		c10[i]=a10[i];
	}
	
	srand(time(NULL));
	do{
		aux2=1;
		do{
			aux=0;
			num=rand()%99+1;
			for(i=1;i<99;i++){
				if(num==sorteados[i]){
					aux=1;
				}
			}
		}while(aux);
		sorteados[num]=num;
		contador++;
		
		for(i=0;i<25;i++){
			if(c1[i]==num){
			cont[0]++;
			c1[i]=0;
		}
			if(c2[i]==num){
			cont[1]++;
			c2[i]=0;
		}
			if(c3[i]==num){
			cont[2]++;
			c3[i]=0;
		}
			if(c4[i]==num){
			cont[3]++;
			c4[i]=0;
		}
			if(c5[i]==num){
			cont[4]++;
			c5[i]=0;
		}
			if(c6[i]==num){
			cont[5]++;
			c6[i]=0;
		}
		
			if(c7[i]==num){
			cont[6]++;
			c7[i]=0;
		}
			if(c8[i]==num){
			cont[7]++;
			c8[i]=0;
		}
		
			if(c9[i]==num){
			cont[8]++;
			c9[i]=0;
		}
			if(c10[i]==num){
			cont[9]++;
			c10[i]=0;
		}
		}
		printf("%d Vezes sorteadas\n",contador);
		printf("Número sorteado: %d\n\n",num);
		
		for(i=0;i<10;i++){
			printf("\nCartela %d marcou %d número(s)",i+1,cont[i]);
		}
		
		for(i=0;i<10;i++){	
			if(cont[i]==24){
				printf("\n\n\nCartela %d Ganhou!!",i+1);
				switch(i){
				case 0:{
					imprimeCartelas(a1,1);
					break;
				}
				case 1:{
					imprimeCartelas(a2,2);
					break;
				}
				case 2:{
					imprimeCartelas(a3,3);
					break;
				}
				case 3:{
					imprimeCartelas(a4,4);
					break;
				}
				case 4:{
					imprimeCartelas(a5,5);
					break;
				}
				case 5:{
					imprimeCartelas(a6,6);
					break;
				}
				case 6:{
					imprimeCartelas(a7,7);
					break;
				}
				case 7:{
					imprimeCartelas(a8,8);
					break;
				}
				case 8:{
					imprimeCartelas(a9,9);
					break;
				}
				case 9:{
					imprimeCartelas(a10,10);
					break;
				}
			}
				aux2=0;
			}
		}
		if(aux2!=0){
			printf("\n\n");
			system("pause");
		}
	}while(aux2);
		
	printf("\n\n\n---------- %d Numeros Sorteados: ----------\n",contador);
	for(i=1;i<=99;i++){
		if(sorteados[i]!=0){
			printf("%d ",sorteados[i]);
		}
	}
	return;
}
int main( ){
	int cart1[25],cart2[25],cart3[25],cart4[25],cart5[25];
	int cart6[25],cart7[25],cart8[25],cart9[25],cart10[25];
    
	//atribuição de numero aleatório de 1 a 99 para a cartela
	//Função utilizada para evitar numeros repetidos
	inicio1:
	setlocale(LC_ALL,"portuguese");
	srand(time(NULL));

	criaCartela(cart1);
	criaCartela(cart2);
	criaCartela(cart3);
	criaCartela(cart4);
	criaCartela(cart5);
	criaCartela(cart6);
	criaCartela(cart7);
	criaCartela(cart8);
	criaCartela(cart9);
	criaCartela(cart10);
	
	//funcoes para deixar todas cartelas em ordem crescente
	
	ordenaCartela(cart1);
	ordenaCartela(cart2);
	ordenaCartela(cart3);
	ordenaCartela(cart4);
	ordenaCartela(cart5);
	ordenaCartela(cart6);
	ordenaCartela(cart7);
	ordenaCartela(cart8);
	ordenaCartela(cart9);
	ordenaCartela(cart10);
	
	//atribuindo 0 ao centro das cartelas
	
	zeraMeio(cart1);
	zeraMeio(cart2);
	zeraMeio(cart3);
	zeraMeio(cart4);
	zeraMeio(cart5);
	zeraMeio(cart6);
	zeraMeio(cart7);
	zeraMeio(cart8);
	zeraMeio(cart9);
	zeraMeio(cart10);
	
	//inicio do programa
	inicio:
	system("cls");
	int escolha=1;
	while(escolha!=0){
	//menu do programa
	printf("??????????????????????????????\n");
 	printf("¦¦¦¦¦¦¦¦¦¦¦ Inicio ¦¦¦¦¦¦¦¦¦¦¦\n");
	printf("??????????????????????????????\n\n");
	printf("(0) - Para sair.\n");
	printf("(1) - Para gerar novas cartelas\n");
	printf("(2) - Para imprimir as cartelas.\n");
	printf("(3) - Para sorteio completo.\n");
	printf("(4) - Para sorteio número a número.\n");
	printf("\nDigite a sua escolha: ");
	scanf("%d",&escolha);
	system("cls");
	
	switch(escolha){
		case 1:{
			printf("\n\nNovas cartelas geradas com sucesso!\n\n");
			system("pause");
			goto inicio1;
			break;
		}
		//imprimindo as cartelas
		case 2:{
			printf("????????????????????????????????\n");
 			printf("¦¦¦¦¦¦¦¦¦¦¦ Cartelas ¦¦¦¦¦¦¦¦¦¦¦\n");
			printf("????????????????????????????????\n\n");
			int cont=1;
			imprimeCartelas(cart1,cont);	cont++;
			imprimeCartelas(cart2,cont);	cont++;
			imprimeCartelas(cart3,cont);	cont++;
			imprimeCartelas(cart4,cont);	cont++;
			imprimeCartelas(cart5,cont);	cont++;
			imprimeCartelas(cart6,cont);	cont++;
			imprimeCartelas(cart7,cont);	cont++;
			imprimeCartelas(cart8,cont);	cont++;
			imprimeCartelas(cart9,cont);	cont++;
			imprimeCartelas(cart10,cont);
			printf("\n------------------------------------\n");
			system("pause");
			goto inicio;
			break;
			}
			//sorteando uma cartela
		case 3:{
			printf("???????????????????????????????\n");
 			printf("¦¦¦¦¦¦¦¦¦¦¦ Sorteio ¦¦¦¦¦¦¦¦¦¦¦\n");
			printf("???????????????????????????????\n\n");
			sorteiaCartela(cart1,cart2,cart3,cart4,cart5,cart6,cart7,cart8,cart9,cart10);	
			printf("\n\n");
			system("pause");
			system("cls");
			goto inicio;
			break;
			}
		case 4:{
			printf("???????????????????????????????????????????????\n");
 			printf("¦¦¦¦¦¦¦¦¦¦¦ Sorteio número a número ¦¦¦¦¦¦¦¦¦¦¦\n");
			printf("???????????????????????????????????????????????\n\n");
			system("pause");
			sorteiaNumANum(cart1,cart2,cart3,cart4,cart5,cart6,cart7,cart8,cart9,cart10);	
			printf("\n\n");
			system("pause");
			system("cls");
			goto inicio;
			break;
			}
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}

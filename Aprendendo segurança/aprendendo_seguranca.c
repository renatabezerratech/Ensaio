// Ensaio para programa educacional
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Voltado para crian�as do ensino fundamental 2, segundo � BNCC. */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"Portuguese");//configura��o de idioma
	
	system("color E4");//cor de fundo e cor do texto
	
	char nome[40];//tipo caractere
	printf("\n Qual � o seu nome? \n");
	gets(nome);//atribui valor declarado � vari�vel
	system("cls");//limpa a tela
	printf("\n Que legal te conhecer %s",nome);
	printf("\n O meu nome � Computilson e eu sou amigo do Cyberson!\n");
	system("pause");//pausa o programa na tela
	system("cls");
	printf("Agora %s  vamos conversar sobre um assunto importante, vamos falar sobre seguran�a da informa��o. \n A primeira coisa que voc� deve saber � que aqui falaremos sobre como voc� vai usar a sua internet de forma segura.\n",nome);
	system("pause");
	system("cls");
	int idade;//vari�vel de valor inteiro
	printf("\n Quantos anos voc� tem?\n");// imprime na tela
	scanf("%d",&idade);// vai atribuir valor a vari�vel
	printf("Sua idade �: %d",idade);//vai imprimir o valor da vari�vel
	//a linha abaixo executa uma estrutura de decis�o
	if(idade<18)//se
	{
		printf("\n Converse com seus pais sobre as pessoas que fazem amizade com voc� pela internet.\n Voc� sabia que pessoas adultas podem fingir ser da sua idade para fazer amizade com voc�?\n");
		int responda;
		printf("\n Responda 1-sim ou 2-n�o. \n");
		scanf("%d",&responda);
		printf("Sua resposta �:%d",responda);
		if(0!=responda<=1)//se
		{
			printf("\nQue bom que voc� sabe. Parab�ns! Isso quer dizer que voc� n�o confia em pessoas que voc� n�o conhece.\n");
			system("pause");
		}
		else//sen�o
		{
			printf("\nSaiba que no mundo existem pessoas ruins e essas pessoas fingem ser crian�as pela internet para fazer mal a outras crian�as.\n N�o confie em quem voc� n�o conhece.\n");
			system("pause");
		}
	
	}
	if(idade>=18)//se
	{
		printf("\n Tenha aten��o na hora de conversar com algu�m pela internet. Fique seguro, exija respeito e, principalmente, n�o desrespeite ningu�m!\n");
		system("pause");
	}
	
	return 0;

}

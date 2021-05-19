// Ensaio para programa educacional
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Voltado para crianças do ensino fundamental 2, segundo à BNCC. */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"Portuguese");//configuração de idioma
	
	system("color E4");//cor de fundo e cor do texto
	
	char nome[40];//tipo caractere
	printf("\n Qual é o seu nome? \n");
	gets(nome);//atribui valor declarado à variável
	system("cls");//limpa a tela
	printf("\n Que legal te conhecer %s",nome);
	printf("\n O meu nome é Computilson e eu sou amigo do Cyberson!\n");
	system("pause");//pausa o programa na tela
	system("cls");
	printf("Agora %s  vamos conversar sobre um assunto importante, vamos falar sobre segurança da informação. \n A primeira coisa que você deve saber é que aqui falaremos sobre como você vai usar a sua internet de forma segura.\n",nome);
	system("pause");
	system("cls");
	int idade;//variável de valor inteiro
	printf("\n Quantos anos você tem?\n");// imprime na tela
	scanf("%d",&idade);// vai atribuir valor a variável
	printf("Sua idade é: %d",idade);//vai imprimir o valor da variável
	//a linha abaixo executa uma estrutura de decisão
	if(idade<18)//se
	{
		printf("\n Converse com seus pais sobre as pessoas que fazem amizade com você pela internet.\n Você sabia que pessoas adultas podem fingir ser da sua idade para fazer amizade com você?\n");
		int responda;
		printf("\n Responda 1-sim ou 2-não. \n");
		scanf("%d",&responda);
		printf("Sua resposta é:%d",responda);
		if(0!=responda<=1)//se
		{
			printf("\nQue bom que você sabe. Parabéns! Isso quer dizer que você não confia em pessoas que você não conhece.\n");
			system("pause");
		}
		else//senão
		{
			printf("\nSaiba que no mundo existem pessoas ruins e essas pessoas fingem ser crianças pela internet para fazer mal a outras crianças.\n Não confie em quem você não conhece.\n");
			system("pause");
		}
	
	}
	if(idade>=18)//se
	{
		printf("\n Tenha atenção na hora de conversar com alguém pela internet. Fique seguro, exija respeito e, principalmente, não desrespeite ninguém!\n");
		system("pause");
	}
	
	return 0;

}

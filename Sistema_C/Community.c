#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

void meni1();
void meni2();
void boletim();
void aprovado();
void linkedin();
void empregabilidade();
void noticias_tech();
void trello();
void github();
void monitoria();
void lideres();
void softskills();
void discord();

int cont;
typedef struct{
	char nome[50];
	char comunidade[30];
	float media;
}alunos;

FILE *file;

alunos alun[26] = {{"Albert Duarte Costa","Discord",0.0},{"Altair de Jesus Santos Junior", "Trello",0.0},{"Amanda Oliveira da Silva","Softskills",0.0},
{"Ana Caroline da Silva Muniz","Empregabilidade",0.0},{"Antonio de Sousa Silva","Empregabilidade",0.0},
{"�tila Concei��o de Goes","Lideres",0.0},{"Caique Vidal Gonzaga de Freitas","Monitoria",0.0},
{"Douglas Henrique da Concei��o Souza","Not�cias Tech",0.0},{"Eduardo Santos da Conceic�o","Trello",0.0},
{"Eric dos Santos Fonseca","Discord",0.0},{"Erick Macedo de Almeida","Github",0.0},{"Filipe Da Silva Santos","Monitoria",0.0},
{"Filipe Sobreira Campos","Not�cias Tech",0.0},{"Gabriele de Jesus da Costa","Monitoria",0.0},{"Liliana Lima do Carmo","Empregabilidade",0.0},
{"Luiz Claudio Meneses dos Santos","Discord",0.0},{"Marlon Gabriel Araujo dos Santos","Monitoria",0.0},
{"Marta S�o Pedro de Santana Cordolino","Trello",0.0},{"Mateus Ferreira de Oliveira","Not�cias Tech",0.0},
{"Matheus Santa Rita dos Santos","Lideres",0.0},{"Pedro C�sar Da Silva Santos J�nior","Github",0.0},
{"Ramon Fernando Miranda de Oliveira","Empregabilidade",0.0},{"S�driky Logan Dantas de Oliveira","Softskills",0.0},
{"Tamires dos Santos de Jesus","Softskills",0.0},{"Tawan Correia Leonel","Empregabilidade",0.0},{"Thalys M�rcio Bezerra Neves","Monitoria",0.0}};

int main(){
	setlocale(LC_ALL,"Portuguese");
	system("color 5f");
	meni1();	
	return 0;
}


void meni1(){
	
	int menu1;

	do{
		printf("\n =============================\n");
		printf("\t DISCORD");
		printf("\n =============================\n\n");
		printf(" 1 - Acessar Link\n");
		printf(" 2 - Acessar Comunidades\n");
		printf(" 3 - Acessar Boletim\n");
		printf(" 4 - Acessar Linkedin\n");
		printf(" 5 - Sair do sistema\n");
		printf(" Escolha uma op��o do menu: ");
		scanf("%d", &menu1);
		system("cls");
		
		//Op��es do primeiro menu (Link,Comunidades, Boletim)
		switch (menu1){
			case 1:
				puts("\n Link para acessar o Discord: https://discord.com/channels/1142723554476044338/1142723554941608006 \n");
				system("pause");
				system("cls");
				break;
			case 2:
				//Segundo menu
				meni2();
				break;
			case 3:
				boletim();
				break;
			case 4: 
				linkedin();
				break;
			case 5:
				printf("\n Saindo do Sistema...");
				exit(1);
				break;
			default:
				printf("\n Entrada Invalida!\n");			
		}
	}while(menu1 != 5);
}

void meni2(){
		int menu2;
		
		do{
			printf("\n =============================\n");
			printf("\t COMUNIDADES");
			printf("\n =============================\n");
			printf("\n 1 - Empregabilidade\n");
			printf(" 2 - Not�cias Tech\n");
			printf(" 3 - Trello\n");
			printf(" 4 - Github\n");
			printf(" 5 - Monitoria\n");
			printf(" 6 - Lideres\n");
			printf(" 7 - Softskills\n");
			printf(" 8 - Discord\n");
			printf(" 9 - Voltar\n");
			printf(" Qual comunidade deseja acessar: ");
			scanf("%d", &menu2);
			system("cls");
			
			switch (menu2){
				case 1:
					empregabilidade();
					break;
				case 2: 
					noticias_tech();
					break;
				case 3: 
					trello();
					break;
				case 4:
					github();
					break;
				case 5:
					monitoria();
					break;
				case 6:
					lideres();
					break;
				case 7:
					softskills();
					break;
				case 8:
					discord();
					break;
				case 9:
					meni1();
					break;	
				default:
				printf("\n Entrada Invalida!\n");
			}
		}while(menu2 != 9);		
}

void boletim(){
	int menu3;
	do{
		printf("\n =============================\n");
		printf("\t BOLETIM");
		printf("\n =============================\n");
		printf("\n 1 - Adicionar notas\n");
		printf(" 2 - Gerar notas aleat�rias\n");
		printf(" 3 - Voltar\n");
		printf(" Qual op��o deseja acessar: ");
		scanf("%d", &menu3);
		system("cls");
		switch (menu3){
			case 1:
				for (cont = 0; cont < 26; cont++){
					do{
						printf("\nAdicione a nota de %s: ", alun[cont].nome);
						scanf("%f", &alun[cont].media);
					}while(alun[cont].media < 0.0 || alun[cont].media > 10.0);
				}
				system("cls");
				printf("\n =============================\n");
				printf("\t BOLETIM");
				printf("\n =============================\n\n");
				for (cont = 0; cont < 26; cont++){
					printf(" %s | M�dia: %.2f\n",alun[cont].nome, alun[cont].media);
				}
				printf("\n");
				aprovado();
				system("pause");
				system("cls");
				break;
			case 2:
				printf("\n =============================\n");
				printf("\t BOLETIM");
				printf("\n =============================\n\n");
				for(cont = 0; cont < 26; cont++){
					alun[cont].media = rand() % 10;
					printf(" %s | Media: %.2f\n",alun[cont].nome, alun[cont].media);
			}
				printf("\n");
				aprovado();
				system("pause");
				system("cls");
				break;
			case 3:
				meni1();
				break;
			default:
				printf("\n Entrada Invalida!\n");
		}	
		
	}while(menu3 != 3);	
}

void aprovado(){
	int menu4;
	printf("Deseja verificar os aprovados e reprovados? 1 - SIM / 2 - N�O: ");
	scanf("%d", &menu4);
	if(menu4 == 1){
		puts("=====APROVADOS=====");
		for(cont = 0; cont < 26; cont++){
			if(alun[cont].media >= 7.0){
				printf("%s\n", alun[cont].nome);
			}
		}
		puts("=====REPROVADOS=====");
		for(cont = 0; cont < 26; cont++){
			if(alun[cont].media < 7.0){
				printf("%s\n", alun[cont].nome);
			}
		}
	}
}

void linkedin(){
	int menu5;
	file = fopen("linkedin.txt", "r");
	char linkedin[200];
	do{
		printf("\n =============================\n");
		printf("\t LINKEDIN");
		printf("\n =============================\n");
		printf("\n 1 - Ver linkedin da turma\n");
		printf(" 2 - Voltar\n");
		printf(" Escolha uma op��o: ");
		scanf("%d", &menu5);
		switch(menu5){
			case 1:
				system("cls");
				printf("\n =============================\n");
				printf("\t LINKEDIN");
				printf("\n =============================\n\n");
				while(fgets(linkedin, 200, file) != NULL){
					printf("%s", linkedin);
				}
				fclose(file);
				printf("\n\n");
				system("pause");
				system("cls");
				break;
			case 2:
				system("cls");
				meni1();
				break;
			default:
				printf("\n Entrada Invalida!\n");
		}
	}while(menu5 != 2);
}

void  empregabilidade(){
	printf("\n Empregabilidade - Descri��o\n\n");	
	puts(" \"A comunidade � um ambiente online dedicado exclusivamente � facilita��o da busca por oportunidades");
	puts("  de emprego. Os membros compartilham informa��es sobre oportunidades de emprego, dicas de recrutamento");
	puts("  e experi�ncias pessoais relacionadas ao processo seletivo. Al�m disso, a comunidade fornece recursos como");
	puts("  modelos de curr�culo, orienta��es para entrevistas e not�cias sobre o mercado de trabalho. Com uma abordagem");
	puts("  colaborativa, a comunidade se torna um espa�o valioso para networking, crescimento profissional e apoio");
	puts("  m�tuo durante a busca por emprego.\"");
	printf("\n");
	system("pause");
	system("cls");
	printf("\n Empregabilidade - Membros\n\n");	
	for(cont = 0; cont < 26; cont++){
		if(strcmp("Empregabilidade", alun[cont].comunidade) == 0){
			printf(" %s\n",alun[cont].nome);
		}
	}
	printf("\n");
	system("pause");
	system("cls");
}

void noticias_tech(){
	printf("\n Not�cias Tech - Descri��o\n\n");	
	puts(" \"Essa comunidade � um espa�o virtual dedicado � dissemina��o e discuss�o de not�cias sobre");
	puts("  tecnologia. Seu prop�sito central � manter os membros informados sobre as �ltimas tend�ncias,");
	puts("  inova��es e desenvolvimentos no campo da tecnologia. Os participantes compartilham e discutem not�cias");
	puts("  relacionadas a avan�os em intelig�ncia artificial, rob�tica, ci�ncia da computa��o, dispositivos eletr�nicos,");
	puts("  software, startups e outros t�picos relevantes. Al�m de ser uma fonte de informa��es atualizadas, a comunidade");
	puts("  proporciona um ambiente prop�cio para a troca de ideias, insights e opini�es entre entusiastas, profissionais");
	puts("  e curiosos sobre o mundo da tecnologia. Essa intera��o estimula a constru��o de conhecimento coletivo e fortalece");
	puts("  a comunidade como um hub din�mico para acompanhar e compreender as r�pidas transforma��es no cen�rio tecnol�gico.\"");
	printf("\n");
	system("pause");
	system("cls");
	printf("\n Not�cias Tech - Membros\n\n");
	for(cont = 0; cont < 26; cont++){
		if(strcmp("Not�cias Tech",alun[cont].comunidade) == 0){
			printf(" %s\n",alun[cont].nome);
		}
	}
	printf("\n");
	system("pause");
	system("cls");
}

void trello(){
	printf("\n Trello - Descri��o\n\n");	
	puts(" \"Essa comunidade tem como objetivo principal explorar e aprimorar o uso do Trello, ");
	puts("  uma plataforma de gerenciamento de projetos. Os membros compartilham conhecimentos");
	puts("  sobre as funcionalidades do Trello e oferecem dicas aos colegas.\"");
	printf("\n");
	system("pause");
	system("cls");
	printf("\n Trello - Membros\n\n");
	for(cont = 0; cont < 26; cont++){
		if(strcmp("Trello",alun[cont].comunidade) == 0){
			printf(" %s\n",alun[cont].nome);
		}
	}
	printf("\n");
	system("pause");
	system("cls");
}

void github(){
	printf("\n Github - Descri��o\n\n");	
	puts(" \"Essa comunidade tem como prop�sito principal explorar e aprimorar o uso do GitHub,");
	puts("  uma plataforma amplamente utilizada para controle de vers�o e colabora��o em projetos de software.");
	puts("  Os membros compartilham conhecimentos sobre os recursos do GitHub, oferecem assist�ncia e orienta��o");
	puts("  aos colegas em rela��o a pr�ticas de desenvolvimento, controle de vers�o, cria��o de pull requests,");
	puts("  resolu��o de conflitos e outros aspectos essenciais da plataforma.\"");
	printf("\n");
	system("pause");
	system("cls");
	printf("\n Github - Membros\n\n");
		for(cont = 0; cont < 26; cont++){
			if(strcmp("Github",alun[cont].comunidade) == 0){
				printf(" %s\n",alun[cont].nome);
			}
		}
	printf("\n");
	system("pause");
	system("cls");
}

void monitoria(){
	printf("\n Monitoria - Descri��o\n\n");	
	puts(" \"Essa comunidade tem como prop�sito principal oferecer suporte educacional a uma turma espec�fica");
	puts("  por meio de monitorias. Os monitores s�o respons�veis por criar e compartilhar exerc�cios relacionados");
	puts("  aos assuntos abordados nas aulas, proporcionando uma pr�tica adicional aos participantes. Al�m disso,");
	puts("  a comunidade serve como um espa�o interativo para tirar d�vidas, onde os alunos podem fazer perguntas");
	puts("  sobre os exerc�cios, conceitos ou qualquer conte�do relacionado ao curso. Os monitores desempenham");
	puts("  um papel ativo ao fornecer explica��es claras, oferecer orienta��es personalizadas e realizar revis�es");
	puts("  peri�dicas para consolidar o aprendizado. Essa abordagem colaborativa promove um ambiente de estudo");
	puts("  mais din�mico e facilita o entendimento dos t�picos, contribuindo para o sucesso acad�mico dos participantes.\"");
	printf("\n");
	system("pause");
	system("cls");
	printf("\n Monitoria - Membros\n\n");
	for(cont = 0; cont < 26; cont++){
		if(strcmp("Monitoria",alun[cont].comunidade) == 0){
			printf(" %s\n",alun[cont].nome);
		}
	}
	printf("\n");
	system("pause");
	system("cls");
}

void lideres(){
	printf("\n Lideres - Descri��o\n\n");	
	puts(" \"Essa comunidade busca fortalecer os la�os entre os membros da turma, promover um ambiente");
	puts("  positivo de aprendizado e facilitar a comunica��o efetiva entre alunos e professores.");
	puts("  Os l�deres atuam como intermedi�rios, ajudando a resolver d�vidas, incentivando a participa��o ");
	puts("  ativa em sala de aula e contribuindo para a cria��o de um ambiente de aprendizado inclusivo.\"");
	printf("\n");
	system("pause");
	system("cls");
	printf("\n Lideres - Membros\n\n");
	for(cont = 0; cont < 26; cont++){
		if(strcmp("Lideres",alun[cont].comunidade) == 0){
			printf(" %s\n",alun[cont].nome);
		}
	}
	printf("\n");
	system("pause");
	system("cls");
}

void softskills(){
	printf("\n Not�cias Tech - Descri��o\n\n");	
	puts(" \"Essa comunidade tem como objetivo promover o aprendizado e o desenvolvimento das soft skills");
	puts("  entre os alunos. Soft skills, que englobam habilidades interpessoais, de comunica��o e comportamentais,");
	puts("  s�o essenciais em diversos contextos, tanto pessoais quanto profissionais. A comunidade oferece recursos");
	puts("  educacionais,como workshops, palestras e materiais informativos, para abordar temas relacionados a");
	puts("  comunica��o eficaz, empatia, trabalho em equipe, resili�ncia e outras compet�ncias fundamentais.\"");
	printf("\n");
	system("pause");
	system("cls");
	printf("\n Softskills - Membros\n\n");
	for(cont = 0; cont < 26; cont++){
		if(strcmp("Softskills",alun[cont].comunidade) == 0){
			printf(" %s\n",alun[cont].nome);
		}
	}
	printf("\n");
	system("pause");
	system("cls");
}

void discord(){
	printf("\n Discord - Descri��o\n\n");	
	puts(" \"Essa comunidade opera como um ambiente virtual de estudo no Discord, visando facilitar a colabora��o");
	puts("  e o aprendizado em grupo. A fun��o principal � criar e gerenciar um grupo de estudos, organizando salas");
	puts("  espec�ficas para cada tema abordado. O Discord � utilizado como plataforma central para comunica��o e intera��o");
	puts("  entre os membros. Os administradores da comunidade t�m a responsabilidade de criar canais dedicados a diferentes");
	puts("  assuntos, fornecendo um espa�o estruturado para discuss�es, compartilhamento de materiais e realiza��o de atividades");
	puts("  relacionadas aos estudos. Eles atribuem cargos espec�ficos aos membros, como moderadores para manter a ordem nas");
	puts("  salas e coordenadores para liderar discuss�es.\"");
	printf("\n");
	system("pause");
	system("cls");
	printf("\n Discord - Membros\n\n");
	for(cont = 0; cont < 26; cont++){
		if(strcmp("Discord",alun[cont].comunidade) == 0){
			printf(" %s\n",alun[cont].nome);
		}
	}
	printf("\n");
	system("pause");
	system("cls");
}


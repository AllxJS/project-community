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
{"Átila Conceição de Goes","Lideres",0.0},{"Caique Vidal Gonzaga de Freitas","Monitoria",0.0},
{"Douglas Henrique da Conceição Souza","Notícias Tech",0.0},{"Eduardo Santos da Conceicão","Trello",0.0},
{"Eric dos Santos Fonseca","Discord",0.0},{"Erick Macedo de Almeida","Github",0.0},{"Filipe Da Silva Santos","Monitoria",0.0},
{"Filipe Sobreira Campos","Notícias Tech",0.0},{"Gabriele de Jesus da Costa","Monitoria",0.0},{"Liliana Lima do Carmo","Empregabilidade",0.0},
{"Luiz Claudio Meneses dos Santos","Discord",0.0},{"Marlon Gabriel Araujo dos Santos","Monitoria",0.0},
{"Marta São Pedro de Santana Cordolino","Trello",0.0},{"Mateus Ferreira de Oliveira","Notícias Tech",0.0},
{"Matheus Santa Rita dos Santos","Lideres",0.0},{"Pedro César Da Silva Santos Júnior","Github",0.0},
{"Ramon Fernando Miranda de Oliveira","Empregabilidade",0.0},{"Sédriky Logan Dantas de Oliveira","Softskills",0.0},
{"Tamires dos Santos de Jesus","Softskills",0.0},{"Tawan Correia Leonel","Empregabilidade",0.0},{"Thalys Márcio Bezerra Neves","Monitoria",0.0}};

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
		printf(" Escolha uma opção do menu: ");
		scanf("%d", &menu1);
		system("cls");
		
		//Opções do primeiro menu (Link,Comunidades, Boletim)
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
			printf(" 2 - Notícias Tech\n");
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
		printf(" 2 - Gerar notas aleatórias\n");
		printf(" 3 - Voltar\n");
		printf(" Qual opção deseja acessar: ");
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
					printf(" %s | Média: %.2f\n",alun[cont].nome, alun[cont].media);
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
	printf("Deseja verificar os aprovados e reprovados? 1 - SIM / 2 - NÃO: ");
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
		printf(" Escolha uma opção: ");
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
	printf("\n Empregabilidade - Descrição\n\n");	
	puts(" \"A comunidade é um ambiente online dedicado exclusivamente à facilitação da busca por oportunidades");
	puts("  de emprego. Os membros compartilham informações sobre oportunidades de emprego, dicas de recrutamento");
	puts("  e experiências pessoais relacionadas ao processo seletivo. Além disso, a comunidade fornece recursos como");
	puts("  modelos de currículo, orientações para entrevistas e notícias sobre o mercado de trabalho. Com uma abordagem");
	puts("  colaborativa, a comunidade se torna um espaço valioso para networking, crescimento profissional e apoio");
	puts("  mútuo durante a busca por emprego.\"");
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
	printf("\n Notícias Tech - Descrição\n\n");	
	puts(" \"Essa comunidade é um espaço virtual dedicado à disseminação e discussão de notícias sobre");
	puts("  tecnologia. Seu propósito central é manter os membros informados sobre as últimas tendências,");
	puts("  inovações e desenvolvimentos no campo da tecnologia. Os participantes compartilham e discutem notícias");
	puts("  relacionadas a avanços em inteligência artificial, robótica, ciência da computação, dispositivos eletrônicos,");
	puts("  software, startups e outros tópicos relevantes. Além de ser uma fonte de informações atualizadas, a comunidade");
	puts("  proporciona um ambiente propício para a troca de ideias, insights e opiniões entre entusiastas, profissionais");
	puts("  e curiosos sobre o mundo da tecnologia. Essa interação estimula a construção de conhecimento coletivo e fortalece");
	puts("  a comunidade como um hub dinâmico para acompanhar e compreender as rápidas transformações no cenário tecnológico.\"");
	printf("\n");
	system("pause");
	system("cls");
	printf("\n Notícias Tech - Membros\n\n");
	for(cont = 0; cont < 26; cont++){
		if(strcmp("Notícias Tech",alun[cont].comunidade) == 0){
			printf(" %s\n",alun[cont].nome);
		}
	}
	printf("\n");
	system("pause");
	system("cls");
}

void trello(){
	printf("\n Trello - Descrição\n\n");	
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
	printf("\n Github - Descrição\n\n");	
	puts(" \"Essa comunidade tem como propósito principal explorar e aprimorar o uso do GitHub,");
	puts("  uma plataforma amplamente utilizada para controle de versão e colaboração em projetos de software.");
	puts("  Os membros compartilham conhecimentos sobre os recursos do GitHub, oferecem assistência e orientação");
	puts("  aos colegas em relação a práticas de desenvolvimento, controle de versão, criação de pull requests,");
	puts("  resolução de conflitos e outros aspectos essenciais da plataforma.\"");
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
	printf("\n Monitoria - Descrição\n\n");	
	puts(" \"Essa comunidade tem como propósito principal oferecer suporte educacional a uma turma específica");
	puts("  por meio de monitorias. Os monitores são responsáveis por criar e compartilhar exercícios relacionados");
	puts("  aos assuntos abordados nas aulas, proporcionando uma prática adicional aos participantes. Além disso,");
	puts("  a comunidade serve como um espaço interativo para tirar dúvidas, onde os alunos podem fazer perguntas");
	puts("  sobre os exercícios, conceitos ou qualquer conteúdo relacionado ao curso. Os monitores desempenham");
	puts("  um papel ativo ao fornecer explicações claras, oferecer orientações personalizadas e realizar revisões");
	puts("  periódicas para consolidar o aprendizado. Essa abordagem colaborativa promove um ambiente de estudo");
	puts("  mais dinâmico e facilita o entendimento dos tópicos, contribuindo para o sucesso acadêmico dos participantes.\"");
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
	printf("\n Lideres - Descrição\n\n");	
	puts(" \"Essa comunidade busca fortalecer os laços entre os membros da turma, promover um ambiente");
	puts("  positivo de aprendizado e facilitar a comunicação efetiva entre alunos e professores.");
	puts("  Os líderes atuam como intermediários, ajudando a resolver dúvidas, incentivando a participação ");
	puts("  ativa em sala de aula e contribuindo para a criação de um ambiente de aprendizado inclusivo.\"");
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
	printf("\n Notícias Tech - Descrição\n\n");	
	puts(" \"Essa comunidade tem como objetivo promover o aprendizado e o desenvolvimento das soft skills");
	puts("  entre os alunos. Soft skills, que englobam habilidades interpessoais, de comunicação e comportamentais,");
	puts("  são essenciais em diversos contextos, tanto pessoais quanto profissionais. A comunidade oferece recursos");
	puts("  educacionais,como workshops, palestras e materiais informativos, para abordar temas relacionados a");
	puts("  comunicação eficaz, empatia, trabalho em equipe, resiliência e outras competências fundamentais.\"");
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
	printf("\n Discord - Descrição\n\n");	
	puts(" \"Essa comunidade opera como um ambiente virtual de estudo no Discord, visando facilitar a colaboração");
	puts("  e o aprendizado em grupo. A função principal é criar e gerenciar um grupo de estudos, organizando salas");
	puts("  específicas para cada tema abordado. O Discord é utilizado como plataforma central para comunicação e interação");
	puts("  entre os membros. Os administradores da comunidade têm a responsabilidade de criar canais dedicados a diferentes");
	puts("  assuntos, fornecendo um espaço estruturado para discussões, compartilhamento de materiais e realização de atividades");
	puts("  relacionadas aos estudos. Eles atribuem cargos específicos aos membros, como moderadores para manter a ordem nas");
	puts("  salas e coordenadores para liderar discussões.\"");
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


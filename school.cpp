#include <stdio.h>
#include <stdlib.h>

struct aluno{
	char nome[20];
	int matricula;
	int turma[10];
	int notas;
	int media;
	int frequencia;
	char situacao[20];
};

	struct aluno dados;
	int i;
	
	int aluno_matricula(int m);
	int aluno_notas(int media);
	int aluno_turma(int sala);
	int aluno_frequencia(int fre);
	char aluno_situacao(char si);
	
int main(){
	
	int esc, matricula, turma, situacao, frequencia, notas;
	
	do{	
		printf("\n\n\tescolha uma opcao:");
		printf("\n\t(1) matricula");
		printf("\n\t(2) turmas");
		printf("\n\t(3) situacao");
		printf("\n\t(4) frequencia");
		printf("\n\t(5) media");
		printf("\n\t(0) SAIR  ");
		scanf("%i", &esc);
	
		switch(esc){
			
			case 1: aluno_matricula(matricula);
					break;
			case 2: aluno_turma(turma);
					break;
			case 3: aluno_situacao(situacao);
					break;
			case 4: aluno_frequencia(frequencia);
					break;
			case 5: aluno_notas(notas);
					break;
			case 0: printf("\tSAIR\n\n"); 
					break;
		}
			
	}while(esc != 0);
	
	
	return 0;
}
	
int aluno_matricula(int m){
	
	int ma[4],qnt; 
	char no[20];
	
	do{
	printf("matricula: ");
	scanf("%i", &ma);
	
	printf("nome: ");
	scanf("%s", &no);
	}while(qnt!=0);


	system("cls");
}

int aluno_notas(int media){

	int n1, n2, n3, n4, n5;
	
	printf("digite a nota da P1: ");
	scanf("%i", &n1);
	printf("digite a nota da P2: ");
	scanf("%i", &n2);
		
	printf("digite a nota do E1: ");
	scanf("%i", &n3);
	printf("digite a nota do E2: ");
	scanf("%i", &n4);
	
	
	printf("digite a nota da T1: ");
	scanf("%i", &n5);
	
	media = (n1+n2+n3+n4+n5);
	
	printf("media: %i", media);

	system("cls");	
	return media;
}

int aluno_turma(int sala){
	
	
}

int aluno_frequencia(int fre){
	
	int a;
	
	printf("frequencia: ");
	scanf("%i", &a);
	
	system("cls");
	return fre;
}

int aluno_situacao(int si){
	
	int a; //media
	int b; //frequencia
	int matricula;
	
	
	
	if(a > 70 && b > 40){
		printf("aprovado");
	} else 
	if(a < 70 || b < 40){
		printf("reprovado");
	}else 
	if(a < 0){
		printf("sem dados suficiente sobre o aluno");
	}
	
	return si;
}

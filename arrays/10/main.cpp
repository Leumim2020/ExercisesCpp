/*

Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a média geral.

*/

#include "iostream"
#include "conio.h"
#define tamanho 15



int main(void)
{
	int arrayNotas[tamanho]={},media=0;
	for(int j=0;j<tamanho;j++){
		std::cout<<"Nota"<<j+1<<": ";
		std::cin>>arrayNotas[j];
		media+=arrayNotas[j];
	}
	std::cout<<"Media geral e "<<media/15;
	getch();
	return 0;
}

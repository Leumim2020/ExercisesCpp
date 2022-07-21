
/* Faça um progra que leia um vetor de 10 posições e verifique se existem valores repetidos e os escreva 
na tela */
#include <iostream>
#define size 10



int main(void){

	int values[size]={};
	int i,j,d=0;
	int x,repeated_values[size];
	bool t=false;

	std::cout<<"Saiba quais valores se repetem no array \n";
	for(int i=0;i < size;i++){
		std::cout<<"valor"<<i<<": ";
		std::cin>>values[i];
	}

	i=0;
	while(i < size){
		for( j=i+1;j < size;j++){
			if(values[i] == values[j]){
				x=values[i];
					for(int k = 0;k < size;k++){
						// se t for true então x existe num indice no array de valores repetidos
							if(x==repeated_values[k]){
								t= true;
								continue;// se existe ignora x
							}
							// se t for false então x não consta em array valores repetidos atribuir
							if(t==false){
								// atribuindo x ao array
								repeated_values[k]=x;
								std::cout<<"Valor que se repete no vetor: ";
								std::cout<<repeated_values[k];
								std::cout<<"\n";
								break;
								}

					}
			break;

			}else{
						// se d for 45 verificação completa não achei valor repetido no array
						d++;
			}
			
		}
		
	i++;
	}
	if(d==45){std::cout<<" Nao existem valores repetidos no vetor";}

	
return 0;
} 
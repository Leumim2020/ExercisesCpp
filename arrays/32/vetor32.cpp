/*Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuário não
informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso
abaixo:
- Soma entre x e y: soma de cada elemento de x com o elemento da mesma posição
em y.
- Produto entre x e y: multiplicação de cada elemento de x com o elemento da mesma
posição em y.
- Diferença entre x e y: todos os elementos de x que não existam em y.
- Interseção entre x e y: apenas os elementos que aparecem nos dois vetores.
- União entre x e y: todos os elementos de x, e todos os elementos de y que não
estão em x.
*/


#include <iostream>
const int size = 5;

void somaxy(int x[],int y[],int width){

	std::cout<<"Soma de vetor x e vetor y: \n";

	for(int i=0;i < width;i+=1){
		std::cout<<x[i]<<" + "<<y[i]<<"= "<<x[i]+y[i]<<"\n";
	}

	return;
}

void subtracaoxy(int x,int y){

		std::cout<<x<<" - "<<y<<"= "<<x-y<<"\n";

	return;
}

void produtoxy(int x[],int y[],int width){

	std::cout<<"Produto de vetor x e vetor y: \n";
	for(int i=0;i < width;i+=1){
		std::cout<<x[i]<<" x "<<y[i]<<"= "<<x[i]*y[i]<<"\n";
	}

	return;
}


void intersecao(int x,int p,int width){

	int v3[width],repeat=0;

	for(int i=0;i < width;i+=1){
		if(x == v3[i])
			repeat+=1;
	}

	if(repeat == false){
		v3[p] = x;
		std::cout<<v3[p]<<" ";
	}

	return;

}

int main(){

	int x1,y1,i,j,repeat,p=4;
	int x[size]={},y[size]={},uni[size*2]={};

	// input vetor x e vetor y

	i=0;
	while(i < size){

		int repeatx = 0;

		std::cout<<"Valor[x]-> ";
		std::cin>>x1;

		for(int j=0;j < size;j+=1){
			if(x1 == x[j])
				repeatx+=1;
		}

		if(repeatx >= 1){
			std::cout<<"numero repetido nao pode ser atribuido \n";
			continue;
		}else if(repeatx == false){
			x[i] = x1;
			i++;
		}
	
	}
	
	std::cout<<"----------------------------------\n \n";

	j = 0;
	while(j < size){

		int repeaty = 0;

		std::cout<<"Valor[y]-> ";
		std::cin>>y1;

		for(int j=0;j < size;j+=1){
			if(y1 == y[j])
				repeaty+=1;
		}

		if(repeaty >= 1){

			std::cout<<"numero repetido nao pode ser atribuido \n";
			continue;

		}else if(repeaty == false){

			y[j] = y1;
			j++;
		}
	}

	// end input vetor x e vetor y

	somaxy(x,y,size);


	std::cout<<"Subtracao de vetor x e vetor y: \n";
	for(int i=0;i < size;i+=1){
		for(int j=0;j < size;j+=1){
			if(x[i] != y[j])
				subtracaoxy(x[i],y[j]);
		}
		std::cout<<"\n";
	}

	produtoxy(x,y,size);

	// begin interseção
	std::cout<<"Intersecacao de vetor x e vetor y: \n";

	for(int i=0;i<size;i+=1){
		for(int k=0;k<size;k+=1){
			if(x[i] == y[k]){
				intersecao(x[i],i,size);
			}
		}
	}
	// end interseção
	std::cout<<"\n";

	// begin união de vetor x e vetor y
	std::cout<<"Uniao de vetor x e vetor y: \n ";

	for(int j=0;j < size;j+=1)
		uni[j] = x[j];

	for(int j=0;j < size;j+=1){
		
		repeat = 0;
		p+=1;

		for(int i=0;i < size*2;i+=1){
			if(y[j] == uni[i])
				repeat+=1;
		}

		if(repeat == false)
			uni[p] = y[j];

	}
	// end união

	//output união
	for(int i=0; i < size*2;i+=1){
		if(uni[i] == false)
			continue;
		else
			std::cout<<uni[i]<<" ";
	}

	return 0;
	
}
/*

	Faça um programa que possua uma função para
	• ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler 2 notas
	válidas e que devolver os 2 números lidos); 
	• calcular a média simples e a média ponderada e retorná-las por parâmetro, onde a 
	segunda nota tem peso 2 média ponderada = (n1 + n2 * 2)/3;

*/

#include <iostream>

void media_meditated(float &note1,float &note2,float &n_media,float &meditated);

int main(int argc, char** argv){

	float n1{},n2{},meditated{},n_media{};
	
	while(true){
		
		std::cout<<"Type note-> ";
		std::cin>>n1;
		std::cout<<"Type note-> ";
		std::cin>>n2;
		
		media_meditated(n1,n2,n_media,meditated);
		
		if(n1 == false && n2 == false){
		
			continue;
				
		}
		else{
			
			std::cout<<"Media meditated of "<<n1<<" and "<<n2<<" is equal "<<meditated<<std::endl;
			std::cout<<"Normal media of "<<n1<<" and "<<n2<<" is equal "<<meditated;	
			break;
			
		}
		
	}

	return 0;
}


void media_meditated(float &note1,float &note2,float &n_media,float &meditated){
	
	if(note1 > 0 && note2 > 0){
		
		meditated = (note1 +(note2 * 2))/3;
		n_media = (note1 + note2)/2;

	}else{
		
		note1 = 0;
		note2 = 0;
		std::cout<<"\nWaring: ";
		std::cout<<" Notes not is valid values are negatives, please type notes valid or positives\n\n";
		
	}
	
}

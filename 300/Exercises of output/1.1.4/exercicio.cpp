#include "iostream"
#include "conio.h"
#include "stdlib.h"
const char a= 160;// aa = á
const char ac= 132;// ac= ã
const char c= 135;// c=ç
const char e= 130;// aa = é
const char et= 136;// et =ê
const char i= 161;// aa = í
const char o= 162;// aa = ó
const char u= 163;// aa = ú
const char p= 167;// p = º

int main(void){
	std::cout<<"Carta"<<std::endl;
	std::cout<<"Destinat"<<a<<"rio: Luanda-Bairro Benfica \n";
	std::cout<<"Casa N"<<p<<" 43 \n";
	std::cout<<"Para: "<<"Jer"<<o<<"nimo Kimbila Camuenga"<<std::endl;
	std::cout<<"-------------------------------------------------------------------------------\n";
	std::cout<<"Mensagem: \n Ol"<<a<<" pap"<<a<<"! Espero que estejas bem porque tamb"<<e<<"m estou, escrevo \n est"<<a<<" carta para dizer como";
	std::cout<<" sou grato por ter te como pai n"<<ac<<"o sei como dizer, \n mas nunca tive e nunca terei um pai como voc"<<et<<" a tua for"<<c;
	std::cout<<"a supera a minha e "<<e<<"s a raz"<<ac<<"o de eu ser o que sou.\n";
	std::cout<<" \n Tens todas as qualidades que um pai pode ter "<<e<<"s forte, misericordioso, protetor provedor e amoroso. \n";
	std::cout<<"--------------------------------------------------------------------------------\n";
	std::cout<<"Enviada por: Leumim Da Rocha Camuenga";char a =3;std::cout<<a<<"\n";
	std::cout<<"Clique Enter para fechar a carta!";
	getch();
	system("cls");
	std::cout<<"Carta fechada!";
	return 0;
}

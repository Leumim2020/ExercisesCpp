/*Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros natu-
rais que não são múltiplos de 7 ou que terminam com 7*/

#include <iostream>
#define s 100


int main() {

    int valor[s];

    for(int j=0;j < s;j+=1){
        if( j % 7 !=0 || ((j+3) % 10) == 0){
            valor[j] = j;
            std::cout<<valor[j]<<std::endl;
        }
    }


    return 0;
}
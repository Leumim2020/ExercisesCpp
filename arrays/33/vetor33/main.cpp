/*Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, elimine as
posições com valor zero. Para isso, todos os elementos à frente do valor zero, devem ser
movidos uma posição para trás no vetor.*/

#include <iostream>
#define size 15

void showarray_compacted(int a[],int s)
{

    std::cout<<"Array compactado: ";

    for(int i = 0; i < s; i++)
    {
        if(a[i] == false)
            continue;
        else
            std::cout<<a[i]<<" ";
    }

}


int main()
{
    int valor[size],move_back;


    // input dados
    for(int i = 0; i < size; i++)
    {
        std::cout<<"Valor"<<i+1<<"-> ";
        std::cin>>valor[i];
    }
    // move_back recebe valores movidos um indice à menos ou mover trás
    move_back = 0;

    for(int j = 0; j <= size-1; j++)
    {
        if(valor[j] == false)
            continue;
        else
        {
            valor[move_back] = valor[j];// movendo valores diferentes de 0 para trás
            move_back++;
        }

    }

    // atribuindo 0 para posições que contém valor já copiado
    for(int k = move_back; k <= size-1; k++)
        valor[k]=0;

    // mostrar o array compactado
    showarray_compacted(valor,size);



    return 0;
}

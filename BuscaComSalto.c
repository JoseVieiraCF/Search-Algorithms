#include <stdio.h>
#include <math.h>


int BuscaComSalto(int array[], int element, int n){
    int salto,inicio,fim;
    salto = fim = sqrt(n);
    inicio = 0;
    while (element > array[fim])
    {
        inicio = fim;
        fim = fim+salto;
        if (fim>n)
        {
            fim = n;
            break;
        }
    }
    printf("%d",fim);
    for (int i = inicio; i <= fim; i++)
        {
            if (array[i] == element)
            {
                return i; //retorna o indice em que o elemento foi encontrado
            }
            
        }
    return -1;  //retorna -1 caso não encontre
}


int main(int argc, char const *argv[])
{
    int array[] = {2,6,8,9,12};
    printf("Encontrado no indice : %d",BuscaComSalto(array,13,5));
    return 0;
}

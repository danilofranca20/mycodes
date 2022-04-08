#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    float gasolina, alcool, diferenca;

    printf("Digite o valor da gasolina.\n");
    scanf(" %f", &gasolina);

    printf("Digite o valor do etanol.\n");
    scanf(" %f", &alcool);

    if(gasolina>0)
       if((alcool/gasolina)<=0.7)
             printf("Abasteça com etanol.\n");
       else
             printf("Abasteça com gasolina.\n");


}

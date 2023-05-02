
#include <stdio.h>
#include <locale.h>

int main()
{
    int x, cont, y=0;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    if (x % 2 == 0)
        x++;
    
    for (cont=x; y <= 6; y++)
    {
        if (cont % 2 == 1)
        {
            printf("%d\n", cont);
            cont = cont + 2;
        }
    }
}

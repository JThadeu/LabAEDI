#include <stdio.h>

main()

{
int n,resto,soma;

scanf("%d",&n);
soma=0;

while (n>0)
{
resto=n%10;
n=(n-resto)/10;
soma=soma+resto;
}

printf("A soma eh %d \n",soma);

}

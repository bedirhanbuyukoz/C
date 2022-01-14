
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"Turkish");

int i=5;
int j=10;

int sayilar[] = {5,10,15,20};

printf("%d\n",sayilar[3]);


return 0;

}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL,"Turkish");


int sayilar[] = {5,10,15,20};

for(int i =0 ;i<4;i++){
  printf("Sayılar isimli dizinin %d. elemanı = %d\n",i+1,sayilar[i]);
}


return 0;


}
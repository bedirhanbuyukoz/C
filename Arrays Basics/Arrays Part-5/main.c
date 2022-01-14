#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL,"Turkish");

int i;
float sayilar[7] = {};

for( i =0 ;i<7;i++){
  printf("%d. elemanı giriniz...\n",i+1);
  scanf("%f",&sayilar[i]);
}

for( i =0 ;i<7;i++){
  printf("%f ",sayilar[i]);
  
}

return 0;

}
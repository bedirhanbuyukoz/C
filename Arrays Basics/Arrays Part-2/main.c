#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL,"Turkish");


int sayilar[] = {5,10,15,20};

for(int i =0 ;i<4;i++){
  printf("%d\n",sayilar[i]);
}


return 0;


}
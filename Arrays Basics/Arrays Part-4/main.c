#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL,"Turkish");


float sayilar[] = {1.5,2.1,33.1,4.2};

for(int i =0 ;i<4;i++){
  printf("%f\n",sayilar[i]);
}


return 0;


}
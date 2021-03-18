//disardan girilen n sayisina kadar olan sayilarin karelerinin toplamini hesaplayan program
#include <stdio.h>
#include <conio.h>


int main()
{ 
    int n,i,toplam;
    
    printf (" Bir sayi giriniz : " );
    scanf("%d",&n);
     
      toplam=0;

      for  (i=1; i<=n; i++ )
   
      toplam = toplam + i*i;

      printf (" Girilen sayinin  karelerinin toplami : %d", toplam );
           
    getch();
    // ekranin kapanmasini engelliyor..
}

//Zadatak je zbrojit 2 broja koja korisnik unese pomocu funkcije suma.

#include <stdio.h>

int suma(int a, int b){
   return a+b;
}
int main()
{
   int br1, br2, ukupno;
   printf("Unesi prvi broj: ");
   scanf("%d", &br1);
   printf("Unesi drugi broj: ");
   scanf("%d", &br2);

   //Poziv funkcije
   ukupno = suma(br1, br2);
   printf("Suma unesenih brojeva je: %d", ukupno);
   return 0;
}

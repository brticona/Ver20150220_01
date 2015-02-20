#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
   
   const int N = 5 ;
   int  i ;
   int maggiorenni;
   int vettore [N];
   printf("Inserisci l'eta delle 5 persone \n");
   i = 0;
   while ( i < N) {
       printf ("Inserisci l'eta della %da persona :",i+1);
       scanf("%d",&vettore[i]);
       i = i + 1 ;
   }  
   i = 0;
   maggiorenni = 0;
   
   while (i < N) {
       if (vettore [i] > 17){
         maggiorenni = maggiorenni + 1;
         i = i + 1 ; }
         else {
             i = i +1 ;
         }
   }
   printf ("I maggiorenni sono:%d" ,maggiorenni);
    

    return (EXIT_SUCCESS);
}


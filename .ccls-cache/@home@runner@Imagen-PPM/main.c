#include <stdio.h>

int main(void) {
    FILE*FP;
    FP=fopen("imagen.ppm","w");
    fprintf(FP,"P3ªn 100 10\n 255\n");
  
    int blanco = 255;
    int negro = 0;
    for(int i=0;i<10;i++);{
        fprintf(FP, "\n" );
        for(int i=0;i<5; i++){
            for(int i=1;i<=9;i++){
               fprintf(FP, " %i %i %i ", negro,negro,negro);
            } 

            for(int i=1;i<=9;i++){
               fprintf(FP, " %i %i %i ", blanco,blanco,blanco);
            }
        }
   }
   fclose(FP);

return 0 ; 
}
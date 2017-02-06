#include <stdio.h>
#include <stdlib.h>

#define pi 3.14
#define frac (4.0f/3.0f)


int main (int argc, char **argv){
   float rad, vol;

   printf("Input sepher radius: \n");
   scanf("%f",&rad);

   vol=frac*pi*rad;

   printf("the volume of sphere with %.1f radius is %.1f\n", rad, vol);
   
   return EXIT_SUCCESS;
}

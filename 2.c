#include <stdio.h>
#include <stdlib.h>

#define fraction (4.0f/3.0f)
#define pi 3.14
#define r 10

int main (int argc, char **argv){

   float vol;
   vol=pi*fraction*r*r*r;

   printf("the volume of sphere with 10-meter radius is %.1f\n",vol);


   return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

float celsius;
float fahrenheit;

float deep;


int main() {



               printf("Insert your deep \n");
               scanf("%f", &deep);

               celsius = (10 * deep) + 20;

               printf("Here are the celsius \n");

               printf("%.2f \n", celsius);





               printf("Calculating fahrenheit... \n");


               fahrenheit = (1.8 * celsius) + 32;

               printf("%.2f \n", fahrenheit);



       printf("Here you have your results \n");

       system("pause");

       return 0;

}

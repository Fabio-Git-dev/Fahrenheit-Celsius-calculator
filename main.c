#include <stdio.h>
#include <stdlib.h>

float celsius;  //variables for the degree values
float fahrenheit;

float deep;

//start of main funciton
int main() {



               printf("Insert your deep \n");
               scanf("%f", &deep);

               celsius = (10 * deep) + 20;  //operand for celsius

               printf("Here are the celsius \n");

               printf("%.2f \n", celsius);





               printf("Calculating fahrenheit... \n");


               fahrenheit = (1.8 * celsius) + 32; //operand for fahrenheit

               printf("%.2f \n", fahrenheit);



       printf("Here you have your results \n");

       system("pause");

       return 0;

} //end of function

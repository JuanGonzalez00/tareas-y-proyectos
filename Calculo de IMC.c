#include <stdio.h>
int main (){
    float altura,peso,imc;
    printf ("ingresa su estatura en metros: ");
    scanf ("%f" ,&altura );
    printf ("ingresa tu peso en kilogramos: ");
    scanf ("%f", &peso);
    imc = peso / (altura*altura);
    printf ("tu IMC es : %f \n", imc);

    if (imc<18.5) 
    printf ("Eres delgado");

    if (imc>= 18.5 && imc<24.9)
    printf("peso ideal");

    if (imc>25.9 && imc<29.9 )
    printf("Tienes sobrepeso");
   
   if (imc>=29.9 && imc<34.9)
   printf("Tienes obesidad grado 1");
   if(imc>=34.9 && imc<=39.9)
   printf ("Tienes obsediad tipo 2 ");

   if(imc>39.9)
   printf ("Tienes obesidad tipo 3");

   return 0;
}


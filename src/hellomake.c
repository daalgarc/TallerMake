#include <hellomake.h>
#include <stdio.h>

int main() {

	char cadena[100];

	// call a function in another file
	myPrintHelloMake();

	printf("\nIngrese una cadena de caracteres:\n\n");
	scanf("%s", cadena);

	int resultado = esPalindromo(cadena);

	if (resultado == 1)
		{
		    printf("\nLa cadena de caracteres es palíndromo\n\n");	
		}
	   
	   else if (resultado == 0)
		{
		    printf("\nLa cadena de caracteres no es palíndromo\n\n");
		}

  return(0);
}

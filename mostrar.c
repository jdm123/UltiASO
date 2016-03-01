#include <stdio.h>
#include "mensaje.h"

int main(void)
{
	char mensaje_bienvenida[] = {"Hola mundo C"};
	char mensaje_despedida[] = {"Hasta otra oportunidad"};
	printf ("%s\n", mensaje_bienvenida);
	imprimir_mensaje(mensaje_despedida);
	return 0;
}

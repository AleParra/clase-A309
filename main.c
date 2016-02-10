#include <stdio.h>
#include <stdlib.h>


void main()
{
	int dato1,dato2,resultado;
	dato1 = 20;
	dato2 = 10;

	//SUMA
	resultado= dato1+dato2;
	printf("\n%d + %d = %d\n\n",dato1,dato2,resultado);

	//RESTA
	resultado= dato1-dato2;
	printf("%d - %d = %d\n\n",dato1,dato2,resultado);

	//PRODUCTO
	resultado= dato1*dato2;
	printf("%d * %d = %d\n\n",dato1,dato2,resultado);

	//COCIENTE
	resultado= dato1/dato2;
	printf("%d / %d = %d\n\n",dato1,dato2,resultado);

	system("pause");
}


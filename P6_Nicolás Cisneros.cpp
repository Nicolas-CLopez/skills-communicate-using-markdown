<h2>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
	
	//-------primer código---------
	float x, z;
	int y, flag1;
	double e, fact; 
	
	printf("---N%cMERO DE EULER---\n",163);

do{
	
	printf("Ingresa la cantidad de digitos con los que quieres calcular euler\n");
	
	do{
	
		if(scanf("%f", &x)==0)
		{
			flag1 = 1;
			printf("\n----Caracter detectado, introduce un numero entero----\n");
			fflush(stdin);
		}
		else if(x==0)
		{
			flag1 = 0;
		}
		else if(((int)x/x)!=1)
		{
			flag1 = 1;
			printf("\n----Flotante detectado, introduce un numero entero.----\n");
			fflush(stdin);
		}
		else if(x<0)
		{
			flag1 = 1;
			printf("\n----Introduce numeros positivos----\n");
			fflush(stdin);
		}
		else 
		{
			flag1=0;
			fflush(stdin);
		}
	}
	while(flag1==1);
	
	if(x==0)
	{
		printf("\nEl valor de euler con 0 numeros es: 1"); 
	}
	else
	{
		e = 1.0;
		fact = 1.0;
		
		for(y=1;y<=x;y++)
		{
			fact *= y;
			
			e += 1.0/fact;
		}
		printf("\n\nEl valor de euler calculado con %i es: %.55f ", x, e);
	}

	
	printf("\n\n%cDesea repetir el codigo? (1)Si (2)No\n", 168);

	do{	
	if(scanf("%f", &z)==0)
	{
		flag1 = 1;
		printf("\n----Caracter detectado, introduce una opci%cn valida----\n", 162);
		fflush(stdin);
	}
	else if(((int)z/z)!=1)
	{
		flag1 = 1;
		printf("\n----Flotante detectado, introduce una opci%cn valida----\n", 162);
		fflush(stdin);
	}
	else if((z<1)&&(z>2))
	{
		flag1 = 1;
		printf("\n----Opci%cn no encontrada, introduce una opci%cn valida----\n", 162, 162);
		fflush(stdin);
	}
	else 
	{
		flag1 = 0;
	}
	}while(flag1==1);
	
	if(z==1)
	{
		flag1 = 1;
	}
	else if(z==2)
	{
		flag1 = 0;
		printf("\nFin del programa :)"); 
	}
}while(flag1==1);

//-----segundo código-------

	float w;
	int i, j;
	
	printf("\n\n---FACTORES PRIMOS---\n");

do{
	
	printf("\nIntoduce el numero que quieres saber sus factores primos: ");
	do{
		if(scanf("%f", &w)==0)
		{
			flag1 = 1;
			printf("\n----Caracter detectado, introduce un numero entero----\n");
			fflush(stdin);
		}
		else if(((int)w/w)!=1)
		{
			flag1 = 1;
			printf("\n----Flotante detectado, introduce un numero entero.----\n");
			fflush(stdin);
		}
		else if(w<=0)
		{
			flag1 = 1;
			printf("\n----Introduce numeros mayores a cero----\n");
			fflush(stdin);
		}
		else 
		{
			flag1=0;
			fflush(stdin);
		}	
	}while(flag1==1);
	
	i=w;
	
	printf("\nLos factores primos son: ");

	for(j=2;i>=1;j++)
	{
		
		if((i%j)==0)
		{
			i/=j;
			printf("%i, ", j);
			
			for(;(i%j)==0;)
			{
				i/=j;
				printf("%i, ", j);
			}
		}
		
		if(i==1)
			break;
	}
	
	printf("\n\n%cQuieres introducir otro numero? (1)SI (2)NO\n", 168);
	do{	
	if(scanf("%f", &w)==0)
	{
		flag1 = 1;
		printf("\n----Caracter detectado, introduce una opci%cn valida----\n", 162);
		fflush(stdin);
	}
	else if(((int)w/w)!=1)
	{
		flag1 = 1;
		printf("\n----Flotante detectado, introduce una opci%cn valida----\n", 162);
		fflush(stdin);
	}
	else if((w<1)&&(w>2))
	{
		flag1 = 1;
		printf("\n----Opci%cn no encontrada, introduce una opci%cn valida----\n", 162, 162);
		fflush(stdin);
	}
	else 
	{
		flag1 = 0;
	}
	}while(flag1==1);
	
	i=w;
	
	if(w==1)
	{
		flag1 = 1;
	}
	else if(i==2)
	{
		flag1 = 0;
		printf("\nFin del programa :)"); 
	}
	
}while(flag1==1);
	
	getch();
	
	return 314;
}

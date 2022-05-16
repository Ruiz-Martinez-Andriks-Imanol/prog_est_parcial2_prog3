/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 24/03/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa de funciones, ciclos y condicionales en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:
  
    -Variables tipo enteros y flotantes
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -Uso de la librería math.h
    -Arreglo por método de la burbuja
    -Ciclos
    -Contador
    -Condicionales
    -Arreglos
    -Funciones
    -Prototipos
    -switch
    -#define MAX  para definir cierta cantidad para el arreglo
    -Comentarios para la documentación interna del programa
	*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
//Prototipos
 int menu();
 float validarFlotantes(float inferior, float superior);
 int validarEnteros(int inferior, int superior);
 void llenar(float x[], int y[]);
//principal
int main() {
	float cal[MAX];
	int faltas[MAX];
	int opcion;
	do {
		opcion=menu();
		switch(opcion){
			case 0: printf("Adios........\n");
				break;
			case 1: llenar (cal, faltas);
				break;
			case 2: printf ("Entrastes a la opcion 2\n");
				system("PAUSE");
				break;
			case 3: printf ("Entrastes a la opcion 3\n");
				system("PAUSE");
				break;
			case 4: printf ("Entrastes a la opcion 4\n");
				system("PAUSE");
				break;
			case 5: printf ("Entrastes a la opcion 5\n");
				system("PAUSE");
				break;
		}	
	}while(opcion!=0);
	return 0;
}
//Funciones
//Funcion que muestra el menu, pide una uopcion, la valida y la regresa
 int menu(){
 	int opcion;
	printf("-------- MENU PRINCIPAL ---------\n");
	printf("0. Salir \n");
	printf("1. Introducir datos \n");
	printf("2. Imprimir \n");
	printf("3. Promedio del grupo \n");
	printf("4. Cuantos aprobaron \n");
	printf("5. Porcentaje de aistencia \n");
	printf("--------------------------------------\n");
	printf("Selecciona una opcion: ");
	opcion=validarEnteros(0,5);
	return opcion;
}
void llenar(float x[], int y[]){
	printf("Introducir datos de los alumnos\n");
	for(int i =0;i<MAX;i++){
		printf("Alumno #%d------------------------\n",i);
		printf("Calificacion: ");
		//Validar calificaciones
		x[i]=validarFlotantes(0,10);
		printf("Faltas: ");
		y[i]=validarEnteros(0,32);
	}
}
float validarFlotantes(float inferior, float superior){
	float valor;
	do{
		scanf("%f",&valor);
		if (valor<inferior || valor>superior){
			printf("\n Dato invalido!!! Debe estar entre (%.2f-%.2f). Vuelva introducirlo: \n",inferior, superior);
		}
	}while(valor<inferior || valor>superior);
	return valor;
}
int validarEnteros(int inferior, int superior){
	int valor;
	do{
		scanf("%d",&valor);
		if (valor<inferior || valor>superior){
			printf("Dato invalido!!! Debe estar entre (%d-%d). Vuelva introducirlo: \n",inferior, superior);
		}
	}while(valor<inferior || valor>superior);
	return valor;
}

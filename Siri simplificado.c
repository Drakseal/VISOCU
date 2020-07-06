//Este programa será una versión de Siri pero más simplificada y con comandos de números
//Se estima que se pueda llegar a tardar 4 meses de trabajo sin contar cuando no se abra

//10/4/2020 Inicia. Nombre cambiado a VISOCU
//13/4/2020 Solucionado los problemas de las condiciones cambiandolo todo a una variable, también he completado primariamente la calculadora, pero tengo que poner más orden en el código. Es por ahora sin duda el programa más largo que he hecho. También he tenido que cambiar al principio las variables y ponerlo todo a h y he añadido que pasaria si alguien pusiera un numero mayor al que se pide. Por la tarde he añadido la opcion de empezar el programa despues de ver la ayuda. Aun falta mucho programa, todavia hay que añadir la opcion de continuar o salir despues de elegir una accion. Por ahora el total de lineas de codigo es de 206
//20/4/2020 Añadido el borrado de texto cada vez que sea un número erroneo al iniciar sistema
//11/5/2020 Simplemente he añadido un texto que diga, al abrir la calculadora: volver a inicio o cerrar sesion, pero no lo he programado.
//22/6/2020 Cronometro añadido al pulsar el 6, ahora el 7 es para cerrar sesion
//23/6/2020 Añadidas la opcione de cronometro en texto al pulsar la ayuda
//28/6/2020 Script del planning completado, lo malo, es que no pueden haber espacios, veré como lo soluciono
//28/6/2020 He añadido el script del planning al programa, pero solo despues de la ayuda, por ahora, HAY QUE AÑADIR QUE SI SE PULSA EL 2 AL ABRIR LAS APPS SE SALGA DEL SISTEMA

#include<stdio.h>
#include<string.h>
#include<math.h>
#define PI 3.1416

int main() {
	
	char log[8]; //log de login
	char pla[1000]; //pla de planning
	int h, i, s, o, k, l, t, m, seg, n, p;
	float z, w;
	
	h = 1;
	i = 2;
	o = 1;
	p = 0;
	
	n = 1000;
	
	do {
	
	printf("\t\t\t\tIniciando sistema...\t\n");
	printf("\t\t\t\t------------------\t\n");
	
	Sleep(1000);
	
	printf("Por favor, registre su nombre (max 8 caract.):  ");
	scanf("%s",&log); //%s de string
	
	printf("Bienvenido al sistema %s\n",log);
	
	printf("Que desea hacer ?\n");
	
	printf("1 para ayuda\n2 para iniciar sesion\n");	
	scanf("%i",&h);
	
	if(h == 1) {
		printf("Aqui tienes la guia completa:\n Todo el sistema menos el nombre de usuario se controla con numeros, por lo que es mas facil de comprender. Al empezar el sistema tiene 2 opciones. 1 para la ayuda la cual esta viendo ahora o 2 para iniciar sesion, al pulsar 2, el sistema se iniciara y tendra mas opciones para elegir: 1 para ayuda\n3 para ver el tiempo segun su zona\n4 para ver el planning\n5 para abrir la calculadora\n6 para abrir el cronometro\n7 para cerrar sesion\nDentro de estas opciones habra algunas las cuales usted podra añadir eventos o cambiar informacion. Esperamos que disfrute de esta intezfaz y que no tenga ningun problema.\n");
		
		printf("Desea entrar al sistema ahora ? 2 si 1 no\n");
		scanf("%i",&h);
		
		if(h == 1) {
			system("cls");
		}
		else if(h == 2) {
			printf("\t\t\t\tEntrando al sistema...\t\n");
			printf("\t\t\t\t------------------\t\n");
			printf("Buenas %s, mi nombre es V.I.S.O.C.U (Virtualidad Interfacial Simplificada Orientada a la Compañia de Usuarios)\n Estoy aqui para ayudarle en lo que necesite\nComo ha podido observar, este sistema se controla por numeros. Esto es porque estoy programado en C y es mejor ser controlado por numeros que por caracteres en C.\n",log);
		
			system("pause");
		
			printf("1 para ayuda\n3 para ver el tiempo segun su zona\n4 para ver el planning\n5 para abrir la calculadora\n6 para abrir el cronometro\n7 para cerrar sesion\n");
			scanf("%i",&s);
			if(s == 1) {
				printf("Aqui tienes la guia completa:\n Todo el sistema menos el nombre de usuario se controla con numeros, por lo que es mas facil de comprender. Al empezar el sistema tiene 2 opciones. 1 para la ayuda la cual esta viendo ahora o 2 para iniciar sesion, al pulsar 2, el sistema se iniciara y tendra mas opciones para elegir: 1 para ayuda\n3 para ver el tiempo segun su zona\n4 para ver el planning\n5 para abrir la calculadora\n6 para abrir el cronometro\n7 para cerrar sesion\nDentro de estas opciones habra algunas las cuales usted podra añadir eventos o cambiar informacion. Esperamos que disfrute de esta intezfaz y que no tenga ningun problema.\n");
			}
			else if(s == 3) {
				printf("El tiempo segun tu zona es: 27 grados y soleado\n");
			}
			else if(s == 4) {
			printf("Organice el planning(sin espacios de ningun tipo): ");
			scanf("%s",&pla);
		
		
			printf("Desea ver el planning o volver al inicio ? 4 para ver, 1 para volver al inicio 3 para cerrar sesion: \n");
			scanf("%i",&p);
			
			if(p == 4) {
			
			printf("%s\n",pla);
			}else if(p == 1) {
				
				printf("inicio\n");
			}else if(p == 3) {
			
			system("cls");
			}else if(p == 2) {
			
			printf("Caracter desconocido\n");
			system("cls");
			}else if(p > 4) {
			
			printf("Caracter desconocido\n");
			system("cls");
			}else if(p < 1) {
			
			printf("Caracter desconocido\n");
			system("cls");
			}
			
			}else if(s == 5) {
			printf("Que operacion desea hacer ?\n1 para suma\n2 para resta\n3 para multiplicacion\n4 para division\n5 para volver al inicio\n6 para cerrar sesion\n");
			scanf("%i",&o);
				if(o == 1) {
					printf("Suma:  ");
					scanf("%i",&k);
		
					printf("Suma:  ");
					scanf("%i",&l);
		
					printf("El resultado es: %i\n\n",k+l);
		
					system("pause");
					}
					else if(o == 2) {
						printf("Resta:  ");
						scanf("%i",&k);
		
						printf("Resta:  ");
						scanf("%i",&l);
		
						printf("El resultado es: %i\n\n",k-l);
		
						system("pause");
			}
						else if(o == 3) {
							printf("Multiplicacion:  ");
							scanf("%i",&k);
	
							printf("Multiplicacion:  ");
							scanf("%i",&l);
	
							printf("El resultado es: %i\n\n",k*l);
		
							system("pause");
			}
						else if(o == 4) {
							printf("Division: ");
							scanf("%f",&z);
		
							printf("Division:  ");
							scanf("%f",&w);
		
							printf("El resultado es: %f\n\n",z/w);
			}
		}
			else if(s == 7) {
			system("cls");
		}
			else if(s == 6) {
				for(t = 0; t < 24; t++) {
		for(m = 0; m < 60; m++) {
			for(seg = 0; seg < 60; seg++){
				printf("%02i:%02i:%02i\r",t,m,seg);
				Sleep(n);
			}
		}
	}
			}
		else if(s > 7) {
			printf("Numero desconocido\n");
			system("cls");
		}
		else if(s == 2) {
			printf("Numero desconocido\n");
			system("cls");
		}
		
}
else if(h > 2) {
		printf("Numero desconocido\n");
		system("cls");
	}
	}
	else if(h == 2) {
		printf("\t\t\t\tEntrando al sistema...\t\n");
		printf("\t\t\t\t------------------\t\n");
		printf("Buenas %s, mi nombre es V.I.S.O.C.U (Virtualidad Interfacial Simplificada Orientada a la Compañia de Usuarios)\n Estoy aqui para ayudarle en lo que necesite\nComo ha podido observar, este sistema se controla por numeros. Esto es porque estoy programado en C y es mejor ser controlado por numeros que por caracteres en C.\n",log);
		
		system("pause");
		
		printf("1 para ayuda\n3 para ver el tiempo segun su zona\n4 para ver el planning\n5 para abrir la calculadora\n6 para abrir el cronometro\n7 para cerrar sesion\n");
		scanf("%i",&s);
		
		if(s == 1) {
			printf("Aqui tienes la guia completa:\n Todo el sistema menos el nombre de usuario se controla con numeros, por lo que es mas facil de comprender. Al empezar el sistema tiene 2 opciones. 1 para la ayuda la cual esta viendo ahora o 2 para iniciar sesion, al pulsar 2, el sistema se iniciara y tendra mas opciones para elegir: 1 para ayuda\n3 para ver el tiempo segun su zona\n4 para ver el planning\n5 para abrir la calculadora\n6 para abrir el cronómetro\n7 para cerrar sesion\nDentro de estas opciones habra algunas las cuales usted podra añadir eventos o cambiar informacion. Esperamos que disfrute de esta intezfaz y que no tenga ningun problema.\n");
		}
		else if(s == 3) {
			printf("El tiempo segun tu zona es: 27 grados y soleado\n");
		}
		else if(s == 4) {
			printf("El planning para hoy es: \n");
		}
		else if(s == 5) {
			printf("Que operacion desea hacer ?\n1 para suma\n2 para resta\n3 para multiplicacion\n4 para division\n5 para volver al inicio\n6 para cerrar sesion\n");
			scanf("%i",&o);
			if(o == 1) {
					printf("Suma:  ");
		scanf("%i",&k);
		
		printf("Suma:  ");
		scanf("%i",&l);
		
		printf("El resultado es: %i\n\n",k+l);
		
		system("pause");
			}
			else if(o == 2) {
				printf("Resta:  ");
		scanf("%i",&k);
		
		printf("Resta:  ");
		scanf("%i",&l);
		
		printf("El resultado es: %i\n\n",k-l);
		
		system("pause");
			}
			else if(o == 3) {
				printf("Multiplicacion:  ");
				scanf("%i",&k);
	
				printf("Multiplicacion:  ");
				scanf("%i",&l);
	
				printf("El resultado es: %i\n\n",k*l);
		
				system("pause");
			}
			else if(o == 4) {
				printf("Division: ");
				scanf("%f",&z);
		
				printf("Division:  ");
				scanf("%f",&w);
		
				printf("El resultado es: %f\n\n",z/w);
			}
		}
		else if(s == 7) {
			system("cls");
		}
		else if(s == 6) {
				for(t = 0; t < 24; t++) {
		for(m = 0; m < 60; m++) {
			for(seg = 0; seg < 60; seg++){
				printf("%02i:%02i:%02i\r",t,m,seg);
				Sleep(n);
			}
		}
	}
			}
		else if(s > 7) {
			printf("Numero desconocido\n");
			system("cls");
		}
		
	}
	else if(h > 2) {
		printf("Numero desconocido\n");
		system("cls");
	}

	
	} while(log == 0);
	
	system("pause");
	return 0;
}

/******************************************************************************
 
 autor -> Luis Acosta	
 Carrera -> Ing. Informatica
 seccion -> C611
 
*******************************************************************************/
 
 // Libreria
#include <iostream>

using namespace std;

// Funciones

	// Bienvenida y objetivo del programa
	void Panel();

	// Registro de entrada datos
	void Entrada();

	// Validacion de datos dentro del rango de entre 1 y 20
	void ValidaEntrada(float Nota);

	// Calcula el promedio del estudiante 
	void CalculaDefinitiva(float DcorteUno, float DcorteDos);

	// Se presentan las notas y ver si aprueba o no
	void PresentaDefinitiva(float definitiva);

	// repetir o no el programa
	void volver();

// Comienzo Programa
int main(){	

Panel();

    return 0; // Fin
}
// Final Programa

	// Bienvenida y objetivo del programa
	void Panel(){

		system("CLS");
			cout << "============================================================="<<endl;
			cout << "autor -> Luis Acosta"<<endl<<"Carrera -> Ing. Informatica"<<endl<<"seccion -> C611"<<endl;
			cout << "=============================================================\n"<<endl;

			cout << "============================================================="<<endl;
			cout << "Progrma para evaluar si has aprobado o Reprobado la materia!!"<<endl<<"Tiene un rango de entre 1 y 20 para evaluar la notas"<<endl;
			cout << "=============================================================\n"<<endl;

		// Funcio de entrada de datos
			Entrada();
	}
	// Registro de entrada datos
	void Entrada(){

		//variables locales
		 	float NotaCorteUno = 0; // Nota del primer cortes
 			float NotaCorteDos = 0; // Nota del segundo corte

		// Datos a solicitar
		    cout << "Nota del Primer corte: "; cin >> NotaCorteUno; // Nota corte 1
		    ValidaEntrada(NotaCorteUno); // Valida que la nota del corte 1 esta dentro del rango

		    cout << "Nota del Segundo corte: "; cin >> NotaCorteDos; // Nota Corte 2
		    ValidaEntrada(NotaCorteDos); // Valida que la nota del corte 2 esta dentro del rango


		// Calcula los datos dentro del rango
		    CalculaDefinitiva(NotaCorteUno, NotaCorteDos);
	}

	// Validacion de datos dentro del rango de entre 1 y 20
	void ValidaEntrada(float Nota){

		// Valida si los datos estan dentro del Rango
			if (Nota >= 1 and Nota <=20){
				cout<<endl; // Se confirma que los datos si estan dentro del rango y continua el programa
			}
			else{
				cout << "La nota no estan dentro del rango!!.. Comienza de nuevo\n"<<endl;
				system("Pause");
				Panel(); // Los datos no estan dentro del rango y vuelve a pedir datos
			}
	}

	// Calcula el promedio del estudiante 
	void CalculaDefinitiva(float DcorteUno, float DcorteDos){

			// Variable local
			float Promedio = 0; // promedio de las notas

			// Calcula el promedio
			Promedio = (DcorteUno * 0.4) + (DcorteDos * 0.6);

			PresentaDefinitiva(Promedio); // evalua si aprobo o no
	}

	// Se presentan las notas y ver si aprueba o no
	void PresentaDefinitiva(float definitiva){

			// Se evaulua si el estudiante aprobo o no la materia 
		if (definitiva >= 9.5){
			cout << "Tu Promedio es : "<<definitiva<<endl; // Aprobo la materia 
			cout << "En Hora Buenas, Aprobaste la materia Felicidades!!!..."<<endl;
			volver();
		}
		else{
			cout << "Tu Promedio es : "<<definitiva<<endl; // Repobro la materia
			cout << "Malas Noticias acabas de Reprobar la Materia, suerte para la proxima!!!..."<<endl;
			volver();
		}
	}

	void volver(){

			// Variable local
			int opcion; // repetir o no el programa

			cout << "\nDeseas Evaluar otras notas? :"<<endl;
			cout << "1- Si "<<endl;
			cout << "2- No "<<endl; 
			cout << "Opcion: "; cin>> opcion;
			if (opcion == 1){
				Panel();
			}
			else{
				cout << "\nFin del Programa Vuelve pronto!!\n";
			}
	}

/******************************************************************************
 
 autor -> Luis Acosta	
 Carrera -> Ing. Informatica
 seccion -> C611
 
*******************************************************************************/

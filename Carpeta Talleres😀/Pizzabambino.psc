Algoritmo Pizzabambinos
	//Declarar variables
	Definir radio, areaPizza, areaPorporcion, areaPorComensal Como Real
	Definir numComensales, numPorciones Como Entero
	Definir porcionesPorPersona Como Real
	Constante<-3.14
	//Datos de entrada
	Escribir"Ingrese el radio de la Pizza(en cm)"
	Leer radio 
	Escribir" Ingrese el N�mero de comensales"
	Leer numComensales 
	Escribir"Ingrese el n�mero de porciones"
	Leer numPorciones
	//C�lculos
	areaPizza<-Constante*radio*radio
	areaPorPorci�n<-areaPizza/numPorciones
	porcionesPorPersona<-numPorciones/numComensales
	areaPorComensal<-porcionesPorPersona*areaPorporcion
	//Salida
	Escribir "RESULTADOS"
	Escribir"El area de toda la pizza es ",areaPizza,"cm�"
	Escribir"Cada comensal recibe", porcionesPorPersona, "Porciones, y tienen un area de", areaPorComensal, "cm� por persona"
	
FinAlgoritmo

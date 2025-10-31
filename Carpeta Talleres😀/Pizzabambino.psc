Algoritmo Pizzabambinos
	//Declarar variables
	Definir radio, areaPizza, areaPorporcion, areaPorComensal Como Real
	Definir numComensales, numPorciones Como Entero
	Definir porcionesPorPersona Como Real
	Constante<-3.14
	//Datos de entrada
	Escribir"Ingrese el radio de la Pizza(en cm)"
	Leer radio 
	Escribir" Ingrese el Número de comensales"
	Leer numComensales 
	Escribir"Ingrese el número de porciones"
	Leer numPorciones
	//Cálculos
	areaPizza<-Constante*radio*radio
	areaPorPorción<-areaPizza/numPorciones
	porcionesPorPersona<-numPorciones/numComensales
	areaPorComensal<-porcionesPorPersona*areaPorporcion
	//Salida
	Escribir "RESULTADOS"
	Escribir"El area de toda la pizza es ",areaPizza,"cm²"
	Escribir"Cada comensal recibe", porcionesPorPersona, "Porciones, y tienen un area de", areaPorComensal, "cm² por persona"
	
FinAlgoritmo


	Algoritmo PromedioNotas
		Definir notas1, notas2, notas3, notas4, notas5 como entero;
		Definir promedio como real;
		
		Escribir "Ingrese las 5 notas del estudiante:";
		Leer notas1;
		leer notas2;
		leer notas3;
		leer notas4;
		leer notas5;
		promedio <-notas1 + notas2 + notas3 + notas4 + notas5 / 5;
	
		Si promedio > 85 Entonces
			Escribir "¡Felicitaciones! El promedio del estudiante es ", promedio, " y es mayor a 85.";
		Sino
			Escribir "¡Ánimo! El promedio del estudiante es ", promedio, " puedes hacerlo mejor!";
		FinSi
		
FinAlgoritmo





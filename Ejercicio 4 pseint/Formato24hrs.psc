// 1. Leer la hora en formato 24 horas y decir si es de día o de noche.
Proceso Formato24hrs
	Definir hora Como Entero;
	Escribir 'Digite la hora en formato de 24 horas: ';
	Leer hora;
	Si hora>=6 Y hora<18 Entonces
		Escribir 'Es de dia';
	SiNo
		Escribir 'Es de noche';
	FinSi
FinProceso

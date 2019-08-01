#ifndef NUMEROPADOVAN_H
#define NUMEROPADOVAN_H

class NumeroPadovan{
private:
	// Atributos de la clase
    long terminoAnterior;
    long terminoAnteriorAnterior;
	long terminoAnteriorAnteriorAnterior;
	
    long terminoActual;
	long numeroVecesActualizado;
	long valor;

public: 
	// Metodos de la clase
	NumeroPadovan();
	long getValor();
	void println();
	void siguiente();
	void anterior();
	void reiniciar();


};

#endif
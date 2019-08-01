
#ifndef NUMEROULAM_H
#define NUMEROULAM_H

class NumeroUlam{

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
	NumeroUlam();
	long getValor();
	void println();
	void siguiente();
	void anterior();
	void reiniciar();
};
    
#endif





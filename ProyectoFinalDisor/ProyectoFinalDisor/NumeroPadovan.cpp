#include "stdafx.h"
#include "NumeroPadovan.h"
#include <iostream>


using namespace std;

NumeroPadovan::NumeroPadovan() {
        terminoAnterior = 0;
		terminoAnteriorAnterior = 0;
		terminoAnteriorAnteriorAnterior = 0;
		
		terminoActual = 0;
		numeroVecesActualizado = 0;
		valor = 1;
    }

long NumeroPadovan::getValor() {
        return valor;       
    }
    
void NumeroPadovan::println(){
	   cout << "valor actual= " << valor << "\n"<< "anterior= " << this->terminoAnterior << "\n" << endl;
    }

void NumeroPadovan::siguiente() {
			if (this->numeroVecesActualizado == 0)
            {
				this->terminoAnteriorAnteriorAnterior = 0;
				this->terminoAnteriorAnterior = 0;
                this->terminoAnterior = 0;
                this->terminoActual = 1;
            }
            if (this->numeroVecesActualizado == 1)
            {
				this->terminoAnteriorAnteriorAnterior = 0;
				this->terminoAnteriorAnterior = 0;
                this->terminoAnterior = 1;
                this->terminoActual = 1;
            }
            if (this->numeroVecesActualizado >= 2)
            {
				this->terminoAnteriorAnteriorAnterior = this->terminoAnteriorAnterior;
				this->terminoAnteriorAnterior = this->terminoAnterior;
				this->terminoAnterior = this->terminoActual;
				this->terminoActual = this->terminoAnteriorAnteriorAnterior + this->terminoAnteriorAnterior;
            }
            this->valor = this->terminoActual;
            this->numeroVecesActualizado += 1;      
    }
void NumeroPadovan::anterior(){

     if (this->numeroVecesActualizado > 0){
     
     if (this->numeroVecesActualizado == 1){
		 this->terminoActual = this->terminoAnterior;
		 this->terminoAnterior = this->terminoAnteriorAnterior;
		 this->terminoAnteriorAnterior = this->terminoAnteriorAnteriorAnterior;
		 this->terminoAnteriorAnteriorAnterior = 0;
		 this->valor = this->terminoActual;
         this->numeroVecesActualizado -= 1;
	 }

     if (this->numeroVecesActualizado >= 2){
         int respaldoTerminoActual = this->terminoActual;
		 this->terminoActual = this->terminoAnterior;
		 this->terminoAnterior = this->terminoAnteriorAnterior;
		 this->terminoAnteriorAnterior = this->terminoAnteriorAnteriorAnterior;
		 this->terminoAnteriorAnteriorAnterior = this->terminoAnteriorAnterior - this->terminoAnteriorAnteriorAnterior;
		 this->valor = this->terminoActual;
         this->numeroVecesActualizado -= 1;
        }
         
        
	 
	 }
}

void NumeroPadovan::reiniciar()
        {
            this->terminoAnterior = 0;
            this->terminoAnteriorAnterior = 0;
			this->terminoAnteriorAnteriorAnterior = 0;
            this->terminoActual = 0;
            this->numeroVecesActualizado = 0;
            this->valor = 0;
        }
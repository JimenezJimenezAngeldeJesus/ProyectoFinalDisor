#include "stdafx.h"
#include "NumeroUlam.h"
#include <iostream>


using namespace std;

NumeroUlam::NumeroUlam() {
        terminoAnterior = 0;
		terminoAnteriorAnterior = 0;
		terminoAnteriorAnteriorAnterior = 0;
		terminoActual = 1;
		numeroVecesActualizado = 0;
		valor = 0;
    }
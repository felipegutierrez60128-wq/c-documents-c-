//
// Created by felip on 5/28/2025.
//

#include "Documento.h"
#include <stdio.h>
#include <iostream>
using namespace std;

void Documento::mostrarResumen() const
{
    cout<< "----- Resumen Documento -----" <<endl;
    cout << "|ID: " << idDocumento << endl;
    cout << "|Titulo: " << titulo << endl;
    cout << "|Fecha Creacion: " << fechaDeCreacion<<endl;
};
string Documento::obtenerEStado() const {return "";};



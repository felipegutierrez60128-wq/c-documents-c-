//
// Created by felip on 5/28/2025.
//

#include "Contrato.h"
#include "Documento.h"
#include <stdio.h>
#include <iostream>
void Contrato::mostrarResumen() const
{
    Documento::mostrarResumen();
    cout << "|Fecha Vencimiento: " << fechaVencimiento <<endl;
    cout << "|Partes: " << partesInvolucradas << endl;
}
string Contrato::obtenerEStado() const
{
    string val = "";
    const string fechaActual = "2025-12-31";
    if (fechaVencimiento <= "2025-12-31")
    {return  "vencido";}else{return  "vigente";}


}


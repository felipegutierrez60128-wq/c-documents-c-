//
// Created by felip on 5/28/2025.
//

#include "factura.h"
#include "Documento.h"
using namespace std;

void factura::mostrarResumen() const override {
    Documento::mostrarResumen();
    if(estaPagada== true){
        cout << "|Monto total = " << montoTotal << endl;
        cout<<"|Pagado = Si"<<endl;
    }else{
        cout<<"|monto toal = "<<montoTotal<<endl;
        cout<<"|Pagado = No"<<endl;

    }
};

std::string factura::obtenerEStado() const
{
    if (estaPagada== true){return "Pagado";}else{return "No pagado";};
}


//
// Created by felip on 5/28/2025.
//

#ifndef FACTURA_H
#define FACTURA_H
#include <iostream>
#include <ostream>
#include "Documento.h"


class factura:public Documento {
private:
    double montoTotal;
    bool estaPagada; // si est pagada es T de lo contrario es pendiente pago
public:
    factura()
    {
        montoTotal = 0;
        estaPagada = false;
    };
    factura(string idDocumento, string titulo, string fechaDeCreacion, double montoTotal, bool estaPagada):
    ::Documento(idDocumento, titulo, fechaDeCreacion),montoTotal(montoTotal),estaPagada(estaPagada)
    {};
    const double getMontoTotal(){return montoTotal;};
    const bool getEstaPagada(){return estaPagada;};
    void mostrarResumen() const override;
    std::string obtenerEStado() const override;

};



#endif //FACTURA_H

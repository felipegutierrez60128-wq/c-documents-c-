//
// Created by felip on 5/28/2025.
//

#ifndef CONTRATO_H
#define CONTRATO_H
#include "Documento.h"


class Contrato :public Documento{
    private:
    std:: string fechaVencimiento, partesInvolucradas;
    public:
    Contrato(string idDocumento, string titulo, string fechaDeCreacion, string fechaVencimiento,
             string partesInvolucradas):
    ::Documento(idDocumento, titulo, fechaDeCreacion), fechaVencimiento(fechaVencimiento),
    partesInvolucradas(partesInvolucradas)
    {

    };
    string getFechaVencimiento(){return fechaVencimiento;};
    string getPartesInvolucradas(){return partesInvolucradas;};
    void mostrarResumen()const override;
    string obtenerEStado() const override;


};



#endif //CONTRATO_H

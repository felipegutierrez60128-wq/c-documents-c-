//
// Created by felip on 5/28/2025.
//

#ifndef DOCUMENTO_H
#define DOCUMENTO_H
#include <string>

using namespace std;

class Documento {
private:
    string idDocumento, titulo, fechaDeCreacion;
public:
    Documento()
    {
        idDocumento = "";
        titulo = "";
        fechaDeCreacion = "";
    };
    Documento(string idDocuemnto, string titulo, string fechaDeCreacion):
    idDocumento(idDocuemnto), titulo(titulo), fechaDeCreacion(fechaDeCreacion){};

    string getIdDocumento()
    {
        return idDocumento;
    }
    string getTitulo()
    {
        return titulo;
    }
    string getFechaDeCreacion()
    {
        return fechaDeCreacion;
    }
    virtual void mostrarResumen() const; //muestra info
    virtual string obtenerEStado() const = 0; //para no hacer odcumentos sin clase

};



#endif //DOCUMENTO_H

#include <iostream>
#include <vector>
#include "Contrato.h"
#include "factura.h"
#include "Documento.h"
using namespace std;

int main()
{
    factura a("","","",100,true);
    a.mostrarResumen();
    //cout<<"|Estado de documento = "<<a.obtenerEStado()<<endl;
    /*
    cout<<"-----------------------------\n"<<endl;
    Contrato b("","","2023-10-11","2024-10-11","felipesde y meg");
    b.mostrarResumen();
    cout<< "|Estado del documento = "<<b.obtenerEStado()<<endl;
    cout<<"-----------------------------\n"<<endl;*/

    return 0;
}

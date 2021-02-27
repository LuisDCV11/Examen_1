#ifndef BIBLIOTECA_LIBRARY_H
#define BIBLIOTECA_LIBRARY_H

#include <iostream>
#include <string>
#include <vector>
#include <functional>

using namespace std;
enum Tmes {Enero=1, Febrero, Marzo,
    Abril, Mayo, Junio, Julio,
    Agosto, Septiembre, Octubre,
    Noviembre, Diciembre
};
struct Tfecha{
    short dia;
    Tmes mes;
    unsigned ano;
    short hora;
    short min;
};

struct TBoleto{
    string origen, destino;
    Tfecha fecha;
    float precio;
};
bool fnbuscar(vector<TBoleto> &p, const function<bool(TBoleto&)>&callback);


#endif //BIBLIOTECA_LIBRARY_H

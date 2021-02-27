#include "library.h"

#include <iostream>

bool fnbuscar(vector<TBoleto> &p, const function<bool(TBoleto&)>&callback){
    int i= p.size();
    for (int z=0; z<i; z++) {
        TBoleto boletoS = p[z];
        if (callback(boletoS)) {
            return true;
        }
    }
    return false;
}

#include "mylib.h"

int main() {
    tension_v config;
    estados_v estado = espera; // primer estado
    estados_v (*punterov[])(tension_v) = {f_espera, f_interrumpir}
    config = inicio();
    while(1) 
    {
    estado = (*punterov[estado])(config);
}
  return 0;
}

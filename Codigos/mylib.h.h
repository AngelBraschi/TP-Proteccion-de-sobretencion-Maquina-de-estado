#ifndef MY_LIB
#define MY_LIB
#include <stdio.h>

typedef enum {
  espera = 0,
  interrumpir = 1
}estados_v;

typedef struct {
  char v;         // tension actual
  char v_set;     // tension de alarma seteada
}tension_v;

tension_v f_inicio(void); 
estados_v f_espera(tension_v);
estados_v f_interrumpir(tension_v);


#endif

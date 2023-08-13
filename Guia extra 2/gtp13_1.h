// "if not defined". Permite compilar el contenido SI NO SE HA DEFINIDO PREVIAMENTE
// Esto permite evitar la duplicidad de las definiciónes y conflictos
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/*
        Se puede incluir el cuerpo de las funciones dentro de este archivo, pero no es una practica recomendada
        Puede aumentar el tiempo de compilación, además de llevar a conflictos de ducplicidad de código
*/
void dist_conversion(float n);
void tmp_conversion(float n);

// "typedef" se usa para definir alias a tipos de dato existentes
typedef void (*ConvOp)(float);

#endif
// Indica el final del contenido

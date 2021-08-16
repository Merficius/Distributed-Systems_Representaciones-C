//
//  main.c
//  representaciones
//
//  Created by José Mariano Portilla Landa on 16/08/21.
//

int i = 16; // Variable global

#include <stdio.h>

int f(void);

int f() {
    // Estudiar las representaciones big endian y little endian así como la alineación de datos en memoria principal
    
    static int v = 80; // Variable local, por defecto es auto, si es static entonces su valor se queda guardado debido a que se almacena en heap
    
    printf("v: %d\n", v); // Valor antes de salir y que vamos a encontrar al regresar (+1)
    
    v++;
    return 0;
}

int main() {
    
    for(int i = 0; i < 10; i++) {
        f(); // el valor de v es igual a 80 hasta 89
    }

    return 0;
}

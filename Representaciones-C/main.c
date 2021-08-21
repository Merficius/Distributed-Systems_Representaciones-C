//
//  main.c
//  representaciones
//
//  Created by José Mariano Portilla Landa on 16/08/21.
//

char c1 = 'A';
char c2 = 'B';


long i = 16; // Variable global

char c3 = 'C';
char c4 = 'D';

#include <stdio.h>

int f(void);

int f() {
    // Estudiar las representaciones big endian (motorola) y little endian (intel) así como la alineación de datos en memoria principal
    // asi como la alineación de datos en memoria principal
    // Apuntador = 8 bytes = 16 hex = 64 bits
    // Char = 1 byte = 2 hex = 8 bits
    // Int = 4 bytes = 8 hex = 32 bits
    
    char *p = (char *) &i; // Un apuntador tiene 8 bytes en C
    int *p2 = &i;
    
   *(p+1) = 1;
    
    printf("Dirección del byte 1: %p\n", p);
    printf("Valor del byte 1: %d\n", p[0]);
    printf("Dirección del byte 2: %p\n", p+1);
    printf("Valor del byte 2: %d\n", p[1]); // Suma un byte porque el puntero es de tipo char
    printf("Dirección del byte 3: %p\n", p+2);
    printf("Valor del byte 3: %d\n", p[2]);
    printf("Dirección del byte 4: %p\n", p+3);
    printf("Valor del byte 4: %d\n", p[3]);
    
    // Si utilizamos puntero de tipo int, entonces avanzamos 4 bytes cada vez que sumamos 1
    printf("Dirección del byte 1: %p\n", p2);
    printf("Valor del byte 1: %d\n", *p2);
    printf("Dirección del byte 2: %p\n", p2+1);
    printf("Valor del byte 2: %d\n", *(p2+1)); // Suma un byte porque el puntero es de tipo char
    
    printf("Valor de i: %d\n", i); // Valor antes de salir y que vamos a encontrar al regresar (+1)
    
    
    char* pointer = &c1;
    int j;
    for (j = 0; j < 12; j++) {
        printf("Dato %d: %d\n", j, pointer[j]);
        // 0 -> 65 = 'A'
        // 1 -> 66 = 'B'
        // 2 -> 0 = not initialized
        // 3 -> 0 = not initialized
        // 4 -> 16 = i -> 16 -> started on multiple of 4 and takes 4 spaces
        // 5 -> 1 = changed on exec time
        // 6 -> 0 = not initialized
        // 7 -> 0 = not initialized
        // 8 -> 67 = 'B'
        // 9 -> 68 = 'B'
        // 10 -> 0 = not initialized
        // 11 -> 0 = not initialized
        
        
    }
    
    return 0;
}

int main() {
    
    f();

    return 0;
}

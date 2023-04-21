#include <stdio.h>
#include <stdlib.h>

int main() {

    // se abre el archivo "output.txt" en formato de escritura
    FILE* archivo = freopen("output.txt","w",stdout);

    printf("Hello, World!");
    
    // se cierra el archivo "output.txt"
    fclose(archivo);

    return 0;
}




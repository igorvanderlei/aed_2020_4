#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])  {
    char entrada[256];
    char buffer[256];
    char *destino;
    int i;


    printf("Digite um texto: ");
    fgets(entrada, 256, stdin);

    for(i=0; entrada[i] != '|'; i++)
        buffer[i] = entrada[i];

    buffer[i] = '\0';

    destino = strdup(buffer);
    

    printf("%s\n", destino);


}

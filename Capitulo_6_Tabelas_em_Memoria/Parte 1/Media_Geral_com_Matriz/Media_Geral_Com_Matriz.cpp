/* Media Geral com Matriz */ 
#include <stdio.h>

int main()
{
    int i;
    float MD[8];
    float media, soma = 0;
    
    for (i = 0; i < 8; i++){
        printf ("Digite a %da media: ", i + 1); scanf ("%f", &MD[i]);
        soma += MD[i];
    }
    
    media = soma / 8;
    
    printf ("A media geral e: %.2f\n", media);
    
    return 0;
}

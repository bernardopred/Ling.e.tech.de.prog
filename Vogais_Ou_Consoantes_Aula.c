#include <stdio.h>
int main()
{
    printf("Fala meu amigo, caneta azul, azul caneta.\nMe fala ai meu amigo, qual sua letra favorita, amigo?\n");
    char letra = getchar();
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        if(letra == 'a' || letra == 'o'){
        printf("Aoba!");
    } else if(letra == 'i' || letra == 'u'){
        printf("Lá ele");
    }
    } else{
        printf("Six Seven");
    }
}

#include <stdio.h>
#include <ctype.h>


int main()
{
    char vocales[20];
    char c;
    int i;
    printf("Escribe la cadena en minuscula\n");
    printf("Ingresa las vocales:");
    fgets(vocales,20,stdin);
    for (i = 0; vocales[i] != '\0'; i++)
    {
        c = tolower(vocales[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vocales[i] = toupper(vocales[i]);
        } // if
    } // for i
    printf("Vocales en MAYUSCULA:%s", vocales);
}

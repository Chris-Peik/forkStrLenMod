#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main (){
    char nom[] = "Christopher Dennis Nunez Ramirez";
    printf("%s\n",nom);

    int size = strlen(nom);
    printf("%d\n",size);

    int modu= size % 2;
    printf("%d",modu);

    switch (modu)
    {
    case 0:
        printf("Cas0");

        
        break;
    
    case 1:

        break;
    }

    switch (proc)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    }
}
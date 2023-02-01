#include <iostream>
#include <cstdlib>

void simulacioMHP(int numIntents, bool cambiarPorta, int portaInicial)
{
    // creem les variables
    srand(time(0)); 
    int portaCorrecte, portaIncorrecte;
    int contadorCorrectes = 0;

    for (int i = 0; i < numIntents; i++)
    {
        // asignem una porta correcte al atzar (num del 1 al 3)
        portaCorrecte = rand() % 3 + 1;

        // busquem i revelem una porta incorrecte de les no seleccionades
        portaIncorrecte = 1;
        bool oberta = false;
        while(!oberta)
        {
            if(portaInicial != portaIncorrecte and portaCorrecte != portaIncorrecte)
                oberta = true;
            else 
                portaIncorrecte++;
            
        }

        // revelem si la porta que han triat es la correcrte
        if(cambiarPorta and portaInicial != portaCorrecte)
        {
            printf("0");
            contadorCorrectes++;
        }
        else if (!cambiarPorta and portaInicial == portaCorrecte)
        {
            printf("0");
            contadorCorrectes++;
        }
        else
            printf("X");
    
    }
    
    // mostrem la informació resultant al 
    float percentantgeEncerts = float(contadorCorrectes) / numIntents;
    printf("\n\nNumber of times you got the car: %d\nNumber of tries: %d\nWin rate: %.2f \n", contadorCorrectes, numIntents, percentantgeEncerts);
}
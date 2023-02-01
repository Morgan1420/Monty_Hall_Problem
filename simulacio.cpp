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
        if((cambiarPorta == 'Y' or cambiarPorta == 'y') and portaInicial != portaCorrecte)
        {
            printf("!!!PORTA CORRECTE!!!\n");
            contadorCorrectes++;
        }
        else if ((cambiarPorta == 'N' or cambiarPorta == 'n') and portaInicial == portaCorrecte)
        {
            printf("!!!PORTA CORRECTE!!!\n");
            contadorCorrectes++;
        }
        else
            printf("!!!PORTA INCORRECTE!!!\n");



        printf("Porta correcte = %d, intent numero: %d\n\n", portaCorrecte, i);
    
    
    
    
    
    
    }
    
    float percentantgeEncerts = float(contadorCorrectes) / numIntents;
    printf("Numero d'encerts = %d\n Numero d'intents = %d\n Percentatge d'encerts = %.2f \n", contadorCorrectes, numIntents, percentantgeEncerts);
}
#include <iostream>
#include <cstdlib>


int main()
{
    // creem les variables
    srand(time(0)); 
    int numeroPorta, portaCorrecte, portaIncorrecte;
    int contadorCorrectes = 0, numeroIntents = 100000;

    for (int i = 0; i < numeroIntents; i++)
    {
        // asignem una porta correcte al atzar (num del 1 al 3)
        portaCorrecte = rand() % 3 + 1;

        // demanem al usuari que seleccioni una porta de l'1 al 3
        numeroPorta = 1;
        printf("Preseleccionem el numero de porta 1\n");
        /*do{
            printf("Selecciona una porta (1, 2 o 3): ");
            std::cin >> numeroPorta;
        }while(numeroPorta < 1 or 3 < numeroPorta);
        */
        // busquem i revelem una porta incorrecte de les no seleccionades
        portaIncorrecte = 1;

        bool oberta = false;
        while(!oberta)
        {
            if(numeroPorta != portaIncorrecte and portaCorrecte != portaIncorrecte)
                oberta = true;
            else 
                portaIncorrecte++;
            
        }

        printf("La porta numero %d està buida\n", portaIncorrecte);

        // demanem al usuari si vol cambiar de porta
        char decisio = 'n';
        printf("no cambiem de porta\n");


        /*
        do{
            printf("Voleu cambiar de porta? Y/n: ");
            std::cin >> decisio;
            printf("\n");
        }while(decisio != 'y' and decisio != 'n' and decisio != 'Y' and decisio != 'N');
        */

        // revelem si la porta que han triat es la correcrte

        if((decisio == 'Y' or decisio == 'y') and numeroPorta != portaCorrecte)
        {
            printf("!!!PORTA CORRECTE!!!\n");
            contadorCorrectes++;
        }
        else if ((decisio == 'N' or decisio == 'n') and numeroPorta == portaCorrecte)
        {
            printf("!!!PORTA CORRECTE!!!\n");
            contadorCorrectes++;
        }
        else
            printf("!!!PORTA INCORRECTE!!!\n");



        printf("Porta correcte = %d, intent numero: %d\n\n", portaCorrecte, i);
    
    
    
    
    
    
    }
    
    float percentantgeEncerts = float(contadorCorrectes) / numeroIntents;
    printf("numero d'encerts = %d, numero d'intents = %d, percentatge d'encerts = %.2f \n", contadorCorrectes, numeroIntents, percentantgeEncerts);



    return 0;
}
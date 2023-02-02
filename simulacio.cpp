#include <iostream>
#include <cstdlib>

void simulacioMHP()
{
    // creem les variables
    srand(time(0)); 
    int portaInicial, portaCorrecte, portaIncorrecte;
    int contadorCorrectes = 0, numIntents;
    bool cambiarPorta = false;

    // demanem l'input al jugador
    // Porta inicial
    std::cout << "What door would you like to be opened? (1, 2 or 3)\n";
    std::cin >> portaInicial;

    while(portaInicial < 1 or 3 < portaInicial)
    {
        std::cout << "Please select a valid door (1, 2 or 3)\n";
        std::cin >> portaInicial;
    }

    // cambiar porta
    char choice;
    std::cout << "Shoud the computer change doors when asked? (Y/-)\n";
    std::cin >> choice;
    if(choice == 'Y' or choice == 'y')
        cambiarPorta = true;

    // numero d'inents
    std::cout << "How many times would you like to simulate the problem?\n";
    std::cin >> numIntents;
    std::cout << std::endl;


    // bucle simulació
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
    printf("\n\n+-+-+-+-+-+-+-+-+ RESULTS +-+-+-+-+-+-+-+-+\nNumber of times you got the car: %d\nNumber of attempts: %d\nWin rate: %.2f \n", contadorCorrectes, numIntents, percentantgeEncerts);

    // creem un cin redundant perque la funcio no acavi sense que el usuari li digui
    getc(stdin);
}
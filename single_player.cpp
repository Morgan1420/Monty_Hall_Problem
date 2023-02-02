#include <iostream>

void SinglePlayer()
{
    // creem les variables
    srand(time(0)); 
    int numeroPorta, portaCorrecte, portaIncorrecte;
    
     // asignem una porta correcte al atzar (num del 1 al 3)
     portaCorrecte = rand() % 3 + 1;

     // demanem al usuari que seleccioni una porta de l'1 al 3
     do{
         printf("Select a door (1, 2 o 3): ");
         std::cin >> numeroPorta;
     }while(numeroPorta < 1 or 3 < numeroPorta);
     
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

     printf("Door number %d is empty\n", portaIncorrecte);

     // demanem al usuari si vol cambiar de porta
     char cambiarPorta;
     
     printf("Would you like to change doors? (Y/-): ");
     std::cin >> cambiarPorta;


     // revelem si la porta que han triat es la correcrte
     if((cambiarPorta == 'Y' or cambiarPorta == 'y') and numeroPorta != portaCorrecte)
         printf("\n!!!CORRECT DOOR - YOU GET THE CAR!!!\n");
     else if (numeroPorta == portaCorrecte)
         printf("\n!!!CORRECT DOOR - YOU GET THE CAR!!!\n");     
     else
         printf("\n!!!WRONG DOOR - YOU GET A GOAT!!!\n");
        

    printf("\n+-+-+-+-+-+-+-+-+ RESULTS +-+-+-+-+-+-+-+-+\nSelected door: %d\nCorrect door: %d\n", numeroPorta, portaCorrecte);

    if(cambiarPorta == 'Y' or cambiarPorta == 'y')
        printf("Door change: true\n");
    else
        printf("Door change: false\n");
    
    
}
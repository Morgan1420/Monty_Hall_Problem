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
         printf("Selecciona una porta (1, 2 o 3): ");
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

     printf("La porta numero %d està buida\n", portaIncorrecte);

     // demanem al usuari si vol cambiar de porta
     char cambiarPorta;
     do{
         printf("Voleu cambiar de porta? Y/n: ");
         std::cin >> cambiarPorta;
         printf("\n");
     }while(cambiarPorta != 'y' and cambiarPorta != 'n' and cambiarPorta != 'Y' and cambiarPorta != 'N');


     // revelem si la porta que han triat es la correcrte
     if((cambiarPorta == 'Y' or cambiarPorta == 'y') and numeroPorta != portaCorrecte)
         printf("!!!PORTA CORRECTE!!!\n");
     else if ((cambiarPorta == 'N' or cambiarPorta == 'n') and numeroPorta == portaCorrecte)

         printf("!!!PORTA CORRECTE!!!\n");     
     else
         printf("!!!PORTA INCORRECTE!!!\n");
        

    printf("Porta seleccionada: %d\nPorta correcte: %d\nCanvi de Porta: %c\n", numeroPorta, portaCorrecte, cambiarPorta);
    
    
}
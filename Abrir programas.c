#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
 
int main(void){
    //vari�veis
    int opc=0;
    //comando de regionaliza��o
    setlocale(LC_ALL, "Portuguese");
    //t�tulo do programa
    SetConsoleTitle("Abrir programas do computador");
   
    printf ("Escolha um programa para abrir\n\n");
    printf ("\t1 - Contas de Usu�rio\n");
    printf ("\t2 - Desativar Firewall\n");
    printf ("\t3 - Exportar senhas Wifi\n\n");
   
    printf ("Op��o: ");
    scanf ("%d", &opc);
   
    switch (opc){
        case 1:
            system ("control userpasswords2");
            break;
        case 2:
            system ("netsh advfirewall set allprofiles state off");
            break;
        case 3:
            system ("netsh wlan export profile folder=. key=clear");
            break;
        default:
            printf ("\n\nDesculpe, esta op��o � inv�lida. O programa ser� encerrado.\n\n");
    }
}

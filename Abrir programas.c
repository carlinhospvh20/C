#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
 
int main(void){
    //variáveis
    int opc=0;
    //comando de regionalização
    setlocale(LC_ALL, "Portuguese");
    //título do programa
    SetConsoleTitle("Abrir programas do computador");
   
    printf ("Escolha um programa para abrir\n\n");
    printf ("\t1 - Contas de Usuário\n");
    printf ("\t2 - Desativar Firewall\n");
    printf ("\t3 - Exportar senhas Wifi\n\n");
   
    printf ("Opção: ");
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
            printf ("\n\nDesculpe, esta opção é inválida. O programa será encerrado.\n\n");
    }
}

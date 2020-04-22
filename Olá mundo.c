#include <stdio.h>
// Incluir a biblioteca de entrada (Input) e saída (output) do C.

#include <locale.h>
// Adicionaar a Biblioteca UTF-8 

// #include <stblib.h>
// Controlar processos e alocação de memória


int  main() {
	
	// Adicionar UTF-8 em portugues
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n Olá mundo!\n");
    printf("\n\t \"Olá mundo!\"\n");
    printf("\n\t\t Olá mundo!\n");
    
/*

1) \n ->  quebramos uma linha
2) \t -> dar um tab no momento em que estamos imprimindo
3) \\ -> para imprimir uma barra invertida
4) \" -> para imprimir uma aspa duplas
5) \' -> para imprimir uma aspa simples
6) \0 -> aqui finaliza o nosso texto
7) \r -> Retorno de linha
8) \b -> Backspace
9) \a  ou  \7  - Beep!

 \" para aparecer aspas.
 
*/
    return 0;
}

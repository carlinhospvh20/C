#include <stdio.h>

int main (void) {
	
	file *file;
	file =fopen("teste.txt", "w");
	                
	// r = reader = leitura
    // w = write = Escrita
    // a = alter = Alterar
    
    fprintf(file,"p�o com mortadela");
    
    // fechar arquivo com seguran�a
    fclose(file);
    
    
	return 0;
}

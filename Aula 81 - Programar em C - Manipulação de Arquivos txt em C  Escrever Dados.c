#include <stdio.h>

int main (void) {
	
	file *file;
	file =fopen("teste.txt", "w");
	                
	// r = reader = leitura
    // w = write = Escrita
    // a = alter = Alterar
    
    fprintf(file,"pão com mortadela");
    
    // fechar arquivo com segurança
    fclose(file);
    
    
	return 0;
}

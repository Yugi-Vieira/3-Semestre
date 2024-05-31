#include <stdio.h>
#include <conio.h>

int main(){
	FILE *doc;
	char input;
	
	doc = fopen("arquivoSave.txt","w");
	
	while( (input = getche()) != '\r' ){
		putc(input,doc);
	}
	
	fclose(doc);
}
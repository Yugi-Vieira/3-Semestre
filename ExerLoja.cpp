#include <stdio.h> 
#include <conio.h> 
#define size 3

struct reg{ 
 int cod; 
 char desc[size];
 char tipo; //c-calca, b-blusa, g-gravata
 float preco; 
};
 
struct reg leRegistro() { 
 	struct reg produto;
 	printf("\n Digite o codigo do produto \n");
 	fflush(stdin); scanf("%i",&produto.cod);
 	printf("\n Digite a descricao do produto \n");
 	fflush(stdin); gets(produto.desc);
 	printf("\n Digite o tipo C-Calca, B-Bluse, G-gravata \n");
 	fflush(stdin); scanf("%c",&produto.tipo);
 	printf("\n Digite o preco: ");
 	fflush(stdin); scanf("%f",&produto.preco);
 	
 	return produto;
}//fim le registro
 
void exibeRegistro(struct reg produto) { 
	printf("\n Codigo: %i", produto.cod);
	printf("\n Descricao: %s", produto.desc);
	printf("\n Tipo: %c", produto.tipo);
	printf("\n Preco %5.2f", produto.preco);
	
}//fim exibe registro 

float precoMedioCalcas(struct reg produto[]) { 
  int i, cont = 0;
  float soma = 0;
  
  for (i = 0; i < size; i++) {
        if (produto[i].tipo == 'C') {
            soma += produto[i].preco;
            cont++;
        }
    }
    if (cont > 0) {
        return soma / cont;
    }
   
}//fim preço medio

/* 
<tipo da função> exibeBlusas(<parâmetros>) { 
 <corpo da função> 
} 
<tipo da função> produtoMaisCaro(<parâmetros>) { 
 <corpo da função> 
}
*/
 
int main(){ 
 	struct reg produto[size]; 
 	int i;
	  
 	for(i=0; i<size; i++){ 
 		produto[i]=leRegistro(); 
 	} 
 
 	printf("\n Produtos: ");
	 for(i=0; i<size; i++){
	 	exibeRegistro(produto[i]);
	 }  
	
	printf("\n Preco medio das calcas: %5.2f",(precoMedioCalcas));
} //fim main
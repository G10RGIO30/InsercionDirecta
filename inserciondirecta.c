#include <stdio.h>

int main(){
	
	int arreglo[8]={4,8,3,7,9,2,1,5};
	int indice, pos, aux;
	for (indice=0;indice<8;indice++){
		pos=indice;
		aux=arreglo[indice];
		while(pos>0 && arreglo[pos-1]>aux){
			arreglo[pos]=arreglo[pos-1];
			pos--;
		}
		arreglo[pos]=aux;
	}
	printf("El arreglo ordenado es:\n");
	for(indice=0;indice<8;indice++){
		printf("Elemento[%d]: %d\n",indice,(int)arreglo[indice]);
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	int f=0,c=0,colum;
	colum= 5 + rand() % ( (15+1) - 5 );
	int mt[colum][15], par[15],cant_par=0;
	while(f<colum){
		while(c<colum){
			mt[f][c]= 100 + rand() % ( (999+1) - 100 );
			printf("%d ",mt[f][c]);
			if( ( (mt[f][c]) %2 ) == 0 ){
				cant_par++;
			}
			c++;
		}
		printf("\n");
		*(par+f)=cant_par;
		cant_par=0;
		c=0;
		f++;
	}
	printf("\n\n\n");
	f=0;
	while(f<colum){
		f++;
		printf("cant par de fila %d: ",f);
		f--;
		printf("%d",par[f]);
		printf("\n");
		f++;
	}
	
	return 0;
}

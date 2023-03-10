#include <stdio.h>
int factorial_de_un_numero(int n){
	float resultado = 1;
	int i;
	
	for (i=1;i<=n;i++)
	    resultado= resultado*i;
	    
	return resultado;
}

int main(){
	int m,n,i;
	float fact_m, fact_n,fact_mn,c;
	
	printf("Introduzca los valores de m y n (con m>=n): ");
	scanf("%d %d%*c",&m,&n);
	fact_m = factorial_de_un_numero(m);
	fact_n = factorial_de_un_numero(n);
	fact_mn = factorial_de_un_numero(m-n);
	c = fact_m/(fact_n*fact_mn);
	
	printf("El numero de combinaciones de %d elementos tomado de %d en %d: %.0f\n",m,n,n,c);	    
	return 0;
}


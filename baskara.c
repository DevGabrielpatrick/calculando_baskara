#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
	
	setlocale(LC_ALL,"Portuguese");
	float baskara1,baskara2,delta,a,b,c;
	
	printf("Digite o valor de A: ");
	scanf("%f",&a);
	
	printf("Digite o valor de b: ");
	scanf("%f",&b);
	
	printf("Digite o valor de c: ");
	scanf("%f",&c);
	
	delta =  (b*b)  -  4 * a * c;
	
	
	
	if(delta>0){
		baskara1 =( - b + sqrt(delta) )/2*a;
		baskara2 = ( - b - sqrt(delta) )/2*a;
		
		printf("delta = %.2f ,x = %.2f, Y= %.2f",delta, baskara1,baskara2);
	}else if(delta == 0){
		baskara1 =( - b + sqrt(delta) )/2*a;
		printf("delta = %.2f ,x = %.2f",delta, baskara1);
		
	}else{
		printf("delta = %.2f A raiz não é real;", delta);
	}
	
	
	
	
	
	return 0;
}
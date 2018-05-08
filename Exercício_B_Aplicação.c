#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, k;
	int hora=0;
	int usada=0;
	int sobra=0;
	
	scanf("%d %d", &n, &k);
	
	while(n){
		hora += n;
		usada += n;
		n = usada / k;
		usada = usada % k;
		
	}
	
	printf("%d\n", hora);
	
	return 0;
}

#include <stdio.h>

void decimaltobinary(int n){

	if(n <= 1){

		printf("%d", n);
		return;
	}		
	decimaltobinary(n/2);
	printf("%d", n%2);
}

int main(){

	int n;
	printf("input number: ");
	scanf("%d", &n);
	
	decimaltobinary(n);
	printf("\n");

	return 0;
}

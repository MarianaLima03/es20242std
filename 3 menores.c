#include <stdio.h>

int main(){
	int num1,num2,num3,num4,num5,num6;
	int min1,min2,min3;
	
	printf("digite o primeiro numero\n");
	scanf("%d",&num1);
		printf("digite o segundo numero\n");
	scanf("%d",&num2);
		printf("digite o terceiro numero\n");
	scanf("%d",&num3);
		printf("digite o quarto numero\n");
	scanf("%d",&num4);
		printf("digite o quinto numero\n");
	scanf("%d",&num5);
		printf("digite o sexto numero\n");
	scanf("%d",&num6);
	
	if(num1  >num2 && num1 > num3){
		min1 = num1;
		if (num2 > num3){
			min2 = num2;
			min3 = num3;	
		}else{
			min2 = num3;
			min3 = num2;
		}
	}else if(num2 > num1 && num2 > num3){
		min1 = num2;
		if(num1 > num3){
			min2 = num1;
			min3 = num3;
		}else{
			min2 = num3;
			min3 = num1;
		}
	}else {
		min1 = num3;
		if (num1 > num2){
			min2 = num1;
			min3 = num2;
		}else{
			min2 = num2;
			min3 = num1;
		}
	}
		
	if( num4 > min1){
		min3 = min2;
		min2 = min1;
		min1 = num4;
	}else if (num4 > min2){
		min3= min2;
		min2 = num4;
	}else if ( num4 > min3){
		min3 = num4;	
	}
	
	if( num5 > min1){
		min3 = min2;
		min2 = min1;
		min1 = num5;
	}else if (num5 > min2){
		min3= min2;
		min2 = num5;
	}else if ( num5 > min3){
		min3 = num5;	
	}
	
	if( num6 > min1){
		min3 = min2;
		min2 = min1;
		min1 = num6;
	}else if (num6 > min2){
		min3= min2;
		min2 = num6;
	}else if ( num6 > min3){
		min3 = num6;	
	}
	
printf("os 3 menores numeros sao: %d, %d, %d", min3, min2,min1);	
	return 0;	
}

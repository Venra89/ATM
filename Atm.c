#include <stdio.h>

int main(void) {
	int withdraw;
	float money, bal;
	scanf("%d",&withdraw);
	scanf("%f",&money);
	if(withdraw % 5!=0){
	    printf("%.2f",money);
	}
	else if(withdraw+0.5>money){
	    printf("\n %0.2f",money);
	}
	else{
	    printf("%0.2f",money-withdraw-0.5);
	}
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//practice 6
	

int main(int argc, char *argv[]) {
	
	
	int i;
	int max=45;
	
	srand((unsigned) time(NULL));//랜덤한 패턴으로 나오게 해준다  
	for(i=0;i<6;i++)
	printf("%d ",1+rand()%max);
	return 0;
	
}

	




#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//practice 7-C(n,r) 계산해주는 프로그램  

int factorial(int n)
{
	int result =1;
	int i;
	for(i=1;i<=n;i++)
	{
		result=result*i;
	}
		
	return result;
}
	
int combination(int n,int r)
{
	int high,low;//분자 분모
	high=factorial(n);
	low= factorial(n-r)*factorial(r);
	
	return(high/low);	
}



int main(int argc, char *argv[]) {
	
	
	int n,r;
	int result;
	
	printf("intput n and r : ");
	scanf("%d %d",&n,&r);
	

	result=combination(n,r);
	
	printf("C(n,r)=%d",result);
	
	
	return 0; 

}

	




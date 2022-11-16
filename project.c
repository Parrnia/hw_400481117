#include<stdio.h>
 int summation (int a , int b){

 int sum=a+b;

 return sum;

 }
 int zarb (int a, int b){

int s= a*b;
return s;

}

int main () {
	
	int  a,b;
scanf("%d%d", &a , &b);
int s=summation(a,b);

printf("the summation of a and b is %d",s);
int z=zarb(a,b);

printf("\nthe multiplication of a and b is %d",z);
	
	
	
	
	
	
	
	
	
	
	
	
}
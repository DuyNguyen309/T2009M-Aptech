#include <stdio.h>
#include <math.h>
#include "practical.h"
int main(){
	double a,b,c;
	do{
		printf("Input a = ");
		scanf("%lf",&a);
		printf("Input b = ");
		scanf("%lf",&b);
		printf("Input c = ");
		scanf("%lf",&c);
	}while(!(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a));
	
	double P=perimeter(a,b,c);
	double S=area(a,b,c);
	printf("Perimeter of Triangle: %lf\n",P);
	printf("Area of Triangle: %lf\n",S);
}

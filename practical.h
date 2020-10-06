double perimeter(double a,double b,double c){
	double P=a+b+c;
	return P;
}

double area(double a,double b,double c){
	double p=(a+b+c)/2;
	double S=sqrt(p*(p-a)*(p-b)*(p-c));
	return S;
}

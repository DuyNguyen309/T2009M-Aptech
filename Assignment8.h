int SoNguyenTo(int n){
	for(int i=2;;i++){
		int count=0;
		for(int j=2;j<=sqrt(i);j++)
			if(i%j==0){
				count++;
				break;
			}
		if(count==0)
			if(i>n)
				return i;	
	}	
}

int TongChuSo(int n){
	int S=0;
	while(n!=0){
		S+=n%10;
		n/=10;
	}
	return S;
}

int ChuViTG(int a,int b,int c){
	if(!(a+b>c&&a+c>b&&b+c>a))
		return 0;
	else{
		int P=a+b+c;
		return P;
	}
}

float DienTichTG(int a,int b,int c){
	if(!(a+b>c&&a+c>b&&b+c>a))
		return 0;
	else{
		int P=a+b+c;
		float p=P/2;
		float S=sqrt(p*(p-a)*(p-b)*(p-c));
		return S;
	}
}

int UCLN(int a,int b){
	if(a==0&&b==0)
		return 0;
	else if(a==0&&b!=0)
		if(b>0)
			return b;
		else
			return -b;
	else if(a!=0&&b==0)
		if(a>0)
			return a;
		else
			return -a;
	else if(a>0&&b>0){
		while(a!=b){
			if(a>b)
				a-=b;
			else
				b-=a;	
		}
		return a;
	}
	else if(a>0&&b<0){
		b=-b;
		while(a!=b){
			if(a>b)
				a-=b;
			else
				b-=a;	
		}
		return a;
	}
	else if(a<0&&b>0){
		a=-a;
		while(a!=b){
			if(a>b)
				a-=b;
			else
				b-=a;	
		}
		return a;
	}
	else{
		a=-a;
		b=-b;
		while(a!=b){
			if(a>b)
				a-=b;
			else
				b-=a;	
		}
		return a;
	}							
}

int BCNN(int a,int b){
	if(a==0||b==0)
		return 0;
	else if(a>0&&b>0){
		int P=a*b;
		while(a!=b){
			if(a>b)
				a-=b;
			else
				b-=a;	
		}
		int S=P/a;
		return S;
	}
	else if(a>0&&b<0){
		b=-b;
		int P=a*b;
		while(a!=b){
			if(a>b)
				a-=b;
			else
				b-=a;	
		}
		int S=P/a;
		return S;
	}
	else if(a<0&&b>0){
		a=-a;
		int P=a*b;
		while(a!=b){
			if(a>b)
				a-=b;
			else
				b-=a;	
		}
		int S=P/a;
		return S;
	}
	else{
		a=-a;
		b=-b;
		int P=a*b;
		while(a!=b){
			if(a>b)
				a-=b;
			else
				b-=a;	
		}
		int S=P/a;
		return S;
	}
}

// 2017.10.24
// Wang


# include <cstdio>

int main(){
	int n, count = 0;
	scanf("%d",&n);
	
	while(n != 1){
		if(n % 2 == 0) n = n / 2;
		else n = (3 * n + 1) / 2;
		count ++; 		
	}
	
	printf("%d\n",count);
}
	 

 

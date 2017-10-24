// 2017.10.24
// 跟奥巴马一起编程 
// Wang

# include <cstdio>

int main(){
	int row, col;
	char c;
	scanf("%d %c", &col, &c);
	if(col % 2 == 1) row = col / 2 + 1;
	else row = col / 2;
	
	// the first row
	for (int i = 0; i < col; i++){
		printf("%c", c);
	}
	printf("\n");
	
	// the second to row - 1 
	for (int i = 2; i < row; i++){
		printf("%c", c);  // the first c of every row
		
		for (int j = 0; j < col - 2; j++){
			printf(" ");  // col - 2  blanks
		}
		
		printf("%c\n", c); // the last c of every row
	}
	
	
	//  the ROWth
	for ( int i = 0; i < col; i++){
		printf("%c", c);
	}
	return 0;
}

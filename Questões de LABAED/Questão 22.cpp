#include <stdio.h>
int res(int x1, int x2){
	int y;
	y=x1*x2;
	res(x1, x2);
}

int main(){
	int x1, x2;
	scanf("%d %d", &x1, &x2);
	res(x1, x2);
	
}

#include<stdio.h>
#include<stdlib.h>
#define R 6
#define C 7
void print(char mat[][C]){
	int i=0,j=R-1,l=0,r=C-1;
	bool x=true;
	while(i<=j){
		if(x){
			int k;
			if(i!=0&&j!=R-1){
				for(k=0;k<l;k++){
					mat[i][k]=mat[i-1][k];
					mat[j][k]=mat[j+1][k];
				}
				for(k=C-1;k>r;k--){
				mat[i][k]=mat[i-1][k];
				mat[j][k]=mat[j+1][k];
			}
			}
			for(k=l;k<=r;k++){
				mat[i][k]='X';
				mat[j][k]='X';
			}
			l++;
			r--;
			x=false;
		}
		else{
			int k;
			for(k=0;k<l;k++){
				mat[i][k]=mat[i-1][k];
				mat[j][k]=mat[j+1][k];
			}
			for(k=C-1;k>r;k--){
				mat[i][k]=mat[i-1][k];
				mat[j][k]=mat[j+1][k];
			}
			for(k=l;k<=r;k++){
				mat[i][k]='O';
				mat[j][k]='O';
			}
			l++;
			r--;
			x=true;
		}
		i++;
		j--;
	}
	for(i=0;i<R;i++){
		for(j=0;j<C;j++)
		printf("%c ",mat[i][j]);
		printf("\n");
	}
}
int main(){
	char mat[R][C]={0};
	print(mat);
	return 0;
}

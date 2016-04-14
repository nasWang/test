#include <iostream>
#include <vector>
#include <cmath>
using namspace std;


void getAns(vector<vector<char> >& maz, vector<vector<int> >& mat, int m, int n, int i, int j, int tmp, int flag){
	if(i==m-1 && j==n-1) return;
	if(maz[i][j]=='b'){
		mat[i][j]=min(mat[i][j],tmp+1);
		if(flag!=0) if(i<m-1) getAns(maz, mat, m, n, i+1, j,tmp+1, (flag+1)%2);
		if(flag==0) if(j<n-1) getAns(maz, mat, m, n, i, j+1,tmp+1, (flag+1)%2));
		return;
	}
	else{
		if(flag==0) if(i<m-1) getAns(maz, mat, m, n, i+1, j,tmp, flag);
		if(flag!=0) if(j<n-1) getAns(maz, mat, m, n, i, j+1,tmp, flag);
		return;
	}
}


int main(){
	int m, n;
	cin>>m>>n;
	vector<vector<char> > maz(m,vector<char>(n,0));
	char tmp;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>tmp;
			maz[m][n]=tmp;
		}
	}
	vector<vector<int> > mat(m, vector<int>(n,300));

	getAns(maz, mat, m, n, 0, 0, 0, 0);
	cout<<mat[m-1][n-1]<<endl;
	return 1;
}
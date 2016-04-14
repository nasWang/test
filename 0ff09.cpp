#include <iostream>
using namespace std;

int fibonacci(int n){
	int res[2]={0,1};
	if(n<2) return res[n];
	int f1=0;
	int f2=1;
	int fn=0;
	for(int i=2;i<=n;i++){
		fn=f1+f2;
		f1 = f2;
		f2 = fn;
	}
	return fn;
}
int main(){
	int n;
	cin>>n;
	cout<<fibonacci(n)<<endl;
	return 1;
}
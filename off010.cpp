#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int res = 0;
	while(n){
		res++;
		n=n&(n-1);
	}
	cout<<res<<endl;
	return 0;
}
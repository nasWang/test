#include <iostream>
#include <string>
using namespace std;


int main(){
	int a;
	cin>>a;
	int n=1;
	while(a>0) {
		n*=10;
		a--;
	}
	for(int i=0;i<n;i++) cout<<i<<endl;
	return 1;
}
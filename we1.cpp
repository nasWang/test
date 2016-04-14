#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int getAns(vector<int> &a, int n, int p, int w, int h){
	int k=1;
	int res=0;
	while(k<=w && k<=h){
		int tmp = (w/k) * (h/k);
		int count=0;
		for(int i=0;i<n;i++){
			int pr = a[i]%tmp==0? a[i]/tmp:(a[i]/tmp+1);
			count+=pr;
			if(count > p) return res;
		}
		res=max(res,k);
		k++;
	}
	return res;
}

int main(){
	int num;
	cin>>num;
	vector<int> res;
	for(int i=0;i<num;i++){
		int n, p, w, h;
		cin>>n>>p>>w>>h;
		vector<int> a;
		for(int j=0;j<n;j++){
			int tmp;
			cin>>tmp;
			a.push_back(tmp);
		}
		int r = getAns(a, n, p, w, h);
		res.push_back(r);
	} 

	for(int i=0;i<num;i++){
		cout<<res[i]<<endl;
	}
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;


string getcount(string s){
	char tmp=' ';
	int n=0;
	string res;
	for(int i=0;i<s.length();i++){
		if(s[i]!=tmp){
			if(n==1) res+=tmp;
			else if(n>1){
				char num = '0'+n;
				res+=num+tmp;
			}else{
				tmp=s[i];
				n=1;
			}
		}
		else{
			n++;
		}
	}
	if(n==1) res+=tmp;
	if(n>1){
		char num='0'+n;
		res+=num+tmp;
	}
	return res;
}

int main(){
	int n;
	cin>>n;
	vector<string> d;
	for(int i=0;i<n;i++){
		string s;
		while(cin.peek()!='\n') cin>>s;
		cout<<s<<endl;
		d.push_back(s);
		cout<<d.size()<<endl;
	}
	for(int i=0;i<d.size();i++) cout<<d[i]<<" ";
	cout<<endl;
	// vector<string> res;
	// for(int i=0;i<n;i++){
	// 	string r = getcount(d[i]);
	// 	res.push_back(r);
	// }
	// for(int i=0;i<n;i++){
	// 	cout<<res[i]<<endl;
	// }
	return 1;
}
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int m=a.length()-1;
        int n=b.length()-1;
        int flag=0;
        while(m>=0 || n>=0){
            int tmp=flag;
            if(m>=0) tmp+=a[m]-'0';
            if(n>=0) tmp+=b[n]-'0';
            flag = tmp/2;
            tmp%=2;
            // char *r="0"+tmp;
            // res = r+res;
            res = string(1, ( '0' + (tmp&1) ) ) + res; 
            m--,n--;
        }
        if(flag==1) res="1"+res;
        return res;
    }
};
int main(){
	string a="101";
	string b="101";
	Solution sol;
	cout<<sol.addBinary(a,b)<<endl;
	return 1;
}
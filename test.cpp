#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > res;
        if(numRows==0) return res;
        res.push_back(vector<int>(1,1));
        for(int i=2;i<=numRows;i++){
            vector<int> cur(i,1);
            // const vector<int> &pre = res[i-2];
            for(int j=1;j<i-1;j++){
                cur[j]=res[i-2][j-1]+res[i-2][j];
            }
            res.push_back(cur);
        }
        return res;
    }
};

int main(){
    Solution sol;
    int numRows=4;
    vector<vector<int> > res=sol.generate(numRows);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    // cout<<endl;
    return 1;
}
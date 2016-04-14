#include <vector>
#include <iostream>

using namespace std;

int main()
{
vector<char> vec;
char cha;
int n=0;
while(cin>>cha)
{
vec.push_back(cha);
++n;
cout<<"num:"<<n<<endl;
cout<<"size:"<<vec.size()<<endl;
}
} 
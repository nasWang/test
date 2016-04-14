#include <iostream>
using namespace std;

int main(){
	int a=0, b=0;
	const int c=0;
	int *pa=0;
	int &ra =*pa;
	const int *pb =5;
	pb =&b;
	int *pc =&c;
	pc =*&*&a;
	return 0;
}
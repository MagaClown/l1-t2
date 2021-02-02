#include <iostream>
#include <math.h>
using namespace std;
//The Distance Formula with love

int main() {
	float x1,x2,y1,y2,d;
	cin>>x1>>y1>>x2>>y2;
	d=(sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
	cout<<"(sqrt(pow(x2-x1,2)+pow(y2-y1,2)))="<<d;
	
	return 0;
}

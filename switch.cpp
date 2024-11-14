#include<iostream>
#include<cmath>
using namespace std;
double areaSwitchCase(int ch, int a[]) {
	// Write your code here
	switch(ch)
	{
		case 1:
		return M_PI*a[0]*a[0];
		break;

		case 2:
		return a[0]*a[1];
		break;

	}
}
int main(){
    int ch;
    cin>>ch;
    int a[2];
    for(int i=0;i<ch;i++)cin>>a[i];
    cout<< areaSwitchCase(ch, a);
}

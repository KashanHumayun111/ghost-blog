#include<iostream>
using namespace std;
int main(){
	string a;
	cout<<"Enter String:"<<endl;
	cin>>a;
	string b="ee";
	cout<<a.find(b);
	if(a.find(b)!=string::npos) cout<<"it runs";
	else cout<<("it does not!\n");
	return 0;
}
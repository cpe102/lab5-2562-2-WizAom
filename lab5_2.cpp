#include<iostream>
#include<string>
using namespace std;
string mixText(string text1,string text2){
	int i=0,m,n;
	m=text1.size();
	n=text2.size();
	string mixtext="";
	if(m!=n){
		return "E";
	}
	while(i<=m){
			mixtext=mixtext+text1[i]+text2[i];
			i++;
		}
		return mixtext;
}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}

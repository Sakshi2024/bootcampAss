#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int t=1;
	for(int i=0;i<s.length();i++)
	{
		if(isupper(s[i]))
		{
			t++;
			
		}
		
		
	}
	cout<<t<<endl;
	return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vi(10,7);
	for(auto i : vi)
	{
		cout<<i<<"\t";
	}
	cout<<endl;
}	

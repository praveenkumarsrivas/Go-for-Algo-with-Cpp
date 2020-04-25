//removing consecutive duplicates from the string.
#include <iostream>
using namespace std;

int main() {
    char arr[100];
	cin.getline(arr,100);
	cout<<arr<<endl;
	int l=sizeof(arr)/sizeof(char);
	int p=0;
	for(int c=1;c<l;c++)
	{
	    if(arr[p]!=arr[c])
	    {
	        p++;
	        arr[p]=arr[c];
	    }
	    
	}
	arr[p+1]='\0';
	cout<<arr<<endl;
	
	return 0;
}

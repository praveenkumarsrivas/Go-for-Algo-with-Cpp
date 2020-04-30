#include<bits/stdc++.h>
using namespace std;
void shieve_fun(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
	//shieve theorem
    for(int i=2;i*i<=n;i++){
        
        if(prime[i]==true){
            
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
	long long int res=1;
    for(int i=2;i<=n;i++){
        if(prime[i])
        res*=i;
    }
    cout<<res<<endl;
}
int main()
 {
	
	    int n;
	    cin>>n;
	    shieve_fun(n);
	return 0;
}

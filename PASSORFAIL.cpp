#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T,n[1000],x[1000],p[1000];
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>n[i]>>x[i]>>p[i];
	}
	for(int i=0;i<T;i++){
	    if(x[i]*3+(n[i]-x[i])*(-1)>=p[i]){
	        cout<<"PASS"<<endl;
	    }else{
	        cout<<"FAIL"<<endl;
	    }
	}
	return 0;
}

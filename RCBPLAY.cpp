#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for (int i=0;i<t;i++)
    {
        int x,y,z,a;
        cin>>x>>y>>z;


        if (z*2>=y-x|| z*1>=y-x)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }



    return 0;
}
/*Greater Average*/

#include<iostream>
using namespace std;

int main() {
	// your code goes here
    float n,a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if(((a+b)/2)>c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}


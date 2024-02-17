#include<iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        float x,y,z;
        cin>>x>>y>>z;
        float total_stu;
        total_stu=x*y;
        double per;
        per = z*100/total_stu;
        cout<<per;
        if(per>50.0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}

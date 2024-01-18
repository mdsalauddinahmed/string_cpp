#include<bits/stdc++.h>
using namespace std;

int main(){


int t,n,r,res,x;
cin>>t;
while(t--){


    res=1;
    cin>>n>>r;
    for(int i=1;i<=n-r;i++){
        cin>>x;
        res*=x;
    }
    if(2024%res==0){
        cout<<"Yes"<<endl;
        cout<<2024/res<<" ";
        for(int i=1;i<=r-1;i++){
            cout<<1<<" ";

        }
        cout<<endl;
    }else{

    cout<<"No"<<" ";
    }

}


return 0;
}

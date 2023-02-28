#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,x,y;
	    cin>>m>>x>>y;
	    vector<bool>check(101,false);
        x*=y;
	    for(int i=0;i<m;i++){
            cin>>y;
	        if(y<=x && (y+x)<=100){
                for(int i=1;i<=y+x;i++)
                    check[i]=true;
            }
            else if(y>x && (y+x)<=100){
                for(int i=y-x;i<=y+x;i++)
                    check[i]=true;
            }
            else if(y>x && (y+x)>100){
                for(int i=y-x;i<=100;i++)
                    check[i]=true;
            }
            else if(y<=x && (y+x)>100){
                for(int i=1;i<=100;i++)
                    check[i]=true;
            }
	    }
        int c=0;
        for(int i=1;i<=100;i++){
            if(check[i]==false)
                c+=1;
        }
        cout<<c<<endl;
	}
	return 0;
}

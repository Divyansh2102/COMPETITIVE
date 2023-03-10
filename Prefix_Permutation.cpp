#include <iostream>
using namespace std;
void s(){
    int n;
    cin>>n;
    if(n%2)  cout<<-1<<endl;
    else{
        for(int i=1;i<=n;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
    }
}
int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--){
	    s();
	}
	return 0;
}

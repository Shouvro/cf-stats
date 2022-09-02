#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int N;
        cin >> N;
        char str[N];
        cin>> str;
        for (int i = 0; i < N; i++)
        {
            
            if (str[i]=='T' || islower(i)==true){
                cout<<"YES"<<endl;
                break;
            }
         else if(str[i]!='T'){
                cout<<"NO"<<endl;
                break; 
        }
    }
}
*/

int t;      cin>>t;
while(t--){
    int n;      cin>>n;
    string s;   cin>>s;
    
        if(n!=5 ){
            cout<<"NO"<<endl;
            continue;          
        }
        sort(s.begin(),s.end());
        if(s=="Timru"){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
        
        
            


}











}
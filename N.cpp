#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    cin.ignore();

    while (t--)
    {
        /* code */
        string s;
        cin>>s;
        int step=0;
        for(int i=0;i<s.length();i++){
          if(s[i]!='0') step++;
        }
        cout<<step<<endl;

        // cout<<endl<<"result"<<endl;

        for(int i=0;i<s.length();i++){

          if(s[i]!='0'){

            cout<<s[i];

            int j=i;

            while (j+1<s.length())
            {
                /* code */
                cout<<"0";
                j++;
            }
            cout<<" ";
          }  
        }


        cout<<endl;
    }
    
    return 0;
}
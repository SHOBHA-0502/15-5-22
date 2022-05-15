#include <bits/stdc++.h>

using namespace std;

int main(){
    int p,d,m,s;
    cin>>p>>d>>m>>s;
    int count=0;
    int amount=0;
    int i =0;
             for(i = p; i>=m;i-=d){
                 if(amount<s){    
                 amount +=i;
                //  cout<<amount<<"//"<<i<<"::"<<count<<endl;
                 count++;
                 }
             }
            //  cout<<"amn"<<amount<<endl;
             if(amount<s){
                //   cout<<"yes"<<endl;
                 while(amount<s){
                    //    cout<<amount<<"??"<<count<<endl;
                     amount+=m;
                     count++;
                 }
                 
             }
                //  cout<<amount<<"::"<<endl;
                if(amount == s){
                     cout<<count;
                }
                 else if(amount <s || amount>s){
                     cout<<count-1;
                 }
    
             
            
             
           
    
}
#include<iostream>
using namespace std;
int main(){
     int a[14],f[14],k=2000,b,c,i;
     float p;
     cout<<"Enter your current prestige: ";
     cin>>p;
     for( i=1;i<=13;i++){
        a[i]=k;
        k+=1000;
     }
     int h=4000,pos;
     int dec=p-(p/5);
     for( i=1;i<=12;i++){
        f[i]=h;
        h+=4000;
     }
     for(i=1;i<=12;i++){
        if(f[i]>p) {
            pos=i;
            break;
     }
     }
    for(i=1;i<=12;i++){
        if(dec+a[i]>f[pos]) {
            break;
        }
    }
    if(p<=48000 && p>=0){
    cout<<"Next immediate prestige goal "<<f[pos]<<endl;
    cout<<"Must reach bracket "<<i<<" (+"<<a[i]<<") to reach immediate next level"<<endl;
     cout<<"Enter ur current fame bracket: ";
     cin>>b;
     if(b>=1 && b<=13) cout<<"Your prestige after a week will be : "<<dec+a[b]<<endl;
     else cout<<"Invalid frame bracket enter between [1-13]"<<endl;
    
    }
    else if(p<0) cout<<"Invalid prestige :("<<endl;
    else{
        cout<<"U are on already maxed prestige :) "<<endl;
        int dec=p-(p/5);
        cout<<"Enter ur current fame bracket: ";
        cin>>b;
         if(b>=1 && b<=13) cout<<"Your prestige after a week will be : "<<dec+a[b]<<endl;
         else cout<<"Invalid frame bracket enter between [1-13]"<<endl;
    }

}
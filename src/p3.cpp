// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>

using namespace std;

bool isPrime(int n){
  for(int i=1;i<=n;i++){
    if(n%i==0 && i!=1 && i!=n){
      return false;
    }
  }
  return true;
}

int main(){
  int a,x;
  bool s=false;
  cin>>a;
  if(a==4){cout<<"2 2"};
  for(int i=2;i<(a/2)-1;i++){
    if(s==true){break;}
    if(isPrime(i)==true){
      x=i;
      for(int k=x;k<a;k++){
      if(isPrime(k)==true && x+k==a){
        cout<<x<<" "<<k;
        s=true;
        break;
      }
      }
    }
  }
  return 0;
}

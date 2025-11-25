#include <bits/stdc++.h>
using namespace std;
long long factorial(int k){
  if(k==0){return 1;}
  if(k==1){return 1;}
  else return(k*bb(k-1));
}
long long sum(int k){
  if(k==0){return 0;}
  if(k==1){return 1;}
  else return(k+aa(k-1));
}

int main() {
  long long x;
  cin>>x;
  cout<<factorial(x) << endl<<sum(x);
}

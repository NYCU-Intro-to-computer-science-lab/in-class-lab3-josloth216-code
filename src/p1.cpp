#include <bits/stdc++.h>
using namespace std;
long long bb(int k){
  if(k==1){return 1;}
  else return(k*bb(k-1));
}
long long aa(int k){
  if(k==1){return 1;}
  else return(k+aa(k-1));
}

int main() {
  long long x;
  cin>>x;
  cout<<bb(x) << endl<<aa(x);
}

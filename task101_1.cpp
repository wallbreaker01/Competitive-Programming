#include<bits/stdc++.h>
using namespace std;
int N = 99999999;
int a[3200000];



bool notPrime(int a[], int x){
    return(a[x/32] & (1<<(x % 32)));
}

void makeComposite(int a[], int x){
    a[x/32] |= (1 << (x % 32));
}

void bitSieve(int n){

  for(int i=2; i*i<=n; i++){
    if(!notPrime(a,i)){
        for(int j= i*i; j<=n ;j += i){
            makeComposite(a, j);
        }
    }
  }

 
  int ans = 1; 
  for(int i = 2; i<N; i++){
     if(!notPrime(a, i)){
       ans++;
     if(ans%100 == 1) cout << i << endl;
     }
  }

}




int main(){
   // call
    bitSieve(N);

    return 0;
}
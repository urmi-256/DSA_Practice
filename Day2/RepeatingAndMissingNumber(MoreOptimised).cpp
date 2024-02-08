#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &a, int n)
{    int num_xor = 0; 
    for(int i=0;i<n;i++){
        num_xor = num_xor ^ a[i]; 
    } 
    for(int i = 1; i <= n ;i++){
    num_xor = num_xor^i;    
    }
 int m = 1;
 int cnt = 0;
    while(!(num_xor & m)){
        m = m<<1;
        cnt++;
    }
 int xor1 = 0;
 int xor2 = 0;
 for(int i=0;i<n;i++){
     if(a[i] & m){
        xor1 = xor1^a[i];
     }
     else{
         xor2 = xor2^a[i];
     }
 }
 for(int i=1;i<=n;i++){
     if(i & m){
         xor1 = xor1^i;
     }
     else{
         xor2 = xor2^i;
     }
 }
 int f = 0;
 for(int i = 0 ; i < n;i++){
     if(xor2 == a[i]){
       f = 1;
         break;
     }
 }
 if(f){
     return {xor1,xor2};
 }
 else{
     return {xor2,xor1};
 }
}
// TC - O(n) and SC - (O(1))

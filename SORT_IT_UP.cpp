// Give an array only 0's ,1's & 2's . Sort array

// lets solve it 😁😁😁😁😁

// BST BHAGYASHRITAMRAKAR 
// Input 5
// 2 0 1 0 2
// Output  0 0 1 2 2

//  Method 1 == sort the array using sort function 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;             // size of array
    cin>>n; 
    int i,a;          // taking input size of array 
vector<int>v;           // initializing array through vector 
for( i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
    sort(v.begin(), v.end());
}
for( i=0;i<n;i++){
cout<<v[i]<<" ";}
}
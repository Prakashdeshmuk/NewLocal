#include<iostream>
using namespace std;

int solve(int n){
    // base case
    if(n==1){
        // no of darrangements are 0
        return 0;
    }
    if(n==2){
        return 1;
    }

    int ans = (n-1)*(solve(n-1)+solve(n-2));
    return ans;
}

int paint(int n,int k){
    if(n==1){
        return k;
    }
    if(n==2){
        return (k+(k*(k-1)));
    }
    
    int ans = (k-1)*(paint(n-2,k)+paint(n-1,k));
    return ans ;
}

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    // int ans = solve(n);
    // cout << ans << endl;

    int ans = paint(n,k);
    cout << ans << endl;

}
#include<bits/stdc++.h>
using namespace std;
void fun(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    fun(++i, n);
}
int main(){
    fun(1,6);
}
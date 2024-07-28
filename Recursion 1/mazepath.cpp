#include<bits/stdc++.h>
using namespace std;
int mazePath(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if (sr == er && sc == ec) return 1; 	
    return mazePath(sr,sc+1,er,ec)+mazePath(sr+1,sc,er,ec);
}
int main(){
    cout<<mazePath(1,1,4,4);
}

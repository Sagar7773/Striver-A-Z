function fun(i, n){
    if(i>n) return;
    console.log(i);
    fun(++i,n);
}
(fun(1,6))
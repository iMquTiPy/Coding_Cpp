int count(int n){
    if(n == 0)
    {
        return 0;
    }
    if(n<0)
    {
        return 0;
    }
    int smallAns = 1+count(n / 10);
    return smallAns;
}

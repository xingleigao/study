void selectSort(){
    for (int i = 1; i <= n; ++i){
        int k = i;
        for (int j = i; j <= n; ++j)
            if(A[j] < A[k])
                k=j;
        int temp = A[i];
        A[i] = A[k];
        A[k] = temp;
    } 
}
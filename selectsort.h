// void select_sort(int *x, int n);

void select_sort(int *x, int n){
    int i, j, min, t;
    for (i=0; i<n-1; i++){
        min = i;
        for (j=i+1; j<n; j++){
            if (*(x+j) < *(x+min))
                min = j;
        }
        if (min != i){
            t = *(x+i);
            *(x+i) = *(x+min);
            *(x+min) = t;
        }
    }
}

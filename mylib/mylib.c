int fibonacciIterative(int N){
    // iterative method
    if (N ==0){
        return 0;
    } else if (N == 1){
        return 1;
    } else {
        int num1 = 0;
        int num2 = 1;
        int output;
        for (int i = 2; i <= N; i++){
            output = num1 + num2;
            num1 = num2;
            num2 = output;
        }
        return output;
    }
}

int fibonacciRecursive(int N){
    // recursive method
    if (N == 0){
        return 0;
    } else if (N == 1){
        return 1;
    } else {
        return fibonacciRecursive(N-1) + fibonacciRecursive(N-2);
    }
}
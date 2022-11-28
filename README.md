# Fibonacci Benchmark

The Fibonacci Sequence is a series of numbers that gradually increases. The next number is found by adding up the two numbers before it. For example, the first number is 0, then 1, another 1, and it will slowly increase.

There are two ways to calculate a Fibonacci Sequence. Iterative and Recursive.

### Iterative Method
```c
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
```

### Recursive Method
```c
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
```

### How to run
```sh
make run
./main_test.exe
```

### Output
![Run](https://github.com/edeliciouso/fibonacci-benchmark/blob/main/images/Run%20Results.png)

#

## Time Complexity

Both of these results have the same N value, 30

### Iterative Run and Output
![Iterative Time](https://github.com/edeliciouso/fibonacci-benchmark/blob/main/images/Time%20Taken%20Iterative.png)

### Recursive Run and Output
![Recursive Time](https://github.com/edeliciouso/fibonacci-benchmark/blob/main/images/Time%20Taken%20Recursive.png)

## Space Complexity

### Results

Both of these results have the same N value, 3000

![space complexity](https://github.com/edeliciouso/fibonacci-benchmark/blob/main/images/Memory%20Taken.png)

## Conclusion

Based on these two results, it's clear that the Iterative method is more effective, as it requires less time and memory to run. It has lesser time complexity and space complexity compared to the Recursive method.

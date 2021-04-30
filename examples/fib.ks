// print all Fibonacci numbers up to c
func printfibs(c) {
  i = 0;
  j = 1;
  while(i<c) { 
    print(i); 
    i += j; 
    swap(i, j);
  }
}
// recursively find Fibonacci number at index n:
func fib(n) {
    if (n < 2) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}
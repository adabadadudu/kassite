# Examples
Complete examples there are in [examples directory](https://github.com/kassite-lang/kassite/main/blob/examples)
### Hello World
```c#
print("hello world");
```

### Fizzbuzz
```c#
func fizzbuzz(n) {
  for(i=1;i<=n;i++) { 
    if (i % 15 == 0) { 
      print("fizzbuzz"); 
    } else if (i % 3 == 0) { 
      print("fizz"); 
    } else if (i % 5 == 0) { 
      print("buzz"); 
    } else { 
      print(i);
    } 
  }
}
```

### Fizzbuzz With Map
```c#
func fizz(n) {
    if (n % 15 == 0) {
        return "FizzBuzz";
    } else if (n % 3 == 0) {
        return "Fizz";
    } else if (n % 5 == 0) {
        return "Buzz";
    }
    return n;
}
func fizzbuzz(n) {
    foreach(result; range(1,n).map(fizz)) {
        print(result);
    }
}
```

### The Fibonacci Series
```c#
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
```

### Functional Programming
```c#
funcs = [print, printfibs, fizzbuzz];
vals = [1,2,3,4,5,6];
foreach(v; vals) {
  print("operating on " + v);
  foreach(f; funcs) {
    f(v);
    print();
  }
}
```

```c#
func sub1(n) { 
  return n-1; 
}
foreach(i; map([1,2,3,4], sub1)) { 
  print(i); 
}
```
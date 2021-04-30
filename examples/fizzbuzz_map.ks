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
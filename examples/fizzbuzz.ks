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
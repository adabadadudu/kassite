funcs = [print, printfibs, fizzbuzz];
vals = [1,2,3,4,5,6];
foreach(v; vals) {
  print("operating on " + v);
  foreach(f; funcs) {
    f(v);
    print();
  }
}

class xx { 
    var x; 
    func xx(_x) { 
        x = _x; 
    } 
    func add(_x, _y) { 
        x += _x; y += _y; 
    } 
}
class yy { 
    var y; 
    func yy(_y) { 
        y = _y; 
    } 
    func sqr() { 
        return x * y; 
    } 
}
// You get the functions and variables of each parent class (but not the constructors)
// in event of name collisions, last one in wins
class prexy -> xx, yy { 
    func prexy(_x, _y) { 
        x = _x; y = _y; 
    } 
}
// You get the inherited parents too
class xy -> prexy { 
    func xy(_x, _y) { 
        x = _x; y = _y;
    } 
}
a = xy(4,5.0); 
b = copy(a); 
b.add("a","b"); 
c = a.sqr(); 
a.add(4,5); 
d = a.sqr(); 
e = a.x; 
f = a.y;
print(a);
// prints:
// xy:
// `x: 8`
// `y: 10.000000`
// `add: add`
// `sqr: sqr`
print(b);
// prints:
// xy:
// `x: 4a`
// `add: add`
// `y: 5.000000b`
// `sqr: sqr`
print(c);
// prints: 20.000000
print(d);
// prints: 80.000000
print(e);
// prints: 8
print(f);
// prints: 10.000000
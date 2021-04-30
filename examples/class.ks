class person {
    var name;
    var age;
    var hobby;
    func person(n, a, h) {
        name = n;
        age = a;
        hobby = h;
    }
    func wouldLike(other) {
        return hobby == other.hobby;
    }
    func greet() {
        print("Hey I'm " + name + ", age " + age + ", and my hobby is " + hobby);
    }
}
var me = person("Garrett", 28, "programming");
me.greet();
// prints: Hey I'm Garrett, age 28, and my hobby is programming
print(me.wouldLike(person("You", 0, "programming")));
// prints: 1 (aka true)
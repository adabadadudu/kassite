class person {
    var name;
    var hobby;
    func person(n, h) {
        name = n;
        hobby = h;
    }
    func wouldLike(other) {
        return hobby == other.hobby;
    }
    func greet() {
        print("Hey I'm " + name + ", and my hobby is " + hobby);
    }
}
var me = person("Hasan", "programming");
me.greet();

print(me.wouldLike(person("You", 0, "programming")));
// prints: 1 (aka true)

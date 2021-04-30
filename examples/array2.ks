i = [1, 2, 3]; // array from literal
i = array(1, "fish", 2, 3); // array function
// array type is the type of the first element added.
print(i[1]);
// prints: 2, note how "fish" was not added to the array
print(length(i));
// prints: 3, again only the integer values were accepted
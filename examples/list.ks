i = [1.0, 2, 3, "squid"]; // list from literal
i = list(1, 2, 3); // list function
print(i[1]);
// prints: 2
print(length(i));
// prints: 3
j = list(4, 5, 6);
k = list(7, 8, 9);
a = list(i, j, k);
print(a);
// prints: 1, 2, 3, 4, 5, 6, 7, 8, 9
i = list("fish", "tacos");
print(a);
// prints: fish, tacos, 4, 5, 6, 7, 8, 9
k = list(7, "string", 9.0);
print(a);
// prints: fish, tacos, 4, 5, 6, 7, string, 9.000000
build:
	g++ -std=c++2a -static -static-libgcc -static-libstdc++ src/Main.cpp -o kassite

install:
	sudo mv kassite /usr/local/bin/kassite
	kassite examples/hello.ks

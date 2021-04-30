build:
	g++ -std=c++2a src/Interpreter/Main.cpp -o kassite

install:
	sudo mv kassite /usr/local/bin/kassite
	kassite examples/hello.ks

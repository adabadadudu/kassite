/* The Main Program of Kassite Interpreter
 * File version : 1.0
 * THIS FILE IS A PART OF KASSITE LANGUAGE
 * The Kassite Programming Language
 * Copyright (c) 2021 Kassite Team,
 * all rights reserved.
 */

#define KASSITE_IMPL
#include "includes/Kassite.hpp"
#include "includes/utils.hpp"
#include "includes/repl.hpp"
#include <fstream>

// define kassite interpreter
Kassite::KassiteInterpreter interpreter;
//kassite version
std::string ks_version = "1.0.1";

int main(int argc, char** argv) {
	if (argc == 1) {
		std::cout << "Kassite Interpreter v" << ks_version << " --- " << SysPlatform() << std::endl;
		std::cout << "usage : kassite <inputfile.ks>" << std::endl;
        // start repl
        Kassite::StartREPL(interpreter);
	} else if (argc == 2 ) {
        auto argstr = std::string(argv[1]);
        bool skipfirst = !Kassite::endswith(argstr, ".ks");
		// run script from file
        std::string s;
		auto file = std::ifstream(argv[1]);
        if (file) {
            file.seekg(0, std::ios::end);
            s.reserve(file.tellg());
            file.seekg(0, std::ios::beg);
            if (skipfirst) {
                getline(file, s);
            }
            s.assign((std::istreambuf_iterator<char>(file)),
                std::istreambuf_iterator<char>());
            return interpreter.evaluate(s);
        } else {
			printf("Error: %s not found", argv[1]);
			return 1;
		}
    }else {
		printf("usage : kassite <inputfile.ks>");
	}
	return 0;
}
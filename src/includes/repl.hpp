/* This file contains Kassite interpreter repl
 * File version : 1.2.8
 * THIS FILE IS A PART OF KASSITE LANGUAGE
 * The Kassite Programming Language
 * Copyright (c) 2021 Kassite Team,
 * all rights reserved.
 */
#include "Kassite.hpp"
#include <fstream>

namespace Kassite{
    void StartREPL(Kassite::KassiteInterpreter interpreter) {
        std::string s;
	    std::cout << "\n>>>";
        while (getline(std::cin, s) && s != "quit") {
            interpreter.readLine(s);std::cout << ">>>";
        }
    }
}

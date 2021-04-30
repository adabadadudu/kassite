#define KASSITE_IMPL
#include "../Library/Kassite.hpp"
#include <fstream>
#include "utils.hpp"

Kassite::KassiteInterpreter interp;
std::string ks_version = "1.0";

void interpret() {
    std::string s;
	std::cout << "\n>>>";
    while (getline(std::cin, s) && s != "quit") {
        std::cout << ">>>";interp.readLine(s);
    }
}

int main(int argc, char** argv) {
	if (argc == 1) {
		std::cout << "Kassite Interpreter v" << ks_version << " --- " << SysPlatform() << std::endl;
		std::cout << "usage : kassite <inputfile.ks>" << std::endl;
        interpret();
	} else if (argc == 2) {
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
            return interp.evaluate(s);
        } else {
			printf("Error: %s not found", argv[1]);
			return 1;
		}
	} else {
		printf("usage : kassite <inputfile.ks>");
	}

	return 0;
}
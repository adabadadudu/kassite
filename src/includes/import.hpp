/* This file contains Kassite interpreter importing system
 * File version : 0.1
 * THIS FILE IS A PART OF KASSITE LANGUAGE
 * The Kassite Programming Language
 * Copyright (c) 2021 Kassite Team,
 * all rights reserved.
 */

namespace Kassite {
    std::string GetModuleSources(){
        std::string src; // keeps module source code
        char tmp_src[1000];

        // open module file
		auto file = std::ifstream("mod.txt");
        // is mod.txt exists ?
        if (file) {
            while(file.getline(tmp_src,1000)){
				std::string src_t;
				char tmp_src_t[1000];
				
				auto file_t = std::ifstream(std::string(tmp_src) + std::string(".ks"));
				if (file_t) {	
					while(file_t.getline(tmp_src_t,1000)){
						src_t += std::string(tmp_src_t) + "\n";	
					}
					src += src_t + std::string("\n");
				}else {
					std::cout << "Import Error : " << tmp_src << "not found"<<std::endl;
				}
			}
            return src;
		}
		return "";
    }
}

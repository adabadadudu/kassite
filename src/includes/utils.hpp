/* This file contains Kassite interpreter utils
 * File version : 1.2.8
 * THIS FILE IS A PART OF KASSITE LANGUAGE
 * The Kassite Programming Language
 * Copyright (c) 2021 Kassite Team,
 * all rights reserved.
 */

#include <iostream>
std::string SysPlatform()
{
    #ifdef _WIN32
    return "win32";
    #elif _WIN64
    return "win64";
    #elif __APPLE__ || __MACH__
    return "macOS";
    #elif __linux__
    return "linux";
    #elif __FreeBSD__
    return "freebsd";
    #elif __unix || __unix__
    return "unix";
    #else
    return "other";
    #endif
}    
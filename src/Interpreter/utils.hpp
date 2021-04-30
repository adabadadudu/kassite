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
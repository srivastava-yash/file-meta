#include "lib.h"
#include<stdio.h>
#include<iostream>
namespace fs = std::filesystem;

int main() {

    std::cout<<"Enter filepath: ";
    std::string path;
    std::getline(std::cin, path);

    std::cout<<"Filesize = "<<get_file_size(path)<<"MB";

    return 0;
}
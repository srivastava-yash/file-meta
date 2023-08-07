#include "lib.h"
#include<stdio.h>
#include<iostream>
namespace fs = std::filesystem;

int main() {

    std::cout<<"Enter filepath: ";
    std::string path;
    std::getline(std::cin, path);

    std::cout<<"Filesize = "<<get_file_size(path)<<"MB"<<std::endl;
    std::string whitespaces = has_whitespace_start_and_end(path)? "True" : "False";
    std::cout<<"Files contains leading or trailing whitespaces - "<< whitespaces << std::endl;
    std::cout<<"File head:\n"<< get_file_head(path)<<std::endl;
    std::cout<<"lines: "<<get_line_count(path);

    return 0;
}
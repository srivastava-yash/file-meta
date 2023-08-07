#ifndef LIB_H
#define LIB_H

#include<filesystem>
#include<string>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

std::uintmax_t get_file_size(std::string filepath);

bool has_whitespace_start_and_end(std::string filepath);

#endif
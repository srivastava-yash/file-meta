#ifndef LIB_H
#define LIB_H

#include<filesystem>
#include<string>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

std::uintmax_t get_file_size(std::string filepath);

bool has_whitespace_start_and_end(std::string filepath);

int get_line_count(std::string filepath);

std::string get_file_head(std::string filepath);

#endif
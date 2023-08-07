#include "lib.h"


std::uintmax_t get_file_size(std::string filepath) {
    const fs::path path = fs::u8path(filepath);
    std::uintmax_t fsize_in_bytes = fs::file_size(path);
    double fsize_in_mb = static_cast<double>(fsize_in_bytes) / (1024.0 * 1024.0);
    return fsize_in_mb;
}

bool has_whitespace_start_and_end(std::string filepath) {
    std::ifstream file(filepath);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filepath << std::endl;
        return false;
    }

    // Read the contents of the file into a string
    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    // Check if the string is empty or contains only whitespace characters
    if (content.empty() || std::all_of(content.begin(), content.end(), [](char c) { return std::isspace(c); })) {
        file.close();
        return false;
    }

    // Check if the first or last character is a whitespace character
    bool startsWithWhitespace = std::isspace(content[0]);
    bool endsWithWhitespace = std::isspace(content[content.size() - 1]);

    file.close();

    return startsWithWhitespace && endsWithWhitespace;
}


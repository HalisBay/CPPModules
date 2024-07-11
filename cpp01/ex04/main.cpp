/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:09:24 by hbay              #+#    #+#             */
/*   Updated: 2024/05/14 13:31:57 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream myFile(filename.c_str()); // Convert std::string to const char*
    if (!myFile) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }
    std::ofstream newFile("reversed.txt");

    if (!newFile) {
        std::cerr << "Error creating reverse file." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(myFile, line)) {
        size_t pos = line.find(s1);
        while (pos != std::string::npos) {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos = line.find(s1, pos + s2.length());
        }
        newFile << line << std::endl;
    }

    myFile.close();
    newFile.close();
    std::cout << "Success" << std::endl;
}

int main() {
    std::string filename, s1, s2;
    std::cout << "Enter filename: ";
    std::getline(std::cin, filename);
    if (std::cin.eof())
        return 0;
    std::cout << "Enter string to replace: ";
    std::getline(std::cin, s1);
    if (std::cin.eof())
        return 0;
    std::cout << "Enter replacement string: ";
    std::getline(std::cin, s2);
    if (std::cin.eof())
        return 0;

    replaceInFile(filename, s1, s2);

    return 0;
}


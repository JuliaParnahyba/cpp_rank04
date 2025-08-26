/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:52:35 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/25 21:23:42 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void    print_usage() {
    std::cout << "Usage: ./sed_is_for_losers <filename> <s1> <s2>"
            << std::endl;
}

std::string empty_checker(const std::string &in, const std::string &s1) {
    if (in.empty())
        return "<filename>";
    else if (s1.empty())
        return "<s1>";
    return "";
}

std::string replace_all(const std::string &src, const std::string &from, const std::string &to) {
    std::string out;

    if (from == to)
        return src;

    out.reserve(src.size());
    std::string::size_type pos = 0;
    std::string::size_type found = 0;
    while (true) {
        found = src.find(from, pos);
        if (found == std::string::npos) {
            out.append(src, pos, src.size() - pos);
            break;
        }
        out.append(src, pos, found - pos);
        out.append(to);
        pos = found + from.size();
    }
    return out;
}

bool    process_file(const std::string &input, const std::string &s1, const std::string &s2) {
    std::ifstream   file_in(input.c_str(), std::ios::in);
    if (!file_in) {
        std::cerr << "Error: could nor open input file: "
                << input << std::endl;
        return false;
    }

    std::string outname = input + ".replace";
    std::ofstream file_out(outname.c_str(), std::ios::out | std::ios::trunc);
    if (!file_out) {
        std::cerr << "Error: could not create output file: " << outname << std::endl;
        return false;
    }

    std::string line;
    bool first = true;
    while(std::getline(file_in, line)) {
        if (!first) 
            file_out << '\n';
        first = false;
        file_out << replace_all(line, s1, s2);
    }
        
    if (file_in.bad()) {
        std::cerr << "Error: read failure on input file." << std::endl;
        return false;
    }
    return true;
}

int main(int argc, char **argv) {
    if (argc != 4) {
        print_usage();
        return 1;
    }

    const   std::string in = argv[1];
    const   std::string s1 = argv[2];
    const   std::string s2 = argv[3];
    const   std::string res = empty_checker(in, s1);

    if (!res.empty()) {
        std::cout << "Error: " << res << " must be non-empty." << std::endl;
        return 1;
    }

    std::cout << "The <filename> is: " << in << std::endl;
    std::cout << "The s1 is: " << s1 << std::endl;
    std::cout << "The s2 is: " << s2 << std::endl;
    
    if (!process_file(in, s1, s2))
        return 1;  
    return 0;
}

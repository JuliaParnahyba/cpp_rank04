/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedReplacer.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:52:34 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/25 22:22:23 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedReplacer.hpp"

SedReplacer::SedReplacer(const std::string &input, const std::string &s1, const std::string &s2)
: _input(input), _s1(s1), _s2(s2) {}

bool    SedReplacer::openInput(std::ifstream &file_in) const {
    file_in.open(this->_input.c_str(), std::ios::in);
    if (!file_in) {
        std::cerr << "Error: could not open input file: "
                << this->_input << std::endl;
        return false;
    }
    return true;
}

bool    SedReplacer::openOutput(std::ofstream &file_out, std::string &outname) const {
    outname = this->_input + ".replace";
    file_out.open(outname.c_str(), std::ios::out | std::ios::trunc);
    if (!file_out) {
        std::cerr << "Error: could not create output file: " << outname << std::endl;
        return false;
    }
    return true;
}

std::string SedReplacer::replaceAll(const std::string &src, const std::string &from, const std::string &to) {
    if (from == to)
        return src;

    std::string out;
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

bool    SedReplacer::run() {
    if (this->_input.empty() || this->_s1.empty()) {
        std::cerr << "Error: <filename> and <s1> must be non-empty.\n";
        return false;
    }

    std::ifstream   file_in;
    if (!openInput(file_in))
        return false;

    std::ofstream   file_out;
    std::string     outname;
    if (!openOutput(file_out, outname))
        return false;

    std::string     line;
    bool first = true;
    while (std::getline(file_in, line)) {
        if (!first)
            file_out << '\n';
        first = false;
        file_out << replaceAll(line, this->_s1, this->_s2);
    }

    if (file_in.bad()) {
        std::cerr << "Error: read failure on input file.\n";
        return false;
    }
    return true;
}
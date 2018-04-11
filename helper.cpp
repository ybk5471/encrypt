#include <cctype>
#include <fstream>
#include <iostream>

#include "helper.hpp"

namespace helper {

	void log(const std::string &loginfo) {
		std::cout << loginfo << std::endl;
	}

	void toupper(std::string &str) {
		for(auto i = str.begin(); i != str.end(); ++i) {
			*i = std::toupper(*i);
		}
	}

	bool read(const std::string &filename, std::vector<std::string> &content) {
		std::ifstream ifs;
		ifs.open(filename);
		if (!ifs.is_open()) {
			log("read " + filename + ": open file failed!" );
			return true;
		}

		if (!content.empty()) {
			content.clear();
		}

		std::string single_line;
		while (std::getline(ifs, single_line)) {
			content.push_back(single_line);
		}
		ifs.close();
		return true;
	}

	bool write(const std::string &filename, std::vector<std::string> &content) {
		std::ofstream ofs;
		ofs.open(filename, std::ios::trunc);
		if (!ofs.is_open()) {
			log("write " + filename + ": open file failed!");
			return false;
		}
		for (auto i : content) {
			ofs << i;
			ofs << '\n';
		}
		ofs.close();
		return true;
	}

} /* namespace helper */

#ifndef _HELPER_H_
#define _HELPER_H_

#include <string>
#include <vector>

namespace helper {

	void log(const std::string &loginfo);

	void toupper(std::string &str);

	///@note: read 'filename' all content line by line.
	bool read(const std::string &filename, std::vector<std::string> &content);

	///@note: element in 'content' should be one line content, write filename line by line
	bool write(const std::string &filename, std::vector<std::string> &content);

	///@todo: add append function

} /* namespace img_process */

#endif

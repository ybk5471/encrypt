#include "helper.hpp"
#include "encryptor.hpp"

bool encryptor::encrypt(const std::string &file) {

	std::vector<std::string> content;
	helper::read(file, content);

	for (auto ele = content.begin(); ele != content.end(); ++ele) {
		helper::toupper(*ele);
	}

	helper::write(file, content);
	return true;
}

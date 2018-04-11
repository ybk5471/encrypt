#pragma once

#include <string>
class encryptor {
public:
	encryptor() {}
	~encryptor() {}

	std::string genPK() const {
		return m_public_key;
	}

	bool encrypt(const std::string &file);

private:
	std::string m_public_key;
	std::string m_private_key;
};

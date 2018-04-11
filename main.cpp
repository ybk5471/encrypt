#include "helper.hpp"
#include "encryptor.hpp"

int main(int argc, char *argv[]) {
	if (argc < 2) {
		helper::log("please enter file path!");
		return -1;
	}

	encryptor enc;
	enc.encrypt(argv[1]);
	return 0;
}

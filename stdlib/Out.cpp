#include "Out.h"

const std::string Out::CHARSET_NAME = "UTF-8";
const std::locale Out::LOCALE = std::locale::classic();

Out::Out() : out(&std::cout) {}
Out::Out(std::ostream& os) : out(&os) {}
Out::Out(const std::string& filename) : out(new std::ofstream(filename)) {}
Out::~Out() {
	delete out;
}

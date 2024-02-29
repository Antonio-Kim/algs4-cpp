#pragma once
#include <string>
#include <ostream>
#include <locale>

class Out {
private:
	static const std::string CHARSET_NAME;
	static const std::locale LOCALE;
	std::ostream out;
public:
	Out();
	Out(const std::ostream& os);
	Out(const std::string& filename);
	// Out(Socket socket) NB: will need to implement Socket library

	void close();
	void print();
	void print(bool x);
	void print(unsigned char x); // Byte
	void print(char x);
	void print(double x);
	void print(float x);
	void print(int x);
	void print(long x);

	template <typename T>
	void printf(const T& x);

	template <typename... Args>
	void printf(std::string format, Args... args);

	template <typename... Args>
	void printf(std::locale locale, std::string format, Args... args);

	void println();
	void println(bool x);
	void println(unsigned char x); // Byte
	void println(char x);
	void println(double x);
	void println(float x);
	void println(int x);
	void println(long x);

	template <typename T>
	void println(const T& x);
};
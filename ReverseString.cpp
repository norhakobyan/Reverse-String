#include <iostream>
#include <string>

void reverse_str(char* s, std::string);

int main() {

	std::string a;
	std::cin >> a;
	char * s = new char[a.length()];
	reverse_str(s,a);
}

void reverse_str(char* s, std::string a) {
	int len = a.length();
	char ch;
	for (int i = 0; i < len; ++i) {
		s[i] = a[i];
	}
	for (int i = 0; i < len / 2; ++i) {
		ch = s[len - 1 - i];
		s[len - 1 - i] = s[i];
		s[i] = ch;
	}
	std::cout << "reverse string" << std::endl;
	for (int i = 0; i < len; ++i) {
		std::cout << s[i];
	}
	std::cout<<std::endl;

}
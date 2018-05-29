#include <iostream>

using namespace std;

void reverse_str(char * ch);

int main()
{
	char ch[100];
	cout << "enter string ";
	cin >> ch;
	

	reverse_str(ch);
	cout << "The reverse is " << ch;
	cout << endl;
}

void reverse_str(char * ch) {
	
	char *tmp = ch;
	while (*tmp) {
		*tmp++;
	}
	--tmp;
	char res;
	while (ch != tmp) {
		res = *ch;
		*ch++ = *tmp;
		*tmp-- = res;
	}
}

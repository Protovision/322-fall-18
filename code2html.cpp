#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	char c;
	while (cin.get(c)) {
		if (c == '<') cout << "&lt;";
		else if (c == '>') cout << "&gt;";
		else if (c == '&') cout << "&amp;";
		else if (c == '\t') cout << "&nbsp;&nbsp;&nbsp;&nbsp;";
		else if (c == '\n') cout << "<br>";
		else cout << c;
	}
	return 0;
}

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main() {
	char a[20], b[20];
	char a2[] = "123";
	res:
	cout << "Login: ";
	gets_s(a);
	cout << "Pass: ";
	gets_s(b);
	if (strcmp("123",a) == 0 && strcmp("123", b) == 0) 
	{ cout << "Welcome!\n"; }
	else { cout << "Error\n"; goto res; }
	system("pause");
	return 0;
}

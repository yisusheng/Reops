#include <iostream>
using namespace std;

//void func() {
//	cout << "func() called..." << endl;
//}
//
//int main() {
//	void (*fp) ();
//	fp = func;
//	(*fp)();
//}

#define DF(N) void N() { \
   cout << "function " #N " called..." << endl; }

DF(a); DF(b); DF(c); DF(d); DF(e); DF(f);

void (*func_table[]) () = { a,b,c,d,e,f };

int main() {
	while (true)
	{
		cout << "press a key from 'a' to 'f' "
			"or q to quit" << endl;
		char c, cr;
		cin.get(c);
		cin.get(cr);
		if (c == 'q')
			break;
		if (c < 'a' || c>'f')
			continue;
		(*func_table[c - 'a'])();
	}
}
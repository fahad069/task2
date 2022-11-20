#include"Mychar.h"
int main()
{
	Mychar A;
	char a = 0;
	cout << "Enter an alphabet: ";
	cin >> a;
	A.setValue(a);
	A.display(a);
	

}
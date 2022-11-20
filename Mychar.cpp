#include"Mychar.h"
void Mychar::setValue(char temp)
{
	alpha = temp;
}
char Mychar::getValue(void)
{
	return alpha;
}
void Mychar::alphaCheck(char alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
	{
		cout << "Given char is a lower case alphabet. " << endl;
		cout << "The char is " << alpha << endl;
		lowerToHigher(alpha);
	}
	else if (alpha >= 'A' && alpha <= 'Z')
	{
		cout << "Given char is a upper case alphabet" << endl;
		cout << "The char is " << alpha << endl;
		higherToLower(alpha);
	}
}
void Mychar::lowerToHigher(char)
{
	char higher = alpha - 32;
	cout << "The uppar case of given alphabet is: " << higher << endl;
}
void Mychar::higherToLower(char)
{
	char lower = alpha + 32;
	cout << "The lower case of given alphabet is: " << lower << endl;
}
void Mychar::display(char alpha)
{
	alphaCheck(alpha);
}
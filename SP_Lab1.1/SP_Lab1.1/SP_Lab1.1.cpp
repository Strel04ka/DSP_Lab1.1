#include <iostream>
using namespace std;

int main()
{
	bool p; cout << "p = "; cin >> p;
	bool q; cout << "q = "; cin >> q;
	bool And = p and q;
	bool OR = p or q;
	bool XOR = p xor q;
	bool implication1 = ~p || q;
	bool implication2 = ~q || p;
	bool equivalent = implication1 && implication2;
	cout << "\nAND: " << And << endl;
	cout << "OR: " << OR << endl;
	cout << "XOR: " << XOR << endl;
	cout << "p -> q: " << implication1 << endl;
	cout << "q -> p: " << implication2 << endl;
	cout << "p ~ q: " << equivalent << endl;
}

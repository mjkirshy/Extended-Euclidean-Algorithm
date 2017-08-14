#include <iostream>
#include <iomanip>
// Matthew Kirshy 7/20/17 (Euclidean Algorithim and Modular Inverse)
using namespace std;

int main() {

	int A, B, q, S, Sprime, T, Tprime, temp, temp1, temp2, temp3, var;

	cout << "To do stuff press 1: ";
	cin >> var;
	while (var == 1)
	{
		cout << "Please input A: ";
		cin >> A;
		cout << "Please input B: " ;
		cin >> B;
		if (B > A) {
			temp = A; 
			A = B; 
			B = temp;
		}
		S = 0;
		T = 1;
		Sprime = 1;
		Tprime = 0;
		while (B != 0) {
			q = A / B;
			temp1 = A%B;
			A = B;
			B = temp1;

			temp2 = S;
			S = Sprime - q*S;
			Sprime = temp2;

			temp3 = T;
			T = Tprime - q*T;
			Tprime = temp3;
		}
		if (A > 1) {
			cout << "gcd: " << A << " s= " << Sprime << " t= " << Tprime << endl;
			cout << "To do this again please press 1: ";
			cin >> var;
		}
		else {
			cout << "gcd = 1 and the modular inverse is: " << Tprime << endl;
			cout << "To do this again please press 1: ";
			cin >> var;
		}
	}
	cout << "Goodbye " << endl;
	return 0;
}

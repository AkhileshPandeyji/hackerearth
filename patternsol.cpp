
#include <iostream>

using namespace std;

void space(int m) {
	for (int i = 0; i < m; i++) {
		cout << " ";
	}
}

//updated version
int main()
{
	int no, l = 0, k = 0, f, b = 0, c;
	cin >> no;
	f = no - 2;
	if (no % 2 != 0) {
		for (int i = 1; i <= no/2+1; i++) {
			if (i == 1) {
				cout << "*";
				space(f);
				cout << "*";
				cout << endl;
				continue;
			}

			for (int j = 1; j <= 2; j++) {
				if (i == (no / 2 + 1) && j == 2) {
					
					continue;
				}
				cout << "*";
				if (i > 2 && j==1) {
					k++;
					space(k);
				
				}
			}
			if (i > 1) {
				f = f - 2 * (i - 1);
				space(f);
				
				f = no - 2;
				
 				}

			for (int j = 1; j <=2; j++) {
				
			

					cout << "*";
					if (i > 2 && j == 1) {
						l++;
						space(l);

					}

				
			}
			cout << endl;
		}
		for (int i = no / 2; i >= 1; i--) {
			if (i == 1) {
				cout << "*";
				space(f);
				cout << "*";
				cout << endl;
				break;
			}

			for (int j = 1; j <= 2; j++) {
				cout << "*";
				if (i > 2 && j == 1) {
					k--;
					space(k);
					

				}
			}
			if (i > 1) {
				c = ((no / 2+1)-i) + 1;
				
				b = 0;
				b = b + 2 * (c - 1) - 1;
				space(b);

				
			}

			for (int j = 1; j <= 2; j++) {

				cout << "*";
				if (i > 2 && j == 1) {
					l--;
					space(l);
				

				}


			}
			cout << endl;
		}
			
	}
	else {
		cout << "Enter the odd no" << endl;
	}
	return 0;
}


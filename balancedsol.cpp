
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string b="";
	int count = 0;
	cin >> b;
	int i = 0;
	for( i = 0; i <b.length();){
		if (b[i] == '(') {
			if (b[i + 1] == ')') {
				i += 2;
			}
			else {				
				i += 1;
				count++;
			}
		}
		else if (b[i] == ')') {
			count++;
			i += 1;
		}
		}

	if (count <=1){
		cout << "YES";
	}
	else if (count > 1) {
		cout << "NO";
	}
	return 0;
    }

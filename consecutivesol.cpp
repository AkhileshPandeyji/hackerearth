
#include <iostream>

using namespace std;

int main()
{
	int no;
	int sum = 0;
	int count = 0;
	int k;
	cin >> no;
	for (int i = 2; i <=no; i++) {
		for (int j = 1; j <= i; j++){
			for (k = j; k <= i; k++) {
				sum += k;
			}
			if (sum == no)
				count++;
			sum = 0;
			
		}
	
	}
	cout << count - 1;
	return 0;
    }

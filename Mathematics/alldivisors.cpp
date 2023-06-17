// A O(sqrt(n)) program that prints all divisors
// in sorted order
#include <iostream>
#include <math.h>
using namespace std;

// Function to print the divisors
void printDivisors(int n)
{
	int i;
	for (i = 1; i * i < n; i++) {
		if (n % i == 0)
			cout<<i<<" ";
	}
//	if (i - (n / i) == 1) {
//		i--;
//	}
	for (; i >= 1; i--) {
		if (n % i == 0)
			cout<<n / i<<" ";
	}
}

// Driver code
int main()
{
	cout << "The divisors of 100 are: \n";

	printDivisors(24);

	return 0;
}

// This code is contributed by siteshbiswal
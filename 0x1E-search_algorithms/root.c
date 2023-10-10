#include <stdio.h>
int squareRoot(int n, float l)
{
	// Assuming the sqrt of n as n only
	int x = n;

	// The closed guess will be stored in the root
	int root;

	// To count the number of iterations
	int count = 0;

	while (1) {
		count++;

		// Calculate more closed x
		root = 0.5 * (x + (n / x));

		// Check for closeness
		if ((-1) *(root - x) < l)
			break;

		// Update root
		x = root;
	}

	return root;
}

// Driver code
int main()
{
	int n = 327;
	float l = 0.00001;

	printf("%d", squareRoot(n, l));

	return 0;
}


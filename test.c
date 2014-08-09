#include <math.h>
#include <stdio.h>


//change 1
int squareCount(int N) {
	if (N < 4) 
		return 0;
	int square = (int) floor(sqrt(N));
	int ret = square * (square - 1) * (2 * square - 1) / 6;
	int rem = N - square * square;
	if (rem == 0) 
		return ret;
	if (rem <= square) 
		return ret + rem * (rem - 1) / 2;
	ret += square * (square - 1) / 2;
	rem -= square;
	return ret + rem * (rem - 1) / 2;
}

int main()
{
	printf("%d", squareCount(115));
	return 0;
}








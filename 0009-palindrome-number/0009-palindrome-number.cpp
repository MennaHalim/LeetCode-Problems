class Solution {
public:
    bool isPalindrome(long long x) {

    if (x < 0 )
    return false;

    long long rev = 0, digit = 0;
    long long x_copy = x; 


	while (x_copy != 0) {

		digit = x_copy % 10;
		x_copy = x_copy / 10;
		rev = (rev * 10) + digit;
	}

	return rev == x;
    }
};
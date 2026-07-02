// Count digits in a number
class Solution {
public:
    int countDigits(int n) {
        if (n == 0)
            return 1;

        int count = 0;

        while (n > 0) {
            count++;
            n /= 10;
        }

        return count;
    }
};

// Reverse a number
class Solution {
public:
    int reverseNumber(int n) {
        int rev = 0;

        while (n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }

        return rev;
    }
};

// Palindrome Number
class Solution {
public:
    bool isPalindrome(int n) {
        int original = n;
        int reverse = 0;

        while (n > 0) {
            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n = n / 10;
        }

        return original == reverse;
    }
};


// GCD of Two Numbers
class Solution {
public:
    int GCD(int n1, int n2) {
        while (n2 != 0) {
            int rem = n1 % n2;
            n1 = n2;
            n2 = rem;
        }
        return n1;
    }
};

// Check if the Number is Armstrong
class Solution {
public:
    bool isArmstrong(int n) {
        int original = n;

        // Count digits
        int digits = 0;
        int temp = n;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += pow(digit, digits);
            n /= 10;
        }

        return sum == original;
    }
};

// Divisors of a Number
class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> ans;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                ans.push_back(i);
        }

        return ans;
    }
};

// Check for Prime Number
class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }
};
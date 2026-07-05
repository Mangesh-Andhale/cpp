class Solution {
public:
    void printNos(int n) {
        // Base case
        if (n == 0) {
            return;
        }

        // Recursive call
        printNos(n - 1);

        // Print after recursion
        cout << n << endl;
    }
};

// Print N to 1 using Recursion

class Solution {
public:
    void printNos(int n) {
        // Base case
        if (n == 0) {
            return;
        }

        // Print first
        cout << n << endl;

        // Recursive call
        printNos(n - 1);
    }
};

// Sum of First N Numbers

class Solution {
public:
    int sumOfFirstN(int n) {
        // Base case
        if (n == 0) {
            return 0;
        }

        // Recursive case
        return n + sumOfFirstN(n - 1);
    }
};
	
// Factorial of a given number

class Solution {
public:
    int factorial(int n) {
        // Base case
        if (n == 0 || n == 1) {
            return 1;
        }

        // Recursive case
        return n * factorial(n - 1);
    }
};

	
// Reverse an array

class Solution {
public:
    void reverseArray(vector<int>& arr, int left, int right) {
        // Base case
        if (left >= right) {
            return;
        }

        // Swap elements
        swap(arr[left], arr[right]);

        // Recursive call
        reverseArray(arr, left + 1, right - 1);
    }
};

// Check if String is Palindrome or Not

class Solution {
public:
    bool isPalindrome(string &s, int left, int right) {
        // Base case
        if (left >= right) {
            return true;
        }

        // Characters don't match
        if (s[left] != s[right]) {
            return false;
        }

        // Recursive call
        return isPalindrome(s, left + 1, right - 1);
    }
};


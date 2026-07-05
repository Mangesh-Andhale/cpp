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
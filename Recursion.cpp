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
lass Solution {
public:
    int distinctIntegers(int n) {
        if(n <= 2) { 
            return 1;
        }
        return n - 1;
    }
};

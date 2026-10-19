class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long volume = 1LL * length * width * height;
        if ((length >= 1e4 || width >= 1e4 || height >= 1e4 || volume >= 1e9) && (mass >= 100)) return "Both";
        if ((length >= 1e4 || width >= 1e4 || height >= 1e4 || volume >= 1e9)) return "Bulky";
        if ((mass >= 100)) return "Heavy";
        return "Neither";
    }
};

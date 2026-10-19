class Solution {
public:
    int myAtoi(string s) {
    int a = 0, size = s.length();
    while (a < size && s[a]==' '){
        a++;
    }
    int symbol = 1;
    while( a < size && (s[a] == '-' || s[a]=='+')){
        if(s[a]=='-'){
            symbol = -1;
        }
        if(s[a+1] == '-' || s[a+1]=='+'){
            return 0;
        }
        a++;
    }
    long long number = 0;
    while(a<size && isdigit(s[a])){
        number = 10*number + (s[a] - '0');
        if (symbol * number <= INT_MIN) return INT_MIN;
        if (symbol * number >= INT_MAX) return INT_MAX; 
        a++;
    }

    number = number*symbol;

    return (int)number;
    }
};

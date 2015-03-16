#include <iostream>
#include <algorithm>
using namespace std;

string toBinary(int num) {
    string bin = "";
    while (num > 0) {
        int rem = num % 2;
        bin += ('0' + rem);
        num /= 2;
    }
    //reverse the string
    reverse(bin.begin(), bin.end());
    return bin;
}

int toDecimal(string bin) {
    int num = 0;
    for (int i = 0; i < bin.length(); i++) {
        num = num * 2 + (bin[i] - '0');
    }
    return num;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        int num = i;
        string bin = toBinary(i);
        int numBack = toDecimal(bin);
        cout<<num<<" "<<bin<<" "<<numBack<<endl;
    }
    return 0;
}

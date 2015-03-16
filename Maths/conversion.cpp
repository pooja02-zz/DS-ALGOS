/// CONVERSION IN NUMBER SYSTEMS

#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

/// method 1 convertToBinary1
void convertToBinary1(int n)
{
    if (n / 2 != 0) { convertToBinary1(n / 2); }
    cout<< n % 2;
}

/// method 2 convertToBinary2
string convertToBinary2(int n)
{
    string bin = "";
    int temp = n;
    int i = 0;
    while(temp != 0)
    {
        int rem = temp%2;
        temp /= 2;
        bin += ('0' + rem);
        i++;
    }
    reverse(bin.begin(),bin.end());
    return bin;

}

/// method 3 convertToBinary3
string convertToBinary3(int n)
{
    string result = "";
    do
    {
        if ( (n & 1) == 0 ) result += "0";
        else result += "1";

        n >>= 1;
    } while ( n );

    reverse(result.begin(), result.end());
    return result;
}

/// method 1 convertToDecimal1
int convertToDecimal1(string n)
{
    int result = 0, pow = 1;
    for ( int i = n.length() - 1; i >= 0; --i, pow <<= 1 )
        result += (n[i] - '0') * pow;

    return result;
}

/// method 2 convertToDecimal2
int convertToDecimal2(string n)
{
    int result = 0;
    int len = n.length();
    for( int i = 0 ; i < len ; i++ )
    {
        result = 2 * result + (n[i]-'0');
    }
    return result;
}
int main() {
    int n = 14;
    string s;
    cout<< endl << "convertToBinary1" << endl;
    cout<< "Number in Decimal system: " << n << endl;
    cout<< "Number in Binary system: ";
    convertToBinary1(n);
    cout << endl;
    cout<< endl << "convertToBinary2" << endl;
    cout<< "Number in Decimal system: " << n << endl;
    s = convertToBinary2(n);
    cout<< "Number in Binary system: " << s << endl;
    cout<< endl << "convertToBinary3" << endl;
    cout<< "Number in Decimal system: " << n << endl;
    s = convertToBinary3(n);
    cout<< "Number in Binary system: " << s << endl;

    s = "1110";
    cout<< endl << "convertToDecimal1" << endl;
    cout<< "Number in Binary system: " << s << endl;
    n = convertToDecimal1(s);
    cout<< "Number in Decimal system: " << n << endl;
    cout<< endl << "convertToDecimal2" << endl;
    cout<< "Number in Binary system: " << s << endl;
    n = convertToDecimal2(s);
    cout<< "Number in Decimal system: " << n << endl;

    return 0;
}

/***
    OUTPUT
    convertToBinary1
    Number in Decimal system: 14
    Number in Binary system: 1110

    convertToBinary2
    Number in Decimal system: 14
    Number in Binary system: 1110

    convertToBinary3
    Number in Decimal system: 14
    Number in Binary system: 1110

    convertToDecimal1
    Number in Binary system: 1110
    Number in Decimal system: 14

    convertToDecimal2
    Number in Binary system: 1110
    Number in Decimal system: 14

***/

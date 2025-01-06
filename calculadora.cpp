#include <iostream>
#include <string>

using namespace std;

string DecimalTobinary(int decimal){
    if (decimal == 0) return "0";
    string binario   = "";
    while (decimal > 0){
        binario  = to_string(decimal % 2) + binario;
        decimal /= 2 ;
    }
    return binario;
}

string DecimalToHexadecimal(int decimal){
    const char hexDigits[] = "0123456789ABCDEF";
    string hexadecimal;

    if(decimal == 0) return "0";

    while(decimal > 0){
        int remainder = decimal % 16;
        hexadecimal = hexDigits[remainder] + hexadecimal;
        decimal /= 16;
    }
    return hexadecimal;
}

double GradosToRadians( int degrees){
    const double PI = 3.14159265358979323846;
    return degrees * (PI/180.0);
}

int main(){
    int decimalNumber;
    cout << "ingrese un numero en decimal" << endl;
    cin >> decimalNumber;

    string binary = DecimalTobinary(decimalNumber);
    string hexadecimal = DecimalToHexadecimal(decimalNumber);
    double radians = GradosToRadians(decimalNumber);

    cout << "Resultados:\n";
    cout << "Binario:" << binary << "\n";
    cout << "Hexadecimal:" << hexadecimal << "\n";
    cout << "Radianes:" << radians << "\n";
}
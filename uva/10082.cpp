#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[100000];
    while(cin.getline(c,100000)){
        for(int i=0; c[i]; i++){
            if(c[i] == 'W') cout << "Q";
            else if(c[i] == 'E') cout << "W";
            else if(c[i] == 'R') cout << "E";
            else if(c[i] == 'T') cout << "R";
            else if(c[i] == 'Y') cout << "T";
            else if(c[i] == 'U') cout << "Y";
            else if(c[i] == 'I') cout << "U";
            else if(c[i] == 'O') cout << "I";
            else if(c[i] == 'P') cout << "O";
            else if(c[i] == '[') cout << "P";
            else if(c[i] == ']') cout << "[";
            else if(c[i] == '\\') cout << "]";
            else if(c[i] == 'S') cout << "A";
            else if(c[i] == 'D') cout << "S";
            else if(c[i] == 'F') cout << "D";
            else if(c[i] == 'G') cout << "F";
            else if(c[i] == 'H') cout << "G";
            else if(c[i] == 'J') cout << "H";
            else if(c[i] == 'K') cout << "J";
            else if(c[i] == 'L') cout << "K";
            else if(c[i] == ';') cout << "L";
            else if(c[i] == '\'') cout << ";";
            else if(c[i] == 'X') cout << "Z";
            else if(c[i] == 'X') cout << "Z";
            else if(c[i] == 'C') cout << "X";
            else if(c[i] == 'V') cout << "C";
            else if(c[i] == 'B') cout << "V";
            else if(c[i] == 'N') cout << "B";
            else if(c[i] == 'M') cout << "N";
            else if(c[i] == ',') cout << "M";
            else if(c[i] == '.') cout << ",";
            else if(c[i] == '/') cout << ".";
            else if(c[i] == ' ') cout << " ";
            else if(c[i] == '1') cout << "`";
            else if(c[i] == '2') cout << "1";
            else if(c[i] == '3') cout << "2";
            else if(c[i] == '4') cout << "3";
            else if(c[i] == '5') cout << "4";
            else if(c[i] == '6') cout << "5";
            else if(c[i] == '7') cout << "6";
            else if(c[i] == '8') cout << "7";
            else if(c[i] == '9') cout << "8";
            else if(c[i] == '0') cout << "9";
            else if(c[i] == '-') cout << "0";
            else if(c[i] == '=') cout << "-";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    //to use edit the values of bin_one and bin_two. Program will only work if both strings have the same number of bits. 
    string bin_one = "11111110110111001011101010011000011101100101010000110010000100000000000100100011010001010110011110001001101010111100110111101111";
    string bin_two = "11111110110111001010101110011000011101010110010000110010000100001111001000010011010001010110011110001001000010111100110111101111";
    int counter = 0;
    for (int i = 0; i < bin_one.length(); i++){
        if (bin_one[i] != bin_two[i]){
            counter ++;
        }
    }
    cout << counter << endl;
    int counter_two = 0;
    string bin_three = "FEDCBA98765432100123456789ABCDEF";
    string bin_four = "FEDCAB9875643210F2134567890BCDEF";
    for (int i = 0; i < bin_three.length(); i++){
        if (bin_three[i] != bin_four[i]){
            counter_two ++;
        }
    }
    cout << counter_two << endl;

    return 0;
}

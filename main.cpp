//created by Yusuf Sattar, for educational use only
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
    cout << "The Hamming Distance is: "  << counter << endl;
    return 0;
}

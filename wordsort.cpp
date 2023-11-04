#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    char letter;
    int j = 0;
    
    bool equ = true;
    char alphabet[26] = {'a','b','c', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cout << "Word to type: "<< endl;
    cin >> word;
    char wlist[word.length()-1] = {};
    for(int i = 0; i < word.length(); i++){
        letter = word[i];
        equ= true;
        j = 0;
        while(equ && j < 26){
            
            cout << alphabet[j] << endl;
            if(letter == alphabet[j]){
                equ = false;
            }
            j++;
        }
    }
    return 0;
}

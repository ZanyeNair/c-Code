#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    char letter;
    bool equ = true;
    char alphabet[26] = {'a','b','c', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cout << "Word to type: "<< endl;
    cin >> word;
    for(int i = 0; i < word.length(); i++){
        letter = word[i];
        for(int j = 0; j < 26; j++){
            equ= true;
            while(equ){
                
                cout << letter + "=" + alphabet[j] << endl;
                if(letter == alphabet[j]){
                cout << alphabet[j] << endl;
                equ = false;
            }
            }
        }
    }
    return 0;
}

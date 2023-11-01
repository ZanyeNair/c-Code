

using namespace std;
#include <iostream>
#include <string>


int main(){
    string name;
    string feel;

    string good[5] = {"good", "great", "fine", "ok", "well"};
    string bad[5] = {"bad", "terrible", "horrible", "not good", "not well"};
    string neutral[5] = {"neutral", "not bad", "not good", "not great", "not terrible"};
    cout << "What is your name" << endl;
    cin >> name;
    cout << "Hello " << name << " how are you doing" << endl;
    cin >> feel;
    for (int i = 0; i<4; i++){
        if(i == 0){
            for (int j = 0; j<5; j++){
                if(feel == good[j]){
                    cout << "That's good to hear" << endl;
                    break;
                }
            }
            
        }
        else if(i ==1){
            for (int j = 0; j<5; j++){
                if(feel == bad[j]){
                    cout << "That's ok, hope it gets better" << endl;
                    break;
                }
            }

        }
        else if(i ==2){
            for (int j = 0; j<5; j++){
                if(feel == neutral[j]){
                    cout << "That's ok, hope it gets better" << endl;
                    break;
                }
            }

        }
        else{
            cout << "I don't understand" << endl;
        }
        
    }

}
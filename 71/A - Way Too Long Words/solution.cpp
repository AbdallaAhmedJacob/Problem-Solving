#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    while(n--){
        string word;
        cin >> word;
        
        if(word.length() > 10){
            cout << word.front() << word.length() - 2 << word.back() << '
';
        }
        else
        {
            cout << word << '
';
        }
    }
    
    return 0;
}
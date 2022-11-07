#include <iostream>

using namespace std;
int main () 
{
    string phrase = "This is a string";
    cout << phrase.length() <<endl;
    cout << phrase[0] << endl;
    phrase[0] = 't';
    cout << phrase << endl;
    cout << phrase.find("string", 0) << endl;
    cout << phrase.substr(10,3) << endl;
    
    cout << "endl makes a new line"<< endl;
    cout << "or can use\n";
    cout << "like that" << endl;

    string phrasesub;
    phrasesub = phrase.substr(10,4);
    cout << phrasesub;
    return 0;
}
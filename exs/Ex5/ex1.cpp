#include <iostream>
#include <string>

using namespace std;

char encryptUppChar(char c, int key)
{
    // assuming uppercase
    if (key < 0) key = 'Z'-'A' +1 + key;
    char end = 'A' +  (c + key- 'A')%('Z' -'A' + 1);
    return end; 

}
char encryptLowChar(char c, int key)
{
    // assuming lowercase
    if (key < 0) key = 'z'-'a' +1  + key;
    char end = 'a' +  (c + key- 'a')%('z' -'a' +1);
    return end; 

}

string encryptString(string s, int key)
{
    string s2 = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) >= 'A' && s.at(i) <= 'Z' ) s2 = s2 + encryptUppChar(s.at(i), key);
        else if(s.at(i) >= 'a' && s.at(i) <= 'z') s2 = s2 + encryptLowChar(s.at(i), key);
        else s2 = s2 + s.at(i);

    }
    return s2;
}

int main()
{
    //string s = "Dro aesmu lbygx pyh TEWZC yfob dro vkji nyq";
    string s = "The quick brown fox JUMPS over the lazy dog";
    int key = -10;
    cout << encryptString(s, key) << endl;
}
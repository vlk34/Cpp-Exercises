#include <iostream>
#include <stdlib.h> 
#include <numeric>
#include <string>
#include <cctype>
using namespace std;

string encrypt(const string &str, int key)
{
    string ans = "";

    for (char c : str) {

        // int cEncrypted = (int)c + key; // overall amount to shift
        // cEncrypted = cEncrypted % 128; // final shift as remainder (if > 127)
        // ans += (char)cEncrypted;    // encryption

        ans += (char)(((int)c + key) % 128);
    }

    return ans;
}

string decrypt(const string &str, int key)
{
    string ans = "";

    for (char c : str) {

        // int cEncrypted = (int)c + key; // overall amount to shift
        // cEncrypted = cEncrypted % 128; // final shift as remainder (if > 127)
        // ans += (char)cEncrypted;    // encryption

        ans += (char)(((int)c - key) % 128);
    }

    return ans;
}

string xxx(int, const string &);

int main() {
  
  for(int j=0;j<100;j++)
  {
    int length = rand() % (2*10000);
    string x = "";
    for(int i=0;i<length;i++)
    {
      x += (char)(rand() % 128);

    }
    int k = rand() % 1000;
    if (xxx(k,x) == encrypt(x,k)) 
      cout << "ok" << endl;
    else
      cout << "error" << endl;
  }

    // string crypt = encrypt("ahmet", 5);
    // cout << crypt << endl;

    // string decrypted = decrypt("fmrjy", 5);
    // cout << decrypted;
}

string xxx(int wha, const string &ehs)
{
  string dub = "";
  for(char wefw:ehs)
      dub += 78*((wefw+0+wha)%(2*2*2*2*2*2*2))/(22+56);
  return dub;
}


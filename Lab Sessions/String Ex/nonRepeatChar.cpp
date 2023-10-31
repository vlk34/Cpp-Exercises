#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

char toLowerCase(char c) {

    if (c >= 'A' && c <= 'Z')
        return c + ('a' - 'A');
    return c;
}

bool isAlphabetic(char c) {

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    return false;
}

string repeatingChars(const string &str)
{
    string ans = "";
    int count[26] = {0};

    for (char c : str) {

        if (isAlphabetic(c)) {

            c = toLowerCase(c);
            count[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {

        if (count[i] == 1) {
            
            ans += i + 'a';
        }
    }

    return ans;
}

/*
-- DO NOT EDIT PAST THIS POINT --
*/

string xxx(const string &);

int main() {
    vector<string> phrs;
    phrs.push_back("lab is good, lab makes us smarter, lab brings innovation to the world!");
    phrs.push_back("don't read this");
    phrs.push_back("You should be doing your exercises!!!");
    phrs.push_back("34923bo21r294u52fuewvlcidlwr");
    phrs.push_back("try me!");
    phrs.push_back("90j2f20ch23 )I=I==KOIJOIHOIHO");
    phrs.push_back("3f3fopppo994ppeoodmcbsuerogwoegy9wgh24ut");
    phrs.push_back("£VQ£££\"£23ooodppamneke");
    phrs.push_back("midterm is in 2 weeks");
    phrs.push_back("rewbvieb83hf2vr2hbo8bgv2");
    phrs.push_back("ruovw8 wre8h890c p8qhf90rcw w8rfc 8wrc99");
    phrs.push_back("yes");
    phrs.push_back("no");
    phrs.push_back("                    ");
    phrs.push_back("!");
    phrs.push_back("o");
    phrs.push_back("_p_");
    phrs.push_back("C:\\documents\\folder\\sav");
    phrs.push_back("............-......eedd");
    for(string s:phrs)
    {
        if(repeatingChars(s)==xxx(s))
            cout << "ok" << endl;
        else
            cout << "error" << endl;
    }
    return 0;
}

string xxx(const string &str)
{
    map<char,int> m;
    for(char c:str)
    {
        if(isalpha(c))
        {
            c = tolower(c);
            if(m.count(c)!=0)
                m.at(c)++;
            else
                m.insert(pair<char,int>(c,1));
        }
    }
    string str2="";
    for(map<char,int>::iterator it = m.begin(); it != m.end(); it++)
        if(it->second == 1)
            str2 += it->first;
    return str2;
}
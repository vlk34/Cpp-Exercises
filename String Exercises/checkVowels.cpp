#include <iostream>
#include <string>

int main() {
    
    std::string str = "how Many wOrds";

    int vowels = 0, consonants = 0, space = 0;

    for (int i = 0; str[i] != '\0'; i++) {

        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' 
        || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' 
        || str[i]=='o' || str[i]=='u') {

            vowels++;
        } else if (str[i] == ' ') {
            space++;
        } else {
            consonants++;
        }
    }

    std::cout << "vowels: " << vowels << std::endl;
    std::cout << "consonants: " << consonants << std::endl;
    std::cout << "words: " << ++space << std::endl;
}
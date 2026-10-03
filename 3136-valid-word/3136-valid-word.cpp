class Solution {
public:
    bool isValid(string word) {
        int vowel = 0;
        int consonant = 0;

        for(int i = 0; i < word.length(); i++) {

            char c = tolower(word[i]);

            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowel++;
            }
            else if(isalpha(c)) {
                consonant++;
            }
            else if(isdigit(c)) {
                continue;
            }
            else {
                return false;
            }
        }

        return word.length() >= 3 && vowel >= 1 && consonant >= 1;
    }
};
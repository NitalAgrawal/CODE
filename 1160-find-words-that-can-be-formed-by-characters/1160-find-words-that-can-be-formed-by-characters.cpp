class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int count = 0;

        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            string temp = chars;
            bool found = true;

            for (char ch : s) {
                int pos = temp.find(ch);

                if (pos == string::npos) {
                    found = false;
                    break;
                }

                temp.erase(pos, 1);
            }

            if (found) {
                count += s.length();
            }
        }

        return count;
    }
};
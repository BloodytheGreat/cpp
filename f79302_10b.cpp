#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> words;
    string a;

    while(getline(cin,a)){


    istringstream input(a);
    string word;
    while(input >> word) {
      sort(word.begin(), word.end());
      words.push_back(word);
    }
        sort(words.begin(), words.end());
        int j = 1;
        for(int i = 0; i < words.size()-1;i++){
            if(words[i]!=words[i+1])
                j++;
        }
        cout << j<< endl;
        words.clear();
    }

return 0;
}

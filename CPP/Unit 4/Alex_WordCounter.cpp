// You are using GCC
#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>

using namespace std;

class WordCounter{
  public:
    string str;
    vector<string> wordList;
    vector<string> wordOrder;
    map<string, int> wordCountMap;
    int totWords = 0;

  public:
    WordCounter(const string& s): str(s) {}
    
    void AddWords(){
        string currentWord;
        for(const char c : str){
            if(c != ' '){
                currentWord += c;
            } else {
                if(!currentWord.empty()){
                    wordList.push_back(currentWord);
                    currentWord.clear();
                }
            
            }
            
        }
        if(!currentWord.empty()){
            wordList.push_back(currentWord);
        }
        
    }
    
    void CountWords(){
    
        for(const string s : wordList){
                wordCountMap[s] += 1;
                if(wordCountMap[s] == 1){
                    wordOrder.push_back(s);
                }
        }
    }
    
    void PrintWords(){
        
        cout << "Total Words: " << wordCountMap.size() << "\nWord Counts: \n";
        for(const auto& word : wordOrder){
            cout << word << ": " << wordCountMap[word] << endl;
        }
        
    }
    
    operator const string(){
        return str;
    }
};

int main(){
    string myStr;
    getline(cin, myStr);
    WordCounter word = myStr;
    word.AddWords();
    word.CountWords();
    word.PrintWords();
}
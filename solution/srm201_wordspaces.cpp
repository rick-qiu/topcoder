/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1044
*******************************************************************************/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class WordSpaces {
public:
    vector<int> find(string sentence, vector<string> words);
};

vector<int> WordSpaces::find(string sentence, vector<string> words) {
    vector<int> ret;
    return ret;
}


int test0() {
    string sentence = "zoidal wrote this problem";
    vector<string> words = {"ilreh", "problem", "woe", "zar", "ot"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 18, 7, 0, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string sentence = "test case number seven";
    vector<string> words = {"ts", "etc", "nees", "ten"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, -1, -1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string sentence = "the job of writing testcases is not much fun";
    vector<string> words = {"tow", "wit", "ten", "eat"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 15, 23, -1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string sentence = "sometimes testcases are randomly generated";
    vector<string> words = {"set", "ate", "tea", "dome"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 41, 14, -1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string sentence = "xtywzoapbicndkefflgahmiijnkgloms";
    vector<string> words = {"two", "pink", "flamingos", "are", "in", "this", "sentence"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 15, -1, 9, -1, -1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string sentence = "abcdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefg";
    vector<string> words = {"gfedcba", "acegbdfacegbdfacegbdfaceg", "bfcgdaebfcgd", "fdbgecafd", "cdefgabcdefgabcdefgabcdefgabcdefgabcdefgabcdefg", "dgcfbeadgcfbeadg", "ebfcgdaebfcg"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 0, 1, 5, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string sentence = "only four more testcases to go";
    vector<string> words = {"yu", "ot", "cs", "x", "n", "m"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0, 19, -1, 1, 10};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string sentence = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx";
    vector<string> words = {"aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "aw", "kj", "oi", "ew", "sr", "ew", "zs", "en", "bq", "zy", "kw", "lw", "ox", "asd", "rew", "oiu", "the", "hak", "ewj", "sid", "jwe", "sjd"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, -1, -1, 0, 10, 14, 4, 18, 4, 25, 4, 1, -1, 10, 11, 14, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string sentence = "the square root of pi is irrational";
    vector<string> words = {"pii", "tesur", "oo", "qaer", "ooo", "pit", "pir", "qeof"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 0, 12, 5, -1, -1, -1, 5};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string sentence = " too many spaces ";
    vector<string> words = {"tms", "tmp", "tma", "tmc", "tme", "tas", "tap", "taa", "tac", "tns", "one"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 7, -1, -1, -1, -1, -1, -1, 7, 7, 8};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string sentence = "at bah ate";
    vector<string> words = {"the", "aa", "hae"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 5};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string sentence = "test this one out";
    vector<string> words = {"test", "tst", "hoe", "not"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, -1, -1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string sentence = "t ah mi as this";
    vector<string> words = {"this", "mat", "zebra", "hh"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, -1, 3};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string sentence = "abcdefghijklmnoqrstuvwxyz zywvutsrponmlkjighfedcba";
    vector<string> words = {"foy", "foz", "fox", "ace", "rom"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, -1, -1, 0, 33};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string sentence = "ridikulus ridiculous";
    vector<string> words = {"kuri", "ks", "cs", "z", "i", "rsl"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 14, -1, 1, 0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string sentence = "a";
    vector<string> words = {"a"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string sentence = "abcdefghijklmnoqrstuvwxyz zywvutsrponmlkjighfedcba";
    vector<string> words = {"foy", "foz", "fox", "ace", "rom"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, -1, -1, 0, 33};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string sentence = "tdhebtuhgfe bugthe frthe etth th ss hh ther ttther";
    vector<string> words = {"the", "ther", "bug", "e", "er", "ug", "bg", "tt", "tr"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 39, 4, 3, 3, 6, 4, 0, 0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string sentence = "abcdef";
    vector<string> words = {"bb"};
    WordSpaces* pObj = new WordSpaces();
    clock_t start = clock();
    vector<int> result = pObj->find(sentence, words);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}



int main(int argc, char* argv[]) {
    int passed = 0;
    int failed = 0;
    test0() == 0 ? ++passed : ++failed;
    test1() == 0 ? ++passed : ++failed;
    test2() == 0 ? ++passed : ++failed;
    test3() == 0 ? ++passed : ++failed;
    test4() == 0 ? ++passed : ++failed;
    test5() == 0 ? ++passed : ++failed;
    test6() == 0 ? ++passed : ++failed;
    test7() == 0 ? ++passed : ++failed;
    test8() == 0 ? ++passed : ++failed;
    test9() == 0 ? ++passed : ++failed;
    test10() == 0 ? ++passed : ++failed;
    test11() == 0 ? ++passed : ++failed;
    test12() == 0 ? ++passed : ++failed;
    test13() == 0 ? ++passed : ++failed;
    test14() == 0 ? ++passed : ++failed;
    test15() == 0 ? ++passed : ++failed;
    test16() == 0 ? ++passed : ++failed;
    test17() == 0 ? ++passed : ++failed;
    test18() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10092896&rd=5872&pm=1044
********************************************************************************
#include <vector>
#include <string>
using namespace std;
 
bool check(string text, string w, int start)
{
  int second = start+1;
  while (1)
  {
    while (second < text.size() && text[second] != w[1])
      second++;
    if (second == text.size())
      return false;
 
    int step = second - start;
    int index = 2; int pos = second + step;
    while (pos < text.size() && index < w.size())
    {
      if (w[index] != text[pos])
        break;
      index ++;
      pos +=step;
    }
    
    if (index == w.size())
      return true;
 
    second++;
  }
}
 
struct WordSpaces
{
  vector<int> find(string text, vector<string> words)
  {
    vector<int> ret;
 
    for (int i=0;i<words.size();i++)
    {
      string w = words[i];
      int start = 0;
 
      while (1)
      {
        while (start < text.size() && text[start] != w[0])
          start++;
        if (start == text.size())
        {
          ret.push_back(-1);
          break;
        }
 
        if (w.size() == 1 || check(text, w, start))
        {
          ret.push_back(start);
          break;
        }
 
        start++;
      }
    }
 
    return ret;
  }
};

********************************************************************************
*******************************************************************************/
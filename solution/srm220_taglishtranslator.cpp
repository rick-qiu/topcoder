/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3070
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

class TaglishTranslator {
public:
    string translate(string sentence);
};

string TaglishTranslator::translate(string sentence) {
    string ret;
    return ret;
}


int test0() {
    string sentence = "The fox jumps to the dog";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagjujumps ang fox sa dog";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string sentence = "tomek codes";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagcocodes si tomek";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string sentence = "tHe mAn plAyEd ThE pIAnO";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagplAy ang mAn ng pIAnO";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string sentence = "Bob will Filed the taxes";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "magFiFiled si Bob ng taxes";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string sentence = "Matthew walked to Mathew";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagwalk si Matthew kay Mathew";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string sentence = "StrongBad kicked TheCheat";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagkick si StrongBad ni TheCheat";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string sentence = "The fire is the hot";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagiis ang fire ng hot";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string sentence = "a e";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagee si a";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string sentence = "the quickbrownfox jumpovered the lazydog";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagjumpover ang quickbrownfox ng lazydog";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string sentence = "the quickbrownfox jumpedover the lazydog";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagjujumpedover ang quickbrownfox ng lazydog";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string sentence = "the a e to the i";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagee ang a sa i";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string sentence = "Sid wiLl shDLJhdlHLHkldDfLHDlHDfLhLDdkfKLDFlDFLked";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "magshDLJhdlHLHkldDfLHDlHDfLhLDdkfKLDFlDFLkeshDLJhdlHLHkldDfLHDlHDfLhLDdkfKLDFlDFLked si Sid";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string sentence = "Bob sed";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nags si Bob";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string sentence = "skatou dddAd the kkkaaf";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagdddAdddAd si skatou ng kkkaaf";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string sentence = "StrongBad kicked TheCheat";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagkick si StrongBad ni TheCheat";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string sentence = "tomek cOdes";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagcOcOdes si tomek";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string sentence = "will walked";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagwalk si will";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string sentence = "tHe mAn will plyta ThE pIAnO";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "magplytaplyta ang mAn ng pIAnO";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string sentence = "tomek codes";
    TaglishTranslator* pObj = new TaglishTranslator();
    clock_t start = clock();
    string result = pObj->translate(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "nagcocodes si tomek";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=5866&pm=3070
********************************************************************************
// another fine solution by misof
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <strings.h>
using namespace std;
 
// Zakladna praca s foldmi:
// 'zo' na prislusnej ciare fold otvori, 'zc' zavrie, <Ins> otvori a zapne i mod
// 'zR', 'zM' otvori/zavrie uplne vsetko
 
vector<string> split( const string& s, const string& delim =" " )
// Tato fcia rozbije string na kopu malych stringov: {{{
{
    vector<string> res;
    string t;
    for ( unsigned int i = 0 ; i != s.size() ; i++ ) {
        if ( delim.find( s[i] ) != string::npos ) {
            if ( !t.empty() ) {
                res.push_back( t );
                t = "";
            }
        } else {
            t += s[i];
        }
    }
    if ( !t.empty() ) {
        res.push_back(t);
    }
    return res;
}
// }}}
 
vector<int> splitInt( const string& s, const string& delim =" " )
// Tato fcia rozbije string na kopu intov: {{{
{
    vector<string> tok = split( s, delim );
    vector<int> res;
    for ( unsigned int i = 0 ; i != tok.size(); i++ )
        res.push_back( atoi( tok[i].c_str() ) );
    return res;
}
// }}}
 
string doublesyl(string s) {
  int i=0;
  while (1) {
    if (tolower(s[i])=='a') break;
    if (tolower(s[i])=='e') break;
    if (tolower(s[i])=='i') break;
    if (tolower(s[i])=='o') break;
    if (tolower(s[i])=='u') break;
    i++;
  }
  return s.substr(0,i+1) + s;
}
 
class TaglishTranslator {
public:
    string translate(string sentence) {
        string res;
 
        vector<string> slova = split(sentence);
        int subject, verb, object;
        int mam_object = 0;
        int mam_will = 0;
        int mam_the_subject = 0;
        int mam_to_object = 0;
        int mam_the_object = 0;
        int tense = 0; // 0 past 1 present 2 future
 
        if (!strcasecmp(slova[0].c_str(),"the")) {
          mam_the_subject = 1;
          subject = 1;
        } else subject = 0;
        
        if (!strcasecmp(slova[subject+1].c_str(),"will")) {
          mam_will = 1;
          verb = subject + 2;
        } else verb = subject + 1;
 
        if (verb+1 < slova.size() ) { // este mame object
          mam_object = 1;
          object = verb+1;
          if (!strcasecmp(slova[object].c_str(),"to")) { mam_to_object=1; object++; }
          if (!strcasecmp(slova[object].c_str(),"the")) { mam_the_object=1; object++; }
        }
 
        int vl = slova[verb].length();
        if (mam_will) tense=2; else {
          tense=1;
          if ( vl >= 2) 
            if (tolower(slova[verb][vl-2])=='e')
            if (tolower(slova[verb][vl-1])=='d')
              tense=0;
        }
 
        string newverb;
        switch (tense) {
          case 0: 
            newverb = "nag" + slova[verb].substr(0,vl-2);
            break;
          case 1:
            newverb = "nag" + doublesyl(slova[verb]);
            break;
          case 2:
            newverb = "mag" + doublesyl(slova[verb]);
        }
 
        res = newverb + " ";
 
        if (mam_the_subject) {
          res += "ang " + slova[subject];
        } else {
          res += "si " + slova[subject];
        }
 
        if (mam_object) {
          res += " ";
          if (mam_to_object) {
            if (mam_the_object) {
              res += "sa " + slova[object];
            } else {
              res += "kay " + slova[object];
            }
          } else {
            if (mam_the_object) {
              res += "ng " + slova[object];
            } else {
              res += "ni " + slova[object];
            }
          }
        }
        
        return res;
    }
// Tu su zbalene definicie jednotlivych testcasov: {{{
 
 
// }}}
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
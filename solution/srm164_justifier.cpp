/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1757
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

class Justifier {
public:
    vector<string> justify(vector<string> textIn);
};

vector<string> Justifier::justify(vector<string> textIn) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> textIn = {"BOB", "TOMMY", "JIM"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" BOB", "TOMMY", " JIM"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> textIn = {"JOHN", "JAKE", "ALAN", "BLUE"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JOHN", "JAKE", "ALAN", "BLUE"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> textIn = {"INTERNATIONALIZATION"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INTERNATIONALIZATION"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> textIn = {"AL", "BOB", "JOHN", "JIMMY", "HAROLD", "DOUGLAS", "JONATHON"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" AL", " BOB", " JOHN", " JIMMY", " HAROLD", " DOUGLAS", "JONATHON"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> textIn = {"LONGEST", "A", "LONGER", "SHORT"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"LONGEST", " A", " LONGER", " SHORT"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> textIn = {"C"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> textIn = {"AL", "BOB", "JOHN", "JIMMY", "HAROLD", "DOUGLAS", "JONATHON", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL", "AL"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" AL", " BOB", " JOHN", " JIMMY", " HAROLD", " DOUGLAS", "JONATHON", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL", " AL"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> textIn = {"AL", "BOB", "JOHN", "JIMMY", "HAROLD", "BO", "THREE"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" AL", " BOB", " JOHN", " JIMMY", "HAROLD", " BO", " THREE"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> textIn = {"AL", "BOB", "AL"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" AL", "BOB", " AL"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> textIn = {"A"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> textIn = {"TERRITORY", "IS", "THE", "GOAL", "OF", "SOME", "GAMES"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"TERRITORY", " IS", " THE", " GOAL", " OF", " SOME", " GAMES"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> textIn = {"INTERNATIONALIZATIONINTERNATIONALIZATIONINTERNATIO", "X"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INTERNATIONALIZATIONINTERNATIONALIZATIONINTERNATIO", " X"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> textIn = {"AAAAA", "BBBB", "CCC", "DD", "FFFF", "GGG"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAA", " BBBB", " CCC", " DD", " FFFF", " GGG"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> textIn = {"A", "BB", "CCC", "DDDD", "FFFFF", "GGGGGG"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" A", " BB", " CCC", " DDDD", " FFFFF", "GGGGGG"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> textIn = {"AAAAA", "BBBBB", "CCCCC", "DDDDD", "FFFFF", "GGGGG"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAA", "BBBBB", "CCCCC", "DDDDD", "FFFFF", "GGGGG"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> textIn = {"AAAAAAA", "A", "BBBB", "C", "DD", "F", "GGG"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAA", " A", " BBBB", " C", " DD", " F", " GGG"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> textIn = {"A", "BBBB", "C", "DD", "F", "GGG", "H"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" A", "BBBB", " C", " DD", " F", " GGG", " H"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> textIn = {"AAAAA", "BBBB", "CCC", "DD", "FFFF", "GGG", "AAAAA", "BBBB"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAA", " BBBB", " CCC", " DD", " FFFF", " GGG", "AAAAA", " BBBB"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> textIn = {"AAAAA", "AAAAABBBB"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" AAAAA", "AAAAABBBB"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> textIn = {"AAAAA", "BBBB", "CCC", "DD", "FFFF", "GGGNOWISTHETIME"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" AAAAA", " BBBB", " CCC", " DD", " FFFF", "GGGNOWISTHETIME"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> textIn = {"A", "ZAPBBBB", "CCC", "DD", "FFFF", "GGG"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" A", "ZAPBBBB", " CCC", " DD", " FFFF", " GGG"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> textIn = {"A"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> textIn = {"ABC", "A", "B", "C", "D", "E", "F", "G", "H", "H", "R", "E", "E", "D", "D", "E", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "D", "SKDJSKDJKSJD"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" ABC", " A", " B", " C", " D", " E", " F", " G", " H", " H", " R", " E", " E", " D", " D", " E", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", " D", "SKDJSKDJKSJD"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> textIn = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "BBBB"};
    Justifier* pObj = new Justifier();
    clock_t start = clock();
    vector<string> result = pObj->justify(textIn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", " BBBB"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test19() == 0 ? ++passed : ++failed;
    test20() == 0 ? ++passed : ++failed;
    test21() == 0 ? ++passed : ++failed;
    test22() == 0 ? ++passed : ++failed;
    test23() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7290949&rd=4625&pm=1757
********************************************************************************
#include <string> 
#include <vector> 
#include <iostream> 
#include <sstream> 
using namespace std; 
using namespace __gnu_cxx; 
class Justifier 
{ 
public: 
  vector <string> justify(vector <string> textIn); 
// {{{ 
   
 
// }}} 
}; 
 
vector <string> Justifier::justify(vector <string> textIn) 
{ 
  int longest = 0; 
   
  for(int i=0; i<textIn.size(); i++) 
  { 
    if(textIn[i].length() > longest) 
      longest = textIn[i].length(); 
  } 
   
  vector<string> ret(textIn.size()); 
   
  for(int i=0; i<textIn.size(); i++) 
  { 
    ret[i] = ""; 
    for(int j=0; j<longest - textIn[i].size(); j++) 
      ret[i] += ' '; 
    ret[i] += textIn[i]; 
  } 
   
  return ret; 
} 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
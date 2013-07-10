/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2826
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

class Education {
public:
    int minimize(string desire, vector<int> tests);
};

int Education::minimize(string desire, vector<int> tests) {
    int ret;
    return ret;
}


int test0() {
    string desire = "A";
    vector<int> tests = {0, 70};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string desire = "D";
    vector<int> tests = {100, 100, 100, 100, 100, 100};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string desire = "B";
    vector<int> tests = {80, 80, 80, 73};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string desire = "B";
    vector<int> tests = {80, 80, 80, 73, 79};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string desire = "A";
    vector<int> tests = {80};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string desire = "B";
    vector<int> tests = {69, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string desire = "C";
    vector<int> tests = {69, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string desire = "C";
    vector<int> tests = {};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string desire = "D";
    vector<int> tests = {100, 100, 100, 100, 0, 19};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string desire = "C";
    vector<int> tests = {100, 100, 100, 100, 0, 19};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string desire = "D";
    vector<int> tests = {100, 100, 100, 100, 0, 20};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string desire = "D";
    vector<int> tests = {100, 100, 100, 100, 0, 21};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string desire = "D";
    vector<int> tests = {0};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string desire = "C";
    vector<int> tests = {70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 71};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string desire = "A";
    vector<int> tests = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string desire = "C";
    vector<int> tests = {82, 80, 91, 70, 70, 70, 70};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string desire = "D";
    vector<int> tests = {61, 61, 61, 61, 61, 61};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string desire = "A";
    vector<int> tests = {79};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string desire = "D";
    vector<int> tests = {100, 100, 100, 100, 100, 100};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string desire = "D";
    vector<int> tests = {100, 100, 100, 100};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string desire = "A";
    vector<int> tests = {80};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string desire = "A";
    vector<int> tests = {90};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string desire = "A";
    vector<int> tests = {90, 90, 90, 94};
    Education* pObj = new Education();
    clock_t start = clock();
    int result = pObj->minimize(desire, tests);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8369955&rd=5071&pm=2826
********************************************************************************
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <iterator>
#include <functional>
using namespace std;
 
//////////////////////////////////////////////////////////////////////////////
///////////////////////////Utility Code//////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
 
string NumString(int number)
{
  stringstream c;
  c<<number;
  return c.str();
}
 
vector<string> tokenize(string &line, const string delims=" \t,;")
{
  vector<string> words;
  string ret="";
  int count=0;
  string::size_type begIdx, endIdx;
  begIdx=line.find_first_not_of(delims);
  while(begIdx != string::npos)
  {
    words.push_back("");
    endIdx=line.find_first_of(delims, begIdx);
    if(endIdx==string::npos)
      endIdx=line.length();
    for(int i=begIdx; i<static_cast<int>(endIdx); ++i)
    {
      words[count]+=line[i];
      ret+=line[i];
    }
    ret+=' ';
    begIdx=line.find_first_not_of(delims, endIdx);
    count++;
  }
  line=ret;
  return words;
}
 
string tokenize_block(string &line,const string delims=" ")
{
  for(int idx=0;idx<line.size();)
    if(line.substr(idx,delims.length())==delims)
      line.replace(idx,delims.length(), "");
    else
      ++idx;
  return line;
}
 
/////////////////////////////////////////////////////////////////////////////
///////////////////////////////Contest Code/////////////////////////////////
///////////////////////////////////////////////////////////////////////////
 
struct Education
{
  int minimize(string desire, vector<int> tests)
  {
    int d;
    if(desire=="A")
      d=90;
    if(desire=="B")
      d=80;
    if(desire=="C")
      d=70;
    if(desire=="D")
      d=60;
    for(int c=0;c<=100;c++)
    {
      int f=0;
      for(int d=0;d<tests.size();d++)
        f+=tests[d];
      if((double)(f+c)/(tests.size()+1)>=d)
        return c;
    }
    return -1;
  }
};

********************************************************************************
*******************************************************************************/
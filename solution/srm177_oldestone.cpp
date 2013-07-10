/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1913
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

class OldestOne {
public:
    string oldest(vector<string> data);
};

string OldestOne::oldest(vector<string> data) {
    string ret;
    return ret;
}


int test0() {
    vector<string> data = {"DOUG JONES 22 213 ALDEN LANE", " BOB A SMITH 102 CLARK ST"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "BOB A SMITH";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> data = {"DOUG JONES 102 213 ALDEN LANE", " BOB A SMITH 102 CLARK ST", "A 1 999ELM"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "DOUG JONES";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> data = {"DOUG JONES 122 213 ALDEN LANE", " BOB A SMITH 102 CLARK ST", "A 199 ELM"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> data = {"DOUG JONES 122 213 ALDEN LANE", " BOB A SMITH 102 CLARK ST", "AL JOHNSON CARVER 199 ELM"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "AL JOHNSON CARVER";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> data = {" DOUG JONES 122 213 ALDEN LANE", " BOB A SMITH 102 3", " J O H N N Y 199 ELM"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "J O H N N Y";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> data = {"A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "AB 15 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 9 9", "A 10 9", "A 11 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9", "A 10 9"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> data = {" AL ALAL AL AL AL AL AL AL AL AL AL AL 921 AA"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "AL ALAL AL AL AL AL AL AL AL AL AL AL";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> data = {" AL ALAL AL AL AL AL AL AL AL AL AL AL 921 AA", "B 99 9"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "AL ALAL AL AL AL AL AL AL AL AL AL AL";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> data = {" AL ALAL AL AL AL AL AL AL AL AL AL AL 921 AA", "B 990 9"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> data = {"A 10 9", "B 9 9", "C C 8 9", "D 7 9", "E 6 9", "F 5 9", "GG 4 9", "H H H 3 9"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> data = {"A 10 9", "B 90 9", "C C 80 9", "D 709 9", "E 699 9", "F 5 9", "GG 54 9", "H H H 30 9"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> data = {"A A 10 9", "B 90 9", "C C 80 9", " D D A 709 9", "E 699 9", "F 5 9", "GG 54 9", "H H H 30 9"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "D D A";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> data = {"A A 10 9", "B 90 9", "C C 80 9", " D D A 709 9", "E 699 9", "F 5 9", "GG 54 9", "H H H 730 9"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "H H H";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> data = {"A 1 A 7 A 1", "A 2 A 7 A 1", "A 3 A 7 A 1", "A A 4 A 7 A 1"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "A A";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> data = {"A 1 A 7 A 1", "B 2 A 7 A 1", "C 3 A 7 A 1", "A A 3 A 7 A 1"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> data = {"A 1 A 7 A 1", "ABCDEEEEEEEEEEEEEEEEEEEEEEEEEEEE E 20 A 7 A 1", "A 3 A 7 A 1", "A A 4 A 7 A 1"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEEEEEEEEEEEEEEEEEEEEEEEEEEEE E";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> data = {" EAM MEA 123 321 RD FFF FGF F", " EAS SDSSD 124 123 43 DESES", "EEEE EEEE 123 232 ESDEDS", " EEEEE WWWWW 125 128REREEER"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEE WWWWW";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> data = {"DOUG JONES 22 213 ALDEN LANE", " BOB A SMITH 102 CLARK ST"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "BOB A SMITH";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> data = {" HELLO THERE 29 AKAK", " NO W H II TE 33 AAA444"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "NO W H II TE";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> data = {"A A A 111 111"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "A A A";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> data = {"DOUG JONES 999 213 ALDEN LANE", " BOB A SMITH 999 CLARK ST"};
    OldestOne* pObj = new OldestOne();
    clock_t start = clock();
    string result = pObj->oldest(data);
    clock_t end = clock();
    delete pObj;
    string expected = "DOUG JONES";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8356186&rd=4690&pm=1913
********************************************************************************
#include <iostream>
#include <sstream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <algorithm>
 
#define iis istringstream
#define ss  stringstream
 
using namespace std;
 
#include <iostream>
#include <sstream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <algorithm>
 
#define iis istringstream
#define ss  stringstream
 
using namespace std;
 
 
 
class OldestOne
{
public:
string oldest(vector <string> data)
{
   int old = -1;
   int i,j,k;
   string res;
   for (i = 0;i < data.size();i++)
   {
      j = 0;
      char n[1000];
 
      while (data[i][j] == ' ') j++;
      k = 0;
      while (!isdigit(data[i][j])) { n[k++] = data[i][j++]; }
      k--;
      while (n[k] == ' ') k--;
      n[k+1] = 0;
      char nn[100];
      k = 0;
      while (isdigit(data[i][j])) nn[k++] = data[i][j++];
      nn[k] = 0;
      int w = atoi(nn);
      if (w > old)
      {
         res = string(n);
         old = w;
      }
   }
   return res;
}
 
};

********************************************************************************
*******************************************************************************/
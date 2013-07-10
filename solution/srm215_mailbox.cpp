/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2884
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

class Mailbox {
public:
    int impossible(string collection, vector<string> address);
};

int Mailbox::impossible(string collection, vector<string> address) {
    int ret;
    return ret;
}


int test0() {
    string collection = "AAAAAAABBCCCCCDDDEEE123456789";
    vector<string> address = {"123C", "123A", "123 ADA"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string collection = "ABCDEFGHIJKLMNOPRSTUVWXYZ1234567890";
    vector<string> address = {"2 FIRST ST", " 31 QUINCE ST", "606 BAKER"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string collection = "ABCDAAST";
    vector<string> address = {"111 A ST", "A BAD ST", "B BAD ST"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string collection = "Z";
    vector<string> address = {"ZZ", "Z Z", " Z", " Z ", "Z AVE"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string collection = "ABCDEFGHIJKLMNOPQRSTUVWXYZ112233";
    vector<string> address = {"HARVARD ST", " HARP ST ", "1231 TURNER", "12341 TURNER"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string collection = "1111111111111111111111111";
    vector<string> address = {"1111111111111111111111111", "11 111111111111111111 11", "1"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string collection = "ABCABCABC";
    vector<string> address = {" BABA ", "CACACA", "CACACA", "ABACBBACC"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
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
    string collection = "ABCABCABC";
    vector<string> address = {" BABA ", "CACACA", "CACACA", "ABACBBACCC"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string collection = "ABCDEFGHIJKLMNOP";
    vector<string> address = {"POG FIJ KALM", "BAD FOG JIM", "B"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string collection = "ABBCCCDDDDEEEEF";
    vector<string> address = {"A B B B", "CACDCEC", "FEED FEED"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string collection = "ZYXWVUTSRQPONMLKIJHGFEDCBA12345";
    vector<string> address = {"A", "B", "C", "D", "E", "F", "G", "H", "IJK", "L", "M", "NO", "P", "QRA", "ST A", "A", "B", "C", "D", "E", "F", "G", "H", "IJK", "L", "M", "NO", "P", "QRA", "ST A", "1 2 3", "6", "FED", "AB POK", "CAB"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string collection = "HOOP";
    vector<string> address = {" PO HOP "};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string collection = "HOOP";
    vector<string> address = {" PO HO "};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string collection = "D";
    vector<string> address = {" ", " D", "D ", " D ", " "};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string collection = "ABBCCCDDDDEE";
    vector<string> address = {"BAD ADD", "DEED CAB C C DCD", "BADCA"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string collection = "ABCDEFGHIJKLMNOPRSTUVWXYZ1234567890";
    vector<string> address = {"2 FIRST ST", " 31 QUINCE ST", "606 BAKER"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string collection = "S";
    vector<string> address = {"S", "S", "S", "S", "S", "S"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string collection = "AD";
    vector<string> address = {"AAAADDDD"};
    Mailbox* pObj = new Mailbox();
    clock_t start = clock();
    int result = pObj->impossible(collection, address);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7568791&rd=5861&pm=2884
********************************************************************************
#include <vector>
#include <map>
#include <string>
#include <string.h>
 
using namespace std;
 
class Mailbox
{
public:
  int impossible(string collection, vector <string> address)
  {
    int chara[300];
    int i,j;
    int ans=0;
    for (i=0; i<address.size(); i++)
    {
      memset(chara,0,sizeof(chara));
      for (j=0; j<collection.length(); j++)
      {
        chara[collection[j]]++;
      }
      for (j=0; j<address[i].length(); j++)
      {
        if (address[i][j]==' ') continue;
        if (chara[address[i][j]]>0) chara[address[i][j]]--;
        else break;
      }
      if (j!=address[i].length())
        ans++;
    }
    return ans;
  }
};

********************************************************************************
*******************************************************************************/
/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1740
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

class CeyKaps {
public:
    string decipher(string typed, vector<string> switches);
};

string CeyKaps::decipher(string typed, vector<string> switches) {
    string ret;
    return ret;
}


int test0() {
    string typed = "AAAAA";
    vector<string> switches = {"A:B"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBB";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string typed = "AAAAA";
    vector<string> switches = {"A:B", "B:C", "A:D"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCCC";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string typed = "ABCDE";
    vector<string> switches = {"A:B", "B:C", "C:D", "D:E", "E:A"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "AEBCD";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string typed = "HEWWO";
    vector<string> switches = {"W:L"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "HELLO";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string typed = "IHWSIOTCHEDMYKEYCAPSARWUND";
    vector<string> switches = {"W:O", "W:I"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "WHOSWITCHEDMYKEYCAPSAROUND";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string typed = "WHUTSWETHTHATYPIS";
    vector<string> switches = {"A:E", "A:I", "A:O", "A:U"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "WHATSWITHTHETYPOS";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string typed = "AGAMEMNON";
    vector<string> switches = {"A:B", "M:N"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "BGBNENMOM";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string typed = "AGKKSLEKAMMSNEOWPPDOSIMED";
    vector<string> switches = {"A:K", "S:K", "A:E", "P:D", "D:M", "L:E", "N:W"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "SGLLKEALSDDKWAONMMPOKIDAP";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string typed = "LRUNPSTFDJOGY";
    vector<string> switches = {"K:L", "J:L", "H:L", "G:L", "F:L", "D:L", "S:L", "A:L", "O:P", "I:P", "U:P", "Y:P", "T:P", "R:P", "E:P", "W:P", "Q:P", "N:M", "B:M", "V:M", "C:M", "X:M", "Z:M"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "KEYBOARDSHIFT";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string typed = "ERJSBRNRRMDJOGYRFYPYJRTOHJYDOFR";
    vector<string> switches = {"K:L", "J:L", "H:L", "G:L", "F:L", "D:L", "S:L", "A:L", "O:P", "I:P", "U:P", "Y:P", "T:P", "R:P", "E:P", "W:P", "Q:P", "N:M", "B:M", "V:M", "C:M", "X:M", "Z:M"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "WEHAVEBEENSHIFTEDTOTHERIGHTSIDE";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string typed = "EVERYTHINGSHOULDBETHEPREVIOUSLETTER";
    vector<string> switches = {"A:B", "B:C", "C:D", "D:E", "E:F", "F:G", "G:H", "H:I", "I:J", "J:K", "K:L", "L:M", "M:N", "N:O", "O:P", "P:Q", "Q:R", "R:S", "S:T", "T:U", "U:V", "V:W", "W:X", "X:Y", "Y:Z"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "DUDQXSGHMFRGNTKCADSGDOQDUHNTRKDSSDQ";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string typed = "DUDQXSGHMFRGNTKCADSGDOQDUHNTRKDSSDQ";
    vector<string> switches = {"Z:Y", "Y:X", "X:W", "W:V", "V:U", "U:T", "T:S", "S:R", "R:Q", "Q:P", "P:O", "O:N", "N:M", "M:L", "L:K", "K:J", "J:I", "I:H", "H:G", "G:F", "F:E", "E:D", "D:C", "C:B", "B:A"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "EVERYTHINGSHOULDBETHEPREVIOUSLETTER";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string typed = "AGSGEMMZMZMXPOVQJEWYTMZ";
    vector<string> switches = {"A:E"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "EGSGAMMZMZMXPOVQJAWYTMZ";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string typed = "GKSKKEOGOSOKEKOGOKSKEO";
    vector<string> switches = {"G:K", "K:S", "S:G", "S:K"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "GKSKKEOGOSOKEKOGOKSKEO";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string typed = "FINITO";
    vector<string> switches = {"A:B"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "FINITO";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string typed = "ABC";
    vector<string> switches = {"A:B", "B:C"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "CAB";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string typed = "ASD";
    vector<string> switches = {"A:S", "S:D", "D:A"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "ADS";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string typed = "ABC";
    vector<string> switches = {"A:B", "A:B", "B:C"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "ACB";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string typed = "ABC";
    vector<string> switches = {"A:B", "B:C", "A:B"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "CBA";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string typed = "TESTESTEST";
    vector<string> switches = {"E:S", "E:S", "T:E"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "ETSETSETSE";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string typed = "IHWSIOTCHEDMYKEYCAPSARWUND";
    vector<string> switches = {"W:O", "W:I"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "WHOSWITCHEDMYKEYCAPSAROUND";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string typed = "ABCDE";
    vector<string> switches = {"A:B", "B:C", "C:D", "D:E", "E:A"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "AEBCD";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string typed = "AC";
    vector<string> switches = {"A:C"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "CA";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string typed = "QQQ";
    vector<string> switches = {"A:B", "B:Q", "A:R", "B:R"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "RRR";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string typed = "ZZZZZZZZZZZZZZ";
    vector<string> switches = {"Z:A"};
    CeyKaps* pObj = new CeyKaps();
    clock_t start = clock();
    string result = pObj->decipher(typed, switches);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test24() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7291694&rd=4545&pm=1740
********************************************************************************
#include <string>
#include <vector>
 
using namespace std;
 
class CeyKaps
{
  public:
  string decipher(string typed, vector<string> switches)
  {
    for(int i=0; i<switches.size(); i++)
      for(int j=0; j<typed.length(); j++)
        if(typed[j] == switches[i][0])
          typed[j] = switches[i][2];
        else if(typed[j]  == switches[i][2])
          typed[j] = switches[i][0];
    return typed;
  }
};

********************************************************************************
*******************************************************************************/
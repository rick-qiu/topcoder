/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8304
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

class TwoRotationCypher {
public:
    string encrypt(int firstSize, int firstRotate, int secondRotate, string message);
};

string TwoRotationCypher::encrypt(int firstSize, int firstRotate, int secondRotate, string message) {
    string ret;
    return ret;
}


int test0() {
    int firstSize = 13;
    int firstRotate = 0;
    int secondRotate = 0;
    string message = "this string will not change at all";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "this string will not change at all";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int firstSize = 13;
    int firstRotate = 7;
    int secondRotate = 0;
    string message = "only the letters a to m in this string change";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "onfy tbl flttlrs h to g cn tbcs strcna jbhnal";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int firstSize = 9;
    int firstRotate = 0;
    int secondRotate = 16;
    string message = "j to z will change here";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "z sn y vikk chamge heqe";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int firstSize = 17;
    int firstRotate = 9;
    int secondRotate = 5;
    string message = "the quick brown fox jumped over the lazy dog";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "yqn izalc kwgsf ogt bzehnm grnw yqn djvu mgp";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int firstSize = 3;
    int firstRotate = 1;
    int secondRotate = 2;
    string message = " watch out for strange spacing ";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = " ybvaj qwv hqt uvtbpig urbakpi ";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int firstSize = 12;
    int firstRotate = 11;
    int secondRotate = 10;
    string message = "l";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "k";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int firstSize = 4;
    int firstRotate = 3;
    int secondRotate = 18;
    string message = "e";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "w";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int firstSize = 12;
    int firstRotate = 6;
    int secondRotate = 3;
    string message = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "gggggggggggggggggggggggggggggggggggggggggggggggggg";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int firstSize = 20;
    int firstRotate = 19;
    int secondRotate = 4;
    string message = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int firstSize = 22;
    int firstRotate = 5;
    int secondRotate = 1;
    string message = "nwtd v mjp qxz a lbugs ol f c yr ke i j ";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "sxci e rou vyw f qgdlb tq k h za pj n o ";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int firstSize = 6;
    int firstRotate = 4;
    int secondRotate = 18;
    string message = " x spf d g ouj t lm b v n we k quei r ayc h";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = " v qnd b y msh r jk f t l uc i oscg p ewa z";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int firstSize = 24;
    int firstRotate = 7;
    int secondRotate = 0;
    string message = " b z vdnxstm y k qbpj wl hg fzia eru o k";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = " i z ekugbct y r xiwq fs on mzph lad v r";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int firstSize = 14;
    int firstRotate = 5;
    int secondRotate = 8;
    string message = "o lrf wcnpuv z t x ke ij id masz hgy q m ";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "w czk shexqr v p t bj na ni dfov mlu y d ";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int firstSize = 23;
    int firstRotate = 0;
    int secondRotate = 2;
    string message = " u j s aqov et ifk nybmr l ph d n gw c bx";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = " u j s aqov et ifk nxbmr l ph d n gw c bz";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int firstSize = 17;
    int firstRotate = 12;
    int secondRotate = 4;
    string message = "yjzs kt d qlp moa cb gu x awi i r e n fv";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "teuw fx p lgk hjm on by s mrd d v q i az";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int firstSize = 22;
    int firstRotate = 9;
    int secondRotate = 3;
    string message = " xbbc i o a z d t jq vu r hzs kw f m nysg el";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = " wkkl r b j y m g sd ih e qyf tz o v axfp nu";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int firstSize = 1;
    int firstRotate = 0;
    int secondRotate = 10;
    string message = " noa kjv u yqf x h lfw drc z p tr m ei gbs ";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = " xya utg f jbp i r vph ncm k z ec w os qld ";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int firstSize = 17;
    int firstRotate = 16;
    int secondRotate = 8;
    string message = "ice l at yhw nk bp z k jxdruov z qgsz p f";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "hbd k qs xgv mj ao y j iwcztnu y pfry o e";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int firstSize = 17;
    int firstRotate = 11;
    int secondRotate = 3;
    string message = "zyxwvutsrqponmlkjihgfedcba";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "tsrzyxwvukjihgfedcbaqponml";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int firstSize = 20;
    int firstRotate = 0;
    int secondRotate = 0;
    string message = " ce u i a abdpl t fy n swogqk mh hr vjx ";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = " ce u i a abdpl t fy n swogqk mh hr vjx ";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int firstSize = 1;
    int firstRotate = 0;
    int secondRotate = 24;
    string message = " ";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int firstSize = 1;
    int firstRotate = 0;
    int secondRotate = 1;
    string message = "b";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "c";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int firstSize = 1;
    int firstRotate = 0;
    int secondRotate = 3;
    string message = "b";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int firstSize = 4;
    int firstRotate = 3;
    int secondRotate = 21;
    string message = "defining development is a hard task";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "czehmhmf czuzknolzms hr d gdqc sdrj";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int firstSize = 1;
    int firstRotate = 0;
    int secondRotate = 20;
    string message = "zyx";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "uts";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int firstSize = 2;
    int firstRotate = 1;
    int secondRotate = 23;
    string message = "zzzzzyyyyyxxxxxuuuuuaaaaa";
    TwoRotationCypher* pObj = new TwoRotationCypher();
    clock_t start = clock();
    string result = pObj->encrypt(firstSize, firstRotate, secondRotate, message);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyyyxxxxxwwwwwtttttbbbbb";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test25() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22689641&rd=10798&pm=8304
********************************************************************************
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
 
class TwoRotationCypher {
public:
  string encrypt(int, int, int, string);
};
 
string TwoRotationCypher::encrypt(int firstSize, int firstRotate, int secondRotate, string message) {
  int i;
  for(i=0; i<message.size(); i++){
    if(message[i]==' ')
      continue;
    else if(message[i] >= 'a' && message[i] <= 'a'+firstSize-1){
      int j;
      for(j=0; j<firstRotate; j++){
        message[i]++;
        if(message[i] > 'a'+firstSize-1)
          message[i] = 'a';
      }
    }
    else{
      int j;
      for(j=0; j<secondRotate; j++){
        message[i]++;
        if(message[i]>'z'){
          message[i]='a'+firstSize;
        }
      }
    }
  }
  return message;
}

********************************************************************************
*******************************************************************************/
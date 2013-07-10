/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1669
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

class PaternityTest {
public:
    vector<int> possibleFathers(string child, string mother, vector<string> men);
};

vector<int> PaternityTest::possibleFathers(string child, string mother, vector<string> men) {
    vector<int> ret;
    return ret;
}


int test0() {
    string child = "ABCD";
    string mother = "AXCY";
    vector<string> men = {"SBTD", "QRCD"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string child = "ABCD";
    string mother = "ABCX";
    vector<string> men = {"ABCY", "ASTD", "QBCD"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string child = "ABABAB";
    string mother = "ABABAB";
    vector<string> men = {"ABABAB", "ABABCC", "ABCCDD", "CCDDEE"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string child = "ABCDEFGH";
    string mother = "ABCDEFGH";
    vector<string> men = {"ABCDEFGH"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string child = "ABCDEF";
    string mother = "ABCDEF";
    vector<string> men = {"FEDCBA"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string child = "ABCDEF";
    string mother = "XBCXXF";
    vector<string> men = {"ABCDEF"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string child = "YZGLSYQT";
    string mother = "YUQRWYQT";
    vector<string> men = {"YZQLDPWT", "BZELSWQM", "OZGPSFKT", "GZTKFYQT", "WQJLSMQT"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string child = "EHAPPOYCLXQH";
    string mother = "HXRPPJYGLXQW";
    vector<string> men = {"QMAPPKFHLDQH", "ERVPROACLYQD", "ORAIPUYPLXQY", "UHAPELYJBXQU", "JGAPABYCZXQH"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string child = "XCIHGTUYLYAXZHRDPUKJ";
    string mother = "XWIEPKUWLYCFZDMGPUKJ";
    vector<string> men = {"XFIEGTUYSJAXAHLIIAKJ", "QNIHMTAYKYAIZHRTPUIJ", "XCIYGUMYLYJXZYVTBUJE", "XIIHGHIYVYADZHUTPJTO", "WCIHGTVBBYKASXXDPUKJ"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string child = "YDHXMKFWTYWSPGTVDBYG";
    string mother = "ODHXJTFWTHWDPGLSZBEX";
    vector<string> men = {"YMHXMKFHTYOSRGTVDBYG", "YDHSMKQDTYWSOGTVDBYG", "YPHAMKDWOYWSPGTVDUYG", "YDHMMKMWTYJSPXTVDJYG", "YDVXMKZUOYCSPMTVDBYG"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string child = "BBBBBBBBBBAAAAAAAAAA";
    string mother = "BBBBBBBBBBBBBBBBBBBB";
    vector<string> men = {"AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string child = "ABCDEFGHIJKLMNOPQRST";
    string mother = "ABCDEFGHIJKLMNOPQRSX";
    vector<string> men = {"ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string child = "WXETPYCHUWSQEMKKYNVP";
    string mother = "AXQTUQVAUOSQEEKCYNVP";
    vector<string> men = {"WNELPYCHXWXPCMNKDDXD", "WFEEPYCHFWDNPMKKALIW", "WSEFPYCHEWEFGMPKIQCK", "WAEXPYCHAWEQXMSKYARN", "WKEXPYCHYWLLFMGKKFBB"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string child = "PREDNTRKUKRLFLENKX";
    string mother = "NRFXNTRUJSUFWLENKX";
    vector<string> men = {"PTJDZBCKUKRLFHAXLM", "QIEDYMSKUKRLFPRHGG", "PYEDQZVKUKRLFZVCVB", "POEDTUKKUKRLFOKJTR", "PAEDRYLKUKRLFLHHKV"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string child = "IVKEWOVNQKCCREDO";
    string mother = "IXKLWOVNTGCQRRWW";
    vector<string> men = {"BVGEPMMNQKVCBEDO", "MVWEGRIEQKBCXEDO", "VVKEZJYHQKBCEEDO", "RVJEBGIXQKPCPEDO", "OVZEWKPGQKNCBEDO"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string child = "AAAAAA";
    string mother = "AAAAAB";
    vector<string> men = {"AAAAAB", "AAAAAC"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string child = "ABCD";
    string mother = "ABXY";
    vector<string> men = {"CDAB"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string child = "QNBEYZBRQQ";
    string mother = "QBBKFZFHQQ";
    vector<string> men = {"QNMWYZHRVQ", "HDBCUZBRAQ", "NVBEOZBRFV", "OPMHYZBRYQ"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string child = "XOKXPZKAAW";
    string mother = "TOKXPTSASG";
    vector<string> men = {"XMKVBCUAAW", "XFKCIMKOAW", "XFFKEZKJAW", "XMKIIZKAIX"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string child = "EASSMBHEBGQBGP";
    string mother = "CPFSPBHTBGQUOP";
    vector<string> men = {"JLSSMBHTDRQUGM", "EASSMSUELWWBGQ", "CAGSMBXEBAAKAP", "EASGMYMEAKHBGI"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string child = "FJGGTQWUTURYXBXK";
    string mother = "BJHGTRWUCSRPJBXE";
    vector<string> men = {"FXGQOQZGTUJYXXNK", "FQLGQOWUXJRRXEXK", "FJGGFLWJTARUXVEG", "FGGVXQPZTUBYXKYK"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string child = "XY";
    string mother = "YY";
    vector<string> men = {"YY", "XX", "XQ", "QY", "YX"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string child = "ABCDEFGHIJKLMNOPQRST";
    string mother = "ABCDEFGHIJKLMNOPQRST";
    vector<string> men = {"ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSU", "ABCDEFGHIJKLMNOPQRSX", "ABCDEFGHIJKLMNOPQRSZ", "ABCDEFGHIJKLMNOPQRST"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string child = "ABABAB";
    string mother = "ABABAB";
    vector<string> men = {"ABCCDD", "CCDDEE"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string child = "WXETPYCHUWSQEMKKYNVP";
    string mother = "AXQTUQVAUOSQEEKCYNVP";
    vector<string> men = {"WNELPYCHXWXPCMNKDDXD", "WFEEPYCHFWDNPMKKALIW", "WSEFPYCHEWEFGMPKIQCK", "WAEXPYCHAWEQXMSKYARN", "WKEXPYCHYWLLFMGKKFBB"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string child = "ABABAB";
    string mother = "ABABAB";
    vector<string> men = {"ABABAB", "ABABCC", "ABCCDD", "CCDDEE"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string child = "ABCD";
    string mother = "ABEF";
    vector<string> men = {"CDEF"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string child = "ABCDEF";
    string mother = "ABCDEF";
    vector<string> men = {"AXXXXX", "XBXXXX"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string child = "ABABAB";
    string mother = "ADADAD";
    vector<string> men = {"ACACAC"};
    PaternityTest* pObj = new PaternityTest();
    clock_t start = clock();
    vector<int> result = pObj->possibleFathers(child, mother, men);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test26() == 0 ? ++passed : ++failed;
    test27() == 0 ? ++passed : ++failed;
    test28() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=2058775&rd=4580&pm=1669
********************************************************************************
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
class PaternityTest {
  public:
  vector <int> possibleFathers(string child, string mother, vector <string> men) {
    vector<int> retval;
    int i, j, c;
    
    for (i = 0; i  < men.size(); ++i)
    {
      c = 0;
      for (j = 0; j < child.length(); ++j)
      {
        if (child[j] != men[i][j]) {if (child[j] != mother[j]) break;}
        else c++;
      }
      if (j == child.length() && c >= men[0].size() / 2) retval.push_back (i);
    }
    return retval;
  }
 
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/
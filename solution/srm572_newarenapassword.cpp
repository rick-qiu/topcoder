/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12386
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

class NewArenaPassword {
public:
    int minChange(string oldPassword, int K);
};

int NewArenaPassword::minChange(string oldPassword, int K) {
    int ret;
    return ret;
}


int test0() {
    string oldPassword = "topcoderopen";
    int K = 5;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string oldPassword = "puyopuyo";
    int K = 4;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
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
    string oldPassword = "loool";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string oldPassword = "arena";
    int K = 5;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string oldPassword = "amavckdkz";
    int K = 7;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string oldPassword = "a";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
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
    string oldPassword = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx";
    int K = 25;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string oldPassword = "dddddddddd";
    int K = 10;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string oldPassword = "pppppppppppppppppppppppppppppppppppppppppppppppppp";
    int K = 20;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
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
    string oldPassword = "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm";
    int K = 40;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string oldPassword = "gggggggggggggggggggggggggggggggggggggggggggggggggg";
    int K = 49;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
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
    string oldPassword = "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq";
    int K = 50;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
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
    string oldPassword = "ppppppbppppppppppcpvpppppempppeppipppsppxpvppcpppb";
    int K = 40;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string oldPassword = "exixxxxxxxfxxxxmaxxjoxxixxtukikxohxjdaxxkxxxaxxyxx";
    int K = 25;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string oldPassword = "bbbbbbtbbbibbbbibbbbbdebbbmbabbbbbbbbbbbbbbsbbbbbq";
    int K = 26;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string oldPassword = "qqrhqkvrdjqbqlgupp";
    int K = 13;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string oldPassword = "amsap";
    int K = 4;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string oldPassword = "m";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string oldPassword = "y";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
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
    string oldPassword = "zznzwnzwzotyvazzfvizwszfxzrfv";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string oldPassword = "sxggihreglrprrccrthrajejrprrirxesinrwmrrkprhrraqrp";
    int K = 27;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string oldPassword = "ogjv";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string oldPassword = "panyapppppwnrppqjvjjneseppvptppipppmbkwdpjpspj";
    int K = 40;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string oldPassword = "wzvqoouzuuuulpkutduzyaqcbucvutzujizuuuxmkouujueqek";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string oldPassword = "clzlyhsolltlzsd";
    int K = 4;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string oldPassword = "ieahdbcjfg";
    int K = 10;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string oldPassword = "hiednovaxtmckzwromadgxgfqlukhlbpvqfbsyrwectijunsjp";
    int K = 20;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string oldPassword = "xbsezqhpsfogltcigaujbwxuaflywjdtvpmcvrrkqmdoknnihe";
    int K = 40;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string oldPassword = "xebopvfjkticldrgslnhfqozgtunvrxicmjaesduwymqbphwka";
    int K = 49;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string oldPassword = "rzqglrxwqieuajpnfatvsgouckxvphftscwblmdmhiknebdoyj";
    int K = 50;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string oldPassword = "bjooeojevfoyvbhpfkxpcqtdnsswdilsvddaxaudgsmtiqrcuk";
    int K = 40;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string oldPassword = "fpqyvjmntcehloovjujrdxodqthsgawlpzjtkavwsqnrdvkzbb";
    int K = 25;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string oldPassword = "kmucdqlvvsynnmxtwebqabvfhkguolwaeghoopnjdjairspzck";
    int K = 26;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string oldPassword = "bedsz";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string oldPassword = "glybaleynedaeojalbxyzmdyoj";
    int K = 12;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string oldPassword = "ojuuykqyhuonhtntbzohodacppnts";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string oldPassword = "ltnuokgdfcsarpprevefatxppwliuhqzhsb";
    int K = 13;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string oldPassword = "pctvjpjadiloocggoefdehiflwmmaydhb";
    int K = 2;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string oldPassword = "unkeiuvtdytbkotejcj";
    int K = 10;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string oldPassword = "crgfpbe";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string oldPassword = "kfqeywktcqmixbddwdlihxhaatuenq";
    int K = 8;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string oldPassword = "y";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string oldPassword = "nsdzqogumtcupzpskbhsokzwoseafxn";
    int K = 15;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string oldPassword = "aa";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string oldPassword = "ab";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string oldPassword = "aa";
    int K = 2;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string oldPassword = "ab";
    int K = 2;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string oldPassword = "aba";
    int K = 2;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string oldPassword = "abab";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string oldPassword = "aabb";
    int K = 4;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string oldPassword = "aabb";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string oldPassword = "aacbbbcca";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string oldPassword = "aacbbbaaa";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string oldPassword = "aaabbbcaa";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string oldPassword = "aaabbbccc";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string oldPassword = "pjeahomjpgeoscahcmnwknkhaqsyytspewpmn";
    int K = 36;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string oldPassword = "bvffvmijbgvoscpivpiqixvgnjvtgadhv";
    int K = 29;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string oldPassword = "x";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string oldPassword = "qxchizwqpgqmnfxkydkdnhoccmzimejcbn";
    int K = 32;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string oldPassword = "ccosqdxopxrcaejoindhvpnhtpue";
    int K = 27;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string oldPassword = "l";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string oldPassword = "gvrwsjytpjjyzmhwdvdymycohqtstpvclnyd";
    int K = 33;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string oldPassword = "njiniwxfauiaiidwpvphqhdsuqszqsydcitkgsrimajwims";
    int K = 45;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string oldPassword = "ztmunemmufkajuttbnnjznsvxgpxrbfrutnhyzusggsp";
    int K = 44;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string oldPassword = "aynzngwmookgprzkkmr";
    int K = 15;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string oldPassword = "uutjvhwzjumljuhw";
    int K = 13;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string oldPassword = "nzqzlcswpgxjasvxbrylokyxhftsfdjscztqblmq";
    int K = 37;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string oldPassword = "fxqjoowcbucibx";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string oldPassword = "lafktvnfjfyuhsagklvzhz";
    int K = 21;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string oldPassword = "ebolczlhlhfyoofmjpglvrwssfsuivimw";
    int K = 29;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string oldPassword = "liiupiidnwoefzawxsqemmmkuzisyjpltxfi";
    int K = 33;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string oldPassword = "ocbtddrbxhfktuwptehtpwfkvmseeiask";
    int K = 31;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string oldPassword = "eqenyqgsmxlsegi";
    int K = 13;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string oldPassword = "cndgxfahhnwptntgljodxlqqryavmuuqjzwgeypn";
    int K = 10;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string oldPassword = "gbwmmiarfnjxejzzvuvlfujmahboup";
    int K = 2;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string oldPassword = "poezoxhbighsginadbfzmta";
    int K = 23;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string oldPassword = "mjtfajjayhjbp";
    int K = 11;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string oldPassword = "txxzafymyaixqbkbwpcfaedhnhzcsianhxmhenud";
    int K = 40;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string oldPassword = "gfmjbdlhe";
    int K = 5;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string oldPassword = "cvohpxhdggpolckqsosawhjzkvgokvcpqqygphlwpamcdw";
    int K = 46;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string oldPassword = "vkugkgbsvopzfgrdohmzfbbrggpaddnaojhyqisn";
    int K = 5;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string oldPassword = "dqfigouhtyimgpbgsfwtvfavxinmhxamn";
    int K = 31;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string oldPassword = "raorlcxaeeslanghnbhyq";
    int K = 20;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string oldPassword = "tdcqxwizmzkpxkvdfgfuomirt";
    int K = 23;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string oldPassword = "xlkbnd";
    int K = 6;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string oldPassword = "ymkplwkodsvyiiizdqiujgfvjsyj";
    int K = 28;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string oldPassword = "yuvjtfawzvwhfei";
    int K = 12;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string oldPassword = "f";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string oldPassword = "bhfzsjldplzkwsrwrqunzbshmoaswyfxikyawlflwfwtznrq";
    int K = 46;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string oldPassword = "pypbopvkpcjznkajxhwuospogigowkvl";
    int K = 9;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string oldPassword = "bbmltoxsbjumgcjcqdr";
    int K = 15;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string oldPassword = "zyzvlkhbllpyeexyhgtwnxfppijyullvlkqywabjlrkrvh";
    int K = 4;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string oldPassword = "kadjfubqdzmqkhdwadvafenwqgtyxxokyttfnwvtv";
    int K = 38;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string oldPassword = "pgtsbvzhivyooynooxmhttwprr";
    int K = 14;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string oldPassword = "wtucmodhqnrllhclvszseinzgfqasrfombrzrwihlavwhx";
    int K = 20;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string oldPassword = "ixvsmwbrnblggashtryrcidcdblalq";
    int K = 27;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string oldPassword = "qbkrvzugfaiyjdrjxtrcxudjwqbpoqdetqxoprxvthv";
    int K = 42;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string oldPassword = "ig";
    int K = 2;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string oldPassword = "zpowiplwfrcbjbpyuovnwqrjdctlhfqjwffeus";
    int K = 11;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string oldPassword = "gd";
    int K = 2;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string oldPassword = "blqqhhhqmmlxtqpemulrrg";
    int K = 20;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string oldPassword = "ymjuhnfzdmgne";
    int K = 12;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string oldPassword = "uhjzudknuqipkknywkhlpgqepdijeadzhmadrkqm";
    int K = 37;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string oldPassword = "ltnjduwsanwpshbxhewqswujikxnlbczupkxlhpouodmvgjcmh";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string oldPassword = "ooozlbmmeliv";
    int K = 9;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string oldPassword = "xvznanijzmvggamvoawbbiqhwyfugmbf";
    int K = 22;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string oldPassword = "lpauqoqxwsltglpjoazwyydugpvlaxdlofiftaeps";
    int K = 38;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string oldPassword = "ajqcloajrurirckqfyfkgmfgswajhalij";
    int K = 31;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string oldPassword = "snfljwwbagtfeyrmmwugt";
    int K = 19;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string oldPassword = "a";
    int K = 1;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string oldPassword = "xaykijvgfyhosossghfeblzwbcqdoyjlzhxjttparyoln";
    int K = 42;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string oldPassword = "qjzrwznzbgdpemdfwaqpvipp";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string oldPassword = "vneqdpqwormnuusjahogdryumgj";
    int K = 27;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string oldPassword = "kekbjctgqksfemypmheumxtglbrpshvdnhgxlbdblxj";
    int K = 42;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string oldPassword = "xqmucjnkvqbmjkjoyqwxcxafi";
    int K = 19;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string oldPassword = "abababcbc";
    int K = 7;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string oldPassword = "cbba";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string oldPassword = "abcdffg";
    int K = 6;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string oldPassword = "aabbccaa";
    int K = 6;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string oldPassword = "qkjwqkjwjwjwjjwjwjjwjwjwjwjwjwjwjwqkjwjwjwqkjwjwjw";
    int K = 49;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string oldPassword = "abdfacdfbcefbcegbbeg";
    int K = 16;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string oldPassword = "abababccabcccb";
    int K = 13;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string oldPassword = "dcdaaccaacbbcbbaccacdcbc";
    int K = 23;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string oldPassword = "dzsaqweasdafasdasdafasdasdasdzasqzasfasqweashtrasr";
    int K = 49;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string oldPassword = "bcacacacbc";
    int K = 8;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string oldPassword = "jzpzsgnspqxwjgjxiuyljxyzmaufsuwqrheqerczugavrbnjfd";
    int K = 34;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string oldPassword = "aaaaaababab";
    int K = 9;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string oldPassword = "cdad";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string oldPassword = "aaaaabbbbbbb";
    int K = 11;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string oldPassword = "cabcccabcbcddadabdbbcaccacabcbcabadbacacacbcbccaca";
    int K = 39;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string oldPassword = "abbbbabbb";
    int K = 8;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string oldPassword = "amavckckc";
    int K = 7;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string oldPassword = "bacaabbabcccbccbaaabbbccbbcacbcababac";
    int K = 35;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string oldPassword = "abcdefghijklmnopqrstuvwxybcdefghijklmnopqrstuvwxyz";
    int K = 29;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string oldPassword = "ddaa";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string oldPassword = "yeykeqbkzhenafzcivuabcbndzvsfhykyctwjkwnaegzsaiykh";
    int K = 39;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string oldPassword = "abbabba";
    int K = 6;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string oldPassword = "acacbdbdb";
    int K = 7;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string oldPassword = "xeywyxpvwiencehqsybcnfgjkwtvrkhoommnbwlafymsiftcmh";
    int K = 48;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string oldPassword = "abcabcabc";
    int K = 8;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string oldPassword = "abchahachbbhhbhcahhc";
    int K = 19;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string oldPassword = "baba";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string oldPassword = "aabbccdd";
    int K = 7;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string oldPassword = "abc";
    int K = 2;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string oldPassword = "abcdb";
    int K = 4;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string oldPassword = "aabbaaabbaa";
    int K = 9;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string oldPassword = "aaaaaaabbbbbbbbbbbbbbccccccccccccccccccccccccccccc";
    int K = 47;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string oldPassword = "bbaabaaaaabbbbbbbababaabaabaabbabababbbabbabbabbba";
    int K = 40;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string oldPassword = "ababababcdcdcdcdefefefef";
    int K = 23;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string oldPassword = "abcaaaa";
    int K = 6;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string oldPassword = "abchahachbbhhbhcahhcabchahachbbhhbhcahhc";
    int K = 39;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string oldPassword = "ajlfvgubfaaovlzylntrkdcpwsrtesjw";
    int K = 31;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string oldPassword = "gxzkktitxocthykzzttlcaieylusuvykdcpipningrgaszyrxe";
    int K = 49;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string oldPassword = "bbooo";
    int K = 4;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string oldPassword = "aabbbbb";
    int K = 6;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string oldPassword = "abababab";
    int K = 7;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string oldPassword = "acacbcbc";
    int K = 6;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string oldPassword = "abbcc";
    int K = 4;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string oldPassword = "bxaxcxb";
    int K = 5;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string oldPassword = "zyyyz";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string oldPassword = "aaabbbccc";
    int K = 8;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string oldPassword = "izbjetjnxrqlhoiolxqtggjkmwicixndhetycwwnslchfrnkrn";
    int K = 40;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string oldPassword = "abcdddddeeeeeee";
    int K = 14;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string oldPassword = "abcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcdeabcde";
    int K = 49;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string oldPassword = "jbabdbjbj";
    int K = 7;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string oldPassword = "abccbcabaa";
    int K = 7;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    string oldPassword = "babb";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    string oldPassword = "axaxbxbxbxbxbxbxbxbxbxaxa";
    int K = 23;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    string oldPassword = "aaaabb";
    int K = 5;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    string oldPassword = "amamckdkz";
    int K = 7;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    string oldPassword = "aebdcec";
    int K = 5;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    string oldPassword = "baadbb";
    int K = 2;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    string oldPassword = "abcdefghhhabcdefghijabcdefghijabcdefghijabcdefghij";
    int K = 49;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    string oldPassword = "bacaa";
    int K = 4;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    string oldPassword = "aaba";
    int K = 3;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    string oldPassword = "owdgeljytvsmafyfmrvtfwroccbhrmgzzlpxuycnclfvtkiuzb";
    int K = 34;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    string oldPassword = "ababababab";
    int K = 9;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    string oldPassword = "ababbcccc";
    int K = 8;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    string oldPassword = "abadfadsda";
    int K = 9;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    string oldPassword = "ltmehkfjhdgnudxmkwiudapflpvvqlncwk";
    int K = 16;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    string oldPassword = "aaaabbbb";
    int K = 7;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    string oldPassword = "abcabc";
    int K = 5;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    string oldPassword = "abcdeffabcdeffabcdeff";
    int K = 20;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    string oldPassword = "cbcbabcbcbcb";
    int K = 10;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    string oldPassword = "abcdefghijklmnoabcdeflkdjfsoiermnfsdljkldjlkjalkdd";
    int K = 48;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    string oldPassword = "kaiefkkjcmcmjjdsahushfiosjlkfnsadlksdjssjuorioujkl";
    int K = 48;
    NewArenaPassword* pObj = new NewArenaPassword();
    clock_t start = clock();
    int result = pObj->minChange(oldPassword, K);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test29() == 0 ? ++passed : ++failed;
    test30() == 0 ? ++passed : ++failed;
    test31() == 0 ? ++passed : ++failed;
    test32() == 0 ? ++passed : ++failed;
    test33() == 0 ? ++passed : ++failed;
    test34() == 0 ? ++passed : ++failed;
    test35() == 0 ? ++passed : ++failed;
    test36() == 0 ? ++passed : ++failed;
    test37() == 0 ? ++passed : ++failed;
    test38() == 0 ? ++passed : ++failed;
    test39() == 0 ? ++passed : ++failed;
    test40() == 0 ? ++passed : ++failed;
    test41() == 0 ? ++passed : ++failed;
    test42() == 0 ? ++passed : ++failed;
    test43() == 0 ? ++passed : ++failed;
    test44() == 0 ? ++passed : ++failed;
    test45() == 0 ? ++passed : ++failed;
    test46() == 0 ? ++passed : ++failed;
    test47() == 0 ? ++passed : ++failed;
    test48() == 0 ? ++passed : ++failed;
    test49() == 0 ? ++passed : ++failed;
    test50() == 0 ? ++passed : ++failed;
    test51() == 0 ? ++passed : ++failed;
    test52() == 0 ? ++passed : ++failed;
    test53() == 0 ? ++passed : ++failed;
    test54() == 0 ? ++passed : ++failed;
    test55() == 0 ? ++passed : ++failed;
    test56() == 0 ? ++passed : ++failed;
    test57() == 0 ? ++passed : ++failed;
    test58() == 0 ? ++passed : ++failed;
    test59() == 0 ? ++passed : ++failed;
    test60() == 0 ? ++passed : ++failed;
    test61() == 0 ? ++passed : ++failed;
    test62() == 0 ? ++passed : ++failed;
    test63() == 0 ? ++passed : ++failed;
    test64() == 0 ? ++passed : ++failed;
    test65() == 0 ? ++passed : ++failed;
    test66() == 0 ? ++passed : ++failed;
    test67() == 0 ? ++passed : ++failed;
    test68() == 0 ? ++passed : ++failed;
    test69() == 0 ? ++passed : ++failed;
    test70() == 0 ? ++passed : ++failed;
    test71() == 0 ? ++passed : ++failed;
    test72() == 0 ? ++passed : ++failed;
    test73() == 0 ? ++passed : ++failed;
    test74() == 0 ? ++passed : ++failed;
    test75() == 0 ? ++passed : ++failed;
    test76() == 0 ? ++passed : ++failed;
    test77() == 0 ? ++passed : ++failed;
    test78() == 0 ? ++passed : ++failed;
    test79() == 0 ? ++passed : ++failed;
    test80() == 0 ? ++passed : ++failed;
    test81() == 0 ? ++passed : ++failed;
    test82() == 0 ? ++passed : ++failed;
    test83() == 0 ? ++passed : ++failed;
    test84() == 0 ? ++passed : ++failed;
    test85() == 0 ? ++passed : ++failed;
    test86() == 0 ? ++passed : ++failed;
    test87() == 0 ? ++passed : ++failed;
    test88() == 0 ? ++passed : ++failed;
    test89() == 0 ? ++passed : ++failed;
    test90() == 0 ? ++passed : ++failed;
    test91() == 0 ? ++passed : ++failed;
    test92() == 0 ? ++passed : ++failed;
    test93() == 0 ? ++passed : ++failed;
    test94() == 0 ? ++passed : ++failed;
    test95() == 0 ? ++passed : ++failed;
    test96() == 0 ? ++passed : ++failed;
    test97() == 0 ? ++passed : ++failed;
    test98() == 0 ? ++passed : ++failed;
    test99() == 0 ? ++passed : ++failed;
    test100() == 0 ? ++passed : ++failed;
    test101() == 0 ? ++passed : ++failed;
    test102() == 0 ? ++passed : ++failed;
    test103() == 0 ? ++passed : ++failed;
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15492&pm=12386
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
 
class NewArenaPassword {
public:
  int minChange(string, int);
};
 
int NewArenaPassword::minChange(string s, int K) {
  int n = s.size(), i, g[55][55], was[55], x[55], cnt[255];
  for (int i=0;i<n;i++)
    for (int j=0;j<n;j++) g[i][j] = 0;
  for (int i=0;i<K;i++) g[i][n-K+i] = 1;
  for (int i=0;i<n;i++) was[i] = 0;
  int ans = 0;
  for (int ii=0;ii<n;ii++)
    if (!was[ii]) {
      int i = 1, e = 1;
      x[1] = ii;
      was[ii] = 1;
      while (i <= e) {
        for (int j=0;j<n;j++)
          if (g[x[i]][j] == 1 && !was[j]) {
            e++;
            x[e] = j;
            was[j] = 1;
          }
        i++;
      }
      for (char c='a';c<='z';c++) cnt[c] = 0;
      for (int i=1;i<=e;i++) cnt[s[x[i]]]++;
      int mx = 0;
      for (char c='a';c<='z';c++)
        if (cnt[c] > mx) mx = cnt[c];
      ans += e-mx;
    }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/
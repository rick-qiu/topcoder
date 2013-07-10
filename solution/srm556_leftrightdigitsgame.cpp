/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12173
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

class LeftRightDigitsGame {
public:
    string minNumber(string digits);
};

string LeftRightDigitsGame::minNumber(string digits) {
    string ret;
    return ret;
}


int test0() {
    string digits = "565";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "556";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string digits = "9876543210";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1234567890";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string digits = "8016352";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1086352";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string digits = "1";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string digits = "01";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string digits = "901";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "109";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string digits = "109";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "109";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string digits = "380";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "380";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string digits = "3928360770";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "2398360770";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string digits = "284571068549373";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "128457068549373";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string digits = "69727879252051753520";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10222697787955753520";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string digits = "53013652946745933727468097755950461";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10003513652946745933727468977559546";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string digits = "7482528283429368756946791671134092246285";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1112222478588349368756946796734092246285";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string digits = "849977772669238327630051487226702890699855771";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100002224899777766938376351487226728969985577";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string digits = "82358880314196476696612703282192340320351990759311";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000028358883141964766966127328219234323519975931";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string digits = "09246590521466069264983001526938055924978335933152";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000009246595214666926498315269385592497833593352";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string digits = "57017243424714583743738007458176899623185588138523";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10005717243424714583743738745817689962318558838523";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string digits = "01682858369148036469534345822052230638496300323191";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000001682858369148364695343458225223638496332319";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string digits = "0446";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "4046";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string digits = "73890136300";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10378936300";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string digits = "9921454865020000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1299454865020000";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string digits = "917043802938059265000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "197043802938059265000";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string digits = "69250700000000000000000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "26950700000000000000000000";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string digits = "7983118308482670950633434269600";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1137988308482670950633434269600";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string digits = "792086082908829300000000000000000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "200027986829889300000000000000000000";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string digits = "6839813778566800435979730544509492376873629420000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1368983778566800435979730544509492376873629420000";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string digits = "42793539048451947810651184791197366812826683980000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10024793539484519478165118479119736682826683980000";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string digits = "61768559846114246084877077858914291066143954400000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10001116768559846424684877778589142916643954400000";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string digits = "66033001916429687820706397816532137759000000000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000066331916429687827639781653237759000000000000";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string digits = "84291027751908867839544430938728149252129230000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10001248927751988678395444393872814925229230000000";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string digits = "05307";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "30507";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string digits = "007534679";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "300754679";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string digits = "00090228349336";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "20000928349336";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string digits = "0000000000868862883";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "2000000000086886883";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string digits = "005298559466821452550331";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100052985594668214525533";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string digits = "00009804003774430273936408859";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "20000000098437744373936408859";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string digits = "00000000000000000000000000000000000007301376";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000000000000000000000000000000073376";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string digits = "000008119208188278916481616375140448269301319248";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000811928188278916481616375144482693139248";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string digits = "009090";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "900090";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string digits = "005461207440";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100546207440";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string digits = "0031351452000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1003135452000000";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string digits = "0000000033528753020000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "2000000000335287530000";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string digits = "00005816178913475263885000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000581617893475263885000";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string digits = "00000000004000000000000000700000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "40000000000000000000000000700000";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string digits = "0000000008877678200000000000000000000000000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "2000000000887767800000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string digits = "00000161981928999392773240000000000000000000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000016198928999392773240000000000000000000000";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string digits = "00000000000000000000000000000000000019543005591400";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000000000000000000000000000000019543559400";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string digits = "00021700814855832354004145445069391684775100000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000021781485583235441454456939168477500000000";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string digits = "00000031262631020759000000000000000000000000000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000003126263020759000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string digits = "00000016518063134132359866000000000000000000000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000165186313432359866000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string digits = "0000040000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "4000000000";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string digits = "00007050000000000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "50000070000000000000";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string digits = "000000000000100000000001000070";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000000000000000001000070";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string digits = "000000000000000000000000907000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "700000000000000000000000009000";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string digits = "0000000010000600000007000000000000000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000600000007000000000000000000";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string digits = "0000000080003010000000000000009000700000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000830000000000000009000700000";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string digits = "02800000007000060000006000000000000000000000000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "20800000007000060000006000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string digits = "00007000000002000000000000300000000000030000000800";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "20000000000007000000000000300000000000030000000800";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string digits = "00000000000000000000000000000000000000000007000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "70000000000000000000000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string digits = "00000000004000000000040206009800070004000000000807";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "20000000000000000000004406009800070004000000000807";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string digits = "04000080781005700670000060008000000000300040009500";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000004878005700670000060008000000000300040009500";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string digits = "00000090220307000005200060950071860480030100020001";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000000000000000000000009223752695718648312";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string digits = "09900658900028087062800327052300300063500509267033";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "20000000000000000000996589288762832752336355967033";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string digits = "80201111118020111111802011111180201111118020111900";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000821111118211111182111111821111118211900";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string digits = "100218000475729999884";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100128000475729999884";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string digits = "7701020304050607080900010203040506070809001234589";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000000000077123456789123456789234589";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string digits = "00056168912543213261112346598646132900065198440000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000005616891254321326111234659864613296598440000";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string digits = "18412038135123";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10118423813523";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string digits = "504030306090805020105030605040450260990";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000054336985205030605040450260990";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string digits = "0000000000000012345678909876543211234567890000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000123456789987654321234567890000000";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string digits = "124012051250012540001200";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100000001241251251254200";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string digits = "00090501000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000095000";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string digits = "10234567891023456789102345678910234567891023456789";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000123456789123456789123456789123456789023456789";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string digits = "1840001230005550006660007070888802030608090102011";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000000000018412355566677888823689121";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string digits = "2155124120152012501205000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1000111255242152125205000";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string digits = "12345678901234567890123456789012345678901234567890";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000123456789123456789123456789123456789234567890";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string digits = "123423255412342325541234232554123042325540000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "111123423255423423255423423255423042325540000";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string digits = "00021";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10002";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string digits = "000005000020001";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000000052";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string digits = "02011";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10021";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string digits = "900000000000000000000000000000000080000000000000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "800000000000000000000000000000000090000000000000";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string digits = "1010101";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1000111";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string digits = "78965436914785196321956498759265398418523100187546";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10011111345678969478596329564987592653984852387546";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string digits = "010201";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100012";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string digits = "8016352000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1086352000";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string digits = "7812211207816731125133548112591212139";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1011178222781673112513354811259121239";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string digits = "99999999999999999999999999999999999999999909999999";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "90999999999999999999999999999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string digits = "10003";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10003";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string digits = "1234567890000123456789123456789123456789123456789";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1000012345678912345678912345678912345678923456789";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string digits = "5009001200010000029870010023311000";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000059121298712331000";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string digits = "081016352";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100816352";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string digits = "010203040506070809090807060504030201010203040506";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000000000000001234567899876543210203040506";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string digits = "10101098";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10011098";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string digits = "80101010101052";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000081111052";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string digits = "1009";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1009";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string digits = "3874533543545353445645663286786780000004553544";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "2333333387455454554456456686786780000004553544";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string digits = "102030111";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100012311";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string digits = "01234067890123456789002345678901234067890123406089";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000012346789123456789234567891234678923406089";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string digits = "801010101010101010101010101010101010101010101052";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000000000000000008111111111111111111111052";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string digits = "030101";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100031";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string digits = "3675356291270936062618792023759228973612931947845";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1000123367556927936626187922375922897361293947845";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string digits = "987654321005200154661234567895464312121544545459";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100001234567895215466123456789546431212544545459";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string digits = "00206090951905040454010502228822022088022910283";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000000026995195445415222882222882290283";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string digits = "01921021201";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10001921212";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string digits = "20430";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "20430";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string digits = "000500048787687787876787853401234510867687045600";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "100000005487876877878767878534123450867687045600";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string digits = "00321";
    LeftRightDigitsGame* pObj = new LeftRightDigitsGame();
    clock_t start = clock();
    string result = pObj->minNumber(digits);
    clock_t end = clock();
    delete pObj;
    string expected = "10032";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23044776&rd=15178&pm=12173
********************************************************************************
#include<iostream> 
#include<vector> 
#include<cstdio> 
#include<cstring> 
#include<cstdlib> 
#include<algorithm> 
using namespace std; 
#define rep(i,n) for(i=0;i<n;i++) 
#define FOR(i,j,k) for(i=j;i<=k;i++) 
#define FORD(i,j,k) for(i=j;i>=k;i--) 
#define FIT(i,j) for(typeof((i).begin()) j=(i).begin();j!=(i).end();j++) 
#define met(i,j) memset(i,j,sizeof(i)) 
#define PB push_back 
#define MK make_pair 
#define sz size() 
#define TF(a) typeof(a) 
const int oo=2147483647; 
typedef long long LL; 
typedef unsigned long long ULL; 
bool bj[100]; 
 
class LeftRightDigitsGame 
{ 
    public: 
        string minNumber(string digits) 
        { 
            int i,ij,q,j,zero=0; 
            for(i=ij=(int)digits.sz-1;i>=0;i=ij-1) 
            { 
                q=100;ij=0; 
                for(j=i;j>=0;j--) 
                { 
                    if(!zero&&digits[j]=='0')continue; 
                    if(digits[j]<q)q=digits[j],ij=j; 
                } 
                bj[ij]=1; 
                zero=1; 
            } 
            string ans=""; 
            rep(i,(int)digits.sz) 
            { 
                if(bj[i])ans=digits[i]+ans;else ans=ans+digits[i]; 
            } 
            return ans; 
        } 
};

********************************************************************************
*******************************************************************************/
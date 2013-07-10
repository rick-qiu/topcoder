/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12265
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

class TheJediTest {
public:
    int minimumSupervisors(vector<int> students, int K);
};

int TheJediTest::minimumSupervisors(vector<int> students, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<int> students = {3, 6, 3};
    int K = 4;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
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
    vector<int> students = {1, 1, 1, 1};
    int K = 4;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> students = {0, 0, 0, 0};
    int K = 12345;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> students = {15, 0, 13, 4, 29, 6, 2};
    int K = 7;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> students = {1284912, 1009228, 9289247, 2157, 2518, 52781, 2, 2818, 68};
    int K = 114;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 102138;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> students = {29541663, 85732198, 69829763, 77760462, 32153432, 79240058, 13641353, 50236888, 83780217, 82884996, 5909451, 68242201, 64320036, 82420030, 16758585, 12089161, 92006984, 90761986};
    int K = 67854681;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> students = {59583903, 66931231, 75489260, 5367031};
    int K = 20456098;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> students = {56793162, 76794418, 32983393, 38286281, 24473450, 88981414, 68821846};
    int K = 94579073;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> students = {60406519, 92105209, 27688480, 23378495, 53878530, 20260291, 61996185};
    int K = 76771986;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> students = {84379100};
    int K = 32439455;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
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
    vector<int> students = {99203485, 17324730, 5410737, 11860563, 34237187, 11126721, 56157622, 48960271, 3684793};
    int K = 1725617;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 167;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> students = {10530261, 31126400, 58755287, 39823041, 33207007, 39505470, 80805568};
    int K = 42091812;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> students = {84809247, 22486586, 99664323, 85682516, 926336, 8620094, 11657708, 70562974, 99654217, 23012065, 12903209, 2074458, 44927126, 94514648, 47812845};
    int K = 45942325;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> students = {41464534, 17372425, 65726505, 66131057, 77088665, 4122287, 65303825, 81170911, 23097154, 16022458, 58203620, 53278465, 26437154, 54258911, 40069194};
    int K = 21688116;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> students = {2332890, 80459142, 99515138, 62560542, 54185368, 43268890};
    int K = 15951477;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> students = {47643865, 91244312};
    int K = 63760976;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
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
    vector<int> students = {46139007};
    int K = 29375573;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> students = {1537850, 16423383, 94400848, 5424583, 76422187, 82935400, 3215939, 88361204, 80014335, 485978, 31677191, 39729460, 68544237};
    int K = 76106115;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> students = {51235631, 47234746};
    int K = 88178468;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> students = {85917358, 82455907, 96386315, 20319346, 83035486, 7259323, 9548333, 38805062, 5594495, 32063230, 80067860, 90122205, 79347082};
    int K = 60637790;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> students = {2177501, 53486179, 3044070, 19733507, 38360650};
    int K = 72700257;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> students = {38027582, 67259855, 87865533, 45372927, 42887819, 12895831, 48371246, 83723803, 79320733, 65750699, 12921909, 85138968, 7000450, 77934730, 87633044};
    int K = 80080612;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> students = {62025198, 50334612, 68547900, 64477412, 62428070, 48218921, 20566225, 50002091, 70554637, 62317592, 75998282};
    int K = 76075917;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> students = {16764666, 99490592, 27740193};
    int K = 31974629;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> students = {69122960, 76278478, 4251446, 92995264, 3207312, 16831165, 29442638, 63213106, 58686180, 19141844, 49473885, 90421527, 66710109, 60066462, 51925424};
    int K = 27534636;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> students = {58136421, 49420626};
    int K = 63312413;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> students = {10251894, 36057052, 29880431, 97340043, 38491803, 4769762, 94708562, 18185421, 91062087, 43208067, 90884776};
    int K = 49482859;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> students = {12523288, 5242740};
    int K = 99991077;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> students = {53406509, 87749572, 42202814, 57740123, 56781747, 67532792, 92924198, 39823278};
    int K = 82751317;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> students = {82671827, 97395819, 10706595, 35912713, 72630804, 8414774, 55958827, 50975063, 44420970, 58421609, 93810952, 26267506, 57547384};
    int K = 64843308;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> students = {10832354, 42165087, 13833223, 53719330, 5737398, 70667050, 60899854, 75249527, 69143143, 30608124, 91981898, 66537008, 77057083, 3606710, 15163037, 46445971, 38532956, 40119800, 54880114};
    int K = 74969618;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> students = {8365888, 50263476, 99005983, 93119521, 87174241, 17158451, 8333626, 55762408, 67167827, 19412051, 83430811, 61851644, 22441204, 9169171};
    int K = 53598295;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> students = {15773485};
    int K = 38207708;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> students = {10037778, 4420499, 12752151, 71599771, 50546945, 20659058, 62740421, 12122669, 6329913, 11510276, 23178790, 77567907, 46481321, 35447665, 80004967};
    int K = 61139134;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> students = {30399748, 15789536, 30106464, 56103420, 86985779, 1641091, 21764842, 37773413, 83677022, 20840618, 97767306, 92929897, 66455099, 77015730, 97265880, 46488459, 84542624, 35075654, 97359208, 9521123};
    int K = 25910414;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> students = {90116244, 33792414, 48107117, 15192123, 35304533, 40466584, 32595571, 2379622, 43792187, 56501019};
    int K = 84889821;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> students = {22222130, 12610586, 49869456, 56611597, 8312318, 86286908, 75246195, 14977528, 5787650, 64128327, 39664877, 11011668, 5620288, 16013072, 42944449};
    int K = 64222965;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> students = {7144077, 24257879, 70057711, 20181586, 68622788, 60085126, 13301025, 38569551, 44963218, 7933416, 51352201, 47891874, 37836426, 4104228, 32025480, 3201123, 69339467};
    int K = 94196605;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> students = {41182817, 95211790, 73571483, 70986963, 12964083, 8675980, 41661945, 1363531, 60091065, 88958606, 28799433};
    int K = 84734233;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> students = {65050889, 37136141, 10859733, 64055987, 84897780, 48278913, 32354092, 70863704, 2957940, 89410178, 45733116, 4211777, 24956068, 16956590, 37090635, 26441703, 77652841, 72276207};
    int K = 57151863;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> students = {72286901, 76752230, 73663103, 760206, 92081833, 15811606, 8762938, 13836294, 62078260, 5832572, 48733694, 7049889, 6576113, 61753605, 68005626, 90625281, 71362773};
    int K = 50679035;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> students = {94337464, 60970758, 66489336, 97907082, 67208917, 60276910, 25315319, 20213879, 5471895, 22062328, 74353083, 64468401, 56827947, 86352522, 20376455, 52516553, 20315294, 5992474};
    int K = 95569753;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> students = {2909855, 57132667, 21557213, 49151512, 6212128, 28504738, 47758095, 2657316, 51645821, 44519091, 25276522, 60075200, 90191776, 74970725, 91695372, 36673403, 58403468, 85018451};
    int K = 84428594;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> students = {73209352, 3853163, 12325606, 43151646, 91914371, 91376752, 79739292, 60770296, 53858132, 44498231, 95106691, 80633237, 6027229, 50126526, 45338262, 1890363, 96883047, 22963717, 19496893};
    int K = 66756408;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> students = {26253602, 22488451, 14566429, 92900121, 54152233, 11254552, 4278536, 41190848, 88809367, 35623956, 52155367, 42816555, 38316271};
    int K = 87951571;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> students = {55828178, 44727481, 5865207, 95089660, 58721862, 95851265, 18709696, 53060089, 7778998, 53474556, 50230266};
    int K = 86841676;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> students = {95865107, 69235340, 29679433, 9643665, 6315042, 64302361, 68181075, 71801208, 506770, 70876195, 55628604, 19990668, 42041329, 72098594, 8154538, 48907788};
    int K = 77802346;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> students = {9280317, 85203039, 63337324, 76742074, 94149692, 99175102, 55430808, 21956105, 53634017, 38226580, 46403018, 23237409, 85875995, 87289854, 89840590, 60614257, 11255625, 84919276, 19062959, 2619796};
    int K = 77169676;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> students = {50646708, 79134367, 79143202, 7059253, 17006460, 39772084, 97198538, 43258042, 7587063, 5436702, 84960444, 29450825, 20903292, 68808876, 17198585, 35698055};
    int K = 99978086;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> students = {16393721, 84856619, 48967034, 92735390, 56420186, 76512257, 25809096, 8515227, 48705998, 9681218, 29786623, 2194435, 84316770, 13303692, 36872104, 50145556, 10014056, 41902121, 69065056};
    int K = 71055862;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> students = {96217351, 58498317, 87904571, 44063776, 40217863, 45805721, 96617420, 80548079, 99568169, 67099967, 80830326, 10471455, 92365029, 34788334, 4479083};
    int K = 67707252;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> students = {26511831, 9425781, 39853514, 6141284, 63466673};
    int K = 99857632;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> students = {58517283, 71176100, 71935113, 13209580, 24376890, 64699, 14593340, 53612188, 39749420, 41158719, 87272481, 85795088, 83616743, 68021702, 81478256, 57344472, 52493013};
    int K = 65845707;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> students = {11173735, 1376418, 19763863, 37428443, 3228566, 8175552, 38125997, 33000017, 15771308, 56789261, 91218458, 46368038, 70938324, 22047035, 70077372, 80665849, 36685330, 435178, 55150598, 93759205};
    int K = 51250937;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> students = {249607, 98760555, 12441123, 23144706, 39136352, 86773159, 9496561, 19975975, 4665161, 8782214, 81652176, 60092908, 33309850, 9176454, 71971192};
    int K = 98173950;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> students = {12075181, 7633431, 85204083, 78881895, 23452055, 78580322, 26197114, 2544808};
    int K = 27;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11650700;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> students = {7662168, 68383436};
    int K = 20;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3802281;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> students = {76018602, 38402482, 54213541, 67384311, 83417493, 11149527, 30143448, 11819362, 55806699, 33887459, 1943995, 12935170, 79580486, 42559377, 54325248, 12334804, 47783513};
    int K = 15;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 47580368;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> students = {4201273, 54592979, 80548129, 62561459, 57253860, 77681556};
    int K = 45;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7485317;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> students = {5327891, 42067711, 57906014, 73366646, 82581985, 16188846, 79224353, 29996815, 79434471, 51186687, 83880441, 23047075, 73553295, 37773158, 32558676, 80034712};
    int K = 47;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18045294;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> students = {13596740, 71917218, 31672457, 87276057, 47648602};
    int K = 9;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 28012342;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> students = {95358653, 28813096, 16235288, 82875934, 29667323, 94101198, 34450937, 1580444, 94843337, 58525357};
    int K = 100;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5364516;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> students = {83350399, 26629351, 41645089};
    int K = 8;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18953105;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> students = {92937305, 45737810, 30368965, 62409514};
    int K = 74;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3127752;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> students = {92530482, 89117919, 69312049, 48455467, 20125676};
    int K = 79;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4044831;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> students = {97354537, 67505709, 31291042, 33220132, 1841456, 309233, 75595803, 83207936, 61735957, 24471428};
    int K = 42;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11346030;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> students = {50914016};
    int K = 15;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3394268;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> students = {75871099};
    int K = 25;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3034844;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> students = {89111803, 95846434, 90222123, 38884624, 51729427, 32762587, 10204335, 30081516, 69101650};
    int K = 80;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6349307;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> students = {54628361, 83735725, 81975630, 18479212, 66388927, 78102453, 76451384, 51674406, 33616046, 75842979, 22785536};
    int K = 9;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 71520074;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> students = {97192433, 27981386, 90084610, 32609870, 27949653, 69109120, 17889669, 17871556, 96576136, 80743659, 22856842, 99420071, 92386230, 50587402, 49538391, 33672353, 99294532};
    int K = 76;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13233736;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> students = {27910687, 64215308, 62307234, 78261882, 73528925, 66962730, 35519214, 88052764, 21312169, 9379571};
    int K = 80;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6593132;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> students = {5906324, 95425899, 94455271, 25436019, 48606522, 31088309, 75975242, 75187559, 67691114, 33224009, 65721, 71946806, 3750578};
    int K = 100;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6287594;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> students = {54756990, 23808314, 60756066, 89283240};
    int K = 55;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4156448;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> students = {97423109};
    int K = 21;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4639196;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> students = {91199918, 93034415, 27957602, 23417000, 76620810, 50431192, 73030529, 36865974, 99430611, 93919751, 47183145, 65196618, 50190591, 53440494, 99140006, 97698922, 85186306, 14727487};
    int K = 30;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 39289046;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> students = {7860768, 7483080, 93589624, 30394116, 42931139, 95096069, 21676617, 90726838, 89739818};
    int K = 25;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 19179923;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> students = {99215425, 78988516, 89007886, 83013562, 85427076, 72726495, 70138521, 3611339};
    int K = 57;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10212787;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> students = {3853390, 88643619, 99244945, 23037544, 54502231, 4879071, 94426566, 22210775, 65429062};
    int K = 51;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8945632;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> students = {29698546, 80869509, 29629312, 88647099, 56297887, 46759815, 28234698, 90003749, 53763534};
    int K = 19;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 26521271;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> students = {99510075, 60922631, 23636531, 37838539, 67060117, 53028981, 63217436, 98122651, 3428358, 91356948, 44759264, 82173838, 5457352, 67007801, 96666040, 78639614};
    int K = 67;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14519794;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> students = {29376803, 60981732};
    int K = 70;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1290837;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> students = {56805909, 44674262, 90099270, 77859853, 30313206, 36451932, 9389179, 40528528, 82423908, 66505345, 85655584, 57600375, 25271900, 58679821, 1708050};
    int K = 67;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11402495;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> students = {86019804, 59731940, 30381310, 24308011, 79410897, 81055670, 37650638, 53131105, 5606752, 16572513, 93794808, 6359525, 7588215, 72605153, 69688270, 7546268, 4987256, 9442617, 21141462, 22727915};
    int K = 86;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9183142;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> students = {31804972, 68775395, 76995520, 97507459, 43318978, 30398851, 87071936, 63275274, 27422920, 1190550, 98327126, 89875209, 23588049, 43093629, 72733234, 98954861};
    int K = 13;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 73410305;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> students = {76269934, 83444993, 22481049, 12941930, 44516270, 78560363, 63337534, 29945181, 37433267};
    int K = 27;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16627057;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> students = {80666553, 89761255, 52577313, 24182757, 23628787, 49491027, 62589431, 28203683, 57170723, 11028072, 91276304, 1675163, 43333976, 91954333, 42630617, 8946745};
    int K = 25;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30364670;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> students = {89110666, 83618895, 78255918, 16989346, 1387414, 23207744, 68499773, 17527685, 27176890, 96216842, 59617998, 66295859, 40450019, 5100427, 82767815};
    int K = 32;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 23631978;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> students = {33075389, 58369335, 35062331, 68066118, 65336660, 3944478, 61231475, 40933442};
    int K = 16;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22876202;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> students = {99012944, 79560920, 10572376, 69079184, 10502672, 44867277, 72022316, 68538712, 45562333, 84687085, 31021364, 6255016, 72525010, 33130045, 37399043, 10100982, 75093597};
    int K = 14;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 60709349;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> students = {96931648, 73418354, 78980176, 21723914, 44749494, 63375250, 57715683, 82885908, 72815866, 32226853, 58274420, 93542678, 3686152, 1132674, 28241826, 77104232};
    int K = 36;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24633476;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> students = {54304983, 71262131, 7189155, 51789789, 37106181, 31493661, 9310982, 89242969, 73824400, 29443707, 37011470, 93396458, 33839307, 16231342};
    int K = 73;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8704748;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> students = {18398787, 55200812, 35299075, 35757357, 53902476, 41234166, 18154575, 28611788, 80230063, 14465560, 5419610, 28777853, 60484655, 45084810, 42770951, 17110071, 56587827, 12890504, 15092047, 3042571};
    int K = 87;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7684087;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> students = {71687518, 39939857, 1991449, 61151014, 27208019, 8642225, 7407322};
    int K = 68;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3206286;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> students = {78754813, 62283046, 79413900, 8735409, 43264394, 4549708, 15107815, 20139391, 36228142, 59731943, 737940, 93094858};
    int K = 86;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5837691;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> students = {100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000};
    int K = 1;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> students = {27338732, 3929259, 23381005, 23311264, 58171891, 96399788, 74827905, 43561630, 48101177, 84356140, 73088949, 83287255, 65315670, 12950574, 2952904, 73769008, 12010930, 42704970, 58281905, 74261986};
    int K = 4;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 245500736;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> students = {9746676, 55112099, 705782, 83293358, 18353458, 15810038, 26621997, 9795086, 97573364};
    int K = 4;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 79252965;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> students = {77247630, 22294916, 64849821, 14586950, 21442518, 6355790};
    int K = 9;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22975292;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> students = {46275199, 22069905, 58890121, 41480801, 11060614, 14951126, 46611336, 84727664};
    int K = 4;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 81516692;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> students = {94292536, 36880088, 97536158, 59915486, 45548531, 47828456, 60018921, 36892371, 8690383, 53880294, 87120103, 87673057, 82907827, 72649128, 47767924};
    int K = 7;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 131371609;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> students = {77336450, 34638287, 81105407, 75309472, 39008448, 425037, 38860190, 33098234, 3691882, 87081314, 26576557, 79511180, 27461078};
    int K = 2;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 302051768;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> students = {82507177, 27160696, 59964215, 12409497, 32294710, 17006582, 99133101, 98568010, 39892731, 92029677, 21846495, 74829741, 90016737, 88175598, 31736603, 42033266, 20851656, 95845168, 87403211, 32391518};
    int K = 8;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 143262049;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> students = {94843131, 52726453, 85927326, 53250611, 44437706, 74902291};
    int K = 7;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 58012503;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> students = {90401800, 86131295, 88061600, 55240328, 65226618, 97861175, 35235819, 61630175, 19402634, 26113412, 77328210, 83595189, 77587767};
    int K = 10;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 86381603;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> students = {74673212, 6389893, 12971411, 57088230, 65265808, 96061617, 73930887, 24753323, 34848169, 68659268, 53915962, 10708328, 76468851, 38596822, 88951281, 8576397, 3273843, 68029502, 94492456};
    int K = 5;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 191531052;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> students = {79130611, 1963173, 9679179, 35077430, 8079135, 54462918, 5396973, 14363975, 11454523, 67581015, 65972290, 27060791, 64738936, 56662755, 99381823, 42982899, 24756214, 55408665, 21496085, 46134532};
    int K = 63130687;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> students = {76685034, 67422505, 16227862, 51512721, 52848969, 60785546, 38542921, 71548604, 81014529, 45227951, 91131897, 33534750, 43326895, 22843612, 44434262, 51943589, 85857, 48639184, 25714599, 35458096};
    int K = 86414672;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> students = {95354949, 24773377, 22217137, 90116700, 93358236, 43044821, 25269699, 59032585, 57677242, 61305234, 16611744, 75705440, 79362344, 85958461, 59838765, 13936444, 26025246, 8367255, 81469363, 21002439};
    int K = 34744789;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> students = {78248526, 99669982, 48294851, 66466604, 29066049, 89493875, 44453232, 98589969, 94110280, 30337769, 87154376, 89007585, 1943891, 38027113, 10377608, 25160529, 96379690, 47142419, 30916552, 56125209};
    int K = 39350934;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> students = {74554261, 68059420, 43412046, 75682194, 91672466, 1649857, 38071948, 95316764, 32952361, 13395137, 57853730, 11672689, 53578095, 96718673, 76790725, 64024933, 15233214, 21190729, 4010466, 7358208};
    int K = 59184052;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> students = {98124459, 79817584, 30873096, 42744580, 54333014, 55878474, 46699167, 57891666, 67470901, 81747863, 7040242, 62801983, 76660915, 95856273, 76078547, 43673183, 52808861, 21772606, 68616611, 57553133};
    int K = 98864926;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> students = {6826690, 88353437, 94592715, 33606960, 35755045, 84473153, 32528752, 4288494, 15406350, 82503534, 59881530, 86839009, 39362466, 45019790, 62310715, 22098435, 65143717, 92125992, 99843428, 36070039};
    int K = 79899701;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> students = {32625977, 87048887, 66520564, 37230752, 54775824, 99846055, 79888612, 32051896, 88289945, 50319626, 90743986, 55182882, 75782167, 29146198, 5517096, 60965087, 50763490, 57614288, 24484345, 77337657};
    int K = 57245774;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> students = {57732642, 70009407, 36640583, 18732156, 78672067, 72478619, 99241431, 91354687, 58215001, 92133245, 50018997, 75485879, 89243877, 35574225, 44025364, 28891512, 80618673, 57339787, 5394696, 15230778};
    int K = 72729154;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> students = {55744189, 11334418, 2475759, 13825872, 62720522, 2271342, 24566968, 79322948, 37503485, 47239016, 78149856, 50103514, 81269804, 24410549, 73044477, 59420427, 4936627, 66094068, 58231604, 84119717};
    int K = 23945555;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> students = {26747275, 7354814, 60414464, 87145592, 5766496, 10390214, 68675814, 31109929, 78412336, 12613877, 37036511, 55902842, 84705605, 21162732, 8535824, 60024398, 53074157, 21975920, 6544252, 33091805};
    int K = 20969815;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> students = {47237624, 18094498, 13394760, 43934153, 70297178, 45821836, 61518228, 52176155, 21627695, 97447983, 60068140, 26564690, 77452221, 35731036, 81811325, 67768026, 7833315, 7881290, 90189801, 12353755};
    int K = 39487148;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> students = {17059537, 25347195, 92698182, 52846103, 1482021, 98499748, 35208598, 57131787, 17647842, 85398151, 17147997, 98703765, 55265435, 56205794, 25385358, 5866952, 54127006, 34612380, 23126596, 59513112};
    int K = 36067596;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> students = {21147506, 47660617, 22162108, 73695926, 60743259, 44617400, 70759105, 22947774, 75292042, 96825837, 22828960, 7331487, 37271824, 41295911, 95107994, 89225680, 90635651, 4505707, 18649049, 77310686};
    int K = 14642253;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> students = {80642881, 99316021, 64555201, 59107585, 90753643, 4852129, 87065215, 52660470, 59715667, 44594211, 13856614, 61841040, 47567654, 33120873, 95430401, 86668040, 11654245, 91870714, 49112732, 37125221};
    int K = 60403916;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> students = {60119099, 87898987, 97895982, 14054430, 92610792, 62631209, 26358480, 83884537, 38871737, 8945136, 58992502, 7931572, 59050162, 28725018, 83897567, 83249447, 41350947, 9477667, 11376445, 77575641};
    int K = 43130932;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> students = {31526784, 29780492, 57040850, 7789129, 6780815, 86904131, 83174007, 73202250, 24933258, 42310433, 78123121, 45525118, 42201541, 9897596, 94913318, 12700725, 52991276, 67840062, 23970484, 62871307};
    int K = 33293871;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> students = {94600770, 45957561, 18022090, 73905097, 98898285, 6461390, 89093226, 81192739, 55564571, 81074359, 70698494, 69269479, 39814729, 17271639, 50951159, 92327768, 67361551, 9793959, 74984796, 68960718};
    int K = 35410422;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> students = {83577008, 33119057, 91664085, 46185393, 3502822, 44662894, 23527863, 66568748, 31075894, 45424436, 34022287, 72854447, 88714561, 26482972, 98351474, 89896307, 75873682, 80263560, 75642057, 29445503};
    int K = 80312104;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> students = {84058814, 92070498, 63419536, 30110953, 34319616, 3200261, 84205461, 44354908, 56573619, 62322229, 80556673, 86976391, 48673183, 6338959, 83498913, 63170348, 20061238, 88185205, 451967, 79788263};
    int K = 4812366;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 232;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> students = {95598564, 60011067, 87460470, 92020001, 87040621, 50058392, 62815131, 60356383, 59776038, 62607966, 51473564, 58532978, 83215267, 63887922, 89197187, 84577884, 96899181, 72087399, 99251675, 85095528};
    int K = 1;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1501963218;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> students = {0};
    int K = 2;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> students = {1000000};
    int K = 2;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> students = {18897414, 33647041, 47323672, 57457500, 7730613, 7808366, 84561186, 1762183, 11622794, 7503578, 80000000, 98332538, 4243143, 64225666, 0, 89508872, 29312246, 86056934, 88263563, 44098921};
    int K = 40000000;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> students = {100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000};
    int K = 1;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> students = {90000003, 90000003, 90000003, 90000000, 90000000, 90000000, 90000000, 90000000, 90000000, 90000000, 90000000, 90000000, 89999999, 89999999, 89999999, 89999999, 89999999, 89999999, 89999999, 90000000};
    int K = 90000000;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> students = {6483, 27595, 4041, 3602};
    int K = 24351;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> students = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 20;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> students = {5};
    int K = 2;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> students = {1, 2, 2, 2, 2, 3};
    int K = 2;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> students = {1, 0, 6, 2, 4, 2, 5, 4};
    int K = 6;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> students = {97902826, 58295558, 79455562, 63552176, 7026878, 24316742, 10756956, 8776147, 54848327, 95797097, 98714163, 10872517, 66163223, 90894062, 7172436, 41202930, 4432172, 12014353, 60797620, 43201414};
    int K = 50194843;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> students = {99127477, 1670676, 38490341, 59105987, 26155560, 16698399, 99582635, 13572160, 80525715, 37540803, 13883291, 24287132, 64851011, 62530283, 32866054, 92601661, 13401985, 49022064, 48452098, 95381834};
    int K = 10000;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 96975;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> students = {69027636, 43936297, 95587169, 70448195, 21494801, 56579678, 74102506, 5160125, 76638033, 37453217, 98723684, 38719679, 82516014, 11699166, 24040075, 20204061, 75940081, 82691705, 73743305, 62595786};
    int K = 13193116;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> students = {1, 49, 100, 49, 1};
    int K = 100;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> students = {98239927, 9389239, 38605225, 93938964, 50433785, 74635422, 31189650, 46674190, 95399031, 82129614, 65457373, 85897135, 4779307, 23880750, 46004618, 94376454, 15344520, 6310812, 50701699, 24783509};
    int K = 1234567;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 841;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> students = {1, 2, 6, 3};
    int K = 6;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> students = {1, 1, 4, 1, 1};
    int K = 4;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
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
    vector<int> students = {1, 1, 4, 2};
    int K = 4;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> students = {1, 2, 2, 1};
    int K = 2;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> students = {1, 2, 0, 3};
    int K = 6;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> students = {1261, 1195, 2525, 1264, 2260, 202, 2116, 2030};
    int K = 1000;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> students = {1, 1, 2, 1, 1};
    int K = 3;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> students = {3, 1, 3};
    int K = 7;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> students = {2, 9, 1, 2};
    int K = 7;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> students = {5, 0, 10, 0, 5};
    int K = 10;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> students = {2, 4, 0};
    int K = 5;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> students = {100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000};
    int K = 9129;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 219083;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> students = {6483, 27595, 4041, 3602};
    int K = 24350;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
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
    vector<int> students = {1};
    int K = 1;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> students = {87449635, 44905194, 94282549, 3122535, 59711641, 59052475, 19589143, 58006371, 92245555, 75949014, 94111769, 7776117, 45808715, 66051813, 16595799, 67368785, 70474685, 20356262, 18428114, 25563345};
    int K = 64030756;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> students = {1, 5, 5, 1};
    int K = 4;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
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
    vector<int> students = {3, 4, 4, 5};
    int K = 4;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> students = {4, 3, 3, 3, 3, 2};
    int K = 3;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> students = {51945800, 91434238, 7542937, 15582014, 33873585, 62067400, 7771491, 21368307, 59792528, 4525225, 44982500, 69914433, 40668030, 93667963, 72699646, 27789899, 71195626, 85789175, 46562770, 27148926};
    int K = 527;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1776704;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> students = {1, 1, 1};
    int K = 10;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> students = {42, 18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437};
    int K = 3;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 96043;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> students = {864195, 927194, 996493, 7, 14, 21, 1002797, 939797, 870496, 35, 42, 49, 6913582, 6907282, 6850582, 56, 63, 6837984, 6781279, 70};
    int K = 7;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5698863;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> students = {4289384, 46930887, 81692778, 14636916, 57747794, 24238336, 19885387, 49760493, 96516650, 89641422, 25202363, 50490028, 83368691, 2520060, 44897764, 67513927, 65180541, 40383427, 4089173, 3455737};
    int K = 4;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 218110440;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> students = {4, 12, 3, 1};
    int K = 10;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
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
    vector<int> students = {3, 7, 7, 7, 3};
    int K = 7;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> students = {9, 10, 10, 10, 10, 1};
    int K = 10;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> students = {3, 0, 4, 0, 0, 6, 0, 1, 0, 0, 0};
    int K = 7;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
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
    vector<int> students = {9, 2, 0, 3, 16, 13, 17};
    int K = 3;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> students = {1, 6, 0, 1};
    int K = 4;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> students = {1, 0, 6, 1};
    int K = 4;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> students = {100000000, 123456, 1, 24, 6546, 54, 6, 54, 76, 546, 56, 4, 565, 46, 54, 6, 547};
    int K = 666666;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> students = {193, 2195, 297, 2416, 1286, 1105, 488, 1282, 455, 1734, 114, 2701, 1316};
    int K = 1000;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> students = {15, 0, 13, 4, 29, 6, 2};
    int K = 7;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> students = {309, 616, 935, 451, 600, 249, 519, 556, 798, 303, 224, 8, 844, 609, 989, 702, 195, 485, 93, 343};
    int K = 100;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> students = {3};
    int K = 3;
    TheJediTest* pObj = new TheJediTest();
    clock_t start = clock();
    int result = pObj->minimumSupervisors(students, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22937177&rd=15489&pm=12265
********************************************************************************
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <iostream> 
#include <vector> 
#include <queue> 
#include <algorithm> 
 
using namespace std ; 
 
class TheJediTest 
{ 
    public : 
      int minimumSupervisors(vector <int> students, int K) 
      { 
        int n = students.size() ; 
        int ans = 0 ; 
        int i ; 
        int pre = 0 ; 
         
        for(i=0;i<n;i++) 
        { 
          if(students[i]>K) pre = 0 ; 
          ans += students[i]/K ; 
          students[i] %= K ; 
          if(students[i]>0) 
          { 
            if(pre!=0) 
            { 
              if(i==n-1) ans++ ; 
              else 
              { 
                int canr = K-students[i] ; 
                ans++ ; 
                students[i+1] -= canr ; 
                if(students[i+1]<0) students[i+1] = 0 ; 
                pre = 0 ; 
              }               
            } 
            else 
            { 
              if(i==n-1) ans++ ; 
              else 
              { 
                pre = students[i] ; 
                students[i+1] += students[i] ; 
              } 
            } 
          } 
        } 
         
        return ans ; 
      } 
} ;

********************************************************************************
*******************************************************************************/
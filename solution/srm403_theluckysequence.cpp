/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8569
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

class TheLuckySequence {
public:
    int count(vector<int> numbers, int length);
};

int TheLuckySequence::count(vector<int> numbers, int length) {
    int ret;
    return ret;
}


int test0() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = 1;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> numbers = {47, 74, 47};
    int length = 3;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
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
    vector<int> numbers = {100, 4774, 200, 747, 300};
    int length = 47;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
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
    vector<int> numbers = {44, 47, 74, 77};
    int length = 2;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> numbers = {44, 47, 74, 77, 44, 47, 74, 77};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1133762585;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> numbers = {404, 767, 7772444};
    int length = 1;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
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
    vector<int> numbers = {444444444, 777777777, 47474747, 74747474};
    int length = 123456789;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 647595951;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> numbers = {57, 4, 44447, 4, 88, 52, 91, 73};
    int length = 1;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> numbers = {34, 27, 73, 7744777};
    int length = 91;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
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
    vector<int> numbers = {61, 81, 4, 81};
    int length = 63;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> numbers = {747444474, 4, 4, 17, 49, 17, 99};
    int length = 65;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> numbers = {31, 22, 444744774, 47447747, 97, 86};
    int length = 29;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> numbers = {74, 44, 74, 74, 49487, 47444, 44, 74, 74, 44774, 4474, 51536, 44, 444, 27898, 15628, 47, 44390, 74, 47, 777, 52351, 774, 21368, 74, 74, 44};
    int length = 851010;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1228910685;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> numbers = {774, 44, 48020, 26408, 78032, 52104, 51002, 44, 72300, 4774, 41076, 74, 44, 7747, 74, 47777, 9060, 90700, 8331, 13788, 77, 77, 7774, 82990, 444};
    int length = 555692;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 615700799;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> numbers = {4444, 774, 44, 44, 7474, 77, 4747, 44, 77474, 71523, 474, 44, 7747, 44, 47444, 13716, 44, 52014, 44, 53818, 7777, 74, 7444, 44, 77, 2218};
    int length = 118279;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 97751532;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> numbers = {44, 74474, 44, 44, 7744, 4774, 44444, 44, 93255, 47447, 77, 44, 47, 67824, 444, 4774, 747, 77, 7747, 4744, 97581, 44, 77474, 74444, 44, 44, 77, 74, 43824, 3655, 72500, 7744};
    int length = 947098;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 307767899;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> numbers = {15260, 44, 74444, 55300, 4447, 44, 4744, 74, 444, 44744, 47, 444, 44, 40324, 4474, 44, 4774, 47, 74, 47477, 44, 47444, 74, 44, 99460, 92988, 74, 90164, 44, 774, 44744, 47};
    int length = 934275;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1022001211;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> numbers = {7777747, 7744444, 77747474, 477774774, 4444444, 4890852, 7477447, 747474744, 44774474, 597007, 4474777, 47777774, 7444744, 4777744, 777477444, 7744477, 774477444, 4747744, 44474774, 950090227, 7774744, 747477444, 4474747, 47777747, 774777444, 447474744, 7747447, 4777774, 4747444, 40873981, 8670529, 74477747, 7477444, 744447474, 47744774, 7774444, 47777747, 4447774, 7747777, 744447444, 4447447, 4444447, 774474444, 4744444, 4747444, 7447477};
    int length = 967851000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 205040345;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> numbers = {777444777, 777777447, 4747747, 477444744, 474447444, 774777477, 77774777, 47447444, 447777744, 777444774, 477474444, 7777444, 777777444, 4747744, 4474777, 7477444, 77444774, 9856897, 44774444, 44744744, 4747477, 7444744, 774444744, 77744477, 7477447, 447744744, 77777444, 4477744, 7744444, 47444444, 7744747, 7444444, 4447444, 7447447, 4447477, 747747444, 77777747, 777444444, 7747744, 4774477, 7774774, 4777477, 332152311, 47474744, 477474744, 7477447, 74747444, 4447444, 747474444, 4774444};
    int length = 970778792;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 628951462;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> numbers = {4744744, 747447774, 4774444, 7444744, 7444747, 7477444, 74777744, 4747777, 7747444, 7477774, 7447744, 47774444, 777744477, 74447444, 74477774, 816269961, 447474774, 4747444, 7444444, 4444444, 74777747, 4777477, 47477744, 7744444, 7474474, 4474444, 77444444, 4444774, 7774744, 4474744, 7777444, 4774474, 477477477, 44447747, 50890065, 474744474, 7447777, 7656526, 4744474, 7747477, 7777744, 747477774, 4747447, 744477744, 747474444, 7474774, 7444444, 47447474, 444477444, 474777744};
    int length = 930819520;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1048414098;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> numbers = {7444444, 40747177, 47444444, 4477474, 447747774, 7777474, 833807943, 4444744, 7444477, 4474744, 7444474, 4777774, 47747774, 7774744, 7474477, 47747777, 7747444, 777477444, 4774744, 4747747, 4747447, 44477777, 7774474, 7747747, 74744744, 7474474, 7447447, 444447474, 4774474, 4777777, 734342289, 774774744, 4774444, 4747744, 744474474, 477447444, 74774444, 7777474, 4447744, 44477744, 7474744, 7477474, 7477744, 744447774, 427663201, 744474444, 4747777, 7477444};
    int length = 940954880;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1201978988;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> numbers = {744444444, 47444444, 444444444, 474645249, 44774747, 4774447, 774444444, 18090541, 19836685, 7744444, 74474777, 47474744, 7747447, 44774444, 444474447, 4774744, 744477744, 4744777, 4444444, 4774774, 23608621, 4474477, 77477744, 4774474, 44747444, 20574379, 7447444, 47744744, 4747474, 444444444, 447474474, 7744477, 4477444, 4774744, 474447447, 7477774, 4447447, 4444444, 7774477, 7774744};
    int length = 916273168;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1196284852;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> numbers = {4, 336971125, 44444, 4444444, 391749388, 4890852, 35766291, 74, 444744774, 47447747, 4474777, 326051437, 774, 118341523, 447774, 37215529, 7774, 168544291, 77474447, 44, 82426873, 4, 194041605, 706221269, 69909135, 474744744, 474774444, 21417563, 477774, 77444444, 7, 80835681, 436291073, 474744, 106923811, 7, 7444, 4, 247776868, 480572137, 222071041, 36629217, 7777744, 549646417, 744774, 119255907, 44774, 7774444, 150378796, 137583463};
    int length = 267851000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 365452599;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> numbers = {33763105, 700148239, 4444477, 7, 101289133, 774444, 54363401, 7747474, 564329608, 4447744, 131182390, 250532866, 74, 248711871, 851267489, 679854070, 304123425, 8980027, 442118270, 625828105, 77474774, 226140876, 4777744, 70778793, 544418701, 81507655, 7, 477444744, 209071424, 74, 257244835, 4476636, 444444444, 455546031, 398713617, 320516971, 444, 777744, 70953719, 105043116, 625352806, 9856897, 38371241, 119711629, 4444, 661662373, 1993265, 747774, 15405770, 4747744};
    int length = 701621398;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 129976840;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> numbers = {428097499, 67270876, 179722713, 725063961, 7747, 7774, 7477477, 331592376, 10440641, 47744, 4, 774, 163781818, 455212561, 444585961, 4, 4, 258076799, 4444, 4, 108803556, 13772401, 4, 29386281, 44985669, 7747474, 314309232, 452452851, 324308881, 4, 74447444, 44477, 415289261, 4, 272651156, 4447444, 7, 113881783, 4444, 700817710, 167931713, 77474774, 237757033, 278514986, 589302568, 4477, 777477, 7, 204442987, 4774};
    int length = 203093155;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 995343676;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> numbers = {744444744, 77, 53073945, 7747744, 618600041, 327724189, 47, 4777477, 47477744, 4, 7474474, 4, 44, 517142305, 477, 850328911, 4477774, 50869922, 312840401, 4, 4774, 52924537, 477477477, 593009368, 7474, 18011097, 774474, 77477, 4744474, 7747477, 102089008, 4, 20246117, 94271689, 581195911, 7744744, 252522538, 744477744, 66921358, 798876863, 73937521, 4477444, 74474744, 631025356, 214125305, 47447474, 444, 777744, 4444444, 4};
    int length = 103460866;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 743710554;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> numbers = {208388617, 444, 552623485, 7619241, 70216903, 89268145, 598343236, 534786447, 409965685, 4, 7, 58960009, 747474, 775563450, 23762773, 562851681, 646472227, 4, 261690971, 74444, 4, 3647585, 102716593, 4744, 474444, 734342289, 7358741, 188986852, 481902675, 303356989, 573882183, 603789257, 198735447, 4444, 21077233, 47, 7444, 203387815, 4474774, 427663201, 7, 375261697, 7496281, 129541126, 83826055, 7474744, 625123947, 357743629, 7447, 75299326};
    int length = 160158016;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 680479682;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> numbers = {4, 44, 7, 4, 4, 744, 7, 777, 774, 597007, 774, 4, 4, 4, 170427799, 744, 4, 744, 444, 950090227, 774, 44, 7, 4, 474, 7, 44, 4, 37379061, 40873981, 4, 80835681, 774, 653352031, 74, 4, 47, 4, 7, 444, 7, 36629217, 4, 444, 4, 44, 4, 744, 7, 137583463};
    int length = 267851001;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 370974721;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> numbers = {4, 44, 4, 444, 398713617, 44, 211951915, 444, 44, 105043116, 444, 4, 444, 4, 7, 4, 74, 469069513, 44, 44, 7, 4, 744, 77, 7, 744, 44, 4, 4, 44, 7, 4, 4, 7, 7, 444, 47, 444, 4, 7, 4, 7, 26304961, 44, 744, 7, 44, 4, 444, 4};
    int length = 493186914;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 223116073;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> numbers = {4, 774, 4, 4, 7, 4, 44, 85115161, 4, 44, 4, 47, 4, 77, 744, 4, 774, 4, 4, 4, 47, 7, 44, 4, 4, 4, 44, 4, 4, 4, 4, 4, 477, 47, 50890065, 293743777, 474, 77, 4, 7, 4, 53073945, 444, 77, 474, 26998479, 7, 447, 444, 7};
    int length = 630819521;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 829168774;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> numbers = {4, 4, 44, 4, 774, 4, 209803657, 4, 7, 4, 4, 4, 74, 4, 7, 77, 4, 444, 4, 7, 7, 77, 4, 7, 44, 4, 7, 474, 4, 7, 3647585, 744, 4, 4, 474, 444, 44, 4, 4, 44, 4, 4, 4, 774, 51170226, 444, 7, 4, 4, 7};
    int length = 769898601;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 621868382;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> numbers = {4, 4, 18090541, 4, 4, 17947452, 77, 46933264, 447, 4, 744, 7, 4, 4, 548816939, 7, 44, 4, 44, 369667956, 4, 44, 4, 444, 474, 7, 4, 4, 447, 4, 7, 4, 7, 4, 747, 259135605, 47, 4, 4, 61137217, 4, 4, 77, 4, 44, 4, 4, 477, 444, 77};
    int length = 578790761;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 805866966;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> numbers = {47774474, 444444444, 477477747, 44747744, 774747474, 74747744, 44777447, 474744777, 447744774, 47747744, 77474774, 74747444, 444744474, 47747444, 74747744, 77477477, 77774744, 47477444, 74474747, 47777747, 774777444, 47474744, 47747447, 774777774, 44747444, 44774774, 77777744, 77477774, 444744444, 74774444, 44474474, 44744444, 74744777, 77444744, 77477474, 44774747, 44444774, 77774747, 44477474, 44444444, 77774747, 47444774, 474774744, 474744474, 474444444, 47747474, 77744774, 447744747, 44747447, 74744744};
    int length = 967851001;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 538998343;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> numbers = {474777444, 74474444, 77774474, 77744474, 77444774, 77477477, 77774444, 74444747, 47747444, 74447447, 777744444, 44744744, 74747774, 447774444, 747777444, 47747777, 74477744, 77744444, 74447474, 74474474, 444447477, 74444444, 74777777, 774477744, 444444444, 77774447, 777777747, 44477774, 47477477, 477744774, 47744774, 447777774, 77444444, 74447744, 474777474, 774774444, 44777444, 77744744, 77774777, 47747474, 74444447, 47477444, 47774444, 774444444, 747474744, 474447444, 47477477, 77744444, 77474744, 47744744};
    int length = 969069513;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 950745293;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> numbers = {44774474, 477447477, 47744744, 444447444, 47474774, 44747444, 447444444, 44444444, 74777747, 44777477, 47477744, 777744444, 47474474, 44474444, 777444444, 44444774, 77774744, 44474744, 47777444, 444774474, 477477477, 44447747, 44747474, 44777744, 744777747, 47447444, 444774774, 74744744, 47747444, 477747747, 44774744, 44477444, 74474744, 44774477, 447447477, 47477744, 77744774, 74747444, 74444474, 47444774, 44447774, 47444477, 44447747, 474447444, 74477477, 44744474, 74777744, 47744444, 77447774, 44474744};
    int length = 916399813;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 840547984;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> numbers = {77747444, 77477444, 74774744, 74747747, 444747447, 44477777, 47774474, 477747747, 74744744, 77474474, 77447447, 44447474, 74774474, 774777777, 47474474, 77744444, 74447744, 44477444, 74444744, 44777744, 74477777, 47477744, 77744444, 47477474, 74477477, 44444744, 47747774, 44477747, 77777774, 474477474, 44477444, 447444477, 44444444, 77447747, 47444774, 474447447, 74774744, 47744444, 47477744, 47444444, 77777747, 74447774, 74747477, 47447477, 47477474, 74444444, 44747774, 77444444, 74744444, 77477444};
    int length = 981902675;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 613539962;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> numbers = {44444474, 74774477, 47474774, 74444777, 44444744, 47447444, 474774444, 447477444, 74447774, 47747774, 44747777, 474444444, 777774744, 47744744, 477777474, 47744447, 47447774, 474447744, 77774774, 44774747, 744744774, 47777744, 77477474, 47444747, 474744774, 47774444, 474447747, 44744444, 47774474, 44774444, 44777744, 774747747, 747774747, 44744477, 77744744, 74474744, 77444744, 74747477, 74747444, 44744744, 44774744, 44777777, 44474444, 47474777, 47477474, 744447444, 747447444, 77474774, 47774447, 77747774};
    int length = 942645708;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 264447746;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> numbers = {447447774, 7774, 47447774, 474477474, 44444474, 77747, 4744474, 477747474, 744447474, 777444, 447777444, 474747477, 747747, 774777747, 747444744, 747747474, 744474774, 474774474, 477747447, 4744444, 4777, 744444474, 744747, 774477447, 774444474, 744477777, 474744777, 44474447, 477447474, 477777477, 74774444, 44444477, 747747774, 4774747, 747744477, 474444477, 44777744, 774774, 74447747, 444744444, 477444744, 44744444, 47444447, 474777474, 77477477, 747447777, 477474774, 744777, 447774744, 7747777};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 734437630;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> numbers = {69, 47, 74, 477, 474, 744, 744, 747, 4774, 4747, 7477, 7474, 44744, 44747, 4723, 74444, 74447, 474744, 447747, 744744, 744747, 4747444, 4474747, 7444744};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 383818507;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> numbers = {44, 444, 4444, 44444, 444444, 4444444, 44444444, 44444447, 4444447, 44444474, 44444477, 444447, 4444474, 44444744, 44444747, 4444477, 44444774, 44444777, 44447, 444474, 4444744, 44447444, 44447447, 4444747, 44447474, 44447477, 777447, 7774474, 7774477, 77747, 777474, 7774744, 7774747, 777477, 7774774, 7774777, 7777, 77774, 777744, 7777444, 7777447, 777747, 7777474, 7777477, 77777, 777774, 7777744, 7777747, 777777, 777777777};
    int length = 999999999;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 452276448;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> numbers = {44, 444, 4444, 4444, 44444, 444444, 44444444, 777, 77, 77, 777, 7777, 47, 74, 447, 774, 477, 744};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 591860066;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> numbers = {44, 47, 74, 77};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1133762585;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> numbers = {4, 4, 44, 44, 44, 47, 47, 47, 47, 777, 777, 777, 77, 74, 74, 7474};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1015983515;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> numbers = {747, 777, 747, 77, 44, 7777, 47474747, 44, 477, 4747, 4777, 4747, 477, 444, 47777, 447474747, 744, 7477};
    int length = 999999999;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1232523576;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> numbers = {7, 44, 47, 74, 77, 744, 747, 774, 777, 444, 447, 474, 477, 4744, 4747, 4774, 4777, 4444, 4447, 4474, 4477, 7744, 7747, 7774, 7777, 7444, 7447, 7474, 7477, 44744, 44747, 44774, 44777, 44444, 44447, 44474, 44477, 47744, 47747, 47774, 47777, 47444, 47447, 47474, 47477, 747444, 747447, 747474, 7547477};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1104950231;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> numbers = {74747, 74774, 74777, 77444, 77447, 77474, 77477, 77744, 77747, 77774, 77777, 444444, 444447, 444474, 444477, 444744, 444747, 444774, 444777, 447444, 447447, 447474, 447477, 447744, 447747, 447774, 447777, 474444, 474447, 474474, 474477, 474744, 474747, 474774, 474777, 477444, 477447, 477474, 477477, 477744, 477747, 477774, 477777, 744444, 744447, 744474, 744477, 744744, 744747, 744774};
    int length = 987987987;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1160589712;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> numbers = {44, 444, 47, 447, 4447, 74, 77, 777};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 124126225;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> numbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777, 4444, 4447, 4474, 4477, 4744, 4747, 4774, 4777, 7444, 7447, 7474, 7477, 7744, 7747, 7774, 7777};
    int length = 1000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 558490175;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> numbers = {47, 447, 74774, 447, 447, 774, 447, 44447, 77747474, 44474747, 4444444, 477777, 477777, 44444, 4444, 44444, 444444, 47, 4447, 7474747, 4747474, 44474747, 74747474, 44444};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 726551476;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> numbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777, 4444, 4447, 4474, 4477, 4744, 4747, 4774, 4777, 7444, 7447, 7474, 7477, 7744, 7747, 7774, 7777, 44444, 44447, 44474, 44477, 44744, 44747, 44774, 44777, 47444, 47447, 47474, 47477, 47744, 47747, 47774, 47777, 74444, 74447, 74474, 74477};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 195800181;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> numbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777, 4444, 4447, 4474, 4477, 4744, 4747, 4774, 4777, 7444, 7447, 7474, 7477, 7744, 7747, 7774, 7777, 47444, 47447, 47474, 47477, 47744, 47747, 47774, 47777, 747444, 747447, 747474, 747477, 747744, 747747, 747774, 747777, 4747744, 7747747, 4747774, 7747777};
    int length = 987654321;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1130848537;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> numbers = {444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444, 444444444};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> numbers = {44, 47, 74, 77, 777, 447, 4447};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 563579533;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> numbers = {474447447, 444774477, 744474744, 774747444, 747774777, 774477447, 474477747, 744474744, 744474747, 477747444, 777777447, 777777777, 447747777, 744744447, 744774477, 777744477, 444744447, 747777744, 447474477, 474447774, 774774474, 477774477, 744447744, 477747744, 777474774, 477774447, 774744477, 777774744, 747474777, 474447447, 777744474, 447447447, 747447474, 447477747, 447444777, 744477777, 747447774, 774747774, 447744474, 477777777, 774447744, 477444444, 447447474, 444447744, 477447774, 744477744, 774747474, 474444774, 777774777, 744774744};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1104950231;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> numbers = {47, 44447, 777774, 447, 774, 777, 77774, 7447, 7, 777777, 77777421, 348, 4007, 444, 44, 4, 44, 444, 777, 744, 44447, 777774, 777774, 777777, 4444444, 444444, 444444, 4444444, 444444};
    int length = 888888888;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1106830410;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> numbers = {77, 74, 47, 47, 4, 777, 447, 447, 4, 47, 7, 74, 7664134, 744, 47, 777, 4, 7, 4, 444, 7, 444, 44, 7, 4985867, 4, 74, 744, 47, 7, 474, 457717, 7, 74, 747, 44, 7, 7, 7181494, 774, 774, 44, 4877644, 4758567, 777, 777, 7761214, 774, 4661437, 7};
    int length = 268435455;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1111682066;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> numbers = {47, 74, 44, 77, 747, 777, 444, 474, 447, 774, 7777, 4747, 4444, 4477, 7744, 7474, 7774, 7747, 7477, 4777, 4447, 4474, 4744, 7444, 77777, 77774, 777477, 74747474};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 495032287;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> numbers = {44, 47, 74, 77, 444, 447, 744, 747, 474, 477, 774, 777, 4444, 4447, 7444, 7447, 4744, 4747, 7744, 7747, 4444, 4447, 7444, 7447, 4474, 4477, 7474, 7477, 444, 447, 744, 747, 474, 477, 774, 777, 447744, 44447, 74144, 7447, 47744, 4747, 7744, 7747, 4444, 4447, 7444, 7447, 4474, 477477};
    int length = 845645786;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 810892038;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> numbers = {4, 7, 47, 74};
    int length = 999999999;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1184165238;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> numbers = {447444474, 7447477, 47777447, 444747774, 7747744, 74747747, 7774447, 477744, 4477774, 74777747, 74744, 744747444, 777774, 44477774, 77447744, 7444774, 477474747, 747444774, 777447444, 447, 4447474, 474774447, 747777444, 744477747, 774777747, 474777, 777744447, 477777747, 77477744, 477777744, 477447774, 444774, 447774447, 444444747, 44744, 47747477, 447777, 747474774, 7477, 744774774, 4474744, 744474477, 444477474, 744444477, 7447444, 477447447, 777774777, 447777744, 777447, 447447};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 195800181;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> numbers = {4, 7, 44, 77, 47, 74, 747, 4747, 74747, 47474, 77777, 444444, 44447, 7777, 777444, 747474, 74744, 77774444, 4477447, 47474747, 77744747, 747447, 777, 44777, 7474747, 74444, 444777, 747474, 77474747, 5435346, 644747, 45647, 746547, 777774, 444774, 74744, 747474, 753457, 754357, 77444477, 774444, 444777, 77474747, 74747, 74744, 77447, 74777, 7474, 44777, 4747474};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 970668075;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> numbers = {4, 44, 444, 4444, 44};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 290004723;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> numbers = {47, 74, 47, 477, 744, 47, 744, 77744, 447447, 4477447, 47474, 7474};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 796039002;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> numbers = {47, 47, 474, 474, 4774, 47774, 477774, 74, 774, 7774, 77774, 44, 444, 4444, 7, 77, 777, 7777, 7777, 7777, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = 99999999;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 806684079;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> numbers = {44, 74, 4774, 724, 477774, 4447, 4, 77474, 47474, 47474744, 7774747, 4747444, 7774};
    int length = 20000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 319589279;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> numbers = {4};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> numbers = {4444444, 77777, 7, 4, 74747, 777444, 4447474, 4447, 7774, 5515, 1515151, 444, 74747, 444747, 774};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1004587930;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> numbers = {44, 444, 474, 47, 47477, 74, 74, 74, 744, 774, 7444, 7474, 7774, 77, 777, 7777};
    int length = 134326987;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 869885584;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> numbers = {417};
    int length = 1;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> numbers = {747, 7447, 74447, 7444, 477, 444, 44444, 74444, 7474747, 4747, 47474, 47474, 4747};
    int length = 100012311;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 459585480;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> numbers = {4, 7, 4, 7, 4, 7, 4, 7, 4, 7, 4, 7, 47, 74, 447, 777, 744, 747, 474};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 785181056;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> numbers = {44, 47, 74, 77, 447};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 908957237;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> numbers = {44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777, 4444, 4447, 4474, 4477, 4744, 4747, 4774, 4777, 7444, 7447, 7474, 7477, 7744, 7747, 7774, 7777};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 495032287;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> numbers = {44, 47, 74, 77, 144, 404, 1404, 444};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 438353861;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> numbers = {4, 7, 44, 47, 74, 77, 444, 447, 477, 777, 744, 774, 747, 4444, 4447, 7774, 44444, 77777, 7777777};
    int length = 999999999;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1115747269;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> numbers = {777447747, 777447774, 777447777, 777474444, 777474447, 777474474, 777474477, 777474744, 777474747, 777474774, 777474777, 777477444, 777477447, 777477474, 777477477, 777477744, 777477747, 777477774, 777477777, 777744444, 777744447, 777744474, 777744477, 777744744, 777744747, 777744774, 777744777, 777747444, 777747447, 777747474, 777747477, 777747744, 777747747, 777747774, 777747777, 777774444, 777774447, 777774474, 777774477, 777774744, 777774747, 777774774, 777774777, 777777444, 777777447, 777777474, 777777477, 777777744, 777777747, 777777774};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 195800181;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> numbers = {44, 45, 46, 47, 71, 72, 74, 77, 44, 77, 777, 7777, 4444, 444444, 47, 500, 1000000000, 777777777, 444444444, 47474747};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1220581711;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> numbers = {4};
    int length = 999999999;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> numbers = {47, 44, 74, 444774747, 44777444, 744477444};
    int length = 996843912;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 809836400;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> numbers = {447477747, 4744747, 444744, 77474475, 56897, 451784, 457854512};
    int length = 4774474;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> numbers = {47, 44, 77, 74, 4447, 744447, 747474, 74744447, 444747, 4477};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 871000728;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> numbers = {447444447, 77477444, 777777, 47444774, 47474477, 44744444, 77744447, 477477477, 7777774, 477747, 447477777, 77774447, 44444744, 777747477, 74774747, 774447474, 477777474, 47477447, 777444447, 47447747, 4447747, 444774, 7477744, 744447747, 444747774, 74777444, 4477774, 444744444, 74774774, 447477777, 444777474, 444777777, 744447447, 7777, 4447447, 474477, 74477477, 7477747, 774447774, 7744777, 7744447, 447747474, 44447777, 744744777, 74444744, 444747747, 77474447, 747774474, 447774447, 474774447};
    int length = 999999990;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 54920329;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> numbers = {4, 7, 77, 47, 444, 7777777, 4747, 4774, 477, 777, 777, 47, 47, 74, 444444, 4774, 77774, 44444};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1085285666;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> numbers = {47, 47, 47, 74, 777, 774, 447, 737, 7474};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 888162387;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> numbers = {427};
    int length = 1;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
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
    vector<int> numbers = {447447444, 744477774, 444744744, 477774444, 7447444, 777474447, 47747774, 777774747, 747777477, 747777774, 477474, 444477444, 74447444, 474744774, 44477447, 444747477, 7447477, 477474, 74744444, 744444444, 47747777, 44477477, 777774774, 47447447, 747474744, 747474477, 777474477, 44777774, 44444774, 447447777, 47474774, 77747747, 77477777, 774747447, 47447774, 44477474, 444477, 477774447, 774447744, 74447, 444777744, 7444744, 7774747, 7444477, 747774747, 744477744, 4447444, 777744747, 447447447, 74774744};
    int length = 999999991;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 258379996;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> numbers = {47474, 74747, 12345, 44774, 77447, 47474, 74747, 4, 7, 77, 44, 477477474, 4, 4, 4, 4, 4};
    int length = 123456789;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 779563038;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> numbers = {467, 4444474, 44, 47774, 44, 47774, 74, 774, 7774, 77774, 7, 77, 777, 7777, 77777, 777777};
    int length = 555555555;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 681440658;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> numbers = {4, 7, 44, 47, 77, 4444, 7474, 77, 4, 7747, 4, 7, 7, 4};
    int length = 987277478;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1203915595;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> numbers = {4, 44, 444, 4444, 44444, 444444, 4444444, 44444444, 7, 47, 474, 4744, 47444, 474444, 4744444, 47444444, 77, 774, 7744, 77444, 774444, 7744444, 77444444, 77444447, 77444477};
    int length = 977777777;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1138427438;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> numbers = {447477747, 4744747, 444744, 77474475, 56897, 451784, 457854512};
    int length = 477447;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> numbers = {44, 444, 4444, 44444, 444444, 4444444, 44444444, 444444444, 47, 447, 4447, 44447, 444447, 4444447, 44444447, 444444447, 74, 744, 7444, 74444, 744444, 7444444, 74444444, 744444444, 7, 77, 777, 7777, 77777, 777777, 7777777, 77777777, 777777777};
    int length = 1000000000;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 801321634;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> numbers = {4, 47, 447, 477, 44447, 74};
    int length = 999999999;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 274678117;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> numbers = {44, 77, 47, 74};
    int length = 30;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 912915757;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> numbers = {4, 44, 7, 77};
    int length = 30;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 912915757;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> numbers = {4, 4744, 7774, 77474, 7, 4747, 77744, 74774, 74474, 74744, 44444, 44447, 7744, 7747, 47474, 77447, 77444, 444, 447, 4777, 4774, 47, 44, 774, 44474, 74447, 74444, 47444, 7777, 47447, 777, 747, 744, 477, 474, 77, 4477, 47774, 74, 4474, 47744, 7474, 7477, 44774, 4447, 4444, 44744, 7447, 7444, 77774};
    int length = 999999999;
    TheLuckySequence* pObj = new TheLuckySequence();
    clock_t start = clock();
    int result = pObj->count(numbers, length);
    clock_t end = clock();
    delete pObj;
    int expected = 452276448;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22675094&rd=12175&pm=8569
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
#include <stack> 
#include <bitset> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <utility> 
#include <complex> 
#include <sstream> 
#include <iostream> 
#include <iomanip> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <cassert> 
using namespace std;
 
struct TheLuckySequence{
  int count(vector <int> numbers, int length);
};
const long long maxh=1234567891;
typedef long long matrix[2][2];
matrix tmp;
void mul(matrix a,matrix b){
  memset(tmp,0,sizeof(matrix));
  for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
      for(int k=0;k<2;k++)
        (tmp[i][j]+=a[i][k]*b[k][j])%=maxh;
  memcpy(a,tmp,sizeof(matrix));
}
void mpow(matrix a,matrix res,int p){
  if(p==0){
    memset(res,0,sizeof(matrix));
    for(int i=0;i<2;i++)
      res[i][i]=1;
  }else{
    mpow(a,res,p>>1);
    mul(res,res);
    if(p&1)
      mul(res,a);
  }
}
matrix a,b,c;
int TheLuckySequence::count(vector <int> A, int length){
  sort(A.begin(),A.end());
  A.erase(unique(A.begin(),A.end()),A.end());
  memset(a,0,sizeof(matrix));
  for(int i=0;i<A.size();i++){
    ostringstream sout;
    sout<<A[i];
    string s=sout.str();
    bool found=false;
    for(int i=0;i<s.size();i++)
      if(s[i]!='4'&&s[i]!='7')
        found=true;
    if(!found)
      a[s[s.size()-1]=='7'][s[0]=='7']++;
  }
  mpow(a,b,length);
  c[0][0]=c[1][0]=1;
  mul(b,c);
  return (b[0][0]+b[1][0])%maxh;
}
 
 
//Powered by [KawigiEdit] 2.0 modified by pivanof!

********************************************************************************
*******************************************************************************/
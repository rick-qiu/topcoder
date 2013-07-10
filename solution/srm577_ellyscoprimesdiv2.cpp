/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12461
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

class EllysCoprimesDiv2 {
public:
    int getCount(vector<int> numbers);
};

int EllysCoprimesDiv2::getCount(vector<int> numbers) {
    int ret;
    return ret;
}


int test0() {
    vector<int> numbers = {2200, 42, 2184, 17};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
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
    vector<int> numbers = {13, 1, 6, 20, 33};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
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
    vector<int> numbers = {7, 42};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
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
    vector<int> numbers = {7192, 9773, 6875, 1767, 657, 959, 9151, 6986, 8201, 8982};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> numbers = {55780, 44918, 55653, 4762, 41536, 40083, 79260, 7374, 24124, 91858, 7856, 12999, 64025, 12706, 19770, 71495, 32817, 79309, 53779, 8421, 97984, 34586, 893, 64549, 77792, 12143, 52732, 94416, 54207, 51811, 80845, 67079, 14829, 25350, 22976, 23932, 62273, 58871, 82358, 13283, 33667, 64263, 1337, 42666};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> numbers = {42};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
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
    vector<int> numbers = {2184, 2200, 2333, 2334, 4524, 15295, 27830, 27846, 32214, 32230, 57860, 57876, 60000, 60111, 62244, 62260, 87890, 87906, 92274, 92290, 100000};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> numbers = {18241, 69853, 16908, 36670, 42905, 72189, 97786, 56098, 76479, 34236, 70542, 62414, 62115, 43165, 22966, 7687, 22699, 86040, 6785, 60992, 98718, 78197, 85303, 94430, 4319, 48314};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> numbers = {62273, 25350, 32817, 7856, 64025, 7374, 67079, 4762, 23932, 82358, 55653, 54207, 12143, 19770, 44918, 77792, 79260, 55780, 91858, 33667, 85860, 12999, 76060, 97984, 24124};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> numbers = {93269, 76864, 2137, 77512, 73274, 37208, 67757, 86025, 20485, 74134, 76729, 8289, 7555, 83826, 63749, 56044, 96292, 61833, 57535, 95610, 90659, 57346, 13568, 99801, 74762, 27934, 56040, 9090, 78523, 49002, 97251, 29175, 36772, 77391, 70308, 57988, 57376, 60177, 50350};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> numbers = {74226, 73042, 44376, 84589, 77848, 49234, 28989, 91969, 34534, 11061, 24559, 1809, 46110, 97041, 88329, 85408, 4879};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> numbers = {20800, 225, 99042, 68355, 84032, 77132, 21482, 18147, 50162, 52568, 40954, 83369, 43283, 39361, 80199, 69494, 92602, 81009, 80582, 90251};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> numbers = {73336, 80382, 48804, 93228, 13881, 53303, 28737, 7695, 77253, 39425, 81625, 84294, 62069};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> numbers = {90996, 53935, 33104, 53216, 17643, 21295, 94137, 90568, 43630, 79428, 26188, 78232, 245, 68941, 55704, 54420, 26467, 18477, 55128, 27015, 83970, 77494, 38973, 28896};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> numbers = {21517, 46414, 75898, 35565, 53382, 10261, 36758, 70828, 70170, 68391, 1076, 58686, 76790};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> numbers = {49401, 19809, 18855, 85834, 87359, 53795, 8972, 32632, 15829, 11673, 69871, 25070, 57720, 5158, 93089, 73878, 67588, 67449, 80722, 42860, 46127, 33981, 57331, 68407, 54175, 45720, 67758, 80454, 98000, 86179, 35243};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> numbers = {24954, 12711, 5572, 14994, 73006, 14391, 55322, 89067, 46190, 94303, 60438, 32260, 91235, 91717, 69273, 94657, 53996, 38740, 8084, 73541, 46393, 64295};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> numbers = {4718, 87180, 38531, 77586, 38388, 20948, 75915, 82927, 62515};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> numbers = {86518, 40154, 33375, 84225, 77375, 58385, 15231, 31298, 64878, 37507, 30032, 6364, 41768};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> numbers = {88437, 54934, 79032, 95725, 91893, 26896, 77062, 50020, 98954, 71293, 75313, 4012, 2670, 95738, 15336, 76113, 44000, 30382, 17997, 76588, 45287, 20217, 9613, 32564, 67323, 83019, 17922, 32348, 38083};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> numbers = {5198, 63784, 21760, 12183, 69945, 98694, 62848, 92793, 15285, 84047, 96864, 49870, 58517, 77958, 37578, 2165, 98839, 55040, 32114, 9141, 49784, 54046, 26668, 73463, 56782, 23594, 12045, 21336, 98807, 99621, 35777, 28847, 42835, 10440, 57196, 12928, 11306, 18683, 6160, 58173, 29730, 15978, 14815, 74063, 75739, 4567, 71464};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> numbers = {94506, 33140, 57322, 11961, 45583, 94811, 30387, 21427, 67629, 35552, 92699, 94756, 59992, 5176, 56355, 47315, 8849, 1954, 55414, 45092, 14427, 93916, 93014, 32938, 14354, 83407};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> numbers = {48389, 82608, 46071, 75874, 85520, 28544, 38934, 92510, 56224, 4975, 4358, 67167, 75367, 99245, 87774, 85478, 92407, 17321, 33974, 4030, 44257, 97698, 18073, 48290, 36722, 66983, 77243, 66127, 12906, 75866, 11405, 39772, 22880, 28124, 85784, 62903, 60005, 70244, 79934, 30305, 48896, 19423, 70092, 10637, 96713};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> numbers = {54239, 1803, 2176, 98901, 7372, 7392, 24704, 48164, 68516, 6922, 78743, 63672, 98980, 12712, 42825, 14408};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> numbers = {60042, 73350, 61977, 89496, 40269, 81232, 84983, 5131, 30750, 63932, 80779, 57526, 64657, 2689};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> numbers = {68664, 34328, 64054, 95611, 1258, 67530, 47949, 86450, 38477, 18760, 95526, 64439, 44133, 85055, 86207, 37174, 473, 671, 30452, 86516, 8802, 51382, 26167, 18396, 89761, 78630, 22977, 88243};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> numbers = {60, 6327, 26281, 45674, 64486, 90701, 58661, 24519, 71670, 46622, 58071, 93874, 68247, 51089, 4925, 87828, 23467, 77535, 19841, 82708, 59143, 11676, 19888, 71983, 12265, 71116, 72638, 80448, 20905, 9150, 20573, 64231, 57864, 8591, 65480, 66387, 88726, 64726, 5931, 75134};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> numbers = {91151, 80081, 83666, 1727, 50168, 25514, 25522, 35962, 72302, 24679, 10213, 29975, 36179, 80291, 5841, 67547, 23621, 32223, 68458, 74419, 41666, 62005, 77190, 70151, 92976, 28746, 31133, 60260, 68250, 36753, 59024, 85438, 83225, 82772, 50512, 17879, 23183, 63543, 30976, 21837, 39068, 43228, 8622, 47525, 88100, 26878};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> numbers = {30736, 42676, 46599, 83659, 99774, 26092, 58949, 69549, 62727, 93079, 50662, 9322, 39995, 59981, 26812, 59425, 40612, 49672, 51755, 13623, 44720, 65498, 8805, 65946, 66648};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> numbers = {39763, 72438, 24050, 34162, 90505, 58251, 64326, 96818, 65340, 65497, 94327, 54340, 76305, 20857, 56499, 85733, 67479, 12494, 6821, 87829, 36741, 66294, 9941, 22607, 20908, 14699, 5145, 41425, 87472, 57430, 2139, 16389, 35695, 36814, 95241, 4258};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> numbers = {64488, 53821, 50160, 6010, 6477, 47860, 719, 20726, 4812, 88113, 96787, 69120, 91819, 47981, 78449, 39541, 44314, 96018, 96575};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> numbers = {33740, 51504, 73058, 3025, 2275, 13090, 96997, 86540, 80800, 43202, 52942, 83816, 14641, 8092, 16070, 39303, 36555, 39715, 92634, 71305, 68259, 36965, 39901, 97216, 44497, 63630, 78123, 18345, 3248, 2449, 58281, 29454};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> numbers = {15385, 10182, 90846, 18251, 70690, 44290, 19068, 83165, 52685, 5360, 87482, 41204, 63576, 5921, 91943, 56728, 87279, 5012, 95889, 25354, 1912, 13697, 94208, 41731, 2608, 10849, 6178};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> numbers = {84678, 57705, 80412, 63922, 21260, 11730, 64040, 38697, 35655, 18335, 96687, 23665, 29636, 5831, 65072, 89195, 69883, 9534, 44646, 27978, 61855, 3739, 44310, 17907, 54625, 84452, 51062, 86700, 29663, 25646, 81718, 81966, 9983, 60312, 68641, 14939, 91832, 6764, 73658, 98519, 47157, 71104, 13573, 51427};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> numbers = {21365, 33313, 5028, 97131, 80352, 90212, 71705, 96990, 44034, 69356, 16908, 50215, 39410, 64022, 96837, 27308, 58756, 76923, 59308, 84790, 58993, 1369, 77641, 47460, 58689, 50638, 71633, 30290, 15297};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> numbers = {82737, 81897, 16625, 40763, 30490, 45290, 29863};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
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
    vector<int> numbers = {91340, 77980, 39151, 96314, 30970, 64120, 62880, 15258, 16987, 99691, 3718, 55502};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> numbers = {40842, 30864, 52641, 68810, 82068, 22308, 6913, 29621, 15197, 28583, 21538, 88601, 61967, 18829, 13479, 84511, 15835, 5907, 41607, 38315, 74069, 96094, 90488};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> numbers = {94352, 17799};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> numbers = {6400, 93401, 22696, 33092, 6824, 26902, 53699, 23075, 31664, 50720, 32401, 63719, 21990, 80860, 43397, 21063, 91444, 79565, 30472, 35589, 73537, 17075, 32655, 81698, 59208, 57012, 98536, 69482, 34314, 49444, 77109, 32614, 56396, 993, 4387, 70627, 94713, 9409, 83649, 63148, 8401, 42139};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> numbers = {8379, 20912, 6971, 12819, 86939, 38987, 24349};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> numbers = {70523};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
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
    vector<int> numbers = {37467, 33465, 1202, 23230, 51330, 99113, 43676};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> numbers = {5093, 74143, 37261, 35005, 10986, 85590, 27641, 13652, 43832, 99007, 47448, 73378, 92351, 2556, 93904, 56284, 20285, 62377, 18791, 38500, 25997};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> numbers = {97177, 78877, 6286, 84129, 9485, 569, 7710, 43341, 28153, 76430, 18102, 31540, 16252, 99633, 42757, 65909, 60614, 57407, 96358, 63368, 81751, 44670, 27403, 82461, 80681, 72290, 49109, 60226, 18888, 66787, 74449, 93401, 15557, 52272, 50751, 51585, 51908, 87621, 2908, 62824, 88873, 65659, 95881, 88864, 96470, 45024, 40133, 29663};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> numbers = {17586};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
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
    vector<int> numbers = {16347, 50847, 37890, 99821, 30804, 44715, 83284, 48863, 81617, 89061, 43181, 31715, 82502, 33263, 59483, 65995, 36025, 99893, 17433, 8087, 21683, 68742, 14277, 5875};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> numbers = {76412, 63019, 92083, 22955, 83137, 13055, 47079, 46925, 33127, 70704, 22924, 96127, 80368};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> numbers = {16800, 6909, 16195, 87271, 98873, 22500, 52630, 84324, 31792, 87623, 44562, 16453, 20911, 62152, 60407, 63791, 33157, 22996, 91631, 60671, 64242, 39515, 55058, 52968, 83096, 26826, 79151, 67286, 23678, 48867, 42704, 97855, 59936, 50679, 76660};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> numbers = {33267, 50041, 32725, 92177, 1112, 15566, 49966, 89645, 33222, 32140, 18923, 49147, 77293, 11340, 51582, 90676};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> numbers = {78197, 53886, 53567, 91832, 36810, 63735, 35137, 88434, 80336, 27440, 27684, 96756, 726, 10914, 61463, 33027, 54462, 51828, 68976, 66926, 94923, 45109, 16651, 3577, 87517, 99413, 25639, 91160, 52463, 17640, 58860};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> numbers = {14320, 20425, 10961, 21970, 12876, 60558, 12067, 75662, 65090, 76385, 74916, 34953, 1931, 2770, 58630, 77900, 72473, 60738, 69559};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> numbers = {96506, 90547, 43132, 30492, 59168, 86594, 11344, 57240, 1132, 85395, 80837, 5526, 22692, 90909, 95864, 66440, 44612, 28101, 69541, 24691, 72141, 87896, 5622, 68471, 85336};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> numbers = {36240, 73037, 87613, 36183, 39930, 37116, 68038, 2323, 22278, 83868, 19532, 25205, 53836, 90010, 7585, 58960, 61828, 84875, 4056, 71866, 88671, 46211, 73806, 67506, 25614, 87430, 24596, 13846, 89610};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> numbers = {20885, 84918, 29497, 98733, 81383, 71025, 21357, 50181, 17808, 61607, 68616, 16024, 15816, 62062, 45771, 63716, 24415};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> numbers = {47872, 23563, 99204, 89315, 14435, 23025, 16227, 61297, 9879, 66704, 81471, 70196, 11555, 25216, 10815, 23952, 17082, 81130, 85548, 36928, 57630, 28949, 34510, 84375, 52416, 95388, 42367, 65807, 59139, 6318, 13008, 15505, 70237};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> numbers = {33825, 94226, 16993, 60384, 52969, 83489, 77951, 6449};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> numbers = {50221, 34886, 16346, 95218, 48512, 97267, 49905, 37830, 87899, 14825, 30868, 46867, 51987, 28707, 85062, 83867, 45595, 19448, 77438, 60374, 42509, 33720, 87965, 38266, 52728, 94569};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> numbers = {71806, 75391, 62227, 22324, 75214, 31485, 52182, 95805, 32702, 51007, 42315, 34848, 16861, 93008, 86250, 35521, 38209, 96750, 22997, 21273};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> numbers = {65839, 72634, 62598, 24220, 74141};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> numbers = {42502, 33305, 36638, 99206, 51915, 72907, 61620, 70207, 48015, 95113, 34669, 67240, 69423};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> numbers = {75195, 8428, 52294, 96873, 44158, 66070, 41669};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> numbers = {55903, 92115, 21303, 42865, 69898, 99947, 60640, 29152};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> numbers = {16098, 9414, 5111, 92033, 62654, 89151, 89573, 63798, 42269, 20422, 22157, 8282, 26519, 71351, 45645, 63742, 11134, 13826, 82324, 51997, 39221, 19174, 75202, 47131};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> numbers = {70740, 94295, 6185, 79390, 28203, 68700, 56609, 87564, 44402, 93813, 52413, 98185, 14192, 45017, 89684, 98151, 28241, 48048, 69331, 34667, 36628, 42357, 8201, 81399, 53530, 4753, 36220, 43109};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> numbers = {27002, 77414, 59789, 22778, 92370, 21084, 24907, 47897, 88757, 32794, 62234, 79559};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> numbers = {21189, 19668, 70211, 69273, 2346, 36941, 75087, 7244, 83015, 20008, 68305, 7148};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> numbers = {24756, 21403, 26421, 80504, 6228, 22574, 64572, 96630, 70555, 29090, 61055, 54083, 8279, 79624, 8862, 19910, 3056, 42595, 53857, 10410, 77296, 37912, 20926, 96832};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> numbers = {88379, 91417, 57211, 76131, 60675, 4877, 36422, 81441, 71040, 30932, 17930, 3747, 21723, 52591, 22409, 20224, 15786, 64361, 2951, 20509, 87987};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> numbers = {66684, 3477, 75770, 71625, 86167, 85432, 61040, 66372, 37146, 35126, 75668, 35639, 39435, 97081, 35130, 46941, 11690, 8438, 94721, 39107, 91596, 96010, 56361, 66309, 28327, 19967, 63116, 63137, 65430, 29513, 74900};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> numbers = {99672, 39417, 47633, 30852, 31250, 28314, 67812, 71070, 7246, 56016, 30961, 71838, 53722, 23190, 4370, 51637, 50555, 12590, 32254, 47598, 66377, 55222, 52685, 15520};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> numbers = {74939, 22542, 78225, 98150, 84897, 63746, 22403, 88307, 9205, 54540, 282, 84658, 44792, 23833, 50679, 69913, 19043, 50840, 23781, 79313, 16066, 14351, 37058, 45621, 46053, 6791, 97895, 71636, 59945, 43353, 99577, 59301, 147, 20638, 75532, 51171, 91858, 923};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> numbers = {75264, 9330, 65798, 50384, 18184, 59278, 10457, 36285, 24253, 26876, 53249, 29635, 25889, 60566, 82215, 30486, 36483, 39514, 10045, 20892, 77888, 78618, 27487, 66360, 12598, 16776, 50470, 56893, 15577, 4783, 5762, 86220, 47016, 43443, 48895, 35969, 39994, 76346, 26427, 96155, 93579};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> numbers = {86985, 14135, 91240, 72148, 9492, 41935, 15490, 17288, 98008, 25547};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> numbers = {29923, 8616, 43249, 44040, 91371, 52770, 97782, 24154, 33424, 98804, 61680, 81415, 14954, 93997, 97972, 52696, 82454, 99113, 22912, 67002, 8535, 68692, 1591};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> numbers = {2756, 29049, 93306, 44834, 38219, 32188, 35256, 40740, 55404, 51734, 87008, 57314, 5180, 70406, 31386, 80299, 79894, 86721, 77776, 56403, 24995, 32489, 14580, 79045, 43573, 56061, 59275};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> numbers = {24935, 83913, 39039, 85318, 4816, 79339, 89696, 89503, 28798, 93141, 92896, 95599, 22081, 92023, 59360, 32338, 69602, 72080, 394, 60528, 68372, 44697, 50621, 17459, 51158, 95571, 78453, 87673, 91651, 1081, 55060, 43196, 62539, 3440, 38656};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> numbers = {37410, 18707, 77773, 14427, 39696, 35436, 23031, 32759, 1199, 46136, 29781, 97164, 58371, 77001, 9034, 58662, 20856, 98813, 53935, 24737, 97234, 6837, 23196, 16264};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> numbers = {12546, 42067, 42269, 56030, 78894, 73567, 97515, 59032, 58924, 42927, 63893, 39703, 59848, 41353, 54479, 93176, 41590, 65516, 61005, 59787, 13580, 13695, 18749, 61331, 14707, 67373, 31863, 88979, 83389, 28572, 88803, 21779, 31828, 84749, 43058, 57645, 59469, 47646, 61427, 22589, 76150, 82416, 5709, 78045, 21855, 50655, 25191};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> numbers = {96332, 25546, 66691, 44172, 94182, 19590};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
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
    vector<int> numbers = {47263, 18990, 134, 32201, 51547, 64891, 30876, 25991, 37879, 52967};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> numbers = {76204, 63209, 15729, 5779, 12951, 85592, 30081, 56636, 58515, 64876, 95808, 81031, 2421, 3326, 84277, 15059, 2771, 25525, 98186, 90229, 82916, 12587, 18154, 37086, 55446, 3948, 5638, 24029, 16087, 13937, 53638, 5351, 91750, 86092, 63390, 53992, 81791, 91545, 8105, 83391, 23013, 99868, 40872, 94900, 98756, 21907, 96797, 97331, 30956};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> numbers = {50193, 22200, 11078, 1403, 17706, 4059, 53186, 10100, 7103, 46366, 52520, 84668, 8907, 85817, 42234, 26096, 26482, 92309, 83695, 81924, 94769, 18538, 92024, 24156, 20468, 3243, 11427, 15069, 52391, 59956, 45968, 68005};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> numbers = {56449, 47428, 81495, 72783, 41214, 81565, 57021, 22820, 59164, 21518, 66322, 94145, 93619, 59335, 37195, 29874, 18284, 97906, 90631, 15919, 91064, 55440, 97379, 76080, 4490, 24934, 8386, 17592, 58842, 23159, 55858, 66711, 17746, 3676, 22254, 87102, 32026, 70348, 52214, 21091};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> numbers = {5085, 80873, 55999, 32954};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
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
    vector<int> numbers = {1094, 45867, 75375, 24957, 91002, 78149, 89086, 37653, 89279, 83659, 38664, 93037, 96246, 71339};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> numbers = {57886, 60338, 1479, 43747, 37676, 68189, 37636, 96176, 80305, 19198, 89492, 97904, 70903, 47335, 30141, 53773, 11899, 25875, 90685, 2577, 99114, 50368, 1332, 48446, 25734, 8993, 33621, 20933, 97610, 38314, 13894, 48011, 4104, 20273, 11423, 62868, 95590, 91389, 42751, 19436, 44676, 17268, 53306, 43503, 33966, 66415, 26190};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> numbers = {12391, 63663, 11431, 54744, 58460, 13906, 56673, 69177, 29632, 64020, 26620, 805, 40663, 30131, 28678, 27684, 1818, 87615, 32859, 93907, 77696, 12838, 42853, 74430, 45132, 13006, 60512, 40961, 66402, 79726, 47898, 69832, 45531, 16419, 26581, 28554, 85988, 45096, 37142, 97939, 99535, 25210, 39953, 18156, 48492, 98458, 34403, 57671, 97065, 95395};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> numbers = {13833, 80184, 98833, 11042, 77177, 91799, 82143, 58084, 81653, 55931, 30274, 67606, 3450, 10585, 99083, 67736, 12282, 90332};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> numbers = {47763, 8030, 95831, 2712, 22784, 96505, 61296, 71066, 70782, 67645, 14895, 11184, 56412, 61673, 7755, 29776, 53830, 26658, 35165, 20677, 49836, 23612, 29464, 52154, 33134, 44150, 84947, 97812, 77298, 28109, 87189, 5706, 29753, 40534, 16303, 25601, 53448, 30166, 93281, 79294, 48688, 42659, 86810, 95811, 65246, 43798, 67085, 44367};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> numbers = {16597, 42814, 82986, 41342, 69424, 13353, 53839, 93236, 28103, 1987, 66955, 62972, 82371, 26404, 59984, 78492, 98099, 61606, 97053, 35769};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> numbers = {46901, 75898, 94426, 19843, 90129, 20187, 45885, 4045, 46991, 45405, 48271, 95381, 29680, 32411, 5158, 37831, 85490, 73648, 30664, 77690, 58499, 42625, 37678, 59723, 74543, 81013, 21195, 97811, 99125, 11330, 69924};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> numbers = {36946, 99589, 11498, 95869, 60907, 50268, 87753, 74403, 91247, 71411, 83939, 91818, 95900, 58581, 44084, 93544, 22378, 59186, 91709, 2192, 25499, 77682, 26602, 87624, 42893, 19883, 43188, 75089, 33272, 888, 52567, 94303, 74471, 25288, 25688, 40553};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> numbers = {71491, 53762, 57513, 47584, 22429, 40695, 95396, 62653, 9659, 4602, 48006, 51761, 82302, 8864, 16737, 86802, 19134, 93533, 42355, 78276, 89230, 13514, 95243, 95464, 7264, 83544, 81099, 2389, 21944, 89466, 28702, 71325, 56560, 84272, 73197, 60656, 26662, 61144, 12044, 16732};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> numbers = {94016, 56479, 93598, 56140, 33058, 16682, 68812, 70530, 44676, 88082, 86880, 82748, 57332, 19363, 16596, 75713, 51545, 93547, 42483, 30323, 27366, 67401, 84440, 89095, 71778, 17604, 3976, 3414, 56391, 45069, 33620, 80525, 1008, 65492, 17847, 13026, 33075};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> numbers = {67607, 1686, 59866, 2029, 73759, 65037, 12493, 96744, 91682, 26451, 20939, 39733, 31189, 55605, 53520, 23924, 53167, 1628, 43678, 47386, 6238, 28447, 93887, 82100, 95768, 14878, 3050, 28614, 11167, 62110, 30183, 52827, 12624, 13319, 88055, 28270, 73798, 57660, 63031, 51280, 22486, 46407, 55616, 8502, 7816};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> numbers = {33337, 66573, 67929, 31104, 39776, 89913, 26280, 24869, 57459, 32636, 57489, 92804, 29853, 37707, 47322, 54653, 56349, 54703, 57484, 25308, 92887};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> numbers = {19739, 27361, 53938, 61717, 41648, 30473, 88210, 18306, 43154, 26973, 21587, 63799, 17620, 95159, 92707, 90960, 86746, 82715, 9123, 94151, 77618, 68691, 29149, 63141, 25077, 17100, 68790, 94148, 48973, 14804, 83432, 51489, 3578, 47099, 75149, 59291, 39178, 1561, 90271, 24755, 45619, 82074, 22258};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> numbers = {223, 32562, 11395, 27626, 97561, 9066, 32638, 59782, 12435, 14345, 81130, 58089, 47096, 61322, 87545, 79884, 48550, 74387, 55442, 57885, 6084, 25012, 65313, 86743, 92717, 20707, 43796, 52627};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> numbers = {67275, 30024, 17533, 94365, 14543, 82904, 35311, 86643, 98174, 56980, 56695, 55785, 28916, 85270, 39528, 73113, 69477, 25865, 10900, 54418, 12578, 9894};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> numbers = {55780, 44918, 55653, 4762, 41536, 40083, 79260, 7374, 24124, 91858, 7856, 12999, 64025, 12706, 19770, 71495, 32817, 79309, 53779, 8421, 97984, 34586, 893, 64549, 77792, 12143, 52732, 94416, 54207, 51811, 80845, 67079, 14829, 25350, 22976, 23932, 62273, 58871, 82358, 13283, 33667, 64263, 1337, 42666};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> numbers = {2200, 42, 2184, 17};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> numbers = {14, 16};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> numbers = {20, 22};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
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
    vector<int> numbers = {2184, 2200};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> numbers = {1};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> numbers = {140, 147};
    EllysCoprimesDiv2* pObj = new EllysCoprimesDiv2();
    clock_t start = clock();
    int result = pObj->getCount(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22839354&rd=15497&pm=12461
********************************************************************************
#include <vector> 
#include <algorithm> 
 
using namespace std; 
 
class EllysCoprimesDiv2 
{ 
// a<b!! 
int gcd(int a, int b) 
{ 
  if(a==0) 
    return b; 
  else 
    return gcd(b%a, a); 
} 
 
public: int getCount(vector <int> n) 
{ 
sort(n.begin(), n.end()); 
int a=0; 
for(int i=1;i<n.size();i++) 
{ 
  if(gcd(n[i], n[i-1])!= 1) 
  { 
    bool good = false; 
    for(int j=n[i-1]+1;j<n[i];j++) 
      if(gcd(n[i-1], j) ==1) 
        if(gcd(j, n[i]) == 1) 
        { 
          good = true; 
          break; 
        } 
    if(good) 
      a++; 
    else 
      a+=2; 
  } 
} 
return a; 
}; 
};

********************************************************************************
*******************************************************************************/
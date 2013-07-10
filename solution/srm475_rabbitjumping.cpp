/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10882
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

class RabbitJumping {
public:
    int getMinimum(vector<int> holes, int largeJump);
};

int RabbitJumping::getMinimum(vector<int> holes, int largeJump) {
    int ret;
    return ret;
}


int test0() {
    vector<int> holes = {1, 2};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> holes = {1, 2};
    int largeJump = 4;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> holes = {2, 3};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> holes = {2, 17, 21, 36, 40, 55, 59, 74};
    int largeJump = 19;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> holes = {187640193, 187640493, 187640738, 187640845, 564588641, 564588679, 564588696, 564588907, 605671187, 605671278, 605671288, 605671386, 755723729, 755723774, 755723880, 755723920, 795077469, 795077625, 795077851, 795078039, 945654724, 945654815, 945655107, 945655323};
    int largeJump = 475;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> holes = {1, 999999997, 999999999, 1000000000};
    int largeJump = 999999999;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> holes = {4, 5, 6, 10};
    int largeJump = 7;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> holes = {5, 17, 27, 35, 37, 63, 83, 88, 182, 188, 207, 219, 359, 415, 435, 464, 479, 528, 532, 545, 584, 598, 610, 699, 723, 754, 757, 814, 854, 855, 867, 877, 894, 916, 958, 962, 995, 1001, 1022, 1038, 1084, 1109, 1152, 1275, 1309, 1355, 1449, 1489};
    int largeJump = 155;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> holes = {101557142, 210995878, 245344736, 257981537, 314968406, 363946193, 424279117, 435779304, 441820162, 498117144, 507089544, 553226276, 612496883, 675096026, 730940846, 819627580, 861535050, 862716271};
    int largeJump = 123866101;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> holes = {42322030, 50689348, 62518772, 68545993, 68562915, 69311612, 73663987, 82200888, 89600784, 196140907, 235809979, 242215865, 245031799, 259448202, 338202925, 362731317, 366327426, 430063787, 444000896, 469136442, 560736182, 594081463, 606232384, 659225445, 679971524, 729074017, 730075522, 762365078, 777064516, 907741546};
    int largeJump = 167415737;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> holes = {6387726, 17303810, 22055866, 35095444, 63260646, 68486216, 71027652, 92164844, 105469719, 114440949, 234916673, 330477752, 366145474, 380509385, 427540989, 466039800, 506534079, 530291784, 573153165, 666547093, 776169701, 785109057, 790535715, 803643627, 806727054, 852692028, 863654523, 885948044, 893162654, 908614733};
    int largeJump = 121180295;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> holes = {27938412, 31359201, 39985470, 262364087, 280050551, 333490036, 371051612, 432183173, 523771278, 549737536, 601376604, 603638993, 720197052, 765925838, 814177759, 964283791};
    int largeJump = 233658225;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> holes = {35818794, 35849307, 88865719, 273137293, 306696654, 333581373, 424700999, 475514616, 566338703, 620266935, 627602674, 833620719, 854038849, 993018087};
    int largeJump = 217685129;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> holes = {184726157, 333984400, 470651220, 473392292, 508485438, 630537246, 676771431, 702867259, 798565328, 950042774};
    int largeJump = 199328509;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> holes = {1, 2};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> holes = {1, 2};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> holes = {1, 3};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> holes = {1, 3};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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

int test18() {
    vector<int> holes = {2, 3};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {2, 3};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {1, 4};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> holes = {1, 4};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {2, 4};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> holes = {2, 4};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> holes = {3, 4};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> holes = {3, 4};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> holes = {1, 2, 3, 4};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> holes = {1, 2, 3, 4};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {1, 5};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> holes = {1, 5};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> holes = {2, 5};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> holes = {2, 5};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> holes = {3, 5};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> holes = {3, 5};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {1, 2, 3, 5};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> holes = {1, 2, 3, 5};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> holes = {4, 5};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> holes = {4, 5};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> holes = {1, 2, 4, 5};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> holes = {1, 2, 4, 5};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> holes = {1, 3, 4, 5};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> holes = {1, 3, 4, 5};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> holes = {2, 3, 4, 5};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> holes = {2, 3, 4, 5};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> holes = {1, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> holes = {1, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> holes = {2, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> holes = {2, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> holes = {3, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> holes = {3, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> holes = {1, 2, 3, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> holes = {1, 2, 3, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> holes = {4, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> holes = {4, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {1, 2, 4, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> holes = {1, 2, 4, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> holes = {1, 3, 4, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> holes = {1, 3, 4, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> holes = {2, 3, 4, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> holes = {2, 3, 4, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> holes = {5, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> holes = {5, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> holes = {1, 2, 5, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> holes = {1, 2, 5, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> holes = {1, 3, 5, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> holes = {1, 3, 5, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {2, 3, 5, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> holes = {2, 3, 5, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> holes = {1, 4, 5, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> holes = {1, 4, 5, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> holes = {2, 4, 5, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> holes = {2, 4, 5, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> holes = {3, 4, 5, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> holes = {3, 4, 5, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> holes = {1, 2, 3, 4, 5, 6};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> holes = {1, 2, 3, 4, 5, 6};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> holes = {1, 269548984, 269548987, 715764586, 715764589, 1000000000};
    int largeJump = 446215603;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> holes = {1, 280641846, 280641849, 774970313, 774970316, 1000000000};
    int largeJump = 494328467;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> holes = {1, 246064253, 246064256, 777814905, 777814908, 1000000000};
    int largeJump = 531750651;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> holes = {1, 214504433, 214504436, 714906604, 714906608, 1000000000};
    int largeJump = 500402173;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> holes = {1, 278239977, 278239980, 726301747, 726301751, 1000000000};
    int largeJump = 448061771;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> holes = {1, 213136568, 213136571, 727998473, 727998477, 1000000000};
    int largeJump = 514861905;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> holes = {1, 269540316, 269540319, 742691264, 742691268, 1000000000};
    int largeJump = 473150947;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> holes = {1, 218345561, 218345564, 789861231, 789861236, 1000000000};
    int largeJump = 571515673;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> holes = {1, 234085591, 234085594, 756251260, 756251265, 1000000000};
    int largeJump = 522165671;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> holes = {1, 212368595, 212368598, 746012187, 746012192, 1000000000};
    int largeJump = 533643593;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {1, 252925375, 252925378, 762720332, 762720337, 1000000000};
    int largeJump = 509794957;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> holes = {1, 246289309, 246289312, 742179099, 742179104, 1000000000};
    int largeJump = 495889789;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> holes = {1, 231482673, 231482677, 792426957, 792426960, 1000000000};
    int largeJump = 560944285;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> holes = {1, 287665297, 287665301, 756420152, 756420155, 1000000000};
    int largeJump = 468754855;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> holes = {1, 249037436, 249037440, 758051302, 758051305, 1000000000};
    int largeJump = 509013865;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {1, 254713204, 254713208, 752742855, 752742858, 1000000000};
    int largeJump = 498029649;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> holes = {1, 217108799, 217108803, 790835004, 790835008, 1000000000};
    int largeJump = 573726207;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> holes = {1, 236611362, 236611366, 735683954, 735683958, 1000000000};
    int largeJump = 499072593;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> holes = {1, 212182688, 212182692, 739970819, 739970823, 1000000000};
    int largeJump = 527788131;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> holes = {1, 200138074, 200138078, 788202834, 788202838, 1000000000};
    int largeJump = 588064759;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> holes = {1, 292389414, 292389418, 766836661, 766836665, 1000000000};
    int largeJump = 474447245;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> holes = {1, 229213476, 229213480, 710420734, 710420739, 1000000000};
    int largeJump = 481207261;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> holes = {1, 210791476, 210791480, 730200589, 730200594, 1000000000};
    int largeJump = 519409115;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> holes = {1, 223424219, 223424223, 750289887, 750289892, 1000000000};
    int largeJump = 526865669;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> holes = {1, 297694499, 297694503, 713997356, 713997361, 1000000000};
    int largeJump = 416302857;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> holes = {1, 204991451, 204991455, 790622333, 790622338, 1000000000};
    int largeJump = 585630881;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {1, 234503675, 234503679, 761894056, 761894061, 1000000000};
    int largeJump = 527390379;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> holes = {1, 269422535, 269422540, 711235343, 711235346, 1000000000};
    int largeJump = 441812809;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> holes = {1, 239313357, 239313362, 750698228, 750698231, 1000000000};
    int largeJump = 511384871;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> holes = {1, 240048503, 240048508, 788558885, 788558888, 1000000000};
    int largeJump = 548510381;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> holes = {1, 238663599, 238663604, 708456152, 708456155, 1000000000};
    int largeJump = 469792551;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> holes = {1, 296655485, 296655490, 702788685, 702788688, 1000000000};
    int largeJump = 406133197;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> holes = {1, 222944597, 222944602, 767861994, 767861998, 1000000000};
    int largeJump = 544917399;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> holes = {1, 245837907, 245837912, 744234513, 744234517, 1000000000};
    int largeJump = 498396607;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> holes = {1, 282369864, 282369869, 746930527, 746930531, 1000000000};
    int largeJump = 464560663;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> holes = {1, 260493858, 260493863, 771817716, 771817720, 1000000000};
    int largeJump = 511323857;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {1, 291292614, 291292619, 779621059, 779621063, 1000000000};
    int largeJump = 488328443;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> holes = {1, 227049521, 227049526, 742974089, 742974093, 1000000000};
    int largeJump = 515924565;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> holes = {1, 247227191, 247227196, 716031727, 716031732, 1000000000};
    int largeJump = 468804539;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> holes = {1, 267297000, 267297005, 773039795, 773039800, 1000000000};
    int largeJump = 505742797;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> holes = {1, 227727687, 227727692, 739765561, 739765566, 1000000000};
    int largeJump = 512037875;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> holes = {1, 200698240, 200698245, 718364707, 718364712, 1000000000};
    int largeJump = 517666467;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> holes = {1, 211064484, 211064489, 731614070, 731614075, 1000000000};
    int largeJump = 520549585;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> holes = {1, 282306378, 282306383, 782624697, 782624702, 1000000000};
    int largeJump = 500318317;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> holes = {1, 272124758, 272124763, 742280812, 742280817, 1000000000};
    int largeJump = 470156051;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> holes = {2, 33037702, 55383456, 62187102, 82622909, 90191383, 110484546, 114086297, 131135442, 172718082, 178866556, 192859301, 235881859, 250547572, 257352377, 258958831, 262324870, 293841206, 353784157, 367668186, 370760531, 394149550, 401183059, 406974623, 439451514, 443965439, 449882237, 491348529, 501105294, 520718274, 540438122, 569416653, 570778748, 596865836, 624342627, 661624493, 694774022, 716422497, 720471711, 732109369, 770935022, 773212031, 779313235, 804553677, 886411581, 920807011, 951791511, 953316863, 995036097, 1000000000};
    int largeJump = 1000000000;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> holes = {2, 18812852, 34791534, 60388041, 93900346, 94127748, 118373038, 136256202, 193588278, 214212105, 265581938, 268883266, 281143235, 299818373, 324893004, 325310697, 329093773, 350262160, 355469963, 369015313, 374459098, 405132212, 405369162, 446629286, 483231895, 502361469, 502366596, 518365894, 519920593, 525947701, 547413866, 553428783, 571022712, 586902103, 609905036, 653341749, 670562685, 688879360, 725757829, 735683941, 769485446, 795972707, 800739352, 890552897, 917732311, 939358067, 950339365, 955426052, 994951848, 1000000000};
    int largeJump = 999999999;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> holes = {2, 38660982, 93850834, 129128438, 132933100, 134192942, 156822184, 159016712, 159129769, 180930022, 197986614, 210058351, 270105811, 281375245, 285553500, 297045108, 332806270, 378333806, 379505613, 460150202, 518843994, 556181318, 561195789, 567284946, 582597972, 598263889, 601298886, 603161269, 627265839, 640292030, 642368723, 698340164, 727256678, 758790141, 759829721, 773288704, 787635420, 807041957, 811778682, 824589738, 852096756, 853831978, 882146274, 904269156, 908885377, 918478944, 936866952, 937236271, 982903669, 1000000000};
    int largeJump = 999999998;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> holes = {2, 17935232, 52553501, 90294213, 166983653, 173329164, 187145968, 218252582, 237275139, 238478848, 240015335, 259113964, 266786714, 281466654, 304242172, 353926654, 380625856, 382360309, 383005891, 421689945, 433172914, 451963411, 464729773, 517966705, 522610590, 529323851, 533625564, 536680198, 557411827, 568790802, 596374112, 600524034, 658166767, 663449647, 670123140, 677365254, 725250168, 770157709, 788647223, 792709906, 794265614, 834057931, 881174508, 887372421, 948371515, 966849159, 968533389, 995232674, 996084023, 1000000000};
    int largeJump = 999999997;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> holes = {2, 14353009, 17166397, 27948626, 64572326, 68282426, 88139480, 90578024, 101055272, 107082216, 131801072, 134833292, 161936530, 175154655, 191947995, 213360976, 236810766, 281682908, 338509170, 353776782, 398322525, 422387297, 432529104, 518264207, 530623635, 549675613, 597215765, 620590501, 627752336, 636668312, 640151169, 679960919, 689230501, 692926812, 693526458, 712753614, 784488105, 793435374, 813086447, 844397995, 847903784, 860189972, 885388687, 891071242, 896865209, 911076908, 915779466, 924819530, 994784069, 1000000000};
    int largeJump = 999999996;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> holes = {2, 8748334, 44873213, 59971370, 77083678, 96645859, 191625205, 193929262, 222093412, 228853675, 279649465, 292601853, 366920772, 369980540, 377317082, 395651631, 408926311, 410359888, 485030492, 503529271, 513477168, 520284056, 535091900, 537507135, 544203274, 554243893, 575306252, 608551917, 618691566, 651475977, 657198276, 668575427, 670635509, 675735790, 677946505, 680805776, 781748353, 802397565, 808369375, 842823930, 894458084, 933278906, 954463313, 955187852, 956019460, 965691001, 968437616, 975106271, 976288821, 1000000000};
    int largeJump = 999999995;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {2, 49781765, 63636843, 69520176, 110757227, 119690979, 140439013, 159689854, 209240797, 213290853, 244170842, 248653781, 276960614, 296096607, 308120510, 329741857, 335486286, 359918246, 383674496, 438352917, 441044158, 459875146, 484396420, 489917278, 492141736, 520748762, 569612428, 572125507, 596524315, 652784432, 711420795, 719555326, 720819676, 725709887, 733183314, 739225179, 749494848, 790567969, 798736164, 833784390, 834789780, 840666314, 844763255, 847616981, 875260543, 893728392, 986791426, 987202872, 997892900, 1000000000};
    int largeJump = 999999994;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> holes = {2, 1651408, 1962746, 46119103, 63990112, 105801924, 114017356, 121543200, 139861923, 154698849, 169914269, 180455731, 185003918, 203747674, 227495839, 253579230, 278480486, 290705057, 301783542, 334102572, 335335797, 405466314, 406232647, 414725920, 414963301, 420679806, 431007871, 455123678, 463566926, 466393534, 474098447, 482268720, 494891034, 519588530, 596906834, 602445771, 674211103, 677133853, 678427683, 686568046, 749431812, 751853282, 786336307, 794037470, 888500990, 901133053, 914029377, 954770025, 973678186, 1000000000};
    int largeJump = 999999993;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> holes = {2, 9217681, 17348495, 24113068, 50677650, 59214479, 74904489, 85641419, 92303589, 111137621, 112358047, 160790215, 181936592, 201559666, 207407053, 209106141, 215554470, 224256412, 231293362, 309998936, 366499445, 367671899, 419712895, 448355122, 461300819, 486312884, 500423437, 511319852, 559486730, 586019190, 589666790, 604005315, 606016715, 645042832, 705152140, 751588544, 758315838, 758665436, 760254532, 773508862, 790511965, 795210294, 815749780, 872162786, 891642441, 948334571, 975118558, 990794023, 998734896, 1000000000};
    int largeJump = 999999992;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> holes = {2, 2887068, 85457794, 96469372, 103957051, 122127498, 129341880, 129836621, 154115298, 168968956, 202249582, 209830614, 217694558, 227891619, 256924540, 303601649, 341158906, 375614634, 386112873, 393099433, 413284075, 419476357, 478074387, 492317612, 502298193, 507127463, 511284255, 535335391, 538655462, 549146533, 595432615, 613219877, 629174044, 640305302, 710860081, 721815633, 733230989, 745891409, 749589663, 774541278, 774708527, 790266193, 796707547, 800606044, 889736659, 894585657, 901606842, 939972575, 990811831, 1000000000};
    int largeJump = 999999991;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> holes = {2, 923977, 29945108, 33128161, 34233230, 67037231, 85049873, 111766015, 115049766, 141193575, 176274057, 180968486, 190559787, 233696479, 278899151, 279105522, 303665218, 345308276, 353471942, 358674891, 370435770, 433906371, 437989279, 511344827, 520261890, 525573055, 542206331, 559326458, 568598614, 581390988, 601287232, 710220861, 715663677, 725116443, 742898553, 751148162, 799322768, 816799897, 856234253, 912996063, 915542469, 918214622, 927637425, 939218269, 940348184, 941348851, 968733276, 973214226, 976525007, 1000000000};
    int largeJump = 999999990;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> holes = {2, 12634077, 27296354, 31667142, 59405027, 73401029, 100861776, 105514150, 120612639, 136567882, 145600517, 175294342, 233669268, 246868896, 250098680, 286199829, 295201629, 314150651, 344522006, 345820018, 356870519, 359465995, 381426052, 411931944, 413967849, 490095650, 516638363, 528817523, 540075053, 575306929, 622935541, 656525782, 656716352, 657315004, 666165033, 704004523, 715418392, 737966680, 743391842, 771673879, 775985163, 788367256, 825090028, 829488170, 879670887, 885710917, 899374912, 910886514, 932432290, 1000000000};
    int largeJump = 999999989;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> holes = {2, 3864849, 26459466, 56139741, 66677344, 68854558, 96705496, 119040502, 139306330, 144717136, 185831892, 204316168, 207864833, 221525398, 229933035, 249798835, 292721429, 294330301, 355532379, 372354476, 426246395, 436399490, 549269509, 549986418, 563901312, 574956416, 581622476, 591167082, 606806541, 669350031, 670725253, 680907246, 688842402, 758821391, 765182018, 798941123, 803524274, 804532735, 826098833, 877407578, 880383587, 888003571, 907867819, 932285902, 960611386, 961475214, 980640900, 991317783, 999894381, 1000000000};
    int largeJump = 999999988;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> holes = {2, 19475, 19136922, 19156395, 50705048, 50724521, 52027692, 52047165, 122007268, 122026741, 134174726, 134194199, 209843484, 209862957, 278891302, 278910775, 308743464, 308762937, 385262370, 385281843, 397904816, 397924289, 424216904, 424236377, 440252800, 440272273, 499372384, 499391857, 544793860, 544813333, 581523934, 581543407, 641285352, 641304825, 709495486, 709514959, 782036960, 782056433, 806813102, 806832575, 818876430, 818895903, 844766132, 844785605, 850245746, 850265219, 902863316, 902882789, 999980526, 999999999};
    int largeJump = 19475;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> holes = {2, 19475, 19136922, 19156395, 50705048, 50724521, 52027693, 52047166, 122007269, 122026742, 134174726, 134194199, 209843485, 209862958, 278891303, 278910776, 308743465, 308762938, 385262371, 385281844, 397904816, 397924289, 424216904, 424236377, 440252801, 440272274, 499372384, 499391857, 544793861, 544813334, 581523934, 581543407, 641285353, 641304826, 709495487, 709514960, 782036960, 782056433, 806813103, 806832576, 818876430, 818895903, 844766132, 844785605, 850245747, 850265220, 902863317, 902882790, 999980526, 999999999};
    int largeJump = 19475;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> holes = {2, 19475, 19136923, 19156396, 50705049, 50724522, 52027693, 52047166, 122007269, 122026742, 134174726, 134194199, 209843485, 209862958, 278891304, 278910777, 308743466, 308762939, 385262372, 385281845, 397904817, 397924290, 424216904, 424236377, 440252801, 440272274, 499372385, 499391858, 544793861, 544813334, 581523934, 581543407, 641285353, 641304826, 709495487, 709514960, 782036961, 782056434, 806813103, 806832576, 818876430, 818895903, 844766132, 844785605, 850245747, 850265220, 902863318, 902882791, 999980526, 999999999};
    int largeJump = 19475;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> holes = {2, 19475, 19136924, 19156397, 50705049, 50724522, 52027693, 52047166, 122007269, 122026742, 134174726, 134194199, 209843486, 209862959, 278891304, 278910777, 308743466, 308762939, 385262372, 385281845, 397904818, 397924291, 424216904, 424236377, 440252802, 440272275, 499372386, 499391859, 544793861, 544813334, 581523934, 581543407, 641285353, 641304826, 709495488, 709514961, 782036961, 782056434, 806813104, 806832577, 818876430, 818895903, 844766132, 844785605, 850245748, 850265221, 902863319, 902882792, 999980526, 999999999};
    int largeJump = 19475;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> holes = {3, 19476, 19136925, 19156398, 50705050, 50724523, 52027693, 52047166, 122007269, 122026742, 134174726, 134194199, 209843486, 209862959, 278891304, 278910777, 308743467, 308762940, 385262372, 385281845, 397904818, 397924291, 424216904, 424236377, 440252802, 440272275, 499372387, 499391860, 544793861, 544813334, 581523935, 581543408, 641285354, 641304827, 709495489, 709514962, 782036961, 782056434, 806813105, 806832578, 818876430, 818895903, 844766133, 844785606, 850245748, 850265221, 902863319, 902882792, 999980526, 999999999};
    int largeJump = 19475;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> holes = {3, 19476, 19136925, 19156398, 50705050, 50724523, 52027693, 52047166, 122007270, 122026743, 134174727, 134194200, 209843486, 209862959, 278891305, 278910778, 308743467, 308762940, 385262372, 385281845, 397904818, 397924291, 424216904, 424236377, 440252802, 440272275, 499372388, 499391861, 544793862, 544813335, 581523936, 581543409, 641285354, 641304827, 709495490, 709514963, 782036962, 782056435, 806813106, 806832579, 818876431, 818895904, 844766134, 844785607, 850245748, 850265221, 902863319, 902882792, 999980526, 999999999};
    int largeJump = 19475;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> holes = {34792622, 34793569, 60388039, 60388070, 118373036, 118374099, 193588276, 193589248, 214212103, 214212222, 265581936, 265582513, 270106899, 270107064, 281144323, 281145231, 299818371, 299818538, 324894092, 324894576, 325311785, 325311860, 405370250, 405370898, 483231893, 483232898, 586903191, 586903332, 653341747, 653342207, 670563773, 670564394, 688879358, 688880095, 735685029, 735685820, 769486534, 769486997, 800739350, 800739418, 917732309, 917733246, 939358065, 939358207, 955427140, 955427590, 994952936, 994953868};
    int largeJump = 1093;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> holes = {38660980, 38661841, 93850832, 93851417, 134192940, 134193639, 159130943, 159131033, 210059525, 210060664, 332806268, 332807070, 378334980, 378335106, 379506787, 379506973, 518843992, 518844157, 567286120, 567287076, 582597970, 582598447, 603161267, 603161751, 640293204, 640294214, 758790139, 758790658, 773289878, 773290161, 787635418, 787636309, 852097930, 852098892, 904270330, 904270544, 918478942, 918478999, 936868126, 936868529, 982903667, 982903813};
    int largeJump = 1179;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> holes = {17021348, 17171220, 17935230, 19144628, 45604875, 52553499, 90294211, 100139628, 123205657, 142095025, 167455469, 181211271, 185855156, 220656393, 255210367, 263768600, 275813362, 281466652, 282158873, 283835067, 295975677, 319781051, 333367706, 338509168, 347308557, 348845044, 352046582, 361500706, 378613392, 385910783, 405398544, 422387295, 433172912, 433402275, 433427907, 466672031, 502789117, 528780163, 588673592, 662092506, 695171219, 719480718, 788977723, 802099272, 836389441, 861252758, 962496761, 972062906};
    int largeJump = 554414857;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> holes = {28279844, 28553968, 68282424, 68464208, 101386490, 101711191, 107082214, 107085610, 132132290, 132447740, 281682906, 281717598, 485361710, 485496380, 544534492, 544714793, 597546983, 597860746, 618691564, 618791172, 627752334, 628071304, 640482387, 640721066, 670966727, 670987094, 676067008, 676151624, 678277723, 678500986, 680805774, 680921426, 692926810, 693086272, 713084832, 713190178, 784488103, 784788783, 848235002, 848564497, 860189970, 860216313, 896865207, 897160632, 915779464, 915933766, 925150748, 925202137, 954463311, 954769905};
    int largeJump = 331223;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> holes = {7233584, 7241933, 25338518, 25346867, 30307246, 30315595, 45074038, 45082387, 158111552, 158119901, 318491466, 318499815, 346023978, 346032327, 348722098, 348730447, 409692216, 409700565, 470293840, 470302189, 482552630, 482560979, 518345590, 518353939, 604043854, 604052203, 607380530, 607388879, 637555220, 637563569, 645898482, 645906831, 710312550, 710320899, 740547806, 740556155, 742078434, 742086783, 784779024, 784787373, 785902296, 785910645, 822824644, 822832993, 898418430, 898426779, 919039078, 919047427, 972095864, 972104213};
    int largeJump = 8351;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> holes = {50313856, 50319479, 94705460, 94711083, 111602102, 111607725, 193444752, 193450375, 208945072, 208950695, 224525440, 224531063, 252185146, 252190769, 293566790, 293572413, 325915784, 325921407, 347109814, 347115437, 365985110, 365990733, 428474732, 428480355, 511838058, 511843681, 551462044, 551467667, 553302230, 553307853, 570255264, 570260887, 657794544, 657800167, 662979466, 662985089, 679047670, 679053293, 717721906, 717727529, 738741986, 738747609, 889111146, 889116769, 901182574, 901188197, 921910096, 921915719, 933485784, 933491407};
    int largeJump = 5625;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> holes = {62642776, 62643613, 67723510, 67724347, 72794360, 72795197, 81541470, 81542307, 92427208, 92428045, 94800302, 94801139, 125494600, 125495437, 209239980, 209240817, 268879442, 268880279, 275824010, 275824847, 276341670, 276342507, 297942944, 297943781, 323914802, 323915639, 383846678, 383847515, 390391224, 390392061, 514084740, 514085577, 713540316, 713541153, 743853860, 743854697, 763214330, 763215167, 819550284, 819551121, 823594330, 823595167, 834167436, 834168273, 884500164, 884501001, 885726880, 885727717, 890746698, 890747535};
    int largeJump = 839;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> holes = {125826848, 125835837, 242717274, 242726263, 242897020, 242906009, 249052196, 249061185, 257934192, 257943181, 323219658, 323228647, 329772480, 329781469, 385319646, 385328635, 451880912, 451889901, 466735826, 466744815, 499840910, 499849899, 546736498, 546745487, 548504930, 548513919, 613361082, 613370071, 663372664, 663381653, 672986186, 672995175, 703645498, 703654487, 723436808, 723445797, 773131926, 773140915, 860273022, 860282011, 888507964, 888516953, 914497020, 914506009, 926481740, 926490729, 962257348, 962266337, 973240654, 973249643};
    int largeJump = 8991;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> holes = {24914158, 24918459, 26840560, 26844861, 65355490, 65359791, 81447690, 81451991, 158132900, 158137201, 184727884, 184732185, 191248844, 191253145, 211810064, 211814365, 268297810, 268302111, 364161362, 364165663, 474674496, 474678797, 561500464, 561504765, 572679140, 572683441, 587644770, 587649071, 596972988, 596977289, 623092660, 623096961, 634655228, 634659529, 651564438, 651568739, 684460582, 684464883, 712647702, 712652003, 725237392, 725241693, 781849344, 781853645, 838878150, 838882451, 950425078, 950429379, 961810842, 961815143};
    int largeJump = 4303;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> holes = {2, 1525386, 1525389, 1525473, 1525562, 1525646, 1525735, 1525819, 1525908, 1525992, 1526081, 1526165, 1526254, 1526338, 1526427, 1526511, 1526600, 1526684, 1526773, 1526857, 1526946, 1527030, 1527119, 1527203, 1527292, 1527376, 1527465, 3050773, 3050863, 3050946, 3051036, 3051119, 3051209, 3051292, 3051382, 3051465, 3051555, 3051638, 3051728, 3051811, 3051901, 3051984, 3052074, 3052157, 3052247, 3052330, 3052420, 3052503, 3052593, 4577977};
    int largeJump = 1525387;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> holes = {2, 4388660, 4388663, 4388749, 4388840, 4388926, 4389017, 4389103, 4389194, 4389280, 4389371, 4389457, 4389548, 4389634, 4389725, 4389811, 4389902, 4389988, 4390079, 4390165, 4390256, 4390342, 4390433, 4390519, 4390610, 4390696, 4390787, 8777321, 8777413, 8777498, 8777590, 8777675, 8777767, 8777852, 8777944, 8778029, 8778121, 8778206, 8778298, 8778383, 8778475, 8778560, 8778652, 8778737, 8778829, 8778914, 8779006, 8779091, 8779183, 13167841};
    int largeJump = 4388661;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> holes = {2, 722456, 722459, 722477, 722500, 722518, 722541, 722559, 722582, 722600, 722623, 722641, 722664, 722682, 722705, 722723, 722746, 722764, 722787, 722805, 722828, 722846, 722869, 722887, 722910, 722928, 722951, 1444913, 1444937, 1444954, 1444978, 1444995, 1445019, 1445036, 1445060, 1445077, 1445101, 1445118, 1445142, 1445159, 1445183, 1445200, 1445224, 1445241, 1445265, 1445282, 1445306, 1445323, 1445347, 2167801};
    int largeJump = 722457;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> holes = {2, 2073708, 2073711, 2073801, 2073896, 2073986, 2074081, 2074171, 2074266, 2074356, 2074451, 2074541, 2074636, 2074726, 2074821, 2074911, 2075006, 2075096, 2075191, 2075281, 2075376, 2075466, 2075561, 2075651, 2075746, 2075836, 2075931, 4147417, 4147513, 4147602, 4147698, 4147787, 4147883, 4147972, 4148068, 4148157, 4148253, 4148342, 4148438, 4148527, 4148623, 4148712, 4148808, 4148897, 4148993, 4149082, 4149178, 4149267, 4149363, 6223069};
    int largeJump = 2073709;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> holes = {2, 2088322, 2088325, 2088421, 2088522, 2088618, 2088719, 2088815, 2088916, 2089012, 2089113, 2089209, 2089310, 2089406, 2089507, 2089603, 2089704, 2089800, 2089901, 2089997, 2090098, 2090194, 2090295, 2090391, 2090492, 2090588, 2090689, 4176645, 4176747, 4176842, 4176944, 4177039, 4177141, 4177236, 4177338, 4177433, 4177535, 4177630, 4177732, 4177827, 4177929, 4178024, 4178126, 4178221, 4178323, 4178418, 4178520, 4178615, 4178717, 6267037};
    int largeJump = 2088323;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> holes = {187640193, 187640493, 187640738, 187640845, 564588641, 564588679, 564588696, 564588907, 605671187, 605671278, 605671288, 605671386, 755723729, 755723774, 755723880, 755723920, 795077469, 795077625, 795077851, 795078039, 945654724, 945654815, 945655107, 945655323};
    int largeJump = 475;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> holes = {1, 2};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {187640193, 187640493, 187640738, 187640845, 564588641, 564588679, 564588696, 564588907, 605671187, 605671278, 605671288, 605671386, 755723729, 755723774, 755723880, 755723920, 795077469, 795077625, 795077851, 795078039, 945654724, 945654815, 945655107, 945655323};
    int largeJump = 475988899;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> holes = {2, 3};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
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
    vector<int> holes = {1, 4, 7, 10};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> holes = {1, 2, 10, 11};
    int largeJump = 1000;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> holes = {1, 1000000000};
    int largeJump = 5;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> holes = {2, 4};
    int largeJump = 3;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> holes = {3, 5, 8, 19, 27, 36, 101, 105, 109, 131, 240, 245, 246, 247, 248, 250, 251, 252};
    int largeJump = 101;
    RabbitJumping* pObj = new RabbitJumping();
    clock_t start = clock();
    int result = pObj->getMinimum(holes, largeJump);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22884027&rd=14156&pm=10882
********************************************************************************
#include <map> 
#include <cassert> 
#include <set> 
#include <sstream> 
#include <cstdio> 
#include <cmath> 
#include <iostream> 
#include <algorithm> 
#include <cstdlib> 
#include <queue> 
#include <iomanip> 
#include <cctype> 
#include <string> 
#include <cstring> 
#include <functional> 
#include <vector> 
 
typedef long long ll; 
#define sz(a) int((a).size()) 
 
using namespace std; 
 
class RabbitJumping { 
public: 
  int getMinimum(vector <int> holes, int largeJump); 
}; 
 
long long from[200], to[200]; 
int isodd[200]; 
int n; 
int num; 
 
bool xxx(ll f1, ll t1, ll f2, ll t2) 
{ 
  ll ff = max(f1, f2); 
  ll tt = min(t1, t2); 
  return ff <= tt; 
} 
 
bool cango(int i, int j, int dd) 
{ 
  if (dd % 2 != abs(from[i] - from[j]) % 2) return false; 
  long long f2 = from[i] + dd, t2 = to[i] + dd; 
  if (xxx(f2, t2, from[j], to[j])) return true; 
  f2 = from[i] - dd, t2 = to[i] - dd; 
  if (xxx(f2, t2, from[j], to[j])) return true; 
  return false; 
} 
 
int dis[200][200]; 
 
const int INF = 1000000000; 
 
int RabbitJumping::getMinimum(vector <int> holes, int largeJump) { 
  num = 0; 
  n = sz(holes) / 2; 
  from[0] = -1000000000, to[0] = holes[0] - 1, isodd[0] = 0; 
  if (to[0] % 2 != 0) --to[0]; 
  from[1] = -1000000001, to[1] = holes[0] - 1, isodd[1] = 1; 
  if (to[1] % 2 == 0) --to[1]; 
  from[2] = holes.back() + 1, to[2] = 2000000001, isodd[2] = 1; 
  if (from[2] % 2 == 0) ++from[2]; 
  from[3] = holes.back() + 1, to[3] = 2000000002, isodd[3] = 0; 
  if (from[3] % 2 != 0) ++from[3]; 
  num = 4; 
  for (int i = 0; i < n - 1; ++i) { 
    long long f = holes[i + i + 1] + 1, t = holes[i + i + 2] - 1; 
    if (f > t) continue; 
    if (f == t) { 
      from[num] = f; 
      to[num] = t; 
      isodd[num++] = f % 2; 
    } 
    else { 
      from[num] = f; 
      to[num] = t; 
      isodd[num] = 0; 
      if (from[num] % 2 != 0) ++from[num]; 
      if (to[num] % 2 != 0) --to[num]; 
      ++num; 
 
      from[num] = f; 
      to[num] = t; 
      isodd[num] = 1; 
      if (from[num] % 2 != 1) ++from[num]; 
      if (to[num] % 2 != 1) --to[num]; 
      ++num; 
    } 
  } 
  /*for (int i = 0; i < num; ++i) { 
    assert(abs(from[i]) % 2 == isodd[i]); 
    assert(abs(to[i]) % 2 == isodd[i]); 
  }*/ 
  for (int i = 0; i < num; ++i) { 
    for (int j = 0; j < num; ++j) { 
      if (i == j) { 
        dis[i][j] = 0; 
      } 
      else if (cango(i, j, 2)) { 
        dis[i][j] = 0; 
      } 
      else if (cango(i, j, largeJump)) { 
        dis[i][j] = 1; 
      } 
      else { 
        dis[i][j] = INF; 
      } 
    } 
  } 
  for (int k = 0; k < num; ++k) { 
    for (int i = 0; i < num; ++i) { 
      for (int j = 0; j < num; ++j) { 
        dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]); 
      } 
    } 
  } 
  if (dis[0][2] == INF) return -1; 
  else return dis[0][2]; 
} 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
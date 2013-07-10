/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11432
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

class TheJackpotDivTwo {
public:
    vector<int> find(vector<int> money, int jackpot);
};

vector<int> TheJackpotDivTwo::find(vector<int> money, int jackpot) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> money = {1, 2, 3, 4};
    int jackpot = 2;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 3, 4};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> money = {4, 7};
    int jackpot = 1;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 7};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> money = {1};
    int jackpot = 100;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> money = {21, 85, 6, 54, 70, 100, 91, 60, 71};
    int jackpot = 15;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 21, 54, 60, 70, 71, 85, 91, 100};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> money = {68, 30, 5, 66, 69, 25, 58};
    int jackpot = 55;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 38, 39, 58, 66, 68, 69};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> money = {45, 44, 24, 92, 29, 94};
    int jackpot = 45;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {46, 47, 47, 47, 92, 94};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> money = {29, 10};
    int jackpot = 86;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {62, 63};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> money = {234, 787, 946, 660, 348, 966, 801, 1000, 409, 292, 13, 515, 712, 770, 56, 157, 685, 254, 521, 976, 499, 477, 391, 352, 339, 474, 547, 371, 206};
    int jackpot = 4415;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {572, 572, 572, 572, 572, 572, 572, 572, 572, 572, 572, 572, 572, 572, 572, 572, 572, 573, 573, 660, 685, 712, 770, 787, 801, 946, 966, 976, 1000};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> money = {683, 873, 400, 773, 25, 441, 302, 854, 5, 180, 762, 729, 241, 390, 312, 663, 806, 661, 564, 831, 617, 95, 11, 585, 871, 14, 831, 726, 251, 164, 773, 723};
    int jackpot = 3283;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {436, 436, 436, 436, 436, 436, 436, 436, 437, 437, 437, 437, 437, 441, 564, 585, 617, 661, 663, 683, 723, 726, 729, 762, 773, 773, 806, 831, 831, 854, 871, 873};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> money = {776, 30, 879, 284, 778, 976, 78, 153, 295, 780, 444, 635, 160, 839, 6, 850, 682, 665, 298, 491};
    int jackpot = 2658;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {489, 489, 489, 489, 490, 490, 490, 490, 490, 491, 635, 665, 682, 776, 778, 780, 839, 850, 879, 976};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> money = {978, 67, 515, 92, 742, 826, 985, 766, 482, 323, 942, 704, 754, 550, 542, 403, 622, 422, 594, 533, 642, 811, 70, 79, 507, 966, 946, 383, 290, 280};
    int jackpot = 3242;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {548, 548, 548, 548, 548, 549, 549, 549, 549, 549, 549, 549, 549, 549, 549, 550, 594, 622, 642, 704, 742, 754, 766, 811, 826, 942, 946, 966, 978, 985};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> money = {492, 500, 127, 974, 888, 992, 192, 348, 420, 905, 989, 188, 430, 916, 456, 261, 356, 512, 791, 713, 812, 56, 732};
    int jackpot = 7043;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {848, 848, 848, 848, 849, 849, 849, 849, 849, 849, 849, 849, 849, 849, 849, 849, 849, 888, 905, 916, 974, 989, 992};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> money = {535, 431, 266, 274, 680, 371, 332, 157, 676, 834, 893, 101, 436, 359, 130, 389};
    int jackpot = 74;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {152, 153, 157, 266, 274, 332, 359, 371, 389, 431, 436, 535, 676, 680, 834, 893};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> money = {312, 422, 366, 517, 831, 896, 625, 232, 421, 434, 138, 999, 622, 16, 787, 237, 129, 902, 984, 704, 740, 893, 960, 586, 740, 569, 307, 642, 992, 295, 244, 139, 325, 744, 253, 867, 886, 839};
    int jackpot = 3748;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {501, 501, 501, 501, 501, 501, 501, 501, 501, 501, 501, 501, 501, 501, 502, 502, 517, 569, 586, 622, 625, 642, 704, 740, 740, 744, 787, 831, 839, 867, 886, 893, 896, 902, 960, 984, 992, 999};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> money = {147, 518, 454};
    int jackpot = 7816;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2978, 2978, 2979};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> money = {386, 317, 526, 271, 458, 760, 852, 283, 330, 527, 458, 923, 353, 175, 116, 455, 684, 209, 37, 451, 17, 956, 299, 601, 158, 991, 721, 389, 83, 169, 691, 321, 181};
    int jackpot = 560;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {187, 187, 187, 187, 187, 187, 187, 187, 209, 271, 283, 299, 317, 321, 330, 353, 386, 389, 451, 455, 458, 458, 526, 527, 601, 684, 691, 721, 760, 852, 923, 956, 991};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> money = {799, 51, 1000, 542, 721, 272, 59};
    int jackpot = 8447;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1698, 1698, 1699, 1699, 1699, 1699, 1699};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> money = {495, 17, 291, 162, 17, 229, 789, 293, 45, 477, 113, 969, 47, 294, 314, 330, 588, 444, 144, 243, 292, 370, 661, 508, 537, 842, 197, 990, 394, 974, 975, 761};
    int jackpot = 9563;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {682, 682, 682, 682, 682, 682, 682, 682, 682, 682, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 761, 789, 842, 969, 974, 975, 990};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> money = {184, 296, 723, 676, 866, 644, 443, 974, 913, 627, 90, 561, 950, 125, 397};
    int jackpot = 1316;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {475, 475, 475, 475, 475, 476, 561, 627, 644, 676, 723, 866, 913, 950, 974};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> money = {464, 773, 650, 241, 353, 530, 970, 287, 473, 1000, 901, 406, 529, 912, 396, 221, 278, 590, 903, 682, 52, 333, 159, 687, 60, 328, 586, 355, 778, 613, 797};
    int jackpot = 8891;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {788, 788, 788, 788, 788, 788, 788, 788, 788, 788, 789, 789, 789, 789, 789, 789, 789, 789, 789, 789, 789, 789, 789, 789, 789, 797, 901, 903, 912, 970, 1000};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> money = {51409, 775292, 632499, 702694, 216903, 650254, 27966, 31515, 825584, 346289, 137660, 374770, 987391, 753560, 533801, 925976, 486946, 758782, 993966, 771479, 440289, 202521, 708371, 980234, 833474, 358787, 461339, 712644, 839685, 616000, 364239, 882056, 899129, 21547, 819352, 304953, 910546, 110966, 9348, 225148, 809013, 142477, 720206, 465157, 465712, 807787};
    int jackpot = 314415;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {91240, 91240, 91240, 91240, 91240, 110966, 137660, 142477, 202521, 216903, 225148, 304953, 346289, 358787, 364239, 374770, 440289, 461339, 465157, 465712, 486946, 533801, 616000, 632499, 650254, 702694, 708371, 712644, 720206, 753560, 758782, 771479, 775292, 807787, 809013, 819352, 825584, 833474, 839685, 882056, 899129, 910546, 925976, 980234, 987391, 993966};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> money = {443170, 200279, 543594, 795108, 946609, 493146, 659602, 265497, 80153, 322766, 886555, 229255, 908157, 924753, 208602, 858712};
    int jackpot = 237703;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {238998, 238998, 238998, 238998, 265497, 322766, 443170, 493146, 543594, 659602, 795108, 858712, 886555, 908157, 924753, 946609};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> money = {890012, 116029, 470320, 816017, 942596, 858764, 250074, 241011, 788771, 17414, 912567, 300822, 503049, 325555, 575971, 684445, 97923, 627656, 900068, 75443, 84581, 202059, 154973, 207898, 741248, 946346, 841874, 344274, 731653, 442689, 496887, 16223, 977935, 473270, 501961, 446142, 517957, 177700, 45329, 517747, 36539, 704982, 311634, 202168, 420335, 649560};
    int jackpot = 904061;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {172057, 172057, 172057, 172057, 172057, 172057, 172057, 172058, 172058, 177700, 202059, 202168, 207898, 241011, 250074, 300822, 311634, 325555, 344274, 420335, 442689, 446142, 470320, 473270, 496887, 501961, 503049, 517747, 517957, 575971, 627656, 649560, 684445, 704982, 731653, 741248, 788771, 816017, 841874, 858764, 890012, 900068, 912567, 942596, 946346, 977935};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> money = {529994, 221797, 452370, 369172, 252569, 166697, 921491, 316381};
    int jackpot = 599964;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {385316, 385316, 385316, 385316, 385316, 452370, 529994, 921491};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> money = {715130, 644816, 502897, 488410, 384811, 20356, 342196, 317555, 204330, 436294, 348098, 791535, 409314, 15590, 908714, 670140, 953083, 633483, 145444, 601159, 320586, 678065, 415854, 923805, 989438, 695551, 605864, 739831, 952557, 64184, 323439, 860149, 695619, 68133, 350582};
    int jackpot = 80312;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {58129, 58129, 64184, 68133, 145444, 204330, 317555, 320586, 323439, 342196, 348098, 350582, 384811, 409314, 415854, 436294, 488410, 502897, 601159, 605864, 633483, 644816, 670140, 678065, 695551, 695619, 715130, 739831, 791535, 860149, 908714, 923805, 952557, 953083, 989438};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> money = {625178, 724975, 520142, 306497, 319341, 754069};
    int jackpot = 878680;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {662459, 662459, 662460, 662460, 724975, 754069};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> money = {272825, 650401, 875486, 912324, 125846, 714915, 851639, 236289, 456680, 181660, 339982, 727405, 392900, 782822, 124349, 952604, 399225, 966914, 105711, 13032, 265251, 132432, 413952, 939950, 418504, 618818, 21489, 116745, 677993, 61277, 208493, 607248, 175659, 516643};
    int jackpot = 501506;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {150298, 150298, 150298, 150298, 150298, 150299, 150299, 150299, 175659, 181660, 208493, 236289, 265251, 272825, 339982, 392900, 399225, 413952, 418504, 456680, 516643, 607248, 618818, 650401, 677993, 714915, 727405, 782822, 851639, 875486, 912324, 939950, 952604, 966914};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> money = {923300, 879981, 889281, 901120, 885435, 984982, 613846, 759294, 368418, 487520, 696722, 167367, 388916, 437156, 794295, 473825, 864087, 7053};
    int jackpot = 401940;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {288180, 288180, 368418, 388916, 437156, 473825, 487520, 613846, 696722, 759294, 794295, 864087, 879981, 885435, 889281, 901120, 923300, 984982};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> money = {658343, 771288, 838673, 267660, 328078, 248314, 863755, 384895, 655172};
    int jackpot = 901430;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {532594, 532594, 532594, 532595, 655172, 658343, 771288, 838673, 863755};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> money = {355460, 293041, 357139, 224493, 547394, 756371, 664782, 720146};
    int jackpot = 451797;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {420482, 420482, 420483, 420483, 547394, 664782, 720146, 756371};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> money = {753560, 833474, 21547, 632499, 461339, 925976, 304953, 27966, 486946, 465712, 142477, 533801, 465157, 202521, 364239, 374770, 987391, 899129, 358787, 980234, 708371, 771479, 440289, 225148, 31515, 993966, 758782, 346289, 9348, 882056, 650254, 720206, 839685, 819352, 807787, 216903, 809013, 775292, 137660, 910546, 616000, 702694, 51409, 825584};
    int jackpot = 972299;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {199174, 199174, 199174, 199174, 199175, 199175, 199175, 202521, 216903, 225148, 304953, 346289, 358787, 364239, 374770, 440289, 461339, 465157, 465712, 486946, 533801, 616000, 632499, 650254, 702694, 708371, 720206, 753560, 758782, 771479, 775292, 807787, 809013, 819352, 825584, 833474, 839685, 882056, 899129, 910546, 925976, 980234, 987391, 993966};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> money = {517549, 714678, 271609, 445218, 974585, 388339, 762461, 524756, 886601, 222623, 551197, 345935, 972712, 414901, 598691, 261191, 47157, 580692, 761915, 666812, 993776, 541889, 796028, 140752, 447330, 187974, 780531, 369093, 631702, 802151, 859543, 161707, 651745, 907943, 816375, 993736, 260681, 680797, 200817, 314656, 375609, 392905, 355421, 180269};
    int jackpot = 953756;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {288853, 288853, 288853, 288853, 288854, 288854, 288854, 288854, 288854, 288854, 314656, 345935, 355421, 369093, 375609, 388339, 392905, 414901, 445218, 447330, 517549, 524756, 541889, 551197, 580692, 598691, 631702, 651745, 666812, 680797, 714678, 761915, 762461, 780531, 796028, 802151, 816375, 859543, 886601, 907943, 972712, 974585, 993736, 993776};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> money = {712898, 36992, 200875, 102254, 221126, 164473, 828025, 837320, 341594, 74213, 26590, 296584, 346775, 48034, 900233, 275894, 800369, 987821, 787885, 138331, 659807, 954389, 379263, 887248, 116712, 834093, 978144, 352276, 617300, 635798, 973450, 940849, 44012, 268876, 227182, 480239, 241981, 573086, 720206, 284715, 910641, 379178, 997692, 634495, 938316, 595233, 489369};
    int jackpot = 945804;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {188601, 188601, 188601, 188602, 188602, 188602, 188602, 188602, 188602, 200875, 221126, 227182, 241981, 268876, 275894, 284715, 296584, 341594, 346775, 352276, 379178, 379263, 480239, 489369, 573086, 595233, 617300, 634495, 635798, 659807, 712898, 720206, 787885, 800369, 828025, 834093, 837320, 887248, 900233, 910641, 938316, 940849, 954389, 973450, 978144, 987821, 997692};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> money = {885610, 527500, 922573, 195658, 805023, 788683, 910476, 953188, 349363, 529405, 124594, 578589, 622326, 324491, 771937, 192694, 915108, 590176, 524277, 747349, 335906, 22175, 287159, 157385, 59634, 694339, 113353, 36107, 732264, 125157, 388959, 914592, 328676, 76702, 693220, 488801, 794571, 905783, 324386, 760128, 329498, 252637, 759800, 42506, 816802, 923253};
    int jackpot = 963707;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {191257, 191257, 191258, 191258, 191258, 191258, 191258, 191258, 191258, 192694, 195658, 252637, 287159, 324386, 324491, 328676, 329498, 335906, 349363, 388959, 488801, 524277, 527500, 529405, 578589, 590176, 622326, 693220, 694339, 732264, 747349, 759800, 760128, 771937, 788683, 794571, 805023, 816802, 885610, 905783, 910476, 914592, 915108, 922573, 923253, 953188};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> money = {928343, 9177, 106824, 515164, 447318, 14543, 796962, 254452, 126392, 779771, 983374, 593153, 962197, 858931, 521935, 518307, 930173, 355179, 724967, 296158, 288768, 589226, 536260, 258897, 972672, 137128, 731476, 409074, 636721, 183589, 96448, 395050, 476424, 876598, 597337, 281905, 128847, 461664, 109587, 823210, 262026, 120387, 733550, 3364};
    int jackpot = 986862;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {183922, 183922, 183922, 183922, 183922, 183923, 183923, 183923, 183923, 183923, 183923, 254452, 258897, 262026, 281905, 288768, 296158, 355179, 395050, 409074, 447318, 461664, 476424, 515164, 518307, 521935, 536260, 589226, 593153, 597337, 636721, 724967, 731476, 733550, 779771, 796962, 823210, 858931, 876598, 928343, 930173, 962197, 972672, 983374};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> money = {510795, 150421, 467609, 900754, 931457, 538157, 316139, 561889, 946023, 249224, 937702, 436216, 214115, 98222, 804005, 777303, 659789, 4998, 67454, 710009, 338985, 209009, 878637, 185572, 390665, 699547, 409602, 711955, 950294, 346319, 379646, 14993, 110524, 65127, 837407, 947577, 395499, 552381, 455063, 997895, 530122, 760590, 410910, 819796, 562865};
    int jackpot = 965219;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {207816, 207816, 207816, 207816, 207816, 207816, 207817, 207817, 209009, 214115, 249224, 316139, 338985, 346319, 379646, 390665, 395499, 409602, 410910, 436216, 455063, 467609, 510795, 530122, 538157, 552381, 561889, 562865, 659789, 699547, 710009, 711955, 760590, 777303, 804005, 819796, 837407, 878637, 900754, 931457, 937702, 946023, 947577, 950294, 997895};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> money = {150556, 945531, 36051, 940770, 186507, 541636, 252163, 681130, 422493, 907382, 469950, 974823, 527628, 898800, 41445, 865309, 700154, 129654, 700664, 743119, 138726, 939796, 937037, 855905, 652721, 331456, 47450, 107349, 548825, 564819, 738669, 353359, 235384, 541705, 518614, 497443, 511064, 429653, 787345, 563063, 493194, 745572, 550513, 238728, 136188, 385993, 714958};
    int jackpot = 912654;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {209620, 209620, 209620, 209620, 209620, 209620, 209620, 209620, 209620, 235384, 238728, 252163, 331456, 353359, 385993, 422493, 429653, 469950, 493194, 497443, 511064, 518614, 527628, 541636, 541705, 548825, 550513, 563063, 564819, 652721, 681130, 700154, 700664, 714958, 738669, 743119, 745572, 787345, 855905, 865309, 898800, 907382, 937037, 939796, 940770, 945531, 974823};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> money = {475925, 604136, 968683, 340751, 413817, 789283, 601068, 664527, 740573, 470238, 813233, 128411, 246700, 372146, 103383, 778460, 534212, 265138, 443197, 407043, 540314, 135896, 677391, 14691, 790058, 363966, 923115, 701041, 432600, 534961, 762482, 989406, 325080, 67854, 527767, 239588, 508677, 428624, 169952, 163648, 644844, 66020, 716619, 411107};
    int jackpot = 993288;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {230392, 230393, 230393, 230393, 230393, 230393, 230393, 230393, 239588, 246700, 265138, 325080, 340751, 363966, 372146, 407043, 411107, 413817, 428624, 432600, 443197, 470238, 475925, 508677, 527767, 534212, 534961, 540314, 601068, 604136, 644844, 664527, 677391, 701041, 716619, 740573, 762482, 778460, 789283, 790058, 813233, 923115, 968683, 989406};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> money = {689689, 253357, 938721, 359713, 25509, 339422, 243905, 369648, 895513, 273833, 560518, 202025, 690536, 687441, 572367, 216846, 407631, 511095, 888118, 591848, 703353, 271262, 810208, 161430, 846253, 627437, 65015, 414440, 603598, 652815, 308568, 380374, 480793, 484504, 216121, 575822, 516415, 78600, 871118, 722329, 809983, 993351, 165032, 484622, 456672};
    int jackpot = 956161;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {258400, 258400, 258400, 258400, 258400, 258400, 258400, 258400, 258400, 258401, 271262, 273833, 308568, 339422, 359713, 369648, 380374, 407631, 414440, 456672, 480793, 484504, 484622, 511095, 516415, 560518, 572367, 575822, 591848, 603598, 627437, 652815, 687441, 689689, 690536, 703353, 722329, 809983, 810208, 846253, 871118, 888118, 895513, 938721, 993351};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> money = {437187, 305192, 285959, 418536, 279565, 789883, 895345, 236643, 938289, 555836, 909722, 786819, 572805, 588380, 641317, 339295, 946762, 800287, 589806, 346157, 878518, 373930, 239050, 559265, 858353, 714931, 981489, 685101, 680777, 384323, 827597, 387349, 928201, 775318, 227481, 158024, 951597, 464381, 752543, 880207, 725753, 986454, 603515, 832814};
    int jackpot = 932344;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {372190, 372190, 372190, 372190, 372190, 372190, 372190, 372190, 372190, 373930, 384323, 387349, 418536, 437187, 464381, 555836, 559265, 572805, 588380, 589806, 603515, 641317, 680777, 685101, 714931, 725753, 752543, 775318, 786819, 789883, 800287, 827597, 832814, 858353, 878518, 880207, 895345, 909722, 928201, 938289, 946762, 951597, 981489, 986454};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> money = {650254};
    int jackpot = 314415;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {964669};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> money = {1};
    int jackpot = 1;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> money = {1000000};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2000000};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> money = {708371, 486946, 216903, 702694, 993966, 977333, 753560, 650254, 899129, 825584, 461339, 807787, 616000, 21547, 839685, 110966, 374770, 987391, 712644, 925976, 809013, 364239, 137660, 819352, 304953, 51409, 980234, 833474, 465712, 440289, 632499, 142477, 225148, 533801, 9348, 346289, 771479, 465157, 758782, 910546, 720206, 27966, 31515, 882056, 775292, 202521, 358787};
    int jackpot = 314415;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {91240, 91240, 91240, 91240, 91240, 110966, 137660, 142477, 202521, 216903, 225148, 304953, 346289, 358787, 364239, 374770, 440289, 461339, 465157, 465712, 486946, 533801, 616000, 632499, 650254, 702694, 708371, 712644, 720206, 753560, 758782, 771479, 775292, 807787, 809013, 819352, 825584, 833474, 839685, 882056, 899129, 910546, 925976, 977333, 980234, 987391, 993966};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> money = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> money = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> money = {46, 45, 46, 45, 45, 44, 47, 45, 44, 47, 46, 46, 47, 46, 44, 45, 45, 46, 47, 47, 44, 46, 47, 47, 44, 44, 45, 45, 47, 44, 46, 44, 47, 44, 47, 44, 46, 44, 45, 45, 45, 45, 46, 47, 47, 44, 46};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21322, 21323, 21323, 21323, 21323};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> money = {1, 3, 5};
    int jackpot = 10;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 7};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> money = {1, 2, 3};
    int jackpot = 5;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 4};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> money = {1, 7, 7, 99};
    int jackpot = 8;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 8, 8, 99};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> money = {1, 2, 3, 4};
    int jackpot = 100;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 27, 28, 28};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> money = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21277, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278, 21278};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> money = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21741, 21741, 21741, 21741, 21741, 21741, 1000000};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> money = {10, 10, 10, 15, 20};
    int jackpot = 1000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {213, 213, 213, 213, 213};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> money = {1, 2, 3, 4};
    int jackpot = 2;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 3, 4};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> money = {136548, 938081, 205283, 402969, 908484, 644125, 441142, 565846, 436934, 871032, 613824, 749142, 194390, 310123, 193682, 577327, 744933, 439119, 200266, 580337, 863199, 235949, 711260, 185871, 195187, 938315, 266310, 615961, 811796, 892468, 60074, 44300, 663158, 43499, 741651, 770202, 380338, 159439, 841669, 95764, 90698, 452791, 333657, 54684, 914179, 865625, 602904};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {204184, 204184, 204184, 204185, 204185, 204185, 204185, 204185, 204185, 204185, 204185, 204185, 204185, 205283, 235949, 266310, 310123, 333657, 380338, 402969, 436934, 439119, 441142, 452791, 565846, 577327, 580337, 602904, 613824, 615961, 644125, 663158, 711260, 741651, 744933, 749142, 770202, 811796, 841669, 863199, 865625, 871032, 892468, 908484, 914179, 938081, 938315};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> money = {10, 20, 30};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {333353, 333353, 333354};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> money = {21, 85, 6, 54, 70, 100, 91, 60, 71};
    int jackpot = 18;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 23, 54, 60, 70, 71, 85, 91, 100};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> money = {1, 51, 553, 1254, 1997, 2228, 2345, 3456, 4567, 4567, 3456, 3459, 3452, 4387, 4551, 2334, 5443, 77654, 56443, 45562, 33562, 11234, 9999, 9665, 33567};
    int jackpot = 999999;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51812, 51812, 51812, 51812, 51812, 51812, 51812, 51812, 51812, 51812, 51813, 51813, 51813, 51813, 51813, 51813, 51813, 51813, 51813, 51813, 51813, 51813, 51813, 56443, 77654};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> money = {1, 4, 2, 3};
    int jackpot = 100;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 27, 28, 28};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> money = {1000000};
    int jackpot = 50;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000050};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> money = {40, 44, 34, 32415, 2314, 2314, 21334, 234, 2354, 543, 5341, 52354, 234, 1234, 1234, 4234, 234, 234, 234, 3145, 345, 345, 345, 3, 54123, 4, 234, 234, 2134, 213, 4, 213, 23, 4, 2134, 213, 423, 4123, 4, 234, 213, 4213, 4213, 4, 2134, 213, 4213};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24358, 24359, 24359, 24359, 24359, 24359, 24359, 24359, 24359, 24359, 24359, 24359, 24359, 24359, 24359, 24359, 24359, 24359, 24359, 32415, 52354, 54123};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> money = {8, 7, 6, 9, 1, 2000};
    int jackpot = 2;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6, 7, 8, 9, 2000};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> money = {1, 1, 1, 2};
    int jackpot = 1;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> money = {4, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 234234, 4324, 213, 656565, 154, 687667, 123325, 123436, 123456, 123456, 999999, 123436, 123457, 546344, 555345, 123123, 11111, 67777, 9879, 6654, 43324, 2323, 12312, 23123, 432432, 23123, 321312, 32};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {86025, 86025, 86025, 86025, 86025, 86025, 86025, 86025, 86025, 86025, 86025, 86026, 86026, 86026, 123123, 123325, 123436, 123436, 123456, 123456, 123457, 234234, 321312, 432432, 546344, 555345, 656565, 687667, 999999, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> money = {1};
    int jackpot = 100;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> money = {4, 4};
    int jackpot = 2;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> money = {1, 3, 5, 7};
    int jackpot = 4;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 5, 7};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> money = {1, 1, 1, 1, 1, 1, 1};
    int jackpot = 200;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 29, 29, 30, 30, 30, 30};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> money = {2, 2, 2, 2, 1, 1, 1, 1, 14, 4, 4, 2, 2, 2, 2, 4, 4, 4, 4, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 5, 5, 5, 5, 47, 1, 1, 7, 2, 2, 2, 3, 3, 3, 2};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22731, 22732, 22732, 22732, 22732, 22732, 22732, 22732};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> money = {2, 2};
    int jackpot = 1;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> money = {2, 2, 3, 4};
    int jackpot = 1;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 3, 4};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> money = {2, 2, 3, 4};
    int jackpot = 2;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 3, 4};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> money = {1, 1, 1, 1, 1};
    int jackpot = 3;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> money = {1, 2, 2, 2, 2, 3, 4};
    int jackpot = 2;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 2, 3, 3, 4};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> money = {6, 6, 10, 12, 6};
    int jackpot = 2;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 7, 10, 12};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> money = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22227, 22228, 22228, 22228, 22228, 22228, 22228, 22228, 22228, 22228, 22228};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> money = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000};
    int jackpot = 999999;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38462, 38462, 38462, 38462, 38462, 38462, 38462, 38462, 38462, 38462, 38462, 38462, 38462, 38463, 38463, 38463, 38463, 38463, 38463, 38463, 38463, 38463, 38463, 38463, 38463, 38463, 1000000};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> money = {1, 1};
    int jackpot = 10;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> money = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21740, 21741, 21741, 21741, 21741, 21741, 21741};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> money = {10, 10, 10, 10};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {250010, 250010, 250010, 250010};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> money = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21300, 21300, 21300, 21300, 21300, 21300, 21300, 21300, 21300, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301, 21301};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> money = {1, 2, 3, 4};
    int jackpot = 42;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 13, 13};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> money = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021276, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277, 1021277};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> money = {1, 1, 1, 1, 2, 2, 2, 3, 17, 50, 19, 49};
    int jackpot = 1;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2, 2, 2, 2, 3, 17, 19, 49, 50};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> money = {5, 6, 100};
    int jackpot = 3;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 100};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> money = {4, 3, 2, 1};
    int jackpot = 1;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> money = {1, 2, 3};
    int jackpot = 10;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 6};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> money = {1, 2};
    int jackpot = 2;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> money = {3, 2, 1};
    int jackpot = 3;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 3};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> money = {1, 1, 1};
    int jackpot = 1000000;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {333334, 333334, 333335};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> money = {2, 2};
    int jackpot = 50;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 27};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> money = {1, 1};
    int jackpot = 1;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> money = {2, 3, 5};
    int jackpot = 3;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 5};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> money = {999999, 999999, 999999, 999999};
    int jackpot = 100;
    TheJackpotDivTwo* pObj = new TheJackpotDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(money, jackpot);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000024, 1000024, 1000024, 1000024};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22881763&rd=14514&pm=11432
********************************************************************************
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
 
#define rep(i,n) for(__typeof(n) i=0; i<(n); i++)
#define FOR(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define inf (1<<30)
#define eps 1e-9
#define pb push_back
#define clr clear()
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define rev reverse
#define mem(x) memset(x,0,sizeof(x));
 
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
 
using namespace std;
 
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef map<int,st> mis;
typedef set<int> si;
typedef set<st> ss;
 
vs token(st a,st b) {const char *q=a.c_str();while(count(all(b),*q)) q++;vs oot;while(*q){const char *e=q;while(*e && !count(all(b),*e)) e++;oot.pb(st(q,e));q = e;while(count(all(b),*q))q++;}return oot;}
st itoa(i64 a){st ret;for(i64 i=a; i>0; i=i/10) ret+=((i%10)+48);rev(all(ret));return ret;}
int toInt(st s){int r=0;istringstream sin(s);sin>>r;return r;}
i64 toInt64(st s){i64 r=0;istringstream sin(s);sin>>r;return r;}
double toDouble(st s){double r=0;istringstream sin(s);sin>>r;return r;}
 
 
template<class T> inline T gcd(T a,T b) {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
template<class T> inline T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));}
template<class T> inline T sqr(T x){return x*x;}
template<class T> inline T power(T x,T p){if(!p) return 1;return x*power(x,p-1);}
 
const int mx=0;
 
struct TheJackpotDivTwo{
vector <int> find(vector <int> money, int jackpot)
{
  sort(all(money));
  for(int i=1; i<=jackpot; i++)
  {
    money[0]++;
    sort(all(money));
  }
    return money;
}
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
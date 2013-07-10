/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8454
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

class ContiguousSubsequences {
public:
    vector<int> findMaxAverage(vector<int> a, int K);
};

vector<int> ContiguousSubsequences::findMaxAverage(vector<int> a, int K) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> a = {1, 3, 7};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> a = {5, 1, 3, 4};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> a = {10};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> a = {381, 921, 513, 492, 135, 802, 91, 519};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> a = {381, 921, 513, 492, 135, 802, 91, 519};
    int K = 4;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> a = {1, 1, 1, 0, 0, 1, 1, 1};
    int K = 4;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> a = {0, 0, 0, 0, 0};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {12, 10, 12, 0, 12, 12, 12};
    int K = 4;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {0};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> a = {10, 3, 4, 5, 10};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> a = {1, 9, 10, 3, 4, 6, 9, 10};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> a = {3, 5, 7, 7, 2, 5, 4, 7, 7, 2, 4};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> a = {787426, 786742, 786602, 787471, 786648, 786851, 787399, 786987, 787228, 786781, 786815, 786760, 787123, 786982, 787215, 786516, 787203, 786477, 786575, 787456, 787003, 787418, 787311, 787208, 786792, 787334, 787384, 786784, 787316, 787317, 786613, 787386, 787192, 786905, 786951, 786864, 786698, 787012, 787392, 787234, 787379, 786889};
    int K = 16;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 34};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> a = {481535, 481257, 481024, 480998, 481043, 481729, 481548, 481442, 480858, 481263, 481703, 481239, 481600, 481124, 481086, 481721, 481712, 481183, 481381, 480866, 480985, 481543, 481580, 481577, 480920, 481048, 481328, 481421, 480776, 480835, 480866, 481000, 481659, 481245, 481504, 481041, 480811, 481185, 481046, 481193, 480961, 481106};
    int K = 11;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 16};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> a = {674244, 674371, 674371, 674459, 674904, 674810, 674553, 675199, 675075, 675004, 674476, 674473, 674808, 674756, 674942, 674641, 674251, 674584, 675231, 675135, 675185, 675115, 674905, 674673, 675143, 674813, 675223, 674326, 674262, 674849, 675182, 674277, 675163, 674556, 674309, 674427, 674957, 674349, 675057, 674583, 674392, 674341, 674849, 674892, 675142, 674475, 674681, 675130, 675189, 674596};
    int K = 26;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 32};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> a = {174606, 175205, 175148, 175006, 175216, 174928, 175070, 175473, 175048, 175137, 174939, 175249, 174624, 174528, 174981, 174958, 174694, 175394, 175250, 174844, 174646, 174487, 174966, 174848, 175102, 174741, 175267, 175456, 175421, 175029, 174577, 175267, 175249, 175187, 174491, 175360, 175221, 175276, 174592, 174955, 174699, 175328, 175155, 174914, 174739, 174646, 174744, 174741};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> a = {553962, 553977, 554160, 554548, 554504, 553877, 553661, 553612, 554365, 554222, 553942, 554233, 553634, 553966, 554358, 554120, 554542, 553886, 553813, 553815, 553597, 553901, 554092, 553645, 554327, 554496, 553827, 554539, 554503, 553766, 553723, 553987, 554194, 554103, 554477, 553899, 554255, 554056, 553856, 553646, 553758, 553926};
    int K = 35;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 36};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> a = {300238, 300223, 299564, 299464, 299900, 299757, 299635, 299536, 299959, 299719, 299507, 299515, 299679, 300391, 300417, 300442, 300193, 299502, 300228, 299894, 299745, 300311, 299824, 300271, 299828, 299994, 300324, 300204, 300183, 300045, 300297, 300401, 299760, 299773, 299959, 299815, 300103, 299858, 300053, 299845, 300312, 300424, 299460, 299796, 299720, 299506};
    int K = 13;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 31};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {109439, 109220, 109696, 109033, 109695, 109618, 109088, 109199, 109627, 109501, 109216, 109443, 109679, 109156, 109028, 109408, 109451, 109187, 109326, 109362, 109344, 109447, 109542, 109812, 109131, 109725, 109086, 109014, 109294, 109663, 108939, 109848, 109518, 109604, 109031, 109815, 109887, 109403, 109356, 109730, 109083, 109740, 109475, 109355, 109265, 109083, 109394, 109693, 109258, 109090};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 36};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> a = {618467, 618997, 618724, 618505, 618903, 618450, 618731, 618871, 618988, 619221, 618904, 619152, 618792, 618880, 618375, 619105, 618718, 619005, 619211, 619038, 618484, 618456, 619257, 618848, 619050, 619312, 618428, 618750, 619086, 618607, 619198, 619060, 618984, 618752, 618527, 618721, 618863, 618968, 618525, 618706, 618871, 618757};
    int K = 14;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 25};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {804350, 804742, 804604, 804525, 804929, 804641, 804635, 804396, 804622, 805114, 805162, 804651, 805062, 804858, 804461, 805289, 805015, 804460, 805139, 805288, 805197, 804341, 804971, 804607, 805198, 804975, 805046, 804693, 804976, 804601, 804362, 804918, 804402, 804818, 804728, 805123, 804580, 804764, 804316, 804553, 805083, 804342, 804791, 804556, 804813, 804738, 804962, 804341, 805285};
    int K = 20;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 28};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {393358, 393430, 393994, 393336, 394110, 394030, 394016, 393529, 394076, 393796, 393383, 393407, 394154, 393563, 394166, 393683, 393798, 393995, 393804, 393374, 394202, 394119, 393745, 393849, 393680, 393535, 393922, 393953, 393810, 393556, 393984, 393504, 393380, 393834, 393382, 393590, 393367, 393527, 393718, 393775, 393442, 393562, 393383, 393701, 393823, 393887, 393404};
    int K = 35;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 35};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {358738, 358711, 359313, 359273, 358911, 358712, 359006, 358727, 359037, 358667, 358732, 358702, 358746, 358957, 358691, 359132, 359364, 358486, 358602, 358943, 359107, 358954, 359142, 359063, 358548, 359302, 358652, 359082, 358623, 358968, 358835, 358946, 359191, 358616, 358761, 359377, 358851, 358643, 358760, 359092, 358437, 358894, 358820, 359269};
    int K = 12;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 32};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {146259, 146235, 146254, 145962, 145853, 146625, 146451, 146665, 146243, 146089, 146258, 146250, 146101, 146279, 146617, 146395, 146005, 145861, 146442, 146797, 146119, 146399, 146563, 146016, 146769, 146099, 146699, 146669, 146573, 145951, 145999, 145807, 146363, 146430, 146083, 146351, 146467, 146376, 146652, 146315, 146793, 146109, 146281, 145963};
    int K = 40;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 40};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> a = {708085, 708832, 708175, 708575, 708046, 707973, 708877, 708491, 708056, 708382, 708457, 708524, 707976, 708821, 708847, 708225, 708296, 708405, 708238, 708524, 708412, 708053, 708483, 708791, 708088, 708545, 708588, 708311, 708120, 708633, 708094, 708766, 708403, 708307, 708380, 708176, 708509, 708260, 708285, 708852, 708176, 708780, 707927, 708226, 708646, 708136, 708254};
    int K = 26;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 41};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {6979, 6819, 6544, 6696, 7187, 7251, 6575, 7188, 6917, 7131, 6978, 6957, 6823, 6469, 6574, 7184, 6430, 6342, 6476, 6478, 6520, 7109, 6346, 6934, 6321, 6621, 7073, 7229, 7021, 7168, 6635, 6928, 6872, 6705, 6638, 6305, 7088, 6803, 7170, 6693, 6291, 7128, 6339};
    int K = 11;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 15};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {352643, 353277, 352851, 353294, 353383, 352855, 352677, 352558, 353140, 353023, 353049, 352812, 352590, 352420, 353083, 352420, 353244, 352969, 352497, 352867, 352827, 353194, 352528, 352732, 352934, 352839, 352690, 352898, 352895, 353161, 352430, 352519, 352957, 352650, 353157, 352914, 352577, 352641, 353076, 352967, 353055, 352459, 353171, 353145};
    int K = 5;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {501634, 501466, 501644, 501832, 501587, 501640, 501567, 501108, 501239, 501316, 501453, 501460, 500922, 501776, 501529, 501635, 500943, 501614, 501388, 500975, 501567, 501630, 501641, 501643, 501573, 501070, 500996, 501178, 501839, 501606, 501828, 500970, 501143, 501845, 501391, 501059, 501727, 501707, 501277, 501563, 501802, 501491, 501860, 501551, 501511};
    int K = 41;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 44};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> a = {348256, 348845, 348433, 348270, 348689, 348107, 348956, 349005, 348533, 348480, 348201, 348220, 348674, 348162, 348111, 348388, 348078, 348366, 348726, 348660, 348929, 348822, 348902, 348510, 348177, 348974, 348952, 348253, 348292, 348919, 348856, 348446, 348783, 348861, 348388, 348599, 348933, 349028, 348254, 348056, 348932, 348114, 348093};
    int K = 7;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 37};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {682732, 682287, 682055, 682116, 682688, 682156, 682369, 682539, 682107, 682295, 682090, 682180, 682375, 682559, 682535, 682239, 681819, 682222, 682161, 682461, 682339, 682401, 682089, 682790, 682005, 682401, 681895, 682247, 682095, 682082, 682105, 681821, 681923, 682304, 682504, 681880, 682548, 682569, 682647, 682447, 681915, 682036, 682741, 682780, 682626, 682251};
    int K = 19;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 23};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {783342, 783404, 783571, 783046, 782904, 783539, 783602, 782759, 783375, 783140, 783191, 782860, 783675, 783472, 783495, 782841, 782925, 782808, 783239, 783215, 783577, 783199, 783384, 783202, 783401, 783502, 783619, 782996, 783407, 783543, 783105, 783128, 783598, 783554, 783656, 782963, 783662, 783147, 782838, 783469, 783194, 783684, 782867, 783510, 782840, 783014, 782759, 782947, 783668};
    int K = 12;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 36};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {526008, 526118, 526058, 526301, 526252, 525916, 526638, 526452, 525783, 526517, 525726, 525900, 526440, 525763, 526692, 526622, 525972, 526307, 526188, 525760, 525820, 526385, 526676, 525741, 526153, 526165, 526031, 526347, 525999, 526244, 526325, 526150, 526107, 525946, 525867, 525866, 526235, 526466, 526386, 526590, 526232, 525848, 526463, 525859, 525986, 526589, 526647, 526355};
    int K = 29;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 47};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {783357, 783553, 783102, 782886, 783159, 782901, 783698, 783594, 783598, 783322, 782886, 782996, 783040, 783220, 783218, 783612, 783434, 783533, 782818, 783609, 782802, 783596, 783545, 783548, 783094, 783157, 783363, 783024, 783061, 782933, 783312, 783669, 783547, 783407, 783716, 783160, 783610, 783336, 783427, 783456, 783059, 783412, 783114, 783400};
    int K = 39;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 43};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> a = {509275, 509291, 509082, 509355, 508761, 509233, 508737, 509304, 508637, 509411, 508896, 508938, 508808, 508738, 509399, 509276, 509006, 508641, 509009, 509546, 508851, 508599, 508637, 508761, 508650, 508882, 509333, 509359, 508834, 509204, 509191, 509005, 508933, 508938, 508726, 508777, 509365, 509406, 508748, 509415, 509021, 508878, 508822};
    int K = 13;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 39};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {189409, 189624, 190050, 189493, 189648, 189772, 189411, 190016, 189478, 189800, 189306, 189807, 189930, 189673, 189229, 190129, 190061, 189739, 190106, 189214, 189321, 189419, 189383, 189377, 189748, 190136, 189398, 189784, 189281, 189882, 189854, 189560, 189427, 189483, 189824, 189238, 189671, 189547, 190079, 189648, 189757, 189199, 189578, 190050, 189738, 190145, 189258, 189565, 189350};
    int K = 27;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 30};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {702733, 702668, 702441, 702396, 702100, 702389, 701879, 702258, 702281, 702757, 701935, 701852, 702503, 702696, 702601, 702685, 702077, 701919, 702746, 702751, 702698, 702585, 702499, 702053, 701992, 701880, 701834, 701865, 701866, 702726, 702410, 701782, 701922, 702685, 702194, 702103, 701987, 702342, 702508, 702438, 701792, 702049, 702156, 701801, 702344, 702667, 702187};
    int K = 27;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 26};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {229315, 228933, 229334, 228902, 229100, 229143, 229458, 229117, 228918, 228949, 229425, 229476, 229710, 228851, 229178, 228774, 229459, 229564, 229036, 229299, 229627, 229028, 229591, 229469, 228863, 228769, 228847, 229003, 229188, 229460, 229309, 229230, 228830, 229694, 228844, 229600, 229634, 229165, 228829, 228797, 228785, 228822, 229496};
    int K = 12;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 23};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {140385, 140492, 140387, 140064, 140058, 139642, 139651, 139705, 139538, 140424, 139844, 139593, 139529, 139637, 140226, 140473, 140093, 139854, 140461, 140380, 140142, 139587, 140239, 140208, 139891, 139618, 140365, 140068, 139496, 139713, 139703, 140316, 139629, 139812, 140141, 139759, 140492, 140319, 139511, 139866, 140470, 139790, 140201, 140093, 139962, 140032, 140426, 140291, 140483};
    int K = 19;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 48};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {91429, 823257, 742523, 11435, 432348, 554518, 754055, 516005, 617666, 211266, 967358, 177208, 829840, 913999, 853275, 597215, 743299, 318162, 792614, 377490, 35479, 675514, 591168, 278528, 629221, 719645, 772299, 861563, 822614, 289902, 600952, 170868, 263235, 547979, 531950, 388955, 681067, 805811, 994900, 287272, 129936, 786069};
    int K = 13;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 18};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {39086, 286083, 504555, 270543, 609305, 913222, 667912, 20668, 459954, 529227, 811617, 132570, 2501, 434042, 316630, 828338, 833282, 307047, 216291, 978814, 2518, 354209, 875213, 743241, 127782, 519464, 231847, 7538, 119784, 562749, 674177, 82895, 497629, 499985, 330862, 75885, 31535, 26655, 643761, 606902, 97635, 309205, 86276, 626988, 252026, 784621};
    int K = 22;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 23};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {21674, 773083, 319484, 112937, 290036, 537759, 402252, 981143, 306658, 131770, 101365, 117668, 297119, 123133, 333508, 210911, 856370, 498108, 109529, 599710, 500185, 184802, 580372, 611170, 795582, 946014, 222427, 696601, 205528, 520572, 654601, 94844, 830945, 44046, 372918, 577433, 89263, 920456, 339679, 196011, 449330};
    int K = 28;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 40};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {269221, 437961, 210458, 598649, 76494, 396865, 853129, 515744, 412805, 456874, 966995, 25060, 505574, 642968, 956202, 463194, 276997, 552819, 319144, 58394, 636247, 473275, 111365, 657734, 87601, 681245, 839778, 874042, 917928, 113834, 646146, 929554, 864279, 790778, 81752, 614098, 236478, 522844, 8890, 819510, 783431, 898552, 247797, 999703, 456037, 866052, 142971, 376375};
    int K = 36;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 45};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {124728, 711465, 516166, 808781, 358275, 897120, 425237, 878352, 275375, 155218, 208689, 751839, 770752, 64072, 912478, 382406, 399866, 144965, 409749, 720153, 242517, 547152, 692168, 156374, 930702, 586656, 923970, 761302, 747863, 885092, 730157, 455600, 349423, 664428, 773742, 792683, 392012, 362231, 450283, 316637, 494580, 125786, 754668, 988708, 781674, 166729, 848927, 220096, 79942};
    int K = 5;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 30};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {635724, 514718, 725282, 243115, 264343, 267936, 505908, 365667, 532387, 17282, 992790, 261104, 650297, 513424, 360534, 86641, 167143, 504292, 267968, 797972, 823320, 900212, 474181, 575484, 939982, 674693, 532296, 54845, 73022, 257278, 34758, 493892, 624968, 394135, 252831, 147860, 19281, 344688, 425285, 902059, 263423, 154622, 878976, 194051, 479504};
    int K = 40;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 39};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {874676, 786775, 305680, 749487, 232246, 732053, 364660, 126409, 573957, 724336, 852628, 180603, 855453, 182610, 209639, 133308, 875941, 934561, 353542, 561212, 285672, 728662, 411074, 876361, 86206, 697980, 752657, 525783, 263561, 393991, 444323, 243183, 354843, 156111, 373779, 128567, 201013, 240615, 700857, 116250, 989290, 562014, 421788};
    int K = 5;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 12};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {290706, 884612, 741979, 406331, 968108, 754542, 82413, 303754, 453563, 345817, 772594, 993984, 219760, 225982, 231631, 380455, 757044, 158748, 963655, 616650, 600738, 722481, 178957, 14964, 298148, 233989, 543082, 109777, 938925, 934239, 356743, 14834, 858192, 832347, 283544, 931820, 892860, 589652, 619685, 195615, 619349, 804155, 565878};
    int K = 8;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 36};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {76553, 753819, 136064, 358825, 270097, 404245, 34406, 715812, 605166, 132517, 228248, 18463, 444700, 555374, 601309, 937968, 775587, 447369, 348014, 52385, 841454, 315045, 104731, 107301, 527354, 748185, 533963, 506998, 242730, 70728, 914592, 820940, 577527, 240112, 141753, 119483, 475140, 284879, 699793, 317418, 786127, 847858, 675396, 590187, 745732};
    int K = 27;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 44};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {691806, 410632, 74253, 595399, 786669, 372358, 410592, 249436, 569156, 757076, 204737, 387997, 147648, 652479, 6416, 867175, 523975, 614880, 555667, 375104, 557133, 94138, 900298, 650176, 884658, 173046, 216096, 789341, 582793, 926776, 512573, 552401, 834228, 887581, 717624, 709546, 765739, 951572, 555882, 541998, 47003, 30550, 483998, 846056, 230443};
    int K = 23;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 37};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {984467, 526041, 222554, 18245, 790050, 668419, 923029, 572688, 781482, 762882, 92447, 425299, 753581, 317169, 432499, 773734, 591812, 554635, 121426, 304161, 726632, 304946, 931552, 813165, 163677, 347596, 516828, 49912, 412923, 333384, 305786, 836162, 664282, 91135, 871711, 96213, 977881, 659125, 223737, 121681, 687243, 588734};
    int K = 16;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 23};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> a = {809919, 92861, 737708, 329946, 396715, 479496, 997180, 39049, 703989, 748263, 285632, 164077, 284893, 135420, 439228, 191443, 816073, 990076, 558586, 886702, 628142, 800347, 232323, 530631, 448537, 422534, 899641, 208081, 633816, 669642, 554836, 303258, 856135, 631826, 23671, 580830, 846586, 962637, 603374, 437430, 960836, 133294, 431751, 981933, 760674};
    int K = 17;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 40};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> a = {208819, 471111, 609963, 269910, 541163, 56965, 591634, 709529, 620447, 659093, 167003, 531371, 671059, 26627, 390218, 64008, 626039, 94521, 725971, 136616, 947894, 438374, 826944, 77693, 213995, 549642, 633066, 624008, 604915, 621729, 984228, 614936, 929437, 197929, 528888, 103777, 402366, 195474, 557257, 491637, 215394, 66370};
    int K = 27;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 32};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> a = {540701, 575873, 605345, 40039, 517247, 28936, 219109, 802195, 913765, 945057, 398275, 198140, 912748, 550906, 893312, 658585, 412737, 124748, 807014, 343613, 817620, 224995, 5064, 107376, 872363, 693129, 165986, 861740, 319955, 677651, 288799, 865969, 843185, 212487, 246325, 931589, 244214, 300776, 354284, 111308, 838576, 354593, 573436, 396159, 371582};
    int K = 30;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 36};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> a = {610060, 475676, 744025, 157557, 158666, 99932, 1576, 320510, 693143, 964982, 481886, 63235, 671377, 435766, 70269, 830807, 942701, 300179, 463496, 685673, 898167, 611744, 974863, 646538, 724774, 720476, 576344, 82253, 580699, 927012, 85036, 692872, 111030, 707080, 558779, 814774, 894357, 739066, 749036, 311550, 890475, 737186, 325061, 263247, 143224, 31439, 392948};
    int K = 26;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 41};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> a = {566153, 930488, 216865, 76944, 131394, 762351, 572006, 382071, 733290, 911548, 816412, 965987, 35490, 614548, 807298, 400491, 555528, 614502, 530446, 717938, 652209, 852773, 684654, 190654, 15669, 517491, 566377, 901238, 332579, 770603, 283108, 26684, 130965, 841931, 358145, 614053, 331935, 79101, 233378, 161617, 544801, 742208, 450507, 63084, 151228, 503991};
    int K = 35;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 35};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> a = {684129, 712718, 529055, 112884, 163525, 25925, 597807, 46948, 774961, 642331, 270327, 166302, 592053, 854423, 187778, 148279, 407548, 159541, 656813, 678921, 698107, 622828, 488867, 561482, 157444, 533080, 449984, 707849, 889783, 630153, 254167, 887559, 771223, 207464, 150095, 43119, 635706, 699264, 478184, 33331, 261722, 93616, 524699, 761093, 229514, 95532};
    int K = 18;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 33};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> a = {968514, 274859, 932041, 439312, 168795, 753009, 861324, 815284, 398806, 953977, 18462, 867150, 578966, 374846, 782138, 748692, 749166, 583014, 996032, 458295, 80917, 862732, 268859, 174718, 803254, 41000, 659387, 862206, 549284, 262045, 967137, 649464, 418795, 227168, 534521, 437647, 328898, 840512, 8961, 897700, 836444, 27733, 431944, 317968, 30109, 317001, 626482, 759485, 615466};
    int K = 14;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 18};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> a = {627234, 623769, 453275, 846412, 288665, 427592, 742006, 58170, 947038, 196681, 228767, 400170, 296358, 933563, 93383, 430177, 797209, 193332, 583500, 557991, 26798, 604122, 685922, 665252, 202850, 180305, 264543, 791780, 414101, 263758, 768483, 695354, 714305, 205322, 743393, 351232, 694807, 553363, 747407, 457084, 487928, 774460, 330406, 346718};
    int K = 7;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 38};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> a = {768470, 366117, 156675, 619317, 96842, 816994, 176102, 907091, 415635, 52501, 490969, 504053, 753395, 695603, 431791, 854431, 447113, 174601, 700330, 524653, 406804, 655994, 386702, 72988, 3173, 402468, 422816, 648642, 183654, 54113, 904000, 580958, 15936, 860650, 558432, 859850, 516846, 500373, 567136, 20557, 863068, 690751, 217416, 295885, 755451, 601860, 128161};
    int K = 5;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33, 37};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> a = {62315, 95472, 672389, 937638, 779551, 924240, 407526, 812846, 519320, 340459, 947166, 458322, 230041, 259349, 425018, 457914, 308242, 810501, 680054, 993963, 817189, 204400, 65290, 979121, 394053, 660803, 206045, 820969, 953083, 300477, 204312, 881704, 661059, 963944, 714390, 197707, 504403, 951986, 634743, 180124, 102843, 925804, 747924, 666398, 313959, 470046};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 20};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> a = {843138, 736836, 680125, 651766, 954613, 554346, 112911, 154502, 841613, 364511, 614442, 528049, 369275, 460057, 728903, 326794, 299188, 257061, 673060, 546233, 874169, 954440, 392593, 528229, 807729, 87224, 877864, 383807, 482226, 224240, 551578, 259177, 317918, 835828, 148451, 803074, 508522, 5153, 133727, 766032, 825402, 998128, 806711, 333832};
    int K = 22;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 24};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> a = {715252, 838908, 696484, 392699, 138676, 417762, 861941, 408295, 437689, 348540, 758750, 376610, 614047, 424681, 808603, 826463, 378854, 799304, 106123, 507046, 154029, 263173, 923175, 52267, 372352, 523137, 691888, 127944, 406792, 667362, 700263, 247580, 87009, 869492, 122870, 724863, 860105, 482554, 434988, 465953, 77299};
    int K = 6;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 17};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> a = {156734, 734139, 95504, 936457, 172095, 576117, 447814, 503467, 908209, 652702, 887473, 616401, 460954, 886004, 898511, 301459, 311293, 807841, 587698, 539292, 546476, 287827, 641765, 928526, 226949, 220263, 836918, 404802, 872522, 60099, 335973, 508589, 512417, 599683, 787303, 546590, 779748, 234954, 321879, 887715, 158374, 767291, 788026, 826444, 311236, 157760};
    int K = 5;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 14};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> a = {583587, 114375, 454766, 473578, 416587, 415693, 355075, 350736, 97823, 370834, 194250, 509978, 381368, 438572, 527838, 572119, 327198, 137848, 196771, 467582, 721506, 810155, 537519, 26200, 40539, 179654, 127317, 627962, 830523, 323432, 301775, 984816, 334605, 213565, 845319, 483638, 390861, 282453, 650690, 724832, 516195, 669967, 753194, 349849, 566654, 504628, 539254};
    int K = 42;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 46};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> a = {241504, 303672, 777998, 421773, 713242, 608195, 691052, 919651, 180293, 590902, 22530, 945108, 891632, 97642, 42226, 930319, 874120, 965300, 403747, 89606, 525869, 702231, 390113, 801445, 393697, 870281, 616354, 938223, 984285, 607840, 461604, 989816, 649534, 624345, 740401, 353977, 960284, 77317, 291268, 519763, 248123, 149905, 329094, 652067, 306395, 369200, 385393, 887486, 908906, 143783};
    int K = 3;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 17};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> a = {744986, 116596, 614329, 369912, 619533, 507804, 78554, 551585, 370987, 96464, 641295, 755132, 212758, 574331, 374412, 795193, 164853, 642859, 910597, 556862, 902253, 273433, 132586, 593660, 159598, 408854, 765713, 244717, 914217, 568597, 958898, 16300, 302495, 361423, 115019, 966832, 900117, 2518, 381732, 18342, 746916};
    int K = 26;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 36};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> a = {766635, 607405, 721554, 926979, 838371, 3497, 352360, 427665, 361657, 18526, 528963, 16147, 484851, 89325, 851153, 207478, 420912, 523720, 940017, 652060, 754369, 339714, 552091, 599419, 693730, 207167, 576877, 664549, 815508, 834122, 446162, 394466, 431000, 564997, 566865, 850873, 331657, 960955, 871792, 845710, 972503, 352658, 599938};
    int K = 11;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 40};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> a = {615452, 949140, 460357, 302876, 304460, 333424, 862071, 5662, 752901, 248908, 515694, 925921, 567374, 720146, 441728, 544317, 311650, 518669, 675730, 711896, 353573, 731501, 778515, 911809, 162352, 890231, 835359, 989356, 691661, 240396, 742083, 521674, 210238, 229203, 198496, 402053, 585784, 659910, 800808, 547285, 251373, 744662, 208262, 312898, 517639, 246652, 788442, 716854};
    int K = 20;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 30};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> a = {597090, 619902, 422478, 253657, 938612, 808093, 903372, 434865, 552423, 610445, 146452, 646802, 916882, 229523, 338841, 684482, 831980, 109629, 544784, 688678, 169106, 647355, 311550, 617069, 866216, 930456, 186860, 223901, 855639, 99731, 519160, 603064, 905524, 122654, 298502, 128458, 600832, 896882, 234707, 452626, 472524, 331853, 941930};
    int K = 17;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 25};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> a = {170377, 185775, 993942, 352333, 602522, 93848, 700101, 330586, 788836, 409020, 418758, 712312, 835831, 327875, 610538, 556249, 396264, 797758, 558481, 522029, 27725, 31120, 153268, 479645, 657556, 891657, 753103, 664240, 280768, 995411, 339113, 374225, 701122, 482117, 763649, 19304, 364080, 606485, 184215, 511780, 420324, 950314, 181204, 181274, 807284};
    int K = 24;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 34};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> a = {778567, 936649, 686469, 607580, 544049, 932894, 470832, 336523, 68076, 58967, 630833, 767131, 530041, 342459, 508883, 961697, 904521, 310032, 757022, 179257, 918175, 773906, 961610, 202575, 188627, 122767, 613518, 990794, 855026, 35746, 854293, 855319, 90627, 994058, 938898, 704461, 956645, 116454, 612970, 226370, 126868, 52879, 493776, 568554, 953034, 306450, 251503, 538086};
    int K = 11;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 36};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> a = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int K = 26;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 49};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> a = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int K = 21;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 20};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> a = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int K = 25;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 49};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> a = {3, 1, 3, 3, 3, 1, 3, 3, 3};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> a = {1, 3, 2, 1, 1, 2, 2, 2, 2};
    int K = 3;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 8};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> a = {1, 3, 2, 1, 1, 2, 2, 2, 2};
    int K = 3;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 8};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> a = {1, 9, 3, 9, 8, 7, 3, 3, 8, 1, 8, 2, 10, 10, 2, 4, 8, 6, 1, 10, 4, 2, 9, 7, 1, 9, 2, 10, 4, 5, 4, 10, 5, 1, 9, 10, 3, 8, 5, 4, 2, 1};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 13};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> a = {6, 3, 8, 7, 9, 6, 3, 6, 2, 2, 5, 10, 6};
    int K = 7;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> a = {8, 4, 9, 2, 5, 10, 7, 8, 6, 8, 3, 8, 9, 3, 8, 6, 5, 10, 7, 4, 5, 8, 1, 6, 4, 8, 2};
    int K = 12;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 18};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> a = {1, 3, 2, 1, 1, 2, 2, 2, 2};
    int K = 3;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 8};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> a = {3, 5, 7, 7, 2, 5, 4, 7, 7, 2, 4};
    int K = 3;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> a = {5, 7, 5, 5, 5};
    int K = 4;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 5;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 23};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> a = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int K = 5;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 15};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> a = {3, 1, 3, 3, 3, 1, 3, 3, 3};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> a = {2, 2, 2, 2};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> a = {10, 11, 1, 1, 10, 10, 10, 2};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> a = {3, 5, 7, 7, 2, 5, 4, 7, 7, 2, 4};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> a = {1, 1, 1, 1};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> a = {100, 101, 100, 100, 100};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> a = {0, 0, 0, 0};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> a = {2, 3, 3, 1};
    int K = 3;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> a = {40, 42, 41, 0, 0, 0, 40, 42, 41};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
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
    vector<int> a = {6, 2, 1, 1, 5, 4};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> a = {1, 1, 1, 10};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> a = {20, 10, 10};
    int K = 1;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> a = {3, 3, 3, 3, 1, 5};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> a = {2, 2, 2, 2, 4};
    int K = 5;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> a = {999999, 999998, 999997, 999999, 999998, 999999, 999998, 999999, 999997, 999998, 999997, 999997, 999999, 999998, 999999, 999998, 999999, 999999, 999997, 999998};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 17};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> a = {0, 0, 0, 0, 0};
    int K = 3;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> a = {5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 10};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> a = {0, 1, 1, 1, 1, 0};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> a = {4, 4, 4, 4, 1, 4, 2, 2, 1, 4, 4, 4, 4};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> a = {1, 2, 1};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> a = {4, 2, 0, 3, 3, 3};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> a = {10, 5, 10};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> a = {2, 2, 3};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> a = {0, 0, 0, 0, 0, 0};
    int K = 3;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> a = {381, 921, 513, 492, 135, 802, 91, 519};
    int K = 3;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> a = {1, 1, 2, 1};
    int K = 2;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> a = {22, 22, 23, 22, 22, 22, 22, 22, 23};
    int K = 3;
    ContiguousSubsequences* pObj = new ContiguousSubsequences();
    clock_t start = clock();
    vector<int> result = pObj->findMaxAverage(a, K);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20213936&rd=10805&pm=8454
********************************************************************************
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <math.h>
 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define si size()
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<bool> vb;
typedef vector<vector<bool> > vvb;
typedef vector<string> vs;
 
#define pb push_back
#define b2e(A) (A).begin(), (A).end()
#define s(A) std::sort(b2e(A))
 
 
 
class ContiguousSubsequences {
  public:
  vector <int> findMaxAverage(vector <int> a, int K) {
    int i,l,k,s,sum,ps,pe;
    double best = -5.0;
    for (s=a.si; s>=K; s--)
    {
      for (i=0; i+s<=a.si; i++)
      {
        sum = 0;
        for (l=i; l<i+s; l++) sum += a[l];
        double av = (double)sum / (double)s;
        if (best < 0.0 || av>best) 
        {
          best = av;
          ps = i;
          pe = i+s-1;
        }
        
      }
    }
    vi r(2,ps);
    r[1] = pe;
    return r;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/
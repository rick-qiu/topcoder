/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4842
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

class SimpleDuplicateRemover {
public:
    vector<int> process(vector<int> sequence);
};

vector<int> SimpleDuplicateRemover::process(vector<int> sequence) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> sequence = {1, 5, 5, 1, 6, 1};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> sequence = {2, 4, 2, 4, 4};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> sequence = {6, 6, 6, 6, 6, 6};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sequence = {1, 2, 3, 4, 2, 2, 3};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 2, 3};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sequence = {100, 100, 100, 99, 99, 99, 100, 100, 100};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 100};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sequence = {1};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sequence = {276};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {276};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sequence = {1000};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sequence = {1, 1000};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1000};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> sequence = {2, 1000, 1, 1000, 2};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1000, 2};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sequence = {276, 276};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {276};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sequence = {276, 275, 276};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {275, 276};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sequence = {276, 277, 276};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {277, 276};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sequence = {1000, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 989, 988, 987, 986, 985, 984, 983, 982, 981, 980, 979, 978, 977, 976, 975, 974, 973, 972, 971, 970, 969, 968, 967, 966, 965, 964, 963, 962, 961, 960};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 989, 988, 987, 986, 985, 984, 983, 982, 981, 980, 979, 978, 977, 976, 975, 974, 973, 972, 971, 970, 969, 968, 967, 966, 965, 964, 963, 962, 961, 960};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sequence = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> sequence = {100, 100, 101, 101, 102, 102, 103, 103, 104, 104, 105, 105, 106, 106, 107, 107, 108, 108, 109, 109, 110, 110, 111, 111, 112, 112, 113, 113, 114, 114, 115, 115, 116, 116, 117, 117, 118, 118, 119, 119, 120, 120, 121, 121};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sequence = {100, 100, 101, 101, 102, 102, 103, 103, 104, 104, 105, 105, 106, 106, 107, 107, 108, 108, 109, 109, 110, 110, 111, 111, 112, 112, 113, 113, 114, 114, 115, 115, 116, 116, 117, 117, 118, 118, 119, 119, 120, 120, 100, 100};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 100};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sequence = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sequence = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1, 1000, 1, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1000};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sequence = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sequence = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sequence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sequence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 1, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> sequence = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 1, 1, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sequence = {186, 634, 681, 219, 765, 765, 443, 758, 933, 925, 772, 443, 403, 186, 522, 827, 491, 235, 869, 758, 191, 2, 53, 548, 951, 543, 629, 925, 463, 443, 758, 843, 681, 463, 607, 729, 933, 513, 951, 500, 112, 679, 443, 862, 904, 463, 443, 86, 112, 951};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {634, 219, 765, 772, 403, 186, 522, 827, 491, 235, 869, 191, 2, 53, 548, 543, 629, 925, 758, 843, 681, 607, 729, 933, 513, 500, 679, 862, 904, 463, 443, 86, 112, 951};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sequence = {62, 640, 953, 621, 337, 621, 937, 348, 194, 795, 2, 337, 562, 937, 348, 687, 783, 337, 743, 743, 337, 230, 62, 397, 595, 368, 525, 337, 597, 337, 119, 783, 640, 337, 937, 368, 418, 953, 743, 368, 743, 230, 904, 937, 511, 621, 306, 486, 851, 280};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {194, 795, 2, 562, 348, 687, 62, 397, 595, 525, 597, 119, 783, 640, 337, 418, 953, 368, 743, 230, 904, 937, 511, 621, 306, 486, 851, 280};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sequence = {441, 364, 939, 413, 900, 51, 193, 441, 387, 51, 611, 649, 718, 66, 943, 684, 582, 480, 222, 441, 11, 943, 11, 456, 132, 11, 422, 277, 736, 30, 943, 522, 393, 77, 718, 51, 51, 456, 718, 245, 230, 671, 600, 734, 51, 671, 190, 387, 364, 572};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {939, 413, 900, 193, 611, 649, 66, 684, 582, 480, 222, 441, 132, 11, 422, 277, 736, 30, 943, 522, 393, 77, 456, 718, 245, 230, 600, 734, 51, 671, 190, 387, 364, 572};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sequence = {928, 7, 591, 448, 150, 982, 150, 255, 950, 471, 188, 946, 801, 871, 751, 871, 58, 946, 539, 302, 58, 13, 692, 877, 190, 230, 980, 801, 527, 189, 150, 73, 660, 871, 188, 7, 37, 698, 285, 996, 338, 150, 685, 751, 448, 946, 471, 951, 692, 527};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {928, 591, 982, 255, 950, 539, 302, 58, 13, 877, 190, 230, 980, 801, 189, 73, 660, 871, 188, 7, 37, 698, 285, 996, 338, 150, 685, 751, 448, 946, 471, 951, 692, 527};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sequence = {637, 85, 100, 125, 85, 750, 889, 64, 779, 737, 779, 5, 737, 101, 91, 26, 890, 890, 85, 100, 479, 405, 995, 111, 576, 750, 919, 890, 779, 851, 133, 348, 316, 562, 101, 890, 385, 890, 5, 779, 408, 891, 191, 22, 637, 306, 671, 803, 737, 26};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {125, 889, 64, 91, 85, 100, 479, 405, 995, 111, 576, 750, 919, 851, 133, 348, 316, 562, 101, 385, 890, 5, 779, 408, 891, 191, 22, 637, 306, 671, 803, 737, 26};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sequence = {667, 24, 649, 522, 780, 226, 268, 522, 834, 413, 569, 932, 834, 187, 226, 475, 268, 932, 642, 511, 226, 642, 715, 958, 356, 268, 475, 746, 667, 481, 940, 987, 24, 948, 932, 932, 82, 192, 192, 919, 567, 163, 780, 576, 919, 321, 57, 321, 649, 24};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {522, 413, 569, 834, 187, 511, 226, 642, 715, 958, 356, 268, 475, 746, 667, 481, 940, 987, 948, 932, 82, 192, 567, 163, 780, 576, 919, 57, 321, 649, 24};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sequence = {810, 995, 255, 781, 255, 580, 975, 593, 351, 738, 129, 940, 812, 812, 802, 743, 180, 810, 461, 494, 255, 858, 755, 255, 354, 47, 653, 103, 810, 179, 441, 103, 103, 103, 333, 781, 313, 402, 494, 942, 255, 184, 558, 103, 441, 313, 47, 810, 351, 942};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {995, 580, 975, 593, 738, 129, 940, 812, 802, 743, 180, 461, 858, 755, 354, 653, 179, 333, 781, 402, 494, 255, 184, 558, 103, 441, 313, 47, 810, 351, 942};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sequence = {222, 841, 718, 370, 274, 129, 559, 240, 322, 643, 70, 672, 493, 269, 898, 214, 193, 530, 257, 672, 828, 129, 304, 718, 415, 841, 859, 690, 269, 774, 541, 898, 980, 257, 933, 530, 84, 269, 933, 533, 18, 18, 541, 530, 249, 214, 616, 304, 700, 38};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {222, 370, 274, 559, 240, 322, 643, 70, 493, 193, 672, 828, 129, 718, 415, 841, 859, 690, 774, 898, 980, 257, 84, 269, 933, 533, 18, 541, 530, 249, 214, 616, 304, 700, 38};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sequence = {751, 383, 752, 648, 507, 457, 909, 987, 507, 507, 107, 738, 31, 490, 107, 327, 728, 807, 457, 107, 84, 233, 374, 909, 733, 752, 836, 305, 252, 343, 733, 31, 343, 31, 646, 253, 608, 623, 965, 490, 327, 987, 383, 53, 327, 374, 948, 134, 990, 323};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {751, 648, 507, 738, 728, 807, 457, 107, 84, 233, 909, 752, 836, 305, 252, 733, 343, 31, 646, 253, 608, 623, 965, 490, 987, 383, 53, 327, 374, 948, 134, 990, 323};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sequence = {89, 754, 398, 57, 411, 422, 411, 906, 398, 88, 582, 901, 247, 475, 171, 57, 366, 206, 292, 582, 57, 475, 690, 147, 162, 206, 714, 285, 985, 740, 780, 57, 88, 990, 292, 57, 96, 452, 62, 366, 91, 398, 899, 285, 188, 162, 916, 147, 371, 852};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {89, 754, 422, 411, 906, 901, 247, 171, 582, 475, 690, 206, 714, 985, 740, 780, 88, 990, 292, 57, 96, 452, 62, 366, 91, 398, 899, 285, 188, 162, 916, 147, 371, 852};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sequence = {908, 653, 601, 737, 201, 725, 319, 495, 888, 779, 201, 908, 566, 969, 779, 737, 908, 561, 513, 725, 327, 727, 842, 153, 156, 969, 701, 36, 715, 236, 969, 908, 779, 701, 855, 263, 653, 969, 559};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {601, 319, 495, 888, 201, 566, 737, 561, 513, 725, 327, 727, 842, 153, 156, 36, 715, 236, 908, 779, 701, 855, 263, 653, 969, 559};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sequence = {32, 536, 837, 55, 155, 536, 155, 220, 966, 319, 280, 409, 155, 409, 520, 55, 319, 319, 837, 513, 513, 584, 409, 55, 607, 817, 319, 307, 192};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 536, 220, 966, 280, 155, 520, 837, 513, 584, 409, 55, 607, 817, 319, 307, 192};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sequence = {304, 988, 885, 422, 132, 859, 785, 719, 972, 954, 954, 608, 77, 948, 594, 304, 111, 195, 948, 133, 968, 988, 742, 965, 391, 742, 77, 948, 161, 447, 195, 977, 742, 948, 242, 755, 948, 70, 447, 948, 972, 434, 77, 977, 775, 161, 817, 132};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {885, 422, 859, 785, 719, 954, 608, 594, 304, 111, 133, 968, 988, 965, 391, 195, 742, 242, 755, 70, 447, 948, 972, 434, 77, 977, 775, 161, 817, 132};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sequence = {489, 489, 487, 488, 750, 230, 43, 645, 42, 42, 489, 42, 973, 42, 973, 750, 645, 355, 868, 112, 868, 489, 750, 489, 887, 489, 868};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {487, 488, 230, 43, 42, 973, 645, 355, 112, 750, 887, 489, 868};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sequence = {782, 829, 228, 291, 861, 753, 701, 167, 598, 840, 228, 782, 861, 840, 840, 784, 898, 861, 167, 96, 136, 560, 840, 94, 840, 94, 228, 560, 888, 228, 228, 840, 228, 840, 560};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {829, 291, 753, 701, 598, 782, 784, 898, 861, 167, 96, 136, 94, 888, 228, 840, 560};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sequence = {616, 342, 616, 539, 895, 895, 342, 539, 616, 616, 342};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {895, 539, 616, 342};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sequence = {859, 345, 724, 25, 157, 410, 345, 564, 277, 564, 912, 777, 777, 231, 927, 277, 605, 59, 894, 514, 768, 777, 867, 164, 671, 894, 747, 559, 25, 998, 927, 564, 59, 912, 649, 59, 894, 277, 357, 157, 649, 675, 894, 46, 998};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {859, 724, 410, 345, 231, 605, 514, 768, 777, 867, 164, 671, 747, 559, 25, 927, 564, 912, 59, 277, 357, 157, 649, 675, 894, 46, 998};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sequence = {700, 234, 380, 744, 756, 946, 693, 715, 380, 744, 105, 869, 295, 168, 893, 563, 165, 800, 234, 831, 831, 608, 754, 234, 166, 693, 4, 278, 744, 139, 831, 456, 721, 47, 472, 408, 166, 168, 295, 55, 234, 715, 715, 721, 693, 39, 529, 166, 744};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {700, 756, 946, 380, 105, 869, 893, 563, 165, 800, 608, 754, 4, 278, 139, 831, 456, 47, 472, 408, 168, 295, 55, 234, 715, 721, 693, 39, 529, 166, 744};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sequence = {630, 186, 391, 354, 63, 859, 558, 520, 495, 633, 317, 736, 948, 279, 541, 63, 736, 238, 377, 736, 124, 954, 780, 42, 608, 42, 63, 705, 22, 630, 633, 87, 201, 824, 824, 558, 892, 274, 445, 892, 499, 541, 774, 111, 633, 317, 279, 42, 124};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {186, 391, 354, 859, 520, 495, 948, 238, 377, 736, 954, 780, 608, 63, 705, 22, 630, 87, 201, 824, 558, 274, 445, 892, 499, 541, 774, 111, 633, 317, 279, 42, 124};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sequence = {123, 123, 661, 225, 766, 661, 163, 957, 876, 294, 855, 343, 661, 480, 225, 855, 661, 906, 957, 876, 671, 661, 123, 119, 123, 766, 555, 661, 555, 480};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {163, 294, 343, 225, 855, 906, 957, 876, 671, 119, 123, 766, 661, 555, 480};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sequence = {151, 421, 421, 909, 117, 222, 909, 954, 227, 421, 227, 954, 954, 222, 421, 227, 421, 421, 421, 151, 421, 227, 222, 222, 222, 222, 421, 183, 421, 227, 421, 954, 222, 421, 954, 421, 222, 421, 909, 421};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {117, 151, 183, 227, 954, 222, 909, 421};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sequence = {281, 554, 281, 281, 742, 532, 129, 281, 554, 532, 554, 532, 281, 742, 554, 281, 149, 742, 554, 281, 554, 742, 554, 281, 554, 149, 532, 554, 554, 281, 532, 554, 281, 532, 742, 532, 554, 532, 149, 554, 554, 554};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {129, 281, 742, 532, 149, 554};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> sequence = {592, 276, 307, 923, 787, 57, 592, 787, 923, 923, 307, 923, 923, 923, 787, 787, 307, 923, 923, 923, 923, 57, 923, 307, 79, 923, 81, 923, 79, 77, 923, 276, 923, 77, 923, 923, 77, 276, 57, 923, 923, 276, 923, 923, 77, 923, 276};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {592, 787, 307, 81, 79, 57, 77, 923, 276};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sequence = {172, 792, 792, 339, 792, 239, 792, 792, 239, 792, 172, 792, 339, 339, 792, 339, 792, 239, 792, 339, 792, 792, 172, 339, 172, 172, 239, 339, 792, 792, 172, 792, 239, 792, 339, 848, 792, 339, 19, 792, 792};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {172, 239, 848, 339, 19, 792};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sequence = {816, 52, 816, 84, 816, 52, 816, 52, 52, 84, 865, 84, 869, 816, 816, 84, 52, 816, 816, 816, 816, 84, 52, 52, 52, 84, 52, 816, 816, 816, 869, 816, 816, 816, 816, 52, 816, 84, 816, 865, 865};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {869, 52, 84, 816, 865};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> sequence = {92, 117, 75, 75, 92, 75, 895, 75, 92, 92, 461, 461, 92, 92, 461, 92, 745, 117, 745, 92, 92, 117, 928, 895, 117, 92, 92, 928, 75, 92, 92, 959, 959, 461, 928, 75, 745, 92, 92, 745, 117, 959, 928, 92, 92, 92, 92};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {895, 461, 75, 745, 117, 959, 928, 92};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> sequence = {520, 424, 75, 520, 625, 75, 625, 520, 554, 625, 424, 520, 298, 520, 520, 520, 520, 424, 520, 520, 73, 625, 520, 625, 520, 520, 520, 625, 424, 73, 520, 520, 625, 520, 520, 625, 424, 520, 424, 424, 424, 625, 73, 520, 520, 520};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75, 554, 298, 424, 625, 73, 520};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> sequence = {460, 447, 447, 152, 152, 152, 152, 460, 152, 824, 447, 152, 152, 692, 460, 460, 152, 447, 460, 447, 722, 447, 447, 152, 447, 692, 460, 692, 447, 692, 152, 447, 447, 152, 447, 447, 447, 152, 152, 152, 152, 152, 460, 818, 460, 460, 152};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {824, 722, 692, 447, 818, 460, 152};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> sequence = {407, 831, 997, 831, 103, 403, 831, 549, 831, 831, 103, 831, 997, 407, 103, 103, 403, 103, 103, 403, 997, 103, 403, 831, 831, 403, 831, 187, 403, 318, 403, 997, 103, 831, 187, 187, 403, 187, 997, 997};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {549, 407, 318, 103, 831, 403, 187, 997};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> sequence = {282, 17, 17, 17, 756, 282, 810, 17, 282, 608, 282, 282, 17, 17, 17, 282, 907, 810, 907, 756, 17, 17, 282, 907, 907, 907, 907, 907, 907, 907, 756, 17, 17, 976, 756, 907, 907, 810, 17, 907, 810, 17, 17, 282, 907, 282, 17};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {608, 976, 756, 810, 907, 282, 17};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> sequence = {511, 791, 203, 511, 203, 511, 203, 791, 791, 511, 511, 511, 511, 203, 511, 325, 511, 511, 791, 511, 511, 511, 511, 511, 203, 203, 791, 511, 511, 511, 203, 791, 511, 203, 511, 511, 791, 511, 791, 511, 791, 791, 203, 511, 791, 511, 511};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {325, 203, 791, 511};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> sequence = {85, 85, 85, 85, 638, 85, 85, 85, 85, 524, 85, 638, 85, 85, 638, 716, 85, 85, 85, 665, 638, 638, 638, 638, 85, 638, 638, 85, 524, 85, 85, 638, 85, 85, 716, 85, 85, 638, 85, 85};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {665, 524, 716, 638, 85};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> sequence = {327, 673, 807, 327, 327, 807, 327, 807, 327, 327, 673, 327, 327, 673, 327, 807, 327, 327, 327, 327, 327, 807, 807, 246, 673, 673, 327, 327, 327, 327, 673, 327, 327, 673, 807, 807, 327, 807, 327, 327};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {246, 673, 807, 327};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> sequence = {559, 790, 572, 841, 841, 256, 256, 559, 256, 841, 841, 256, 256, 256, 790, 841, 559, 572, 459, 841, 841, 841, 841, 256, 256, 841, 707, 841, 256, 256, 841, 256, 841, 256, 841, 841, 707, 790, 707, 459, 256, 256, 790, 707, 256, 707, 841, 841, 256};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {559, 572, 459, 790, 707, 841, 256};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> sequence = {591, 591, 281, 591, 591, 591, 591, 591, 591, 930, 591, 591, 930, 591, 591, 591, 591, 591, 591, 591, 591, 591, 930, 930, 591, 591, 591, 591, 591, 281, 591, 930, 591, 591, 591, 591, 930, 591, 591, 591, 281, 930, 930};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {591, 281, 930};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> sequence = {12, 634, 232, 621, 621, 634, 12, 12, 220, 634, 12, 621, 634, 621, 621, 634, 12, 634, 12, 621, 621, 634, 621, 621, 12, 12, 621, 634, 12, 12, 621, 634, 621, 634, 621, 12, 634, 634, 634, 634, 634, 220, 12, 634, 634};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {232, 621, 220, 12, 634};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> sequence = {122, 315, 336, 103, 336, 336, 122, 397, 103, 122, 122, 122, 336, 122, 336, 122, 336, 122, 122, 336, 336, 336, 336, 336, 315, 336, 122, 103, 336, 336, 336, 336, 103, 122, 336, 315, 122, 122, 122, 122, 122, 336, 336, 336};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {397, 103, 315, 122, 336};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> sequence = {2, 2, 2, 903, 903, 2, 726, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 726, 2, 2, 2, 2, 2, 2, 2, 726, 2, 2, 2, 2, 62, 2, 2, 2, 2, 2, 2, 2, 2, 726, 62, 726, 2, 2, 2, 903, 903, 2};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {62, 726, 903, 2};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> sequence = {221, 221, 221, 200, 200, 612, 221, 221, 200, 612, 221, 221, 612, 221, 200, 221, 221, 221, 612, 221, 221, 221, 612, 612, 221, 200, 612, 221, 612, 200, 221, 221, 221, 221, 612, 221, 200, 221, 200, 200, 612, 612};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {221, 200, 612};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> sequence = {204, 48, 48, 977, 204, 204, 204, 48, 977, 204, 204, 204, 48, 204, 204, 204, 48, 204, 48, 48, 204, 48, 204, 204, 474, 48, 48, 204, 204, 204, 204, 204, 204, 48, 48, 204, 204, 204, 204, 636, 204, 204, 48};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {977, 474, 636, 204, 48};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> sequence = {3, 3, 3, 4};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> sequence = {100, 100, 100, 99, 43, 99, 99, 100, 100, 100, 43, 1, 34};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 100, 43, 1, 34};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> sequence = {1, 2};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> sequence = {5, 37, 375, 5, 37, 33, 37, 375, 37, 2, 3, 3, 2};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 33, 375, 37, 3, 2};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> sequence = {1, 5, 5, 1, 6, 1};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 1};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> sequence = {100, 100, 100, 99, 99, 99};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 99};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> sequence = {1, 5, 1};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> sequence = {1, 5, 5, 1, 6, 1, 2, 2, 2, 2, 3, 1, 7, 6, 1, 1, 2, 9, 4, 1, 1, 9};
    SimpleDuplicateRemover* pObj = new SimpleDuplicateRemover();
    clock_t start = clock();
    vector<int> result = pObj->process(sequence);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 7, 6, 2, 4, 1, 9};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10241455&rd=8071&pm=4842
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
#define FOR(i, n) for(int i=0; i<(n); i++)
 
using namespace std;
 
class SimpleDuplicateRemover {
public:
  vector <int> process(vector <int> s) {
    map<int,int> m;
    FOR(i, s.size()) {
      m[s[i]]++;
    }
    vector<int> ret;
    FOR(i, s.size()) {
      m[s[i]]--;
      if (!m[s[i]])
        ret.push_back(s[i]);
    }
    return ret;
  }
};

********************************************************************************
*******************************************************************************/
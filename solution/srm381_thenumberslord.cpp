/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8419
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

class TheNumbersLord {
public:
    string create(vector<int> numbers, int n);
};

string TheNumbersLord::create(vector<int> numbers, int n) {
    string ret;
    return ret;
}


int test0() {
    vector<int> numbers = {3, 2, 7};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "732";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> numbers = {4, 7};
    int n = 4;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "7774";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> numbers = {1, 10, 100};
    int n = 4;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "110100100";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> numbers = {4, 4, 4, 4};
    int n = 9;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "444444444";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> numbers = {1};
    int n = 1;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> numbers = {2020201, 202, 20, 20, 20};
    int n = 5;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "2022020202020201";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> numbers = {9, 1, 6, 8, 7, 9, 3, 1};
    int n = 9;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "999876311";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> numbers = {2, 4, 5, 1, 1};
    int n = 5;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "54211";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> numbers = {4, 4, 7, 4, 4, 3, 8, 7, 4};
    int n = 11;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "88877444443";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> numbers = {9, 4, 1, 3};
    int n = 5;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99431";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> numbers = {4, 9, 1};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "941";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> numbers = {1, 1, 9, 9, 1};
    int n = 5;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99111";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> numbers = {7, 4, 1, 4, 1, 1, 7, 2, 6};
    int n = 11;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "77776442111";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> numbers = {1};
    int n = 1;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> numbers = {2};
    int n = 1;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "2";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> numbers = {3};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "333";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> numbers = {36, 73, 78, 17, 52, 54, 66, 19, 28, 37, 65, 85, 32, 91, 91, 43, 81, 58, 40, 97, 67, 67, 21, 17, 97};
    int n = 25;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "97979191858178736767666558545243403736322821191717";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> numbers = {2, 27, 49, 10, 3, 53, 46, 49, 81, 64, 70, 64, 1, 82, 9, 36, 1, 66, 12, 43, 85, 73, 94, 1, 28, 16, 11, 42, 1, 25, 82, 79, 85, 74, 13, 36, 3, 22, 53, 16, 34, 45, 1, 5, 24};
    int n = 48;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99494949485858282817974737066646455353494946454342363634332827252422216161312111111110";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> numbers = {15, 85, 82, 58, 75, 34, 52, 73, 47, 63, 30, 73, 1, 67, 37, 18, 97, 13, 18, 24, 70, 10, 28, 35, 26, 10, 17, 54, 55, 51, 16, 93, 82, 10, 94, 90, 55, 91, 49, 62};
    int n = 40;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9794939190858282757373706763625855555452514947373534302826241818171615131101010";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> numbers = {28, 5, 77, 30, 35, 88, 37, 40, 79, 67, 90, 14, 82, 46, 43, 25, 45, 55, 81, 26, 20, 7, 91, 64, 1, 80, 12, 50, 82, 78, 34, 11, 1, 46, 27, 99, 30, 79, 64, 97, 20, 56, 98};
    int n = 44;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "999998979190888282818079797877767646456555504646454340373534303028272625202014121111";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> numbers = {67, 6, 27, 16, 43, 54, 23, 57, 1, 61, 29, 37, 89, 31, 98, 88, 83};
    int n = 20;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "98989898898883676615754433731292723161";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> numbers = {56, 46, 10, 46, 97, 43, 96, 5, 84, 61, 9, 78, 79, 61, 28, 84, 36, 43, 90, 96, 8, 67, 33, 21, 4, 20, 42, 31, 46, 10, 82, 45, 92, 81, 56, 88, 6, 45, 3, 17};
    int n = 42;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "997979796969290888848482817978676616156565464646454544343423633331282120171010";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> numbers = {34};
    int n = 1;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "34";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> numbers = {21, 75, 31, 69, 43, 48, 52, 19, 6, 99, 28, 25, 82, 74, 1, 16, 79, 93, 39, 33, 67, 27, 93, 2};
    int n = 24;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "999393827975746967652484339333128272522119161";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> numbers = {28, 79, 67, 28, 21, 84, 35, 4, 23, 81, 16, 85, 12, 69, 4, 72, 81, 28, 55, 7, 49, 2, 34, 8, 82, 64, 4, 1, 76, 92, 27};
    int n = 31;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9288584828181797767269676455494443534282828272322116121";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> numbers = {19, 12, 56, 88, 67, 87, 13, 33, 83, 67, 51, 58, 12};
    int n = 14;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "8888878367675856513319131212";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> numbers = {72, 433, 627, 953, 529, 747, 93, 838, 676, 604, 164, 814, 293, 982, 397, 781, 126, 4, 265, 268, 382, 121, 840, 197, 115};
    int n = 25;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "98295393840838814781747726766276045294433397382293268265197164126121115";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> numbers = {2, 477, 895, 208, 597, 800, 37, 841, 954, 775, 997, 892, 190, 334, 882, 612, 613, 318, 282, 268, 238, 325, 184, 397, 226, 520, 119, 537, 415, 637, 910, 34, 292, 506, 742, 243, 984, 679, 332, 529, 709, 270, 847, 284, 33};
    int n = 48;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9979979979979849549108958928828478418007757427096796376136125975375295205064774153973734334333323253182922842822702682432382262208190184119";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> numbers = {942, 598, 262, 193, 12, 970, 520, 19, 497, 927, 885, 28, 334, 346, 496, 54, 889, 364, 783, 681, 700, 901, 55, 143, 431, 451, 638, 360, 334, 375, 754, 939, 91, 307, 490, 792, 478, 199, 490, 593};
    int n = 40;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "970942939927919018898857927837547006816385985935554520497496490490478451431375364360346334334307282621991931914312";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> numbers = {658, 194, 941, 831, 296, 700, 442, 787, 223, 697, 666, 86, 622, 901, 88, 331, 846, 523, 927, 818, 533, 502, 973, 703, 649, 170, 831, 608, 604, 852, 16, 830, 559, 667, 243, 153, 642, 664, 244, 493, 497, 704, 494};
    int n = 44;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "973973941927901888685284683183183081878770470370069766766666465864964262260860455953352350249749449344233129624424322319417016153";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> numbers = {931, 33, 729, 808, 79, 18, 743, 264, 784, 763, 650, 460, 575, 697, 260, 52, 191};
    int n = 20;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "93193193193180879784763743729697650575524603326426019118";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> numbers = {119, 19, 892, 118, 583, 943, 924, 446, 507, 439, 270, 465, 502, 664, 955, 795, 711, 223, 819, 393, 791, 292, 582, 102, 589, 704, 69, 445, 622, 964, 901, 72, 839, 909, 884, 178, 573, 9, 624, 908};
    int n = 42;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9964964964955943924909908901892884839819795791727117046966462462258958358257350750246544644543939329227022319178119118102";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> numbers = {16};
    int n = 1;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "16";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> numbers = {264, 534, 850, 312, 358, 525, 295, 442, 474, 738, 496, 943, 514, 659, 352, 25, 214, 615, 750, 96, 337, 963, 300, 92};
    int n = 24;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "969639439285075073865961553452551449647444235835233731230029526425214";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> numbers = {73, 763, 229, 991, 84, 48, 134, 580, 302, 468, 187, 418, 696, 699, 634, 855, 756, 514, 469, 736, 49, 965, 592, 80, 802, 712, 778, 712, 229, 812, 891};
    int n = 31;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9919658918558481280802778763756737367127126996966345925805144948469468418302229229187134";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> numbers = {460, 102, 632, 394, 634, 330, 733, 258, 146, 661, 96, 58, 696};
    int n = 14;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9673373369666163463258460394330258146102";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> numbers = {3501, 4825, 4335, 3284, 8566, 1341, 9867, 2197, 5473, 7066, 5906, 4045, 8843, 3358, 4843, 9250, 3942, 1147, 5485, 5245, 5116, 3928, 1011, 1898, 6136};
    int n = 25;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9867925088438566706661365906548554735245511648434825433540453942392835013358328421971898134111471011";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> numbers = {9704, 2799, 8068, 1396, 3765, 4706, 7372, 4504, 6912, 8281, 5020, 1648, 199, 3250, 2880, 3402, 1387, 8085, 7833, 1033, 6520, 3835, 7222, 3268, 4186, 2689, 3080, 5883, 1486, 9925, 82, 5821, 1471, 1658, 9814, 6471, 5646, 3091, 8171, 5362, 5776, 9153, 8218, 8321, 6855};
    int n = 48;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "992599259925992598149704915383218282818218817180858068783373727222691268556520647158835821577656465362502047064504418638353765340232683250309130802880279926891991658164814861471139613871033";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> numbers = {9024, 2263, 4834, 4216, 1263, 826, 9655, 2548, 7472, 5013, 1812, 1558, 9703, 9472, 6175, 5958, 9898, 9814, 6156, 6657, 6406, 5059, 8740, 4589, 8243, 7732, 215, 5697, 6886, 645, 6055, 9300, 6121, 7336, 4846, 8802, 8371, 3952, 2425, 854};
    int n = 40;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "989898149703965594729300902488028740854837182682437732747273366886665764564066175615661216055595856975059501348464834458942163952254824252263215181215581263";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> numbers = {7948, 1886, 7403, 4782, 2906, 1078, 6769, 337, 3643, 3928, 7614, 6548, 1567, 6481, 8260, 4876, 5391, 9262, 6021, 8837, 6653, 6046, 8605, 5509, 7921, 1466, 6744, 2624, 2062, 3840, 925, 2486, 694, 9451, 3492, 4950, 5871, 3148, 5806, 4849, 1208, 2333, 6236};
    int n = 44;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "94519451926292588378605826079487921761474036946769674466536548648162366046602158715806550953914950487648494782392838403643349233731482906262424862333206218861567146612081078";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> numbers = {8284, 1590, 3492, 9025, 3112, 7776, 815, 3621, 5347, 7882, 5078, 3601, 7514, 8545, 3464, 6424, 7310};
    int n = 20;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9025902590259025854582848157882777675147310642453475078362136013492346431121590";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> numbers = {7085, 3709, 8623, 1729, 9304, 6181, 2967, 4064, 3846, 853, 5949, 1167, 8791, 3823, 4285, 5529, 828, 835, 2070, 4155, 4166, 7591, 9834, 5367, 1390, 9029, 4398, 6565, 9352, 3772, 9091, 5985, 1379, 5922, 9362, 9691, 7530, 6480, 6141, 6452};
    int n = 42;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "983498349834969193629352930490919029879186238538358287591753070856565648064526181614159855949592255295367439842854166415540643846382337723709296720701729139013791167";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> numbers = {2509};
    int n = 1;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "2509";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> numbers = {318, 5916, 625, 9672, 9250, 5988, 8665, 7543, 4857, 8910, 2701, 2005, 4537, 5321, 3466, 313, 7603, 687, 6474, 8052, 5611, 1314, 5538, 1685};
    int n = 24;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "96729250891086658052760375436876474625598859165611553853214857453734663183132701200516851314";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> numbers = {6760, 8197, 8086, 424, 7149, 4242, 2609, 6439, 7052, 4437, 3778, 4243, 9219, 168, 7825, 666, 8100, 1315, 5896, 1393, 9454, 794, 1024, 8423, 5824, 6004, 3172, 9604, 7798, 8507, 7056};
    int n = 31;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "960494549219850784238197810080867947825779871497056705267606666439600458965824443742442434242377831722609168139313151024";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> numbers = {1504, 6447, 848, 3652, 3433, 7314, 2983, 6468, 8993, 3829, 546, 3820, 1200};
    int n = 14;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "899389938487314646864475463829382036523433298315041200";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> numbers = {16371, 74494, 4965, 68831, 53305, 90900, 66648, 39835, 42895, 97012, 15581, 54697, 93533, 42706, 29503, 15901, 23184, 45976, 53968, 99727, 27697, 53419, 43545, 28331, 19834};
    int n = 25;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9972797012935339090074494688316664854697539685341953305496545976435454289542706398352950328331276972318419834163711590115581";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> numbers = {17777, 79434, 74389, 70615, 36489, 95435, 58564, 24880, 83241, 6274, 47230, 79345, 76942, 73261, 29583, 414, 51913, 42987, 57099, 58012, 72382, 80299, 84838, 52975, 31285, 38869, 30089, 99663, 48196, 2392, 62506, 77128, 26104, 71822, 6655, 82098, 52815, 29965, 3860, 60829, 47401, 22059, 62281, 46337, 98565};
    int n = 48;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "996639966399663996639856595435848388324182098802997943479345771287694274389732617238271822706156655627462506622816082958564580125709952975528155191348196474014723046337429874143886938603648931285300892996529583261042488023922205917777";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> numbers = {6765, 39172, 32194, 51421, 11298, 19762, 97081, 12511, 9578, 36450, 2514, 1621, 52597, 56128, 2647, 5949, 73465, 37462, 65394, 21660, 66526, 11179, 90217, 45053, 78434, 37990, 30482, 78777, 54703, 14478, 68902, 75180, 50230, 63343, 40486, 73728, 91477, 65935, 5755, 30500};
    int n = 40;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9708195789147790217787777843475180737287346568902676566526659356539463343594957555612854703525975142150230450534048639172379903746236450321943050030482264725142166019762162114478125111129811179";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> numbers = {94420, 71375, 94262, 66225, 68471, 30256, 6922, 76495, 79828, 52492, 6021, 78242, 27415, 63442, 55240, 17548, 10251, 90145, 64791, 63944, 26066, 35251, 44992, 83701, 35371, 46700, 14358, 76001, 60868, 26466, 80116, 22691, 34363, 43336, 43137, 29835, 79500, 24145, 8470, 96802, 93116, 73514, 90845};
    int n = 44;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9680296802944209426293116908459014584708370180116798287950078242764957600173514713756922684716622564791639446344260868602155240524924670044992433364313735371352513436330256298352741526466260662414522691175481435810251";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> numbers = {12226, 50586, 17604, 20176, 54034, 39510, 54428, 44166, 59059, 56995, 71624, 12826, 7658, 68989, 93284, 74203, 5924};
    int n = 20;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "93284932849328493284765874203716246898959245905956995544285403450586441663951020176176041282612226";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> numbers = {63605, 41140, 77527, 12259, 80485, 16315, 71682, 91328, 87096, 28906, 82620, 70647, 27142, 95506, 20062, 55632, 61758, 75301, 40446, 3732, 32525, 5224, 9780, 83595, 34177, 68762, 84660, 19894, 82801, 20296, 32437, 5877, 12881, 6633, 4925, 27205, 60063, 45828, 60438, 88514};
    int n = 42;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "978095506955069550691328885148709684660835958280182620804857752775301716827064768762663363605617586043860063587755632522449254582841140404463732341773252532437289062720527142202962006219894163151288112259";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> numbers = {77263};
    int n = 1;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "77263";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> numbers = {56676, 60789, 91111, 24963, 76642, 51978, 44107, 22159, 60999, 40086, 56647, 77335, 1243, 73199, 94186, 1780, 71548, 24510, 71211, 68757, 25339, 56853, 95691, 40745};
    int n = 24;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9569194186911117733576642731997154871211687576099960789568535667656647519784410740745400862533924963245102215917801243";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> numbers = {6409, 83455, 17113, 90406, 88014, 4971, 79379, 37174, 47057, 4644, 72538, 89140, 86574, 86118, 84847, 12375, 57375, 12124, 3871, 9970, 19075, 93413, 14983, 53882, 32869, 14635, 82921, 8155, 24718, 33392, 90099};
    int n = 31;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99709341390406900998914088014865748611884847834558292181557937972538640957375538824971470574644387137174333923286924718190751711314983146351237512124";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> numbers = {8461, 6492, 85574, 53737, 45031, 67722, 32818, 18717, 62984, 73246, 99591, 13117, 85755};
    int n = 14;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99591995918575585574846173246677226492629845373745031328181871713117";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> numbers = {413658, 971461, 599028, 567386, 749779, 890856, 766326, 239599, 38638, 597007, 615548, 51763, 290003, 341641, 427969, 215566, 17109, 544459, 447817, 91177, 426955, 752368, 41799, 221975, 910204};
    int n = 25;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9714619117791020489085676632675236874977961554859902859700756738654445951763447817427969426955417994136583863834164129000323959922197521556617109";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> numbers = {417584, 379098, 874021, 670537, 835761, 291509, 352684, 923917, 79875, 702073, 546451, 777115, 572617, 71263, 629253, 497115, 646966, 840477, 256026, 557710, 268969, 378946, 583600, 450946, 230995, 32488, 328790, 495042, 547867, 998638, 161749, 774259, 724567, 666839, 403339, 581661, 452532, 26653, 903428, 152377, 145564, 920349, 159688, 145139, 295737};
    int n = 48;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99863899863899863899863892391792034990342887402184047783576179875777115774259724567712637020736705376668396469666292535836005816615726175577105478675464514971154950424525324509464175844033393790983789463526843287903248829573729150926896926653256026230995161749159688152377145564145139";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> numbers = {403539, 734863, 331930, 51142, 710301, 314656, 695824, 511507, 708788, 333594, 301584, 400627, 446887, 551794, 202294, 105948, 66823, 137227, 465318, 521160, 161539, 110791, 689365, 43100, 977453, 435016, 129509, 274086, 848485, 513861, 567187, 170769, 449641, 362944, 440050, 571221, 689788, 65134, 402088, 128465};
    int n = 40;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "97745384848573486371030170878869582468978868936566823651345712215671875517945211605138615115075114246531844964144688744005043501643100403539402088400627362944333594331930314656301584274086202294170769161539137227129509128465110791105948";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> numbers = {590068, 869324, 992948, 461370, 268028, 526174, 504937, 676111, 775447, 348349, 804861, 673412, 622000, 763138, 148939, 515815, 109737, 289234, 258669, 363455, 526007, 330172, 342631, 182521, 533116, 946223, 712119, 268340, 854749, 123729, 980035, 118712, 828730, 942724, 141102, 829323, 778863, 419245, 507736, 494998, 189308, 71633, 187307};
    int n = 44;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99294899294898003594622394272486932485474982932382873080486177886377544776313871633712119676111673412622000590068533116526174526007515815507736504937494998461370419245363455348349342631330172289234268340268028258669189308187307182521148939141102123729118712109737";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> numbers = {311620, 546486, 714015, 517291, 952126, 333684, 953789, 43221, 353431, 856906, 371279, 711748, 902672, 663034, 993266, 69982, 405785};
    int n = 20;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9932669932669932669932669537899521269026728569067140157117486998266303454648651729143221405785371279353431333684311620";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> numbers = {861257, 134884, 474418, 805312, 979603, 615328, 370554, 391055, 85422, 727711, 982287, 869595, 524977, 988675, 315640, 152643, 859851, 474748, 535284, 703689, 430361, 304987, 807774, 683418, 133456, 968735, 381687, 218227, 475147, 15949, 129772, 205866, 808031, 205704, 403481, 220957, 256317, 245763, 755868, 187721};
    int n = 42;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9886759886759886759822879796039687358695958612578598518542280803180777480531275586872771170368968341861532853528452497747514747474847441843036140348139105538168737055431564030498725631724576322095721822720586620570418772115949152643134884133456129772";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> numbers = {276739};
    int n = 1;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "276739";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> numbers = {951312, 257277, 690160, 819492, 976381, 947577, 643651, 821620, 860613, 534204, 454042, 74869, 600913, 671987, 93259, 97927, 270943, 722892, 64686, 267828, 25312, 556407, 592707, 440651};
    int n = 24;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9792797638195131294757793259860613821620819492748697228926901606719876468664365160091359270755640753420445404244065127094326782825727725312";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> numbers = {698374, 781981, 213016, 586405, 982101, 4044, 77057, 332248, 244058, 803664, 772414, 787630, 386310, 985713, 84550, 309546, 453303, 309205, 800668, 908827, 11038, 289676, 213379, 651428, 228574, 214498, 881896, 702010, 818410, 931880, 487404};
    int n = 31;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9857139821019318809088278818968455081841080366480066878763078198177241477057702010698374651428586405487404453303404438631033224830954630920528967624405822857421449821337921301611038";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> numbers = {303157, 605496, 585047, 647746, 443191, 566763, 931801, 315942, 762383, 473188, 599496, 11047, 485211};
    int n = 14;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "93180193180176238364774660549659949658504756676348521147318844319131594230315711047";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> numbers = {301413357, 336971125, 659598369, 160567226, 391749388, 4890852, 35766291, 26239573, 473038165, 597007, 3615545, 326051437, 392289611, 118341523, 170427799, 37215529, 675016434, 168544291, 683447134, 950090227, 82426873, 116752252, 194041605, 706221269, 69909136};
    int n = 25;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "950090227824268737062212696990913668344713467501643465959836959700748908524730381653922896113917493883721552936155453576629133697112532605143730141335726239573194041605170427799168544291160567226118341523116752252";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> numbers = {21417563, 37379061, 40873981, 8670529, 80835681, 436291073, 653352031, 106923811, 374079501, 466701607, 86546365, 247776868, 480572137, 222071041, 36629217, 366496749, 549646417, 278840199, 119255907, 33557677, 379268590, 150378796, 137583463, 225450721, 32230963, 709031779, 144328646, 513494529, 36547831, 416998222, 84161665, 318773941, 170724397, 553666286, 368402971, 48581613, 31452501, 368026285, 47903381, 939151438, 204145360, 189920160, 288159400, 133145006, 314295423};
    int n = 48;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "939151438939151438939151438939151438867052986546365841616658083568170903177965335203155366628654964641751349452948581613480572137479033814667016074362910734169982224087398137926859037407950137379061368402971368026285366496749366292173654783133557677322309633187739413145250131429542328815940027884019924777686822545072122207104121417563204145360189920160170724397150378796144328646137583463133145006119255907106923811";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> numbers = {358403181, 478734385, 29331901, 31051111, 110710191, 567314089, 139695685, 111511396, 87708701, 317333277, 103301481, 110400517, 634446253, 481551313, 39202255, 105948, 738066085, 26137201, 8465310, 55521105, 554160985, 43110748, 94689271, 217042883, 108977345, 330434686, 108129401, 521273565, 690847795, 68513793, 190566997, 490170279, 65449576, 44362900, 48440002, 278570943, 187689601, 89065045, 407401681, 226128239};
    int n = 40;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "946892718906504587708701846531073806608569084779568513793654495766344462535673140895552110555416098552127356549017027948440002481551313478734385443629004311074840740168139202255358403181330434686317333277310511112933190127857094326137201226128239217042883190566997187689601139695685111511396110710191110400517108977345108129401105948103301481";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> numbers = {483589585, 227869097, 145992803, 539460831, 49267979, 453525721, 220504717, 42676069, 486774961, 460347889, 128804733, 536672876, 601621399, 33763105, 700148239, 192515623, 57109680, 101289133, 680257989, 54363401, 6526001, 564329608, 262342369, 131182390, 250532866, 52946171, 248711871, 851267489, 679854070, 304123425, 8980027, 442118270, 625828105, 67942657, 226140876, 56829267, 70778793, 544418701, 81507655, 200494798, 423188885, 209071424, 393186914};
    int n = 44;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "8980027851267489851267489815076557077879370014823968025798967985407067942657652600162582810560162139957109680568292675643296085444187015436340153946083153667287652946171492679794867749614835895854603478894535257214421182704267606942318888539318691433763105304123425262342369250532866248711871227869097226140876220504717209071424200494798192515623145992803131182390128804733101289133";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> numbers = {67311553, 455546031, 398713617, 320516971, 211951915, 647333037, 70953719, 105043116, 625352806, 9856897, 38371241, 119711629, 553902119, 661662373, 1993265, 469069513, 15405770};
    int n = 20;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9856897709537196731155366166237366166237366166237366166237364733303762535280655390211946906951345554603139871361738371241320516971211951915199326515405770119711629105043116";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> numbers = {260860997, 695134189, 345474073, 771804541, 97979506, 109615219, 125370429, 30391025, 186085236, 132727579, 36982251, 116869479, 240524737, 758987917, 491315149, 332152311, 211859640, 61474687, 573534711, 4703685, 240430121, 26304961, 222807552, 19683399, 80133376, 2968733, 330381357, 185218042, 850474297, 483015466, 296129476, 1205865, 538807493, 103205601, 160403321, 694220263, 416255901, 7245756, 507755361, 88187633};
    int n = 42;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "97979506881876338504742978504742978504742978013337677180454175898791772457566951341896942202636147468757353471153880749350775536149131514948301546647036854162559013698225134547407333215231133038135730391025296873329612947626304961260860997240524737240430121222807552211859640196833991860852361852180421604033211327275791253704291205865116869479109615219103205601";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> numbers = {58276681};
    int n = 1;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "58276681";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> numbers = {595950717, 390256887, 105690055, 607818885, 28976353, 488947089, 50643601, 59821561, 42860571, 653533551, 289453753, 274074595, 36600877, 134671853, 103093156, 428097499, 67270876, 179722713, 725063961, 103267725, 3025309, 49556358, 331592376, 10440641};
    int n = 24;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "72506396167270876653533551607818885598215615959507175064360149556358488947089428605714280974993902568873660087733159237630253092897635328945375327407459517972271313467185310569005510440641103267725103093156";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> numbers = {892697482, 163781818, 455212561, 444585961, 656981445, 103003941, 258076799, 547331701, 333243725, 108803556, 13772401, 167787463, 29386281, 44985669, 33084517, 314309232, 452452851, 324308881, 355800313, 126908701, 893010145, 415289261, 178213201, 272651156, 477228097, 15214483, 113881783, 682701328, 700817710, 167931713, 299487105};
    int n = 31;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "8930101458926974827008177106827013286569814455473317014772280974552125614524528514498566944458596141528926135580031333324372533084517324308881314309232299487105293862812726511562580767991782132011679317131677874631637818181521448313772401126908701113881783108803556103003941";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> numbers = {589302568, 110605386, 58584989, 665647081, 204442987, 106566657, 112931689, 308315634, 66762317, 6473182, 10599486, 230010817, 60485151};
    int n = 14;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "667623176656470816656470816473182604851515893025685858498930831563423001081720444298711293168911060538610656665710599486";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> numbers = {301413357, 336971125, 659598369, 160567226, 391749388, 4890852, 35766291, 26239573, 473038165, 597007, 3615545, 326051437, 392289611, 118341523, 170427799, 37215529, 675016434, 168544291, 683447134, 950090227, 82426873, 116752252, 194041605, 706221269, 69909135};
    int n = 25;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "950090227824268737062212696990913568344713467501643465959836959700748908524730381653922896113917493883721552936155453576629133697112532605143730141335726239573194041605170427799168544291160567226118341523116752252";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> numbers = {21417563, 37379061, 40873981, 8670529, 80835681, 436291073, 653352031, 106923811, 374079501, 466701607, 86546365, 247776868, 480572137, 222071041, 36629217, 366496749, 549646417, 278840199, 119255907, 33557677, 379268590, 150378796, 137583463, 225450721, 32230963, 709031779, 144328646, 513494529, 36547831, 416998222, 84161665, 318773941, 170724397, 553666286, 368402971, 48581613, 31452501, 368026285, 47903381, 939151438, 204145360, 189920160, 288159400, 133145006, 314295423};
    int n = 48;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "939151438939151438939151438939151438867052986546365841616658083568170903177965335203155366628654964641751349452948581613480572137479033814667016074362910734169982224087398137926859037407950137379061368402971368026285366496749366292173654783133557677322309633187739413145250131429542328815940027884019924777686822545072122207104121417563204145360189920160170724397150378796144328646137583463133145006119255907106923811";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> numbers = {358403181, 478734385, 29331901, 31051111, 110710191, 567314089, 139695685, 111511396, 87708701, 317333277, 103301481, 110400517, 634446253, 481551313, 39202255, 105948, 738066085, 26137201, 8465310, 55521105, 554160985, 43110748, 94689271, 217042883, 108977345, 330434686, 108129401, 521273565, 690847795, 68513793, 190566997, 490170279, 65449576, 44362900, 48440002, 278570943, 187689601, 89065045, 407401681, 226128239};
    int n = 40;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "946892718906504587708701846531073806608569084779568513793654495766344462535673140895552110555416098552127356549017027948440002481551313478734385443629004311074840740168139202255358403181330434686317333277310511112933190127857094326137201226128239217042883190566997187689601139695685111511396110710191110400517108977345108129401105948103301481";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> numbers = {483589585, 227869097, 145992803, 539460831, 49267979, 453525721, 220504717, 42676069, 486774961, 460347889, 128804733, 536672876, 601621399, 33763105, 700148239, 192515623, 57109680, 101289133, 680257989, 54363401, 6526001, 564329608, 262342369, 131182390, 250532866, 52946171, 248711871, 851267489, 679854070, 304123425, 8980027, 442118270, 625828105, 67942657, 226140876, 56829267, 70778793, 544418701, 81507655, 200494798, 423188885, 209071424, 393186914};
    int n = 44;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "8980027851267489851267489815076557077879370014823968025798967985407067942657652600162582810560162139957109680568292675643296085444187015436340153946083153667287652946171492679794867749614835895854603478894535257214421182704267606942318888539318691433763105304123425262342369250532866248711871227869097226140876220504717209071424200494798192515623145992803131182390128804733101289133";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> numbers = {67311553, 455546031, 398713617, 320516971, 211951915, 647333037, 70953719, 105043116, 625352806, 9856897, 38371241, 119711629, 553902119, 661662373, 1993265, 469069513, 15405770};
    int n = 20;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9856897709537196731155366166237366166237366166237366166237364733303762535280655390211946906951345554603139871361738371241320516971211951915199326515405770119711629105043116";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> numbers = {260860997, 695134189, 345474073, 771804541, 97979506, 109615219, 125370429, 30391025, 186085236, 132727579, 36982251, 116869479, 240524737, 758987917, 491315149, 332152311, 211859640, 61474687, 573534711, 4703685, 240430121, 26304961, 222807552, 19683399, 80133376, 2968733, 330381357, 185218042, 850474297, 483015466, 296129476, 1205865, 538807493, 103205601, 160403321, 694220263, 416255901, 7245756, 507755361, 88187633};
    int n = 42;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "97979506881876338504742978504742978504742978013337677180454175898791772457566951341896942202636147468757353471153880749350775536149131514948301546647036854162559013698225134547407333215231133038135730391025296873329612947626304961260860997240524737240430121222807552211859640196833991860852361852180421604033211327275791253704291205865116869479109615219103205601";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> numbers = {58276681};
    int n = 1;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "58276681";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> numbers = {595950717, 390256887, 105690055, 607818885, 28976353, 488947089, 50643601, 59821561, 42860571, 653533551, 289453753, 274074595, 36600877, 134671853, 103093156, 428097499, 67270876, 179722713, 725063961, 103267725, 3025309, 49556358, 331592376, 10440641};
    int n = 24;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "72506396167270876653533551607818885598215615959507175064360149556358488947089428605714280974993902568873660087733159237630253092897635328945375327407459517972271313467185310569005510440641103267725103093156";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> numbers = {892697482, 163781818, 455212561, 444585961, 656981445, 103003941, 258076799, 547331701, 333243725, 108803556, 13772401, 167787463, 29386281, 44985669, 33084517, 314309232, 452452851, 324308881, 355800313, 126908701, 893010145, 415289261, 178213201, 272651156, 477228097, 15214483, 113881783, 682701328, 700817710, 167931713, 299487105};
    int n = 31;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "8930101458926974827008177106827013286569814455473317014772280974552125614524528514498566944458596141528926135580031333324372533084517324308881314309232299487105293862812726511562580767991782132011679317131677874631637818181521448313772401126908701113881783108803556103003941";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> numbers = {589302568, 110605386, 58584989, 665647081, 204442987, 106566657, 112931689, 308315634, 66762317, 6473182, 10599486, 230010817, 60485151};
    int n = 14;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "667623176656470816656470816473182604851515893025685858498930831563423001081720444298711293168911060538610656665710599486";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> numbers = {1000000000};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> numbers = {474747, 4747474, 47, 477, 4747477, 47474747, 4, 7, 74747474, 7474747, 747474747, 474747474, 474, 747};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "77477474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474747747474744774747477474747474747474747474747447474744744";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> numbers = {4, 47, 474, 4747, 47474, 474747, 4747474, 47474747, 474747474, 7, 74, 747, 7474, 74747, 747474, 7474747, 74747474, 747474747};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "774774747747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474774747474747474747474474747474747474747474747474744747474474744744";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> numbers = {111, 22, 3};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "322111";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> numbers = {111, 22, 3};
    int n = 4;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "322111111";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> numbers = {1000, 100, 10};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "101001000";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> numbers = {1000, 100, 10};
    int n = 4;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1010010001000";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> numbers = {11121112, 1112111, 111211, 11121, 1112};
    int n = 5;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "111211121112111211112111112111";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> numbers = {11121112, 1112111, 111211, 11121, 1112};
    int n = 6;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "11121112111211121112111211112111112111";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> numbers = {221221221, 22122122, 2212212, 221221};
    int n = 4;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "221221222212212221221221221221";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> numbers = {221221221, 22122122, 2212212, 221221};
    int n = 7;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "221221222212212221221221221221221221221221221221221221221";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> numbers = {212121212, 21212121, 2121212, 212121, 21212, 2121, 212, 21, 2};
    int n = 9;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "221221212212121221212121221212121212121212121";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> numbers = {212121212, 21212121, 2121212, 212121, 21212, 2121, 212, 21, 2};
    int n = 10;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "221221212212121221212121221212121221212121212121212121";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> numbers = {1};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> numbers = {123456789};
    int n = 1;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> numbers = {23, 23, 23, 23, 232323231};
    int n = 6;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "23232323232323231232323231";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> numbers = {23, 23, 23, 23, 232323234};
    int n = 6;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "23232323423232323423232323";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> numbers = {232323231, 23, 23, 23, 23};
    int n = 6;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "23232323232323231232323231";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> numbers = {232323234, 23, 23, 23, 23};
    int n = 6;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "23232323423232323423232323";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> numbers = {1, 1, 2};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "211";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> numbers = {1, 1, 1, 21, 29, 2, 2, 3, 3, 3};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "33329292929292929292929292929292929292929292929292929292929292929292929292929292929292221111";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> numbers = {13, 1324, 53253, 6745, 12254, 76, 7, 1, 674, 45, 10001, 11, 11, 10000, 2000, 30, 5, 34, 6};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "7766746745655325353253532535325353253532535325353253532535325353253532535325353253532535325353253532535325353253532535325353253532535325353253532535325353253532535325353253453430200013241312254111111000110000";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> numbers = {100000000, 9999991, 99999110, 11223310, 333332, 4994994, 49449334, 232343, 2342342, 2345234, 9999, 2333, 1, 2, 3, 4, 4, 65};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999999199999110654994994494493344433333322345234234234223332323432112233101100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> numbers = {123, 12345, 45, 9, 99, 900, 100000, 100100, 1000000000, 1000000000, 1000000000, 876, 8, 777555333, 77755539, 123, 12345, 45, 9, 99, 900, 100000, 100100, 1000000000, 1000000000, 1000000000, 876, 8, 777555333, 77755539, 123, 12345, 45, 9, 99, 900, 100000, 100100, 1000000000, 1000000000, 1000000000, 876, 8, 777555333, 77755539};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999990090090088887687687677755539777555397775553977755533377755533377755533345454512345123451234512312312310010010010010010010000010000010000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> numbers = {1, 1, 2, 43, 4, 999999999};
    int n = 14;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "999999999999999999999999999999999999999999999999999999999999999999999999999999999443211";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> numbers = {9, 90, 909, 990, 9009, 900009999, 99900, 9099, 9099999, 9090909, 9099, 190, 9000, 191, 191, 9090, 991, 9009, 900000900, 191, 9009, 9099, 900099, 900999, 909900, 19, 2, 90, 99909, 909, 99010, 299, 929, 999299, 92990, 9291, 1299, 90909, 29, 91, 990009, 90099, 99099};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99992999990999900991990999909901099000992992990929191909999990999099909990990990990090909909090990909090900999900999009900990099000999000900009999900009999900009999900009999900009999900009999900009999900009999900000900299292191911911911901299";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> numbers = {100, 9, 91, 99, 88, 80, 8};
    int n = 8;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9999188880100100";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> numbers = {11060, 1, 107};
    int n = 4;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "11106011060107";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> numbers = {19, 2};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "21919";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> numbers = {1, 10, 101, 102, 1000000000, 90, 89, 9000, 999999999};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999990900089110210110100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> numbers = {110, 11, 1000, 11000, 11, 1, 1, 100, 111};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111101100011000110001100011000110001100011000110001100011000110001100011000110001100011000110001100011000110001100011000110001100011000110001100011000110001100011000110001100011000110001100011000110001100011000110001001000";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> numbers = {86, 868};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "86886886";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> numbers = {1, 10, 100, 10000, 999999999, 1000000, 1000000000, 999999, 24344323, 778882, 1212, 8932312, 343423, 122112, 43432, 1111, 2, 4, 5, 12, 45, 34, 134, 125, 176, 32234};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999999999998932312778882545443432343434233223424344323217613412512211212121211111101001000010000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> numbers = {1, 99, 999, 79, 55, 4444, 7575, 45424, 112, 11, 55, 55, 9, 9, 9, 9, 9, 9, 9, 9, 9, 787541, 7777777, 10104, 101, 10000, 1, 100, 136, 33};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "999999999999997978754177777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777775755555554542444443313611211111011010410010000";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> numbers = {345, 23, 123, 45, 10000, 999999, 455555, 77776, 44444, 333};
    int n = 34;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999997777645555545444443453332312310000";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> numbers = {7, 768, 7687, 76876, 768768, 2221, 221, 222, 991, 9909, 99, 990, 989, 1024, 102, 1, 120, 1201, 12012, 120120};
    int n = 30;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9999199099909897768776876876876876876876876876876876876876876876876876876876876876876876876876222222122112012120120120120111024102";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> numbers = {9, 50, 1};
    int n = 4;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "950501";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> numbers = {1, 10, 100};
    int n = 4;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "110100100";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> numbers = {345, 23, 123, 45, 10000, 999999, 455555, 77776, 44444, 333, 657, 33445, 12324};
    int n = 34;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999977776657455555454444434533445333231232412310000";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> numbers = {447, 74, 7};
    int n = 4;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "774447447";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> numbers = {1001, 1, 10, 101, 1110, 11111, 11110011};
    int n = 40;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "111111111100111111001111110011111100111111001111110011111100111111001111110011111100111111001111110011111100111111001111110011111100111111001111110011111100111111001111110011111100111111001111110011111100111111001111110011111100111111001111110011111100111111001111110011111100111110101101001";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> numbers = {909999, 90199, 87451, 12345, 63, 1279, 1212154, 1151512};
    int n = 49;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9099999019987451631279123451212154121215412121541212154121215412121541212154121215412121541212154121215412121541212154121215412121541212154121215412121541212154121215412121541212154121215412121541212154121215412121541212154121215412121541212154121215412121541212154121215412121541212154121215412121541212154121215412121541151512";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> numbers = {1, 22, 33, 44, 555, 666, 777, 3, 10, 111, 345, 1};
    int n = 15;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "77777777777766655544345333221111110";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> numbers = {345, 23, 123, 45, 10000, 999999, 455555, 77776, 44444, 333, 657, 33445, 12324, 234242};
    int n = 34;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999977776657455555454444434533445333234242231232412310000";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> numbers = {101, 111, 121, 131, 141, 151, 161, 171, 181, 20, 30};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "3020181181181181181181181181181181181181181181181181181181181181181181181181181181181181181181181181181181181181181181181181171161151141131121111101";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> numbers = {7, 3, 2};
    int n = 5;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "77732";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> numbers = {1, 1, 2, 3, 4, 5, 6, 767, 2100, 454, 454, 6346, 634, 234, 234, 6436, 54, 35235, 354, 235, 46364, 756, 5435435, 346, 345, 234234, 6565, 45345, 65346, 2342};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "7677566656565346643663466345545435435543543554354355435435543543554354355435435543543554354355435435543543554354355435435543543554354355435435543543554354355435435543543554354354636445445445345435435235346345323523423423423423422210011";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> numbers = {119, 1199};
    int n = 2;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1199119";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> numbers = {324, 123123, 132423, 123, 123124, 453243};
    int n = 40;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243453243324132423123124123123123";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> numbers = {1, 20, 100};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "201100";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> numbers = {100, 1001, 1002};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "10021001100";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> numbers = {123, 32, 100, 133, 1, 2, 3};
    int n = 49;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "33221331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331331231100";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> numbers = {99, 49, 4, 9971, 99, 994, 9994, 4999, 49, 44, 31, 34, 431};
    int n = 49;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "999999949994999499949994999499949994999499949994999499949994999499949994999499949994999499949994999499949994999499949994999499949994999499949994999499949971994499949494444313431";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> numbers = {99, 990};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99990990";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> numbers = {1010, 101};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1011010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> numbers = {909999, 90199, 87451, 12345, 63, 1279, 1212154, 1151512, 10000000, 1000000000};
    int n = 49;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "90999990199874516312791234512121541151512100000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000100000000010000000001000000000";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> numbers = {1, 1, 2, 43, 4, 999999999, 989, 988988988, 123, 23};
    int n = 22;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999998998898898844323212311";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> numbers = {98, 9899};
    int n = 8;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "989998999899989998999899989998";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> numbers = {9, 22, 1, 4, 3};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "943222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222221";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> numbers = {10, 102};
    int n = 2;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "10210";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> numbers = {1, 13, 138, 1380, 13809};
    int n = 10;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1381380913809138091380913809138091380131";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> numbers = {1, 3, 2, 2221};
    int n = 5;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "32222122211";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> numbers = {3, 9, 70};
    int n = 45;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9707070707070707070707070707070707070707070707070707070707070707070707070707070707070703";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> numbers = {9, 82, 343};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "982343";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> numbers = {99, 555, 11};
    int n = 4;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9955555511";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> numbers = {2, 2, 21};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "2221";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> numbers = {43, 2, 6, 100, 101, 100, 4, 4, 1, 1, 1, 1, 110, 10, 365, 76, 83, 50, 100000000, 10000000, 67};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "8376676504443365211111101011010010010000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000100000000";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> numbers = {42, 4243};
    int n = 10;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "42434243424342434243424342434243424342";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> numbers = {99, 999, 100, 100, 100, 100, 99, 90, 9, 90};
    int n = 15;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "999999999999999999999999090100100100100";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> numbers = {11, 1121, 11211};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "11211121111";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> numbers = {1, 2, 2, 5, 3, 100000, 13, 14, 28, 10000, 12, 25};
    int n = 14;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "53282522141312110000100000100000100000";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> numbers = {991, 99, 8};
    int n = 9;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "999919919919919919919918";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> numbers = {1, 2, 3, 1000};
    int n = 5;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "32110001000";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> numbers = {123, 321, 231, 432};
    int n = 4;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "432321231123";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> numbers = {5, 6, 6, 10, 101, 801, 802, 9, 800, 80, 1};
    int n = 20;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "980802802802802802802802802802802801800665110110";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> numbers = {1, 1, 12};
    int n = 3;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1211";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> numbers = {900, 10};
    int n = 2;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "90010";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> numbers = {9, 100, 101, 1090};
    int n = 50;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "910901090109010901090109010901090109010901090109010901090109010901090109010901090109010901090109010901090109010901090109010901090109010901090109010901090109010901090109010901090109010901090101100";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> numbers = {123, 321, 231, 432, 23, 6545, 43, 11, 10, 3, 9, 99};
    int n = 12;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9996545434323321232311231110";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> numbers = {111, 999, 1, 2, 845, 564};
    int n = 15;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999999999984556421111";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> numbers = {9, 19, 919, 91};
    int n = 5;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99199199119";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> numbers = {858, 8588};
    int n = 2;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "8588858";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> numbers = {123, 12312, 1};
    int n = 4;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "12312312123121";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> numbers = {1, 12};
    int n = 2;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "121";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> numbers = {20, 1};
    int n = 2;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "201";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> numbers = {987, 987, 123, 12, 3, 9, 9, 9, 1, 1, 918};
    int n = 16;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "99998798798798798798798791831231211";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> numbers = {1384, 13840, 138405, 13849};
    int n = 10;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "13849138413840513840513840513840513840513840513840513840";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> numbers = {321, 32};
    int n = 2;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "32321";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> numbers = {9, 999995};
    int n = 10;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "9999995999995999995999995999995999995999995999995999995";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> numbers = {1, 199};
    int n = 2;
    TheNumbersLord* pObj = new TheNumbersLord();
    clock_t start = clock();
    string result = pObj->create(numbers, n);
    clock_t end = clock();
    delete pObj;
    string expected = "1991";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22679165&rd=10804&pm=8419
********************************************************************************
#include <string> 
#include <vector> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <numeric> 
using namespace std; 
#ifdef __GNUC__ 
#define int64 long long 
#else 
#define int64 __int64 
#endif 
 
 typedef vector<int> vi;  
 #define sz(a) int((a).size())  
 #define all(c) (c).begin(),(c).end()  
 
    class TheNumbersLord 
        {  
        public:  
        string create(vector <int> num, int n)  
            {  
             string res=""; 
        int mx=-1; 
        vector <string> t; 
 
        for (int i=0;i<sz(num);i++) 
        { 
          ostringstream ss; 
          mx=max(mx,num[i]); 
          ss << num[i]; 
          t.push_back(ss.str());         
        } 
 
        ostringstream ss; 
        ss << mx; 
 
        for (int i=1;i<=n-sz(num);i++) t.push_back(ss.str()); 
 
        for (int i=0;i<=5000;i++) 
        for (int j=0;j<sz(t)-1;j++) 
        { 
          if (t[j]+t[j+1]<t[j+1]+t[j]) swap(t[j],t[j+1]);         
        } 
 
        for (int i=0;i<sz(t);i++) res+=t[i];       
 
                
        return res; 
            }  
         
  
        };  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
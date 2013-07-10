/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6852
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

class BlockEnemy {
public:
    int minEffort(int N, vector<string> roads, vector<int> occupiedTowns);
};

int BlockEnemy::minEffort(int N, vector<string> roads, vector<int> occupiedTowns) {
    int ret;
    return ret;
}


int test0() {
    int N = 5;
    vector<string> roads = {"1 0 1", "1 2 2", "0 3 3", "4 0 4"};
    vector<int> occupiedTowns = {3, 2, 4};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 5;
    vector<string> roads = {"1 0 1", "1 2 2", "0 3 3", "4 0 4"};
    vector<int> occupiedTowns = {3};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
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
    int N = 12;
    vector<string> roads = {"0 1 3", "2 0 5", "1 3 1", "1 4 8", "1 5 4", "2 6 2", "4 7 11", "4 8 10", "6 9 7", "6 10 9", "6 11 6"};
    vector<int> occupiedTowns = {1, 2, 6, 8};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 12;
    vector<string> roads = {"0 1 3", "2 0 5", "1 3 1", "1 4 8", "1 5 4", "2 6 2", "4 7 11", "4 8 10", "6 9 7", "6 10 9", "6 11 6"};
    vector<int> occupiedTowns = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 2;
    vector<string> roads = {"0 1 68"};
    vector<int> occupiedTowns = {0, 1};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 3;
    vector<string> roads = {"1 0 45", "0 2 94"};
    vector<int> occupiedTowns = {2};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
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
    int N = 4;
    vector<string> roads = {"1 3 95", "2 0 71", "2 3 78"};
    vector<int> occupiedTowns = {0, 3, 2};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 5;
    vector<string> roads = {"1 2 20", "4 3 79", "0 1 88", "3 0 91"};
    vector<int> occupiedTowns = {1, 3};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 6;
    vector<string> roads = {"2 1 69", "4 1 99", "0 5 21", "0 4 67", "0 3 95"};
    vector<int> occupiedTowns = {1, 0, 4};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 166;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 7;
    vector<string> roads = {"5 0 98", "4 5 37", "5 1 81", "3 5 98", "4 6 20", "4 2 26"};
    vector<int> occupiedTowns = {6, 0, 3, 5, 4, 2, 1};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 8;
    vector<string> roads = {"5 6 69", "5 1 66", "0 1 65", "2 0 68", "7 3 62", "1 4 73", "7 2 47"};
    vector<int> occupiedTowns = {1, 7, 0};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 9;
    vector<string> roads = {"5 7 55", "5 1 39", "2 1 80", "0 5 49", "4 1 10", "0 8 80", "6 5 100", "0 3 79"};
    vector<int> occupiedTowns = {6, 5, 3};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 10;
    vector<string> roads = {"5 1 925", "6 3 256", "2 5 925", "8 7 886", "3 0 146", "5 9 201", "4 2 901", "5 8 746", "1 0 787"};
    vector<int> occupiedTowns = {7, 2, 1, 3, 4, 0, 5, 8};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 5316;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 11;
    vector<string> roads = {"9 3 779", "9 10 146", "5 1 737", "1 10 25", "2 0 20", "1 8 195", "6 1 876", "7 10 645", "2 1 624", "4 6 875"};
    vector<int> occupiedTowns = {8, 0, 3, 10};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 191;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 12;
    vector<string> roads = {"9 5 681", "11 1 398", "6 1 559", "10 3 48", "5 0 978", "0 1 301", "0 2 727", "7 1 609", "3 9 894", "8 10 122", "4 3 127"};
    vector<int> occupiedTowns = {11, 8, 1, 6, 4, 7, 9};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 2042;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 13;
    vector<string> roads = {"12 4 893", "3 6 164", "6 9 568", "1 2 903", "2 6 692", "3 10 378", "4 6 18", "7 9 356", "0 2 367", "6 8 154", "5 12 658", "11 1 574"};
    vector<int> occupiedTowns = {2, 6, 9, 4, 7, 0, 11};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 2575;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 14;
    vector<string> roads = {"11 7 270", "2 7 221", "7 1 726", "1 3 148", "10 3 572", "4 9 29", "3 13 168", "12 3 361", "4 11 35", "5 1 32", "10 0 402", "0 8 384", "6 13 281"};
    vector<int> occupiedTowns = {9, 10, 4, 8, 3, 11, 0};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 1570;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 15;
    vector<string> roads = {"6 10 639", "6 4 562", "0 5 149", "0 11 924", "6 13 693", "10 0 581", "14 11 499", "2 5 619", "7 11 386", "3 1 109", "6 12 567", "1 13 592", "6 9 610", "2 8 904"};
    vector<int> occupiedTowns = {10, 3, 9, 13, 4, 6};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 2613;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 16;
    vector<string> roads = {"8 12 700", "14 8 173", "13 9 618", "10 12 947", "15 4 141", "9 3 920", "12 2 506", "0 9 428", "6 8 454", "7 2 138", "1 3 132", "7 1 845", "1 4 431", "5 11 86", "4 11 153"};
    vector<int> occupiedTowns = {11, 9, 1, 4, 3, 6, 0, 2, 12, 14, 5, 7, 15, 10};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 5354;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 17;
    vector<string> roads = {"14 15 34", "15 0 869", "11 1 557", "14 10 713", "12 10 736", "16 10 684", "4 5 767", "11 5 134", "0 11 600", "2 10 567", "16 7 346", "6 8 952", "6 14 974", "3 9 386", "9 12 810", "14 13 407"};
    vector<int> occupiedTowns = {12, 6, 8, 3, 9, 11, 4, 15, 2, 14};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 5170;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 18;
    vector<string> roads = {"15 5 260", "16 17 185", "6 7 339", "15 11 758", "17 9 99", "1 11 578", "4 16 486", "16 8 987", "5 0 727", "10 4 286", "14 12 872", "8 11 583", "5 2 879", "6 1 862", "16 3 336", "12 13 473", "15 14 183"};
    vector<int> occupiedTowns = {17, 14, 13, 11, 10, 2, 3};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 1723;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 19;
    vector<string> roads = {"15 11 134", "12 6 280", "3 10 832", "2 4 957", "9 1 713", "11 2 356", "4 5 954", "5 7 891", "7 17 891", "2 14 431", "0 14 20", "6 3 471", "8 9 465", "14 9 20", "0 13 635", "16 0 159", "17 10 129", "8 18 555"};
    vector<int> occupiedTowns = {6, 0, 5, 13, 15, 2, 3, 18, 11, 4, 12, 17, 10, 8, 7};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 7125;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 20;
    vector<string> roads = {"4 10 355", "16 2 84", "11 14 89", "6 18 648", "15 13 788", "12 15 54", "8 4 600", "2 8 342", "4 1 213", "14 10 167", "19 8 958", "17 5 634", "14 7 265", "13 14 730", "4 9 354", "13 18 120", "12 5 2", "9 0 117", "6 3 129"};
    vector<int> occupiedTowns = {19, 9, 4, 2, 10, 14, 11, 18};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 2027;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 21;
    vector<string> roads = {"8 4 42", "8 10 290", "1 13 788", "19 11 735", "8 3 912", "20 12 550", "17 11 375", "18 2 621", "20 7 222", "20 0 539", "9 4 766", "18 13 217", "8 0 225", "15 19 787", "16 9 142", "11 6 118", "6 1 133", "7 5 683", "12 18 145", "7 14 504"};
    vector<int> occupiedTowns = {10, 1};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 22;
    vector<string> roads = {"21 12 502", "9 16 831", "4 9 784", "18 19 404", "4 7 558", "1 21 631", "10 19 544", "10 3 19", "2 12 675", "21 9 972", "17 18 196", "21 11 516", "5 4 469", "20 7 284", "19 2 818", "0 9 382", "14 17 333", "20 8 996", "6 15 412", "11 6 596", "13 7 132"};
    vector<int> occupiedTowns = {10, 3, 17, 7};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 717;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 23;
    vector<string> roads = {"4 19 18", "14 8 296", "6 19 828", "17 5 38", "19 10 258", "9 5 23", "2 13 969", "7 10 240", "4 9 998", "5 20 826", "3 2 827", "15 6 18", "16 1 602", "2 8 92", "8 1 408", "14 0 798", "5 16 388", "21 3 701", "15 12 268", "22 9 87", "11 18 649", "18 15 555"};
    vector<int> occupiedTowns = {0, 18, 2, 12, 14, 15, 17, 9, 21, 5, 11, 19, 8, 4, 20, 1};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 6076;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 24;
    vector<string> roads = {"15 3 795", "7 12 783", "8 10 412", "2 23 724", "8 20 919", "23 21 228", "15 13 834", "2 0 936", "7 0 531", "20 11 590", "5 18 249", "17 16 644", "21 10 509", "22 17 506", "2 5 200", "7 13 295", "1 15 511", "3 9 375", "0 14 848", "4 19 718", "4 5 816", "20 16 541", "6 2 81"};
    vector<int> occupiedTowns = {18, 7, 22, 9, 20, 1, 8, 3, 12, 5, 6, 19, 2, 0, 15, 4};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 7943;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 25;
    vector<string> roads = {"10 12 350", "10 1 795", "22 9 784", "2 1 445", "10 9 902", "14 3 931", "15 19 387", "1 11 16", "20 9 939", "6 9 757", "2 4 620", "1 3 953", "8 0 167", "16 4 997", "4 17 77", "8 21 702", "9 21 486", "20 5 341", "11 13 16", "10 23 685", "2 24 745", "19 9 434", "18 14 773", "7 11 734"};
    vector<int> occupiedTowns = {7, 17, 18, 0, 3, 6, 13, 4, 12, 19, 23};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 3720;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 26;
    vector<string> roads = {"8 9 758", "2 6 7", "18 0 863", "22 7 941", "4 3 381", "8 20 382", "6 3 495", "15 18 240", "20 12 387", "4 16 336", "21 20 676", "19 17 488", "7 1 250", "8 1 709", "12 11 988", "18 22 58", "5 2 369", "22 5 640", "22 10 388", "9 13 188", "21 25 182", "14 25 661", "19 11 284", "15 24 489", "6 23 809"};
    vector<int> occupiedTowns = {2, 11, 21, 8, 13, 15, 22, 1, 23, 3, 5, 12, 24, 10, 20, 9, 18, 7, 4, 19, 17, 6, 16, 0};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 11126;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 27;
    vector<string> roads = {"16 21 350", "21 19 331", "20 15 823", "14 7 807", "17 8 138", "8 23 913", "16 17 963", "10 19 615", "13 22 488", "0 1 279", "14 19 288", "0 3 426", "11 16 562", "23 6 66", "0 8 694", "9 7 248", "26 2 787", "0 24 226", "2 24 449", "6 4 982", "7 15 320", "12 13 520", "25 15 21", "8 22 718", "8 18 645", "5 12 481"};
    vector<int> occupiedTowns = {26, 14, 15, 25, 4, 11, 17, 13, 9, 6, 16, 5, 21, 3, 7, 8, 20, 12, 18, 10, 24, 2, 23, 0};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 11528;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 28;
    vector<string> roads = {"10 16 781", "8 11 296", "11 21 486", "9 24 514", "26 9 40", "23 5 259", "3 2 459", "15 6 739", "18 0 898", "10 24 266", "24 13 335", "12 18 824", "17 6 490", "1 2 29", "19 23 184", "12 1 288", "8 26 383", "22 18 869", "15 0 761", "25 7 135", "23 25 24", "23 1 757", "4 19 489", "22 20 875", "22 11 928", "5 27 321", "11 14 56"};
    vector<int> occupiedTowns = {12, 21, 10, 16, 24, 26};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 1869;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 29;
    vector<string> roads = {"4 24 113", "14 22 525", "22 3 569", "23 14 688", "9 21 626", "5 17 823", "16 6 604", "0 27 234", "22 19 141", "27 25 981", "28 2 836", "11 7 2", "26 5 961", "12 19 96", "6 26 878", "22 5 905", "16 15 779", "18 0 474", "6 9 558", "11 9 563", "23 28 455", "0 7 936", "4 12 753", "7 10 239", "19 1 40", "20 5 858", "13 9 881", "16 8 179"};
    vector<int> occupiedTowns = {16, 22, 21, 26, 0};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 2069;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 30;
    vector<string> roads = {"29 1 88", "1 0 831", "5 3 902", "8 3 213", "8 29 507", "4 16 461", "9 19 539", "6 16 369", "14 6 965", "6 17 873", "6 21 609", "26 7 582", "10 23 193", "25 20 487", "11 21 634", "29 17 92", "17 18 342", "26 4 357", "7 23 978", "28 17 647", "12 19 540", "19 11 738", "6 27 736", "19 22 156", "26 25 977", "13 22 764", "7 2 398", "15 4 450", "24 16 434"};
    vector<int> occupiedTowns = {23, 19, 10, 20, 25, 6, 2, 18, 21, 22, 26, 27, 1, 9, 15, 29, 12, 14, 8};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 8571;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 31;
    vector<string> roads = {"20 17 816", "6 2 226", "26 16 734", "25 6 156", "11 19 624", "6 21 908", "5 6 62", "13 10 242", "19 25 918", "3 9 316", "13 25 163", "17 14 867", "17 24 934", "10 17 145", "4 20 897", "27 30 496", "5 9 116", "12 7 69", "18 23 935", "16 1 553", "15 26 278", "3 22 103", "12 19 58", "15 6 153", "27 7 806", "28 9 17", "29 26 676", "1 23 127", "8 15 539", "29 0 208"};
    vector<int> occupiedTowns = {28, 16, 5, 21, 15, 24, 30, 18, 23, 3, 7, 22, 9};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 2806;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 32;
    vector<string> roads = {"9 27 120", "24 5 208", "23 14 37", "28 7 910", "24 25 164", "26 20 683", "2 3 106", "28 12 493", "30 26 824", "2 21 861", "2 5 817", "10 17 313", "3 18 613", "28 16 917", "14 0 988", "10 24 494", "21 31 5", "26 10 94", "23 30 5", "11 18 181", "21 7 310", "0 9 730", "23 19 894", "18 13 655", "29 10 982", "6 21 548", "29 15 118", "4 17 62", "8 17 881", "22 2 107", "23 1 407"};
    vector<int> occupiedTowns = {30, 10, 2, 31, 29, 25, 0, 28, 8, 18, 21, 6, 4, 13, 12, 16, 15, 27, 5, 3, 11, 26, 19, 17, 7};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 10224;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 33;
    vector<string> roads = {"1 8 53", "13 29 978", "16 0 963", "16 26 213", "9 8 803", "28 0 400", "2 0 165", "24 23 443", "23 1 901", "30 20 717", "28 21 351", "6 21 863", "10 0 159", "18 22 81", "22 5 371", "30 29 8", "22 10 807", "27 32 477", "6 23 983", "3 21 536", "17 18 168", "14 20 369", "20 32 256", "2 15 907", "7 25 378", "7 19 850", "13 19 758", "4 23 815", "8 29 680", "11 6 903", "12 8 318", "29 31 831"};
    vector<int> occupiedTowns = {14, 20, 6, 4, 11, 3, 8, 16, 18, 5, 27, 23, 1, 2, 31, 0, 30, 19, 13, 10, 15, 25, 9, 29, 21, 24, 32, 22, 26, 7, 12, 17, 28};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 17505;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 34;
    vector<string> roads = {"14 8 711", "31 16 949", "15 9 927", "31 28 389", "7 22 445", "14 9 836", "18 14 502", "23 12 734", "14 28 765", "31 20 413", "27 30 785", "3 24 651", "32 6 434", "4 15 730", "27 32 987", "1 8 26", "31 24 160", "20 21 939", "20 10 103", "21 19 182", "2 1 371", "12 22 492", "4 17 325", "12 24 763", "16 5 255", "23 25 531", "10 32 440", "11 13 213", "10 29 966", "19 13 220", "0 9 793", "16 33 590", "11 26 456"};
    vector<int> occupiedTowns = {17, 21, 29, 2, 33, 12, 16, 23, 22, 10, 8, 26, 18, 31, 20, 25, 30, 24, 11, 4, 27, 3, 14, 0, 9, 28, 32, 6};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 15652;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 35;
    vector<string> roads = {"17 26 915", "2 20 184", "13 25 946", "8 1 321", "17 23 932", "11 23 773", "1 25 399", "9 31 107", "13 20 495", "18 7 304", "12 15 888", "1 17 753", "19 30 848", "27 1 63", "34 23 738", "31 12 188", "0 5 194", "16 28 314", "33 20 53", "22 32 319", "14 8 385", "3 10 205", "29 10 301", "24 23 430", "0 10 887", "32 19 895", "31 23 45", "9 0 452", "4 2 792", "12 6 66", "6 32 547", "8 7 820", "5 28 687", "21 18 944"};
    vector<int> occupiedTowns = {26, 15, 34, 20};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 1182;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 36;
    vector<string> roads = {"23 4 816", "21 23 753", "2 27 755", "3 29 62", "23 7 374", "17 27 182", "33 29 685", "11 8 469", "15 7 45", "32 11 5", "20 17 617", "28 30 806", "0 25 221", "14 8 150", "12 9 680", "18 33 965", "11 2 629", "4 13 709", "15 14 496", "3 26 242", "21 0 676", "9 4 855", "30 13 178", "34 30 264", "10 17 230", "31 23 805", "19 3 884", "33 5 693", "27 16 29", "16 6 419", "1 2 373", "10 29 570", "14 24 408", "35 29 819", "22 15 138"};
    vector<int> occupiedTowns = {8, 9, 28, 23, 35, 0, 11, 18, 1, 30, 31, 22, 26, 25, 27, 33, 5, 20, 24, 7, 12, 32, 29, 13, 21, 34, 16, 19, 4, 14, 2, 3, 17};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 15517;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 37;
    vector<string> roads = {"22 12 169", "19 17 53", "2 6 965", "21 14 80", "24 5 415", "31 19 527", "31 7 496", "5 23 652", "32 5 296", "1 18 591", "29 17 313", "13 9 4", "14 33 458", "23 1 710", "17 14 36", "19 34 348", "10 26 935", "5 29 300", "36 21 930", "0 30 206", "33 8 26", "19 3 203", "23 35 537", "26 27 885", "3 15 542", "19 4 484", "27 14 135", "28 30 364", "23 6 549", "11 15 786", "16 12 55", "25 26 785", "28 24 409", "5 20 501", "19 22 60", "9 32 688"};
    vector<int> occupiedTowns = {21, 26, 3, 35, 29, 9, 20, 33, 30, 22, 14, 7, 4, 1, 23, 17, 34, 32, 6, 5, 19, 13};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 7267;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 38;
    vector<string> roads = {"21 9 334", "33 18 137", "5 3 286", "6 32 794", "16 32 258", "31 34 230", "1 32 238", "11 0 263", "32 2 957", "16 12 279", "7 19 916", "9 19 281", "19 16 728", "23 10 431", "10 6 635", "31 24 675", "18 37 115", "0 31 975", "24 1 644", "28 20 281", "26 30 840", "30 20 180", "31 26 737", "5 11 983", "31 18 731", "36 15 112", "33 13 586", "13 35 212", "17 34 699", "14 9 535", "8 18 12", "33 15 157", "7 4 62", "18 27 448", "27 25 888", "22 6 687", "29 15 392"};
    vector<int> occupiedTowns = {3, 15, 27, 13, 19, 8, 33, 18, 4, 25, 22};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 3049;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 39;
    vector<string> roads = {"20 19 300", "3 9 533", "35 37 830", "7 6 964", "28 36 241", "34 1 620", "37 14 213", "34 35 972", "11 22 582", "37 30 291", "18 2 691", "29 4 75", "10 25 947", "24 27 414", "9 24 204", "24 33 359", "17 34 588", "24 37 481", "22 27 863", "8 28 560", "7 4 771", "24 7 601", "9 13 2", "19 7 195", "2 4 853", "10 36 785", "25 31 58", "24 5 721", "8 4 912", "12 37 581", "3 21 908", "23 36 929", "26 1 980", "8 15 312", "32 1 997", "38 26 45", "18 16 971", "31 0 33"};
    vector<int> occupiedTowns = {13, 24, 21, 38, 3, 6, 17, 36, 7, 37, 11, 10, 19, 30, 25, 14, 26, 15};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 7811;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 40;
    vector<string> roads = {"33 15 9", "38 5 774", "34 27 699", "32 7 371", "13 16 227", "3 29 1000", "3 2 854", "0 19 824", "29 34 882", "2 19 535", "28 34 677", "25 27 213", "5 23 927", "17 32 459", "5 28 486", "18 36 564", "18 21 170", "14 11 729", "11 25 724", "1 3 75", "2 21 670", "38 39 950", "4 35 602", "11 6 158", "17 14 393", "15 3 536", "12 6 357", "24 29 310", "13 34 717", "35 18 267", "30 17 96", "22 20 905", "33 20 549", "10 31 217", "8 12 451", "4 10 644", "24 26 238", "36 9 614", "37 0 601"};
    vector<int> occupiedTowns = {16, 28};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 227;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 41;
    vector<string> roads = {"21 30 428", "11 36 719", "12 29 35", "24 23 688", "40 30 71", "10 34 204", "12 37 128", "2 29 341", "23 12 944", "24 21 150", "30 7 41", "36 7 460", "9 23 976", "12 13 75", "3 0 885", "19 1 671", "4 11 451", "15 8 388", "0 24 277", "30 14 900", "36 20 638", "6 38 739", "3 15 479", "10 6 694", "22 37 264", "32 22 201", "31 11 540", "25 18 754", "21 34 566", "25 9 472", "35 15 861", "35 1 834", "4 28 732", "3 33 717", "26 36 366", "10 5 952", "39 15 710", "11 16 184", "18 17 826", "27 10 654"};
    vector<int> occupiedTowns = {36, 25, 17, 22, 27, 33, 19, 0, 4, 34, 40, 13, 23, 39, 3, 24, 15, 10, 6, 16, 29, 7, 28, 9, 20, 35, 14, 5, 32, 2, 38, 21, 8, 31, 37, 11};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 17145;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 42;
    vector<string> roads = {"20 21 563", "34 4 1", "25 12 44", "35 24 514", "31 2 503", "41 13 700", "40 24 234", "18 25 840", "14 30 182", "29 16 637", "29 10 191", "11 9 375", "37 14 486", "14 28 797", "10 8 272", "8 37 371", "11 37 592", "4 7 423", "34 13 702", "41 39 191", "32 38 250", "14 6 989", "37 40 395", "19 38 710", "8 36 972", "27 40 526", "20 39 169", "32 23 632", "25 39 169", "32 37 508", "4 5 870", "28 4 585", "7 26 482", "23 31 295", "14 3 60", "17 21 201", "22 14 115", "36 0 691", "5 1 541", "15 11 626", "33 2 500"};
    vector<int> occupiedTowns = {24, 37, 19, 35, 4, 30, 1, 10, 41, 26, 9, 25, 12, 32, 17, 13, 11, 16, 22, 31, 40, 21, 29, 15, 34, 36, 18, 8, 33};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 11305;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 43;
    vector<string> roads = {"42 22 26", "18 30 737", "2 29 74", "37 11 917", "6 36 355", "4 26 669", "16 26 730", "24 2 840", "8 38 599", "22 12 941", "8 2 569", "29 35 540", "9 39 974", "7 19 683", "16 31 352", "42 29 732", "30 23 356", "15 35 608", "30 29 391", "33 22 190", "1 33 649", "36 38 817", "16 33 654", "20 33 543", "9 33 66", "27 29 124", "14 22 782", "29 40 259", "35 0 257", "21 25 944", "19 33 911", "26 11 426", "21 32 564", "20 17 80", "33 3 867", "37 32 36", "1 5 420", "34 41 376", "20 34 105", "10 36 697", "34 28 259", "13 35 109"};
    vector<int> occupiedTowns = {40, 2, 6, 38, 11, 32, 25, 16, 29, 22, 31, 24, 13, 30, 36, 26, 1, 10, 19, 37, 0, 7, 27, 14, 15, 33, 3, 9, 34, 12, 21, 23, 41, 17, 20, 35, 4, 28, 18};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 18503;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 44;
    vector<string> roads = {"6 43 954", "6 22 871", "20 16 458", "13 37 128", "41 12 177", "37 28 992", "7 28 900", "12 6 620", "41 0 747", "36 11 884", "31 5 852", "27 42 595", "23 11 811", "37 12 753", "39 6 620", "26 15 612", "4 18 947", "24 31 260", "10 42 167", "24 37 869", "5 34 269", "16 30 550", "8 34 453", "33 30 998", "18 27 988", "41 3 827", "17 4 906", "42 20 251", "12 21 37", "16 32 314", "25 13 103", "30 25 82", "2 24 866", "14 41 87", "32 1 828", "35 18 730", "36 4 761", "25 38 923", "40 28 286", "29 22 172", "19 29 817", "15 6 326", "31 9 623"};
    vector<int> occupiedTowns = {29, 14, 13, 17, 39, 37, 20, 43, 1, 23, 11, 0, 18, 36, 41, 27, 5, 3, 25, 31, 16, 42, 34, 8, 21, 33, 19, 4, 22};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 14587;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 45;
    vector<string> roads = {"19 36 523", "2 41 364", "9 37 208", "1 13 52", "25 33 820", "32 9 483", "1 33 318", "29 23 892", "23 41 46", "10 27 214", "22 16 470", "1 4 455", "10 9 465", "43 31 738", "38 1 177", "34 1 642", "21 23 188", "34 6 580", "24 38 172", "32 42 576", "11 9 352", "31 23 992", "6 30 380", "16 41 337", "19 44 690", "26 6 115", "18 39 631", "39 31 624", "13 27 519", "18 36 77", "21 32 928", "3 33 901", "5 0 730", "35 13 199", "17 23 558", "32 0 148", "31 7 739", "3 14 336", "12 23 524", "28 5 687", "13 40 382", "15 44 188", "20 21 526", "8 19 287"};
    vector<int> occupiedTowns = {14, 5, 43, 1, 21, 13, 22, 6, 28, 3, 37, 17, 40, 24, 15, 27, 44, 23, 10, 35, 33, 16, 30, 2, 18, 31, 34, 36, 39, 8, 11, 20, 12, 19, 9, 29, 26, 7, 4};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 16638;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 46;
    vector<string> roads = {"0 22 574", "29 19 411", "34 26 218", "39 20 772", "40 3 641", "45 10 426", "42 33 598", "9 27 182", "0 12 917", "25 32 899", "15 45 169", "15 33 70", "44 43 800", "41 2 357", "32 28 766", "9 31 620", "26 18 994", "17 11 606", "41 37 234", "20 26 741", "19 40 340", "36 27 318", "21 41 711", "42 39 324", "25 21 873", "35 38 690", "4 35 214", "37 39 195", "28 11 631", "12 43 233", "45 14 87", "8 23 479", "32 7 744", "10 16 414", "13 35 232", "6 20 908", "44 1 683", "11 12 755", "18 8 144", "6 19 516", "22 4 445", "6 9 594", "5 14 271", "45 30 987", "24 39 238"};
    vector<int> occupiedTowns = {26, 9, 31, 40};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 1554;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 47;
    vector<string> roads = {"37 26 476", "45 18 381", "23 12 772", "29 11 898", "36 0 907", "18 31 706", "39 2 138", "30 4 529", "19 10 765", "27 42 949", "15 9 881", "31 0 244", "9 7 572", "37 42 140", "14 39 128", "3 11 836", "18 9 426", "3 1 776", "0 2 575", "35 32 265", "44 24 202", "41 37 828", "14 26 795", "5 7 821", "13 8 376", "10 4 336", "28 8 224", "35 44 203", "7 43 21", "28 29 405", "13 32 935", "6 42 809", "44 31 315", "1 20 105", "28 22 93", "33 13 941", "21 2 966", "43 19 128", "45 38 618", "14 23 341", "46 13 373", "17 31 635", "16 17 90", "25 33 372", "29 34 340", "40 29 735"};
    vector<int> occupiedTowns = {10, 22, 38, 0, 26, 40, 15, 16, 21, 11, 2, 39, 44, 12, 20, 41, 1, 45, 6, 33, 7, 31, 19, 34, 28, 30, 4, 27, 13, 42, 29, 23, 5, 8, 37, 9, 35, 3, 36, 46, 32, 14, 25};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 21700;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 48;
    vector<string> roads = {"19 14 818", "23 0 590", "29 32 183", "2 17 305", "26 34 385", "3 21 486", "19 5 776", "15 22 665", "25 12 15", "33 28 494", "3 16 22", "17 12 121", "27 6 753", "40 21 56", "20 44 396", "17 9 510", "45 25 167", "13 39 926", "2 46 33", "35 38 926", "37 9 816", "37 5 851", "5 13 55", "3 17 123", "42 21 291", "18 11 269", "43 24 329", "41 16 637", "39 29 919", "21 44 296", "29 1 273", "4 38 634", "44 22 633", "33 6 597", "9 0 250", "27 23 662", "31 42 431", "1 43 284", "36 35 359", "7 34 504", "11 46 295", "19 30 486", "24 10 32", "34 2 33", "4 30 546", "47 2 231", "25 8 995"};
    vector<int> occupiedTowns = {39, 31, 10, 28, 30, 21, 41, 37, 4, 26, 27, 24, 6, 17, 29, 25, 7, 43, 1, 33, 45, 23, 47, 9, 0, 20, 8, 44, 22, 35, 11, 18, 32, 14, 13, 46, 34, 38};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 15729;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 49;
    vector<string> roads = {"4 9 88", "12 47 385", "3 19 196", "40 15 113", "39 30 890", "1 27 264", "43 11 663", "22 29 495", "14 17 214", "46 4 851", "8 29 959", "29 25 809", "17 38 233", "30 27 785", "36 19 532", "6 34 143", "15 10 200", "34 44 735", "24 36 534", "44 13 416", "44 35 662", "25 46 124", "11 29 444", "40 34 953", "46 18 921", "1 36 663", "8 16 928", "28 4 497", "0 6 443", "46 2 52", "30 14 809", "14 28 533", "3 26 393", "12 1 613", "48 47 380", "35 41 815", "45 31 429", "24 32 611", "4 15 118", "5 35 803", "23 18 996", "32 37 259", "42 20 317", "38 33 255", "6 42 623", "7 17 799", "31 29 796", "21 6 70"};
    vector<int> occupiedTowns = {39, 29, 4, 30, 45, 5, 19, 3};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 2513;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 50;
    vector<string> roads = {"30 29 632", "8 3 327", "3 34 766", "1 40 488", "20 26 244", "32 31 849", "33 35 54", "25 14 773", "23 8 628", "23 12 913", "6 4 527", "12 41 691", "33 49 147", "39 30 308", "12 5 532", "4 27 767", "32 48 903", "31 29 776", "24 34 749", "39 36 883", "8 42 25", "41 22 720", "44 46 692", "37 32 424", "25 45 280", "8 29 231", "44 37 458", "27 36 377", "39 20 545", "40 18 617", "11 10 269", "7 26 973", "21 7 937", "16 9 529", "7 35 105", "6 13 518", "15 9 827", "36 43 696", "41 1 881", "31 47 939", "33 25 253", "42 17 976", "16 22 1000", "11 38 261", "22 11 275", "0 9 341", "19 1 967", "28 43 84", "2 6 481"};
    vector<int> occupiedTowns = {34, 12, 19, 21, 15, 23, 39, 47};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 3243;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 50;
    vector<string> roads = {"8 12 723", "48 9 895", "46 49 215", "9 14 233", "18 45 958", "16 20 817", "14 19 938", "16 40 95", "26 36 801", "13 45 695", "1 39 617", "5 0 839", "23 2 63", "27 11 799", "39 0 262", "30 22 55", "36 41 949", "26 31 542", "36 47 921", "28 8 721", "37 3 416", "44 9 653", "35 23 212", "16 43 730", "3 2 483", "31 23 946", "36 17 388", "31 42 810", "49 9 699", "18 31 252", "12 3 636", "18 9 539", "15 22 948", "5 21 75", "9 7 444", "42 32 500", "12 39 655", "4 38 440", "34 15 261", "24 47 155", "34 44 509", "3 25 729", "6 13 442", "11 26 872", "48 16 696", "10 16 722", "33 20 757", "45 38 311", "29 10 125"};
    vector<int> occupiedTowns = {5, 19, 20, 45, 22, 42, 37, 26, 33, 40, 8, 1, 34, 31, 38, 39, 41, 29, 30, 10, 16, 23, 7, 24, 18, 14, 12, 28, 6, 48, 3, 32};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 16001;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 50;
    vector<string> roads = {"28 7 935", "19 24 745", "22 13 838", "10 18 807", "0 30 234", "35 39 725", "20 32 642", "4 45 368", "1 21 667", "10 7 690", "2 31 34", "23 36 474", "11 6 728", "17 7 417", "16 49 2", "14 12 927", "29 6 893", "33 35 885", "15 19 187", "29 41 127", "18 26 835", "46 40 113", "27 28 29", "38 26 603", "36 18 970", "3 15 767", "43 16 589", "46 32 944", "18 41 247", "21 43 49", "0 6 223", "15 14 932", "2 36 206", "46 8 867", "48 23 668", "26 33 492", "32 39 266", "8 4 722", "15 7 185", "34 21 302", "3 37 50", "9 29 684", "9 1 804", "42 14 741", "31 47 690", "22 5 988", "44 3 53", "27 22 155", "25 42 959"};
    vector<int> occupiedTowns = {20, 36, 26, 23, 47, 41, 45, 44};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 2277;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 50;
    vector<string> roads = {"29 16 323", "26 4 62", "47 7 448", "11 35 33", "8 3 64", "17 27 546", "16 47 538", "43 6 814", "25 3 819", "37 2 651", "29 17 433", "38 37 879", "34 49 282", "1 10 143", "28 46 973", "18 32 881", "10 44 12", "17 20 60", "40 44 443", "11 23 586", "36 44 240", "49 28 560", "14 2 125", "39 36 802", "36 2 748", "37 31 695", "27 5 152", "19 24 984", "29 26 234", "13 47 876", "46 22 322", "42 0 975", "7 23 1000", "21 11 123", "18 2 730", "30 49 721", "21 24 581", "40 41 979", "46 6 676", "33 28 45", "8 35 272", "15 32 901", "6 10 911", "7 18 382", "14 45 940", "9 8 884", "8 0 855", "12 42 278", "48 39 757"};
    vector<int> occupiedTowns = {2, 38, 1};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 663;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 50;
    vector<string> roads = {"47 30 220", "28 8 509", "39 30 140", "27 16 858", "24 19 995", "41 28 404", "5 32 709", "26 25 307", "40 17 642", "47 8 567", "9 6 212", "29 27 192", "16 28 66", "9 18 280", "4 20 201", "13 24 768", "22 34 749", "15 19 1000", "20 40 546", "19 39 190", "7 35 717", "19 33 864", "32 10 164", "31 40 900", "29 22 661", "38 22 274", "11 6 701", "16 11 898", "3 31 475", "1 19 940", "48 28 190", "37 13 521", "5 24 982", "0 24 859", "37 49 469", "29 43 359", "28 3 567", "42 35 618", "2 35 643", "14 10 732", "13 44 618", "40 7 371", "26 5 728", "34 23 530", "45 1 319", "12 27 598", "36 35 127", "23 21 69", "45 46 930"};
    vector<int> occupiedTowns = {24, 15, 9, 44, 31, 12, 30, 22, 28, 37, 3, 7, 21, 40, 45, 17, 34, 25, 18, 49, 4, 6, 46, 38, 11, 48, 16, 26, 13};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 13400;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 50;
    vector<string> roads = {"9 16 642152", "38 4 526895", "26 47 122864", "12 47 435089", "25 43 388980", "11 1 347321", "42 34 149000", "3 20 408042", "0 18 426675", "24 13 95731", "18 29 324527", "41 8 243532", "38 26 308612", "24 11 972006", "13 46 178149", "47 1 771006", "36 12 513183", "48 29 236604", "22 0 803151", "12 10 327015", "25 40 907423", "20 1 972346", "33 17 247076", "39 23 381399", "27 7 470948", "25 41 553138", "8 19 368011", "8 44 528097", "24 40 394752", "3 45 782847", "13 42 453484", "15 36 161464", "29 31 701536", "6 0 46259", "18 5 863933", "16 14 19817", "12 17 796420", "18 30 659928", "7 19 910264", "29 44 473572", "46 9 914691", "30 21 74924", "21 49 550394", "37 34 306052", "24 28 583560", "39 4 975826", "25 2 274664", "19 35 785252", "5 32 800761"};
    vector<int> occupiedTowns = {19, 16, 42, 13};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 727364;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 50;
    vector<string> roads = {"29 5 842537", "31 30 508599", "22 8 420260", "40 12 768022", "15 14 31706", "21 41 197008", "13 8 416243", "30 24 673120", "29 36 581517", "12 22 768290", "39 23 838225", "27 8 740867", "4 49 676710", "3 28 620391", "32 4 741437", "32 11 26543", "11 6 536744", "49 24 859345", "2 33 876576", "10 46 840634", "39 44 484947", "45 14 265889", "25 21 166952", "43 9 225820", "21 46 580337", "41 1 357469", "3 0 909914", "12 29 404261", "0 22 38216", "22 44 939503", "27 16 605142", "22 46 289520", "19 8 703065", "37 3 729794", "24 19 939128", "38 24 269044", "18 6 726022", "43 44 669188", "23 20 314433", "14 19 780348", "47 29 575445", "35 44 421869", "34 39 366897", "34 48 558769", "33 25 470879", "17 34 413874", "40 42 689596", "7 14 318396", "26 15 835931"};
    vector<int> occupiedTowns = {22, 41, 7, 5, 33, 36, 21, 27, 14, 13, 16, 17, 25, 6, 47, 37, 32, 42, 38};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 7215694;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 50;
    vector<string> roads = {"3 20 662779", "48 3 857149", "16 19 87783", "32 29 583232", "38 24 26796", "38 27 455458", "27 8 161999", "37 46 169289", "46 9 954103", "22 29 620539", "1 13 540457", "23 42 32684", "47 2 164749", "14 8 762845", "30 18 40336", "32 10 783118", "25 7 790846", "17 5 173359", "20 4 503265", "46 31 250120", "29 2 671378", "23 27 34874", "30 25 119037", "39 25 271145", "22 15 33071", "14 35 347349", "47 28 627840", "44 42 534054", "17 14 176388", "18 5 899404", "19 41 178663", "4 32 746496", "44 32 738263", "2 45 398147", "22 46 716884", "34 15 532687", "36 2 196975", "43 33 384236", "7 12 342483", "17 0 862060", "29 21 815204", "10 19 393472", "33 19 727913", "40 33 452654", "1 17 812417", "12 11 660915", "46 49 271484", "32 6 325661", "40 26 445006"};
    vector<int> occupiedTowns = {26, 33, 10, 37, 8, 44, 14, 29, 2, 17, 42, 9, 40, 7, 5, 36, 22, 25, 11, 48, 27, 1, 15, 34, 28, 12, 16, 19, 18, 13, 43, 39, 30, 23, 47, 20, 3, 4, 49, 38, 6, 0};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 18583566;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 50;
    vector<string> roads = {"47 20 763926", "34 10 342574", "5 46 798118", "11 24 931750", "42 12 474174", "15 27 899452", "22 34 443623", "23 49 178558", "35 8 386871", "2 42 303261", "3 48 831862", "2 35 553529", "14 41 373534", "12 47 844248", "23 11 809356", "28 1 845208", "28 45 172990", "32 19 685828", "39 38 626421", "14 15 880770", "3 15 128496", "22 20 341885", "20 24 533341", "26 20 160528", "29 19 625919", "23 3 827447", "11 18 62186", "13 9 24546", "34 37 607002", "26 44 16139", "43 25 880490", "27 30 285348", "31 28 229216", "49 13 164292", "19 35 50755", "35 6 620914", "15 33 106262", "7 26 499267", "46 33 385711", "47 4 979377", "34 39 772353", "18 1 415449", "17 7 310526", "21 40 761528", "5 36 269160", "16 19 702178", "6 25 696588", "21 48 152564", "0 15 998300"};
    vector<int> occupiedTowns = {0, 3, 35, 2, 36, 33, 10, 13, 46, 44, 26, 9, 14, 27, 5, 31, 4, 37, 30, 22, 1, 47, 18, 32, 17, 39, 24, 29, 23, 34, 15, 19};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 14010749;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 50;
    vector<string> roads = {"37 45 597779", "36 6 413974", "41 19 983604", "1 21 849909", "3 6 614462", "6 8 434632", "46 19 459161", "6 13 431000", "38 25 747157", "4 46 529561", "45 5 704894", "15 38 616798", "27 13 662307", "35 41 552381", "22 27 730048", "36 0 301930", "8 1 142546", "26 39 535595", "4 23 924149", "13 32 151591", "30 37 601039", "9 22 372886", "28 25 278011", "31 9 167938", "30 4 682923", "44 3 920387", "41 20 868703", "10 28 191176", "49 47 590596", "30 42 363595", "30 32 924818", "34 27 469761", "49 21 713261", "18 12 113715", "4 25 31037", "22 2 567080", "49 39 415227", "10 7 443646", "38 11 159420", "19 29 170223", "12 9 635082", "36 17 548509", "20 43 357989", "23 16 944242", "14 8 300941", "5 33 598269", "24 17 67951", "9 40 997377", "48 19 934801"};
    vector<int> occupiedTowns = {11, 16, 18, 35, 3, 21, 19, 12, 29, 27, 7, 17, 37, 40, 34, 22, 44, 49, 9, 47, 26, 20, 0, 1, 10, 14, 25};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 12027017;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 50;
    vector<string> roads = {"43 34 1000000", "33 38 484528", "48 18 1000000", "29 43 497970", "17 6 658134", "24 7 484534", "26 18 660866", "39 42 992579", "25 7 560848", "12 42 91728", "27 25 572760", "47 18 254334", "40 38 913739", "2 34 692504", "47 13 258402", "5 34 617141", "26 21 376207", "10 37 124542", "20 8 924582", "26 37 168665", "5 15 51377", "49 23 612023", "6 44 762489", "18 14 536058", "38 42 828396", "1 37 323703", "33 13 202032", "33 43 113590", "39 41 498406", "20 0 450086", "45 7 518636", "17 0 431655", "22 48 125945", "28 20 639074", "36 41 833354", "30 17 889626", "9 21 854701", "32 37 659508", "37 44 519474", "49 16 191895", "35 11 987254", "23 5 603426", "26 19 933244", "25 40 82457", "44 3 847833", "31 26 945033", "35 37 668016", "39 4 194024", "42 46 611365"};
    vector<int> occupiedTowns = {41, 17, 10, 15, 42, 31, 46, 8, 27, 5, 26, 29, 47, 40, 35, 21, 0, 16, 12, 11, 48, 38, 32, 4, 3, 30, 49, 2, 43, 33, 45, 28, 23, 1, 22, 37, 19, 9, 13, 18, 6, 24, 7};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 21541577;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 50;
    vector<string> roads = {"42 45 1000000", "28 13 1000000", "5 14 1000000", "16 31 1000000", "7 38 1000000", "37 27 1000000", "27 47 1000000", "19 17 1000000", "12 49 1000000", "42 40 1000000", "12 4 1000000", "42 47 1000000", "30 43 1000000", "19 35 1000000", "37 3 1000000", "41 27 1000000", "36 21 1000000", "23 7 1000000", "44 15 1000000", "14 27 1000000", "28 40 1000000", "15 20 1000000", "40 38 1000000", "2 16 1000000", "44 22 1000000", "32 26 1000000", "19 5 1000000", "12 10 1000000", "44 42 1000000", "6 38 1000000", "33 22 1000000", "35 24 1000000", "26 30 1000000", "12 42 1000000", "0 27 1000000", "11 8 1000000", "26 17 1000000", "48 17 1000000", "10 2 1000000", "8 4 1000000", "39 7 1000000", "6 21 1000000", "38 34 1000000", "25 43 1000000", "46 37 1000000", "29 3 1000000", "15 1 1000000", "18 22 1000000", "9 19 1000000"};
    vector<int> occupiedTowns = {39, 12, 47, 6, 9, 26, 11, 1, 37, 4};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 9000000;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 50;
    vector<string> roads = {"0 42 1000000", "47 32 1000000", "10 35 1000000", "16 49 1000000", "46 3 1000000", "1 37 1000000", "25 5 1000000", "32 28 1000000", "8 29 1000000", "13 10 1000000", "10 15 1000000", "49 40 1000000", "40 4 1000000", "3 20 1000000", "22 19 1000000", "9 14 1000000", "15 38 1000000", "13 11 1000000", "2 41 1000000", "8 18 1000000", "29 43 1000000", "18 23 1000000", "23 0 1000000", "42 14 1000000", "39 13 1000000", "11 29 1000000", "22 49 1000000", "28 43 1000000", "18 5 1000000", "5 19 1000000", "0 20 1000000", "12 8 1000000", "48 30 1000000", "21 49 1000000", "41 20 1000000", "34 8 1000000", "37 42 1000000", "44 34 1000000", "7 4 1000000", "36 28 1000000", "6 35 1000000", "24 4 1000000", "45 14 1000000", "26 42 1000000", "33 5 1000000", "31 9 1000000", "30 11 1000000", "19 27 1000000", "17 14 1000000"};
    vector<int> occupiedTowns = {20, 3, 9, 13, 6, 26, 40, 45, 16, 38, 44, 28, 25, 8, 27, 48, 12, 4, 23, 35, 0, 19, 37, 31, 22, 46, 10, 33, 34, 11, 42, 21, 43, 14, 2, 29, 41, 15, 36, 49, 1, 7, 18, 32, 39, 47, 24, 30, 5, 17};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 49000000;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 4;
    vector<string> roads = {"0 1 15", "1 2 5", "1 3 5"};
    vector<int> occupiedTowns = {0, 2, 3};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
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
    int N = 50;
    vector<string> roads = {"24 14 30585", "14 2 17913", "2 1 7185", "14 32 3524", "2 3 23893", "14 42 32358", "1 46 15102", "42 29 20974", "29 11 24873", "2 23 17418", "2 31 3231", "29 12 14447", "11 9 1113", "2 0 8315", "46 34 19524", "32 33 25625", "14 17 30017", "42 18 20966", "9 47 11888", "33 35 23186", "33 13 31662", "2 20 7048", "0 7 13660", "29 21 31953", "13 44 13667", "0 38 26165", "17 27 21876", "9 28 20388", "11 49 8853", "14 10 12501", "7 45 27097", "14 39 5165", "33 16 622", "42 4 20706", "34 36 30941", "28 22 12384", "33 15 32654", "13 19 748", "19 25 18571", "4 40 26503", "10 37 11397", "9 8 19221", "24 43 17180", "0 5 25278", "1 6 20571", "28 48 9621", "2 26 11138", "16 41 2423", "46 30 777"};
    vector<int> occupiedTowns = {21, 49, 34, 16, 40, 22, 6, 26, 39, 5, 33, 19, 44, 48, 9, 0, 3, 17, 45, 47};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 207856;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 50;
    vector<string> roads = {"45 49 708106", "48 49 557507", "16 49 206030", "46 49 681085", "42 49 592851", "29 49 955456", "36 49 644055", "14 49 998371", "25 49 243780", "38 49 676165", "19 49 295695", "37 49 85890", "34 49 772321", "31 49 495278", "35 49 881683", "32 49 509966", "13 49 573322", "41 49 953193", "28 49 684833", "8 49 338711", "22 49 7607", "11 49 705350", "20 49 988937", "15 49 774045", "12 49 749572", "23 49 197707", "18 49 143647", "30 49 913598", "24 49 784195", "27 49 589280", "17 49 864709", "6 49 689371", "9 49 287833", "21 49 93643", "3 49 628920", "4 49 280025", "7 49 877184", "26 49 161234", "5 49 273188", "0 49 543685", "1 49 960792", "40 49 174364", "33 49 157069", "39 49 268121", "10 49 177457", "43 49 576795", "44 49 498155", "2 49 285189", "47 49 155944"};
    vector<int> occupiedTowns = {0, 10, 20, 30, 40, 47};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 1965048;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 8;
    vector<string> roads = {"0 7 1", "1 7 1", "2 7 1", "3 6 1", "6 7 5", "4 6 1", "5 6 1"};
    vector<int> occupiedTowns = {0, 4, 5, 2, 3, 1};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 3;
    vector<string> roads = {"0 2 10", "1 2 8"};
    vector<int> occupiedTowns = {0, 1};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 50;
    vector<string> roads = {"0 1 41", "1 2 18467", "2 3 6334", "3 4 26500", "4 5 19169", "5 6 15724", "6 7 11478", "7 8 29358", "8 9 26962", "9 10 24464", "10 11 5705", "11 12 28145", "12 13 23281", "13 14 16827", "14 15 9961", "15 16 491", "16 17 2995", "17 18 11942", "18 19 4827", "19 20 5436", "20 21 32391", "21 22 14604", "22 23 3902", "23 24 153", "24 25 292", "25 26 12382", "26 27 17421", "27 28 18716", "28 29 19718", "29 30 19895", "30 31 5447", "31 32 21726", "32 33 14771", "33 34 11538", "34 35 1869", "35 36 19912", "36 37 25667", "37 38 26299", "38 39 17035", "39 40 9894", "40 41 28703", "41 42 23811", "42 43 31322", "43 44 30333", "44 45 17673", "45 46 4664", "46 47 15141", "47 48 7711", "48 49 28253"};
    vector<int> occupiedTowns = {0, 49};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 50;
    vector<string> roads = {"18 38 713783", "19 2 31745", "28 29 593186", "5 41 700542", "5 31 405304", "34 7 499008", "2 0 526673", "45 4 424574", "10 1 642481", "40 20 74268", "9 39 749796", "21 8 93568", "14 49 222136", "0 47 153268", "16 36 135295", "45 10 905470", "23 44 943610", "36 12 423477", "8 43 944971", "37 48 815869", "25 11 429195", "0 24 327097", "39 3 853659", "30 33 76743", "29 44 834971", "36 6 36590", "29 35 674779", "12 39 397243", "7 27 56263", "42 32 530264", "1 46 928966", "8 11 333189", "37 26 606619", "49 15 541247", "23 49 880189", "19 33 465318", "34 32 481018", "28 12 690072", "42 22 340927", "27 1 634305", "45 40 410223", "19 5 979002", "35 19 893275", "15 13 509116", "31 43 586089", "26 17 104237", "27 26 110143", "11 38 257196", "30 32 229718"};
    vector<int> occupiedTowns = {1, 5, 14, 17, 22, 24, 29, 34, 38, 41, 42, 43, 47, 49};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 4339129;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 50;
    vector<string> roads = {"1 0 1", "2 1 3", "2 3 11", "4 0 17", "1 5 3", "6 0 8", "2 7 6", "3 8 5", "2 9 5", "4 10 20", "7 11 1", "0 12 6", "3 13 13", "13 14 13", "15 0 14", "16 15 14", "11 17 18", "18 14 2", "16 19 4", "5 20 10", "21 17 10", "9 22 2", "23 6 4", "8 24 19", "9 25 10", "26 1 12", "27 7 5", "28 1 17", "29 18 3", "4 30 19", "31 29 11", "24 32 14", "32 33 18", "34 1 3", "35 12 12", "36 19 18", "31 37 7", "24 38 17", "15 39 19", "40 30 15", "14 41 1", "41 43 100", "43 44 5", "43 47 2", "47 45 3", "47 46 1", "41 48 2", "41 49 4", "42 41 7"};
    vector<int> occupiedTowns = {11, 24, 19, 30, 4, 16, 29, 37, 44, 45, 47, 49, 42};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 4;
    vector<string> roads = {"0 1 1", "0 2 2", "0 3 2"};
    vector<int> occupiedTowns = {1, 2, 3};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 12;
    vector<string> roads = {"0 1 3", "2 0 5", "1 3 1", "1 4 8", "1 5 4", "2 6 2", "4 7 11", "4 8 10", "6 9 7", "6 10 9", "6 11 6"};
    vector<int> occupiedTowns = {1, 2, 6, 8};
    BlockEnemy* pObj = new BlockEnemy();
    clock_t start = clock();
    int result = pObj->minEffort(N, roads, occupiedTowns);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390224&rd=10008&pm=6852
********************************************************************************
#include<vector>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<algorithm>
#include<numeric>
#include<sstream>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
 
using namespace std;
 
typedef long long int64;
typedef vector<int> vi;
#define FOR(i,n) for (int i=0; i<(n); i++)
 
struct BlockEnemy {
  typedef pair<int,int> p2;
  vector<p2> s[60];
  bool occ[60];
  int ans;
  int dfs(int x,int y=-1) {
#define INF 1000000000    
    int m=0;
    FOR(i,s[x].size()) if (s[x][i].first!=y) {
      int tmp=dfs(s[x][i].first,x);
      if (tmp>=-1) {
         ans+=tmp<?=s[x][i].second;
         m>?=tmp;
       }
    }
    if (occ[x]) return INF;
    ans-=m;
    return m;
  }
  int minEffort(int N, vector <string> roads, vector <int> occupiedTowns) {
    FOR(i,roads.size()) { int x,y,z; sscanf(roads[i].c_str(),"%d %d %d",&x,&y,&z); s[x].push_back(p2(y,z)); s[y].push_back(p2(x,z)); }
    FOR(i,N) occ[i]=false;
    FOR(i,occupiedTowns.size()) occ[occupiedTowns[i]]=true;
    ans=0;
    dfs(0);
    return ans;
  }
};
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/
/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3998
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

class WeirdRooks {
public:
    string describe(vector<int> cols);
};

string WeirdRooks::describe(vector<int> cols) {
    string ret;
    return ret;
}


int test0() {
    vector<int> cols = {10, 10, 10, 10, 10, 10, 10, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,80 1,63 1,64 1,65 1,66 1,67 1,68 1,69 1,70 1,71 1,72 1,73 1,74 1,75 1,76 1,77 1,78 1,79 2,48 2,49 2,50 2,51 2,52 2,53 2,54 2,55 2,56 2,57 2,58 2,59 2,60 2,61 2,62 2,63 2,64 2,65 2,66 2,67 2,68 2,69 2,70 2,71 2,72 2,73 2,74 2,75 2,76 2,77 3,35 3,36 3,37 3,38 3,39 3,40 3,41 3,42 3,43 3,44 3,45 3,46 3,47 3,48 3,49 3,50 3,51 3,52 3,53 3,54 3,55 3,56 3,57 3,58 3,59 3,60 3,61 3,62 3,63 3,64 3,65 3,66 3,67 3,68 3,69 3,70 3,71 3,72 3,73 3,74 4,24 4,25 4,26 4,27 4,28 4,29 4,30 4,31 4,32 4,33 4,34 4,35 4,36 4,37 4,38 4,39 4,40 4,41 4,42 4,43 4,44 4,45 4,46 4,47 4,48 4,49 4,50 4,51 4,52 4,53 4,54 4,55 4,56 4,57 4,58 4,59 4,60 4,61 4,62 4,63 4,64 4,65 4,66 4,67 4,68 4,69 4,70 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 5,24 5,25 5,26 5,27 5,28 5,29 5,30 5,31 5,32 5,33 5,34 5,35 5,36 5,37 5,38 5,39 5,40 5,41 5,42 5,43 5,44 5,45 5,46 5,47 5,48 5,49 5,50 5,51 5,52 5,53 5,54 5,55 5,56 5,57 5,58 5,59 5,60 5,61 5,62 5,63 5,64 5,65 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 6,16 6,17 6,18 6,19 6,20 6,21 6,22 6,23 6,24 6,25 6,26 6,27 6,28 6,29 6,30 6,31 6,32 6,33 6,34 6,35 6,36 6,37 6,38 6,39 6,40 6,41 6,42 6,43 6,44 6,45 6,46 6,47 6,48 6,49 6,50 6,51 6,52 6,53 6,54 6,55 6,56 6,57 6,58 6,59 7,3 7,4 7,5 7,6 7,7 7,8 7,9 7,10 7,11 7,12 7,13 7,14 7,15 7,16 7,17 7,18 7,19 7,20 7,21 7,22 7,23 7,24 7,25 7,26 7,27 7,28 7,29 7,30 7,31 7,32 7,33 7,34 7,35 7,36 7,37 7,38 7,39 7,40 7,41 7,42 7,43 7,44 7,45 7,46 7,47 7,48 7,49 7,50 7,51 7,52 8,0 8,1 8,2 8,3 8,4 8,5 8,6 8,7 8,8 8,9 8,10 8,11 8,12 8,13 8,14 8,15 8,16 8,17 8,18 8,19 8,20 8,21 8,22 8,23 8,24 8,25 8,26 8,27 8,28 8,29 8,30 8,31 8,32 8,33 8,34 8,35 8,36 8,37 8,38 8,39 8,40 8,41 8,42 8,43 8,44";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> cols = {3, 3, 3};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,9 1,4 1,5 1,6 1,7 1,8 2,1 2,2 2,3 2,4 2,5 2,6 3,0 3,1 3,2 3,3";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cols = {1, 2, 3};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,6 1,3 1,4 1,5 2,1 2,2 2,3 3,0";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cols = {1};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,1 1,0";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cols = {1, 2, 3, 4, 5, 6, 7, 8};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,36 1,28 1,29 1,30 1,31 1,32 1,33 1,34 1,35 2,21 2,22 2,23 2,24 2,25 2,26 2,27 2,28 2,29 2,30 2,31 2,32 2,33 3,15 3,16 3,17 3,18 3,19 3,20 3,21 3,22 3,23 3,24 3,25 3,26 3,27 3,28 3,29 3,30 4,10 4,11 4,12 4,13 4,14 4,15 4,16 4,17 4,18 4,19 4,20 4,21 4,22 4,23 4,24 4,25 4,26 5,6 5,7 5,8 5,9 5,10 5,11 5,12 5,13 5,14 5,15 5,16 5,17 5,18 5,19 5,20 5,21 6,3 6,4 6,5 6,6 6,7 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 7,1 7,2 7,3 7,4 7,5 7,6 7,7 7,8 8,0";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cols = {1, 3, 5, 7, 9};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,25 1,16 1,17 1,18 1,19 1,20 1,21 1,22 1,23 1,24 2,9 2,10 2,11 2,12 2,13 2,14 2,15 2,16 2,17 2,18 2,19 2,20 2,21 2,22 3,4 3,5 3,6 3,7 3,8 3,9 3,10 3,11 3,12 3,13 3,14 3,15 3,16 3,17 3,18 3,19 4,1 4,2 4,3 4,4 4,5 4,6 4,7 4,8 4,9 4,10 4,11 4,12 4,13 4,14 4,15 5,0 5,1 5,2 5,3 5,4 5,5 5,6 5,7 5,8 5,9 5,10";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> cols = {2, 9};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,11 1,2 1,3 1,4 1,5 1,6 1,7 1,8 1,9 1,10 2,0 2,1 2,2 2,3 2,4 2,5 2,6 2,7 2,8";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cols = {1, 1, 2, 2, 3, 3, 4, 4};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,20 1,12 1,13 1,14 1,15 1,16 1,17 1,18 1,19 2,6 2,7 2,8 2,9 2,10 2,11 2,12 2,13 2,14 2,15 2,16 2,17 3,2 3,3 3,4 3,5 3,6 3,7 3,8 3,9 3,10 3,11 3,12 3,13 3,14 4,0 4,1 4,2 4,3 4,4 4,5 4,6 4,7 4,8 4,9 4,10";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> cols = {2, 2, 2, 3, 3, 4, 5};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,21 1,13 1,14 1,15 1,16 1,17 1,18 1,19 1,20 2,7 2,8 2,9 2,10 2,11 2,12 2,13 2,14 2,15 2,16 2,17 2,18 3,3 3,4 3,5 3,6 3,7 3,8 3,9 3,10 3,11 3,12 3,13 3,14 3,15 4,1 4,2 4,3 4,4 4,5 4,6 4,7 4,8 4,9 4,10 4,11 5,0 5,1 5,2 5,3 5,4 5,5 5,6";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cols = {3, 3, 3, 3, 4, 4, 8, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,38 1,28 1,29 1,30 1,31 1,32 1,33 1,34 1,35 1,36 1,37 2,19 2,20 2,21 2,22 2,23 2,24 2,25 2,26 2,27 2,28 2,29 2,30 2,31 2,32 2,33 2,34 2,35 3,12 3,13 3,14 3,15 3,16 3,17 3,18 3,19 3,20 3,21 3,22 3,23 3,24 3,25 3,26 3,27 3,28 3,29 3,30 3,31 3,32 4,6 4,7 4,8 4,9 4,10 4,11 4,12 4,13 4,14 4,15 4,16 4,17 4,18 4,19 4,20 4,21 4,22 4,23 4,24 4,25 4,26 4,27 4,28 5,2 5,3 5,4 5,5 5,6 5,7 5,8 5,9 5,10 5,11 5,12 5,13 5,14 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 6,0 6,1 6,2 6,3 6,4 6,5 6,6 6,7 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 6,16 6,17";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cols = {1, 1, 1, 1, 10, 10, 10, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,44 1,31 1,32 1,33 1,34 1,35 1,36 1,37 1,38 1,39 1,40 1,41 1,42 1,43 2,20 2,21 2,22 2,23 2,24 2,25 2,26 2,27 2,28 2,29 2,30 2,31 2,32 2,33 2,34 2,35 2,36 2,37 2,38 2,39 2,40 2,41 3,11 3,12 3,13 3,14 3,15 3,16 3,17 3,18 3,19 3,20 3,21 3,22 3,23 3,24 3,25 3,26 3,27 3,28 3,29 3,30 3,31 3,32 3,33 3,34 3,35 3,36 3,37 3,38 4,4 4,5 4,6 4,7 4,8 4,9 4,10 4,11 4,12 4,13 4,14 4,15 4,16 4,17 4,18 4,19 4,20 4,21 4,22 4,23 4,24 4,25 4,26 4,27 4,28 4,29 4,30 4,31 4,32 4,33 4,34 5,0 5,1 5,2 5,3 5,4 5,5 5,6 5,7 5,8 5,9 5,10 5,11 5,12 5,13 5,14 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 5,24 5,25 5,26 5,27 5,28 5,29";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cols = {1, 1, 1, 1, 1, 1, 10, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,26 1,15 1,16 1,17 1,18 1,19 1,20 1,21 1,22 1,23 1,24 1,25 2,6 2,7 2,8 2,9 2,10 2,11 2,12 2,13 2,14 2,15 2,16 2,17 2,18 2,19 2,20 2,21 2,22 2,23 3,0 3,1 3,2 3,3 3,4 3,5 3,6 3,7 3,8 3,9 3,10 3,11 3,12 3,13 3,14 3,15 3,16 3,17 3,18 3,19 3,20";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cols = {5, 6, 7, 8, 9, 10, 10, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,65 1,53 1,54 1,55 1,56 1,57 1,58 1,59 1,60 1,61 1,62 1,63 1,64 2,42 2,43 2,44 2,45 2,46 2,47 2,48 2,49 2,50 2,51 2,52 2,53 2,54 2,55 2,56 2,57 2,58 2,59 2,60 2,61 2,62 3,32 3,33 3,34 3,35 3,36 3,37 3,38 3,39 3,40 3,41 3,42 3,43 3,44 3,45 3,46 3,47 3,48 3,49 3,50 3,51 3,52 3,53 3,54 3,55 3,56 3,57 3,58 3,59 4,23 4,24 4,25 4,26 4,27 4,28 4,29 4,30 4,31 4,32 4,33 4,34 4,35 4,36 4,37 4,38 4,39 4,40 4,41 4,42 4,43 4,44 4,45 4,46 4,47 4,48 4,49 4,50 4,51 4,52 4,53 4,54 4,55 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 5,24 5,25 5,26 5,27 5,28 5,29 5,30 5,31 5,32 5,33 5,34 5,35 5,36 5,37 5,38 5,39 5,40 5,41 5,42 5,43 5,44 5,45 5,46 5,47 5,48 5,49 5,50 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 6,16 6,17 6,18 6,19 6,20 6,21 6,22 6,23 6,24 6,25 6,26 6,27 6,28 6,29 6,30 6,31 6,32 6,33 6,34 6,35 6,36 6,37 6,38 6,39 6,40 6,41 6,42 6,43 6,44 7,3 7,4 7,5 7,6 7,7 7,8 7,9 7,10 7,11 7,12 7,13 7,14 7,15 7,16 7,17 7,18 7,19 7,20 7,21 7,22 7,23 7,24 7,25 7,26 7,27 7,28 7,29 7,30 7,31 7,32 7,33 7,34 7,35 7,36 7,37 8,0 8,1 8,2 8,3 8,4 8,5 8,6 8,7 8,8 8,9 8,10 8,11 8,12 8,13 8,14 8,15 8,16 8,17 8,18 8,19 8,20 8,21 8,22 8,23 8,24 8,25 8,26 8,27 8,28 8,29";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cols = {7, 7, 8, 8, 9, 9, 10, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,68 1,54 1,55 1,56 1,57 1,58 1,59 1,60 1,61 1,62 1,63 1,64 1,65 1,66 1,67 2,42 2,43 2,44 2,45 2,46 2,47 2,48 2,49 2,50 2,51 2,52 2,53 2,54 2,55 2,56 2,57 2,58 2,59 2,60 2,61 2,62 2,63 2,64 2,65 3,31 3,32 3,33 3,34 3,35 3,36 3,37 3,38 3,39 3,40 3,41 3,42 3,43 3,44 3,45 3,46 3,47 3,48 3,49 3,50 3,51 3,52 3,53 3,54 3,55 3,56 3,57 3,58 3,59 3,60 3,61 3,62 4,22 4,23 4,24 4,25 4,26 4,27 4,28 4,29 4,30 4,31 4,32 4,33 4,34 4,35 4,36 4,37 4,38 4,39 4,40 4,41 4,42 4,43 4,44 4,45 4,46 4,47 4,48 4,49 4,50 4,51 4,52 4,53 4,54 4,55 4,56 4,57 4,58 5,14 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 5,24 5,25 5,26 5,27 5,28 5,29 5,30 5,31 5,32 5,33 5,34 5,35 5,36 5,37 5,38 5,39 5,40 5,41 5,42 5,43 5,44 5,45 5,46 5,47 5,48 5,49 5,50 5,51 5,52 5,53 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 6,16 6,17 6,18 6,19 6,20 6,21 6,22 6,23 6,24 6,25 6,26 6,27 6,28 6,29 6,30 6,31 6,32 6,33 6,34 6,35 6,36 6,37 6,38 6,39 6,40 6,41 6,42 6,43 6,44 6,45 6,46 6,47 7,3 7,4 7,5 7,6 7,7 7,8 7,9 7,10 7,11 7,12 7,13 7,14 7,15 7,16 7,17 7,18 7,19 7,20 7,21 7,22 7,23 7,24 7,25 7,26 7,27 7,28 7,29 7,30 7,31 7,32 7,33 7,34 7,35 7,36 7,37 7,38 7,39 7,40 8,0 8,1 8,2 8,3 8,4 8,5 8,6 8,7 8,8 8,9 8,10 8,11 8,12 8,13 8,14 8,15 8,16 8,17 8,18 8,19 8,20 8,21 8,22 8,23 8,24 8,25 8,26 8,27 8,28 8,29 8,30 8,31 8,32";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cols = {1, 4, 7, 10, 10, 10, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,52 1,39 1,40 1,41 1,42 1,43 1,44 1,45 1,46 1,47 1,48 1,49 1,50 1,51 2,28 2,29 2,30 2,31 2,32 2,33 2,34 2,35 2,36 2,37 2,38 2,39 2,40 2,41 2,42 2,43 2,44 2,45 2,46 2,47 2,48 2,49 3,19 3,20 3,21 3,22 3,23 3,24 3,25 3,26 3,27 3,28 3,29 3,30 3,31 3,32 3,33 3,34 3,35 3,36 3,37 3,38 3,39 3,40 3,41 3,42 3,43 3,44 3,45 3,46 4,11 4,12 4,13 4,14 4,15 4,16 4,17 4,18 4,19 4,20 4,21 4,22 4,23 4,24 4,25 4,26 4,27 4,28 4,29 4,30 4,31 4,32 4,33 4,34 4,35 4,36 4,37 4,38 4,39 4,40 4,41 4,42 5,5 5,6 5,7 5,8 5,9 5,10 5,11 5,12 5,13 5,14 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 5,24 5,25 5,26 5,27 5,28 5,29 5,30 5,31 5,32 5,33 5,34 5,35 5,36 5,37 6,1 6,2 6,3 6,4 6,5 6,6 6,7 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 6,16 6,17 6,18 6,19 6,20 6,21 6,22 6,23 6,24 6,25 6,26 6,27 6,28 6,29 6,30 6,31 7,0 7,1 7,2 7,3 7,4 7,5 7,6 7,7 7,8 7,9 7,10 7,11 7,12 7,13 7,14 7,15 7,16 7,17 7,18 7,19 7,20 7,21 7,22 7,23 7,24";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cols = {1, 4, 7, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,22 1,12 1,13 1,14 1,15 1,16 1,17 1,18 1,19 1,20 1,21 2,5 2,6 2,7 2,8 2,9 2,10 2,11 2,12 2,13 2,14 2,15 2,16 2,17 2,18 2,19 3,1 3,2 3,3 3,4 3,5 3,6 3,7 3,8 3,9 3,10 3,11 3,12 3,13 3,14 3,15 3,16 4,0 4,1 4,2 4,3 4,4 4,5 4,6 4,7 4,8 4,9 4,10 4,11 4,12";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cols = {3, 5, 7, 9};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,24 1,15 1,16 1,17 1,18 1,19 1,20 1,21 1,22 1,23 2,8 2,9 2,10 2,11 2,12 2,13 2,14 2,15 2,16 2,17 2,18 2,19 2,20 2,21 3,3 3,4 3,5 3,6 3,7 3,8 3,9 3,10 3,11 3,12 3,13 3,14 3,15 3,16 3,17 3,18 4,0 4,1 4,2 4,3 4,4 4,5 4,6 4,7 4,8 4,9 4,10 4,11 4,12 4,13 4,14";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cols = {3, 4, 5, 6, 7, 8, 9, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,52 1,42 1,43 1,44 1,45 1,46 1,47 1,48 1,49 1,50 1,51 2,33 2,34 2,35 2,36 2,37 2,38 2,39 2,40 2,41 2,42 2,43 2,44 2,45 2,46 2,47 2,48 2,49 3,25 3,26 3,27 3,28 3,29 3,30 3,31 3,32 3,33 3,34 3,35 3,36 3,37 3,38 3,39 3,40 3,41 3,42 3,43 3,44 3,45 3,46 4,18 4,19 4,20 4,21 4,22 4,23 4,24 4,25 4,26 4,27 4,28 4,29 4,30 4,31 4,32 4,33 4,34 4,35 4,36 4,37 4,38 4,39 4,40 4,41 4,42 5,12 5,13 5,14 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 5,24 5,25 5,26 5,27 5,28 5,29 5,30 5,31 5,32 5,33 5,34 5,35 5,36 5,37 6,7 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 6,16 6,17 6,18 6,19 6,20 6,21 6,22 6,23 6,24 6,25 6,26 6,27 6,28 6,29 6,30 6,31 7,3 7,4 7,5 7,6 7,7 7,8 7,9 7,10 7,11 7,12 7,13 7,14 7,15 7,16 7,17 7,18 7,19 7,20 7,21 7,22 7,23 7,24 8,0 8,1 8,2 8,3 8,4 8,5 8,6 8,7 8,8 8,9 8,10 8,11 8,12 8,13 8,14 8,15 8,16";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cols = {9, 9, 9, 9, 10, 10, 10, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,76 1,60 1,61 1,62 1,63 1,64 1,65 1,66 1,67 1,68 1,69 1,70 1,71 1,72 1,73 1,74 1,75 2,46 2,47 2,48 2,49 2,50 2,51 2,52 2,53 2,54 2,55 2,56 2,57 2,58 2,59 2,60 2,61 2,62 2,63 2,64 2,65 2,66 2,67 2,68 2,69 2,70 2,71 2,72 2,73 3,34 3,35 3,36 3,37 3,38 3,39 3,40 3,41 3,42 3,43 3,44 3,45 3,46 3,47 3,48 3,49 3,50 3,51 3,52 3,53 3,54 3,55 3,56 3,57 3,58 3,59 3,60 3,61 3,62 3,63 3,64 3,65 3,66 3,67 3,68 3,69 3,70 4,24 4,25 4,26 4,27 4,28 4,29 4,30 4,31 4,32 4,33 4,34 4,35 4,36 4,37 4,38 4,39 4,40 4,41 4,42 4,43 4,44 4,45 4,46 4,47 4,48 4,49 4,50 4,51 4,52 4,53 4,54 4,55 4,56 4,57 4,58 4,59 4,60 4,61 4,62 4,63 4,64 4,65 4,66 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 5,24 5,25 5,26 5,27 5,28 5,29 5,30 5,31 5,32 5,33 5,34 5,35 5,36 5,37 5,38 5,39 5,40 5,41 5,42 5,43 5,44 5,45 5,46 5,47 5,48 5,49 5,50 5,51 5,52 5,53 5,54 5,55 5,56 5,57 5,58 5,59 5,60 5,61 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 6,16 6,17 6,18 6,19 6,20 6,21 6,22 6,23 6,24 6,25 6,26 6,27 6,28 6,29 6,30 6,31 6,32 6,33 6,34 6,35 6,36 6,37 6,38 6,39 6,40 6,41 6,42 6,43 6,44 6,45 6,46 6,47 6,48 6,49 6,50 6,51 6,52 6,53 6,54 6,55 7,3 7,4 7,5 7,6 7,7 7,8 7,9 7,10 7,11 7,12 7,13 7,14 7,15 7,16 7,17 7,18 7,19 7,20 7,21 7,22 7,23 7,24 7,25 7,26 7,27 7,28 7,29 7,30 7,31 7,32 7,33 7,34 7,35 7,36 7,37 7,38 7,39 7,40 7,41 7,42 7,43 7,44 7,45 7,46 7,47 7,48 8,0 8,1 8,2 8,3 8,4 8,5 8,6 8,7 8,8 8,9 8,10 8,11 8,12 8,13 8,14 8,15 8,16 8,17 8,18 8,19 8,20 8,21 8,22 8,23 8,24 8,25 8,26 8,27 8,28 8,29 8,30 8,31 8,32 8,33 8,34 8,35 8,36 8,37 8,38 8,39 8,40";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cols = {9, 10, 10, 10, 10, 10, 10, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,79 1,63 1,64 1,65 1,66 1,67 1,68 1,69 1,70 1,71 1,72 1,73 1,74 1,75 1,76 1,77 1,78 2,48 2,49 2,50 2,51 2,52 2,53 2,54 2,55 2,56 2,57 2,58 2,59 2,60 2,61 2,62 2,63 2,64 2,65 2,66 2,67 2,68 2,69 2,70 2,71 2,72 2,73 2,74 2,75 2,76 3,35 3,36 3,37 3,38 3,39 3,40 3,41 3,42 3,43 3,44 3,45 3,46 3,47 3,48 3,49 3,50 3,51 3,52 3,53 3,54 3,55 3,56 3,57 3,58 3,59 3,60 3,61 3,62 3,63 3,64 3,65 3,66 3,67 3,68 3,69 3,70 3,71 3,72 3,73 4,24 4,25 4,26 4,27 4,28 4,29 4,30 4,31 4,32 4,33 4,34 4,35 4,36 4,37 4,38 4,39 4,40 4,41 4,42 4,43 4,44 4,45 4,46 4,47 4,48 4,49 4,50 4,51 4,52 4,53 4,54 4,55 4,56 4,57 4,58 4,59 4,60 4,61 4,62 4,63 4,64 4,65 4,66 4,67 4,68 4,69 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 5,24 5,25 5,26 5,27 5,28 5,29 5,30 5,31 5,32 5,33 5,34 5,35 5,36 5,37 5,38 5,39 5,40 5,41 5,42 5,43 5,44 5,45 5,46 5,47 5,48 5,49 5,50 5,51 5,52 5,53 5,54 5,55 5,56 5,57 5,58 5,59 5,60 5,61 5,62 5,63 5,64 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 6,16 6,17 6,18 6,19 6,20 6,21 6,22 6,23 6,24 6,25 6,26 6,27 6,28 6,29 6,30 6,31 6,32 6,33 6,34 6,35 6,36 6,37 6,38 6,39 6,40 6,41 6,42 6,43 6,44 6,45 6,46 6,47 6,48 6,49 6,50 6,51 6,52 6,53 6,54 6,55 6,56 6,57 6,58 7,3 7,4 7,5 7,6 7,7 7,8 7,9 7,10 7,11 7,12 7,13 7,14 7,15 7,16 7,17 7,18 7,19 7,20 7,21 7,22 7,23 7,24 7,25 7,26 7,27 7,28 7,29 7,30 7,31 7,32 7,33 7,34 7,35 7,36 7,37 7,38 7,39 7,40 7,41 7,42 7,43 7,44 7,45 7,46 7,47 7,48 7,49 7,50 7,51 8,0 8,1 8,2 8,3 8,4 8,5 8,6 8,7 8,8 8,9 8,10 8,11 8,12 8,13 8,14 8,15 8,16 8,17 8,18 8,19 8,20 8,21 8,22 8,23 8,24 8,25 8,26 8,27 8,28 8,29 8,30 8,31 8,32 8,33 8,34 8,35 8,36 8,37 8,38 8,39 8,40 8,41 8,42 8,43";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cols = {8, 8, 8, 8, 8, 8, 8, 8};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,64 1,49 1,50 1,51 1,52 1,53 1,54 1,55 1,56 1,57 1,58 1,59 1,60 1,61 1,62 1,63 2,36 2,37 2,38 2,39 2,40 2,41 2,42 2,43 2,44 2,45 2,46 2,47 2,48 2,49 2,50 2,51 2,52 2,53 2,54 2,55 2,56 2,57 2,58 2,59 2,60 2,61 3,25 3,26 3,27 3,28 3,29 3,30 3,31 3,32 3,33 3,34 3,35 3,36 3,37 3,38 3,39 3,40 3,41 3,42 3,43 3,44 3,45 3,46 3,47 3,48 3,49 3,50 3,51 3,52 3,53 3,54 3,55 3,56 3,57 3,58 4,16 4,17 4,18 4,19 4,20 4,21 4,22 4,23 4,24 4,25 4,26 4,27 4,28 4,29 4,30 4,31 4,32 4,33 4,34 4,35 4,36 4,37 4,38 4,39 4,40 4,41 4,42 4,43 4,44 4,45 4,46 4,47 4,48 4,49 4,50 4,51 4,52 4,53 4,54 5,9 5,10 5,11 5,12 5,13 5,14 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 5,24 5,25 5,26 5,27 5,28 5,29 5,30 5,31 5,32 5,33 5,34 5,35 5,36 5,37 5,38 5,39 5,40 5,41 5,42 5,43 5,44 5,45 5,46 5,47 5,48 5,49 6,4 6,5 6,6 6,7 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 6,16 6,17 6,18 6,19 6,20 6,21 6,22 6,23 6,24 6,25 6,26 6,27 6,28 6,29 6,30 6,31 6,32 6,33 6,34 6,35 6,36 6,37 6,38 6,39 6,40 6,41 6,42 6,43 7,1 7,2 7,3 7,4 7,5 7,6 7,7 7,8 7,9 7,10 7,11 7,12 7,13 7,14 7,15 7,16 7,17 7,18 7,19 7,20 7,21 7,22 7,23 7,24 7,25 7,26 7,27 7,28 7,29 7,30 7,31 7,32 7,33 7,34 7,35 7,36 8,0 8,1 8,2 8,3 8,4 8,5 8,6 8,7 8,8 8,9 8,10 8,11 8,12 8,13 8,14 8,15 8,16 8,17 8,18 8,19 8,20 8,21 8,22 8,23 8,24 8,25 8,26 8,27 8,28";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cols = {1, 1, 1, 1, 1, 1, 1, 1};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,8 1,0 1,1 1,2 1,3 1,4 1,5 1,6 1,7";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cols = {1, 1, 1, 1, 1, 1, 1, 2};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,9 1,1 1,2 1,3 1,4 1,5 1,6 1,7 1,8 2,0 2,1 2,2 2,3 2,4 2,5 2,6";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cols = {1, 1, 1, 1, 1, 1, 1, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,17 1,7 1,8 1,9 1,10 1,11 1,12 1,13 1,14 1,15 1,16 2,0 2,1 2,2 2,3 2,4 2,5 2,6 2,7 2,8 2,9 2,10 2,11 2,12 2,13 2,14";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cols = {10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,10 1,0 1,1 1,2 1,3 1,4 1,5 1,6 1,7 1,8 1,9";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cols = {5};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,5 1,0 1,1 1,2 1,3 1,4";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cols = {7, 7, 8, 8, 9, 9, 10, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,68 1,54 1,55 1,56 1,57 1,58 1,59 1,60 1,61 1,62 1,63 1,64 1,65 1,66 1,67 2,42 2,43 2,44 2,45 2,46 2,47 2,48 2,49 2,50 2,51 2,52 2,53 2,54 2,55 2,56 2,57 2,58 2,59 2,60 2,61 2,62 2,63 2,64 2,65 3,31 3,32 3,33 3,34 3,35 3,36 3,37 3,38 3,39 3,40 3,41 3,42 3,43 3,44 3,45 3,46 3,47 3,48 3,49 3,50 3,51 3,52 3,53 3,54 3,55 3,56 3,57 3,58 3,59 3,60 3,61 3,62 4,22 4,23 4,24 4,25 4,26 4,27 4,28 4,29 4,30 4,31 4,32 4,33 4,34 4,35 4,36 4,37 4,38 4,39 4,40 4,41 4,42 4,43 4,44 4,45 4,46 4,47 4,48 4,49 4,50 4,51 4,52 4,53 4,54 4,55 4,56 4,57 4,58 5,14 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 5,24 5,25 5,26 5,27 5,28 5,29 5,30 5,31 5,32 5,33 5,34 5,35 5,36 5,37 5,38 5,39 5,40 5,41 5,42 5,43 5,44 5,45 5,46 5,47 5,48 5,49 5,50 5,51 5,52 5,53 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 6,16 6,17 6,18 6,19 6,20 6,21 6,22 6,23 6,24 6,25 6,26 6,27 6,28 6,29 6,30 6,31 6,32 6,33 6,34 6,35 6,36 6,37 6,38 6,39 6,40 6,41 6,42 6,43 6,44 6,45 6,46 6,47 7,3 7,4 7,5 7,6 7,7 7,8 7,9 7,10 7,11 7,12 7,13 7,14 7,15 7,16 7,17 7,18 7,19 7,20 7,21 7,22 7,23 7,24 7,25 7,26 7,27 7,28 7,29 7,30 7,31 7,32 7,33 7,34 7,35 7,36 7,37 7,38 7,39 7,40 8,0 8,1 8,2 8,3 8,4 8,5 8,6 8,7 8,8 8,9 8,10 8,11 8,12 8,13 8,14 8,15 8,16 8,17 8,18 8,19 8,20 8,21 8,22 8,23 8,24 8,25 8,26 8,27 8,28 8,29 8,30 8,31 8,32";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cols = {10, 10, 10, 10, 10, 10, 10, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,80 1,63 1,64 1,65 1,66 1,67 1,68 1,69 1,70 1,71 1,72 1,73 1,74 1,75 1,76 1,77 1,78 1,79 2,48 2,49 2,50 2,51 2,52 2,53 2,54 2,55 2,56 2,57 2,58 2,59 2,60 2,61 2,62 2,63 2,64 2,65 2,66 2,67 2,68 2,69 2,70 2,71 2,72 2,73 2,74 2,75 2,76 2,77 3,35 3,36 3,37 3,38 3,39 3,40 3,41 3,42 3,43 3,44 3,45 3,46 3,47 3,48 3,49 3,50 3,51 3,52 3,53 3,54 3,55 3,56 3,57 3,58 3,59 3,60 3,61 3,62 3,63 3,64 3,65 3,66 3,67 3,68 3,69 3,70 3,71 3,72 3,73 3,74 4,24 4,25 4,26 4,27 4,28 4,29 4,30 4,31 4,32 4,33 4,34 4,35 4,36 4,37 4,38 4,39 4,40 4,41 4,42 4,43 4,44 4,45 4,46 4,47 4,48 4,49 4,50 4,51 4,52 4,53 4,54 4,55 4,56 4,57 4,58 4,59 4,60 4,61 4,62 4,63 4,64 4,65 4,66 4,67 4,68 4,69 4,70 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 5,24 5,25 5,26 5,27 5,28 5,29 5,30 5,31 5,32 5,33 5,34 5,35 5,36 5,37 5,38 5,39 5,40 5,41 5,42 5,43 5,44 5,45 5,46 5,47 5,48 5,49 5,50 5,51 5,52 5,53 5,54 5,55 5,56 5,57 5,58 5,59 5,60 5,61 5,62 5,63 5,64 5,65 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 6,16 6,17 6,18 6,19 6,20 6,21 6,22 6,23 6,24 6,25 6,26 6,27 6,28 6,29 6,30 6,31 6,32 6,33 6,34 6,35 6,36 6,37 6,38 6,39 6,40 6,41 6,42 6,43 6,44 6,45 6,46 6,47 6,48 6,49 6,50 6,51 6,52 6,53 6,54 6,55 6,56 6,57 6,58 6,59 7,3 7,4 7,5 7,6 7,7 7,8 7,9 7,10 7,11 7,12 7,13 7,14 7,15 7,16 7,17 7,18 7,19 7,20 7,21 7,22 7,23 7,24 7,25 7,26 7,27 7,28 7,29 7,30 7,31 7,32 7,33 7,34 7,35 7,36 7,37 7,38 7,39 7,40 7,41 7,42 7,43 7,44 7,45 7,46 7,47 7,48 7,49 7,50 7,51 7,52 8,0 8,1 8,2 8,3 8,4 8,5 8,6 8,7 8,8 8,9 8,10 8,11 8,12 8,13 8,14 8,15 8,16 8,17 8,18 8,19 8,20 8,21 8,22 8,23 8,24 8,25 8,26 8,27 8,28 8,29 8,30 8,31 8,32 8,33 8,34 8,35 8,36 8,37 8,38 8,39 8,40 8,41 8,42 8,43 8,44";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cols = {8, 8, 9, 9, 9, 9, 10, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,72 1,57 1,58 1,59 1,60 1,61 1,62 1,63 1,64 1,65 1,66 1,67 1,68 1,69 1,70 1,71 2,44 2,45 2,46 2,47 2,48 2,49 2,50 2,51 2,52 2,53 2,54 2,55 2,56 2,57 2,58 2,59 2,60 2,61 2,62 2,63 2,64 2,65 2,66 2,67 2,68 2,69 3,32 3,33 3,34 3,35 3,36 3,37 3,38 3,39 3,40 3,41 3,42 3,43 3,44 3,45 3,46 3,47 3,48 3,49 3,50 3,51 3,52 3,53 3,54 3,55 3,56 3,57 3,58 3,59 3,60 3,61 3,62 3,63 3,64 3,65 3,66 4,22 4,23 4,24 4,25 4,26 4,27 4,28 4,29 4,30 4,31 4,32 4,33 4,34 4,35 4,36 4,37 4,38 4,39 4,40 4,41 4,42 4,43 4,44 4,45 4,46 4,47 4,48 4,49 4,50 4,51 4,52 4,53 4,54 4,55 4,56 4,57 4,58 4,59 4,60 4,61 4,62 5,14 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 5,24 5,25 5,26 5,27 5,28 5,29 5,30 5,31 5,32 5,33 5,34 5,35 5,36 5,37 5,38 5,39 5,40 5,41 5,42 5,43 5,44 5,45 5,46 5,47 5,48 5,49 5,50 5,51 5,52 5,53 5,54 5,55 5,56 5,57 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 6,16 6,17 6,18 6,19 6,20 6,21 6,22 6,23 6,24 6,25 6,26 6,27 6,28 6,29 6,30 6,31 6,32 6,33 6,34 6,35 6,36 6,37 6,38 6,39 6,40 6,41 6,42 6,43 6,44 6,45 6,46 6,47 6,48 6,49 6,50 6,51 7,3 7,4 7,5 7,6 7,7 7,8 7,9 7,10 7,11 7,12 7,13 7,14 7,15 7,16 7,17 7,18 7,19 7,20 7,21 7,22 7,23 7,24 7,25 7,26 7,27 7,28 7,29 7,30 7,31 7,32 7,33 7,34 7,35 7,36 7,37 7,38 7,39 7,40 7,41 7,42 7,43 7,44 8,0 8,1 8,2 8,3 8,4 8,5 8,6 8,7 8,8 8,9 8,10 8,11 8,12 8,13 8,14 8,15 8,16 8,17 8,18 8,19 8,20 8,21 8,22 8,23 8,24 8,25 8,26 8,27 8,28 8,29 8,30 8,31 8,32 8,33 8,34 8,35 8,36";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cols = {9, 10, 10, 10, 10, 10, 10, 10};
    WeirdRooks* pObj = new WeirdRooks();
    clock_t start = clock();
    string result = pObj->describe(cols);
    clock_t end = clock();
    delete pObj;
    string expected = "0,79 1,63 1,64 1,65 1,66 1,67 1,68 1,69 1,70 1,71 1,72 1,73 1,74 1,75 1,76 1,77 1,78 2,48 2,49 2,50 2,51 2,52 2,53 2,54 2,55 2,56 2,57 2,58 2,59 2,60 2,61 2,62 2,63 2,64 2,65 2,66 2,67 2,68 2,69 2,70 2,71 2,72 2,73 2,74 2,75 2,76 3,35 3,36 3,37 3,38 3,39 3,40 3,41 3,42 3,43 3,44 3,45 3,46 3,47 3,48 3,49 3,50 3,51 3,52 3,53 3,54 3,55 3,56 3,57 3,58 3,59 3,60 3,61 3,62 3,63 3,64 3,65 3,66 3,67 3,68 3,69 3,70 3,71 3,72 3,73 4,24 4,25 4,26 4,27 4,28 4,29 4,30 4,31 4,32 4,33 4,34 4,35 4,36 4,37 4,38 4,39 4,40 4,41 4,42 4,43 4,44 4,45 4,46 4,47 4,48 4,49 4,50 4,51 4,52 4,53 4,54 4,55 4,56 4,57 4,58 4,59 4,60 4,61 4,62 4,63 4,64 4,65 4,66 4,67 4,68 4,69 5,15 5,16 5,17 5,18 5,19 5,20 5,21 5,22 5,23 5,24 5,25 5,26 5,27 5,28 5,29 5,30 5,31 5,32 5,33 5,34 5,35 5,36 5,37 5,38 5,39 5,40 5,41 5,42 5,43 5,44 5,45 5,46 5,47 5,48 5,49 5,50 5,51 5,52 5,53 5,54 5,55 5,56 5,57 5,58 5,59 5,60 5,61 5,62 5,63 5,64 6,8 6,9 6,10 6,11 6,12 6,13 6,14 6,15 6,16 6,17 6,18 6,19 6,20 6,21 6,22 6,23 6,24 6,25 6,26 6,27 6,28 6,29 6,30 6,31 6,32 6,33 6,34 6,35 6,36 6,37 6,38 6,39 6,40 6,41 6,42 6,43 6,44 6,45 6,46 6,47 6,48 6,49 6,50 6,51 6,52 6,53 6,54 6,55 6,56 6,57 6,58 7,3 7,4 7,5 7,6 7,7 7,8 7,9 7,10 7,11 7,12 7,13 7,14 7,15 7,16 7,17 7,18 7,19 7,20 7,21 7,22 7,23 7,24 7,25 7,26 7,27 7,28 7,29 7,30 7,31 7,32 7,33 7,34 7,35 7,36 7,37 7,38 7,39 7,40 7,41 7,42 7,43 7,44 7,45 7,46 7,47 7,48 7,49 7,50 7,51 8,0 8,1 8,2 8,3 8,4 8,5 8,6 8,7 8,8 8,9 8,10 8,11 8,12 8,13 8,14 8,15 8,16 8,17 8,18 8,19 8,20 8,21 8,22 8,23 8,24 8,25 8,26 8,27 8,28 8,29 8,30 8,31 8,32 8,33 8,34 8,35 8,36 8,37 8,38 8,39 8,40 8,41 8,42 8,43";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=6533&pm=3998
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
#include <set> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
int col[10]; 
int rook[8][10]; 
VI a; 
int poss[15][100]; 
char buf[1000]; 
 
void doit(int r, int nr, int v) { 
  if( r < 0 ) { 
    poss[nr][v] = 1; 
    return; 
  } 
  int ns = 0; 
  for( int i = a[r]-1; i >= 0; i-- ) if( !col[i] ) { 
    col[i] = 1; 
    rook[r][i] = 1; 
    doit(r-1, nr+1, v+ns); 
    col[i] = 0; 
    rook[r][i] = 0; 
    ns++; 
  } 
  doit(r-1, nr, v+ns); 
} 
 
class WeirdRooks { 
public: 
string describe(vector <int> A) { 
  a = A; 
  int i, j, k, x, y, z, n; 
  string ret; 
  doit(a.size()-1, 0, 0); 
  for( i = 0; i < 15; i++ ) 
  for( j = 0; j < 100; j++ ) if( poss[i][j] ) { 
    if( ret.size() ) ret += ' '; 
    sprintf(buf, "%d,%d", i, j); 
    ret += buf; 
  } 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/
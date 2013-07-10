/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10768
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

class TheQuestionsAndAnswersDivOne {
public:
    int find(int questions, vector<string> answers);
};

int TheQuestionsAndAnswersDivOne::find(int questions, vector<string> answers) {
    int ret;
    return ret;
}


int test0() {
    int questions = 2;
    vector<string> answers = {"No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
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
    int questions = 2;
    vector<string> answers = {"No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int questions = 3;
    vector<string> answers = {"Yes", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int questions = 3;
    vector<string> answers = {"Yes", "Yes", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int questions = 6;
    vector<string> answers = {"No", "Yes", "Yes", "Yes", "Yes", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 40320;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int questions = 6;
    vector<string> answers = {"Yes", "No", "No", "Yes", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 720;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int questions = 4;
    vector<string> answers = {"Yes", "No", "Yes", "No", "Yes", "Yes", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 1704;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int questions = 5;
    vector<string> answers = {"No", "Yes", "No", "No", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 4200;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int questions = 5;
    vector<string> answers = {"No", "No", "No", "Yes", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 4200;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int questions = 6;
    vector<string> answers = {"Yes", "Yes", "Yes", "No", "No", "Yes", "No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 169920;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int questions = 5;
    vector<string> answers = {"No", "Yes", "Yes", "Yes", "No", "No", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 33120;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int questions = 8;
    vector<string> answers = {"No", "No", "No", "No", "Yes", "No", "Yes", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 725760;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int questions = 5;
    vector<string> answers = {"Yes", "No", "No", "No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 1200;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int questions = 5;
    vector<string> answers = {"No", "Yes", "Yes", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int questions = 6;
    vector<string> answers = {"No", "No", "No", "No", "No", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 10800;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int questions = 6;
    vector<string> answers = {"No", "Yes", "No", "Yes", "No", "No", "Yes", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 216000;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int questions = 5;
    vector<string> answers = {"No", "No", "Yes", "No", "Yes", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 4200;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int questions = 6;
    vector<string> answers = {"Yes", "No", "No", "No", "No", "No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 100800;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int questions = 5;
    vector<string> answers = {"No", "No", "Yes", "No", "No", "Yes", "No", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 43920;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int questions = 9;
    vector<string> answers = {"No", "Yes", "Yes", "No", "Yes", "No", "Yes", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int questions = 3;
    vector<string> answers = {"Yes", "Yes", "No", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int questions = 2;
    vector<string> answers = {"Yes", "Yes", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int questions = 3;
    vector<string> answers = {"Yes", "Yes", "No", "No", "Yes", "Yes", "Yes", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 204;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int questions = 2;
    vector<string> answers = {"Yes", "Yes", "No", "Yes", "No", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int questions = 2;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int questions = 5;
    vector<string> answers = {"Yes", "Yes", "No", "Yes", "Yes", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 4200;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int questions = 4;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int questions = 2;
    vector<string> answers = {"Yes", "No", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int questions = 2;
    vector<string> answers = {"Yes", "No", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int questions = 5;
    vector<string> answers = {"Yes", "Yes", "No", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 1200;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int questions = 8;
    vector<string> answers = {"No", "Yes", "No", "No", "No", "No", "Yes", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 725760;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int questions = 9;
    vector<string> answers = {"Yes", "Yes", "Yes", "No", "Yes", "Yes", "No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int questions = 8;
    vector<string> answers = {"No", "Yes", "No", "Yes", "No", "Yes", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 645120;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int questions = 7;
    vector<string> answers = {"Yes", "No", "No", "Yes", "Yes", "No", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 463680;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int questions = 7;
    vector<string> answers = {"Yes", "Yes", "Yes", "No", "Yes", "Yes", "No", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 559440;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int questions = 9;
    vector<string> answers = {"No", "Yes", "Yes", "No", "Yes", "No", "No", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int questions = 7;
    vector<string> answers = {"No", "No", "No", "Yes", "No", "No", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 463680;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int questions = 9;
    vector<string> answers = {"Yes", "Yes", "No", "Yes", "Yes", "Yes", "Yes", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int questions = 7;
    vector<string> answers = {"No", "No", "Yes", "Yes", "Yes", "No", "No", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 463680;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int questions = 7;
    vector<string> answers = {"No", "No", "Yes", "No", "No", "No", "No", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 811440;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int questions = 8;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 40320;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int questions = 7;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 2328480;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int questions = 7;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 141120;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int questions = 9;
    vector<string> answers = {"No", "No", "No", "No", "No", "No", "No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int questions = 9;
    vector<string> answers = {"No", "Yes", "No", "No", "No", "No", "Yes", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int questions = 2;
    vector<string> answers = {"No", "Yes", "No", "No", "No", "No", "Yes", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int questions = 8;
    vector<string> answers = {"No", "Yes", "No", "No", "No", "No", "Yes", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 725760;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int questions = 9;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int questions = 9;
    vector<string> answers = {"No", "No", "No", "No", "No", "No", "No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int questions = 8;
    vector<string> answers = {"No", "No", "No", "No", "No", "No", "No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 1451520;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int questions = 7;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 2328480;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int questions = 9;
    vector<string> answers = {"No", "Yes", "Yes", "No", "Yes", "No", "Yes", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int questions = 6;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 1905120;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int questions = 7;
    vector<string> answers = {"No", "No", "No", "No", "No", "No", "No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 2328480;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int questions = 2;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int questions = 8;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "No", "No", "No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 645120;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int questions = 7;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "No", "No", "Yes", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 463680;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int questions = 2;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 510;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int questions = 8;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "No", "No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 645120;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int questions = 5;
    vector<string> answers = {"Yes", "No", "No", "Yes", "Yes", "No", "No", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 33120;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int questions = 7;
    vector<string> answers = {"Yes", "No", "No", "No", "Yes", "No", "No", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 463680;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int questions = 9;
    vector<string> answers = {"Yes", "No", "Yes", "No", "Yes", "Yes", "Yes", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int questions = 6;
    vector<string> answers = {"Yes", "Yes", "No", "Yes", "No", "Yes", "No", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 216000;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int questions = 9;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "No", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int questions = 9;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "No", "Yes", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int questions = 5;
    vector<string> answers = {"Yes", "Yes", "Yes", "No", "No", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 10320;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int questions = 7;
    vector<string> answers = {"Yes", "Yes", "Yes", "No", "No", "No", "No", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 463680;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int questions = 9;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "No", "No", "No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int questions = 5;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 834120;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int questions = 4;
    vector<string> answers = {"No", "Yes", "Yes", "No", "Yes", "Yes", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 3264;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int questions = 7;
    vector<string> answers = {"Yes", "Yes", "Yes", "No", "Yes", "No", "No", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 559440;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int questions = 3;
    vector<string> answers = {"Yes", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int questions = 4;
    vector<string> answers = {"Yes", "No", "No", "No", "Yes", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 1704;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int questions = 4;
    vector<string> answers = {"Yes", "Yes", "No", "No", "Yes", "Yes", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 8736;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int questions = 4;
    vector<string> answers = {"Yes", "No", "Yes", "Yes", "Yes", "No", "No", "Yes", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 3264;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int questions = 9;
    vector<string> answers = {"No", "No", "No", "No", "No", "No", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int questions = 9;
    vector<string> answers = {"No", "Yes", "Yes", "No", "No", "Yes", "No", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 362880;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int questions = 6;
    vector<string> answers = {"No", "Yes", "No", "Yes", "No", "No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 57600;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int questions = 8;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 1451520;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int questions = 4;
    vector<string> answers = {"No", "No", "No", "No", "No", "No", "No", "No", "Yes"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 23184;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int questions = 7;
    vector<string> answers = {"Yes", "Yes", "Yes", "Yes", "Yes", "Yes", "No", "No", "No"};
    TheQuestionsAndAnswersDivOne* pObj = new TheQuestionsAndAnswersDivOne();
    clock_t start = clock();
    int result = pObj->find(questions, answers);
    clock_t end = clock();
    delete pObj;
    int expected = 559440;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=14146&pm=10768
********************************************************************************
// unfortunately I have no ideas for a good line here 
 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
typedef long long ll; 
 
#define LS < 
#define Size(x) (int(x.size())) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
ll binom[100][100]; 
 
void calcBinom() { 
  binom[0][0] = 1; 
  FOR(n,1,100) { 
    FOR(k,1,100) { 
      binom[n][k] = binom[n-1][k-1] + binom[n-1][k]; 
      } 
    binom[n][0] = 1; 
    } 
  } 
 
#line 3 "TheQuestionsAndAnswersDivOne.cc" 
 
// ll 
 
class TheQuestionsAndAnswersDivOne { 
  public: 
  int find(int questions, vector <string> answers) { 
    // !FDI 
     
    calcBinom(); 
     
    int dp[10][10][10]; 
    { 
    FOR(q,0,10) FOR(y,0,10) FOR(n,0,10) { 
      dp[q][y][n] = 0; 
      if(q == 0) dp[q][y][n] = (y==0 && n == 0) ? 1 : 0; 
      else {       
        FOR(v,0,y) dp[q][y][n] += dp[q-1][v][n] * binom[y][v]; 
        FOR(v,0,n) dp[q][y][n] += dp[q-1][y][v] * binom[n][v]; 
        } 
      } 
    } 
     
    int y=0, n=0; 
    FOR(k,0,Size(answers)) if(answers[k] == "No") n++; else y++; 
 
    return dp[questions][y][n]; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
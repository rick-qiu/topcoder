/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11499
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

class TrainingCamp {
public:
    vector<string> determineSolvers(vector<string> attendance, vector<string> problemTopics);
};

vector<string> TrainingCamp::determineSolvers(vector<string> attendance, vector<string> problemTopics) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> attendance = {"XXX", "XXX", "XX-"};
    vector<string> problemTopics = {"---", "XXX", "-XX", "XX-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXX", "XXXX", "X--X"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> attendance = {"-XXXX", "----X", "XXX--", "X-X-X"};
    vector<string> problemTopics = {"X---X", "-X---", "XXX--", "--X--"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X-X", "----", "-XXX", "X--X"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> attendance = {"-----", "XXXXX"};
    vector<string> problemTopics = {"XXXXX", "-----", "--X-X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X-", "XXX"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> attendance = {"-", "X", "X", "-", "X"};
    vector<string> problemTopics = {"-", "X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X-", "XX", "XX", "X-", "XX"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> attendance = {"X----X--X", "X--X-X---", "--X-X----", "XXXX-X-X-", "XXXX--XXX"};
    vector<string> problemTopics = {"X----X-X-", "-----X---", "-X----X-X", "-X-X-X---", "-----X---", "X-------X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X--XX", "-X--X-", "------", "XX-XX-", "--X--X"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> attendance = {"X"};
    vector<string> problemTopics = {"-", "X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> attendance = {"-"};
    vector<string> problemTopics = {"X", "-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> attendance = {"XXXXXX-XXXXX-XXXXX-XXXXXXX---X-XX-X", "-XXXXXXX-XXXXXXXXXX--XXXXXX-X--XXXX"};
    vector<string> problemTopics = {"X----XXXX-X-XXX--XXX----X---XXX--XX", "--XX-X---X----X----X--XX------X-XXX", "X--X-X-X-X--X-X---X-XX-XXX-X-X-XX--", "XXXX---XXX-X------X-----X--X-X----X", "--XX----X-XXXXX--XX-XX-X---X-XXX---", "--------X---XXX-X---XX-X--X-XX-X-XX", "------X-----X-XXXXX--X-X--X--------", "X---X--X-XX--X---X----XX-X--------X", "X---X----X---X---X--XX-XX-X---X-XXX", "------X---X-X-X---X-X------------X-", "XXX-X-XX-X---X---X-----XXXX--XXX---", "X--XX---XX-X------X-X---XX---XX--X-", "-X-X-X--XXXXX-XXX-X--X----XXXXX---X", "-XXX--X--XX-X-XX--XXXX-----X--X-X-X", "X---XX-XX---XXX-XX--XXX----XXX--X--", "-X------------XXXXXXX----X---X--X--", "-X----XX----XX-XX---XXXXX-XX---X--X", "XX-XX--X-----X--X---XX-X-----X--XX-", "X-X-X-XX-X-----X-X-X--X-XXX---XXX--", "---X--X--X--X-XX-X-XXX-X-X-XXX-X-X-", "X-X-------XX-X-X---XXX-X----X---X-X", "X--X---X-X-----XX--X----XX--X-----X", "XX-X--XXX-X-X---X---X--XXXXX-X----X", "X--XXXX--X-XXXXX--XX---XX--X-XX-X-X", "-XX-X--------X-X---X-X--X---XXXX-X-", "--XX----X----XX-X-X---X-X----X-X---", "-XXX----XX---XXX---X-X-X--XX------X", "XXXXX-XX----XX--X-XX-X------X-XXX--", "XXX-XXXXXX-X--X----X---X------X---X", "-XXX---XX----X--X------XX-XX--X--X-", "-X-XX-X-X---XX-X--X-X---X-----X--XX", "-X---X-X----XX---X-X---XXX--XXX-XXX", "X-X----X--X--X-XX-X-------X---X-X-X", "--XX----X---X-----X-XXX-----X-XX-X-", "--X-X--X-----X--XX-XX--X-----X---X-", "X--XX---XX--XX-XX--X--X--XXX------X", "---XX-X-XX-X---X-----XX-X-X------X-", "X---X----X--X--XX---X-XX-X-X--X---X", "X-X--------X---------X---X--XXX-XX-", "---X-XX--XXXX---X-X--XXX-XX---XX-X-", "-XXX-X--X-XXXXX---X-X--X---XX------", "XX-XX--XXX-XX--XX-XXX-XX--X-----XX-", "-----XXX---X-X-X---X--X----X-XX--XX", "X-X---XXX--X-X--X----X---X-X--XX-X-", "-X-X--XXX--------XX--X-X--X-XXXX---", "--X-X-XXX------X--XXX-X--X-XX-XX-X-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-------X--------------------------------------", "------X---------------------------------------"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> attendance = {"XXXXXXXXX-XXX", "XX-X-XXXXXXXX", "X--XXXXXXX-XX", "XXX-XXXXXXXX-", "XXXXXXXXXXXXX", "XX-XXXXXX-XXX", "XXXXXXXXXXXXX", "XX-XXXXXXXXXX", "XXXXXX-XXX--X", "XXXXXXXX-XXXX", "X-XXXXXXXXXXX", "XXXXXXXXX-XXX", "XXXXXX-XX-XX-", "XXXXXXXXXXXX-", "XXXXX-XXXXXXX", "XXXXXXXXXXXXX"};
    vector<string> problemTopics = {"-XX--X---X-XX", "----XX--X-X--", "XX---X---X--X", "-XX-XX-X---X-", "-X-----X-X--X", "--------X--X-", "XX-----XXX---", "-XXX------X-X", "-X-----XX--XX", "X--X-XX------", "X-X---XX-XXX-", "X-----XXXX---", "--XXXXX--XX-X", "X-X-XX--XX-XX", "---X--X-XX-XX", "X----X-X----X", "X---XX---XXXX"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X-X-X-XXX-----X-", "--X-XXX-XX-X--XX-", "-----X---X-X--XX-", "-X-X-XX---XX-----", "XXXXXXXXXXXXXXXXX", "-X---X--XX-----X-", "XXXXXXXXXXXXXXXXX", "-XX-XXX-XX-X--XXX", "--X-X-X--------X-", "X-XXX--X-XX-X--XX", "-X---X---XXXXXXXX", "-X-X-X-XXX-----X-", "-X-X-X-----------", "-X-X-XX--XXX-----", "----XXXXX-XX--X--", "XXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> attendance = {"XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXX-X", "--XXX--XXXXXX-XXXX---", "XXXX-X-XXXX--XXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXX-XXXX-XXXXX", "XXX-XX-XX-XXXXXXXXXX-", "-XXXXXXXXX-XXX-XXXXXX", "XXXXX-XX-XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXX-X", "XX-XXXXXXXXXXX--X-XX-", "XXXXXXXXXXXX--XXXX-XX", "X-XXX-XXXX-XXXX-XXX-X", "XXXXXXXXXXXXXXXXXXXX-", "XXXXXXXXXXXXXXXXXXXXX", "X--XXXXXXXX-XXXXXXXXX", "XXX-XXXXXXXXXXXXXXXXX", "-XXXXXXXX-XXXXXXXXXXX", "XXX-XX-XXXXXXXXXXXXXX", "X-XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXX-XXXXXXXXXX", "XX-XXXXXXXXXXXXXXXXXX", "XX-XXXXXXXXXXXXXXXXX-", "X-XXXXX-XXXXXXXXXXXXX", "-XXX-XXXXXXXXXXXXXXXX"};
    vector<string> problemTopics = {"XX---X-XX---X-----X-X", "---X-X-----X-XX--X-X-", "---X-XX-X-XX-X-XXX-XX", "-----XX-XX---XXX--X-X", "XX-XX--XX-----------X", "X---X-X-X-X----X-----", "-X-----XXXX-X--------", "-X-X-XX-X--X-XX--XX-X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXX", "X--XXXXX", "--------", "--------", "XXXXXXXX", "XX--X--X", "--------", "--------", "--------", "X--XXXXX", "------X-", "----XX--", "--------", "-X---XX-", "XXXXXXXX", "---X-X--", "X--X-XX-", "-XX----X", "X-----X-", "-XXX-X--", "XX-XX--X", "XXXXXXXX", "-X---XX-", "-XXX-X--", "-XXX--XX"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> attendance = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-XX-XXXXX-X", "XXXX-X-XX-XXXXXXXXXXXXXXXXX-XXXXXXXXXXXXXXX", "XXXXXX--XXXXXXXX-XXXXX-XXXXXXXXXXXXX-XX-XXX", "XXXXXX-XXXXXXXXXXX-XXXXXXXXXXXXXXXXX-XX-XXX", "X-XXXXXXX-XX-XXXXXXXXX-XXXXXX-XXX-XXXXXXXXX", "XXXXXXXXXXXXXXXXXXX-XXXXXXX-XXXXXXXXXXXXXXX", "XXXX-XXX-XX-XXXXXX-XX-XXX-XXXXXXXXXXXXXXXXX", "-XX-X-X-X-XXX---XXXX-XXXXXXXXXXXXXXXX-XXXXX", "XXXXXXXXXX-XXXXXXXXXXXXX-XXXX-XXXXXXXXXX-X-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "X-XXXXXXXXX-XXXXXXXXXX-XXXXXXXXXXX-XXXXXXXX", "XX--XXXXXXXXXXXX-XXXXXX-XXXXX-XXXXXXXXXXXXX", "XXXXXXXX-XXXXXXXXXXXX-X--XXXXXX-XX-XXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-XXXX-X", "XXXXXXXXXXXXXXX-XXXXXXXXXXXXXXXXXX-XXX-XXXX"};
    vector<string> problemTopics = {"-XXX-X----X-XX-X-X-X---X-X-------XXXX-X---X", "XXX--X---X--XX--X-XXX--X------XXXXX--X-XXX-", "XX--X-XXX--X---XX-X--XX-XX----XXX---X-X--X-", "-XX----XX----XXXX-X------------XX--X---XX--", "XXX--X--X-XX--X-XXX-XXX-X----XXX---X-X-X-X-", "-X--X--X--XXXX-----XXX--X-X-----X---XX-XXXX", "-----X----X-XX----X--X----XXXXX--XXX-X---X-", "---XX--X-----X-X--X-XX-XXX--XX-X-XXXXX-XXXX", "--XX-X-XX-X-X-XXX-----X-X-X-X--XX--XX-X-X-X", "-XX-XXX---X-XXX---X--XX--XXX-X--X-XX-----X-", "--X--XX-X----X--XX-------------XX--XX-X-XXX", "-X--X-X--X--------X-X--XXXX---X-X-X-XX-X---", "X-XX-XX-X----X-XX---------X-X--X---XX--X--X", "XX---X-X-XXX-X-XXX---XX--XX--XXXXX-X----X--", "--X--X---XX-XX---XXX-XX-X-X-X--X--X-X-X-X-X", "XXX-----X--XXXX-X------X-XX--XX-XXX-----XX-", "-X-X------X---X---X---X----XX--X-X--XXX---X", "---XX---XX--X-XX-XX--XX----X-XX-X----XX--XX", "XX-X---XXX-XXX---X----XXX-X--XXX-X-----X---", "-X--XX--X-XXX---XX--XX---------XXX---XX--XX", "-X-X-X-X----X-X----XX----XX-XX--X-XX-X--XXX", "XX----XX---X--X----XXXX-XX-XX--XX---XXX-X--", "--X---X--XXX---X--------X--X--XX-XX-----XXX", "-X-X----XX-XX--XX-XXXXX----XX-X-X--X-XX-X--", "X-XX--XX-XX-XXXX---X-X---XXX-XX---X-XX--XXX", "X--------XX----X-XX--X-X-XX--------------XX", "-XX----X-X-X------XXX----XX-XXX---X----X--X", "-X---X-X-----XX--X-----XX----X--XX-----XXX-", "X--X-X-X-X----X----XXX----X--XX-X--X----XXX", "--XXX--X------XX--------XX----XX-X---X-X---", "XX-----XX-XX---X----XX--X-X-XXXXXXXX---X--X", "X--XX-X-X--X-X---XX----X-XX---X-X-X-XX--X--", "X-X---X-X-XX--X--X-X-----X-X--X---X--X-X--X", "X-XXX--X-----X--------X--------X--XX--X---X", "--XX-XX-X-X--X-X--X-X----X-X---X-X-X--X--X-", "-X-XX--X----X-X-XX---X----X---XX-----X---X-", "--XX----XXX----X--X-X-X-XXX----X-X----X--X-", "X--XX--------X-------X--------X--XXX-----X-", "-X----XX----X--XX--XXXXX----X-XX--XXXX---X-", "---XXX-XX-X-XX--XX-----X--X---X-XX--XX---X-", "---X-X-XXXXXX--X------X-X--XX-XXX---XX---X-", "---XX-------X--X-XXX-X-XX---XX-XXX--XXX-XX-", "X-X-X----X-X-XXX-----X-XXXXXX--X----X-XXX--", "--X-X-XX-XX--XX-X-----X--XXXX-XXX---XXX-XX-", "-XXX-X-----XX---X-XX-----XX-X-XX--X---X--XX", "--XX--X---X--X--------X-------X------X----X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--------------X-X-X-------X--X--X---------X--X", "X--XX---X------X----X------X--X-------------X-", "------X------------------X-----------X--------", "-------------X-X---XX-------X----X-X-X--------", "----------X-X------------------XX-------------", "--XXX--XX-XXXX-X--XX-----X-X-XXX-X-XXX-X-----X", "---------------------------X-----------------X", "----------------------------------------------", "-----------------------------------X-XX-------", "-XXXX-X--X-X-X-X--X--X-X---X-X-X--XXXXXXXXXX--", "----------X-X------------X--XX----X----X-X----", "-----X---------------X------------------------", "---------------------------------------------X", "---X---------X----X----X--X--XX-XX-----------X", "----XX------------X--------XX------X---X-----X"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> attendance = {"XXXXXXXXXXX-XXXXXXXXX", "XXX-XXX-XXXXXXXX-XXXX", "XXXXXXXXXXXXXXX-XX-XX", "XXXXXXXX-XX-X-XXXXXXX", "XXXXXXXXXXX-XXXXXX-XX", "X-XXXXXXXXXXXXXX-XXX-", "XXXXXXXXXXXXXXXXX-XXX", "XXX-XXXXXX-XXXXXX-XXX", "XXXXXXXXXXX-XXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "X-XXXXXXXXXX-XXX-XXXX", "XXXXXXXX-XXXXXXXXXXXX", "XXX-XXX-XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXX-XXXXXXXX", "XXXXX-XXXXXXXXXXXXXXX", "-XXXXXXX-XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXX-XXXXXXXXXX-XX", "XXXXXXXX-XXXXXXXXXXXX", "XX-XX-XXXXXXXXXXXX-X-", "XXXXXXXXXXXXXXXX--XXX", "X--XXXXXXXXXXXX-XXXX-", "-XXXXXXXXXXXXXX-XX-XX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXX--XXXXXXX-XX", "XX-XXXXXXXXXXXXXXX-XX", "XXXXXX-XXXXXXXXX-XXXX", "X-XXXXXXXXXXXXXXXXX-X", "XXXXXXXXXX-XX-XXXXXXX", "XXXXXXXXXXXXX-XXXXXXX", "-X--XX-XX-XXXXX-XXXXX", "XX-XXXXXXXXXXXXXXXXXX", "XX-XXX-XXXXXXXXX-XX-X", "-XXXXXXX--XX-XXXXXXXX", "XXXXXXXXXXXXXXXX-XXXX", "XXX-XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX-XX", "XXXXXXXXXXXX--XXXXXXX", "XXXXXXXXXXXXXXXXXXXX-", "XXXXXXXXXXXXX-X-XXXXX", "XXXXXXXX-XX-XX-XXXXXX", "XXXXXXXXX--XXXXXXX--X"};
    vector<string> problemTopics = {"-X-X-------X-------X-", "XX--X-XX---X---X----X", "--X--X--X-X--------X-", "--X--XX-X--X-X--X--XX", "----XXX--XXXXX---X--X", "---X--X-X-XXXX-XX--X-", "-X---X----X-XXXX---X-", "----X--X--X--XXXX--X-", "---XXX-X-XXXX-X----XX", "XX---X--X-X-X----XXX-", "XX-XX-XXXX-X---XXX---", "X-XX--XX-XXX---------", "X--X-X-----XX--X--X--"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--X---XX-X---", "--X-X-X--X---", "X-XXX---X--X-", "-------------", "--X---XX-----", "--X--------XX", "XXXX-XXXX--XX", "-X-X---------", "--X---XX-X---", "XXXXXXXXXXXXX", "--X--------X-", "XX--X-XXX--XX", "--XXX-X--X---", "XXXXXXXXXXXXX", "XXXX---X--XX-", "XX---X-X--XX-", "X---X-XXX----", "XXXXXXXXXXXXX", "XXXXXXXXXXXXX", "X-XXXXX------", "XX--X-XXX--XX", "X----X-X--X--", "XXX---X-X--XX", "-------------", "X-XXX---X----", "XXXXXXXXXXXXX", "XX-X---------", "XX--XXXXX-X--", "X-X---X-XX--X", "----X------XX", "XX--------X-X", "XXX-----XXXXX", "-------------", "XX--XXXXXXX-X", "------------X", "X------X-----", "XXX-X-X-XX-XX", "-XXXX-XX-X---", "XXXXXXXXX-XX-", "XXX-------XX-", "X-X--XXX-XXXX", "X-X-----XX-X-", "-------------", "-X-----------"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> attendance = {"XXXXXX", "X-X--X", "XXXX-X", "XXXXXX", "XXXXXX", "XXXXXX", "XXXX--", "X-XXX-", "XX--XX", "XXXXXX", "XXXX-X", "XXXXXX", "XXXXX-", "XXX-XX", "XXXXX-", "XXXXXX", "X-X-XX", "-XXXXX", "XXXXXX"};
    vector<string> problemTopics = {"----X-", "XX--XX", "----XX", "----X-", "XXX---", "------", "X---X-", "--X-X-", "X---X-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXX", "-----X---", "----XX---", "XXXXXXXXX", "XXXXXXXXX", "XXXXXXXXX", "----XX---", "X--X-XXXX", "XXXX-XX-X", "XXXXXXXXX", "----XX---", "XXXXXXXXX", "X--XXXXXX", "XXXXXXXXX", "X--XXXXXX", "XXXXXXXXX", "X-XX-XXXX", "X-XX-X-X-", "XXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> attendance = {"XXXXXXXXXXXXXXXXXXXXXX-XXXXXXX", "-XXX-XXXXX-X-XXXXX-XXXX-XXXX-X", "XXXXXXXXXXXXXXXXX-XXXXXXXXXX-X", "-XXXXXXXXXXXXXXXXXXXXXX-XXXXXX", "XXXXXX-XXXXXXXXXXXXXXXXXXXX-XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX-XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "-X-XX-XXXXXXXXX-X-XXXXXXXXXXXX", "XXXXXXX-X-XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXX-XXXXXXXX-XXXXXXX-XX", "XXX-XXXXXXXXX-XXXXX-XXXXXXXXXX", "XXXXXXXXXXXXXXXXX-X-XXXXXXX-XX", "XXXXXXXX-XXXXX-XXXXXXXXXXXX-XX", "XXXXXXXXXXXXXXXXXXX-XXXXX-XXXX", "XXX-XXXXXX-XXXXXXXXXXXXX-X-XXX", "-XXXXXXXXXXXXXXXXX-XXXXXXXXXXX", "X-XXXXXXXXXXXXXXXXXXXXXX-XXXXX", "-XXXXXXXXXXX-XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXX-XX-XXXXXXXXXXXXXXXXXXXX-XX", "XXXX-XXXXX-X-XXXXXXXX-XXXXXXXX", "XXX-X-XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXX-XXX-XX", "-XXXXXXXXXXXXXXXXXXXX-XXXXXXX-", "X-XXXXXXXX-XXXX-XXXXXXXXXXX-XX", "XXXXXXXXX-XXXXXXXXXXXXXXXXXXXX", "XXXXX-XXXXXXXXX-XXXXXXXXXXX--X", "XX-XXXX-XXXXXXXXXXXXXXXXX-XXXX", "XXXXXXXXX-X-XXXXXXXXXXX-XXXXXX", "XXXXXXXXX-XXXXXXXXXXXXXXXXXXXX", "X-XXXXXXXXXX-XXXXXXX-X--X-XX-X", "XXXXXXXXXXXXXXXXXXXXXXXX-XXXXX", "XXXX-XXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX-XXXXXXX", "XXXXXXXX--X-X-XX-XXX-XX-XXXXXX", "XXXXXXXXXXXX-XX-XXX-XXXXXXXXX-", "-XX-XXXXX-XXXXXXXXXXXXXXXXXXXX", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX-XXXXXXXXXXXXX-XXX-XXXXX-X", "XXXXXXXXXXXXXXXXXXXXXX-XXXXXXX", "XXXX-XXXXXX-XXXXXX-XXX-XXXX-XX", "XXXXXXXXX-X-XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXX-XX-XXXXXXXXXXXX", "XXXXXXX-XXXXXXX-X-XXXX--XXXXXX", "XXX-XXXXXXXXXXX-XXXXXXXXXX-XX-", "XXX-XX-XXXXXXXXXXXXXXXXXXXXXXX", "X-XXXX-XXXX-XXXXXXXXX-XXXXXXXX"};
    vector<string> problemTopics = {"-X-X--XXX----X--X--X----XXX--X", "X--X----XXXX-X---X-XX--X--X-XX", "---------X---XXX------XXXX----", "X-XXX----X-----X--XX---X--X-X-", "-X--X-----------XX--X-X---X---", "-X-----XX--------XX--X--------", "X--X-XX-----XX-----XX---X----X", "-XXXX--XXXX-X---XX--X-XX-X---X", "XXX--------X---X----X--XX---X-", "XXXX-X-X-X-----------XX-----X-", "---X--XX----X-XX-X-XX---------", "XX-XX-XX-X-X---X----XX---X--XX", "--X--X-XXXX--XX-X--X-X-X---XX-", "-X-XX-X-XX-X----------XXX---X-", "-X------X-X-XXX-XX----X---X---", "X-X-XX-XX---X--X----------XXXX", "-------X----X--X-X--X-X---XXX-", "X-XX-----X-X--X-XX--X-XXX---X-", "--XXX--XX-X---XXX--X--XXXX--XX", "-XXX-XX-X--XX---X-X-----------", "--XX--XX-----X-X---XX--X-X-XX-", "-----X--XXX-XX-X-XX--XXX-XX-XX", "XX--XX--XXX-------XX-XX-----X-", "----X--XXX-X--X-----XX--X---X-", "X-X----X-X----X------XX--X--XX", "--X--XXXX-X-X---X-XX-X----X-XX", "--XX-XX-X--X---X--XX-X-X-XXX-X", "---X--X----X----X-X--X-X-X--XX"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX-X-XX-X-XXX--X---XX--X-XXX", "X---------------------------", "X-X---X------------X------X-", "X---XX----X---X-X--X---X-X--", "-XXXXX-XXX----X--XX--XXXX---", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-XXX-XX-XXXX-X-XX---XXXXX-X-", "--XXXX--XXX-XXX-XX-XX-XX----", "--XXXX--XXX-XXX-XX-XX-XX----", "X------------X---------X---X", "----X-X-X-----X----X------XX", "--X-XX--XX-X-X---X-X---XX--X", "----XX--X------XX------XX---", "--X-----XX-X-X-----X---XX--X", "---XX-X-XX-X---------------X", "----XX--XX---XXXXX-X---X----", "-----X------------------X---", "X-X-X--X--X-XXX-X-X-X--X----", "-X-X------X-X--XX---XX--XXXX", "X-X-XX------XX----X-X--X--XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--X-XX--X-----X------XXXX---", "X-X-----X--------X--X-------", "--X-XX--X-----X-X------XX---", "X---XXX--XXX--X----X--XXXX--", "--X-X-----X--XX-X--XX-------", "------X----------X-----XX--X", "X---XXX-X-X---XXX-XXX----XXX", "X---XX-X------X-------------", "-X--X-X------XX-------X-----", "X---XXX---X---XXX--------X--", "X---XXX-X-X---XXX-XXX----XXX", "----------------------------", "-X-XXX-X-XXXX-XXX--XXXX-XXXX", "XXX--XX-XXX-X-X-XX-XXX--XXXX", "XX-X-XX-X-XXX--X---XX--X-XXX", "----------------------------", "----XX---X---X---X-----X----", "----XX--------X-X--------X--", "X-X-XX-X--X-XXX-X-XXXX-X-XXX", "X-----X---X-----------------", "XX-X-XX-X-XXX--X---XX--X-XXX", "X-----X---X-----------------", "X---XXX---X---XXX-X-X----X--", "X--X--X-XX-X-X-X---XX-X--XXX", "------X------------X--------", "-----X------X---------XX----", "--X-XX--X---X-XXX----XXXX---", "--XX-----------XX-X---------"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> attendance = {"XXXXXXXX-X-XXXXXX-XXXX", "XXXXXXXXXXXX-XXXXX-XXX", "XXXXXXX-XXXXXXXX--X-XX", "-XXX-XXX-XX-XXXXXXXXX-", "XXXXXXXXXX-XX--XXXXXXX", "XXXXX-XXX-XXXXXXXXXXXX", "-XXXXXXXX-XXXXX-XXXXX-", "XXXXXXXXXXXXXXXXXXXXX-", "XXXXXXXXXXXXXXXXXXXXXX", "XX-XXXXXXXXXXXXXXXXXXX", "-XXXXXXXXXXXXXXXXX-XXX", "X-XXXXXXXXXXXXXXXXXX-X", "-XXXX-XXXXXXXX-XXXXXXX", "XXX---X--XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX-XXXXX", "X-XXXXXXXXX-XXXX-XXXXX", "X-XXX-XXXXXXXXXXX-XXX-", "XX-XXXXX-XX-X-XXXXXXX-", "XXX-XXXXX-X-XXXXXXX-XX", "-XXXXXXXX-XXXXXXXXXXXX", "XXXXXX-XXXXXXXXXXXXXXX", "XXXXXXXX-XXXXXX-X-XXXX", "XXXXX-XXXXXXXXXXXXXXXX", "XXXX-XXXXX-X-XXXXXXX--", "XX--XXXXXXXXXXXXXXXXXX", "XXXXXX-XXXXXXXXXXXXXXX", "XXXXXX-XXXXX-XXXXXXXXX", "XXXXXXXXX-XXXXXXX-XXXX", "XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXX-XXXXXXX", "XXXXXXX-XX-XXXXXXXXXX-", "XXXXXXXXXXXXXXXXX-XXXX", "XXXXXXXXX-XXXX-XXXXXXX", "XXXXXXXXXXXXX-XXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXX-X-XXXXXXXXXXXX", "XXXXXX---XXXXXXXXX-X-X", "XXXXXXXXXXXX-XXXXXXXXX", "XXXX-XXXXXXXXXXXXXXX-X", "XXX--XXXXX-XXXXXXXXX--", "XXX-XXXXX-X-XX--XXXXXX", "X-XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXX-XXXXXXXXXX", "XXXXXXX-XXXXX-XXXXXXXX"};
    vector<string> problemTopics = {"XX----X---X---X-XXXX-X", "X---XXX---XXX-X----X--", "--XXXX---XX----X---X--", "X-X----XXXX----XX--X-X", "-X-XXX---X--XXXXX----X", "----XXXX---X-XXXXX-X--", "X-------XX--X--XX-XX--", "--XX-X----XX-X-XXXX---", "-X--XX-X-------X--X-XX", "--X--X---XX---X----XX-", "-X-X-XXXX----X------XX", "---X-X----X-X---X--X--", "XX--X-XX--XX--XXXX----", "X---XX--XX----X-X-X---", "X--X---X---XX-X-X-XX-X", "X---XXXX--XX-----X---X", "X--X-X--X------X---XX-", "XX-X--X------XX-X-----", "X--X----X--X-XXX-X----", "--XX---X--X----X--XX-X", "--X--XXX--X-X-------X-", "X------X--------X-X--X", "---XX---XX----XXX-XXXX", "XXX-XXX----X-X----X-XX", "--X-XX--------XXXX-XX-", "-X---XXXX--X------XX--", "-XXX-X-XX-XXXX---X-XXX", "X-X----X---X-------X--", "X---XXX-XX--XX--X-X-XX"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"----X---X-----X--X---X-X---X-", "--XX-X---XX-X--XXXX-----X--X-", "-----------------------X-----", "---------X-X--------X--------", "------X-X-------X----X---X-X-", "X-----------X-X--XXX-X-----X-", "-----------X--------X----X---", "-XX--XXX-X-XXX--XXX-X---XX-X-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX--XXX-X-XXXXXXXXX--XX--X--X", "--X-XX---XXX--------X---X-X--", "-XXX-XXX---X-XXX--XX-X-----X-", "-------------------X---------", "X----------------------------", "-XX-----XXX----XX-XXX--X-XXX-", "--X------X------X--XX--------", "------X--------------------X-", "-----------X-----------------", "--------X-----------XX-------", "-----X-XX-XX-------XX---XXX--", "--XXX-XXXX-X-XX-X-XX-XX-X-XX-", "-X-------X-X--X--X--XX-X---X-", "X--X--X-----X-X--XXX-XX----X-", "-----------------XX------X-X-", "XX---XX-X---XX-X-----X---X--X", "--XXX-XXXX-X-XX-X-XX-XX-X-XX-", "--XX---XXX---X--X-XX-XX-X--X-", "-X------X-XX--X-XX-XXX-X-X-X-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--XX--XXX-XX---XX--XXX-X-XXXX", "------X------X--XXX-----X----", "-XXXX-X-XXXX-XX-XX-XXXXX-X-XX", "-------XX-XX---XX--XXX-X-XXX-", "XXXX--X-XX-XXXXXX--XXXX-XX-X-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX-----X---X----XXX----XX----", "--X-X------X-----------------", "X-XX-X-XXXX-XX-XXXXX-XXXXX-X-", "X--X--XX---X--X--XXX-X---X-X-", "------X------------------X-X-", "--------------------XX-------", "-XXX-XXX-X-X-XXXX-XXXXX-X--XX", "X-XXX-X-XXXX-X--XX-XXXX-X---X", "XXX---X--X-X-X--X-----X-X----"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> attendance = {"XXXXX-XXXXXXXX-", "XXXX-XXX--XXXXX", "XXX-XXXXXXXXXXX", "XXX-XXXXXXX-XXX", "XXXXX-XXXXXXXXX", "XXXXXXXX-XX-XXX", "XXXX-XXXXXXXXXX", "X-XXXXXXXXXXXXX", "XXXXX--XXX---XX", "XXX-XXXXXXXXXXX", "XXXX-XX-XXXXXXX", "XXXXXXXXXXXXX-X", "XXXXXXXXXXXXXXX", "XXXXXXXXXXX-XX-", "XXXXX-XXXX-X-XX", "XXXXXXXXXX-XXXX", "XXXXXXXX-XXX-XX", "XXX-XXXXXXXXX-X", "XXXXXXXXXXXXX-X", "XXX-XXXXXXXX-XX", "XXXXXXXXXXXXXXX", "XXX-XX-XXXXXXXX", "XXXXXXXXXXXXXXX", "XXXXXXXXXXXX-XX", "XXXXXXXXXXXXXX-", "XXX-XXXXXX-XXXX", "XX--XXXXXX-XXX-", "XXXXXXXXXX-XXX-", "XXXXXXXXXXX-XXX", "XXXX-XXXXXXXXXX", "XXXXXXXXXXXXXXX", "XXXXX-XXXXXXXXX", "XXXXXX-XXXX-XXX", "-X-XXXX-XXXXX-X", "XX--XXX-XXX-XX-", "XX-XXXXXXXXXXXX", "XXXXXXXX-X-XX-X", "XXXXXXXXXXXXXX-"};
    vector<string> problemTopics = {"X--X------X-X-X", "X-X----X----XX-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X", "XX", "-X", "-X", "XX", "XX", "XX", "XX", "--", "-X", "X-", "X-", "XX", "-X", "--", "-X", "--", "--", "X-", "--", "XX", "-X", "XX", "--", "-X", "-X", "--", "-X", "XX", "XX", "XX", "XX", "XX", "--", "--", "X-", "--", "-X"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> attendance = {"X-XXXXXX", "XXXXXXXX", "XXXXXXXX", "XXXXXX-X", "X-XX-XXX", "XXXXXXXX", "XXXX-XXX", "XX-XXXXX", "XXX-XXXX", "XX--XXXX", "XX-XXXXX", "XXXXXXXX", "XXXXXXXX", "X-XXXXXX", "XXXXXXXX", "XX-XX--X", "XXXXXXXX", "XXXXXXXX", "XXX-XXXX", "XXXXXXXX"};
    vector<string> problemTopics = {"-XXX--X-", "X-X----X", "XXX---X-", "--------", "--X--XXX", "XX---X-X", "-X--X-X-", "XX------", "X---XX--", "---XXX--", "XX-----X", "X-XXXX--", "XX-----X", "----X---", "-X-X---X", "--XXX-X-", "XXX-X-XX", "X---X-X-", "XX-XX-XX", "-X---XXX", "-XX-----", "X-X---X-", "XX-X-X--", "X---X-X-", "XX-X--X-", "X-X-XXX-", "X--XX---", "X-X--X--", "-XXX-X--", "XX-X--XX", "----X--X", "XX-XXXX-", "--X---X-", "-XX-X---", "--X---X-", "-X----X-", "XXX-X--X", "-X--X-XX", "--X-XX-X", "-X-XX---", "X----XX-", "XXXXX---", "X-X---X-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X-XX---XX-X-X-X-X---X-X-XXX--X-X-X---X-X-X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-X-X-X-XXXXXXXX-----X-X---XXX-X--X--X-XX-X-", "-X-XX----------------X-----X----X-X-----X-X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXX-X--X-X-X----XXXX-X--XXX--X-XX----X-X", "---X-XXXXXX-XXX--XXX--XXX-X--XXX---X-X-XX--", "-XXXXXXXX-X-XX--XX-XXX-X-X-X--X-XXXXXXX-X-X", "---X-XXXX-X-XX---X-X---X------X----X-X--X--", "---X-XXXXXX-XXX--XXX--XXX-X--XXX---X-X-XX--", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-X-XX---XX-X-X-X-X---X-X-XXX--X-X-X---X-X-X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "---X---X--X-XXX-----------X---X--------X---", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-XXXXXXXX-X-XX--XX-XXX-X-X-X--X-XXXXXXX-X-X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> attendance = {"XXXXXXXXXXXXXXXXXX", "XXXXXXXXXX-XX-XXX-", "XXXX-XXXXXXXXXX-XX", "XXX-XXXXXXX-XXXXXX", "XXXXXXXXXXXXXX--XX", "XXX-XXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX-X", "-XXXXXXXX-XXXXXXXX", "XXXXX-XXX-XXXXXXXX", "XXXXXXXXXXXXXXXXXX", "XXXXXXX-XXXXXX-XXX", "XXXXXXXXXXXXXXX-XX", "XXXXXXXXXXXXXX-XXX", "XXXXX-XXXXXXXXXXXX", "-XXXXXXXXXXXXXX-XX", "XXXXXXX-XXXXXXXXXX", "XXXX-XXXXXXXXXXXXX", "XXXXX-XXX-XXX-XX--", "XXXXXXXXXXXX-XXX-X", "XX-XXXXX-XXXXXX-XX", "XXXXXXXXXXXXXXXXXX", "XXXX-XXXXXXXXXXXXX", "X-XXXX-XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX", "XX-XX-XXXXXXXXXXXX", "XXXX-XXXX-XXXXXXXX", "-XXXXXXXXXXXXX-XXX", "XXX-XXXXXXXXXX-XXX", "XXXXXXXXXXXXXX-XXX", "XXX-X-XXX-XXXXXXXX", "-XXXXXXXXXXXXXXXXX", "XX-XXXXXXXXXXXXXXX", "XXX-XXX-XXXXXXXXXX", "XXXXXXXXXXXXXXXXXX", "XXX-XXXXXXXXXXXXXX", "-XXXXXXXXXXXX-XXXX", "XXXXXXXXXXXXXXX-X-", "XXX--XXX-XXXXXXXXX", "XXXXXXXX-XXXX-XXXX", "XXXX-XXXXXXXXXX-XX", "-XXXXXXXXXXXXXXX-X", "XXXXXXXXXXXXXXXXXX", "XXX--XXXXXXXXXXXXX", "XXXXXX-X-XX-XXX--X", "-XX-XXXXXXXXXXX-XX"};
    vector<string> problemTopics = {"XX--X-X-X---X----X", "-X---XX-XX--XX----", "----XXX-X-X-----XX", "--XX--X--XXX-XX---", "--X--X-X-X--XXXXXX", "--X---XXXXX-X-XX--", "-XXX-X-XX---X-XX--", "--X--XXX--X---X-XX", "X----XX-X------XX-", "XX--X---XXXX-X-X--", "---XX-XX-XXXX-X-X-", "-X---X--X---X-XX--", "XXX-XX-----X-XX---", "XX-X-XXX-----X-X-X", "-XXXX-----XX--XXX-", "XX-XX-X-XX------X-", "----XXX-XXX--X----", "-X--X-------X-X--X", "--XX-X-XXXXXX--X--", "----XX--X------X--", "-X-X--XXXXX--X---X", "------XX-------X-X", "--X-X--X---XX--X--", "-X---X--X-XX------", "XXX---X-----X-XX--", "X-XX--X-X----XXX-X", "--X-XXX-X--XX--X--", "XX--XXXXX-X-X---XX", "XX--X--X--XX------", "---X--XXX--XX---XX", "-XXX-X--X--------X", "XXX-XX----XXX---X-", "X--XX------XX--X--", "X-X-XX----X---X--X", "-X---X-XX-X-X----X", "-XXX-XXX------X--X", "--X-X----X-XX-X-X-", "X--XX--------X----", "-X--X---XX-----XX-", "-XX-X-XX------XXXX", "----X-XX-XX-XX---X", "-X--XXX-XXX-X-XX-X", "XX-X--X--X---X----", "--XXX-X--X-XXXXXX-", "-XX---X-----XXX--X", "--XX---XX--X-XXX--", "---XX--X------XXX-", "-X-------X-----X--", "X-X--X-----X-X---X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "------X-X--X---X---X--X-X-X-----X---X-X-------XX-", "-X-X---X------------X--X-----XX---XX------X-X---X", "XXX-XX-XX--X----XX-X-X--X--X-----XX---XXXX--X--X-", "XXX------------XX---X--X---XXXXX--X--X--X-X-----X", "XXX-XX-XXX-XX---XX-X-XXXX-XXX--X-XX-X-XXXX--X--XX", "XX-X-XX--X-XXX--XXXXXXXXXXX-X-X-XXXX-X--XXX-XX-XX", "--X---XX---X--X--X-X-XXX--X--XX---XX---X----XXX--", "X-------------X--X---XX-XX--XX--X----X-X----XXX--", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXX-----XX-----XX--X---X--X---XXX----XX---X----XX", "XXXX---X--X-X--XXX--X--X---XXXXX-XXXXX--X-X-X---X", "XXX-----XX---X-XX-XXXXXX--XXXXXXX-X--XX-X-X----XX", "X--X-X---XX---XX-X--XXX-XX--XX--X---XXXXX-XXXXXX-", "-XXX---X--X-----XX--X--X-----XX---XXX---X---X----", "XXXX----XX-XX-XXXX-X---XXXX---XXXX--XXX--XXXX--XX", "-X-XXXXXX--X-X----X-XX-XXX---XX---XX------X-XX-XX", "----------------------X-X---X---X----------------", "---X-----X--XX--X--XXX-X-X--X-X--X-X-X----X--X-XX", "----------X------X----------X--------X--X-X------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-X-XXXXXX--X-X----X-XX-XXX---XX---XX------X-XX-XX", "----X-------------XX--X---------XX--XX-------XX-X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X--------XX----X-X--XX------XX--X----XX-X-X---XX-", "------XXX--X-X-------X-XXX---XX---XX--------XX--X", "-XX-------------X-XXXXXX--X--XX---X---X-X------X-", "XXX-----XX------X--X-XXX--XXX--X--X---X-X------XX", "XXX-----XX---X-XX-XXXXXX--XXXXXXX-X--XX-X-X----XX", "X----------------X---XX-X---X----------X----X----", "-XXXXXXX--XX--X-XXXXXXXX--X--XX---XXX-XXXX-XXXXX-", "XXX-----XXXX-X-XXX-XXX-X---XXX--X-X--XX-XXX---XX-", "XXX-----XX-XX---XX-X---XX-X----X-X--X-X--X--X--XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXX-XX-XXX-XX---XX-X-XXXX-XXX--X-XX-X-XXXX--X--XX", "--X--XXX--XX--X--XXX-XXX--X--XX---XXX-XX-X----XX-", "-X-X------X-X--XX------X----X--X----XX----X------", "----X--X-------------X--X-------------------X--XX", "-------X--X---X--X---XX-X---X--XXX-XX--X------XX-", "-X-X---X------------X--X-----XX---XX------X-X---X", "-X-X-XX----X----XXXXXXXX--X---X---XX----XX--XX-X-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-X--XX-XX--X---------X-XX---------X---------X--XX", "-----------------X---------------X---X-----------", "-XX----X--------XX-----X----------X-X---X---X----"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> attendance = {"XXXXX-XXXXXXXXXXX-XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "--XXXXXXXXXXX-XXXXXXXXXXX-XXXX", "XXX-XXXXXXXXXXXXXX-XXX-XXX-XXX", "XXXXXXXXXXXXXXXXXXXX-XXXXXXXXX", "XXXXX-X--XXXXXXXX-X-XXX-XXXXXX", "XX-XXXXXXXXXXXXXXXXXXXXXXXX--X", "-XXXXXXXXX-XXXXXXXXXXXXXXXXX-X", "XXXXXXXXXXXXXXXXXXXXX---XXXXXX", "XXXXXXXXXXX-XX-X-X-XX--XXX-XXX", "XXXXXXXXXXXXXXXX-XX-XX-XXXXXXX", "XXXX-XX-X-XXXXXXXXX-XXXXX-XXXX", "XXX-XXXXXXXXXXXXXXXXXXXXXXXX--", "X-X-XXXXXXXXX-XXXXXXXX-XXXXXXX", "XXXXXXXXXXXXXXXXXX-XXXXXXXXXXX", "-XXXXXX-XXXXX-XXXX-XXXX-XXXXXX", "XXXXXXXXXXXXXXXXXXXXXXX-XXXXXX", "XXXX-XXXXXXXXXXXXXXXXXXXX-XXXX"};
    vector<string> problemTopics = {"----X--X-X-XX-X--XXX--XX-X----", "---X--X-----------X-X--X-X----", "X-X----X---XX-X---X-X--XX--XX-", "--XX-X---XXX-X---X---XX--X---X", "-X-X-XX---X-XX-------X---X--XX", "--X-X---XXXX--XX---X-X---X--XX", "X--X------XXXXXX---X--X--X-XXX", "---XXX--X----X---XX-----XX--X-", "X-X-X-XX--XX-X---X---XXX------", "-XX----X-X--X-XX-----X--X-X---", "---------XXXXXXXX-XX---XX-XXXX", "---XXXX---XX----X-----X--X-X-X", "-XXXX---X--XX----X-X--X-X-----", "-XX--X------X--XXX-XXX---X----", "X--XX---------XXX--X--X--XX-XX", "XXXX-----X----X-----X--XX-X--X", "XXXXX-XX---X---XXXX--X-X--X--X", "-XX---X-XX--X---X-X---X-X-X-X-", "X---XX-X-------XX-X--X-X----X-", "XXXXXX-----XX------XXXX-----XX", "--X--X------XX--X-XXXXX-X--XX-", "------X-XX------XXX---X----XXX", "---------X-X--XXX-X-XXX---X-X-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-XX--XX--XX---XX-X----X", "XXX----XXX--XX---XX-X-X", "---------------------XX", "-----X-------X---------", "X--XXXXXXXXXX-X-XXX--X-", "----------------------X", "XX---------------------", "XX-------X--XX---------", "-------X---------------", "-----------------------", "-XX-X--X-X-----X-------", "-----------------------", "X-------XX---X---------", "--X--X------------X----", "---XXXX-XX-XXXXX---X---", "-----X-----XXX---------", "---XXXXX-X-XXXX--X-XXXX", "--X------XX----X-X--XXX"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> attendance = {"XXXXXXX-X-XXXXXXXX-X-XXXXXXXXXXXXXXXXX", "-XXX-X-XXXXXXXX-XXXXXXX-XXXXXXXXXX-XXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX--XXXXXXX", "XXXXX-XXXXXXXXXX--XXXXXXXXXXXXXXXX-XXX", "XXXXXXXXXXXX-XXXXXXXXXXX-XXXXXXXXXXXXX", "XXXXXXX-XXXXXXXXXXXXXXXXXXXXXXXXXX-XXX"};
    vector<string> problemTopics = {"X-X------X---X---XXXX--X-X-X-X-X-XX---", "--XXXXXXX-X------XXX--X-X-X---X----X-X", "X-----XX----X--X-X-XX-X-X-X--X-X-X---X", "----X-X-X-X------X-XX---------XX--X-XX", "X----X-X-XX-X--XX-X--XX--------------X", "X----XX-----X-XX------X---XXX-X----XX-", "X-XXX----XX-XX---X-X--X--X-----X-----X", "--X-X------X-X-------XX---XX-X--XX----", "--X---X--XX--X-X--XXX--XXX--X---X-X---", "X----------X---X-X-XX---XX-X---XX---X-", "---XXXX-XXX------XX--X-X--XX---X---X-X", "-X-X------X---XX-XXXX--X--X-X---XX----", "-X-XX---XXX--XX---X---X------------XXX", "XXX---XX--X---XX-X--X--X---X----X-XX-X", "X-XX-X----X----X--XXXX-XX--XX-X------X", "--X------XX--XX-XX-XXX-X--XX----X--XX-", "XX--X-X---X------------XX-X-XX-----X--", "---X-XX--X-XX--XX-X---X--XXX-XX--X-X--", "---X-X-X-XXX-----XX--X-----X-X-XXX--XX", "--XXX-----X-XX----X-X--------X-XXX---X", "X----X--XX-XX-X-XX-X----X-XX--XX-XX--X", "-X--XX-XXX----X---XXXX-------X---XX-XX", "---X--X---X-X----X-X-XXXXX---XX--X----", "--X-X---X--XX--X-------------X-X--X---", "-XX---XX-XX-XX--XXX-X-X-----XX-X-XX--X", "X---X---X--X--------XX--X--XXX----XX--"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-----X-X--------X-----XX--", "------------------X-------", "----X-X-XXXXXX-X----------", "-------X----X---X--X------", "X--X---X--XXXX-X--X--X----", "-----XXX-XXXX-XXXX-X--X---"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> attendance = {"X-XXXXXXXX", "XXXXXXXXXX", "XX-XXXXXXX", "XXXXXX-XX-", "XXXXXX-XX-", "XXXX-XXX-X", "-XXXXXXXX-", "-XXXXXXXXX", "XXXX-XXXXX", "XXX-X-XXXX", "XXXXX-X-XX", "XXXX-XXXXX", "XXXX-XXXXX", "XXXXXXXXXX", "-XXXXXXXX-", "XX-XXXXXXX", "XXXXXXXX-X", "XXXX-XXXXX", "XXXXXXXXXX", "XXXXXXXXX-", "X-XXXXXXXX", "XXXXXXXXXX", "XXXXXXXXX-", "X-XXXXXXXX", "XX-XXXXXXX", "XXXXX-XXXX", "X-XX-X-XXX", "XXXXXXXXXX", "XXXXXXX-XX", "-XXXXXXXXX", "-XXXXXXXXX", "X-XXXXXX-X", "XXXXXXXXXX", "XXXX-XXXX-", "XX-X--XXXX", "XXX-XXXXXX", "XXXXXXXX-X", "XX-XXXXXX-", "-XX-XXXXXX", "XXXX-XXXXX", "XXXXXX-XX-", "XXXXX-XXXX", "-XXXXXXXXX", "X-XXXXX-XX", "X-XXXXXX-X", "X-XXXXXXXX"};
    vector<string> problemTopics = {"---X-XX--X", "--X------X", "--X-----X-", "-----XX-XX", "----X--XXX", "--XX--X--X", "------X--X", "----XXX---", "-------X--", "--X-------", "X--XX--XX-", "X-XX-XXX--", "XX--------", "----X----X", "--XXXXX-X-", "X--XXXXXXX", "-XX--X----", "-X---X-X--", "--XX-X-XX-", "-X-XXX----", "--X-XX--X-", "XXX---X---", "--X--X---X", "X-X-X----X", "-X-XX---X-", "X---XX-X--", "X--XXX--X-", "X---X-XX--", "--XXX--X--", "---XX-X-XX", "-X-XX----X", "X---X---XX", "X--X---X-X", "-X--X-X---"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXXXXX-XXX--X-X-XX-XXXXX-XX-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X--XX-XXX-X-XX-X-X-X----XXXX-XXXXX", "--X-----XXX-X---XXXXX---XXX-X-----", "--X-----XXX-X---XXXXX---XXX-X-----", "XX---XX-XX-XX---XX---XX---------X-", "--X----XXX----X-XXXXX---X---X----X", "XXXXXXXXXX---XX-XXXXX-X-X---XXX--X", "XXXX-XX-XX-XX---XXX--XX---------X-", "-XX-X-X-XX--XX-------X-X---X---X-X", "-XX--XX--X--XX-------X-XX----XXX-X", "XXXX-XX-XX-XX---XXX--XX---------X-", "XXXX-XX-XX-XX---XXX--XX---------X-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--X----XXX----X-XXXXX---X---X----X", "X--XX-XXX-X-XX-X-X-X----XXXX-XXXXX", "XX---XXXXX-XXX--XX-X-XXX-X-XX-X-XX", "XXXX-XX-XX-XX---XXX--XX---------X-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--X----XXXXXX-X-XXXXXX--XXXXX----X", "XXXXXXXXXXXX-XXX--X-X-XX-XXXXX-XX-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--X----XXXXXX-X-XXXXXX--XXXXX----X", "XXXXXXXXXXXX-XXX--X-X-XX-XXXXX-XX-", "X--XX-XXX-X-XX-X-X-X----XXXX-XXXXX", "-XX-XXX-XXX-XX-------X-XX--XXXXXXX", "-XX-----XX--------X---X---------X-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX-XXX-X--XXX-X--XXXXXX-X--XXX-X", "XXXXXXXXXX---XX-XXXXX-X-X---XXX--X", "XXXXXXXXXX---XX-XXXXX-X-X---XXX--X", "XX---XXXXX-X-X--------XX-X-XX---X-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--X-----XX-XX---XXX--X------------", "------X-X---X-------------------X-", "-XXXX-XXXX--XX--XX--XXXX-X-X---X-X", "XX---XXXXX-XXX--XX-X-XXX-X-XX-X-XX", "-------XX-X-X----X-X----XXXX-----X", "-XXXX-XXXX---X--XX--X-X----------X", "XXXX-XX-XX-XX---XXX--XX---------X-", "--X-----XXX-X---XXXXX---XXX-X-----", "-XX-XXX-XXX-XX-------X-XX--XXXXXXX", "XXXXXXXXXX---XX-XXXXX-X-X---XXX--X", "XXXX-XXX-X---XX-----X-XX--X--X-X--", "XX---XXXXX-X-X--------XX-X-XX---X-", "XXXXXXXXXXXX-XXX--X-X-XX-XXXXX-XX-"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> attendance = {"XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXX-XXXXXXXXXXXXXX-X", "XXXXXXXXXXXXXX-XXX-XX", "XXXXXXXXXXXXX-XXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXX-XX--XXXXXXXXXXXX-", "XXXX-XXXXXXXXXXXXXXXX", "-XXXXXXXXXXXXX-XXXX-X"};
    vector<string> problemTopics = {"-XXXXXXX---X-X-X-----", "--X----X-----X-XX-XXX", "--------X-X-----XXXX-", "-X----X-XXX--XXXXXX--", "X--X---XXXX--X-XXX---", "--X-X----X--X----X---", "---X--XX-X-------XX--", "--XX--X-----X--XX--X-", "-X------X---X---XXXXX", "-XXX-X---X----XX-XXXX", "-X--XX----XXX-XX--X-X", "X---------X--------XX", "X--XXXXX----X--------", "-X-----XXX----X------", "-XXX-----X-X-----X-X-", "X--XX-XXX-X-XXXXXXX-X", "-XX--X-XX-X----XX-XX-", "X--------------XX-X--", "X-X-X-XX--XX---X-X--X", "X--------X---X----X--", "X--X-X-X---XX-XX--X--", "---XX-X----XXXX---X--", "--XX--X---X---XX--XX-", "X-X--X--X--X--X-XX--X", "-X-XXX----X---XX-X-X-", "---XXX--X-XX-------X-", "X-----XX-X--X-X-X----", "-X---XX----X-------XX", "X--X----X---X---X--XX", "--X----X--------X-XX-", "-XX---X--XXX--X-XX--X", "X---XX-XX-X--XX---XX-", "-X-X-X-XX---X---XX-XX", "X--XX----XX-X--X-XX--", "XX-XXX--X-X--XX--X--X", "---X-XX---X--X--X--X-", "-X--X-X------XXX---X-", "-X-----------XXX-XX-X", "X-X-XX------XXX-XXX--", "-XXXXX-XXX--XX-XXXXXX", "-------X-X-X---X---X-", "X---X-XXX--X----X---X", "--XX---X-X---XXX-X---", "----X----X-XX-X---XX-", "X------X---XX--X-----", "XXXX------XX--XX---X-", "--------------XX-XX--", "-XXX-X----XXXXXX--X--"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "---XX-X------X---X-XX--X--X---X------X----X-X-XX", "X---XX-X---XX-X---X------X-XX---X--X----XX--X---", "--X--XXXXXXXXXX-XXX-X-XXXXXXXXX-XX------XX-XXXX-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--X--X-----------X-X------------------X----X--X-", "-XXXX-XXXX-X-XX-XX-XX-XX--XXXXX-X--X-X--X-X-XXXX", "X----XX-----------------------------------------"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> attendance = {"XXXXXXXXXXXXX--X-XX-X--XXX", "-XXXX--X-XXX-XXXXX-XX-X-XX", "-XXXX-XXXXXXXXXX--XXXXXXX-", "XXX-X--X-XXXXXX-XX--XXXXXX", "XX--X-XXXXXXXXXXXXXXX-XXXX", "XXXXXXXXXXX-XXXXXX-XXXXXX-", "XXXXXXXXXXX-XXXXXXXXXXXXXX", "XX-X-XXXXXXX-X-XX-XXX--XXX", "XXXXXX-X-XXX--XX--XXX----X", "X-XX-XXX--X-XXXXX-XXXXX-XX", "XX--XXXXX-X--XX-XXX-XXXXXX", "-XXX-XXXXXXXXXX-XXXX-XXX--", "--XX-XX-XXXXXXXXXXXXXX-XXX", "X--XXX--XXXXXXXXXX-X-XXXXX", "XX-XXXXXX-XX-XXXXXX--XXX-X", "XXX-X-XXXXXXX--XXXXX-XXX-X", "XXX-XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXX-XXXXXXX-", "XX-XX-X-XXXX-XXXXX-XXXXXX-", "-XXXXXXX--X-XXXXXXXXXXXXXX", "XX-XX-X-XX-XXXXX-XXXXXXXXX", "X--XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXX-XXXXXXXX-XXXX-X-XX-", "XXXX---XXX-XXX--XXXX-XXXXX", "XXX-XX-X-XXXX-XXX-XXXXXXXX", "XXXXXXXXXX-XXX-XXXXXXXX-XX", "-XXXXX--XXX-XXXXX-X-XXX-XX", "--XXX-XXXXX-XXXXX--XXXXX-X", "XXXXXXX-X-XX-XXXXXXX-XXX-X", "XXXXX---XXXXXXXXXXX-XXXXXX", "XXXX-XXXXX-X-X-XXXXXXXX-XX", "XXXXXXXXXX-XXXXX---XX--XXX", "--XXXXXXXXXXXX-XXXXXXXXXXX", "--XXXXX-X-XXXXXXXX--XX-XXX", "--XXXXXXXX-XX-XXXX-XXXX-X-", "X--XXXX-X-XXXX-XXXX-XXX-XX", "XX-XXXXXXXXXXXXXXXXXXX-X-X", "XXXX-XXXXX-X-XXXXXXXXX-X-X", "XXXX---XXXXXX-XXXXXX--XXXX", "-----X-XX-XXXXXXXXXXXXXXXX", "XXXXXXXX-XXXXXXXXXXXXXXXXX", "-XXXXXXX-X--XXXX-XXXXXX-XX"};
    vector<string> problemTopics = {"--XX--XX--XX--XXXX-X-XXX--", "X--X-X-------XX-----------", "--------X--X-----------X-X", "------X---X-----X---------", "----------X-X----XX-------", "--X--X-XX---X-X-----X----X", "---XX--XX----XX--X-X------", "--XX--------XX--------XX-X", "XX--XX--X-X--X-------XX--X", "-----X----X-X-----X--X-X--", "-----X---X-XX---X---XX-X-X", "---XX---X-X----X-X--------", "-XX--X-X------X--X--------", "-X----X-X-----X--X--------", "X-------X----X-----X------", "X-X----------XX-------X--X", "X---X-------------XX------", "---------------X------XXX-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--X-X------X------", "------------------", "-----------------X", "---------------X--", "--XXX--------XX-XX", "-X-X--X----XXXX--X", "-X-XXXXXXX-XXXXXXX", "--XX----------X---", "----------------X-", "-X-X-----------X--", "---X----X----X----", "---XX----X--XX----", "--XXX----XX-------", "-XX--------X--X--X", "-XXX----X--X-X----", "--XXX-----------X-", "--XXXX--XXX-XXXXXX", "-X-X-----X----X-XX", "---X-------X-XX--X", "---XX--X-X--X----X", "--X----------XX-XX", "-XXXX-X--XXX--X-XX", "-X--X-X--X--X-X-X-", "--X----X------X---", "---------XX-----XX", "--------------X-X-", "------------------", "---X---X----------", "-XXX----X--X-XXXX-", "--X-X--X---X---X-X", "--------------X---", "-XX--X--------X---", "--XXX--X-XXX-----X", "--XX-------X------", "------------------", "---XX------X------", "-XXXX-X--XXX-XX-X-", "-XX---------XXX---", "--X-X------------X", "--X-X----X-------X", "XX-XX--X-XX-X--XXX", "------------X-----"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> attendance = {"XXXXXX--X-XXXX-XXXXXXXXXXXX--XXX--", "XXX--XXXXXXX-XXXXXXXXXXXX-XXXXXXXX", "XX--XXXXXXXX--XXX-XX-XXXXXXX-XXX--", "---X-XX--XXX-XX-XXXXXXXXX-XXXXXX-X", "XXXX-XX-XXX-X-XXXXX-X--XX-XXXXXXXX", "XXX-XX-XXX--XXXXX-XXXXXX-X-XX-XXXX", "XXXXX-XXXXXXXX-XXXXXXXX-XXXXXX-X-X", "XX-XXXXXX--XXXXXXXXXXXXXX-XXX--XXX", "-XXXXXXXX-XXXXXXXXXXXXX-XXXXX-XX--", "X-XX-XXXXXX-XXXXXXXXXXXXXXXX-X-XXX", "XXX-XXX--XXXXXXXXX-XXXXXXXXX-X-X-X", "X--XXXX-XX--X-XX-XXXXXXXX-X-XXX-XX", "XX-XXXXX-XXX-X----XXXXX-XXXXXXX-XX"};
    vector<string> problemTopics = {"X-X-----X-------------------X----X", "-X----X-------XX-X----X----X------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--", "XX", "--", "--", "X-", "X-", "X-", "-X", "-X", "--", "-X", "--", "--"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> attendance = {"--XXXXX--X-XXXXX-XX--X--X-XXXX-X-XXXXXX-XXXX-XXX", "X-XXXXXXXX--XXXXXX-XXXXXXXXXX-X-XX-XXXXX-XXXX--X", "XXXXX-XX--XXX--X-XXX-XXXXXXX---XXXXXXX-XXX-X-XXX", "XXX-XX-X-X-X-X-XX--XXXXXXXXXX-XXXXXXXXX-XXXXX-XX", "XX---XXXXXXX--XXXXXXXXXXXXXXXXXX-XXXXXX-XXXX-XXX", "XX-XXXXXXXXXXXX-XXX-XXXXXXXXXXXX-XXXXXXXXXXXXX-X", "XX-XXX-XXXXXXXXXXXXXXXXXXXX-XX-XXXX-XXXX-XX-XXXX", "X-XXXXXX-XXX-XX--XXXXXXXX-XXXXXXX-XX-X-XXXXXXXXX", "-XXXXX-XXX-XXX-X-XXXXXXX-XXXXX-XX-XXXXXXXXX-XX-X", "XXX-XX-XXX---X-X-X-XXX-XX-XXXXX-XXX-XXXXXXXXXXXX", "XX-XXXXXXXXXXXX---XX-XXXXXXXX-X-X-XXXXXXXXX-XXXX", "-XXXXXXXXXXXXXX-XXX-XXXXXXXXXXXXXXX-XXX-X-X--XX-", "XXXXXXXX----XXX-XXX-XXXX--X-XXX---XXX-XXX-XX-XX-", "XXXXXX---X-XXXXXXXXX--XXXX-XXXXXXX-XXXXXXXXXXXXX", "X--XXXXX--XXXXXXXX-XXXXXXXXXXX-X-XXXXXXXXX-XXXXX", "XXX-XX-XXXXXXXXXX-XXX-XXXXXXXX-XXX-XXXXX-XXXXXXX", "XXXX-XXXXXXXXXXXXXXXXXXX-XXXXXXXXXXXX-XX-XXXX--X", "XXXXXX-X--XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXX-X-XX-XXXXXXX-XXXXXXXXXXXXXXX-XXXXXXXXXXX-XXX", "XX-XXXXXXXXXXXXXXXXXXXXX-XXXXXXXX-X-XXXXXX-XXXXX", "XXXXXX-XXXXX-XXXXXXXXXXXXXXXXX-XXXXXXX-X-XXXX-XX", "-XXXXXXXXXXXXXX--XXXXXXXXXXXX-XXXXX-XXXXX-XXX-X-", "XXXXXXX--XXX-XXXXXXXXXXXXXXXXXXXX-XXXXX--X-XXXXX", "XX-XXXXXXX-XX--XXXXXXXXXXXXX-X-XXX-XXXXXXXX-XX-X", "XXXXXXX--XXXXXX-XXXXXXXXX-XX-X-XX-XX-XXX-XX-XX-X", "XXX-XXXX-XXXXXXXXXXXXXXXXXXXXXXXXXXXXX-XXXX-XXXX", "X-XXXXXXXXX-X-X-XX-XXXXXXXXX-X-XXXXX----XXXXX-XX", "XX-X---XXX-XXXXX--X-XXXX--XX-XX-XXXXXXXXXX-XXX-X", "XXXX-X---XXX-X-X--XX-XXXXXXXXXXXXXX-XXXXXXX-XXX-", "XXXX-X-X-XXX-XXX-XXXXX-X-XXXXXXXXX-XXXXXXX-XXX-X"};
    vector<string> problemTopics = {"-------X----X-----X-X----------X-------------X--", "------XX------X-X-------X------X-X---X---X----XX", "-----XX-X-----------X-----X--------XX--------X-X", "-X-----X----X--X-----XX-XX---------X------X-X-X-", "------XX-------------X-X-----------XX-X--X------", "------X-----------X-X----------X---X------X-----", "-X---X-------XXX-X-X--------X------XX-----X---X-", "X-----X-----XX---------X--------XX-------X-X--XX", "--------------------X---------X--X-X--X---X-----", "-----XXX--X-------X-----XXX---X----X-X----------", "XXX----X-----------------X-X------XXX--------XX-", "-X---X----X----X----XXX--X-XXX-------X-X-XX-----", "--X----------X-X-X--XXX--XX-----X-------------X-", "---X----XX------X---X---X-XX--X-----X----------X", "--X-X----X---X-XX--X--X----XX--X---------X---X--", "X---XX---X------------XX-------------X-X------XX", "X-X-X--X-------------------------X---------X----", "--XX--X-------------XX-X-X--X--X-X--X-X-----X---", "X-----------X--------X-X------X-------X--X------", "X---------XXX---------X-----X---X-------X--X--XX", "-----X---X--X-X-X------XX------XX----X-XX--X----", "------XX------------XX--XXX----X--X---X---------", "---X-X---X--XX-X-----X--X--X------XX------------", "-----X--X------X--------X----X------------------", "-X---X--------------X-----------XXX---X---X--X-X", "---------X--------X-------------X-X---X---XX---X", "-X------X---X------X--X---X---XX-X-X--X--------X", "-------X---X-X----XX-X----X-------XXXX----X----X", "-----X----------------X--X-----X----X----X--X---", "XX----X---XXX--XX---X--XXX---X--X--X-----X------", "X---------XX-X-X----X------X----------X---X-----"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"----------------------X--------", "----X---X----X--X-X------------", "----------X-----X--------------", "--------X-------X-----------X--", "-XX-XX--XX-----------X-X-------", "X-X-XX--XX---X----X--X------X--", "X--------------X-------XX---X--", "-----X---------X---------------", "X--------------------------XX--", "----------------X------XX------", "----X----X-----X--X--------X---", "X--------------------X---------", "-------------------------------", "------X-------XX----X-------X--", "-X--X----------------X------X--", "X-------------XXX------X----X-X", "----XX--X--------XX------XX-X-X", "X--X--X-X-XXX---X-XX----X--XX-X", "X---XX--X-X-----X-X--X-----X--X", "X--------------X--XX--------X--", "------X----XX--XX------X---XX--", "-----------------X---X---------", "------------X-X-------------X--", "X-X-XX-----------------X----X--", "-----X-------------------------", "XX-X-XX--XXXX-XX-----------XXX-", "----------------X--------------", "------------------X------------", "----------------------------X--", "-------------------------------"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> attendance = {"XX--XXXXXXXXXXXX-X-X-XX", "--XXXX-XXXX-XX-X-XXXXXX", "XXXX-X-XXXXXXX-XXXXX-XX", "XXX-XXXXXXXX-XXXX-XXXXX", "XXXXXXXXX-XXXXX-XXXX-XX", "XX-XXXXXXXXX-X-XXXXXXXX", "XXXXXXXXXXXXXX-X-XXXXXX", "XX--X--XXXXXXXXX-XXXXXX", "XXXXXXXXXXX-XXX-X--X-XX", "-X-XXX--X-XXX---XXXXXXX", "-XXXXXXX-XXXXX-X-XXXXX-", "XXX--XX-X-X-XXXXXXXXXXX", "--XXXXXX-XXXXXXXXXX-XXX", "X--XXXXXX-XXXX-XXXX-X-X", "-XXXXX-XX-XXXX-XXXXX-XX", "XXXXXXXXXXXXXXXXXXXXXX-", "--XXX--X-X-XX-X-XXXXXXX", "-XXXX-XX-X-XXXXXX-XXXXX", "XX--XX-XXX-XXXX-XXXXXXX", "XXXX-X-XX-XXXXX-XX--XXX", "XX-XXXXXX-X-X-XX-XXXXXX", "X-XXXXXXXXXXXXXXXXXXX-X", "X--XXX--XXXXX-X--XXXXX-", "XXXX-XXXXXX---XXXXXXXXX", "XXX-XXX--XXX--XXX-XXXXX", "-X-XXXXX-XXXXXX--XX-XXX", "XXXXX-X-XXXX-X-XX-X-XXX", "--XXX-XXX-XXXX--XX-XXXX", "XX-XXXXXXXXX-XX--XXXXXX", "-XXXXXXXXXXXXXXXXXX-X--", "XXXXXXXXX-XXX-XX-X-XXXX", "XX--XXXXXXXXXX-XX-XXXXX", "--XXXXXXXX-X-XXXXXXXXXX", "XXX-XXX-XXXXXXXXXXX-X-X", "XX-XX-XXXX--XX-XX----XX", "X-XXXXXXXXXX-XXX-XX-XXX", "XXXX-XX--XXXXXXX-XXXXXX", "-XX----XXX--XXXXXXXX-XX", "XXXX-XXXXXXXX-XXX-XXXXX", "-XXXXXXX--XXXXXXX-XXX-X", "X-XXXXXX-XXXXXXXX--X-XX", "XXXX-XXXXXXXXX-X-X-XXXX", "XXX-X-XXXXXXX-XXXXX--XX", "X-XXXXXXXXXXXXXX-X-XXXX", "-X-XXX-XXXXXX-XXXX-XX--", "XXX--XXXX-XXXX-XXXXX-XX", "X-XXXXXX-XXXXXX--XXXXX-", "XXXXXXXX-XXX-XXXX-XXXXX", "-XXXX-XXX-XX-X-XXX--XXX"};
    vector<string> problemTopics = {"--X--------X----------X", "-X---X-----------X--X--", "----XX-X-----X----X--XX", "--X----XX--X-----X-XXXX", "---X----X----------X---", "-X---------X-X--X------", "----------X------------", "---X-------X-X---------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"------X-", "--X-X-X-", "X---XXXX", "X-X--XX-", "X-X-XXXX", "-XX-XXXX", "XXXXX-XX", "------X-", "----X-X-", "-X--X-X-", "-X----XX", "-X----X-", "X-X---XX", "------XX", "X-X-XXXX", "-X--XXXX", "X-------", "X----X-X", "-XX--X--", "XX---XXX", "-X--X-X-", "X---X-XX", "----X-X-", "-X--X-X-", "X-----X-", "-XX---XX", "X----XXX", "X--XX-XX", "-XX-X-XX", "-X---XXX", "XX-XX-X-", "--X--XX-", "X-XXX--X", "XX---XX-", "--------", "X-X---XX", "XX----XX", "--------", "X---X-X-", "X----XXX", "X-----XX", "XX-XX-XX", "X-----X-", "X--XX-XX", "-X--X-X-", "X----XX-", "------XX", "X-X--XXX", "X----XXX"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> attendance = {"XXXXXXXXXXXXXXX", "XX-X-XXXXXXXX-X", "X-XXX-XX-XXX--X", "XXXXXXX-XXXXXXX", "XXXXX-XXXXXXXXX", "X-XXXXX-X-XXXXX", "XXXXXXXXXXXX-XX", "XXXX-XXXXXX--XX", "X-XXXXXXXXXXX-X", "XXX-XXXXXXXXXXX", "XXXXXXX-XXX---X", "-XX-XX-X-X-XX--", "XXXX--XXXXXXXXX", "XX-X--XX-XXX-X-", "XXXXXXXXXXXX-XX", "XXX-X-XX--XXXXX", "XXXXX-X-XXXXXX-", "XXXXXX-X-XXXX-X", "XXX-XXXXXXXXXXX", "XXXXX-X--XXXXXX", "XXX-XX-XXXXXXXX", "XXX-XXXXXXXXXXX", "XXXX-XXX--XXXXX", "XX-X-XXX-XXX-XX", "XXX-X--XXX--XX-", "XX-XXXX-XXXX-X-", "X-X-XXXXXXXX-XX", "XXXXX-XXXXXXXXX", "XXXXXXX-XX-XXXX", "XXXX-XXXXXXX--X", "-X-X-X-X-XXXXXX", "X-XXXX-XXXX-XXX"};
    vector<string> problemTopics = {"----XX--X------", "------------X-X", "--X------------", "----X-X---X--X-", "---------X-----", "-X-X--X---X----", "X-----X--------", "---------XXX---", "-XX---X------X-", "XX-----X-XX-X--"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXXX", "-X--XXXX-X", "--X-X-XX--", "XXXXXXXXX-", "-XXXXXXXXX", "XXXX--X---", "X-XXXXXXX-", "--X-XXX-X-", "XXX-X-XX--", "XXXXX-XXXX", "X-X-XXX---", "--X-X-----", "-XX-XXXXXX", "----XXXX--", "X-XXXXXXX-", "-XXX--X-X-", "--XXXXXXX-", "-XX-X--X-X", "XXXXX-XXXX", "-XXXXXXXX-", "XXX-X--X-X", "XXXXX-XXXX", "-XX--XX-X-", "----XXXX--", "--X-X-----", "X--XXXXX--", "X-XXX-XX--", "-XXXXXXXXX", "XXX-X-X-X-", "--X-XXXX--", "-X--X--X--", "XXX-X-----"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> attendance = {"-", "X", "X", "-", "X", "X", "X", "X", "X", "X", "X", "-", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "-", "X", "X", "X", "X", "X", "X", "-", "-"};
    vector<string> problemTopics = {"X", "-", "-", "X", "-", "-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-XX-XX", "XXXXXX", "XXXXXX", "-XX-XX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "-XX-XX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "-XX-XX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "-XX-XX", "-XX-XX"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> attendance = {"X-XX---XXXXXXX-XXX-XXXXXXXXXXXX--XXXXXXX--", "XXXXX-XX-XXXXXXXXXXX-XX-XXXX--XXXXXXXXXXXX", "XXXXXXXXXXX-XXXX-XXX-XXXXXXX-XXXXXX--X-XXX", "X--XXXXXXX--XX--XXXXXXXXXXXX-XX-XXXXX-XXX-", "XXX-XXXXXXX-XXXX--XXXXXXX-X-XXXX-XXXXXXXXX", "XXXXX-XX-XXX-X-X-X-XXX-XXXXXXX-XXXXXX--X-X", "-XX---XXXXXXXXXXXX-X-XXXX-XXXXXXXXXX-X--XX", "X-XXX-XXX-XX-XX-X-XXXXXXXXX-XX-XXXXXXX-XX-", "XXX-XXXXXXXXXXXXX-XXXX-XXX-XXXXX-X-XXXX-XX", "-XXXX-XXXXXXXX-X-XXXXXXX-XXX-XXXX----XXXXX", "XX-XXXXXXXXXXXX-XXXX-XXXXXXXXX-XXXX-XXXXX-", "XXX-XXXXXXXX-XXXXXXXXX-XXXXX-XXX-XXXX-XXXX", "XX--XXXXXXXXXXXXXXXXX-XXXXXXXXXXXXXXX--XXX", "X-X-XXXXXXXXXXXXXXXXXXXXXXX--XX-X-X--X-XXX", "XXXXXX-XXXXXXX-XXXXXX-XX-XXXXX-X--XXXXXX-X", "XXXXXXXXXXX-XXX-XXXXXXXX-XXXX-XXXX-XXXXXXX", "-XXXXXX-XXXX-X--XXXXXXXXX-XXX-X-XXXXXXXXX-", "XXX-XX-XX-XXXXXXXX-X-X-X-XX-XXXXXXXXXXXX-X", "XX-XXXXXXXXXX-X-XXXX--XXXXXXX--XXXX-XXXXXX", "XXX-X-XXXXXXXXXXXX-XXXXXXX-XXXXX--XXXXXXXX", "XXXXXX-XXXXXXXXXXXXXXXXX-XXXXXXXX-XXXX--X-", "XX-XXXXXXXXXXXXXXXXXXXXXXXXXXXXX-XXXXXXXXX", "X-XX-XXXXXXXXXXXX-XX-X-XXXXXXXX-XXXXX-XXXX", "XXXXXX-XXXXXXXX---XXXXXXX-XXX---XX-X-XXX-X", "XXXXXX--XXXX-X-X-X-XXX-XXXXXXXXXX--X-XXXXX", "XXXXXXXXXX-XX-XX-XXXXXX-XXXXX--X-X-XX-XX-X", "XXXXXXXXXXXXXX-XXXXXX-XX-XX-X-X----XXXX-XX", "-XX-XXXXX-XX-XX-XXXXX-XXXXXXX-XXXXXXXXXX--", "XXX-XXXXXXXXXXXXXX-XXX--XXXX-XX-X-X-X-XXX-", "XXXXX-XXXX--XXXX--XXXXXXX-X-XXXXXX-XXXXXXX", "XXX--X-XXXXXX-XXXXXXX--XXXXXXXXXX-XX--XXXX", "XX-XXXXXXXXXXXXXXXXXXXXXXXXX-X-XXXX-XXXX-X", "X-XXXX-XXXXXXXX--XXXXX---XXX-XXXX---X-XXXX", "XXXXXXXXX--XXXXXXXXX-X-XX-XXXXX-X-XXX-XXX-", "XX-XXXXXXXX-XXXXX--XXXXX-X-XXXXXXXX-XXXXXX", "XXXXXX-XXXXXXXXX-XXX-XX-XX--X-XXXXXXXXXXXX", "X-X-X-XXX-XXX-XXXX-X-XXXXX-XXXX-XXXX-XXXXX", "X--XX-XX-XXXXXXXXX--XX--XXXXXX-XXX-XXXXXXX", "XX--XXXXX-XXXX-X-XX-XXX-XXXX--XXX--XXX-XXX", "X-XXXXX-XXX-XXXXXXXXXXX-XXXX--XX-XXXXXXXXX", "-XX-XXX-XXXXX-XXXXXXXXXXX---X--X-XXX-XXXXX"};
    vector<string> problemTopics = {"---------X-XX----XXXX--------X--------XXXX", "---------------X------X--X-----X-XX-X-----", "---X---X-----X-X---X--XX-X---X--X---X--XX-", "-X-----X-X----X--------X-XXX----------X-XX"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"----", "-X--", "----", "----", "----", "----", "----", "----", "----", "X---", "----", "---X", "-X--", "----", "----", "---X", "----", "----", "---X", "----", "----", "XX-X", "----", "----", "----", "----", "----", "----", "----", "----", "X--X", "-X--", "X---", "----", "-XX-", "-X--", "----", "----", "----", "-X--", "----"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> attendance = {"-XXXXXXXXXX-XXXXXX-", "XXXXXXX-XXXXX-XX--X", "X---XXXXXXX-XXXX-XX", "XXX-XXXXX--XX-XX-X-", "X-XXXXXXXXXX-XXXXX-", "XXX-XX-XX-XX-XXXXXX", "XXXXX-XXXXX-XXXXXXX", "-XXX-XXXXXXX-XXX-X-", "X---XXX-X-XXXXXX-XX", "X-XXX-XXXXX-XXXXX-X", "--XXXXX-X-XXXXX--XX", "XXX-XXXXXXXXXXXXX-X", "XX-X--XXXXXXXXXXX--", "XX-XXXXXXX-XXXXXXXX", "XXX-XXXXXXXXXX---X-", "XXXX-XXXXX--XXXXXXX", "-XX--XXXXXXXXXXXX-X", "XXXX--XXXXXXXXXX-XX", "X-XXXXXXXXXXXXXXXXX", "X---XXXX--XXXXXXXXX", "X----X-X-XXXX--X-XX", "--XXX--XX-XXXXXXXXX"};
    vector<string> problemTopics = {"----X--X------X-X-X", "--X---XX-X--X-X----", "X--XX--X-------X-X-", "-------X---XXXX----", "----XX-----X-------", "------------------X", "-------X-----------", "XX---X--XXX---X----", "-------------------", "---------X--XX-X---", "-------XXXX-XX-X-X-", "X-------XXX--------", "-X-----X-----------", "-----XXX----------X", "-----------------X-", "X---XX-XXX--XX-X---", "-------X-----------", "----X---------X----", "--X-----XX----X---X", "XX-X--XX--X--XX-X-X", "XX------XX--X--X-X-", "X-------X---------X", "--------------X---X", "-------X-XX----X---", "-X-XX-------X------", "----------XXX-XX-X-", "X--X----------X----", "------XX-----X-X---", "XX----XX----------X", "---X-------------X-", "X---------X-X----X-", "-X------XXX-XX--X-X", "-X------X-X--------", "--------X---X-----X", "XX--X-X-------X----", "--X-------X-X------", "-XX-X---X--------X-", "-------------------", "-XX----XX----------", "---X--------XX---X-", "----XX---X---X-----", "X-X---X-------X----", "----------XX---X--X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X----X-XXX-X-X-XX-----XX--X-X--X--XXXXXX--", "----XX-XX--X-----XX--XX-X-X-----XXXX-X---XX", "-----XX-XXXX-XXXXX---XXX---X--X--X---X--X--", "----X-X-X---X-X-XX----------------X-XXX--X-", "--X-X-X-X--X--X-XX-----X--XX-X-------X--XX-", "X---XXX-X---X-X-XX---XX---------X---XXX---X", "XXX--XX-XXXXX-X-XXXXXXXXX-XXXXXXXXXXXXXX-X-", "------X-X---X-X-X------X---X-X--X----XX----", "----XX--X-----X--X---XX--X----X--X---X----X", "XX---XX-XX-X----XXX--XXX--XX-----X-X-X---X-", "----XX--X-----X--X----X------X---X-X-X-X---", "XX-XXXXXXX-XXX-XXXX--XXX---XX--XXXXX-XX-XXX", "---X--X-XX-XX---X------X--XX----X----X-----", "X-XXXXX-XX--XXXXXX--XXX-X-XXXX---XX--X-XX--", "----X-X-X--XX-X-X-------------X-X--XXXX-X--", "-X---XX-XX--XXX-X-X-XXX---XXXX---X---XXX-X-", "-X-X-XX-XX--XX--X-X---XX---X---XXX-X-XX---X", "-X-X-XX-XXXXX-X-X-X-XXXX-XXXXXX-XX-X-XXX-XX", "XXXXXXX-XXXX-XXXXXX--XXX-XXX-XX--X-X-X-XXXX", "X--XXXX-X----XX-XX----X--X-X--X------X----X", "-----XX-X-----X-X------X------X------X----X", "X--X-XX-X-----X-XX----X--X---X---X-X-X-X--X"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> attendance = {"XX-XXXXXXXXXXX-X-X-XXXX-XX--XXXXXXX-XXX", "X----XXXXXXXXXXXXXXXXX-XXX-XXXXXXXXXXX-", "X-XXX-X-XXXXXXXX-XX-XXXXXXX--XXXXXXXXXX", "XXXXXXXXXXX-XXXXXXXXXXXXXXXXXXXXX-XXXXX", "XXXXX-XXXXXX--X-X-XXXXXXXXXXXXXX-XXXXXX", "X--X-XXXX-XX-X-XX-X-XXXXXXXXX-XX-XXXXXX", "XXXX-XXXXX-X--XXXX-XXXXXXXXXXXXXXXX--X-", "XXX--XXXXXXX-XXXXX-XXXXXXXXXXX-X-XXXX-X", "XXXXXXXXX-XXXX-XXXX-X-X-XXXXXXX-XX--XXX", "XX-XXXXX-XXXX-X-XXXXXXXX-XX--XXXXX-XXXX", "XXXXXXX--X---XXX-XX-XXXXXXXXX-XXXXXXXXX", "XX-XXXXXXXX------XXXXXX-XXXXXXXXX-X---X", "XXXXX-XXX-X-X-XX-XXXXXXXXXXXXXXXXXXXXXX", "XX-X-XXX--X-XXX-XXXX--XXXXX-X-XX-XXXXXX", "XXX--X-XXXXXX--XX--XX-X--X--XXXXXXXX-XX", "X-XXXXXXXXXXXXXXXXX-XXXXXXXXXXXXXXXXXXX", "XXX-XXXXXXX-X-XXXXXXX-XXXXXXXX--XX-XXXX", "XXXXXX-X-X--XXX-XXXXX-XXXXXXXXXXXXXXXXX", "--XX-XXXXXXXX-XXXX-X-XXXX-XXXXXXXXXX-XX", "X-XXX-XXXXXXXXX-X-XXX-XXXXX-XXXXX-XX--X", "--XXXXXXXXXXXX-XXXX-X-X---X--XXXXXX-XXX", "XX-X-XXXXXXXXXXXXXXXXX-X-XXX-XXXXXXX-XX", "XXXXX-X-XXX-XXXXXXX-X-XX-XXX-XXXXX-XXXX", "XXXXX-XX-XXXXXXXX-XXXX---XXXXXXX-XXXXX-", "XXXXXXXX--XX-XXXXXXXXXXX-XXXXXXXXXXXXX-", "XXX-XXXXXXXXXXXXX-X-XX-X---XX-XXXXXXXX-", "XXXX-XXX-XXX-XX-XX-XX-XXXXXXXXXXXXXXXXX", "XX-XXXX-XXX-XX-XXXXXXXX-XXXXXX-X-XXXXX-", "XXXXX-XXXXX-XXXX-XX-XXX-XXXXX--XXXXXX-X", "-X--XXXXX-XXXXXXXXX-X-XXXXXX-XXXXX-XXXX", "-XXX---XX---X-XXXXXXXXX--XXXXXX-XXXXXXX", "XXXXXX-XXXXXXXX-XX-XXXXXXX-X-XX-XXXXXXX", "XXX-XXXXXXXXXX-X--XX-X-XX-XXXX-XXXX-XXX", "--X-XXX---XXXXXXXXXXXXXXXXX--XXXXXX-X-X", "X-XX-XXXXXXXXXXXXXXXXXXXXXXXXX--XXXXXXX", "X-X-XXX-XXX--X--XXXXXXX-XXXXXXX-XXXXX--", "X-XXX--XXXXX-X-XXX-XXXX--XXXXXX-X-XXXX-", "XXXX--XXXXX-XXXXXXXXXXXXXXXXX-X-XXX--XX", "XXXXXXXXXX-XX-XX-XXXX-XXXXX-XXXXXXXXXXX", "XXXX--X-XXXXXXX-XX-X-XX-XXXXXXX-XXXXXXX", "XXXXXXXXXXXXXXXXX-XXXXXXXXXXXXX-XXX-XX-", "X--XXXX-XXXXXXXX-XXXXX-XXXXXXX-X-X-XXXX", "X-X-X-XX-XXX-XXX-XX-XXX--XXXX-XXXXX-XXX", "X-XX-XXXX--XX--XX-X-X-XXXX-X-XXXXXXX-XX", "X-XXXXXXXXXXXXXXXXXXXXXXXXXX-XXX-XXXX-X", "XXXXXXX-XXXX-XXXXXXXXXXXX-XXXXXXXX-X--X"};
    vector<string> problemTopics = {"---X-X--XXX----X--X--X------XX---------", "--XX-------X--XX-----X---X--X------X---", "------X---XX--X------X--X---X-X-XX----X", "-----X----X---XX--X-X---X--X----X-----X", "---XX--X-X---XX------X-XX-----X--------", "-X------X-----------X---X------X--X-X--", "----X----XX-------X----X---XX-X-X--X-X-", "-X----X-X--X---XXX-------------X-X-----", "-----XXX-X-------------X----XX--------X", "---X-XX-X-----X------X-------X---X--X--", "-----X-X-------------XX-----X----X-XX--", "---X--------X---X-----XX-XX-----X------", "----------XX----X---X---X------X-------", "-------XX---X-----XXXX-----------XX----", "---XXX----------X-----------------X----", "--------------------X-------X---------X", "X-X------X--------X-XX-X------X--X----X", "X-----X--X-X-------XX---X-X------X----X", "-X-X-------------X---XX-X---X-X-----X--", "------------X--------X------X--------XX", "-----XX-----------X--X-XX---X----X-----"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-----X---------X--XX-", "------------XX------X", "----------------X----", "X--XXXX-X--X--XX--XX-", "-----X------X--XXX---", "----------X-X--X----X", "-------X-------------", "-----X-XX-X-X--X-X---", "---------------X-----", "-----------X---------", "---------------XX-X-X", "---------------X-----", "-----X-------X-X--XX-", "---------------------", "---------------X-----", "XXXXX-X-XXXXX-XXX--XX", "---X----X------X-----", "-----------X--XX-----", "--X-----X----------X-", "-----------XX--X-----", "--------------X------", "-------X-----X-------", "-----------X---------", "-X-------------------", "-X--------X---X------", "------X--------------", "--------X---X--X-X---", "X----X--------X------", "-----X---------X-----", "---X---X----X--------", "-------------X-X---X-", "----X---------X------", "--------X----------XX", "------------X--------", "XX-X----XXXX-X-X-X-XX", "---------------------", "---------------------", "-----------X-X-XX--X-", "-----X--X------X-X---", "--X---------------XX-", "X---X----X-X-XX-----X", "X--------X-----X-X-XX", "---------------X-----", "---------------------", "----X----X--XXX-XX---", "X-XX---X----X--XXX--X"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> attendance = {"-XX-XXXXXXXXX--X-", "--X--X-XXXXXX-X-X", "X-X-X-XX-XXXXXXXX", "XXXXXXXXXX--XX--X", "XXX-XXXXX--XXXXX-", "XXXXX-X-XXXXXXXX-", "XXXXXXXX-XXXXXXXX", "XXX-XX-X--X------", "X-X-XXXXXXXXXXX-X", "-XXXXXXXX-XXXXXXX", "X-XXXXXXX-XX-XX-X", "-XXX-XXXXXXXXX-XX", "XX-X-XX-XXXX-XX--", "XXXXXXX--XXXXXXX-", "XX-X--XXXXXXXXXXX", "XX-X-XX-XXXX-X--X", "XXXXXXXXXXXXXXX-X", "XX-XXXXXXXX-XX-XX", "--XXXXXXX-XXXXX-X", "-X-X-XX-X-XXXXXXX", "-XXXX-XX-XXX-XXXX", "XXXXXX-X-XXXXXXXX", "XXX--XXXX-X-XXXXX", "-X-XXXXXXXXX-X-XX", "XXX-XXXXXXXXXX---", "XX-XXXXXX-X-XX-XX", "XXXXXXXXXXXX-XX-X", "X-XXXXXXXXXXXXX-X", "X--XXXXX-XXXXXXXX", "XXXXXX-X--XXXXXXX", "XX-XX-XXX--XX-XXX", "XXXXXX-XXXXXXXX-X", "XXXXXXXXXXXXXXXXX", "XXXXXXXXXXX--XX-X", "XXXXXXX-XX-XX--XX", "XXXX-X-XXX-XXXX-X", "XXXXXX-XX-X-XXXXX", "XXXXX-XXXXX-XXXXX", "XXXXXXXXXXX-XXXXX", "X-X---X-XXX-XXXX-", "X-XXXXXXXXXX-XXXX", "X--X-XXXXX---X-XX", "X-XXXX-XXX-XX--XX"};
    vector<string> problemTopics = {"---------X---X---", "---X---XX-XXXX--X", "-X----XX-XX------", "--X------------X-", "---X--X-X----X---", "----X---X-XX--X--", "------------X--X-", "-X--------X--XX--", "-X----X-------XXX", "-----------------", "---XX-------XX---", "-------X-----X---", "-----XX--X--X-XX-", "--X--X--XXX------", "-----X--XX----X--", "-X-XX---X----X---", "-X--X-X-----X----", "-X-------X-------", "----X--XX-X----X-", "--------X-X-X-XXX", "-X--X----X-------", "-X---X-X------XX-", "X---X--------X---", "X--X--X-----X----", "---X-------------", "------X---------X", "-----------X--XX-", "----------X---X-X", "--XX------X---X-X", "----------X---X--", "-------X-X----X--", "-----X-----X--X-X", "--X-X--X--XX-----", "-----X-XXXX-X----", "X------X---------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--XX--X--X---X--XXX-X-----------XX-", "---------X---XX------------X-XXX-X-", "X--X--X--X-X----------X--XXX-XX-X-X", "X---X----XXX---XXX--X-XXXX--------X", "---X--X--X-X----X----XX---X-------X", "X--XXXXX-XX----XXX--X-XXX-X--X-----", "X-XX--XXXXXXX---XX--XXXXXXXXXXXXX-X", "---------X------------------------X", "X----X---X-X-XX-------X--X-X-XXXXXX", "-X-XXXXXXXXX---XX-XX-X--XXXXXX-XX--", "----XX---X-X----------X-XX-XXX-XX-X", "XXXXX-X--X-X-X---X------XX-------X-", "X---X--X-X----X--X------X----X-----", "X--X--XX-XX-X---XX--X-XXX-X--X-----", "XXX-X-XXXX-X-----X-X---XXXXX-XX---X", "X---X----X-------X------XX---------", "XXX-XX-X-XXX-XXXXX--X-XXXX-XXXXXXXX", "X-X-X-X--XXX---XXXX-X-XXXX-------XX", "-X--XX---XXX------------XX-XXX-XX--", "----X-XXXX---------X----XXXX-X-X---", "X-XX---XXX-X-----X--X---XXXXXXX-X--", "X--X--XX-XXX-----X--XXX-X-XXXXXXX-X", "---X--XXXX-X-------X-X---X-X-X----X", "X-X-X----X-X---X-XX-X---XX---------", "X-X------X-X-X--XX--X-X---------XXX", "----X-X--XXX---XX-X---XXXX--------X", "X-X-XX-X-X-X-XXX-X--X-X-XX-XXXXXX-X", "XX--XX---XXX-XX-------XXXX-XXXXXXXX", "X-----X--XXXX---------XXXXXX-XXX--X", "---X--XX-XXX---------XX-X-XXXX-XX-X", "------X-XX------X------XXXX-------X", "XX---X-X-XXX-XXX-X--X-X-X--XXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X-X-X--X-X-X-XXX-X--X-X-XX-XXXX---X", "---X--X--X------XX--X--XXX---------", "X--------X-X--X--X------X-----XX--X", "---X--XX-XXX---X--XX-XX-X--XXX----X", "X-XXX-XXXXXX---XXXXXX-XXXX-XXXX---X", "X-XXX-XXXXXXXXXXXXXXXXXXXX-XXXX--XX", "X--X--X--X-------------------X-----", "X--XXX---X-X-XX---X---X-XXXXXXXXX-X", "X---X----X-X------------XX--------X", "---X--X--X--------------X---------X"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> attendance = {"XX", "X-", "X-", "-X", "XX", "XX", "XX", "-X", "-X", "--", "XX", "XX", "--", "X-", "XX", "XX", "X-", "X-", "XX", "X-", "XX", "XX", "-X", "X-", "XX", "XX", "XX", "-X", "XX", "X-", "XX", "XX", "XX", "--", "XX"};
    vector<string> problemTopics = {"--", "--", "-X", "X-", "--", "-X", "X-", "XX", "--", "--", "--", "--", "--", "--", "--", "--", "-X", "--", "-X", "X-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXXXXXXXXXXXXX", "XX-XX-X-XXXXXXXX-X-X", "XX-XX-X-XXXXXXXX-X-X", "XXX-XX--XXXXXXXXXXX-", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXX-XX--XXXXXXXXXXX-", "XXX-XX--XXXXXXXXXXX-", "XX--X---XXXXXXXX-X--", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XX--X---XXXXXXXX-X--", "XX-XX-X-XXXXXXXX-X-X", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XX-XX-X-XXXXXXXX-X-X", "XX-XX-X-XXXXXXXX-X-X", "XXXXXXXXXXXXXXXXXXXX", "XX-XX-X-XXXXXXXX-X-X", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXX-XX--XXXXXXXXXXX-", "XX-XX-X-XXXXXXXX-X-X", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXX-XX--XXXXXXXXXXX-", "XXXXXXXXXXXXXXXXXXXX", "XX-XX-X-XXXXXXXX-X-X", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XX--X---XXXXXXXX-X--", "XXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> attendance = {"XXXX-XXXXXXXXX-XXXXXX-X-XX-X", "-XXXX-XXXXXX-X-XX-XXXXXXXXXX", "-XXXXXXXX-XX--XXXXXXXXX-XX-X", "XXX-X-XXXX-XXXXX-XXXX-XXXX-X", "-XXXXXXXX-X-XX-XX-XXX-XXXXXX", "XXX-XXX-XX-X-XXX--XXXX-XXXXX", "XX--XXXX-XXXXX-X--XXXXXXX-X-", "-X-XXXX-XXXXXXXXXXXXX-XXX-XX", "X-XXXXXXXXXXX-XXXXXX--XXXXXX", "XXXXXXX-X-XXXXXXXXXXXXXXXXXX", "XXXXXX-XXX-XXXXX---X-XXXXXX-", "-X-XX--XXXXXXXXXXXXXX-XX-XXX", "XXXXXXXXX-XXXX-X-XXXXX--XXXX", "-XXXX-XXX-XXXX-XXXX-XXXXXX-X", "-XX-XXXXXXXX-XX-X--XXXXXX--X"};
    vector<string> problemTopics = {"----X-----------------X---XX", "--X---X---X------------X----", "----X-X----X----------------", "-XXX------X-X--X-----X---X-X", "-------X--X-X-X--X----X-X---", "--XX-----X----XX-----X---XXX", "---X-------------X---XX-X---"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-------", "XXX----", "--X---X", "--X----", "XX-----", "--X----", "--X----", "X-X----", "XXX-X--", "XXXX--X", "-------", "X------", "--XX---", "-XXX--X", "-XX----"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> attendance = {"XX-X--X-", "XXXXXXXX", "XXXX-XXX", "XXXXX-X-", "XXXXXXXX", "XXX-X-XX", "---XXX-X", "X--XXXXX", "XX-XX---", "XXXXX-XX", "XXXXXXX-", "X-XX-XXX", "XXX--XXX", "-X-XXXX-", "XXXXXXXX", "XXXXXX-X", "XX--XXXX", "XXXXXXX-", "-XX-XXXX", "X-X-X-XX", "XXXXXXX-", "XXX---XX", "XXXXXXXX", "XXXXXX-X", "X-XX-XXX", "X--XXX-X", "XXXXXX-X", "XXXXX-XX", "XXXXX-X-", "XXXXX-XX", "XXXX--XX", "-XXXXXX-", "XXX--X-X", "-XXXX-XX", "XXXXXXXX", "-XXXXX-X", "X--XX-XX", "XXXXXXXX", "-XXX-XXX", "XX-X-XXX"};
    vector<string> problemTopics = {"------X-", "-----XX-", "-----XX-", "-------X", "-X------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X---X", "XXXXX", "XXXXX", "X---X", "XXXXX", "X--XX", "---X-", "XXXX-", "----X", "X--XX", "XXX-X", "XXXX-", "XXXXX", "XXX-X", "XXXXX", "---XX", "XXXXX", "XXX-X", "XXXXX", "X--X-", "XXX-X", "X--XX", "XXXXX", "---XX", "XXXX-", "---X-", "---XX", "X--XX", "X---X", "X--XX", "X--XX", "XXX-X", "---XX", "X--XX", "XXXXX", "---XX", "X--X-", "XXXXX", "XXXXX", "XXXXX"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> attendance = {"XX-XXX-XX----", "XXXXXXXXX-XXX", "XXXXXXX-XXXX-", "--XXXXXXXXXXX", "XXXXXXX-XXXXX", "--X-XXXX--X--", "-XXXXXXXXX-XX", "XXXXXXXXXX-XX", "XXXXXXXX-XXXX", "-X-XXXXXXXXXX", "XXXXXXXXXXXXX", "XXXXXX-XX--XX", "X-XXX-XXX----", "-XXXX-XX-XXXX", "-XXXX-XXXXXXX", "-X-XXXXXXX-XX", "XXXXXX-X-X--X", "--XXXX-XXXXX-", "X-X-XXXX-XXXX", "X-XX-XXXXXXXX", "XXXXXXXXXX-XX", "X-XXXXXXX-XX-", "-XX-XXXXXXXXX", "--XXX-X-X-XX-", "XXXXX-XXX--XX", "X-XXXXX-XXX-X", "--XXXXXXXXXXX", "-X--X-XXXXXXX", "X-X---XXXXX--", "XXX-XXX--X-XX", "XXX--XXXXXX-X", "XXXXXXXXXXX--"};
    vector<string> problemTopics = {"X-XX-----X--X", "--X--------X-", "-X-X--X--X---", "--XX---------", "--------X----", "-XX----------", "X-XX-X-------", "X-------X----", "X------------", "X------X--XX-", "X---X--------", "X-X-----XXX--", "X--------X-X-", "--X------X---", "--X--X-----X-", "------------X", "XXX-X------X-", "---X-X-X-----", "X---------X--", "-------X-----"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"----X--XX-X------X-X", "-X-XXXXXXXX---XXXXXX", "-XXXXXXXX-XXXXX-X-X-", "-X-XX--------XXX-X-X", "XXXXXXXXX-XXXXXXX-X-", "-------------------X", "-XXXXX-------XXX-X-X", "XXXXXXXXX-X-XXXXXX-X", "XXXX-XX-XXX-XXXXXXXX", "--X-X----------X-X-X", "XXXXXXXXXXXXXXXXXXXX", "-X-XXXXXX-X---XXXX-X", "---XX--XX-X--------X", "-XXX-X-------X-X---X", "-XXXXX-------X-X---X", "--X-X----------X-X-X", "X--X-XX-X-X--X-X-X-X", "-X-XX--------XX--X-X", "-X------XXX-XXXX--XX", "XX-XX-XXXX-XXXXX-XXX", "XXXXXXXXX-X-XXXXXX-X", "-X-XX-XXXXX---X--XXX", "-X--XX-------XXX---X", "-X-XX---------------", "-X-XXX-XX-X----XX--X", "X--XX-XXX-XX-X-X--X-", "-X-XX--------XXX-X-X", "----X----------X---X", "----X--XX--X-X----XX", "-X---X--X-X-XXXXX---", "----XX-XX--X-X-X--XX", "--XXXXXXX-XX-X---XXX"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> attendance = {"-XXXXXXXX-XXXX-X-X-XXX-XX--X-X-XXXX-XXXX-XXX-XXXXX", "XX-X-XXXXXX--X--X-X-XXXXX-X--XXXX-XXX-XX----X-XXXX", "-XXXXXXXXX-XXXXXXX-XX--XX-X-XXXXXX-XXX-XXXX--XXXXX", "XXXXXXXXXX-X-XXX-XXX-X-XXXXXX-XX-XXXXXXXXXX-XX-XXX", "XXXXXX-XXXXX--XXXXXXXXX-XXXXXXXXXX-XXX-X-XXX-XXXXX"};
    vector<string> problemTopics = {"-X-----X---------X--------X------------X----X-X-X-", "----------X------X-X---------X--X---X----X--X--X--", "-X----XX--X-------XX------------X------------X----", "-------X------------X-X-----------------X-X--XX-X-", "-X--X------X----X--X---------XXX-------X--------XX", "------X---X-----X-------X-XX-X-------XX-------X---", "X------X--------------X----X--XX-X-X--X--X--------", "------X----X---X-----X-----X-----X----X-X----XX---", "-X----------------XX---X----X----XX--------X----X-", "-----X--------X---------X-X-X------XX-XX-----X-X--", "---X-X------X---X-X------XX-X--------------XX-----", "X------X---X-------X-------X--X----X----XX---X----", "--X-XX----XX------X------XX-X---X------X---X---X--", "-------X---X---XX-XXX----X-----X--X---------------", "-X--X----XXX--XXXX----X--X--X---------X----X---X-X", "--X------------X-----X---X-XX-X-------X------X----", "X----X----------X-----------X----X-X-X----X-------", "-----------X----X------X---------------X----------", "X----------X------X-----XXXX---X-X---XXX--X-X-----", "---X-----X-X----X-----X----X----X----X-------X---X", "-X-------XXXXX----X----------XX----X---X---XX--X--", "-X-X---X------X-X--X---X-X-X-X--XX----X--X-----X--", "X-XX-X--------X---XXX------------X--X-------------", "-----------XX----X----XX-------X------X-----------", "--X------------X-X-----XX-------X-X----X-X-X---X--", "XXX--------------------------------X-XX-X-X-X-X---", "---X---------X-----X-------X-----XX-----X--X-X--X-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"------------------------X--", "---------------------------", "----X------------X---------", "---------X-X---X--X--------", "----X-------X---X--X--X----"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> attendance = {"-XX-XXX---XXXX-X--XX-X-XXX----X-XX-X-X-", "-XXX--XXX----XX--X-X-XXX-X------X--XXX-", "-XXXX-XX-XX--X--XXXXXXXXXXXX-X-X--XX-XX", "--XXXX----X------X-X----XX-XX-X--XXXX-X", "X-XX----X--X-X-XX-XX-X--XXX-X-XXX-X---X", "--XXXX-XX--X--X---XXXX---X-X-XXX--X-X--", "-X--XX-X-X---XXXXXXXX----XX----X-X-XX--", "----XX-XX-XX-----XX---X-X--XX-X-X-XXX-X", "-XX---XXXX-X-X-XXX---XXX--XX-X-XXXXXXX-", "XX--X--XX---X-X---X-------XX-X-----XX-X", "---X---XXXXXX--XXX-X--XX---XX---XX--XXX", "XXX----XX-XXX-XXXX--X--XX-XX-X---X---X-", "----XXXX-XX---X---XXXX---X-XX--X----XX-", "---XX-XX-XX-X-X-----XX---X-XX-XXX--X--X", "-XXX---XXX-XXX--XX----XXX----XX--XX---X", "--XXXX-XXXXX--X--X------X-X--XXX-XX-X-X", "-X-XX---X----X-XXXXX---XX--------X--XXX", "----XXXXXXX--XX--XXXXXX-XXXX-----XX-XXX", "-XXXX-XXXX-X-XX-----X-XX-XXX--XX--X-XX-", "XXX-XXXXX---X----X--XX-X-XX--X-X-XXX---", "----X--XXXXX---X--XXXX-XX-XXXX-X-------", "----X--XXXXXX-XX----XX---XX-XXXX-------", "XXXXX---XX-----X----X-X--X-X-XXX----XXX", "X-XX-XXXX---X-XXXXX-X--X--X--XX------X-", "X----XXXXX------X--XXX-X---X-X-XX--XXX-", "X--X-X-X---X-XXXXX-XX--X-----XXX-XXX---", "XXX-XXXX--X----X-X--XX-XX-XXX-X-X--XX--", "XXX-XXXXXX---XXXXXXX----X--XX-X---XX--X", "X------X-X-X--XX--XX--X-XX-----XXXX-XXX", "X---X--X--XXXX-X--X--X--XXXX-X-X-X-XXX-", "-XX------X-X-X-X-XX-X-X-XXXXXXX-----X-X", "XX----XXX-X--XX---XX-X-X---X-X----XXX--"};
    vector<string> problemTopics = {"--------------------X-----------------X", "------------------X--------------------", "-----X------X--------------------X-----", "-----X----------------------X----------", "---------------------------------------", "-X--X--------X------------------------X", "---------------------------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-XX-X-X", "----X-X", "XX--XXX", "---XX-X", "-X--X-X", "-X--X-X", "-X--X-X", "-X-XX-X", "----X-X", "-X--X-X", "----X-X", "----X-X", "-X-XX-X", "X---X-X", "----X-X", "----X-X", "-X--XXX", "XX--X-X", "----X-X", "--X-X-X", "-X--X-X", "----X-X", "X---X-X", "-X--X-X", "----X-X", "----X-X", "---XX-X", "-X-XXXX", "-X--X-X", "-X--X-X", "XX--X-X", "-X--X-X"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> attendance = {"-X-XXX---XXXXX--XXXXX-", "--XXX----X--X--X---X--", "X-X-XXXXXX---X--XXX---", "X-XX-XX-XXXXXX-X---XXX", "-XX-XXXXX--X---X-X----", "-X-XX-XXXX----XX-XXXX-", "X--XX-X---X---X-X-X---", "--X--X-XXXX---XXX-XX-X", "---XX--XX--X-XX--X---X", "-X--------XXX-X--X--XX", "X-XXXXXXX---X--X--X-XX", "XX---X--XX--XXX-XXXX-X", "X---X---X-XX-XX-XXX-XX", "XX--XXXX---XXX-XX----X", "--XX-X-----------XXXX-", "X--XXX---XX----XXXX--X", "X-X-X--X-XXX-X--XXX-XX", "-X-XXX----XX-XXXX---X-", "XXXX--XXXXX-X----X--XX", "X--X--XXX-XX--XXX--X--", "--X----XX-XX-XXXX-----", "----XXXX-XXXX-----X-X-", "-X-X--XXX-X--X---XXXX-", "------XXXX-XX-X-XX-XXX", "---XX--X-----X-----X-X", "----XX-XXXX----XXX-X-X", "XXX-XXXX-XX-XXX-----XX", "X--XXX-XX--XXXXXX-X---", "-XX--X-XXXX--X---XX-X-", "X-X-XXXX--XX--X--X-XX-", "X--X-X--X---XX---X-X-X", "-XXX-XXX-X---X----X-X-", "XXXX-XX-XXX--XXXXXXXX-", "X--X--X-X-X----XXX---X", "X-XXXX-X-XXXXX-------X", "XX---XXXXX--X--X-XX--X"};
    vector<string> problemTopics = {"X--X-X----------------", "---X--X-X----X--------", "--------------------X-", "-------------X---X----", "------------X---------", "--------X---------XX-X", "-X-X---X--------------", "----------------------", "----------------------", "------------X---------", "----------------------", "----------------------", "-----------------X----", "----------------------", "---X------X-----------", "----------------------", "-------------------X--", "--X-------------------", "----------------------", "-X--------------------", "--X--------------X----", "-----X----------------", "---X------------------", "--------------X-------", "-----------X-------X--", "-----X--X-------------", "----------------------", "----------------------", "----------------------", "----------------------", "----------------------", "---------X----------X-", "---X-------------X----", "--------------X-----X-", "----------------------", "----X-----------------", "----------------------", "--X-------------------", "-------------X--------", "-X--------------------", "--------X-------------", "----------------------", "--XX-X----------------", "----------X-----------", "--X-------------------", "----X-----------------", "--------------------X-", "-------X-----------X--", "------X---------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--XXX--XXXXXXXXXX-XX-XX-X-XXXXXXX-XXX-XX-X-X-XX--", "----X--XXXXX-X-XXXX---X---XXXXX---XXXX---X--XX---", "---X---XX-XXXX-X-XX-XX---XXXXXX---XXXXX-XX--XX--X", "XXX-X--XXXXX-XXXXXX--XX-XXXXXXXX--X-XXX-XXXXX-X-X", "-------XX-XXXX-X-XXXXX---XXXXXX---XXXX-XXX--XX--X", "--X---XXX-XXXX-XX-XX--XX--XXXXXXXXXXX--XXX---XXXX", "-------XX-XX-XXX--X---XX--XXXXX---XXX----X-X-X--X", "-----X-XX-XX-X-XXXX--X-X-XXXXXX---X-XX--XX-XX--X-", "---X---XX-XXXX-X--X---XX--XXXXX-X-XXX-X-XX---X---", "--X-X--XXXXXXX-X--XX---X--XXXXX--XX-X--X-X-X--X--", "X-X-X--XXXXX-X-X-XX--XX--XXXXXX---XXXX--XXX-XXX-X", "---XXX-XXXXXXX-XX-XX-X-X-XXXXXX---X-X-XXXX-------", "--XX---XX-XXXX-X--X----X--XXXXX--XXXX-X-XX-X-XX--", "----X--XXXXX-X-X--XX-X----XXXXX---XXX-XX-X---X--X", "--X----XX-XXXX-XXXX-XXX---XXXXX-X-X-XX---XX-X-X--", "X------XX-XXXXXX--X--XX---XXXXX-X-XXX----X-X-X---", "--XX---XX-XXXX-X-XX-X-----XXXXXX--XXXXX--X-XXXX--", "--X----XX-XX-XXX--XX-XXX--XXXXX--XXXX-XX-X-X-XX--", "--X-X-XXXXXXXXXX-XXXX-X---XXXXXXX-X-XX-XXX-XX-X-X", "-------XX-XX-XXXX-X---XXX-XXXXX---X-X---XX-X---XX", "-------XX-XX-X-X-XX----X--XXXXX---X-XXX-XX-XX----", "--X-X--XXXXX-X-X--X--X----XXXXXX--XXX----X-X-XX-X", "-XXX--XXX-XXXXXXX-XX--X---XXXXX-X-X-X-XXXX-X--XXX", "--X-X--XXXXXXX-XX-X----XX-XXXXXX-XX-X---XX----XXX", "-------XX-XX-X-XX-X---X---XXXXX---XXX-X--X---X-X-", "-------XX-XXXX-XX-X--X---XXXXXX---XXX---XX-X-X-X-", "--X-X--XXXXX-X-X-XXX-X-X--XXXXXX-XXXXXXX-X-XXXX-X", "X---X--XXXXX-X-X--X--XXX-XXXXXX---XXX-X-XX---X---", "--XX---XX-XXXX-X-XXXXX---XXXXXXX--X-XXXXXX-XX-X--", "--X----XX-XXXX-XXXX-XX-XX-XXXXX--XXXXX---X-XXXXXX", "X--XX--XXXXXXX-XX-X--XX--XXXXXX-X-X-X-X-XX-------", "--X---XXX-XX-X-X-XXX-XX---XXXXXX--X-XXXX-XX-X-X-X", "XXXX---XX-XXXXXXXXXXXXXX-XXXXXXXXXX-XXXXXXXXX-X-X", "-------XX-XXXXXX--X---X---XXXXX-X-X-X---XX-X----X", "X---X--XXXXX-XXX-XX--XX---XXXXX---XXXXX--XXXXX---", "----X--XXXXXXX-X--XX-X---XXXXXX---X-X--XXX------X"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> attendance = {"XXXX-X--X-X-X-XX---X--X-XX", "XXX-X--X---X--XX--X---X-XX", "-X-----------X---XX-X----X", "-XX--XX-X--X---------XX---", "X-XX-----XX--XXXX-X-X----X", "-XX-XXX-X--X-XX---XXXX---X", "--X--X-X-XXXXX--XXX----XX-", "X-X-X-X-X--XXXXX-XX-X----X", "X--X-XX-XX-X-XXX-X---X--X-", "---X-----XXXXXX-X-X--X-X-X", "-X-XX-XX--XXX-XXXXX-----XX", "-XXX----XX----XX----X-XX--", "--X-X---XX-XX-XX--X-X-XX--", "--X--X-XX------XXXX-XXXX--", "-XXX--XXX--X-XXX-XXX-----X", "XXXX--XX--------XXXXXX---X", "XX-XX--XXX--------X--XX-XX", "XX-X-X---X--X----X-X-X-X-X", "---X-XX--XXXX-XXX-X---XX--", "XXXXX--X-XX-XX-XX-X-X-XXX-", "XXX-XX--X--XXX-XXXXXX---XX", "X----X--XXX-X--X-XXX-X-XXX", "-X-X----X-X------X--X--XX-"};
    vector<string> problemTopics = {"--X---------------X-------", "-----------------X--------", "-----------------------X--", "------------------------X-", "--------X--X------X----X--", "--------------------------", "------------X-------------", "--------------------------", "X---------X---------------", "---X----------------------", "--------------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---X-XXXXXX", "X--X-X-X--X", "-X---X-X--X", "-----X-X--X", "X----X-XXXX", "X----X-X--X", "XXXX-XXX--X", "XX---XXX--X", "-X-X-X-X-XX", "--X--XXX-XX", "-X-X-XXX-XX", "--X--X-X-XX", "X-X-XXXX--X", "XXX--X-X--X", "XX---X-X-XX", "XX---X-X-XX", "---X-X-X-XX", "-XX--XXX-XX", "--X--XXX-XX", "X-XX-XXXXXX", "XX-X-XXX--X", "-XXX-XXXX-X", "-XXX-X-X-XX"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> attendance = {"-X---XXXXX-X----XX-X-XXXX-X-XXXXXX-XX-X--X-XX--", "X----X-X-X----XX-X----XX--XXXX--XX--X----X-----", "XX-X-XX--X--X-X-XXX-X-X--XX-X--XX--X--XXX--XXXX", "X------X--X--X-X--XX-X--X-X--X-----XX--XX-X----", "-XX--XXXXX-XX--XXXXX----X-X--X--XX-XXXXX-X---XX", "XX----XX-X--XX-X-X--X-X-XXX--X----X-XX--XX--X-X", "XXX-X-X-XX----------XXX-XXXX--X--XX--X-XXXXXXXX", "-XX-XXX--XXXXX----X-X-X-XXXXXXX-------XXXX-XX-X", "--XX----X-X----X-X-X----XXX---XXXXX---X-----X-X", "XXXXXXX--X--XXXXX-X--XX--XX-X---XX-XXXXX-XXX---", "X----X----X--XXX--XXX--XXX-X-XX--XXX---X--XX-X-", "-XX--XXXX-X-X-XXXXXX--XXXXXXXX----X-XXXX-X-X-XX", "-XX--XXX---XXXX----XXX----XX-XXX--X-X-X---XX-X-", "XXXXX---X-X----X-XX-X-X---X-X-X-XX---X-X----X--", "X--X-X-X-X-XXXX----X--XX-X-X-XX-XX----X-XX-XXX-", "--XXXX-XXX---XX-X----XX-X-X-XX---X------X-X-XXX", "XX-X---X-XX--X-X--X----XX-X-X-X--XXXXX--XX--XXX", "X-XXXXX---X-XX-X--XXX--XX---X------XX--XXX--X-X", "X-XX-XXXXXX--XXX---XXXX--X-XXX--X--XXX---X-X-X-", "-XXX--XX------XX-XX--X-X--X--XX--------X-X-X-X-", "XXXXX--X-----X-XXXXX--X-XXX--X-X-XXX-X-X-XXX-X-"};
    vector<string> problemTopics = {"X------------------------------X--------X------", "----------------------------X-------X----------", "--X--------------------X-----X----------------X", "----X---------X---------------X------------X---", "---------------------X-------------X-----------", "--------------------------X--------------------", "--------------X-X--X----X------------X---------", "-----X-----------X-----------------------------", "-----------------------------------X-----------", "--X-X--X--XX-----------------------X--X--------", "---------------X------------X----------X-------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X--XX-XX--", "-X---X-X---", "X----X-XX--", "----XX--X--", "-----X-XX--", "-----X-----", "-----X-----", "-----X-----", "-----X-----", "-X--XX--X-X", "--------X--", "-XX--XXX--X", "-----X-----", "-----X----X", "-----------", "-----X-----", "-X---X--X--", "-X------X-X", "-X--X---X--", "-----X-----", "-----X--X--"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> attendance = {"X-X---X----XX-X----XXX---X---XX----X-X-X-XXX--XX--", "XXX-XXXX-X-XXX-XXX--XXXX-XXXX---X-XXX-XX-X------X-", "--X---X-X-X-XXXX-X-XX-----XX-XX-XXXXXX-XXXXX-X--X-", "XXXX-XXXX-X--X--XX----X-----XXXXXX---XXXX-XX--X-XX", "X------X-X-XXX--X-XXXX-----X-X---XXXXXXX-X-X-X----", "X-X-X--X-X-X---X--X-X-------XX--X-X---X--X-XXXX--X", "X-----X---XXXXX--X-XXXXXXX-X---XX-XX-X-XXXX--XXXXX", "XX-------X---XXXXXXXX--XXXXX-XXXXXX-X----X--X--X-X", "X-X---XXXX-X-X-XXXXXX--XXX---X---X-X-XX--XX-XXX--X", "XX-XX--X-X--XX-XX-X-X-X-XXX--X--X-XXXX-X-XX-X---X-", "--XXXX-XX-X-X-XXXX---XXX-XXX-XXX--X-XXXX-X---XXX-X", "XXX----X-XXX--XX-XXX-X-----X--X--X----X-XX--XX-XX-", "-X--X-X---XXX---X-X-XX--XX-XX---XXX--X-X--X------X", "--X-X--X-XXXX-X-------XXXXX--XXXX--X---X--X--X---X", "--XXX-X-XX-X--X------XX-X-X--XXXXX-XX------X-XX---", "X-XXXX---XX-XXXXX--X-X-XX-X--XX--X-XXXXX-X---X-XX-", "X-XXXXX-XX----XX-XX----X--XX-XXXXX-X--X--XX----X--", "-XXXXXXXXX--X-X--XX-X-X-XX-XX-XX--X-XX---X---X-XX-", "-XX--X---XXXXXX-X--X-X--X---X-XX-XX--XXX-X-XXX-X-X", "-X---XX-X-X---XXXX---X-XXX-X-X-X--XX-X-XX-X-X-XX-X", "--X--X-X-X-XXXX-X-XXX--XXXX--X----X--X--X-X--X-XX-", "----XXXX--XXX--XX-X-XXX-XX---X-X-XX------X-----XX-", "XXX-X---X---X--X----XX-X-XXX-X-XXXX-XX----XXX----X", "---X---XX-XX--XX---X-XXX-XXX--X-XXX-----X--XX-XXX-", "-X--XX-XXX--XXX-XX--XX-X-XXX-XX-XX-X-X--X--X-X----", "XX--X-X-----X-XX-XXX-XX-X--X-XX------XXX---XX--XXX", "X--XXXXX-X--X---XX-XX-XXX--X--XXX--X----X--X---XXX", "-XX-X----XX-XXXX---XXXX--X-XXXXXXXXX---XXXX-------", "-XX-X---XX-X-X-XXXX----XXXX-XXXXX--XX-XX-XXX-X-XX-", "-XXXX---XXXXXX--X----X--X---XX-XX-XXXX-XX--XXXXX-X", "X--------X-XX-X----X---X--XX-XX-XXX--XXX-XXX--X-XX", "XX-----XXX-X-X-XXX-XX-XX-X---X--X--X--XXXXXXXX-XX-", "-XX---XXXXX-X-X--X-X-X---------XX-XX-XXX-X--XX-XXX", "-XXX-X----X--X-XXXXX-X---X-XXXX--X----XXX---X-X-X-", "X-XXXX-XX-----XX--XXXXX----XX--------XXX-XXXX-X--X", "X--X---XX-----X---XX----X-X--XX----XXX--X-XXX--X-X", "---X---X-X--X-XX-X-XX-X-X--X-X--XX---X--XX----X-XX", "X-XXX-X-X--XX--XX-----XX-XXXXXXX---XXXX---X-XXXXX-", "-XXXXX-XX-X--XX-X--XX--XXX-XXXX-X-X---X--X-X-XXX-X", "XX-X---XXXX--X--XX-X--XXX---X--X-XX-XXX-XXX--XX---", "XXX-XX-XXXX--XX-----X--X-----X----XX--X---XX-XXXX-", "X---XX--XXX-X-----X-X--XX--X--X-XXX--XXXXXXX-XXX-X", "--X-XX---X--XX---XXX-X-X--X-XXX------X-X--XXX-X---", "X---X--X--X---XXX--XX---X-XX--XXXX--XXXX----XX--XX", "-X----X-XX--XXXX-X-XXXXX---X-XXXXX-XXX----XX--XXX-"};
    vector<string> problemTopics = {"--------------------------------------------------", "-----X----------------------------------------X---", "--------------------------X---X-------------------", "-----------------------------------------X--------", "---------------X----------------------------------", "---X---------XX-----------X-----------------------", "-----------------X-----------------------X--------", "---------------------XX-----------------X---------", "---------X-------------------X--------------------", "-----X-X------------------------------------------", "-----------------------------------X--------------", "---X--------------------X------------X---X--------", "------------------------------------X--X--X-------", "-------------X-------------X-------------X--------", "--X-----------X---------------------------X-------", "-------------------------------------------------X", "------------X-------------------------------------", "-----------------------------X------------------X-", "---X----------------------------------------------", "------------------X-------------------------------", "--X---------X-------------------------X-----------", "-XX-X-----------------X--------------X------------", "--X---------------XX----X--X-X----------------X---", "---X-------------------X------X--------X----------", "----X------------X-----X--------------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X--X------X---X-X--------", "X--XX-X--XX--X--X---X---X", "X-XXX-X---X-XXX-XX-------", "XX-------X-----X-XX------", "X--X----X-X--X--X--X-----", "X--XX---X------X---X-----", "X--X--XX--X--X-XX--------", "X-XXX-X-X----X-X---X-----", "X--XX-X-X-X----X---X-----", "X--XX---X-XXX---XXXX-----", "XXXXX-X--X-----XX-X-X--XX", "X--XX-X------------X-----", "X--------------XX--X-----", "X-X-----X-X---XXX--------", "X-X-----X-X-------X------", "X-XXXX--X-XX----XXX-X--X-", "X-XXX-X-X-X---X---XX----X", "X--X--X--X-X----X-XX-X---", "X--X-----------XX---X----", "XX--X-----X----X---------", "X-------XX----X-XX-X-----", "X--XX----X------XX-X-----", "X---X----------XX--------", "X-X-X--X----------X------", "X-X-----XXX-----X-------X", "X---X----------XXX-X-----", "X--------XX----XX-X-----X", "X--XX--XX-X--XX-X--------", "X-XXX-X-X-X-X----X-X----X", "X-------X-X----XX-X------", "X-XX----X------XXX-------", "X--XX-X-X-X------X-------", "X--X--X---X----XX---X----", "XX--X------------XXX-----", "XX-XX----X----XX--XX-----", "X-X-------X----X--XX-----", "X--XX-X-X--X---XXXX------", "X-X-X-----X-----XXX-X----", "XX-X-----X---X-X--X------", "X--X--X----X------X------", "XX------XXX---X--X-------", "XX-X-----------XX--X-----", "XXX-----X-------X--X----X", "X-X-X----------X---------", "X---X---X-X-----XX-------"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> attendance = {"---X--XXXXX", "-X-X-XX-XXX", "-X-XXX-X-X-", "--X-X-X-X--", "-XXX---X--X", "XX--XX-XXX-", "--X-XXX--XX", "XX--XX--XXX", "---X--XX-XX", "XX--X---X--", "---X--XXX--", "XX--X--XX-X", "--X---XXX--", "XX--X-X-X-X", "--XXX-XXX--", "XXX-XX-----", "---X---XX--", "--XX-XX--XX", "XXX-X--XX--", "--XXX-X-XXX", "X--X-XXX-XX", "X-XXX----XX", "X-XXXX--XX-", "-XXXX--X-XX"};
    vector<string> problemTopics = {"-----------", "-------X---", "-----------", "-----------", "-----------", "-----------", "-----------", "-------X---", "-----------", "-----------", "-----------", "-----X-----", "-----------", "-----------", "----X------", "-----------", "-----------", "------X----", "--X--------", "-----------", "-----------", "X----------", "-----------", "X----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "----X------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXXXX-XX-XXX-XX-X-XXXXXXX-", "X-XXXXX-XXXXXX-XXX-XX-X-XXXXXXX-", "XXXXXXXXXXXXXXXXX--XX-X-XXXXXXXX", "X-XXXXX-XXX-XXXXXXXXX-X-XXXXXXXX", "XXXXXXXXXXX-XX-XX-XXX-X-XXXXXXX-", "XXXXXXXXXXXXXXXXX--XXXXXXXXXXXXX", "X-XXXXX-XXXXXXXXXXXXX-X-XXXXXXXX", "X-XXXXX-XXXXXXXXX--XXXXXXXXXXXXX", "XXXXXXXXXXX-XX-XXX-XX-X-XXXXXXX-", "X-XXXXX-XXX-XXXXX--XXXXXXXXXXXXX", "XXXXXXXXXXX-XX-XXX-XX-X-XXXXXXX-", "XXXXXXXXXXX-XXXXX--XXXXXXXXXXXXX", "XXXXXXXXXXX-XX-XXXXXX-X-XXXXXXX-", "X-XXXXX-XXX-XXXXXX-XXXXXXXXXXXXX", "XXXXXXXXXXX-XXXXXXXXX-X-XXXXXXXX", "X-XXXXX-XXXXXXXXX-XXXXXXXXXXXXXX", "XXXXXXXXXXX-XX-XX--XX-X-XXXXXXX-", "X-XXXXX-XXXXXX-XXXXXX-X-XXXXXXX-", "XXXXXXXXXXX-XXXXX-XXXXXXXXXXXXXX", "X-XXXXX-XXX-XXXXXXXXX-X-XXXXXXXX", "XXXXXXXXXXXXXX-XXX-XXXXXXXXXXXX-", "X-XXXXX-XXX-XXXXX-XXXXXXXXXXXXXX", "X-XXXXX-XXXXXXXXX-XXXXXXXXXXXXXX", "XXXXXXXXXXX-XXXXX-XXX-X-XXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> attendance = {"X--X-XXXXXX--X---XX--XX------XXX--X--X--XX-", "-XXX-X--X-X--XX-XX--X-X---X--X-X--X--X---XX", "XX---X-XX---XX-XXXXX-XXX-X--X-XXX---XXX-X-X", "-X-XXX-X-XXXX-XXXX-X-X-XXX---XX--X------XX-", "---X--X-----XX-X-X-XXXXX---X-X-XX-XXX-XX-X-", "XX-XX---XXX--XXXX-XX-X-----X--X--XXX-----X-", "-XX-XXXX-X-X--X-XXXX--X---XXXX-X-XXX-X-XX-X", "XXX-XXXXX--XXX-XX--X---XXXXXX-XXX-XX-XX--X-", "X--X--X-XXX---XXXX-X--X-XXX-------XXXXX-X-X", "---XXX--XX-X-X-X-XX----X-X-XX---XX-X-XXX--X", "X-X-XXX----X------X-XX---XXX-X-XX-----XXX-X", "XX-----X-XXX-X-XXX--XXX-XX--XX-X-X-XXX---X-", "-XXX-XXXXXXXX--X-XX-XX-X-XX-X-XXXXXX-XX-XX-"};
    vector<string> problemTopics = {"XXXX------------------XX------------X------", "----------X---X------------------XX-----X--", "------------X------------X-----X-----------", "--------------------X----X--------X--------", "------------------X----X-------------------", "-------------X----------------------------X", "--------------------------------------X----", "--------------X------X----------X----X-----", "--------------------X-----X----------------", "--------------------------------X----------", "-------------------------------------------", "-----------------------------X--X------X---", "------------------------------------X------", "-------X-------X------------------------X--", "-------------------------------------------", "-X------X----------------X-----------------", "--X--------------------X-X-----------------", "----X------------------------X-------------", "--X----X--------------------------------X--", "---X------------X------X-------------------", "---X-------------------------X---------X---", "-----X----X---X--X----------------X--------", "X----------------------X-------------------", "-----X---------------------X---------------", "X--------------------------------------X---", "-----------------------X-------------------", "-----------X-----X------X------------------", "----------------------X------------XX------", "----------------------X------X-----------X-", "-----------------------X-------------------", "------------------X------------------------", "------X------------------------------------", "----------------------------------------X--", "------------------------------------X------", "----------------X----------X----X----------", "-------------X-------------X---------------", "-----X---------------XX----X---------------", "------X----------------------X-----------X-", "--X------X--X--X---------------------------", "-------XX----------------------------------", "-------X---------------------------XX------", "-------------------------------------X-----", "-----X------------X------------------------", "X-----X--------------------------X-------X-", "-----X-------------------------X------X----", "X---------X----------X------------X--------", "-------X----X------------------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"----------X---X-------------X-XXX----X-X-XX--X-", "-----X--X-X---X------X------X------------X-----", "--X-XXX--XX-XXXX------X--X---XX-XX-----X-XX-X-X", "----------X--XX--X-X-----XX--X--X-------------X", "------X--XXXX-X-----X----X-XXX-X-X-X-X---------", "----------X---X---------------X----X---------X-", "----------X---X--XX----X------XXX--------XX----", "--X---X--XX---XXX-----XX-X---X-X--XX---X-X--X-X", "------X---X-X-X------------X---XXX-------X-----", "----XXX--XX---X--------X-X---XX----X-----XX----", "------X-XXXX--X--X-----XX-----XXX---------X-X--", "----------X-X-X-----------XXX----X------XX-----", "--XXX-X-XXX--XXXX-X------X---XXXX-----XX-XX-X-X"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> attendance = {"XX----X-X---------X--X---", "-------X--XX---X--XXXX--X", "-XXX-X---XXX------X-X--XX", "-X-X----XX------X---XX--X", "X-XXX----X----XXX-X-X--XX", "---XXXX---XXXX-XX--X--X--", "-XXXXX----X-XXXXX-X--XXXX", "X-X--X---X--XX--XX-X--X--"};
    vector<string> problemTopics = {"-------------------X-----", "-------------------------", "-------------------------", "-------------------X-----", "----------X-----------X--"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-XX--", "XXXX-", "-XX--", "-XX--", "-XX--", "XXXXX", "-XX-X", "XXXX-"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> attendance = {"X----XXXX-XX---X-X-X--", "--XXXXXX--X-XXXX---X-X", "-X-XXX-X-XX-X-X---XX-X", "-X---XXXXXXX--X--XX-XX", "--XX-XXXXX-XX---X-X-XX", "XX---XX-XX---X-X-XXXX-", "X-X-----XX-XX-X--XX---", "XX---X-X-XX----XX-XX--", "XXX-X-X-XX--XXXX-X-X-X", "XXXX----X----XX------X", "X--X-XXXXXXX-XXXX---X-", "XX---X--XXX-XXX-XX-XX-", "XX-XXX--X--X---X-XXX-X", "X-X-X--X-XX-X-X-X---XX", "-XX--XXXXXX-----X-XX-X", "X------------X--XX---X", "-X-XX-XX-X--X-X-XX-XX-", "XX--X-XXX-----X--XX-XX", "---XX--X---XX-XX--X--X", "--XX---X-XX-XX--XXX-X-", "XX---XX--X----------X-", "-X--XX---XX---X-XX----", "---X-XX--XXXX-XXXX-XX-", "XX-XX-XXXXXXX--XXXX---", "-X-X-XX-X--X-XX----XX-", "--X-X--XX----X-XXXXX-X", "X-X-X-XX--X--XXXX--XXX", "XX---XX-X--X-----XXX-X", "---XXXX-XXXXX-XX--X-X-", "XX-X--XX--XX-XXXX----X", "X---X-X-XXXX-X-X-XXX--", "X---XX-XX-XX-X----XXX-", "-XX-XX-XXX--X-X-XXX--X", "XX-----X-X-X--X-XXXXX-", "-X-XX--X-X-X-XXX-----X", "X------X-XXXXX-X-XXXXX", "XX-X--X-XX--X---X-XXX-", "-X--XX---XX-XXX-X---X-", "-X-XXX-X-XXXXXXX-X--X-", "X-X-----X-XXXXX--XXX-X", "-XX--XXXX--XX-XX-X---X", "-X-X-----XXX-X-XXX-X--"};
    vector<string> problemTopics = {"-----------X--X---X---", "----------------------", "----------------------", "----------------------", "-----------------X----", "---------X------------", "---X------------------", "------XX--------------", "----------------------", "----------------------", "---------XX----X------", "-------------X--------", "----------------------", "--------X-------------", "----------------X-----", "------------X-------X-", "----------------X-----", "----------------------", "X-------------XX------", "---------------------X", "-----------X----------", "----------------------", "----------------------", "---------X------------", "------------X----X----", "----------------------", "--------X--X----X-----", "----------------------", "---XX----XX--------X--"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-XXXX--XXX--XX---X--XXX--X-X-", "-XXX--XXXX-XX----X-X-XX--X-X-", "-XXX-XX-XX--X----X-X-XXX-X-XX", "XXXXXX-XXX--XX---X-XXXXX-X-X-", "-XXX-XXXXX--XXXXXX-XXXXX-XXX-", "-XXXXX--XX-XXX---X---XXX-X-X-", "XXXXXX--XX--XX---X--XXXXXX-X-", "-XXX-X--XXX-X-X-XX---XXX-X-X-", "-XXXXX--XX-XXX---XXX-XXXXX-X-", "-XXX--X-XX-XXX---X-X-XX--X-X-", "-XXX-XXXXXXXXXX-XXX-XXXX-XXX-", "-XXXXX--XX-XXXXXXX---XXXXX-X-", "-XXXX-X-XX--XX---X-XXXX--X-X-", "-XXX-X--XX--X-XXXX-X-XXX-X-X-", "-XXX-X-XXX--XXX-XX-X-XXX-X-X-", "-XXXX---XX-XX-X-XX-X-XX--X-X-", "-XXXXXXXXX--X-XXXX---XXXXX-X-", "-XXXX--XXX--XX---X-X-XX--X-X-", "XXXX--X-XX--X----X-XXXX--X-X-", "-XXXXXX-XX-XX-XXXX---XXXXX-X-", "-XXX-X--XX--X----X---XXX-X-X-", "-XXXXX--XX--X-X-XX---XXX-X-X-", "-XXXXXX-XXX-X-XXXX--XXXXXX-X-", "-XXXXXXXXXX-XXX-XX--XXXXXXXX-", "-XXX--X-XX-XXX---X--XXX--X-X-", "-XXXX---XX-XXXX-XX-X-XX--X-X-", "-XXX---XXX-XX-X-XXXX-XX--X-X-", "-XXXX---XX--XX---X-XXXX--X-X-", "XXXX-XX-XXX-XX-X-X--XXXX-X-X-", "-XXX--XXXX-XX-X-XXXXXXX--X-X-", "-XXXXX--XXXXXX---X--XXXX-X-X-", "-XXX----XX-XXX---X--XXX--X-X-", "-XXXXX--XX--XXX-XX-X-XXXXX-X-", "XXXXXX--XX--X-X-XX--XXXX-X-X-", "-XXX-XX-XX-XX----X-XXXXX-X-X-", "-XXXXX--XXXXX--X-X-XXXXXXX-X-", "-XXX-XX-XX--XXXXXX---XXX-X-X-", "-XXX-X--XX-XX-XXXX---XXX-X-X-", "-XXXXXX-XXXXX--X-X--XXXXXX-X-", "XXXXX---XX-XXX---X-XXXX-XX-X-", "-XXXX--XXX--XX---X-XXXX-XX-X-", "-XXXXXX-XXXXX-X-XX--XXXX-X-X-"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> attendance = {"XXXX--X--X", "X-X-XX--XX", "---XXX-X-X", "X--X-X----", "--X-XXX---", "XX--XX----", "-XXXXX-X--", "--X-XXX---", "XXXX--XXXX", "--XXXXX-X-", "---X-X-X-X", "XX----X-XX", "XX--XXXX--", "X---X-XX--", "X----XXX-X", "XX-X-XXX-X", "XX--X---X-", "XXX-X-X---", "-XXXX-XXXX", "X---X-X---", "XX----XX--", "XXXX--XXXX", "X-XXXXXXX-", "-------XX-", "-XXXX--XX-", "---X---XXX", "XX----XX--", "--XX--X-X-", "-X--X-----", "X-XX-----X", "X-XX---XXX", "-X--XX-XX-", "XXXXXXXX-X", "-X-X-X----", "---XXX-XX-", "X-XXXX-X-X", "-X-X--XXXX"};
    vector<string> problemTopics = {"----------", "----------", "----------", "------X---", "----------", "----------", "-------X--", "----------", "----------", "----------", "X---------", "----------", "----------", "----------", "--------X-", "------X---", "-------X--", "----X-----", "----------", "----------", "----------", "----------", "----------", "----------", "----------", "----------", "X-----X---", "----------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXX-XXXXXXX-X--XXXXXXXXXX", "XXX-XX-XXXXXXXX--XXXXXXXXX-X", "XXX-XXXXXX-XXX--XXXXXXXXXX-X", "XXX-XX-XXXXXXX----XXXXXXXX-X", "XXXXXX-XXX-XXX-X-XXXXXXXXX-X", "XXX-XX-XXXXXXX---XXXXXXXXX-X", "XXX-XXXXXX-XXX--XXXXXXXXXX-X", "XXXXXX-XXX-XXX-X-XXXXXXXXX-X", "XXXXXXXXXXXXXXXXX-XXXXXXXXXX", "XXXXXX-XXX-XXXXX-XXXXXXXXX-X", "XXX-XXXXXX-XXX--X-XXXXXXXX-X", "XXXXXX-XXXXXXXXX--XXXXXXXXXX", "XXXXXXXXXXXXXX-XXXXXXXXXXXXX", "XXXXXXXXXXXXXX-XXXXXXXXXXXXX", "XXXXXXXXXXXXXX-XX-XXXXXXXXXX", "XXXXXXXXXXXXXX-XX-XXXXXXXXXX", "XXX-XX-XXXXXXXX--XXXXXXXXX-X", "XXXXXX-XXXXXXX-X-XXXXXXXXXXX", "XXXXXXXXXX-XXXXXXXXXXXXXXX-X", "XXXXXX-XXXXXXX-X-XXXXXXXXXXX", "XXXXXXXXXXXXXX-XX-XXXXXXXXXX", "XXXXXXXXXXXXXXXXX-XXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXX-XXXXXX-XXXX-X-XXXXXXXX-X", "XXX-XXXXXX-XXXX-XXXXXXXXXX-X", "XXX-XXXXXX-XXXX-X-XXXXXXXX-X", "XXXXXXXXXXXXXX-XX-XXXXXXXXXX", "XXXXXX-XXX-XXXXX--XXXXXXXX-X", "XXX-XX-XXX-XXX---XXXXXXXXX-X", "XXX-XX-XXXXXXX----XXXXXXXX-X", "XXX-XXXXXXXXXXX-X-XXXXXXXX-X", "XXX-XXXXXX-XXXX-XXXXXXXXXX-X", "XXXXXXXXXXXXXX-XXXXXXXXXXXXX", "XXX-XX-XXX-XXX----XXXXXXXX-X", "XXX-XXXXXX-XXXX-XXXXXXXXXX-X", "XXX-XXXXXXXXXX--XXXXXXXXXX-X", "XXXXXXXXXX-XXXXXX-XXXXXXXX-X"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> attendance = {"---X-X----XXX-X--X-XXX--XXXX---XXXX--", "-X-XX-XX-----XXXXXXX--X-X-X--X-X---X-", "X---X----X---X--X--X-------X-XX-X-X-X", "-X--XX-X------X-XX-X--X-X-------XXX--", "XXX-X-----X-X----XX--XX-----XX--X--XX", "----X-X-XXXXX--X---X----XX---XX--X-X-", "-XX-X-XXXXX---X--XXXX--X---XX-----X--", "XXX-XX--XX-XX--XX-XX--XX---X--X---X-X", "XXX--XX---X---XX--XX---X---XXXX---X-X", "X-X-X--------X-X-XX-XX-----X----XX-X-", "---XX--X-----X-------XX-XXX-XXX-X-X--", "------XXXXXXX-X-X--XX-X---X-XXXX-X---", "XX--XXXX----XXX-X-X-X--XXX--XX-XXX---"};
    vector<string> problemTopics = {"------------X---------------X------XX", "-------------------------------------", "--------X--X--X------X------------X--", "-------------------------------------", "----------X--------------------------", "---------------X-------------X-------", "---------------------XX-----------X--", "-------------------------------------", "--------X--------X-------------------", "--X----------------------------------", "--------------X----------------------", "---------X---------------------------", "---------------X----X----------------", "--X---X----------X-------X-----------", "-----X-------------------------------", "-------------------------------------", "-X-----------------------------------", "-----------------------X-------------", "---------------------------------X---", "------X-----X---X---------------X----", "-------------------------X----X------", "-----X-XX----------------------------", "----------------X------------X-------", "-------------------X-------X---------", "---------------X---------X-----------", "----------------X---X---X-X----------", "------------------------------X------", "-------X-------X------X--------------", "----X------------X-----X-------------", "-------------------------------------", "----------------------X--------------", "----X-------------------------X------", "-------------------------------------", "-------------------------X-----------", "-------------------------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X-XX--X--X---XX--X----X-----X--XXX", "-X-X-X-X--X----XX-----X----X-XX-X-X", "-X-X---X---X---X------XX--X--X-XX-X", "-X-X---X--X---XXX-X----------XX-X-X", "XX-XX--X-X-----XX------------XX-X-X", "-X-XXX-X---X---X--X-X---X-X--X-XXXX", "-X-XX--XXXXX---XXX-----X----XX--X-X", "-X-X---X-X-X--XXXX-----X--X--XXXX-X", "-X-XXX-X-XX---XXXX-----X--X--X--X-X", "-X-X---X-X--X--X--X----------X--X-X", "-X-X--XX-------X----X-----X--XXXXXX", "-X-XX--X--XX---X--X---X---X--XX-X-X", "-X-X---X--X---XXXXXX--X------X--XXX"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> attendance = {"-X-X--XXXX-X-X--XX----XXXXXX-XX-", "---X-X-X-XXX-----X-X--XXXX--X--X", "XXXXX-XXXXX--XXX-X---XX-XXXX-X--", "X----XX--X---XX-X-X-XX--XXX-XX-X", "X-X-XX-X-X-XXXX-XX-X--XX--XX-XXX", "X------X-XX-X-X---XX-XXXXXX--XX-", "X-X--X--X--XX--X--X-X-X-XX---XXX", "--XX-X--X-----XXX--X--X---X--XXX", "XXXX-XXX--X----XX--XXX----XX--X-", "-X-----XXX-X---XX--XXXXXXXX--XXX", "XXXX-----XX-X-----X-X-XX-XXXX-XX", "-XX---XX-XX-X---XXXXXXXX--XX-X--", "X-X----X--X-XXX-XXXXX---XXX---X-", "-XXX-X-XXXX-XXX--X-X--X--X-X-XX-", "XX--X-X-----XXX---XX---XX-XXX-XX", "XXXXX-X--X---X--X--XXX--X--X--X-", "--XXX---XXXX---XXXX-X-X-X-XX--X-", "--XXXX-XXX-X--X-X-X-XX---XXX---X"};
    vector<string> problemTopics = {"-------------------------X------", "-------------------X------------", "------------------X-----------X-", "----X---------------------------", "-----X---------------------X----", "-------X-------X----------------", "--------------------------------", "----------X---------------------", "-XX-----------------------------", "--------------------------------", "-----------X--------------------", "--X---------------------X-------", "-X------X-----------------------", "----------------------X--------X", "-X---------------------------X--", "--------------------------------", "----X---------------------------", "--------------------------------", "----------------------X---------", "------------------X----------X--", "----X---------------------------", "XX----------------------------X-", "--------X-----------------X-----", "----------------------------X--X", "------------X--X-----------X----", "-X------------------------------", "---------X-----------X----------", "----------XX--------------------", "---------------------------X----", "---------------------------X---X", "--------------X------X----------", "-------------------------------X", "---XX---------X---------X-------", "---X-XX-------------------------", "---------------------------X---X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X-----X--XX-X-XX-XX---X--X--X------", "XX----XX-XX--X-X-XX----X---X---X---", "X--X-XXXXX-XX-XXXXX-X-X--XX-X-X-X--", "X-----X--X-----X-X-X---X--X---XX---", "-X-XX-X--XX--X-XXXX-X-------XX-X--X", "XXX---XX-X-----X-XXX------X---X----", "X-X---X--XXX-X-X-XXX-----------X---", "-X----X--X---X-X-XX---X--------X---", "-X--XXXXXX-----X-X---X---X--X----X-", "XX---XX--XX-XXXX-XX---X--XX----X---", "X-X---XXXX---X-X-XX--X-X-X--XX-X--X", "-X----XXXX----XX-XXX-----XX-X------", "XXX---XX-X-X---X-X-----------------", "XX--X-XXXX--X-XX-XX------X--X------", "-XXX--X--X-----XXX--XX-X-X--XX-X--X", "-X-X--X-XX-X---XXX--XX---XX-X------", "--XX--XX-XXX---XXXX-X-X----XX------", "X--XX-X--XX----XXX--X-X---X-XXXX--X"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> attendance = {"X--X-XX--X-XX----X-XXXX-X-X---X-XX-X-XXX-X--X----X", "XX--XXXXX-X--XXX-X-X-XX-XXX--XXXXX-X-X-XX---X-XX-X", "--X-XX---X-------XXXX-X-----X-XX--XXX-XXXX--XX-X-X", "---XXX-----XXX--X--X-XX--XXX--XX-X--XXX--XXX-XXXXX", "---X-X--XXXXXXXXX--XXX--XX--X--X--XXXXX---X-XX--XX", "X-----X-X-XX--X------XXX--XX-X---XX---XXX-XX-X--X-", "---X----XXX-XX--XX----X--XX-XX-XXXX-X-X-XX-X-X----", "--XX---X-----X----XX-X----XX---XX--XXXX-XX-XXX-XX-", "-----X-XX-XX-XXX---X-X-------XXX--X-XX-XX--XX-X-X-", "X--XXXX-X--X---XXXXX--X--X-X--XX-XX-X--X----XXXXX-", "--X-X-XX-X--X---X-XX---XX-X-XXX---X-X--XXXXX-XXX-X", "X-X-X----XX--XX-XXXX-XX--X----XXXX-X-X--XX---X--X-", "-X-XX-X--X-X-X-XXX-XXXXXXXX------XX-X--X--XX-X----", "X-X--XX-X--X-X--X-XX--X-----X-XX--X-----X-X-X---X-", "---XXXX---XXX-XX--XX--X-X----XXXXXXX----XX--X----X", "-XX----XX---XXX-X-XXX--X-X---X-XX-X--XX-XXX--XXX--", "X---XX-XXXXXX---X----X-X-X--X-X-X-XXXXX-XX-X---X-X", "X-X-X-X-XXX-X-X-X-XX-XX-XX-X----XXX-X-X-XXXX--XX--", "-X----XXX--XX-XXXX-XX-XX-X---XXXXXXXX-XX-XXX-X-XXX", "X--XX-X-X-X-X--X-XX-XXXX--XXXXX-XXX----X-X-X-X-XXX", "XX--X--X-XXX--X-----XX-X-X-XX--X-X----XXX-XXX---XX", "X--XX-----X---X-X----X-XX-XXXXX-X--X--XX-XX-XXX--X", "X-X-XX-X--XX-X----XX-X---X-XX-XX--XXXXX----XX-X-X-", "XXX---X----X----X-----XXX-XX--XXX--XXXX-X-X-X-XX--", "--XXX---X-XXXXXX-X--XXXXXX-X-X-X-XXX--X--X--XXX-XX", "-XXXX--XXX--XX-XX-----XXX-X--X-X--X-XXX-X----X---X", "X-X-X-X---X---XX-XX-X-XXX-XX-XXX--X----XXX--XXXX-X", "X--X--X-X---XXX---X-----------X-XX----X----X----XX", "X--X--X-XX-X-X-XXX-X-X-XX-----XXX-XX----X---X--XXX", "XXXX-XX-------X-X-XX--X--X-XX--XX-XX-XX--X-XX---X-", "---X-----XXX--X-X---XXX-X---XXXXX-X-XX-XX-XXX-----", "--XX--XX-X---X-----X-X-X-XXX-X-XXXX-X-X--X------X-", "--------X-XX--X-XXXX--X-XXXX---X-X------XX--XX--X-", "XXXXX-----X-XX-X-X--X-XX---XX--XXX-X---X-XXX--XX--", "---XX-XX---XX-X--X-X--XXX-X--X-X-X-XX--XXXX--X-XX-", "X-XXX-X--XX-X-XXX--X-X-X---X-X----XX---X--XXX--XX-", "--X---X-XXXX-X-XX--XXXXX-XX-X-----X-X---XX-X--X-X-", "--XXX-X--XXX-X-X-X--X--X-X----X---XXX-XX--XXX-----", "XX-X-X-XXX---XX-X-XXX-X-XXXX---X----XX---X---X-X--", "X-X-XX--XX-XX-X--X---XXXXXX-----XXX----X-X--------", "X--XXX--------XXXX---XX-X-X----X-XXX---XXX--X--X-X", "--XXX--XXX-X---X-X-X------X-XXXXX-XX---X-XX-XXXX-X", "-X-XXXX-XXXXXXX--X--X--XX-XX-X-XXXX--XX-XX-XX-X--X", "--X-X--XXX--X-X-XXXX-X-XXX-XXX-XXXXXX-XXX--XX---XX", "-XXXXX-XXXXXX--X-X----XX--XXXXX-X-------X---XXXX--", "-X-XXX--XX-----------X-XXX--X-XX-X--XX-X--XX-XX-XX", "XX-XX--XX--X-XX----XXXXX-XXXX----X-XXX-XXX-XXXX---", "X-X--X-XXX---X-X-XX-----X--X-X---XX--X--XXXX-XXX-X"};
    vector<string> problemTopics = {"-X----------X----X-----------------------------X--", "X---------------------------------------X---------", "X----XXX--------------------X--------------X----X-", "------------------X------------------X-X--X-------", "-----X------------X---X---X-----------------------", "--------X---------X----X--------------------------", "----X---------------------------------------------", "------------X----X--------------------------------", "X--------------X----------------------------------", "--------------------------X-----------------------", "----------------X-------X--------------X--X--X----", "----------X------------------------------X--------", "--------------------------------------------------", "----------X---------------------------------------", "----X-------------X-----------------------------X-", "------------X------------------------------------X", "-----X------------------------X------------X------", "------X-X-----------------------------------------", "------------------------------------------X-------", "--------------X--------------X--------------------", "X--------------------------X----------------X-----", "--------------------------------X------X-------X--", "--X-------------X---------------------------------", "----X--X------------------X-----------X-----------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-------X-X--X--X--------", "-X----X-XX--XX---X-X-X--", "------X-----X-----------", "------X--X--X--XX-X-----", "------------XX-X--X-----", "-X-------X--XX---XXX----", "-------X-X-XXX----------", "---------X--X-----------", "------------XX--X--X----", "------X-X---X-X--X--X---", "------X--XX-X--X--X---X-", "-X----X----XXXX-------X-", "------X--XX-X-----X-----", "-X----------X----XX---X-", "------X----XXX-X---X----", "-----X------X-----XX--X-", "-X----X----XXX-XX-------", "-X----X----XXX---XX---X-", "X------X----X--X-XXX-X--", "-----XXXXX-XXXXX-X---X--", "-X----X-----XX----X-X---", "------X--XXXXX----XXX---", "------X-----XXX-X---X---", "-X-------X--X-----X-X-X-", "------XX---XXX-X---X----", "------X--X--X--X------XX", "-X----X-XX-XXX-----XX---", "------------X--X-X------", "-X------X---X----X------", "------------X-------X-X-", "------------XX----XX----", "---------X--X-----------", "---------X-XXX----------", "X-----XXX--XXX----X--X--", "------XX-X--X-----XX----", "------X-X---XX----XXX-X-", "---------X-XXX---X----X-", "------X-----XX----X-----", "----X----X--X-----------", "------XX-X--X-----------", "-X----X-XX--X-----------", "------X--X--X-----X--X--", "------XX-X-XXX-X-X-X----", "-----XXX----X-XX---X--X-", "X-----XX-X--XX----------", "------X-----X---X-X-----", "-X----X--X--X-------X---", "-X------X---X-----X-----"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> attendance = {"-X--XXX-", "-X-X-X-X", "---XXXXX", "XX-X----", "-------X", "--X-X-XX", "X--X--XX", "-XXXX--X", "---X---X", "-XX--XX-", "X-XX--X-", "---X--X-", "------XX", "-X--XXX-", "XXX---XX", "-XXX----", "--XX----", "-X-XXX--", "XXXXXXXX", "-X-X-XX-", "--XXX-X-", "X-X--XX-", "-X----XX", "-XX-XXX-", "XX--XXXX", "-X-XX--X", "X---XX--", "X-X-XXX-", "XX-XX-XX", "XXXXXXXX", "--X--X--", "XXXX--XX", "-XXX-X--"};
    vector<string> problemTopics = {"----X---", "--------", "--X-----", "--------", "-------X", "----X---", "--------", "--------", "--------", "X-------", "--------", "--------", "------X-", "--------", "--------", "--------", "-X------", "--------", "--------", "--------", "----X---", "------X-", "--------", "------X-", "-XX-----", "--------", "--------", "---X----", "--------", "X-------", "-----X-X", "-X------", "--------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX-X-XXXX-XXXXXXXXXXXXXX-XX-X--XX", "-X-XX-XXX-XX-XXXXXXX--X--XXXX-XXX", "XX-XXXXXX-XXXXXX-XXXXXXX-XXXX-X-X", "-X-X--XXXXXX-XXXXXXX--X--XXXXX-XX", "-X-XX-XXX-XX-XXX-XXX--X--XX-X---X", "XXXXXXXXX-XXXXXX-XXXXXXX-XX-X---X", "-X-XX-XXXXXXXXXX-XXX-XXX-XXXXX--X", "XXXXXXXXX-XX-XXXXXXXX-X-XXXXX--XX", "-X-XX-XXX-XX-XXX-XXX--X--XXXX---X", "-XXX--XXX-XXXXXXXXXX-XXXXXX-X--XX", "-XXX--XXXXXXXXXX-XXX-XXX-XXXXX--X", "-X-X--XXX-XXXXXX-XXX-XXX-XXXX---X", "-X-XX-XXX-XXXXXX-XXX-XXX-XX-X---X", "XX-X-XXXX-XXXXXXXXXXXXXX-XX-X--XX", "-XXXX-XXXXXXXXXXXXXX-XXXXXX-XX-XX", "-XXX--XXX-XX-XXXXXXX--X-XXXXX--XX", "-XXX--XXX-XX-XXX-XXX--X--XXXX---X", "XX-X-XXXX-XX-XXXXXXXX-X--XXXX--XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-X-X--XXX-XXXXXXXXXX-XXX-XXXX--XX", "XXXX-XXXX-XXXXXX-XXXXXXX-XXXX---X", "-XXX--XXXXXXXXXX-XXX-XXX-XX-XX--X", "-X-XX-XXX-XXXXXXXXXX-XXX-XX-X--XX", "XXXX-XXXX-XXXXXXXXXXXXXXXXX-X--XX", "XX-XXXXXXXXXXXXXXXXXXXXX-XX-XXXXX", "XX-XXXXXX-XX-XXXXXXXX-X--XXXX--XX", "XX-X-XXXXXXX-XXX-XXXX-X--XX-XX--X", "XXXX-XXXXXXXXXXX-XXXXXXX-XX-XX--X", "XX-XXXXXXXXXXXXXXXXXXXXX-XXXXX-XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-XXX--XXX-XX-XXX-XXX--X--XX-X---X", "-XXXX-XXXXXXXXXXXXXX-XXXXXXXXX-XX", "-XXX--XXX-XX-XXXXXXX--X-XXXXX--XX"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> attendance = {"-XX--X-XX--XX-XX-X---XXXX-X--XX-X--X-XXXX-X-X-", "---X--XXXX-X---X--XX---X--X--X--X--X-XXX-XXXXX", "--X---X-----X-X---X-X--X---X-XXXXXXX---XXX----", "--X-XX----XXX----X-----------XXX----XXX-X-X-XX", "-----XXXXXXXX-X-X---X---X--XXX-XX-----XXX-XX--", "---X-XX-X--XX-XXX--X-X---XXX-XX-XXXXX-XX------", "---XX--XX---X-X---X-X-XXX--XX-X-XX-X-X-XX-X--X", "X---X--XX----XXX-X-----X----XXXX--XX-X-X-XXX--", "X----X----X-XX-X--XX-XX--XX-XXX-X-XX-XX-XX---X", "XXXX----XXXX--XXX--X-X-XX--X-XX-X-X-XX-XXXXX-X", "--X--XX-XX---X-XXXX-X-X----XXX-X-------X-XX-X-", "X--X-XXXX---X--XX-XXXXXXX---XXXX-XX-XXX-X--XX-", "-XXXX-XX-XXX--X-X--X-XX---X--X-XX--XX---X-XXXX", "X-X-X-XX--XX--XXXXXX-XX---XXXXXX--X-XXXX-XX--X", "X---XXXXX-XX------X-X-X-X-X-X-X-XXXXXX--XXXXX-", "-XX--XXXX-X---X----XXX--X---XX-XX-X--X-X--XX-X", "X---XX---XX--X-XXX---X--XXX--XXXX-X-----XXX-X-", "XXX-X--X-X--X-X-XX-XXXXXXXX---XX-XX-XXXX-XX-X-", "XXXXXX-X-XXX-XX-XX--XX--XXXX------XX---XX-X-X-", "-XX-----X---X-XXXXXX-X--XX-XXXX---X---X-XXXXXX", "--XX-XX-X---X-XX-X----XX-XX-XX---XX-XX----X-X-", "X---X--X---XX-XX-XX--XX--XX-X-----X---X---X-XX", "X---XXXX-XXX--XXXXX-X-XXXXXXXXX------XXX---XX-", "-X-X--XX-XX--XX----X-XX--XXXXXX-----X-XX--X-XX", "--XX---X---XX-X--XXXXXXXX-XX-X--XXXX----X-XX--", "XXX-----X--X---X-XXXX-XX--XXX-X---XXXXXXXXXX--", "------XX-X------XX-X-XX---XX---XX----X---XX--X", "--X--X--XX----XX--XX-X-XXXXX-X---XXX--X-XXX-XX", "---XXXXXXX-X-X---X-X-XX----X-X--XXX---X---XX--", "XX-XXX-----XX--X-XXXXXX--X-XX--XXX-XX---X-X--X", "XXX--XXX--XXX--X-X-X---X----XX-X-----XX--XX-X-", "X--XXX-XX--XXX-XXXXXX-XX-X-XXX--X-X--X-XX-----", "-XX---X--X--XX---X-XX-X-X-----XXXXX-X-XX--XXX-", "----X--XX-XXXX-X--X--X----X--XXX---XX---------", "-X--X--XX-XX-XXX--XX-X---X------X-X--XXXX--X--", "--XXX--XX--XXXX-X-X-X---X--X---X-X-X-XX--X-XXX", "-X---X-XXXX--XX--X-X-X-X-X-X-X-------X---X--XX", "XXXX-XXXXX-X-XXX--X-X-X-XXX--XX-X----XX----X--", "X-XXX--XXX-XXX-XXXX---X-----X---X-X-----XXXXXX"};
    vector<string> problemTopics = {"--------X------------X----------X-------------", "----------------------------------------------", "----------------------X-------------X---------", "--------X--X-------X-------X------------------", "-------------X----------------X---------------", "-------------------X--------------------------", "------------------------------XX----------X---", "--X--X----------------------X---X-------------", "-------------XX---------X-----------------X---", "X-------X---------------X------X-------------X", "------------------X------------X------XX------", "X-X----------------------------X-X------------", "------XX------X----------------X--------------", "-------------------------X--------X-----------", "-----------X-------X--------------------------", "-----------------X----------------------------", "---------------------------------------------X", "----------X---X-------------------------------", "--X-----------------------------------X-------", "----------------------------------------------", "------------------------X----------------X----", "X--------------------------------------X------", "XX-----X----X---X--X--------------------------", "----------------------------X----------------X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XX-------------X--XX----", "-X---X--------X-X--X----", "-X-----------------X----", "-X----X--------XX-XX----", "-X----------X----X-X----", "XX-X-X-------XX----X----", "-X--------------X--X---X", "-X--X-X--------X---X-X--", "-X--XX-------X--X--X---X", "XX-X-X--------X-XX-XXX--", "-X-------------X---X----", "-XX--X-------------X----", "-XX--X------X-X-XX-X----", "-XX--XX---X-X-XXXXXX-X-X", "-XX----------------XX---", "XX---X-X----X---XX-X---X", "-X--X-X------X-X---XX---", "-XX--XX----X-X-X--XXXXX-", "-X------X----X-X-X-X-X--", "-X---X-------X-XX-XXX--X", "-XX----------X-X---X----", "-X-----------X-XX--X---X", "-X-------------X-X-X-X--", "-XX-XX----------XX-X---X", "-X---X--------XX---X----", "-XXX-X--------XX--XX-X--", "-X---X---------XX--X----", "-X---X-------X--X-XXX---", "XX-X-X--------XX---X----", "-XX--X--------XXX--X---X", "-X---X--------XX--XX----", "-X-X-X-------XXX---X-X--", "-XX-XXX--------X--XX----", "-X--X--------------X----", "XX---X-------XX--X-X----", "-X--------------X-XXX---", "-X---X---------XXX-X----", "-X--X-------------XX----", "-X-------------XX--X---X"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> attendance = {"--XXXX-X--X-XXX--XX----X-X--XXXXXXXXX---XX---X---", "--X-XXX-XX----X-XX--X--X-XXX-X--XXXXX-XXX-X-X--XX", "X-X-X-XX-X---X--XX-----XX-XXX-X--XX-X-XX---------", "-X----XXX--XX--X----XX--XX-XXXX----X--X-XX-X---XX", "XXXX-X--XX---XXXXX-X-X-XXX-XXX-X-----XX-X-XX----X", "XXXXX-----X-X-XXX-XX-X---X-X-XXX--XX-XX-X-XX-XX--", "XX-XXX-XXX--X--XX-X-XX--XX-X-XXXXX--X-X-X-----XX-", "-XXX-X-XX-X---X-XX-XX-XXXX-XXX-X--XX----XXXX-XXXX", "--XXXX-------X---X---X-XX--X-X-X--X--XX--X--XX-XX", "-XX-XX---X-X-XX-XX--XXX-XX--X-X-XXX--X-XX-----X--", "X-XXX--X--X-X--X--------XXXXXX-XXXX-XX-XX-XX-----", "-XXX-X-X-X-X-----XX-X--------X--X--XXXX-X-X-XX-XX", "-X---X-X--XX-XX--XX--XXXX--XXX---X---XXXX-XXXXXX-", "X----X--XXXXXX---X-XX---XX-XXXXXX-X-XX-XX-X--XX-X", "X-XX--X---X-X-XX-X--X-X--X-XXXX-X--XXXXX--X-X---X", "-X-XX---XX--X---XXX-X--X-------X-X--XXXXXXX-X-X--", "X----XX-X---XXX-X--X----X--X-XX----X-XXXX--XXXX--", "------X-XX-XXX---X-XX-X-XX--X-XX-XXX-X-XX-X---X-X", "-XXX-X-X-X-XXX--X--XXXXXX--X-----X---X----X--X---", "-XX---XX----X--XXXX--XXXX---X---X-X--XX-XX-X--X-X", "X-XXXX---X-X-XXX-XX--XX-XX-XX---XX-XX-X-XXXXX----", "---XX--XX---XX-XXX-X-X-X-XXXXX-XX--X-XXX-XX-XX---", "X---XXXXX-XX--XXX-XX-X-X--XXX---X----X-XX--XXXXX-", "XXXXX---XX---XXX-XXX-X------X-X-XXXXXX-X---XXXX-X", "--XXXXXXX----X--X--X---X----XX-X-----XXXX-XXXX--X", "XX-XX-----XX--XX--XX-X--X---X-X--X--XX----X-X--X-", "--XXXX---XX---X-XXXX--XX-XXX-X-X---X--XX--X----XX", "-XX--X-XXXX--X-XXXX--X-XXXX--XXX-XXXXXX--X----XXX", "-X---XXX-X---XX-XX--XXXXX---X---------X-X---XXX--", "XX--XXX--X-X--XX---XXXX-X-X---X----XXX----X------", "--XXX-XX-XXXXXX-XXXXXXXXXX-XXXX-XXX-XX-XXXX-XXXXX", "XXXXXX---XXX-XX--X-X-XXXX--XX---XX-XX-X---X---X--", "-X--XXXX-XXXX--XXX-X-XXX-X-XXXX--X--X-XX--X-X-X-X", "----XXX---XXXX---XX-X---X-XX---X-X-X-X------X--XX", "-X-XXX-X-XX-XXXXXX--XX---X--X-X-X--X-XXXXXX--XX-X", "X--X-----XXXXXXXXXXX-XXXXX--X----X--------X----XX", "-XX-XX-----XX-XX-XX--XX-XXXX--X-X--X-XX-X-X--X-X-", "--XXX-XXX--XXXXXX-X--X-X-X---XXX--X--XX-X-X---X--", "X-X--X-X----X-XXX-X-XXX-X-X-X-XX--X-X----XXXXXXX-", "-X--XXXX---XXX-X-----XX-X---XX-X----X-X--XXXX---X", "XX-----X--XXXX-XX--X-X-XX--XX-X--X-----X------XXX", "X--------X--X-XXXXX-X--XXX-X--X----XXX-XX--X--X--", "X-XXX--XXXXX--XX-XXX--X-X-X--XXX-X-X--X---XX--X-X", "-X-X-XX-XX--X--XXXXXXXX-X------X-X-X--X--XX-XXX-X", "X--XX---X---X--XXXXX----XXX-XX----XX-X----X---X--"};
    vector<string> problemTopics = {"-------------------------X-----------------------", "------------------X---------------X----X---------", "-------X-----------------------------------------", "-------------------------------------------------", "-------------------------------------------------", "-------------------------------------------------", "------------------------------------------X------", "------X-----X-------------X----------------------", "-------------------------------------------------", "--------X------------------------------------X---", "---------------------------X---------------------", "---------------------------------------X---------", "-------------------------------------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X-XXXX--X---X", "X--XXXX-X-XXX", "--XXXX--X-XXX", "X-XXXX--X-X-X", "X--XXXX-X-X-X", "X--XXXX-X-X-X", "X-XXXX--X-X-X", "X-XXXXX-XXX-X", "---XXX--X-X-X", "X--XXX--X--XX", "X-XXXXX-X-XXX", "--XXXXX-X---X", "--XXXXX-X-XXX", "X--XXXX-XXXXX", "X--XXXX-X-XXX", "---XXXX-X--XX", "---XXX--XXXXX", "X--XXXX-X--XX", "--XXXXX-X-X-X", "--XXXX--X---X", "X--XXXX-X-X-X", "X-XXXXX-XXXXX", "--XXXX--XXXXX", "-X-XXX--XX-XX", "--XXXXX-XX-XX", "---XXXX-X---X", "X--XXXX-X-XXX", "X-XXXX--X---X", "--XXXX--X---X", "---XXXX-X---X", "XXXXXXX-X-XXX", "---XXXX-X-X-X", "X-XXXXX-X-XXX", "---XXX-XX-X-X", "X-XXXXX-X--XX", "X--XXXX-X---X", "X--XXXX-X-X-X", "X-XXXXX-X---X", "--XXXXX-X---X", "--XXXXX-X---X", "--XXXX--X-XXX", "X--XXX--X-XXX", "--XXXXX-X---X", "---XXXX-XX--X", "X--XXXX-X---X"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> attendance = {"X--X-X--X-X-----XX---XX-----XX-X-XX-X-X-X-XXX", "-XXX-X--X--X--X--XX--X---XX--------XXX---XX--", "----XX-X-----XX-X-XXX-X---XXX-X-X-X-XX---XX--", "X----XX-----XX--X-X---XXXXXX---XX-XX--X---XX-", "X--XXXX--X-X-XXXX-X--X----XXX--X--XX-X-X-XXX-", "X-XXXXX---XXXX----X-X-XX-X-----X-X--XX-----X-", "XX-X--X-X-XX--XX--X-XXXX--X-X-X--X--XX----XXX", "XXX------XX-XX-XX-XX-X--XX-X-XX-X-XXXXX-XX-X-", "-XXX---X----X---X-X-X-XXX--XX---XX--X-XX---XX", "-X----X-X--X-X--X--XX--XXXXXX------X-XXXXX-XX", "XX--XXX-XXXXXXXX--X--X-X-X-XXXX-------X-X-XX-", "-X-XXXX-XXXXX---X-XX-XXX-XX----XX---XX-XX---X", "XX--XXX-X-X--X-----XXX---X----X-X---XXX---X-X", "--XX-X-X----X----X-X-----XXXXX---X-X----X--X-", "X-XX-XXX-X-XXXXX-XXX-XXX--X-XX-XXX---X--X-XXX", "X--X-X--X-XXXXXXX--XX--X-X-XXXXXXX--XX-XX--XX", "X-X--XX-XX-XX-X--X---XX---XX--XX-XXXXXX-X----", "--X-XX-X--X---XX-X---X-X-----XX-X--X---XX-XX-", "XX--XX-------X-X--XXXX-X-XX-X-X----X-X-X-X--X", "----X-XXXXXX---XX---X---XX--X-XX----XX-XX--X-", "----XXXXX-XXX--X--X-XX-XXX-X-X--XXXXXXXXXXXXX", "XXXX-X-X--------XXXXX--X--X-X-X-XX---XXX-X-X-", "------XX-XXX----XX-XX-XXX---X-X--X--X-X-----X", "X-X----XX-XX-XXX-X--X---------X-X----XXXX-X--", "-X--X--XXX-------X----XX-X--X-XX-X-X-X-XXXX-X", "-XX-XX---X-XXX-XX-X--X---X-X----XX--XX-X-XX--", "X-X-----X-XXXX--X-XXX---X-X--X----XX--X-X-XXX", "--XX-X-X---X--X-XXXXXXX-X--X-XXX---X-X-X---XX", "XX-X----XXXX---X--X---XX-X-XX-X--X--X--X-XX-X", "-X---XX-XX-XX-X-X--X---X-XXX---XX--XXXX-XXX--", "-XX---X-XX--X-XXXX-X---X-X--XXXX--XX-XXX-XXXX", "X-X-X--XX-XX-XX-XXX-X-----XX--X-X-X--X--X-XX-", "X----XX-XX-XXXXXXXX-------XX--X-XXX-X-X---XX-", "-X-X---XX---X--XX----X-X-XX-X--X-XXX--X-X---X", "XXXXX--X--XXXXXXXX----XX--XX----X--X---X-----", "X--X--XX--X-X-XXX-XXX-XXXX-X-XXX---XXX-XX-XX-", "--XX--XXX--X-X-----X---XXXX-X--X-XX----X-X-XX", "XX--X-X-XX-X-XXXX-XX-X-X-XX-XX-X-X----X---XX-", "X-X---X-XX-X-XX----X---X--XXX--XXX-X--X-X--XX", "---XX-XXXXX-XXXX--XX-XX-X-X-XX--XXXXX-XXXXX--", "-X-X-X--XXX---X-XX-X---XXX-XX---XXXX---X---X-", "-XXXXXXXXXXXXXX--XX--X-XX--X-----X--XX-XXXXXX", "XX-------XX----X--XXXXXX--X--X-XXX----X-XX-X-", "XX-X---X-XXX-X-XXXXX---X--XXXXX-X-XXX----XXXX", "-X-----X--XXX-X--X-X--XXXXXXXX--X--XXXX-X---X", "XXX---XXXXX-XXXXXX-XX-XXX-XX-X----XX-X----X--", "XX--X-XX-----X--X--XX-X--X--------X--XXX-----"};
    vector<string> problemTopics = {"-------------------X-------------------------", "---X----------X--------------X-----------X---", "----------------------------------------X----", "------------------X-------------X------------", "------X--------------------------------------", "------------X-----X----------------------X---", "------------X--------------------------------", "---------------------X------X------------X---", "---------------------------------------------", "---------------------------------------------", "-X-------------------------------------------", "--------------------------------------X--X---", "---------------------------------------------", "-------------------------------X-------------", "---------------------------------------------", "---------------------------------------------", "--------------------------------------------X", "X----------------------------X---------------", "---------------------------------------------", "---X--------------------------XX-------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--X-----XX--XXXXXXX-", "--------XXX-X-XX--X-", "X--X----XX--X-XX--X-", "---XX-X-XX--XXXX--X-", "----X--XXX--XXXX--X-", "----X-X-XX--XXXX--X-", "----X---XXX-X-XXX-X-", "X-XX-XX-XXXXX-XX-XX-", "---X--X-XXX-X-XXX-X-", "X-X-X---XXXXX-XXX-X-", "--X-X-X-XXX-X-XX-XX-", "X-XXX-X-XXX-XXXXX-X-", "X---X---XXX-X-XXX-X-", "X-X---X-XX--X-XX--X-", "X-XXX-X-XX--XXXXXXX-", "X-X---X-XX--XXXXXXXX", "--X-X-X-XX--XXXX--X-", "--X-----XX--X-XX--X-", "X------XXXX-X-XXX-X-", "--X-X---XX--XXXX--X-", "--XXXXX-XX-XX-XXX-X-", "X--X----XXXXX-XX--X-", "X---X---XX--X-XXX-X-", "--X-----XX--X-XX--X-", "--X-----XXX-XXXXX-X-", "---X-XX-XXX-X-XX--X-", "X-X---X-XX--X-XXXXX-", "X-------XX--XXXXX-XX", "--------XXX-X-XXX-X-", "X-X-X-X-XXXXXXXX--X-", "X---X-X-XXXXXXXXX-X-", "--XX----XX--X-XX--X-", "---XX-X-XX--X-XX--X-", "--X---X-XXX-XXXXX-X-", "------X-XXX-X-XX--X-", "X-X-X-X-XX--XXXX-XXX", "X---X---XX--XXXXX-X-", "X---X---XXX-XXXX-XX-", "X-X-X---XX--XXXXX-X-", "XXXXXXXXXX-XX-XX--X-", "X-------XXX-X-XX--X-", "--X-XXX-XXX-X-XXX-X-", "X-XX----XXXXXXXX-XX-", "X--X----XXX-X-XXXXX-", "X-X---X-XXX-X-XXX-X-", "X---X-X-XXX-X-XX-XX-", "X---X---XXX-X-XX--X-"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> attendance = {"--X---XX-X-X-XX-XX-X-XXXX----X--XXX--X-X-----", "X-X----X-X-XX-X---X--X---XX--XXXX-XX-X-XX-XX-", "-XX-X---XX----XX----XX---X------X----XX--X--X", "XX---X---X--X-XX----------XXX----XX-X---X-X-X", "-XX--X--XXXX--X-X-XXX-X-X-XXXX---XXXX---XX-X-", "-XXX-XX-XXX-XX--XX--X-XXX--XX---XXXXXX---X-XX", "-X-----XXXX--X----XXX----X-XX---X-X-X-X----XX", "X--X----X--X-XXXX---X-X-XXX-X-XXXXX--XXXX-X--", "XXX-XXX--X-XXXX-XX-X---X-X-XX-XX--X-XXXX--XX-", "X--X---XXX-XX--XXX-----X---X-XX-XX-X-X-XXXXX-", "XX-------X--X-XXX------XXXX-XX---XX---X-XXXXX", "X---XX-X-XXXX--X-XXXXXX--XX-XXX-XX--XX--XXX-X", "X-XXXXX----XXXXX-XXX--X----XX----XX---XXXXXX-", "X-XX---X--X--XX--X-XXX---X-X---XX----X-X-XXXX", "-XX--X-X----X-XX---X-X--XXX--X---X-XX--XXX---", "XXXXX-X-XX--XXXX---XXXXXXX-XX-X-XX--XX--XX-X-", "XXX-XXX-X-X--X--X-X--X-X---XX-XXXXXXXX------X", "-X-X-XXX--X--X--X---XXX--XXX--XX--XX-XXXX--X-", "XX---X-X-X----XXXXXXXXXX---XX--XXX-X-XXX-X--X", "--XX--X--XXX-X--XX---XXX----XXXX---XXX-X-X-X-", "----XXXX--X--XX---XXX----X-XX-XXX-XX----XX--X", "-XX--X-X-XX-X---XXXX--XXXXXXX---XX---XXXX-XX-", "X-XXX-X--XX-XXXXXXX----XX--XX-X--X----X-XXX-X", "XX--XXX-XXXX-XX-X-----X--XX--X-XX--XX-X--XXX-", "--XX--XXXXXX-X--X-X------X---X-XX-XXXXX-X-X--", "---XX-XX--XXXX-XX-XXXX---X-X-XXXX----X-----X-", "------X----XXXXX---X-XXX-XXX-------XXXXXX---X", "XXXX---XX-X-XX-XX-XX-----X--XX-XX-X-X---X-XXX", "X-X-XXX-X-X--X--XXX--X-XXX-XX-XX------XX----X", "X----X-XX--XXXX--XXXXXX-XX-XX-X--X-X-XX--XX-X", "XXXXX-XX-XX-X--XXXXXX-X--XX-----X-XX--XXX-X-X", "-XXX--XXX-XXX-X--XX---X--XXXXXX-XX--X-X-X-X-X", "X-XXXXXXX----X--X-----X-XX--XX----XX---X-X--X", "XX-XX-X--X-X-XX-X---X---X--XX--XXX-X-XXXX---X", "-XX--X-XXX--XX-XX-XX-XX----X---X-X---X--X-X--", "--X---X--X---XX-XXX--X-X--X--XX--XXX-XX------", "-XX-X-X--XXX-XX----XX-XXXX--XX-X-----X--X-X--", "-X--XX-----X-XX-X-X-X---X--XXXX-XX---XXX--XX-", "XX-XXXX-X---X-XX-X-XX----XXX--X-X---X-X--XX-X", "X-X--X---XX-XXXX--XXX--X-X--XX--XXX--XXXXX-XX", "X--X----XX---XXXX-X---XXXXXX-XX-X-XX-XX-X-XXX", "--XXX------XXX-XXXXXXXXX-X-X--XX--XXXXXXXX--X", "XX---X-XX-XX-X---XX---XX--X-X---XX-X-X-X--XXX", "X-XXX-XXXX-----XX-XX-X----XX-X--XXX----X-X--X", "X--XX---XXXXX----XXXX-----X-XXXX-XXXXX--XX-XX", "--XXXX-XX-XX-X----X--X--XXXXXX-X-X--XX-X--X-X", "XXX---XX-----X---X-X-X--X-X----X-XX-X-XX-XXXX", "XXX--X----X--X---XX--X-XX-X-X----X-X--X--X--X", "-----XXX-XX---X-X-X---X---X--X-XXXX-X-----X-X"};
    vector<string> problemTopics = {"---------------------------------------------", "----X------X------------------X----------X---", "------X----------------------X---------------", "---------X---------------------------------X-", "X----X---------------------------------X-----", "---------X-----------------------------------", "--------X----------------X-------------------", "------------------X-----------------------X--", "----------------------X----------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X-X--X--X", "X--X-X-X-", "X----XX--", "X----X---", "X--X-X--X", "X--X-X--X", "X--X-XX--", "X-----X-X", "X--XXX---", "X--X-X---", "X--X-X---", "XX---X-XX", "X---X--XX", "X--------", "X--------", "X--X-XX-X", "X--------", "X-------X", "X---XX--X", "X-XX-X--X", "X--------", "X--X-X-XX", "X----X-X-", "X-XX-XX-X", "X-X--XXX-", "X-X------", "X-------X", "X-----XX-", "X---X-X--", "X-----XXX", "X----X-XX", "X-X---XXX", "X-X-X-X-X", "X----X---", "X----X-XX", "X-X--X---", "X-X--X--X", "X------X-", "X-----X--", "X--XXX---", "X--X-XXXX", "XX------X", "X---X--XX", "X-X--X---", "XX-X-X---", "X-----XX-", "X--------", "X--------", "X-X--X-XX"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> attendance = {"XXXXXXX-XXX-X---XX------X---XX-----X----XXX-X", "XX--X-XXXXX-X--X---X-X--X-XXX---XXXXX-XXX--X-", "X-XX-XXX-X-XX----XX-X---X--XX-X-X-X--XXX-X---", "XX-X-X---XXXXXX-X--XXX--XX--X-----X-XX--XX-X-", "XX-X-X--X-XXXXXX-XXXX--XXXX--X-XX---X-X-XX-XX", "-X-XXX----X--X--X-X--XX-XX-XX-XX-XX----XX--XX", "X---XXXX--XXXX--XX-XXX--X-X-X-X-XXXX--X-XX---", "XX-X--XX-X-XX---XX--XXXX--X--X--X-X-X---XXXX-", "-XX-XXXXX--X------XX--XX-XXXX---XX-XXX--X-XXX", "--X-XXX-XX---------X-XXXXX----X--XXX-XX-X-XX-", "-XXXXXXX----X--XX-X-X-X-X-X-X---X--X-X--XX-X-", "--X-X--X-----X--X--X-X----X-XX---X-X---XX--X-", "--X---XX--X--X-XX-XX--X---X---XXXXXX----XXX-X", "X-XX-XX---X--XXX----XX--X-X----X-XXX-X-----X-", "-X-X-XX-X-XXX-X-X-X-X-XX------X-X-X---X-XXXXX", "----XX--XXXX---X-----X----XX----X-X-XXXXXX-X-", "-X-XX--X---XX-XXX---XXX--X--X--XXXX---X------", "---XXX---X---X-XXXX---X--X-XXXX-----XX-XXX--X", "---X----------X----X-X-XX---X---X-XX--XXX-X--", "--X--X---XX--X----X--X---X--XX--X-XX-XX-X--XX", "-XX---X----XXXXXXX--XX--X---X---XXX---XXX---X", "X-X-XXXXXXXX--XX-XXXXX-XX--X-XXXX--XXX-X--XX-", "XXXX--XXX--XX--X-X---X-X--X--X-X--X-X--X--X-X", "-XX--X-XX----------XXX---X-X-XX---XX-X-XXX-X-", "X-X-XXX-X--XXXX--XXX-X-XX-X-X-X----X-X-X-----", "--X-XXX-XXX-XXX-XX-X-XX-X------XXXX-------X-X", "--XXX--X-X--XX-XXX---X----XX-XX-XX---XX---XXX", "XXXXX-XXXXXX-X-X--XXXXX----XX-XXXX-XX-XX-XXX-", "-X------XX---X-XX---X---XX-XXXX-X--XXXXX--X--", "-X--X-X-XXXX--XX-XXX-XX-XXX-XX----XXXX--XXX-X", "X----XX-X-X-X-XXX---X------X--X--X--XXX---X--", "--XX----XX-X------X----XXXX--XXX--XXXX--X---X", "X--XXXX-X--X-X-----XXX--XX-XX--X--XX--X---XX-", "----X--X-XX----X-X-X-X-XXXXX--X-XXX-X----X---", "X-XX--X---XXXXX--X--X----X---XX-X-X---XX-X--X", "X-----X-X-X-XXX-------XX---X----X-XXXXX--XX--", "--X-X--X-XXX-XX---XX-XXX-XX-X-XX---XX-XXXXX-X", "XX-X--X-X----XX--X---XX-XXXX---X---X-X--XX--X", "X---XX--XXXX-XX-X--XX------XX--XX-XX--X------", "-X--X---XX-XX--X--XX-XX-X-XX-XXX--X--X-X---XX", "-------XX---XX----X---X-XXXXX-XX-XXX-----XXX-", "X-X-----XXXXX-XXX-XX---XXX-XXX-X---X--X------", "-------X-----XXXX-X-XX-XX-X--X--XX--XX--X--XX", "--X--XXX--X--X--X-X----XXXXXX-XXXX------X-X-X", "-XX---XX-XX---XXX-X-X-----XXX-X--XXX-XXX--X--", "-XX-X-XXX-X--X--X-X---XXX--X-XX-XX--XX---XXXX", "-XXXXXX--X--X----X---X--XXX---XXX---X-XX-----", "-XXX-XXXX-X-XXXXXXX----XX--XX-XXX---XX-X-----", "X-XXXX---XX-XX-X-X-XX-XX----X-XX-X---XX-XX-XX"};
    vector<string> problemTopics = {"---------------------------------X-----------", "--------------------------------------------X", "------------------X--------------------------", "--------------------------------------------X", "-------------------------------------------X-", "-X-------------------------------------------", "------------------X-----------X--------------", "----------------------------------X--X-------", "--------------X------X-----------------X-----", "-----------------------------X--------X------", "-----------------X---------------------------", "------------X-------X------------------------", "---------------------------------------------", "------X----------------------------------X---", "--XX---------------------------X-------------", "--------------------X------------------------", "---------------------------------------------", "-----------X---------------------------------", "---------------------------------------------", "---X-----------------------------------------", "---------------------X----X----X---X---------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X-X-X----X-XX--X-XX-", "X---XX------X---X-X--", "--X---XX--XXXX-XXXXX-", "----XX-X---XX--XXXXX-", "-XXXXX---XXXX--XXXXX-", "XXXXXXX-----X---X-XX-", "X---------XXXX-XXXX--", "----XX----XXXX-XXXXX-", "XXXXXX------X---XXX--", "X---X--X----X---X-X--", "--X-XX-----XXX-XX-XX-", "X---X-------X---X-X--", "XXXX--X-----XX--X-X--", "X---X--X----X-XXX-XXX", "-XXXXXX----XXX-XXXXX-", "----X--X----X---XXX--", "X----X-----XX--XXXXX-", "-XXX--X---X-X---X-XX-", "--------X---X---X-XX-", "-XXXX--X-X--X---X-X--", "XX-X-X--X-XXX--XXXX--", "--X-X-X-X-X-X--XXXX--", "-X-X-X----X-X-X-XXXX-", "----XX-X----X--XX-X--", "--X---X-X-X-X---XXX--", "XX-X------X-X---X-X--", "XX-XX----XX-X---X-XX-", "X-X-XXX-----XXXXXXXX-", "-----X---X--X--XX-X--", "-XXX-X-X--X-XX--XXX--", "X----------XX--XX-X--", "-XXX--XX----X-X-XXXX-", "----X-------X--XXXXX-", "X---------X-X---X-X--", "-X-X-----XXXXX-XXXXX-", "-------X----XX--X-X--", "-XXX--X-X---X---XXX-X", "-X-X-X----X-XX--X-XXX", "------------X--XXXX--", "-XXXXXXX----X---XXX--", "X-X-X-X-----X---X-X--", "--X------X--X---XXX--", "XXXXX-------X--XX-X--", "XXXX--X-----X---X-X--", "X-X--XXX----X--XX-X--", "XXXXXXX-----XX--X-X--", "-----X----X-X-X-X-XX-", "--X--XX---X-X-X-X-XX-", "XX-XX-----XXX-XXX-XX-"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> attendance = {"X-XXX---XX-XX-XX-XXXX-XX-XXXX----XX---XX-XXXX--", "-X-X-XXX-XXX-X--X-XXX-------X-XXX--X--XX--XX-X-", "X-X-XX-X--XXX-X--XX-XXXXX-XX----X---XX----X-XX-", "X--XXX--X--X--X------X-X---------X---XX-X---XXX", "--XXXXX-X-X-XXXXXX-X------X-X---X-X--XX--X-XX-X", "XX--X---XX----XXX---XX----X--XX-X-XX-X--X-XXX--", "-X--XXX-X-----XXX-XX--XX----XXX-X-X------XXXXXX", "---------X-XX--X-XXX-X-XX-X--XXX----X---XX-X-X-", "--XXX-X-X-X--XXXX-X----X-X-X----X--XXXXX-XX----", "-X--XXXXX--XXX--XX-X--XXX-X-X--XX-X--XXXX---X--", "-X-X-X--X-X---XX-X----XXXX---X--X-X--X-X--XX--X", "-XXX-XX--XX-X--XX---X-XXX-X--XXXXX--XXX-X----XX", "X--XXXXXX-X-XX-X--XX-XX---X-X-X---XXXX--XXX-X--", "--XXXXXX-X-XX-X---X-XXX----XXXX-XX----XXXXX-XXX", "XXX--X-XX-X---XX----X-X-XXXX--XX--X----X-X---X-", "XXXX-X-XXX-XXXX--XX--XX-X--XX--XX-XXXX--X--X--X", "X-X-X---XX-XX--XX-XXX-XX----X-X---X-XX-XXXX-XX-", "------X--X-X-X--XXX--XXXX-XXXXX-X---XXX-----XX-", "-X-XX-----X-X-XXXXXXX----XXXX-XX-X-X-XX---X--X-", "XX--X-XXX------X-XXXXX--X--XXX-------XXXX--XX--", "X-XXXXX--XXX------X-XXXX-XX-XXXXX--X-X-X-X-XX-X", "X-XX---X---------X-XX-XX--XXXXXXXX-XX-XXXX-XX-X", "-XX-XX-XX-X-X-X----X-X--XXX-XX--XXX-XX--X----XX", "---XXX-XX--X-X--XX-XX-X--XX---------X-XXXXXX-XX", "XXX-XX-XXX-XXX-X----X--X--X-X-XX--X-X---------X", "--X--XX-X----XX---X------X--XX-XX-XX-XXX-XX----", "X-XXXXXX--XXX---XXXX-XX-X-----X--X--X-X-XX-----", "X-XXX---XX-XX-X-----X-X--X-XXX----X-XX-X-XXXXX-", "X-----X-XX--------X-X--XXXXXXX-XXXX--X--XXX--X-", "-XXX-XX-XXX-XX--XX-X-X---XXXX----X--XX--X-XXXXX", "-X-XXXXXX---XXX-X---X-X----X---X----X----X-----", "---XX-XX--XXXX-X-X-XX------X--XXX-X-X-X-XX----X", "-XX--XX--X--X--XXX-X---XX--X-XXXX---X-X-XX-----", "X-XX--XX--XXXXX-X-XXXX-XX-X-X--X--XX----X-XXX--", "XX-XXXX-XXXX-------XX-XX--X-XXX----X-X-X--XX---", "---XX----XXX--X----X-X-X--X--X----X-XX--X-XX--X", "---XXX--XX-XX--X--XX----X-X------------XX-XXX--", "X--X-XX------X--XXX-XXXX--X--X---X--XXXXXXXXX-X", "XXXXX--X-XX-XX-X--XXXX--X-XX---XX--X-X-X-X---XX", "XX-XX---XXXX-X------X-X--X--X---X--X-X-XX-X-XX-", "-XX--X-XXXXX------XXXXXX-XX--X--XXX--XXXXX-X---", "-----XX----X-XX---XXX--X--X-XX-X---XXXXXXX--XX-", "-XXXXX-X-X-X-XX-X--XX--XXXXXXX---XX-X-X--X--XX-", "-XXX------X-XX-X-XXXXX-X----X-XXXX-----XX-X-XX-", "XX--XXXX--X-XXX---X-XX-XXXX--XXX--XX-X----X-X-X"};
    vector<string> problemTopics = {"----------X------------------------------------", "-----------------------------------------------", "------X----------------X-----------X-X---------", "------------------------X----------------------", "-----------X-----X----XX-----X-----------------", "-------X-----------------------------X---------", "-----------------------------------------------", "--X--------------------------------------------", "-----------------------------------------------", "-----------------------------------------------", "----------------X------------------------------", "--------------------------------------X--------", "-----------------------------------------------", "--------------------X--------------------------", "--X--------------------------------------------", "-----------------------------------------------", "--------------------------X----------------X---", "---------------------------X-------------------", "----------------X-------X--------X---------X---", "-----------------------------------------------", "-----------------------------------------------", "-------------------------------X---------------", "------X----------------------------------------", "-------X------X----X--X-----X------------------", "-------------------X---------------------------", "---------------------------------------------X-", "------------------------X----------------------", "------------------------------------------X----", "-----------------------------------------------", "-----------X-----------------------------------", "-----------------------------------------------", "-X-------------------------------X-------------", "---------XX------------------------------------", "-----------------------------------------------", "---------------------------X-----------XX------", "--------X--------------------------------------", "------X--------------------------------X----X--", "---------------------X-------------------------", "-------------X---------------------------------", "-----------------------------------------------", "-----------X-------------X--------------X------", "-------------------------------X---------------", "-----------X-----------------------------------", "---X---------------------X--------X------------", "-----------------------X-----------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X----XXXX-XXXXXXX-XX---X--XXXX--X-X---X--XXX", "XX----X-XXXXXX-X---XXXX-XX-XXXX-XX----XX-XX--", "XX-X-XXXXX--XXXX-X-XX----XXXXXX--X---X-X--X-X", "-X----X-XX-XX--X---XX----X--XXX--X-X-X-X--X-X", "XX----XXXXXXX-XXX--XX-X-X---X-X--X-X--XX-----", "-X----X-XXX-XX-XX--XX------XX-X--X-X-X-X-----", "-X----X-XXX-X--X---XX-X-XX-XX-X--X-X---X----X", "-X-X--X-XX--X--XX--XXX--XXX-XXX--X---X-X-XX-X", "XXX---XXXXXXX-XX-X-XX-X----XX-X--X-X--XX----X", "-X-X-XX-XXXXX--X---XXXX-X-X-XXX--X-XX-XX-XX-X", "XX-X--X-XX--X--X---XX-----XXX-X--X-X---X---XX", "XX-X--XXXXXXXXXX---XXXX--XX-X-XXXX-----X-X--X", "XX---XX-XX--X--X---XX-X-X--XX-X--X-X-XXX-----", "-X----XXXX-XXXXX-X-XX-X--X-XXXX--XX-XX-X--X--", "XX-X--XXXX--XXXX-X-XXX---XX-X-X--X-X---X-X---", "-X-X-XXXXX--X-XX-X-XXX----X-XXX--X-X-XXX-XX--", "-X----XXXXX-XXXX---XX---XX-XXXX--X-X---X--X-X", "-X-XX-X-XXXXX--X-X-XX-X--XX-XXX--X---XXX--X-X", "XX----X-XXXXXX-X-X-XXX--XX-XX-XX-X-----X-X---", "-X-X-XX-XX-XXX-X-X-XX-X-X-X-X-X--XXXXX-X-----", "XXX---XXXX--XXXXX--XXXX-----XXX-XX--XX-X-XX-X", "-X----XXXX-XXXXXXX-XXX--X---X-X--XX----X-X--X", "XX-X-XXXXX--X-XX---XX---XXX-X-XX-X-X-X-X-----", "-X----X-XXXXXX-XX--XX---XX-XXXX--X-X--XXX-X--", "-X----XXXX--XXXX---XXX------XXX--X-X--XX-XX-X", "-X----XXXX-XX-XX---XXXX----XX-X--X-X--XX-X---", "XX-X--XXXXXXX-XX---XX-X-X-X-XXX--X---X-X--X--", "-X----XXXX--XXXX-X-XX----X-XXXX--X-X---X--XX-", "-X-X--X-XX--XX-X-X-XXXX--XXXX-X--X-X---X-X--X", "XX----XXXXX-X-XXXX-XX-X-XX-XX-XXXX-X-XXX-----", "-X----X-XXX-XX-X-X-XXXX-----X-X--X-X--XX-X---", "XX----X-XX-XXX-X-X-XXXX-X---XXX--X----XX-XX--", "-X-X--XXXXXXX-XX-X-XXXX-X-X-X-X--X-----X-X--X", "XX-X--XXXXX-XXXXX--XXXX-X-XXXXX--X---XXX-XX-X", "XXX---X-XX--XX-XX--XX-X-X--XXXX-XX-X---X--X-X", "XX----X-XX--X--XX--XX---X--XXXX-XX---X-X--X-X", "-X-X--X-XX--X--XX--XX---X-XXXXX--X-X---X--X--", "-X----X-XXXXXX-XX--XX-X----XX-X--X--XXXX----X", "XX-X-XXXXX--XXXX-X-XXX--XXX-X-X-XX---XXX-X---", "XX----X-XX--XX-X---XX----X-XXXX-XX-X--XXX-X--", "XX---XXXXX-XXXXXX--XX---X---XXXXXX-X-X-XX-X-X", "-XX---X-XX-XXX-X---XXXX-XX--XXX--X--X-XX-XX-X", "-X-X--XXXXXXXXXX-X-XX---XXX-XXXX-X----XX--XXX", "XX----XXXX--XXXX---XXX--XX-XX-XX-X---XXX-X--X", "XXXX-XX-XX--XX-X---XXXX---XXX-X--X---XXX-X--X"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> attendance = {"--X-XX-----X---X-----XXXX--X-XX-XXXX-X--X--XXX--", "-XXX--XX--X--X----X--X-X-X-X--XX-X-X-XX---XX-XX-", "X-X-XX---X-X--------XXXXX-XXXXX-XX--X----XXXX-XX", "-XX-XX--XX----XXX-X-XX-X--XXXX-X-XX-XXX---X-XX-X", "X-XXX---XX-X-X-XX-XX---X--XXXX-X-X----X--XXX--X-", "X-X-X--X--XXXXX----X-X-X-XX--XXXXX-X--X-----X---", "-X--XXXX-XXXXXXX-X-XXXX-XXX-XXX--X----X--XXXX-XX", "-XX--XX--X--X-X-XXXX---------XXXX-X-X-X---X--XXX", "XXX--X--X--XX-XX-X-XX--XXX----X--X-X-XX------X-X", "X--X---X-----X---XXXXXXXXX--XXXXXX-----X--XX--X-", "---XX---X-XXX---XX--XX---XX-XX--XX----XX---X--X-", "X--XX--X-XXXX--X--X---XXX-XX--X--X----X-XXX---X-", "X---X----X--X-X--XX------XXXX-XX-X-X-X----XX--X-", "X----X-X---X--XX---X--X-XXXXX-XX--XX-XX---XXXX--", "XX--XXXX---XX-----X---XX-X--X-X-XXX-XX-XXX---X--", "XXX-XXXXXXXXX-X---X--XXX-X---X--X-X-X-X-X--XXX-X", "X---XXXX---XX--X--X---XX--X--X--X---X-XX-X-X-X--", "X-XXXXX-X-----XX-X------XX------XX-X-XX-XXX--X-X", "---XXXXXXXX----XXX----X-XXX-XXXXXXX-XXX-XXX-XX--", "-XXX--XXXX----X-X--X-X--X----X---XX--X--XXX--X-X", "X-X-XXX-XX-XXX-X--XXX-X----X---X-XXX--X-XXXX---X", "XXXX-XX---X-XX-X---XXX--XXXX-XXX-XX-----XX-X--X-", "XXXXXXXXX-XXXXX---X-XXX--X-XX--XXXXXXX--X--X--XX", "--X-X-XX---XXX---X-X-X-X-----------XX-X---X--X--", "-X-XX-XX------XXX-XX-X---X-XXX-XXX-X-X-X-XXXXXX-", "-X--X-X--X-X--X--XXXXXXX----X-XXXXX--XX--XXXX-XX", "X-XXX-X-X--XX--X-XXXX--XX---XX-XX-XXX---XX-X-XX-", "X----XXXXX--X-XXX---X-XXXXXX---XX-X-X---XX-XXXXX", "XX--XX-----XX-X--XXX---X-XXX--XX-X---XX-XXX-----", "X-X-X-X--X----X-------XX---XX-XXX-X-XX-X--X--X--", "XXXXX-----X--XX-XXX-X-X--X-X---X----XXX-X-X---X-", "XXXX-X--XXX--X--XX-XXXX-X-X-X--XX--XXX-----X-X--", "XXX----X--XX-XXXX--XX-XX--XX--XX--XX--XXX-XXXX-X", "--X-X--XX----XXX-XXXX---XX-XXXX-X----XXXX-X---XX", "X----X-XXX--X----X--XX--XX-X-X--X-XXX-XXX---X--X", "---XX-----XX-XX-XXXX-XX-XXX-XX-X-X-X-XXXX----XXX", "-X--XX----X-XX---XXX--X-X-X--XX-XX--XXXXXX---X--", "XXX--X---X--X-X-XX-XX-X-X-X-XXX-----X--XXX--XX--", "X----XXXXX--XXX-XX--XXXX-XXX--XXX-X---X-XX--XX-X", "XX-XX-XXXX-XXX-X-X-XXXX-X---XXX---X-X--X----X--X", "-X-XXX--X--X-X-XXX-X-X-XXX--XXX--X-X--XX-XXX---X", "X-XX-XXX-X----XX---XX-X---XX--XX----XX-XXX-XX-X-", "XX-X--XX---XX--X---X---XX----X--X-----XXXXX-XX--", "XX-X-XX-XXX-XX----X-----X----X----X----X-XX----X", "X--XXX--XXX----XX-----XX-----XXX-XXXXX--X---X---", "-X----X--XX---X---XX-XXXX-XX-X--X-X----XX-X--X--", "X--X--X-X--XX-X------X--XX-X-X-XXXXXXXX---X---X-"};
    vector<string> problemTopics = {"------------------------------------------------", "-----X---------------------X--------------------", "-----------X----------------------------X-------", "-------------------X----------------------------", "----------------X-------------------------------", "------------------------------------------------", "----------------------X------------------------X", "---------------X--------------------------------", "--------------------------------------------X---", "-------------X----------------------------------", "-----------X----------X-------------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXX--X-XX-X", "X----X---X-", "XX---XX-X-X", "XX--XX-XX--", "X--XXX-X-X-", "X--X-X--XX-", "X--X-XXXXXX", "X--XXX-----", "X--X-X-X---", "X--X-X---X-", "X---XX-----", "X-X--X-X--X", "X----X-----", "XX-X-X-XX-X", "X-X--X----X", "X-X--XX-X-X", "X----X-X--X", "X----X-X---", "X---XX-XX--", "X--XXX-----", "XXXX-XXX-XX", "XX-X-X-X-X-", "XXX--XX--XX", "X--X-X---X-", "X--XXX-XX--", "X--X-XX-X-X", "X-XX-X-X---", "XX--XXXXX--", "XXXX-X-----", "X----X-----", "X---XX---X-", "X--XXX---X-", "X-XXXXXXXXX", "X--X-X-X-X-", "XX---X--X--", "X-XXXXX--XX", "X--X-X---X-", "X--XXX--X--", "XX--XXX-XX-", "X--X-XXXXXX", "X--XXX-X-X-", "XX-X-X-XX--", "X-XX-X-XX--", "X----X---X-", "X---XX-XX--", "X--X-X-----", "X----X-----"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> attendance = {"-XX----X-X-X----XX--X--X-XXXXX-X-X-XXXXXXXX-XX-", "X-XX-XX-XX-XX--X-X-X-X-XX-----XXX-XX--XX-X--XX-", "-X--X-X---XXXX--XXXX----X-X---X---XX-XX--XXX---", "X-X-X---X--X--X-XXXX-XX-XX-XXX---XXX-X-X-XX-X-X", "-X--XXXXX----XX-X--XX--XX---XX--XX---X-X-XX--X-", "---X--------X----XXXX-X-X-XX-X-X--X-XXXXX--XX-X", "XXXXXXXX--XXXXXX-X----XXX----X-XXXX-XXXX-XXXX-X", "-X-XX-XXX-X--X--X----X---X--XXXXXX--X--X-XXX---", "-XXXX-XX-X-XX--X-XX--X--X--XX---XXX--X---X----X", "-X----XXXX--X-XX-XXX------XX-XX-X-X-------X-X--", "-XX--XX-----X---X-----X--XXXX---X--X--X-XX--X--", "-XXX-X--XX-XX-XX-X--X--XX-XXX----X---XX---X-XX-", "-X----XX-XXX-XXX-XXX-X-XX-XXX-XXX--X-X----XXX-X", "-XX--X--XXX-X--X---X-XXXXX-XXX-X--XX--X-----XX-", "-XXXX-X-XX-XXX-XX----XX-X---XXXXX-X---XX-XXX--X", "X-XXX-XXXX-X-XXX--X---XXXXX-XX-X-XX----X-X--XX-", "XXXX-X-X--XX----XX-XX-X-XX-XXXX-XX-X-X-XXXXX-XX", "-XXX---------X-XXX-XX--XX----X-----X--X--X---X-", "X---X-XX--XX-XXX--XXX-XXXXX-XX---XX-X--X-XX-XX-", "X-X---XXX--XX-XX--------XXX-X-X--XX---XX---XXXX", "XXXXX----X-XX-XX---XX------X---XX---XXX---X-XXX", "XXXX--XX--X-XX-XX------X-X--X-XXXXXXXXX--X-XX-X", "X-X-XX---X-X-XX---XXXX-----XXXX--XX---XX-X-XX-X", "-X--XX----X-X-XXX-X-X----XX-X-XXXXXXX--XX--X--X", "XXXX--X---XXXX-XXXX-XX--X-----XX-X-XX--XXXX--XX", "XXX-XXXXX-XX--XXXX----X---X-XX--XX-X-X--X-XX---", "--XXXX------X-XX-X-XX-X-X-XXXXXX-X----XXXXX----", "--XXXX--X--XX-----XXXX-XX--XX-XX-XX---XXX---XX-", "XXX-X-X-XX--XXXX-X--XXXXXXX-X----XX--X-X-XXXX--", "-----X-XXXXXX-XX-------XXX-XX-----XXX---X-XXXX-", "XX--XX-----X-X-X-XX-X---X-X--XXX-X---X-XXXXXXX-", "---XXXXXXXX-XXX-X-XX-XXX--X---XX-XXX---X-XX-XXX", "-XXXX--X----XX-----X---XXX--XX---X--XX--XXX-X-X", "XXX-XXXXXXX--X---X--XX-XXXXXXXX-XXXX----X--X---", "X--X-X-X-X--XX-X----XXX-X--X-XX----XX---XXX-X-X", "X--XXX-----XXX-X--XX-X--X----XX--XX-X-X----XX--", "XX-XXX-X-X-X-XX---X-X-X--X--X-XXX-------XXXX-X-", "XXXXX----XXXXX---X-----X-X-X--X----X-X-XX----XX", "X-XX---X-XX-X-XX--X-----X---X-X----XX--XXXX----", "X--X-X-XXXXX---XX--XXX--X--XXX-X-X--X-XXX---XXX", "X---XX-X-XX-X---X--XX-X-X---XX-XX-X-X-X---XXX--", "X--X---XXX-XX-X-XXX-X-X-X-X-XXX-X-X-XXXXXXX--XX", "XX-XX------XX-XXXXX-X-XXX------X---X--XX---X-X-", "XXX---------XXXX-X-X---XX----X--X--XXXX--X-----", "----X--XX--XX-X-XX--X-X--XX-X---X-XXXXXX---X--X", "-X-X---XXXX-X-XXX-XXX--XXXXX----XXX-XX----X----", "-X-XXX-XXX-XX-XX---X-----XXXX-X--XXXX-XXXX-X---", "-XX--XX--X-X-X-XXXX-X--X-X----X-X--XXXX------XX"};
    vector<string> problemTopics = {"-X------------------------X--------------------", "--X------------X-------------X-----------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X-", "--", "X-", "--", "--", "--", "-X", "--", "--", "X-", "X-", "X-", "X-", "-X", "-X", "-X", "--", "-X", "--", "--", "--", "--", "--", "X-", "--", "XX", "-X", "--", "X-", "--", "X-", "--", "--", "X-", "--", "--", "--", "--", "--", "--", "--", "--", "--", "-X", "--", "X-", "X-", "--"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> attendance = {"X-XX---XXXX--X-------XXX-XX-X---X-X--XX---X-XXX---", "-XX-XXX--X-----X---X-XX-X-X-X-XX-XXX--X---XX---X--", "--X-X--X-XXX---XX------XXX-----X-XX-X--XX-X--X-XX-", "XX--X--X--X-XXXXX---XX-XX-XXXXXX-XX--X----X-XX---X", "----XX-XX--XXX--X-X-X----XX-XXX-XXX---X---X--XXX-X", "----XX-XX--X-XXX--XX-XXXXXX-XX---X-X---X----X-X---", "X-XX--X-XX---X-X--X-XX---X--XX-X---XXX----XXXXXX-X", "--XXXX--X--X--XXXXXX---X----X-X-XX--XX-XX-X--X---X", "XXXXX-X--XXX--X--XXXXX---X-X-------XX-XXXX-X--XX-X", "XX--XX-X------X--XX--XXX----XXXX--XX----X--XXXXX-X", "--X-X-XXX-X----X-----X----XXXXX-XXXXX--XXXX-XXXXX-", "--XX--XXX---XXXX---XXX--X-XX---X--XX-XX--X-X-XX-X-", "----X-X-XX--X-X--X-X--XXXX-X--X--XXX----XXX-X-X--X", "--X--X-X-X-X----X--X---XX-XXX-----X---X---X-XXX---", "XXX------XX-X--X-XXX---X---X--X-X------XXX-X-XXX-X", "-XXX---X-XXX--X-XXX--XXXXX--XX-X-----XXX-XXXX-----", "-X-X-XXXX-X--X---XXXXX-X---X--X--XXX-XX-XXX---XX-X", "X-X---XXXX-XX---X--XXXX-XXX--XX------XXX--------XX", "---XX---X-X-XX--XX--X-X-X-XXXXXXXX-X-X-XX---XX-XX-", "-XXXX-XX-X-XX--XXXXXXX--XX--XX-X-X--X---XX---XX---", "-X-XXX-XX-XXX-X-----X--X--XXX-XXX-XX-X--XXXX-----X", "XX---X-XX-XXXX-X-XX--XX--XXXXXX---XX--X-X--X--X--X", "----X------X-XXXX-X--------X---XX---X-X-XXX--X----", "XXX----X-----X-XX-XX---X-XXXX-XX-X-X-X-X----X---XX", "--X-X-X--XX--X-X--X--XX-XXX---XXXX-XX-XX--X--X---X", "--XX-X---XXXX-XX-X--XX-XX-X--XX-XX-X--XX--XX-XX--X", "---XX-XXXXXXXX-X-XXXXX----X--X-X-----X---X-XXXX--X", "X---XX-X-XX---X------XXX---X-XX-X---XX---XX-XXXX--", "X---XX-X--X--XXXX-XXXXXXXXX-----X--XX-X-X-X---X---", "X-XXX---X-XXXXX---X-X----XX-XX----XXXX--XX---XX---", "-----XXXX-X--X--X--X--X---XX---X---X---XXXXX--XX--", "XX-X-XXXXX---XX----X-XXX---X--X--X-X-XXXX-XXXX-X-X", "XX--XX-XX-XX---XX-X-X---XXX---XX-X---X---X-XX-XX-X", "XX--XXX-XXXXX-XXXX-------X--XXX-X-X---X---XXXX---X", "-X---X-X--X-XX--XXXX--XXXXXX---XXX--XXX-X-X---X---", "-X-X-X-X-XXX-XX-XXX---XXXX-----X-X-XXX---XX----XXX", "X--X---XXXX-X---X-X--XX--X-X-X--X-------XXXX------", "X-X-XX-XX-XX-XX---XX----X--XX-XX-XXX-X---X-X-X----", "----XX--XX-X-XX-XX--XX-XX-X--X--XX-XX----X-X----X-", "X-XXX-XXXX-XXXX--XX-XXX------X-X-XXX--XX-XX--XXX--", "--X---X-XXX-XX------XX---XX---XX-XXX--XX--XX-X---X", "X-XXX-X---XX---------XX--X--X-X-XX-X--X-X-XX-----X", "X-X---XXXXXXX---X--X-XXXXXX---X--XXX--X--XX--XXX--", "----X-X-X-XXXX---XX-X--XXXXX-----XX-XX---XX---XX-X", "X-XXXXX---XXX-X-X-XXXX-XXXXXX-X--XX--X---XXX-X----", "---XXXXXX------X---XX-XX-XXX---XX--XXX--XXX-X--XXX", "-X-X--X-X--XXXXXXX----X-XXXX-X-XXX--X-X--------X--"};
    vector<string> problemTopics = {"------------------X-------------------------------", "--------------------------------------------------", "----------X-------------X-------------------------", "--------------------------------------------------", "X--------------------------------------X----------", "--------------------------X-----------------------", "-----X-----X----------X------------X--------------", "---------------X--------------------------X-------", "-------X-X-------X-------------X------------------", "------------------------------------XX------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X-X-X----", "-X-X-X-X--", "-XXX---X--", "-XXX-X-X--", "XX-X-X----", "XX-X-XX---", "XX-X---X-X", "XX-X---X-X", "XX-XX-----", "XX-X------", "-X-X-X-X--", "-X-X-X----", "-X-X------", "-X-X-X----", "XX-XX-----", "XXXX----X-", "XX-X------", "-X-XXX----", "-XXX-X----", "XX-X----X-", "-X-X-X----", "XX-X-XX---", "XX-X---X--", "XX-XXX----", "XXXX-X-X--", "-XXX-X-X--", "XX-X-X--X-", "-X-X-----X", "XXXX-X-X--", "XX-X-X---X", "-X-X-X----", "-X-XX-----", "XXXX-X----", "-X-X---X--", "XXXX-X---X", "XXXX--X-XX", "XX-X------", "XXXX------", "-X-X-X----", "XX-XX---X-", "-X-X-X----", "-X-X------", "-XXX-X----", "XXXX-X---X", "XXXX-X----", "-X-X-X-X-X", "-X-X-X----"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> attendance = {"XX--XX---X-XXX-X-XX--X-X--X-X--X--X-X---X-XXX-X", "X-X-X-XXX---X--X-XX------X---X-XX--XX--XX-X-X-X", "-X-X-XX-X-X-----XXX-XX-XXX--XX--XX-XXXX-XXXXXXX", "-X--------X--XXX-----X--XXXXXX----XX--XX---X-XX", "-X-X-XX--X---XXX--XX--X---X-XXX----X-X-XXXXXX-X", "-X-X-XXXX-----XXXX----X---XXXXXXXX-X---X--X-X-X", "XXXX-XX--X---X--X--XXX--XXX-X-X---X-X--XX-XX---", "-X--X-----XXXXX-XXXX-XXXXX-----X-X---X-X---X-XX", "XXXXXX------XX---XX-X-X--XX--X--XX---XXXX-XXXXX", "-X------XXX-XXX---XXX----XXX-X--XX--X-X-XXX----", "-X-XXX--X-XXX--X-XXXXX-XXXX-X-XXX-XXX-X-X-XX--X", "X-X--XX-XXX-X--X-XX--XXXXXXX--X-X-XX---X----X--", "X-XXXXX-XX-XX-XXXX----X-----X--X-----XX------X-", "X-X-XXX--XXX---XXX-XX-X--XXX-XXXX--XXX-X--XX---", "X--X--XXXX-XXXX-X-XX-X---XXXX-XX---XX-XX--XX-XX", "-XX-X-XXX-XX----XX----X-XXXXXXX--XX---X--XXXX-X", "-XXXX---XXX-XXXX-X---XXXXX-XX-XX---XX-XXXX-X-XX", "---X-XXX--X--XXXXXX----X-XXX-----X-XXX--XX-X---", "XXXXXX-XX-X-X--XX--X-X----XXX------X-X--XX--X-X", "X---X--XXX-XX-XXX---XX---XX-X-XX-X-XX-X--XXX-XX", "XX-XX---X-X--XXX-XXXX-------X-----------X-X----", "XXXX--XXXXX-X-X-----XXX-XX-X-XX-X--X-X-X-XX-X--", "-------XX--X--XXXX-XXX-X-XXXXX-X--X--XXX--X-XX-", "-XX-XXX---XXXX-XXX----X-XXXX---X-----X--XX--XXX", "--X----XX------XXX--X-----XXX-X--XX-XX--X--XX-X", "---XXXX--XX---X-XX-XX-X--X-XX----XX-X-XX-XXX-XX", "-XX---X--X--XXX---XX-X--XXX------XXX-XX--X-XX-X", "XXXX--X-X-----X---------X----X--X--X--X--X-XXXX", "X-XX-X-X--XXX-XX--X-X-X--X---------X-XX--X-XX-X", "-X-X-XX----XXX--XXX----X------X--XX--XX-X-X-X-X", "X--XXXX-X--X-X--XX----XX--X---XX-XXXXXXX-X-X-X-", "---XXXXX-XXX-XXX-XXXX-XXX--X---XX-XXXX-X----XXX", "XX----XXX--XX--X-XX--XX-X-XX---X-----XXX--X--XX", "--X-XXXX-XXXX-X-XXXXX---XX-XX---X-XX-----X--XXX", "XX-XX--X-XX-XX-XX-XXX---XX----X-XXXX-X--XXX---X", "X-X-XX-XX--X--XX--XXX-X-XXX-----X-X-XXX-----XX-", "XXX--X------X-X-XX-XX-XX---X-X-X-X-------X-----", "XX---X-X--XXX--XX-XXX--X--X-X-XXXXX-XXX-X-XX--X", "-X-X-X-X---XX---X-X-X---XXX---X--X-X--X-X--XXX-", "XXX----XXX--XX---X-XX----XXXX-X-X---X-X---XXXX-", "X-XX-X-X--X---XX-X---XXX--XXXXXXX-X---X--XX--XX", "X--X-X-XXXXX-----XXXXXXX-X--X---XXX--XX-X-X--XX", "X----X--XX-XXX--XXXXX-----X--X-X--XXX-X-XXXX--X", "X---XX-X---XX-XX-XX---X-X---X-XX-X----XXXX-X-XX", "X-XXX-XXXX-X--XXXXXX-------X---X-XX-X-XXXX-X-XX", "X----XX-------X-X-XX-XXXXXXXXXX-XXXX-XX--X-X-X-", "XXXX-XXXXX-X-XX---XXX-XXXXXX-XX-X-----X----XX--", "---XXXX--XXX--XX----X--X-XXXXXXXX-X-X--XX------"};
    vector<string> problemTopics = {"-------------------------X---------------------", "-------------------------------------X---------", "--------X--------------------------------------", "---X------------------X------------------------", "-----------------------------------------------", "-------------------------X---------------------", "---------------X---------------X---------------", "-----------------X-----------------------------", "-----------------------------------------------", "------------X-------X--------------X-----------", "----------X---------------X---X----------------", "--------------------------------------------X--", "--------------X--------X--X---X------------X---", "------X-----------------------X----------------", "---------------------------------------X-------", "-----------X---------X------------X------------", "--------X------------------------------X---X---", "------X--------------------------X--------X----", "------------X-------X--------------------------", "-----------------------------------------------", "-----------X-X--X------------------------------", "-----------------------------------------X----X", "---X-------------------------------------------", "-----------------------------------------------", "-------------X-------------------------X-------", "-----------------------------------------------", "------------X----------------------------------", "---X----------------X------------------------X-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"----X-XXX--X---X---X---X-XX-", "X-X-XXXXX--X--X----X---X-XX-", "XXX-XX-XX--X-----X-X-XXX-X-X", "X---XX--X-----X----X---XXX--", "-X-XX---X--X-XX----X-XXXXX--", "--XXX-XXX--X-XX--X-X--XX-X--", "X---XX--X----XX----X--XXXX--", "XX--XX-XX-----X----XX--XXXX-", "XX-XXX-XX--X--X---XX--XXXXXX", "X-X-XX--X---------XX---X-XX-", "X-X-XXXXXXX----X--XX--XX-XX-", "X-X-XX-XX-XX-XX----X---X-XX-", "-XXXX-XXX----------X--XX-XX-", "XX--XXXXX-X--XX----X---X-X--", "X-X-XX--X----XX-X--XX-XXXXX-", "X-X-XX-XX-XX-X---X-X-X-X-X--", "X-XXXXXXX-----X-X--X-XXXXXX-", "XX--XX-XX----------X--XX-X--", "-XX-X---X--X-------X-XXX-XX-", "X-X-XXX-XX--------XX-X-X-XX-", "--X-X--XX----------X--XX-X--", "XXXXXX--XX-X-XX---XX--XX-XX-", "XXX-XXXXX--X--XX---X---X-X--", "XX--XXXXX--X-------XXX-X-XX-", "-XX-X--XX--X-------X---X-X--", "X--XXX-XX-----X--X-X-XXX-X-X", "XX--XX--X--X-------X-X-X-XX-", "--X-X---X--X-------X-XXX-X--", "XX-XXX--XX-X------XX-XXX-XX-", "-X--X--XX--X-X---X-XX-XX-XX-", "-XXXX--XX----XX-X--XX-XXXX--", "-X-XX-XXX--X--X----X--XXXX-X", "-XX-X-XXX-----X----X---X-XX-", "X---XX-XXX-X------XX-X-X-XX-", "XX--XX--XX--------XX-XXX-XX-", "XXX-XX--X--X-------X---X-X--", "----X--XX---------XX---X-XX-", "-X--X-X-X-X-------XX---X-XX-", "X---XX--XX-X------XX--XX-XXX", "X-X-XX-XX--X------XX---X-XX-", "---XX-XXX-X--------X-XXX-X--", "XXXXXX-XX------X---X--XX-X-X", "--X-X--XXX--------XXXX-X-XX-", "----X-XXX-----X----X-X-X-XX-", "--X-X-XXX-----X-X--X-XXX-X--", "XX--XX--X---XX-----X---X-X--", "X-XXXX--X--XXX-----X--XX-X--", "X---XXX-X-X--XX----X--XX-X--"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> attendance = {"XXX--X----X-X--X----X--X---XXXXXXX---XXX--X------", "X--XXX--XX----XXXXXX--X-X------X-X-X-XX-XXXXX-X-X", "-X-X---X-XX---XX----X-X---X---------XXX-X---XXXXX", "XX-XXX---X-XX-XXXXXXXX-----XX-XXX-XX--XXX-XX--XX-", "-X-----XX-XXX-XXX--X-XX---X-XXXX---XXX-XX--------", "XXXXXXX-X--XX--X--XXXXXX-X-X-X-XXXX-X-X-X--XXXXX-", "X-XX-XX-XXXX--XX-X---X---X--X---XXXXX-X-X-XX-X--X", "--X--XX-XXX-XXXXXXXX--X-X----X-X--XXX--XX--XXX-XX", "--XXXX---X-----X--------XXXXXXXX-X-XXXXX---X--XXX", "---XX-XXXXXX-X-X-X-X--XXXX-X-X--XX-XX-XXX-XX-XX--", "X-XX-----XX-XXX--X----X--X-X-XX-XXXXX--XXXX-XXXXX", "XX-XX--X---X-X-X--X-XX-XX------XXXXX-XXX--XXX-XXX", "--X----XX--XXX--X-X-X---X--X---XX-XXX-X-X---X-X-X", "----X-----XX-X-XX-XXXXX-XX---X--XXXX-X---XXX-----", "XX-XX-X-----------XXX-XX-X--X-------X-XXXXX----XX", "XX---XX-------XXXXXX---X-XXXXXX------XX-XXX-XX---", "-X-X-----XX--XXX-X-XXXX--XX-XXX--XXXXXXX-XXXX----", "---XXX---XXX-X--XXXX--XXX--XX-XXXXXXXXXX-XXX-XX-X", "X-XXXX--XXXX-XXXXX-X--X-X--X------X---X--XXX--X-X", "-X---XXX-XXX-XXXX--X---X-X-X---XXX----XX---XX-XX-", "-XX-XX---X-X---XX---XX--XX---X------XX-XXX---X--X", "-X-X----X-XXXX-X-X--XXXXX-X-XX-XX--------XXXXXX--", "-XXX-X--X--XXXXX--XX-X-X-XX-X---XXXXX-X-X-XXX-XX-", "--X-XXXX-X--XX----XXX-X-X--XX-X-XXX--X-X---------", "X---XXX-X-X-XX-X-----XXXX-XX-XX-----X-XXX-XX--XX-", "X--XX--XXX----X-X-XX-X-XXX------XXX---XX--X-XX--X", "XXX--X----X---XXX-XXXX-------X--X---XX-X-X--XX---", "----XX-XX--X-----X--XX-----XXX-X-XXXX-X-X-XX-XXXX", "-X-XX---X--X---XXX--X----XXX-X-XX-X--XXXXX-X-XXX-", "X--------X-X-X-X-X-XXX-XXX-XXXX-X-X-X--XXX-X-XX--", "-XXX-XX--X---X-XX-X-XXX-X--------X---X-X-XX----XX", "X-XX-XXXXX--X-X-XXX--XX-X--XX---X-XXX-XX-X-XXXX-X", "-XXXXXX-XXX-X-XXX-X---XX-----X-X--X-X--X---X-X---", "--------XX---XXXX-X-X---XXXXX------XXXX-XXXX-XX--", "X-X--X-X--X-X--XX-XX-X-XXXX--XXX-XX--X-XXXX--X---", "XXXX-XX----XXX-XX-X--X-XX-XX--X--X-XXX--X-XXX--XX", "----XX-X-X-XXX-XX-X--X-X-XXX-X-XX--XXX----X---X-X", "----X----X-XX---XXXX----XX----X-X-XX-XX-----XX-XX", "---XXX-----X-XX--XX--X-X-X---X-XX-XX-X--X-X-XX-XX", "-X--X--X-XX-XX-----XX-X-XX---XXXXXXXX-X---X-X--XX", "-XXXXXXXX-X-XXXX--X----X-XXXXX--X-X----X--X-X-X-X", "XX---XX-XX----XXXXXX-XXXX-X-XXX--XX---X------XXX-", "-X----XXX--XX-XXX-X-X---X---XXX-XX-X-XX--XXX---XX", "X--XX--XXXXXXXXX-XX-XXX---XXX-XX-X-XX-X-XXX-X-X-X", "X--XX-X--X-X-X---X--X-X-XX--X--XXXX---XXXXXX---XX", "--XXX-XXXXXX--XX--X--X-X-XXX-XX-XX-XXX-XXX-XXXXXX", "-XX--X-X---X---X--XX-X-X--X--X-XX-X-X-X---X-----X", "--X-X-XX--XXX--XX-X--XX--X-X-X-XXXX--X--XX-XXX---", "-X-XXX-X---XX-X--X---XXXXX---XX-----X--X-------X-", "-XX-----X-X--XXXXX-XX-X-X--XX-X--X-X-X-XX-X-XX-X-"};
    vector<string> problemTopics = {"-------------------------------------------------", "-------------------------------------------------", "-------------------------------------------------", "-------------------------------------------------", "------------------------------------------------X", "-----------------------X------------X------X-----", "------X---X------------X-----X----------------X--", "----X--------------------------------------------", "-------------X-----X-----------------------------", "------------------------------------------------X", "------------------------------------------X------", "-------------------------------------X-----X-----", "X---------------X--------------------------------", "----------------------------------------X--------", "----------X-------------------------------X------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXX------X---X", "XXXXX--X-XXXXX-", "XXXXX----X---X-", "XXXX---X--X-XX-", "XXXX---------X-", "XXXX-X-X-----X-", "XXXXX----XX--XX", "XXXXX---XX---X-", "XXXXX--X-X-X---", "XXXX-XXXX-X--XX", "XXXXX----XX--XX", "XXXXX--X-XXX---", "XXXXX----X---X-", "XXXX---XX-XX--X", "XXXXX--X-XX--X-", "XXXX------X-XX-", "XXXX----X-XX--X", "XXXXXX-XXXXX--X", "XXXXX--XXXX-X-X", "XXXX----X------", "XXXXX--X-X---X-", "XXXX------X---X", "XXXX-X--X-X--X-", "XXXX---XX------", "XXXX-XXX--X--XX", "XXXXX--X-XX-X--", "XXXX--------X--", "XXXXX--X-XX--X-", "XXXX---X---X-X-", "XXXX-X--X----X-", "XXXXX----XX----", "XXXXX----X--X--", "XXXX-X-X-------", "XXXX------XX-X-", "XXXX------X-XXX", "XXXXXX---XXXXX-", "XXXXX--X-XX----", "XXXXX--X-X-----", "XXXXX--X-XX--X-", "XXXXX--XXXX---X", "XXXXX-XX-XX---X", "XXXX--------X--", "XXXXX----XXX---", "XXXXX--X-XX--XX", "XXXXX--X-XX--X-", "XXXXXXXX-X-X-X-", "XXXXX----XX----", "XXXX---X---X-X-", "XXXX---X-------", "XXXX----X-X--XX"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> attendance = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-XXXXX-XXXX-XX-", "--XXXX-XXXX-XXXXXXXXX-XXXXX--XXXXXX-XXXXXXXXXXXX", "XXXXX-XXXXXXXXX-XXXXXX-XXX--XXXXXXXXX-X-X-XXX-XX", "X--X-XXXXXX-X-X-----XXX-XXXXX-XXXXXXXXXX---XXXXX", "-XXXXXXXXXXXXXXXXX-XXXXXXX-XXXXXXXXX-XXXXXXXXXXX", "-XXX--XXXXX-XXX-XXXXXX-XX--XXXXXXXXXXXXXXXXXXXX-", "-XXXXX-XXXXXXXXXX--XXXXXX-XXXXX-XX-XXXXXXXXXXXXX", "XXXXX-XXXXXXX-X-XXX-XXXXXXXXX-XXXXXXXXXX-X-XX-XX", "XXXXXXXXXX-XX-XX--XXXXXXXXXXXX--XX-XXX-XXX-X-XX-", "-X---XX-XXXX--XXXXXXXXXX----X-XX-XXXXXXXXXXXX-XX", "-XXXXXXXX--XXXXXX-XXXX--XXXXXX-XXXXXX-XXXXXXX-XX", "XX-XXX----X-XX-XXXX-XXXXXXX-X-XX--X-XXXXXXXX-XXX", "XXX--X-XX-XXXXX-XX-X-X-XX--X-X-XXXXXXXXX-X-XXXXX", "XXX--XXXXXX-XXX-XXXXX-XXXXXX-XXXXXXXXXXX--X--X-X", "XX-XX-XXXXX-XXX-X-XX-X---XXX-XXXXXXXX--XXXXXXXXX", "XX-XXXX-XXX-XXXXXXX-XXXXXXXXXXXXX-X-XXXX-XXXXX-X", "XX-X-XXXX-XXXXXXXX-XX-XX-XXXXXXXXXX-XXX-XX-XXXXX", "--XXXXXXXXX---XXXXXXX-XX-XX-XXXXXXX-XXXX-X-X-XXX", "XXXXXXX-XXX--XXXXXXXXXXXXXXXX-XXXXXXX--X-XX-XXX-", "XXXXXXXXXX-XX--X-XX-XXXXX-XXXXX-XX-XXX-X-XXXX-XX", "XXXXXXXX-XXX--XXXXX---XXX-XX-XXXXXXXXX-X-XX-X-X-", "XXXXXXXXXXX-XXXXXXXXXXXXX-XXXX-XXX-XX---XXXXXXXX", "XX-XXXXXXXXXXX-XXXXXX-XXXXXXX-XXX-XXX-XX--X--X-X", "XXXXXX-X-XX-XX-XXXXXXXXXX-XXX-XXX--XXXXXX-XXX-XX", "-XXXXXXXXXXXXXXXX-XX-XXXXXXX-XXXXXX---XX-XXXX-XX", "XX--XXXXX--XXXXXX-XXXX-XXXXXXXXXXX-X-XXXXXXXXXXX", "XXXXXXXXX-XXXXXXXXXXXXXX-X--X--X-XXXX-XX-X-XXXXX", "XXXXX-XXXXXX--XXXXXXXXXX-XXXXXXXXX-XXXX-XX--XXX-", "X-XXXX----XXXXXXX-XXXXXXX-X-X-XX-XXXXXXXXXXXXXXX", "-X--XXXXXXXXXXXX--XXXXXXXXX-XXXXXXXXXXXXXXXXXX-X", "XXX--XX-XXXXXXXXX-X-XXXXXXXXXXXXX-XX-XXXXX-X-X-X", "XXXXX-XXXXX-XXXXXXXXXXX-XXXX-XXXXXXX-XXX-XXX-XXX", "XX-XXXX-X-XXX-X-X--XXXX-XXXXXXXXXX-XXX-XXXXXXXXX", "XXXXXXXX-XX--XXX-XXXXXXXXXXXXX-XXX-XXXXXXXX-XX-X", "XXXXXXXXXXXXXXXXXX--XX-XXXXXX--XX-XXXXXXXXXXXX-X", "-XXXXX-XX-XXXX-X-XXXXXX-XXXXXXX-XXXX-XXXXXX--XXX", "-XXX-XX-XX-XXXXXXXXXXX--XXX-XX-XXXXXX-X-XXXXXX-X", "X-XXXXXXX-X-XX-XXXXXXX-XXXX-XX-XXXXX-XX--XX-X-XX", "XX-X-XXXX--XXXX-X-XXXXX-XXXXX--XXXXXXXX-XXX-XX--", "XXXXXXX--X-XXXX-XXXXXXXXX-XXXXXXXXXXXXXXX-XXXXXX", "XXX-X-X-XXXXX-XXXXX-XXXXXXX-X--XX---XXXXXXXXXXXX", "XXXXXXXXX-XXXXXX-X-XX-X-X--X-XXX-XXXXXXXXXX-XXX-", "XXXXXXX-XXX-XXXXXXXX-XXXXXXXXXXX--X-X-X-XXXXXX-X", "XXXXXXXXXXXX-X-XX-X-XXXXXXXXXXXXXX-XXXX--XXXXXX-", "-XXXXXXXXXXXXXXX-X--XX-XXXXXXXXX-XX--XXX-XXXXXXX", "-XXX-XXX-XXXXX-XXX-XX-XXXXXX---XXXXXXX-XX--X--X-", "-XX-XXXXXXXXXXXXXXXXXXX-XXXXXXXX-XXXXXXXXXX-XXXX", "X-XXXXXX-XX-XXXX-XXXXXXXXX-XXXXX-XXX--X-XXXXXXXX", "XXXXXX--XXXXXXXXXXXXXXXXXXX--XXXXXXXXX-XXXXXXXX-", "X-X--XX-XXXXXXXXXXXXX-XXXXX-X-XXXXXXXXXXXXXXX--X"};
    vector<string> problemTopics = {"-------------------------------------X----------", "----------------------X-------------------------", "-------------------------------------X----------", "--X---------------------------------------------", "-----------------------------------------------X", "-------------------------X----------------XX----", "----------------------------------X-------------", "------------------------------------------------", "------------------------------------------------", "------------------------------------------------", "---------------------X-----------X----------X---", "-----------------------------------X------------", "------------------------------X-----------------", "------------------------------------------------", "----------------------------------------X-------", "X-----------------------------------------------", "-------------XX---------------------------------", "---------------------X------X-------------------", "------------------------------------------------", "---------------------XX------------------X------", "-----------------------X-------------------X----", "--------------------------XX--------------------", "---------------X-------------------X------------", "------------------------------X-----------------", "X-----------------X-----------------------------", "-------X------X----------------------------X----", "------------------------------------------------", "--------X-------------------------X-------------", "-----------X------------------------------------", "-----------------X------------------------------", "--------------X---------------X------X----------", "----------X---------------------------X------X--", "---------X--------------------------------------", "----X-------X----------X------------------X-----", "------------------------------------------------", "-------------------------XX-----------X---------", "--------X---------------------------------------", "-----------------------------X------------------", "------------------------------------------------", "------------------------------------------------", "-----X--------X----X-------X----X---------------", "--------------------------------X-------------X-", "-X--X-------------------------------------------", "------------------------------------------------", "----------------X-----------X-------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXX-XXXXX-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXX--XXX-X-X-X--X-XXX-XXXXXXXXXXX-X-X-", "---XXXXXXXXXXXXXXXX-X--XXXXXXX--XXX-XXXX-XXXX", "XXX-X-XXXXXXXX-X-XX--X-X-XXX--XXX-XXX-XX-X-X-", "XXXXXXXXXXXXXXX-XXXXX-XX-XXXXXXXXXX-XXXXXXXXX", "X-XX--XXXXXXXXX-XXX-X--X-XXX-XXXX-X-XXXX-X-XX", "XXXXX--XXXXXXXX-XXXXXXXX-XX-X-XXXXX-XXXXXXXXX", "XXXXX-XXXXXXXX-X-XXXXX-XXXXXXXX-X-XXX-XX-XXXX", "XXXX---XXX-X-XXX-XXXXXX-XXX-X---X-X-XXXXXXXX-", "XXX-X-XXXXXXXXX--XXXX-XX--XXXXX-X-X-X-XX---XX", "---XXXXXXXXX-XX-XXX--XX--XXXX-----XXXXXXXXXXX", "XXX-XXXXXX--XXXX-XXXX--XX-X--X-X-XXX--XX--XXX", "X-XXX-XXXXXX-X-XX-X-X----XXXXX-X--X-XXXXXX-X-", "XXXXX-XXXX-XXX-XX-X--X-XX-XX-XXXX-XXXXXXX--X-", "----XXXXXXXXXXXXX-X--X-XXXXX----X-X-XXXX-XXX-", "XXX-XXXXXX--XX-XXXXXXX-XX-XX-XXXXXXXXXXX--XXX", "XXX-X-XXXX--XXXXX-X-XX-X-XXXXXXX--XXXXXXXX-XX", "XXXXX-XXXX--XX----X-X--X-XXX-XXXX-XXXXXX-X-XX", "-X-X--XXXXXXXX-XXXXX-XXXX-XX-X--X-X-X-XXXXXXX", "XXXXX--XXXXXXX-X-XXXXXXXX-X-XX--XXX-XXXX-XXX-", "XXXX--XXXX-XXX-X--X--XXXX-X-XXX-X-X--XXX-XXX-", "-X-XX--XXXXX-XXXXXXXXXX-XXX--X--XXX-XXXXXXXXX", "-X--X-XXXX-XXX-X--X--XXXX-XXXX-XXXXXX-XX--XXX", "XXXXX--XXX-XXXXX-XX-XXXXX-X--X--XXX---XX-XXXX", "-X-XXXXXXXX-XX--X-XXXX-X-XXXX---XXXXXXXXXXXX-", "X-X-XX-XXXXXXXXXXXX-XXXXXXX-X-X--XXXXXXXXXXXX", "-X-XX-XXXXXX-X-XXXXXX-X-XXXXXX-X--X-X-XX--XXX", "XXXX---XXXXXXXXX-XXX-XXXX-X-XXXXX-XXXXXX-XXXX", "XXXXX-XXXXXXXXXXXXXXX-XXX-X-X-XX-XX---XX---XX", "XXX-XXXXXXXXXXX-XXXXX-XX-XXXX-XXXXXXXXXX--XX-", "XXXXX-XXXX-XXXXXXXXXXXXXX-XXX-XXX-XXXXXX---XX", "XXXXXXXXXX-XXX-XX-XX-XXXXXXX-XXXX-XXXXXX-XXX-", "XXX-XX-XXXXXXXXX-XXX-X-X--X-X-X---X-XXXXXXXXX", "XXXXX--XXXXX-XXXXXXX-XX-X-X--X-XX-XX-XXXX-XX-", "X-XXXXXXXX-X-XXXXXX-XXX--XXXXX-XXXXXX-XX--XXX", "XXXXX-XXXX-XXXX--XXX-XXX--XXXX-X--XXXXXX-XXX-", "---XXXXXXXXX-XX-XXX---X---XXXX--X-XXXXXX---XX", "X-XXX-XXXXXX-X-X-XX---X-X-XX-X---XXXXXXX-X-XX", "XXX---XXXXXX-XXXXXXX-X--X-XXX-----XXX-XXX--XX", "XXXXX-XXXXXXXXXXXXX-XX-XX-X-XXX-XXX--XXXXXXXX", "XXXXXX-XXX---XXX-XXXX---X-X-XX-XXXXXX-XX-XXXX", "XXXX--XXXX-XXXXXX-X---XX--XXXXXX--X-XXXX--XX-", "-X-XXXXXXX--XXXXXXXXXX-XX-XX-X-XXXXXXXXX--XXX", "XXXX-X-XXXXXXX-X-XXXXXXXX-X-X--XX-XXXXXX-XXXX", "X-XXXXXXXXX-XX--XXX-XX-X-XXXXXXXXXXXXXXX--XX-", "XXXX--XXXX-X-XX---X-XXX---X-XX--X-X---XX-X-X-", "XXXXX-XXXXXXXXX-XXXX-XXX--XXXXXXX-XXXXXX--XXX", "-X-XXXXXXXXXXXXXXXXXX-XXXXX--X-XXXX--XXX---X-", "XXXX-XXXXXXXXXXXX-XXX-XXX-XXXXX-XXX-XXXX-XXX-", "XXXXXXXXXX-XXXXXX-X-X-XXX-XXXXX-X-XXX-XX---XX"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> attendance = {"X-XXX--XXXX-XXXX---X-X-XXXX-XXXXXXXXXXXXXX-XXX", "XXXXXXXXXXXXX-XXX-XXXX-X-XXXXXXXX--XXXX-X--XXX", "X-XXXXXXXX----XXXXXXX--XXX-X-XXXX-X-XXX-X-XXX-", "-XX-X---X-XXX-XXXXXXXXX-XXXXXXX--X-XXXXXXXXXXX", "XX-XXXXXX-XXXX-XX-XX-X-X-X-XX-X-XXXXXXXX-XXX-X", "XXXXXXXXXXXX-XXXXX-XXXXXX-XX-X-XXX-XXX-XXX-XXX", "-XX-XXX-XXX--XXXXXX-XXX-XXXX-XX----X-XXXXXX---", "XXX-XX-XXXXXXXXXXXXXXXXXXX-XX-XXXX-XX-X-XXXX-X", "X-XXXX-X-XXX--XXXXXXXXX-XX-XXXXXXXXX-XXXXXXXX-", "XX-X-XXXX--X-X-X-X-X-XX-XX--XXXXXXXXXXX-XXX-XX", "XXXXX-XXXX-X-X-XXXXXXXX-XXX-XX-X-----XX-XX-XX-", "XXXX--XX-XXXXXXXXXXXXXXXXXXXXXX-XXXXXXXXX-X--X", "XX--XXXXXXXXXXXXXXXXXXX-XXXX-XX-X-X--XXXXXX-XX", "X--X-XX---XXXXXXX--XX-XXXXXXXXXXXXXXX--X-XXX-X", "XXXXXXXXXXXXXXX-XXXXXXXXX--XX-X-XXX-XX-XXX-XXX", "X-XXXXXXXXXXXXXXXXX-X-XXX-XXXXXXXX-XXX-XXXXXXX", "-X-X-XX-XXXXX-XX-XXX-XXXXXXXXXXXXXXXX-XX-XXXX-", "-XXXXX----XXXXXXXXXX-XXX-XXXXXX--X-X---X-XXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX-XXX-XXXXXXXXXXXX-XX-X", "-X-XXXXX-XXXXXX-XXXXXXXXXXXXXX-XX-XXXXXXXXXXXX", "XX-XXXXXXXXXXXXXX-XXXXXX-XXXX--XXXXX-XXXX-XXXX", "XXXXXXXXXXX-X--X-XX-XXXXXXXXXX-XXX-X-XXXX-XX--", "X--XXXX---XXX-XXX-XXXXXXXXXXXXXX-XXXXXXXXXXXXX", "XXXX-XXXXX-XXXXXXXXX-XXX-X-XXXXXXXXXXXXXXXXXXX", "X-XXXX-XXXXXX-XXXXXXX-XX-XXX-XXX-XXXXX-X-XXXXX", "XXX-XXXXX-X-XXXX-X--XXXXXXXXXXXXXXXX-XXXXX--XX", "--XXXXXX-XXX-XXXXXXXXX---XX-XXXXXXXXXXXXX---X-", "XXXXX--X-XXXX-XXXXXXXXXXX-X-XXXXXXXXXXXX--XXXX", "XXXXXXXXX-X--XX--XXX-XX-X-XXXX-XXX-XXXXXXXXX-X", "XXXXXXX-XXXXXXXXXXXXXXXXX-X-X-XXXXX-XX--XX-X-X", "X--X-XXXXXXXXXXXXXXXXXXX-XXXXXXX-XXX--XXXXXXXX", "-X-X-XXXXX-XXXX--XXX-XXXXXXX-XXXXXXX-XXXXXXXXX", "XXXXXXXXXXX-XXXXX--XXXXXXXXXXX-XXXXXXXXXXXXXXX", "XX-X-XXXXXXXX-XXXXXXXXXXXXXXXXXX-XXXXXX-XXXXX-", "XXXXXXXXXXX-XXXXX---X---X-XXXX-XXXXXXXX-XXX-X-", "XXXXXXXXX-XX-X-XX-X--XXXX--XXXXXXXXXXXXXXXXXXX", "XXXXXXXX---X-XXXXXXXXXXXXXXXXXXXXXXX-XXXXXX-XX", "X-XX-XXXXXXX-X-X-X-X-XXXXXXXXXXXXXXX-XX---XXXX", "XXXXXXXXXX-XX-XXXXXX-XXXXXXXX--XXXXX-XXXXXXXXX", "XXXXXX-XXXXXXX-XXXXX--XXXX-XXXXXXXXXX-XXXXX-XX", "-XX-XX-XXXXX--XXX-XXXX-X-XX-XXXXX-X--XXX-XXXXX", "XXXXXXXXXXXX-XXX---XXXXXXXXXXXXX-XXX-X-XXXXXXX", "X---XXXXXXXXXXXXXXXX-XXXXXXX-XXXXXX-XX-XXX-X-X", "XXXXXXXXXXXXXX-X--XXXXXXXXXX-XXXXXXXXX-XX-XXXX", "XXX-XXXXX-XXXX-XX-XXXXXXXXXXXXXX-XXXXX-X-XXXXX"};
    vector<string> problemTopics = {"----------X-------X---------------------------", "------------X----X----------------------------", "----------------------------------------------", "----------------------------------------------", "------------------X---------------------------", "--X---------X---------------------------------", "----------------X---X-------------------------", "---X------------------------------------------", "---------------------------------------------X", "---X-------X--X------------------------------X", "---------X---------------------------X--------", "----------------------------------------------", "X----------------X-------------------X---X----", "----------------------------------------------", "----------X---------------------X---X---------", "--------------------------X-----------------X-", "-----------X----------------------------------", "-------------------------------------X--X-----", "--------X---------X---------------------------", "---------------X------------------------------", "----------------------------------------------", "----------------------------------X-------X---", "----------------------------------------------", "-----------------------------------X-X--------", "X--------X------------------------------------", "----------------X-----------------------------", "------------------X-----------------X-------X-", "X---------------------------------------------", "----------------X--X----------------------X---", "------------------X-------X-------------------", "----X--------------------X-------------------X", "-------------X--------------------------------", "----------------------------------------------", "---------------------------X------------------", "-------------X--------------------------------", "----------------X-----------------------------", "-----X-------------X--------------------------", "---X-----------X-------------------------X----", "-----------X--------------------X-------------", "-X------X-------------------------------------", "----------------------------------------------", "----------------------------------------------", "--------X-------------------------------------", "----------------------------------------------", "-------X------------------X--------------X----"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--XX-X-XX-XX-XXX-X-XX-XXX--X--XXX-X--X--XXXXX", "X-XXXXXXXXXX-XXXXXXXX-XXXXXX-XX-XX-XX-XXXXXX-", "--XXX-XX--XX-X---XXXXXX-XXXXX---XX-XX---XXXX-", "XXXXXXX-X--X-X-XXXXXX-XX-XX-XXX-XX-X---XXXXX-", "X-XXX--XX--X-XX-X-XXXXXX-X-XX-XXXXXXXXXXXXXX-", "--XX--XXXXXXXXXXXX-XX-XXXX-X---XXXXXXXXXXXXXX", "X-XXX-X---XX-X---XXXX-XX-X---X-XXXXX---XXXXX-", "XXXXXXX-X--X-XX-X-XXX-X-XX-XX-XXXXXXX-XXXXXX-", "X-XXX-XX--XXXX--XX-XXXXXXX-XX---XX-XXXX-XX-X-", "--XX---XX--XXX--XX-XXXXX---X---XX-X-XXXXXXXX-", "--XXX-XX--XXXX-XXXXXX-X-XX-X-X-XX-XX-X-XXXXXX", "XXXXXXXXXXXX-XX-XX-XXXXXXX-XXX-XXXXX--X-XX-X-", "XXXXX-X-X-XXXX-XXXXXXXX-XX-XXXXXXXXXX-XXXXXXX", "--XX--XXXX-X-XX-X--XXXX--X-XX--XXXXXXXX-XX-X-", "XXXXXXXXXXXXXXX-XXX-X-X-XXXX---XXXXXX-XXXXXX-", "XXXXXXXXXXXXXXXXXXXXX-XXXXXX-X-XXXXX-XX-XXXXX", "XXXXX--X---X-XXXX-XXXXX---X--X--XX--XXXXXXXX-", "XXXXXX-XXX-X-X-XX--XX-X--X--XXXXXXXXXX--XX-X-", "XXXXXXXXXXXX-XX-XXXXXXXXXX-XXXXXXXXXX-XXXXXX-", "XXXXX-XXXXXX-XXXXX--XXXX-XX-XXXXXXXXX-X-XX-XX", "X-XXX-XXXXXX-X-XXXXXXXXXXX-XXXXXXXXXX-XXXXXX-", "XXXXXX-X--XX-X---XXXX-XXX--X-X--XX-----XXXXX-", "X-XXX-XXXX-X-X-XXX-XXXXX-XXXXXX-XX-XXX--XX-X-", "-XXXXX-XXXXXXX--XXXXXXXXXXXXX--XXXXXXXXXXXXX-", "XXXXXXXXXXXXXX-XX-XXXXXXXXXXXXX-XX-XXX--XXXXX", "-XXX-X--X--XXX-X-X-XX-XX---X--XXXXX----XXXXXX", "X-XXX-XX--XX-XXXXX-XX-XX-XX--X-XX-XXX-X-XX-X-", "XXXXXXXXXXXX-XXXX--XXXXXXXXXXX--X--X--X-XX-X-", "X-XXX--XX--XXXX--XX-X-XX---X-X-XXXX-X--XXXXXX", "XXXXXXXXXXXXXXX-XXXXX-X-XX-X-X-XX-XXXXXXXXXX-", "XXXXX-XXXX-X-X-XX-XXXXX-XX-XXX-XXXXXXX--XXXXX", "-XXXX--XXXXX-X-XXXX-XXXX-----X-XXXX-X-XXXXXXX", "--XX-XXXX-XX-XXX-X-XXXXXXX-XX-XXXXXXXX-XXXXXX", "XXXXX-XX--XXXX-XXXXXXXXXXXXXXX--XX-XXX-XXXXXX", "--XX-XXX--XX-XXX-X-XXXXXXX-X---XXXXX-X-XXXXXX", "X-XXX--XX--X-XX-XXXXXXXX-XXX---XXXXX-XXXXXXX-", "--XXX-XXXX-XXX-XXX-XXXXX-X-XXXXXXXXXXXX-XX-XX", "--XX---XX-XX-X-XX--XXXXXX--X---XXXX-X-X-XXXX-", "-XXXXX-XXXXXXX-XXXXXXXXXXX-XXXX-XX-XXXXXXXXXX", "XXXXXX-XX--X-XX-X-XXXXX-XXXXX-XXXXXXXXXXXXXX-", "X-XXX-X-X-XX-X-XX-XXXXX--X--XXX-X--XX-XXXXXXX", "--XX---XXXXX-X-XXX-XXXXXX--X--XXXXX-XX-XXXXXX", "XXXXX---X-XXXXX-XXXXX-X-XX-X-XXXXXXXX-X-XXXXX", "X-XXXX-XX-XX-XXXXXXXXXXXX-XX-XXXXXX-X-XXXXXX-", "X-XXXXX-X--X-X-XX-XXXXXX-XXXXXXXXXXXX--XXXXXX"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> attendance = {"XX-XXXXX-XXXXXX-X-XXX-XXX-XX-XXXX-XXX-XXXXXXXXXX", "XXXXXXXXXXX-XXXXXXX-XXX--XXXX-X-XXXX-X-XXXXX--XX", "XX-X-XXXXXXXXXXXX-XXXXXXXXX-XXXXXXXXXX-XXXXXXXXX", "XXXXXXXXX-XXXX-XXXXXXX--X-XXX-XX-XXXXXXXXXXXX-XX", "XX--XXXXX-XXXXXX-XXXXXXXX-XXXX-XXX--XXXXXXXX--X-", "X--XXXXXXX-XX-XXXXXXXXXX-XXXXXXXXX-XXXXXX--X-XXX", "X-XXXXX-XXXXX-XXXXXXXXXXX--XXXXXXXX-XXXX-XXXXXXX", "X-X-X-XXXXX-XX-XXXX--X-XXXXXXXXXXXXXXXXX-XX-X-XX", "X-XXXXXXXXXXX-XXX-XXX--XXXXXXXXXXX-XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX-XXXXXXXX-XX-X-XX-XX-XXX-XXX-XXX", "-XX-XXXXXXXXXX-XX-XX-XX--X-XXXXXXXX-XXXXX-X-XXXX", "XX-X-XXXXXXX-XXXXXXX-X-XX-XXX-XXXXXXXX-XXX-XX--X", "-XXX---XXXX-XX-XXX-XX----XXXXXX-XXXX-X-XXXXXXXXX", "X-XX--XXXXX-XXX--X-XXXXX-XXXX-XXXXX--XXXXXXXXX-X", "XX-XXXXX-XXXXXXXXXX-XX--XX-XX--XX-XXXXXX-XX-XXXX", "--XXX-XXXXX--X-XXXXXXXXXXXXXX-X-XXXXXX---XXXXX-X", "XXXXXXXXXXXXXXXXXXXXXXXXXXX-XXXX-XXX--XX-XXX-XXX", "-XXXXXXXXXX-XXXXXXXX-XX-XXXXXXX-XXXXXXX-XX-X-XXX", "XXXXXXXXXXXX-XXXXXXX---XX-XXXXXXX-XX-XXXXXX-XXXX", "XX-XXXXXXXXXXXXXXXXXXXXX-XXXXXXXXX--X-XX-XXX-XXX", "-XXXXXXXXX-XXX-XXX-XXXXXXXX--XX-XXXXXXXXX-XXXXXX", "XXXXXX-XXXXXXXXXXXX-XXX-X-XXXXXXXXXXXXX-XXXXXXXX", "XXX-X-XXXXXXXXXXXXXXXXXXXXXXXXXXXX-XX-X-X-X-XXXX", "XXXXXX----XXXXXXXXXXXXXXX-X--XXX--XXXXXXXXX-XXXX", "XXX--XX-XXXXXXXXXXXXXXXXXXXX--XXXXXXX-XXX-XXXXXX", "XX-XXXXXXXX-XXX-X-XXX-XX-XXXX-XXXXX-XXXXX-XX-XXX", "---XXXXXX-XX-XXXXX---X-X-XXXX-XXXXXX--X-XXXXXXXX", "XXXXXXX-X--XXX-XX--XX-XX-XXX-XXXXXXXXX-XXXXXXXXX", "XXXXX-XX-XXX-XXXXX--XXX-X---XXXX-XXXXX-XX-XXX-XX", "XXXXXXX-XXX-XXXXXXXXXXXXXX-XXXX-XX--X--XX-XX--XX", "XXXX-XXXXX-XXXXXXX-XXXXX-XXX--X-X-XXXXXX-XXXXXXX", "-XXXXXXXXX-XXX-XXX-XX--XXXXXX-XXXXXXXXXXXX-XXXXX", "X-XXXXXXXXXXXX--XXXXXXXXX-XXX-XX-XX-X-XXXX-XXXXX", "XXXXXXX-X--XXXXXXX-XX---XXXX-XXXXXX-XXXX-XXX-XX-", "-XXX--XXXXX--XXXXXXXXX--XXXX-XXXXXXXXXXXXXXXXXX-", "XX-XXXXXXXXXX-XXXXXXXXX-XXX-XXXXX-X-XXXX-X-XXXXX", "X--XXX-XXXXX-XXXX-XX-XXXXX-XXX-XXXXXX-X-XX-XXXXX", "XXXX-XXXXX-XX-XXXXXXXXX-XXXXX-XX-XX-XX--X---X--X", "XXXXXXXXXXXXXXX-XXX-XXXXXX--XXXXX-X-XXXXXXX-XX-X", "-XXXXX-XXXX--XX-X-XXXXXX--XXX-X-X-XXX-XX-XX-XXX-", "XXXXXXX-XXX-XXX-XXXX-XXXXXXX-XXXXX-X---XXXXXXXXX", "-XXXXXXXXX-XXXXXXXX-XXXXXXXXXXX-XXX--XXXXX-XXXXX", "XXXXXXXXXXXXX-XXXXXXX-XXX-XX-XXX-XXXXX-XXXX-X-X-", "X-XX-XXXXXXXX-XXX-XXX-X-XXXXXXX--XXXXXXX-XXXXXXX", "X-XXXXXXX-X-XXX-XXXXX-X-XXXXXXX-XXXXXXXXX-XXX-XX", "--XXXXXX-XX-XXXXXXXX-XXXXXXXXXXXXXXX-XXXX--XXXXX", "XX-XXXX-----XXXXXX-X-XXX-XXXXXXXX-XXXX-XXX-X-X-X"};
    vector<string> problemTopics = {"------------------------X----------X------------", "-----------------------------------X-----X---X--", "--------------------------------------------X---", "--------------------------------------------X---", "------------------------------------------------", "------------------------------------------------", "X----------X-----------------X------------------", "-------------------------------X----------------", "----------------------------X-------------------", "---------X-X--X---X-----------------------------", "---X--------------X-----------------------------", "-----------------X------------------------------", "X-----------------------X---------------------X-", "-----------X------------------------------------", "-X-----X--------------XX------------------------", "-----------------X--------X-----------------X---", "-----------------X------X------X----------------", "--------X-----X------X--------------------------", "----X-----X-------------------------------------", "---------------------------------------------X--", "-------------------X----------------------------", "------------------------------------------------", "----------------------------------------------XX", "--------------X---------------X----X-----X----X-", "-----------------------------------X-----X------", "----X-------------------X-----------------------", "---X--------------------------------------------", "-----------------------------------------X------", "------------------------------------------------", "-X----------X---------------------X-------------", "----X----X-------X------------------------------", "------------X-----------------------------------", "--X--------------------------------------------X", "-X----------------------------------------------", "------------------------------------------------", "---------------------------------X--------------", "--------X--------------------X------------------", "------------------------------------------------", "------------------------------------------------", "------------------------------------------------", "-------------------------------X----------------", "------------------------------------------------", "----------------------------------X-------------", "-------------X------------------X---------------", "---------------------------------------X-X------", "------------------------------------------X-----", "---------------------------X------------X-------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXX-XX-XXX---XXXXXXXXXXXX-X-XX--XXXXXXXXXX", "----XX--X-XX-----XX--XXXX-XXXXXXXXXX-XXX-XXXXXX", "XXXXXXXXXXX-XXX--X-XXXXXX-XXXX-X-XXXXXXXXXXXXX-", "X-XXXX-XX-XXXX-XX-X-XXX-XXXXXX-XXXXX-XXXXXX-XXX", "----XXXXX--XXXX-XXX-XX---X-XX--X-XXXXXXXXX-XXXX", "----XXXXXXXX-X---X-XXXX---X-X-XX--XXXXXXXX----X", "--XXXXXXXXXXXX--XXXXXXX--XXXX-XXX-XXXXXXXXX-XX-", "X-XXXX-XX--XX--XX-X--XX-XX-XX-XXX-XXXXXXXXXXXX-", "XXXXXXXXXXX-XX----XXXXXXXXXXX--XX-XXXXXXXX--XXX", "XX--XXXX-XXXXXX-XXXXXXX-XXXXXXXXXXX-XXXXXXXXXX-", "--XXXX-XX----X----XXXXX-----XX-XXXXXXXXXXXXX-XX", "X-XXXX-XXXXX-X-XXX--XX--X-XXX----XXX-XXXXXXXX-X", "-XXXXX--X--X---X---XXXX-X-XXXX-XXXXXXXXX-XXXXXX", "--XXXX-XX--X---X-X-XXX----XXX--XX-XX-XXXXXXXXXX", "XXXXXX-XXXXXXX--X-XX-XX-XXXXXXXX-XX--XXXXXXXXX-", "XXXXXX--X-XX---X--XXXX--XXXXX-X-X-XX-XXX-XXX-X-", "XX--XXXXXXXXXXX-XXXXXXXXXXXXXXXXXXXXXXXXXXX-XX-", "XX--XX--X-XX-----XXXXXXXXXXXXXXXXXXXXXXX-XXX--X", "XXXXXXXXXXXXXX-XX-XXXXXXXXXXX-X-XXX-XXXXXXXXXXX", "----XXXXXXXX-XX--XXXXXX---XXX-XX-XXXXXXXXX-XXX-", "X-XXXX-----X-XXX---XXXX--XX-XXXXXXXXXXXX-XXX-X-", "XXXXXXXXXXXXXX-XXXXX-XXXXXXXXXXXXXXXXXXXXXXX-XX", "X-XXXXXXXX-XXXXXXXXXXXX--X--X-XXXXXXXXXXXX-X-XX", "XXXXXXXX--XXXX-XX-XXXXXXXXXXXX-XXXX--XXXXXX-XX-", "X-XXXX-X-X-XXX-XXX-XXXX-----XX-XXXXX-XXXXXXX-XX", "----XX-XX-X---X---XXXXX---X-XX-X-XXX-XXXXXXX-XX", "-XXXXX-XX--X-X-X-XXX-XXXX-XXX-----XX-XXXXXXX-XX", "-XXXXXXX-----X-----XXXX-X-XXXX-XXXXXXXXXXXXXXXX", "X-XXXXXXX--XXX--X-X--XX--XX-X-X-XXXX-XXXXXX--X-", "----XX--X-XXX----XX-XXX--XX-X-XXXXXXXXXX-X-X-XX", "-XXXXX-----X-XXX-X-XXXXXX-XXXX-XXXX--XXX-XXXXX-", "XXXXXX-XX--X-X-XX--XXXX-XXXXXXXXXXXX-XXXXXXXX-X", "--XXXX-XX-XXXX-XX-XXXXX--XXXX-XXX-XX-XXXXXX-X-X", "----XXXX---XXX--X--XXX---XXXXX-X-XXXXXXXXXXXXX-", "XXXXXX-X--XX---XXX-XXX-XX-XXX----XXXXXXXXXXXXXX", "--XXXXXXXXXXXX-XXXXXXXX--XXXXXXX-XX-XXXXXXX-X--", "XXXXXXXXXXX-XX---XXXXXX-XXXXX-----XXXXXXXXXX--X", "--XXXX-XXXXX-X-XXX--XX----X-XX-XXXXX-XXXXXX---X", "--XXXXXXXXXX-XX-XXXX-X---XXXXXXXXXX-XXXXXXXXXX-", "-XXXXX--X-X---X--XXXXX-XX-XXX----XX--XXX-XXXXX-", "XXXXXX-X--XXX--XXXXXXXXXXXXXX-XXXXXXXXXXXX-XXXX", "--XXXX--XXXX-XXX-X-X-XX--XXXXXXXXXXXXXXX-XXXX-X", "X-XXXXXX-XXXXXXXX-X-XX-XXXXXXXXX-XXXXXXXXXX-XXX", "XXXXXXX-XXX-XX-----XXXXXX-XXX--XX-XXXXXX-XX-XX-", "X-XXXX--X-XXX--X--X-XXX--XX-X--XX-XXXXXX-XXX-XX", "X-XXXX-XX-XX---XX-XXXXX--XX-X-XXX-XX-XXXXXXX--X", "-X--XX-XX--X-------XXX--X-XXXX-X-XX--XXXXXXXX-X"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> attendance = {"-X-X-XXXXXXXXXXX-XXXXXXXXXX-XXX---XXXXX--XXXXXX", "X-X-XX-X-X-X-XXXX-X-XXXXXXX-XXXXXXXXXXXX--XX--X", "X-XX-XXX--X-XXXXXXXXX-XXXXXXXXXXXX-XXXX-X-XXXXX", "XXXXXX-XXXX--XXX-XXXXXX-XXXXXXXXXX-XXXXXXXXX--X", "XX-X-XX-XXXXXXXX--XXXXX-XXXXXXXX--X-XX-XXXX-X-X", "XX-XXXXXX-XXX-XXX--XXXX-XXXXXXX-XXXXX-XX-X-XX-X", "XXX-X-XXXXXXXXX-XX-XXXXXX-XXXXXXX-XX-XXXXXXXX-X", "X-XXXXX-X-XXX-XX--XXX-XX-X-XX-X--XXXXXXXXXXXXX-", "XXX-X-XXXXXXX-X-XXXXXXXX-XXXXXXXXXXX-XXXX-XXXXX", "X-X-XXXXX-XX-X--XXXXXXXX-X--XXX-X-XXX-XXX-XXXXX", "X-XXXXXXXXXXX-X-XXXXXX-XX--XXXXXXXXXXXXXXXXXXXX", "X-XXXXXXXXXXX-XXXX-XXXXXXXX--XXX-XXXXXXXXXXXXXX", "XXXXX---XXXXXXXXXXX-XXXXXXXXXXXX-XXXXXXXX-X-XX-", "XXXXXXX-XXX-XX-XXXXX-XXXXXXXXXXXXXXXXXXX-XXX---", "XXX-XXXXXXXXXXX-XXXXXXXX-XX-XXXX-XX-XX--XXXXXXX", "XX-XXX-XXX-X-XXXX--XXXXXX-XX--XXXXXXXXX-XXX-XXX", "XX--XXXXXXXXXXXXXXXX---X-XXXXXXXXXXXX-X-X-XXXXX", "XXXXXXXXXX-X-X-X-X--XXXXXXX-XXXXXX-XXXXXXX-XXXX", "-XXXXXXX-X--XXXXXXXXXXX--X-X-X-XXX-XXX-XXXXXXXX", "--XXX-XX-XX-XXXX-XXXXXXXXXXXX-XX-XXXXX-X-XXXXXX", "X-X-XXXXXXX-XXXXXXXXXXXXXX-X-XXXX-XXX-X-X--XXX-", "-XXXXXXXX-XX-XXX--X-XX-XX-X-XX-XXX-XXX--XXXXX-X", "--XXX----XXX-XX-X-XXXX--XXXXXXXX-XX-XXXXX-XXX-X", "XXX-XXXX--XXXXXXXXX-X-XXX-XXX-XXX-X-XXX-X-XX-XX", "XXXXXXXXXXXXXXXXXXXXX-X--X-X-X-X-XXX-XXXX-XX--X", "-X-XXXXXXXXXXXXXX-XXXXXX--X-XXXXX-XXXXXXXXXXXXX", "-XXXXXXXX-XX--XXX--X-XXXXXXXXX-XXXXXXX-XXXX--XX", "XXXXX-X-XXXXXXXXXXX-X-XXX-XXXXXXX-XXX-XX-XX-XXX", "XXXXXXX-XXXXXXXX-----XXXXXX-XXXXXXX--XX-XXXXXXX", "-XXX-XXXXXXXXX-XXX-XXXX--XXXXX-XXX-XXXXX-XXXXXX", "XXX--XX-XXXXXXXXXXXXXXXXXXX-XXXXXX-XXXXX-XX-X--", "XX--X-XXXXXXXX--XXXXXXX-XXXXXXXX-X--X-XXX-XX-XX", "X-XXXXXXXX-X-X-XX-XXX-XX-XXXXXX--XXX-XX-XXXXXXX", "X-X--XX-XXXXXX--XX---XXXX-XXXXXXXXXX--XXX-XX-XX", "XXXXXXX-XXXXXXXXXXXXX-X-X-XX-X-XXX-XXXXXXX-XXX-", "XX-XXXXXXXXX-XXXXXX-XXXXXXXXX-XX-XXXX-XXX-X-XXX", "X-X-X-XXX-XX-X-XX-XXXXXXXXXX--X--XX--X-X-XXXXX-", "XXXX-XXXXXXX-XXXXXXXXX-X-XXXXXXXXX-XXXXX-XXXXXX", "X-XX-XXXXXXXXX-XXXXX-XXXXXXXXXX-XXXXX-XXXXXXXXX", "X-XXXXXXXXX-XX-XXXXX-XXXXXXXXXXXXXXXX-X-XXXX-X-", "-XX-X-XXXXXXXX--XXXXXXXX-XXXXXXXXXXXXXXXX-XX-XX", "XXXX-XXXXXXXX-X-XX-XXXX-XXXX-XXXXXXXXXXXXXXX-XX", "XXXXXXXX-XXXXXX-XX-XXX-XXX-X-XX-XXXXXXXX-XXXXXX", "XXXXXXXX-X-X--XXXXXXX-X-XXXXXXXXXXXXXXXXXXX-XX-", "XXX-XXXXXXXXXXXXXX--XX-X-XXXXXX-XX-XXXXXXXXXXX-", "XXXXXXX-XXXXXX----XXXXXXXX-X-XXXXXXXX--XXXXXXXX", "X-XXX-X-X-X-XXXXXXXXXX-XXX-XXXXX-X-XXXXX-XXXXXX", "XXX-XXXXXX-XX-XXXXX--XX-XXXX-XX--XXXXXXXXXX-XXX", "XXXXX--XXXXXX--XXXXX-XXXX--XXXXXX-XX--XXXXXXXXX"};
    vector<string> problemTopics = {"---------------------------X-------------------", "-----------------------------------------------", "-----------------------------------------------", "---------------------X--------------XX---------", "X----------------------------------------------", "------------------------X-X------------------X-", "-----------------------------------------------", "---------------------X-------------------------", "---------X--------X----------------------------", "---------------------------------------------X-", "------X---------------X------------------------", "---------X--------------------X----------------", "-----------------------------------------------", "-X---------XX----------------------------------", "----------X------------------------------------", "-----------------------------------------X-----", "--------------X-----------------------------X--", "--------------X-----------------------------X--", "-----------------------------------------------", "--X-----------------X---------X----------------", "----------X------------------------------------", "--X---X-----------------X--------X-------------", "-------------------------------------X---------", "---------------X---X------------X--------------", "----X--------------------------X--------X------", "-------------------------------------X---------", "----------------------------------------------X", "-----------------------------X----X--------X---", "--------------------------------X--------------", "-----------------------------------------------", "-------------------X------------------X-X-----X", "-----------------------------------------------", "-----------------------X------------X----------", "-X----------------------------X----------------", "---------------------------X-------------------", "----------X------------------------------------", "-----------------------------------------------", "--X-----------X--------------------------------", "---XX-----X------------------------------------", "---------------------X---X---------------------", "-----------------------------X-----------------", "----X------------------------------------------", "-----------------------------------------------", "--------------X--------------------------------", "---------------------------------------------X-", "---------------------------------------X-------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-XXX-XXXXXXXXXXXXXX-X-X--XXX-X-XXX-XX--XX-XXX-", "-XXXX-XXX--XX-----XX--X--XXXXX-XX---XX-XXXXX-X", "XXX-XXX--XX-X-X-XXXXXXXX-XX-XXXXX-XXXX--X-XXX-", "XXXXX-XXX--XX-XX--XXX-XXXXX-XXXX-XXXXXXXXXXX-X", "XXXXX-XXX-XXXXXXXXX-X-X--XX--X-X-XXXX--XX-XX-X", "XXX-X-XX--X-XXXXXXX-X--X--XXXX-X-XXXX-XXXXXX-X", "XXX-X-XX--XXXXXXXXXXX-X-XXXXXXXX-XXXXX--XXXX-X", "XXX-X-X--XX-X-XXXXXXX-X--X---X-XX-XXXXX--XXXXX", "XXX-X-XXXXXXXXX-XXXXX-X-XXXXXXXX-XXXXX-XXXXXXX", "-XX-X-XX-XX-X-X---XXX-----XXXXXXX--XX--XXXX-XX", "XXXXX-XXXX-XX-XXXXXXXXX-XXXXXXXXX-XXXXX-XXXXXX", "-XXXXXXX-XXXX-XXXXXXXXX-XXXX-XXXX--XXXXXXXXXXX", "XXXXXXXXXX-XXXX-XXXXX-X-XX---X-XXXXXXXXXXXXXXX", "XXXXX-XXX-XXX-XX--X-XXXX-X-XXX-XXXXXX-XXXXX--X", "-XXXX-XXXXXXXXXXXXXXX-X-XXXX-X-XXX-XXX-XXXXXX-", "XXXXXXXX-X-XX--XXXX---XXXXX-XXXXXXX-X----XXXX-", "XXX-X-X-XX-XXXX-XXX-X--XX-XXXXXXXXXXX---XXXXX-", "-XXXXXXX-XXXX--X--XX-XX-XXX-XX-XXX--X--XXXX-XX", "XXXX--XXXXX-X--XXXX---XXXXX-XX-X--X-XX-XXXXXXX", "XXXX-XXXXXXXX-XXXXXXXXX--XX--X-XX-XXXXXX-XXXXX", "XXX-X-XXXXXXX-X-XXXXX--XX--XXX-XX-XXXX-XXXXXX-", "-XXX--XX----X-XXXXX-XXX-XXX-XX-XX--XXXX-XXXX--", "XXXX--XXX--XX-X-XXXXX-X-XXXX-XXX--XXXXXXXXXX-X", "XXX-XXX--XX-XXX---XXX-X-XXX-XX-XXXXXXX---XXXX-", "XXX-X-X-X-X-XXX---X-X-X-XXXX-XXX--XXXXX-XXXX-X", "-XXX--XXXXXXXXXXXXX-X-XXXXXXXXXXXX-XX-X-XXXXXX", "XXXX-XXX-XX-X-XX--X-XXXXXXX-XX-XX-XXXXXXXXXXXX", "XXX-XXX-XXXXXXXXXXXXX-----X-XX-XXXXXXXX-XXXXXX", "-XX-XXXX-XXXXXXXXXX-XXX-XXXXXX-X-X-XXXXXXXXXX-", "XXXX--XX-XX-XXXX--X-X-XX-XX-XX-X--XXX--XX-X-XX", "-XXXX-XXX-XXXXXXXXXXXXXX-X--XX-XXX-XXX-XX-XX-X", "XXX-XXXXXXXXXXX---X-X---X-X--XXX-XXXX--XXXX-XX", "XXX-X-X-XXXXX--X--XX--X--XXX-XXX--X-X---XXX-X-", "XXX-XXXX-XXXX-X---X-XX----XXXX-X--XXX---X-X-XX", "XXX-XXX-XXX-XXXXXXX-XXXXXX--XX-X--XXXXX-XXXXXX", "XXX-XXXXXXXXX-X-XXX-X---X-X--X-XXXXXX-XX-XXXXX", "XXX-XXXX-XX-X-XX--XXXXX--X---X-X--XXX--X-XX-XX", "XXXXX-XXXX-XX-XXXXXXX-XX-XX-XX-XXXXXXX-XX-XXXX", "XXX-XXXXXXXXX-XX--X-XX-X--XXXXXXX-XXX--XX-X-XX", "XXX-XXXXXXXXX-XX--X-XX-XX--XXX-XX-XXX-XXXXX-X-", "XXXX--XXXXXXXXX---XXX-X-XXXXXXXXXXXXX--XXXX-XX", "XXXXXXXX-XXXXXXX--XXXXX--XXXXXXX-XXXXX-XX-XXXX", "XXXXX-XX-X-XXXXXXXXXXXX--XXXXX-XXXXXXXXXXXXXXX", "XXX-XXX-XXXXX--XXXXX-XXXXX--XX-X-XX-XX--XXXXXX", "XXXXX-XX-X-XXXXXXXXXX-X--X--XX-XXXXXXX-XXXXXXX", "XXX-X-XXXXXXXXXX--XXXX--X-XXXX-XXXXXX-XXXXX-XX", "XXXXX-XX-X--X-XXXXXXXXX--XX--X-XX-XXXXXXXXXXXX", "XXXXXXXXXXXXXX-XXXX--XX--XX--X-X-XX-XX-XXXXXXX", "XXX-X-XXXX-XXXXX--X-X--XX-XXXXXX-XXXX-X-XXX-XX"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> attendance = {"XXXXXXXXXX-XXXXX-XXXXXXX-X-XXXXXXXXXXXXXXXX-X", "XXXXXXXXX-XXX-X-XXX-XXXXXXXXXXXXX-XX-XXXX----", "XXXXXX-XXXXXXXXXXX-XXXX-XXXX-X-X-XXXXXXX-XXXX", "-XXXX-XXXX-XXX-XXXXXXXXXXXX-XXXXXXXXXX-X--X-X", "-XXXXX-XXXXXX-XXX-X---XXXXXXXXXXXXX-XXXXX-XXX", "XXXXXXXXXXXXXX-XX-XXX-X-X-X-XXX-XXXXXXXXXX-XX", "XXXX-XXXX-X--XXXX-XXXXXXXXX-XXXXX-XX-XX-XXXXX", "XX--XXXXX-XX--XXXXXXX-XX-XXXX-XXXXXXXXXX-XXX-", "---X-XXXXXXXXXX-XXXXXXXX-X-XXXX-XXXXXXXXXXXX-", "XXXXX-XXXXXX-XXX-XXXXXX-XXXXX---XX-XXXXX-XXXX", "XXXX--X-XXXXX-XXX-XXXX-X-X-XX-XXXXXX-XXXXXXXX", "X-XX-XXXXXXXX-X-XXXXXXXXXXXXXXXXXXXX--XXXXXXX", "XXX-XXXX--XXXXXXXX--XXXX-XXXXXXX-XXXXXXXX-XXX", "XXXXXXXXXXXXXX-X-X-XXXX-XXXXXXX-XXX-XX-XX-XXX", "-XXXXXXXX-XXXXXXXXXXXX---XXXXXXX-X-XXXXXXXXX-", "XXXX-XX-XXXXX-XXXX-XXXXXXXXX-X--X-XXXX-XXXXXX", "XXXXXXXXXXX-XX-XXXXXXXX-XX-XXXXXX--X-XXXXXXXX", "XXXXXXXXXX-XXX-XXX-X--XXXXXXXX-XXXXXXXXX-XXXX", "X---XXXX-XX-XXX--XX-XXXXX-XXXXXXXX-XXXX-XX--X", "XXXXXXXXXX-XXXXXX--XX-X-XXXXX-XX-XX-XXX-XXXXX", "XXXXXXXXXXX-XXXX-XXXXXXXXXXXX-XX-X--XXXXXXXX-", "X-XXXX-XXXXX-XX-XXXXXXXXXXXXXXX-XXXX-XXXX-XXX", "XXX--XX-XXXXXX-XXXXX-XXXX-XXXXXXXXXXX-XXXXXXX", "XXX-XXXXXXXXXXXXXXXXXXXXXXXX-X-XXXXX-XXXXXXX-", "XXXXXXXXXX--XX-XXXXXX-XXXX-XXXX--XX-XXXXX-XX-", "X-XX-X--XXXXXX-XX-XXXXX-XXXXXX----X-X--XXXXXX", "XX-XXXX-XXXXXXXXXXXXXXXXX-XXXXX-XX-XXXXXXXXXX", "XXXXXX-X--X-XXXXXXXXX-XX--XXXXX-XXXXXX-XXXXXX", "XXX--XXXXXXXXX-XXXX--XXXX-XX-XXXXXX-XX--X-XX-", "XXXXXXXXX--XXXXXXXX-X-XXXXXXXXX-XXXX--XXX-X-X", "-XXX-XXXX-X-XXXXXX-X-XX-XXX--XXX-X-XXX-XXXXXX", "XXXXXXXXXX-XXXXXXXX--X-XX-X-X--XXXXXXX-X-X-XX", "XXXXXXXXX-XXX-XX--XXX-XXXXXXX-XXXXXXXXXX-XXXX", "XXXXXXXXXXXX-XX-XXXXXXXX-X-XXXXXXXXXXXXXXXXX-", "XX-XXX-XX---XX----XX-XX-X---XXXXXXXXXXXXXXXXX", "XX-XXXXXXX-XX-XXXXXXXXXX-XXXXXX-XXX-XXXXX-XXX", "X-XXXXX-XXXXXXXXXXXXXXXXX--XXX-XXX-XXXXXXX--X", "XXXXXXX-XXXXXXXXXXXXXXXXXXXXXXXXX-XXXXXXX-XX-", "--XXXXXXXXXXXXX-XX---XXXXX--XXXX-XXXXX-XXX-XX", "XXXXXXXXXXX-X-XXXX--XXXXX-XXX-XXXXXXXX--XX---", "XXXXX-XXXXXXXXXXX-XXXXXXXXXXXXXXX-X-XXX-XX-XX", "XXXXXXXXXXXXXXX--X-XXX--XXXXXX-XXX-XXXXXX-XXX", "X--XXXXX-XXXXXXXX-XXXXXX--XX-XXXXXXXXXXXXXXX-", "XXXX-XXXXXXXXXXXXXX-XXXXXXX-XXXXXXXXXXXXXXX-X", "XXXXXXXXXX-X-XX-XXXXX-XXXX-XX-XXX-XXX-XXXXXX-", "XX---XX-XXXXX-XXXXX-XX-XXXXXXXXXXXXX-XXXXXXXX", "XXX-XXX-XXX--X-X-XXXXXX-XXX-XXXX-XXX--XXX--XX"};
    vector<string> problemTopics = {"------------X--------------X-----------------", "---------------------------------------------", "---------------X--------------X--------------", "---------------------------X------X----------", "------------X--------------------------------", "-------------X----X----X---------------------", "---------------------------------------------", "-----------------X---------------------------", "-------------X--XX------------------X--------", "-------------------------X-------------X-----", "----X--------------------------X-------------", "------------------------------X--------------", "------X----------X-------------------------X-", "------------------------------------XX-------", "XX---X-----------------------------X---------", "---------------------------------------------", "--------------X------------------------------", "---------------X-------X--X------------------", "--------------X------------------------------", "---------------------------------------------", "--X------X-----------------------X-----------", "-------X-------------------------------------", "------X---------------X----------------------", "----X-----------X----------------------------", "---------------------------------------------", "----------------------------------------X----", "---------------------------------------------", "--------------------------X------------X-----", "-----------------------X---------------X-----", "----------------X----------------------------", "---------------------------------------------", "---------------------------------------------", "------------X-----------------------X--------", "---------------------------X-----------------", "---------------------------------------------", "---------------------------------------------", "--------------------------------X------------", "---------------------------------------------", "---------------------------------X----------X", "---------X-----------------------------------", "-----------------X---------------------------", "-------------------------------------X-------", "-------------X-------------------------------", "---------------------------------------------", "-----X----------------------------X----------", "---------------------------------------------", "---------------------------------------------", "----XX-------X-------------------------------", "---------------------------------------------", "------------------------X--------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXX-XXX-XXXX-XXXXX-XXX-X-XXXXXXXXXXXXXXXXXXX-", "XX-XX-XX-XXX--XXX-XX-XXXXXXXXXXX-XXXXX--XX-XXXX-XX", "XX-XX-XXXXX--XXXX-XXXX-XX-XX-XXXXXXX-XXXXXXXXXXXXX", "-XX-XXXXXXXX-X-X-X-XXXXXX-XXXXXXX-XXXXXXXXXX-XX-XX", "XXXXX-X--XXX-X-XXXXXXX-XXXXXXXXXXXXXXXXX-X-XXXX-XX", "-XX-X-X----X-XXX---XXXXXXXXX-XXXX-XXXXXX-XXXXXXXXX", "-XX--XX----X--XXXXXX-XX-XXX--XXX--XXXX---XXXXXX-XX", "-XXX--XX-XXXXXXXXXXX-XXXX-XXXXXX-XXXXX--XX-XXXX-X-", "XX-XXXXXXX-XXX-XX-XX-XX-XXX-XXXXXXXXXX-XXXXXXXX-X-", "-X----XX-X--XX-XX-XXXXX-X-XX--XX-XXXXXXXXXXX-XX-XX", "XXXXX-X--X-X---XX-XXX---XXX-XXXX-XXXXXXX-X-X-XX-X-", "XX-XX-XX-X-XX--XX-XXXXX-XXXXXXXX-XXXXXXXX--XXXX-XX", "XXXXX-XXXXXXXXXXXXXX-XXXXXXXXXXXXXXX-XX-XXXXXXXXX-", "XXXXX-XX-X-XXX-X---XXXX-XXXX--XXXXXXXXXXXXXXXXXXXX", "XXX-X-XXXXXXXX-XX-XX-X-XXXXX-XXXXXXX-X--XXXX-XXXX-", "XX-XX-XX-X--XXXXXXXX--X-XXXXXXXXXXXXXX-XXX-XXXX-XX", "XXX-X-XX-XXXX-XX---X-XXXXXX--XXX-XXXXX-XXXXX-XXXXX", "XX-XX-XXXXX-XXXX-X-XXXXXX-XXXXXXXXXXXXXXXXXXXXXXXX", "XX--XXXX--XX-X-XX-XX-XX-XXX---XXXXXXXXXXXXXX-XXXXX", "XXXXX-X---XX-X-XX-XXXXXXXXX--XXXXXXX-XXX-XXXXXXXXX", "XXX-XXXX-XXXXX-XXXXXXXX-XXXXX-XXXXXX-X-XXXXX-XXXXX", "-X-X-XXX-X-X---XX-XXXX-XXXXXXXXX-XXXXXXXXXXXXXXXXX", "XXXXXXXXX--XX-XX-X-XX-X-XXXXXXXXXXXXXXXXX-XXXXX-XX", "XX-XXXXX-XX-X-XXXXXXXXXXXXXXXXXX-XXXXX-XXXXXXXXXXX", "XXXXXXXXXX-XXX-X---XXXXXXXX-XXXXXXXX-X-XXXXXXXXXXX", "XX-XX-X--X-----X---X----XXXX-XXXXXXX-X-X--XXXXX-XX", "XXX-XXXXX--XXXXXXXXX--XXXXXXXXXXXXXXXXXXXXXX-XXXXX", "XXXXXXXXX--X-XXXXXXX-X-XXXXXXXXXXXXXXXX-XXXXXXXXX-", "XXXXXXXXX--XXX-X-X-XXXX-XXX--XXXXXXXXX-XXXXXXXX-XX", "XXXXXXXX-X-X--XXXXXX-XXXXXXXXXXX-XXXXXX-X-XXXXXXXX", "-XX-X-XXXX-XXX-XX-XX-XX-XXXX-XXXX-XX-XX-XXXX-XX-XX", "-X--XXXXX-X-XXXXXXXXXX-XX-XXXXXXX-XXXXXXXXXXXXXXXX", "XXXXX-X--XXX-XXXXXXX-XX-X-XXX-XXXXXXXXX--X-XXXX-XX", "-X-X-XXXXXXXXXXXX-XXXXXXXXX-XXXX-XXXXX-XXXXXXXXXX-", "-X--X-X---XX-XXX---X-X--XXX---XXX-XXXXX--XXXXXXXXX", "XXXXX-XX-X-XXX-XXXXX-XXXXXXXXXXXXXXXXXXXXX-XXXX-X-", "XX--XXXXX-X--X-XX-XXX-XXXXX-XXXXXXXXXXXXXXXX-XXXXX", "XXXXXXXXXXXXXXXXXXXX--XXXXXXXXXXXXXXXX-XXXXXXXXXXX", "-X--X-XXXXXXXX-XX-XXXXXXXXX-XXXXX-XX-XXXXXXXXXXXXX", "XXXXX-XX--XX-XXXXXXXXXXXXXX--XXXXXXXXX-XXX-XXXX-XX", "XXXXXXX---XX-X-XXXXX-XXXXXX--XXXXXXXXX-X-XXX-XX-XX", "XX--X-XX-XX-XXXXX-XXXX--XXXX--XXXXXXXXXXXXXX-XXXXX", "XXXXXXX---XX-X-XXXXX-XXXXXXXXXXXXXXXXX-X-XXXXXXXX-", "-XX-XXXXXX-X-XXXXXXXXXX-XXXXXXXXX-XXXXXXXXXXXXX-XX", "-X-X-XXXXXXXX-XXX-XX-XXXXXX-XXXX-XXXXX-XX-XXXXXXXX", "XXXXX-XX-X-XX-XXXXXX----XXXXXXXX-XXXXXXXXX-XXXX-XX", "-XX---XX-XXXX-XX---XX-X-XXXX--XX--XX-XXXX-XXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> attendance = {"XX-XXXX-XX-XXXXX--XXXXXXXX-XXXXXXXX-XXXXXXX--X-", "XXXXXX-XXXXX-XXXX-XXXXX-X-XX-XX-X-XXXXXXXXXXXX-", "XXX-XXXX-X-XXX-X-XXXXXX-XXXX-X-X-XX-XXXXXXXX-XX", "-XXX--XX-XXX-X-XXXX-XX-XXXX--XXXXXXXXXXXX-XXX-X", "XXXXXXX-XXXXXX--X-X-XX--XXX--XX--X--XXXXXXX-XXX", "X-XXXXXX-XXXXXXXX-XXXXXXX-X--X-XXXXXXXXXXXXXXXX", "XXX-XXXXX-XXXXXXX-X-XXX-XXXXX-XXX-XXXX-X-X--XXX", "X-XX-X-XXXXXXXXXXX-X-X-X-XX-XXXXX-XXX-XXXXX-XXX", "-XX-XXX-XXXXXXXXX-X--XXXX-XXXXXXXXXXXXXXXXXXX-X", "XXX-XXXXXXXXXXXXX---XXXXXXXXX-XXXXX--XX--XXXX-X", "--XXXXXXX-X-XXX-X-X-XXXX-XX-XX-X-XXXXXXXXXXXXXX", "XXX-XX-XX-XX-XXXXXX-XXX-XXXXX-XX--X--X--XXXXXXX", "XXXXXXX-XXXXX-XXX-X--XXXXXXXXXXXX-X-XXXXXXXX-XX", "--X-XXXXXXXXX-----XXXX-XX-XX-X-XXXX--XXXXXXXXXX", "XXXXXX-XXX--XX-XXXXXX--X--XXXXXXXXXXXXXX-XXXXXX", "XXXXX-X-X---X--XXXXXXX-XXXXX-XXXXX-XXXX-XXXX-XX", "-XXXX-XX-XXXXXX-XXX-XX-X-XX-XX--XXX-XXXXXXXXXXX", "XXXXX-XX-XXXX--XXXXXXXXXXXXXXXXX--XXXX-X-XXXX-X", "XX-X-XXXX-X-XXXX-XXXXXXX---XXXXXXX-X-XXXX-XXX-X", "---XX-XXXXXXXXXXX-X-XXXXXX-XXXXXXX--XXX-XX-XXXX", "XX---XX-XXXXXXX-XX-XXXXXX-XXXXX-XXXX-XXX-XX-XXX", "XX-XXXXXXXX-XXXXXX-XXXXXXXXXXX-XX--X-X-XXXXXXXX", "XX-XXXXXX-XXXXX-XXX-XXXX-XX----X-X-XX-XXX--X-XX", "XXXXXXXXXXXXX-XXX-XXXXXXXXXXX--XXX--XXXXXXX-X-X", "XXXXXX----XXXX-XXX-XXXX-XXXXXXX-XXXXXXXXXXX-XXX", "XXXX-XXXXXX--XXX-XXXXXXXXXX-XXX--XXXXXXXXXXXXXX", "X-XX-XXXXXX-X-XXXX-XXXX-XXXXX-XXXXX---X-XX-XXXX", "XXXXXXXX--XXXX-X-X-X-X-XXXX-XXXXXXXXX-XXXXXXX-X", "XXXXXXXXXXXX--XXXXX--XX---XXXXXXXXXXXXXXXX-XXXX", "X-XXX-XX--XXXX-XX-XXXXXXXXXXXXXXXXX---XX-X-XXXX", "XXXXXXX-XX-XXXXXXXX-XXX-XXXXXXXXXXXXXX--XX---XX", "--XXXXXXXXXX-XXXXXXXXXXXXXX-X-XXXXXX-XXXXX-XXXX", "XX-XXXX-XX-XX-XXX-XXXXXXXXXX-XXXXXXXXX-XXXXXXXX", "XX--XXXXXXXXXXXXXXXXXXXXX-XX-XXXXX--XXXXX-XX-X-", "X-XXXX-XXX-XXX-XX-XXXXX--XXXXXX-XXXXX-XXXXXXXXX", "X-XXXXXXXXX-X-XX-XX-XXXXXXXXXXXXX-XXXXXX-X--XXX", "X-XXX-XX--X-XXXXXXXXXXXXXXXXXX-XXXX-XXXXXXX-XX-", "X-XX--X--XXXXXXXXX-XXX-XX-XXXXXXXXXXXXXXXXXXXXX", "-XXXX-X-XXXX-XXXXX-XXXXX-XXXXX-XX-XXXXXXXXXXXX-", "--XXXXXXX-XX-XX-XX-XXX-XXXX-X-XXXXXXXXX-XX--XXX", "XXXXXXXXXX-X-XX-XXXXX-XXXXXXX-XXXXX--XXXXXXXXXX", "XXXXXXXXXXX-XX--XXXXXXX--XXXXXXXX--XXXXXXXX-XXX", "--XX-XXXXXXXXXXXXXX-XXXX--XXXX-XX-XXXX-XX-X-XXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX-XXX-XX--XX-XXXXX-X-X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX-XXXXXXXXXXXXXXXXX", "---XXX-XXXXXXXXXXXXX-X-XXXXXXXXXXX-XXX-XXXXXX-X", "XXXXXXX-XX--XXXX-XXXXX-XXXXXXXXX-XXXXX-X-XXXX--", "-XXXXXXXX-X-XXXXXXXX-XXXXXXXXXXXXX-XXX-XXXXXX-X", "-XXXXXXXXXXX-XXXXXXXXXXXXX-XXXXXXXXXXXXXXXXXXXX", "-XX-XXX--XXX-XXX-XXX-XXXXXXXX-XXXX-XXXXXXXX-XX-"};
    vector<string> problemTopics = {"----X--------------X----X---X-----------------X", "------------X----------------------------------", "--------------------------------------------X--", "-----------------------------------------------", "--X------------------------------X-------------", "X--------------------X-------------------------", "-----------------------------------------------", "-----------------------------------------------", "-----------------------------------------------", "------------X----------------------X--X--------", "-----------------------------------------------", "------------------------------------------X----", "--------------------X--------------------------", "-----------------------------------------------", "-------------------------X---------------------", "--------------------------------X--------------", "------------------------X---X------------------", "---------------------X--------------X----------", "----------------------------------------X------", "-----------------------------------------------", "---------------------------------------------X-", "-------X---X--X------------------X-------------", "-----------------------------------------------", "-----------------------------------------------", "---------------X-------------------------------", "---X-X-----------------------------------------", "----------------------X-X------------X---------", "-----------------------------------------------", "----X---------X--------------------------------", "----------------------------------------X------", "-------------------X---------------------------", "-----------------------X-X---------------------", "-----------------------------------------------", "-----------------------------------X-----------", "X--------------------X--------X--X---------X---", "----------------------------------------X------", "---------X--------------X----X--X------------X-", "----X-X------------------------------------X---", "-----------X-----------------------------------", "-----------------------------------------------", "-----------------------------------------------", "-----------X-----------------------------------", "-X-------------X----------X-------------X------", "-----------------------------------------------", "----------X--------------X-----------X---------", "-------------------------------X---------------", "----------------------X------------------------", "-----------------------------------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X-X-XXXX-XXXXXXXXXXX-XXXXXXXXXXX--XX-XXXX-X-XXX", "--XX-XXXX-XXXX-X-XXXX-XXXXXXXXX-XX-XX-XXXXXX--XX", "-X-XXXXXX-XXXXX--XXXX-XXX-XX-XX-X--X-XXXXXXX-XXX", "--XXX-XXX-XXXXXX-XXX--XXX--X-X-XXX-X--XXXXXXXX-X", "-XXXXXXXX-XXXXX--XXXX-XX-X-X-X--X--X--XXXX-XX--X", "-XXXXXXXXXXXXX-X-XXXXXXXXXXXXXX-XX-XXXXXXX-X-XXX", "-XXX-XXXX-X-XXXXXX-XX-XXX-XXX---XX----XXXX-XXXXX", "-XXX-XXXXXXX-XXX-XXXX-XXXX-X-XXXXX-X--XXXX-X-X-X", "-XXXX-XXXXXX-X-XXXXX--XXX-XXXX--XX-X-XXXXXXX-XXX", "-XXXXXXXX-XXXXXXX--X-XXXX-XXX--XX-X--XXXXX-XXXXX", "-XXXX-XXXXXXXXX--XXXX-XX-X-XXX-XXX-X-X-XX--XXXXX", "--XX-XXXX-XXXXX-X-XXX-XXX-XXXX--X--X--XXXXXXXXXX", "-X-X-XXXX-XX-XXXXXXXX-XXXXXXXX-XX--XXXXXXXXXXXXX", "-XXXX-XXX-XXXX-X--XXX-XX---X-XX-X--XXXXXXX-X-X-X", "-XXXX-XXXXXXXX-X---XX-XXXX-X--X-XX-----XX--X-X-X", "-X-XXXXXXXXXXXXX-XXXX-XXX--X-XXXXXXX-X-XX-XX-X-X", "-XXXX-XXX-XXXXXX-XXXXXXX---XXX-XX--X-XXXXX-XX--X", "XXXX-XXXX-XXXXX-XX-X--XXX-XX--XXXX---XXXXX-XXXXX", "-XXX-XXXXXXXXX-X--XX--XXXX-X-XX-XXXX---XX--X-XXX", "-XXX--XXX-X-XXXXXXXXXXXXX-XXXX-XX--XXXXXXX-XXXXX", "-XXX-XXXXXXXXX-XX--XX-XX--XX--X-XX--X-XXXX-X--XX", "XXXX-XXXX-XXXXXXX-XXX-XXXXXXXXXXXX-XXX-XX-XXXXXX", "-X-X-XXXXXX-XXX--XXXXXXX-X-XXX-XXX-X-XXXXX-X-XXX", "XXXXXXXXX-XXXXXXXXXX-XXXXXXXXXXXX--X--XXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX-XXXXXX-XX-XX-X--XXXXXXX-XX", "--XXXXXXX-XXXXX-XXXXX-XXXXXX-XXXXXXX---XX-XXX-XX", "-XXXXXXXX-X-XXXXX-XXX-XXXX-X-XX-X-XX---XX--X-XXX", "XXXXXXXXXXXX-XXXXXXX--XXXX-X-XXXXXXX-XXXXXXX-X-X", "--XXXXXXX-X--X-X-XXXXXXXXX-XXX--XXXX-XXXXXXX-XXX", "XXXXXXXXX-X-XXXXX--XX-XXX--X--XXX-X--XXXXX-X-XXX", "-X-XXXXXX-X-XXXXXXXXX-XXXXXXXX--XX-XX-XXXXXX-XXX", "X-XXX-XXX-X-XXXXX-XXXXXXXXXXXXXXXX-X-XXXXX-XXXXX", "-XXX-XXXX-XXXXXX-XXXX-XXXXXXXXXXXXXXXXXXXXXX-XXX", "-X-X-XXXX-XXXX-X-XXXXXXXX-XXXXX-X-XXXXXXXXXX-XXX", "-XXXXXXXXXXXXXXX-XXXX-XXXX-X-XX-XXXX--XXXX-X--XX", "-XXX-XXXXXX-XXXXXX-XX-XXXXXXX--XXX--X--XX--XXXXX", "-XXXXXXXX-XXXXXXXXXXX-XXX-XXXXXXX--X---XX--XXXXX", "-XXXXXXXXXXXXX-XXXXXX-XXX--X-XX-XXXXX-XXXX-X-X-X", "--XX--XXX-XXXXXX-XXXX-XXX--XXXXXXX-X-XXXXXXXXXXX", "X-XXX-XXX-X-XXXXXXXXXXXX-X-XXXXXXX-X--XXXX-XXX-X", "X-XXX-XXX-XXXXXXX-XXXXXX-XXXXXXXX--X-XXXXX-X-XXX", "-XXX-XXXXXXXXXXX-XXXX-XX-X-X-XX-XX-X---XX--XXXXX", "-XXX--XXX-XXXX-X-XXXX-XXXX-X-X--XX-X--XXXX-X-XXX", "XXXX-XXXXXXXXXXXXXXX--XXXX-XXXXXXX-X--XXXX-X-XXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-XXXXXXXXXXX", "XXXX--XXX-XX-XXXXXXX-XXXXX-XXXXXXX-X--XXXX-XXX-X", "-XXXXXXXX-XXXXX-XX-X--XXXX-XX-XXXXX--X-XX--X-X-X", "XXXXX-XXX-XX-XXXXXXX--XXXXXXXXXXXX-X-X-XX-XXXXXX", "X-XXX-XXX-XXXXXXXXXXXXXXXXXXXXXXXX-XXXXXXX-XXXXX", "--XXX-XXX-XX-XXXXXXXX-XXX-XXXXXXXX-X--XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> attendance = {"-XXXXX-XXX-XXX-XX-XX-XXXXXXXXXXXXXXX-XX-X-XXXXXXX", "XXXXX-XX-XXXXXXXXXX-XXXX-XX-XXXXXXXXXXXXX-X-XXXXX", "XX-XXX-XX-XX-XXX--XXXXX-XX-XXXXXX---X-XXXXXXXXXXX", "-XX-XXXXXXXXXXXXXXXXXX-XX-XXXXXXXXX-XXXXXXXXXX-X-", "XXXXXX--XXXXXXXXX-XXXXXXXXXXXXXXX-XXXXXXXXXXX-XXX", "XX-XX-X-XXXX-XXXXXXX-XXXXXX-XX-XXXX-XXXXXX-X-XXXX", "XXXXXXXXXX--X-XXX-XXXXXX--XXXXXX-XXXXXXXXXXXXXXX-", "XX-XXXXXXX-XXX-X--XX-XXX-XXXXXXXXXXXXXXXXXX-X-XXX", "XXXXX-XXX-XXXXXXXX-XXXXXXXX-XXX--XXXXXXXX-XXXXXXX", "X-XX-XX-X-XXXX-X-X--XXXXXXXXXX-X-X-XXXXXXXXXXXXXX", "XX-X-XXXXXXXXXXXXXX-XXXXXX-XXX-XXXXXX-XXX-XXX--X-", "X-XXXX--XXX-XX-XXXXXX-XXX--XXXXXXX-XXXX-X-XXXXXX-", "--XXXXXX--XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXX-X-X-XXXX-XXXXXX-XXX-XXXXXXX-XXXXXXX-XXX-XX", "XXXXXX-XX-XXXXXXXXXXXXXX-XXX-XXX-X-XXXXX--XX--XX-", "XXXX-XX--XX-XX-XXX-XXXX-XXX--X--XXX-XX--XX-XXXXXX", "XXXXXXXXXXXXXXXXX-X-X-XXXXXXXXX--XXXXXXXXXXXX-XXX", "XXXXXXXXXXXXXXXXX-X-XX-X-XXX-X--XXX-XXXXX-XXXX-XX", "XXXXXXXXX-XXXXXX-XXXXXXXXXXXXXXXX-XXXX--XXXXXXXXX", "X--X-X--XXXX-X-XXXXXXXXXXXX--XXX-XXXXXXXXX--X--XX", "XX--XXXXXX-XXXXX--XXXXXXX-XXX-X-X-XXXXXXXXXXXXXXX", "XX-XXXXXXX-XXX--X-XX-XXXXX--XXXXXX-XX-XXXXXX-XX--", "XX-XXXXXX-XXXXXX--XX-XXXX-XX-XXXXXXX-XX-X-XXX-X-X", "XX-XXXXXXXXX-XX-X--X-XX---XXXX-XXXX-XXXXXXXXXXXXX", "XX-XX--X--X-X---XXXXXXXXXXXX-XXXXXXXXXXXX---X-X-X", "X-XX-XXXXXXXXX---XXXX-X-XXXXXXX-XX-XXXXX-XXXXX---", "XXXX-XXXXXXXXXXXXXX-XXXXXXXXXXXXXXXXXXXX-XXXXXXX-", "-XX---XX-XXXX-XXX-XXXXXX-XX--XXXXX--XXXXXXXX-XXXX", "XX-XXXX-XXX-X-XXX-XXXXX-XXXXXXXXXXXXX-XXXXXXXX-XX", "XXXXXXXX-XXX-X-XX--XXXXXXXXXX-XXXXXXXX--XX-X--X-X", "XXXXXX-X-XXXX-XX-XXX-XXXX-XXXXXXXXXX-XXXXXXXX-X-X", "-X-XXXXXXX---XXX---X-XXXXXXX-XXXXXX-XXXX-XXXXXXXX", "XX-XXXXX-XXXXXXX-X-XXXXXX--X----X-XXXXXXXXXXXX--X", "XXXX-XXXXXXXXXXXXXXXXXX-XX---XXXXX-XXX-XXXXX-XXXX", "--XX-XXXX-X--XXXXX-XXXX-XXX-XXXXXX-X-XX-X-XX-XXXX", "-XXXX-XXXXXXXXX-X-X-XX-XXXXXXXXXXXXX-XXXXXXX-X-X-", "X-XXXXXXXXX-XXXXX-XXXX--XXX-XXXXXXX--XXXXXXXXXX-X", "XX--XXXXXXXX--XX-X-XX-XX--X-XX-XXXXXXXXXX-XXXXX-X", "X-X-XXX-XXXXX-XXXX-XXXXXX-XX-XXXXXXXXXX-X-XXXXXXX", "X-XXXXXXXXX-XXXXXXXXXXXXX-XX-XX-XXXX-XX-XXX-X-XXX", "X-X-XXXXXX-XXXXX----XXXX-X-XX-XX-XXXXXXXXXX-XX-XX", "XXXXXXXX-XXX--XXXXXX-XXXXXXXXXXXX-XXX-XXXXX--XXXX", "XXXX-XXXXXX-X-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-XX", "XXXXXX--XX-XXXXXX-XXXXXXXXXXXXXXXXXXXXXXXXXX-XXXX", "-XX-X--XXXXXXXXX--XXXXXXXX-XXXXXXXXX-X-XXXXXXXXX-", "XX-XXXX-X-XXXX-XXXXXX--XXXX-XX-XXXXXX-XXXXX-XXX-X"};
    vector<string> problemTopics = {"----X-------------X------------X----X------------", "----------------------------------------X--------", "-------------------------------------------------", "-------------------------------------------------", "------------------------------------------------X", "-------------------------------------------------", "-------------------------------------------------", "-------------------------------------------------", "-------------------------------X-----------------", "-------------------------------------------------", "-------------------------------------------------", "-----------X-----------------------------X-------", "-------------------------------------------------", "-----X--------------------------X----------------", "---------X---------------------------------------", "-------------------------------------------------", "----------------------------------------X--------", "--------------------------------X----------------", "-----------------X--X-------------X--------------", "---------------------------------X---------------", "-------------------------------------------------", "-------------------------------------------------", "----------------X----X---------X-----------------", "----------------------------------------------X--", "-----------------------------------X-------------", "--------------X----------------------------------", "-------------------------------------------------", "-------X----------------------------X------------", "-------X--X-------X-X----------------------X-----", "---------------------------XXX-------X-----------", "---------X---------------------------------------", "--X-------X---------------X--------X-------------", "-------------------------------------------------", "-----------------------------X-------------------", "-X---------------------------X-----X------X------", "-------------------------------------------------", "---------------X-------------X-------------------", "----------------------X----X---------------------", "--------------------------------X----------------", "--------X--------------------------------------X-", "-------------------------------------------------", "-----X-------------------------------------------", "------------------------------X---X--------------", "--------------------------------------X----------", "---------X-------------X--------------------XX---", "---------------X-----------X-X-----X-------X-----"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-XXXXXXXXXX-XXXXXX-XXXXXX-X--XX-XXXXXXXXXXXXXX", "XXXXXXXXXXX-X-XXXXXXXXXXXXXX--XXXXXXX-X-X-XXX-", "XXXXXXXXXXXXXX-XXX--XX-X-XXXX---XX-XXXXXXX-X--", "XXXX-XXXXXXXXXXXXXXXXXX--XXXXXX-XX-XX-XXXXXXX-", "XXXXXXXXXXXXXXXXXX--XXXXXXX--XXXXXXXXXXXXXXX-X", "XXXXXXXXXXXXX-XXXX-XXXXX-XX---X-XX-XX-XXX--X--", "XXXX-XXXXXX-X-XXX--XXXXXXXXX-XX-XXXXXX-XXXXXXX", "XXXXXXXXXXXXXXXXXX-XXX-XX-XX-XX-XXXXXXXXXXXX--", "-XXXXXXX-XX-X--XX-XXXX-XXXXX---XXXXXX--XX-XX--", "-XXXXXXXXXXXX--XX--XXX-XX-X--X-XXX-XXX-XXX-X-X", "-XXX-XXXXXX-XXXXXXXXXXX-XXXXX-X-XXXXXXXXXX-X-X", "XXXX-XXXXXX-XXXXXX-XXX-XX-X--XX-XX-XXXXXXX-XXX", "XXXXXXXXXXXXXX-XXXXXXXXXXXXXXX-XXX-XXXX-XXXX-X", "XXXXXXXXXXXXXXXXXX-XXXX-XXXX-XX-XX-X--X-XX-XX-", "X-XX-XXXXXX-X--X---XXXXXXXXXX--XXXXXXX-XXX-X-X", "-XXXXXXX-XX-XXXXXXXXXX-X--X---X-XX-XX-X-XX----", "-XXXXXXX-XXXX-XXX--XXX-XXXXXXXXXXXXXXX-XXXXX-X", "-XXXXXXX-XX-XXXXXX-XXX---XXXX-X-XX-XX-XXXX-XX-", "XXXXXXXXXXXXXX-XXXX-XX-XXXXXXX-XXXXXXXXXXXX--X", "-XXXXXXXXXXXX-XXX-XXXXX-X-X---X-XX-XX--XXXXX--", "-XXXXXXX-XXXXXXXXX--XX-XXXXX--X-X--X-XXXXXXXX-", "XXXX-XXXXXXXXXXXXX-XXXXXX-XX--X-XXXX--X-XX-X--", "-XXXXXXXXXX-XX-XXX-XXX-XXXX-----XXXXXXX-XXXX-X", "-XXXXXXXXXXXXXXXXX-XXXXX-XXX-XX-XX-X-XXXXX-X--", "XXXXXXXXXXX-X--XXXXXXXXXX-XX----XX-X-XX-X-XX--", "--XX-XXX-XXXXXXX-X-XXX--X-XXXXXXXX-X-XX-XX-X--", "--XX-XXXXXXXXXXX-XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-XXXXXXXXXXXX-XXXX-XXXXX-XXXX-X-XX-XX-X-X--X--", "XXXXXXXXXXX-XXXXXX-XXXX-XXX---X-XXXXXXXXXXXX-X", "-XXXXXXXXXXXXXXXXX-XXXXXX-XX--XXX--X-XX-XXX---", "-XXXXXXXXXXXXXXXXX-XXX-XXXX--XXXXXXXXXX-XXXX-X", "--XXXXXXXXX-XXXX-X-XXX-X-XXX--X-XX-XXXXXXXXXX-", "-XXXXXXX-XXXXXXXXXX-XX--XXXX--X-X--X-XX-XX-XX-", "-XXXXXXXXXXXXXXXXX-XXXXXXXXXX-X-XXXXX-XXXX----", "-XXXXXXXXXX-XX-XXX-XXXXXXXX----XXX-XX-XXXX-X--", "-XXX-XXXXXXXX-XXXX-XXXX-XXX-XXXXXXXX--XXX-XX--", "-XXXXXXXXXX-XXXXXX-XXXXX-XX-X-X-XX-XX-X-XXXX--", "-XXXXXXXXXX-XXXXXXXXXX-XXXXX--X-XXXXX-X-XX-XX-", "-XXXXXXXXXX-XXXXXXXXXXXXXXX---XXXX-XXXXXXXXXXX", "-XXXXXXX-XX-XXXXXXXXXX-XXXX---XXXX-XXXXXXXXX--", "-XXXXXXXXXXXX-XXX--XXX--XXXX--X-X--X-X-XXXXXX-", "XXXXXXXXXXXXXXXXXX--XXXXXXXX--XXXXXXXXX-XXXX--", "-XXXXXXXXXX-XXXXXXXXXXX-XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX-XXXXXXXX--XX-XXXXXXXXXXXX-X", "-XXX-XXXXXXXX-XXXX-XXX-XXXX-XXX-XXXXXXXXX-X-XX", "XXXXXXXXXXXXXX-XXXXXXX-XX-X-----XXXXX-X-XX-X--"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> attendance = {"XXXXXXXXXXXXXXXXXXXXXXXX-XXXX-XXX-X-XXX-XXXXXX-X", "X-X-XXXXXXX-X-XXXXXXX-XXXX-XX-XX-XX-XXX-XXXX-XXX", "X-XXX-XXXX-XXXXXXXXXXXX--XXXXXXXXXXXXXXXXXXXXX-X", "XX-XX-X--XX-X-XXXXXXXXXX-XXX-XXXX-XXXXXXXXXX-XXX", "XXXXX-X-XXXX-XXXXXXXXXXXXXXXXXXXXX-XX-XXXXXXXXX-", "X-XX--XXXXXXXX-X-----XXXX-XXXXXXXXXXX-XXXXXXXX--", "XXXXXXX-X--XX-XX-XXXXXXXXXXX-XXX-XXXX-XXXXXXXXXX", "XX-XXXXXXXXXX-XXXXX--X---X-XX--XX-XXXXXXXXXX--XX", "XXXXXX-XXX-X-XXXX--X-XXX--XXXXXXXXXXXXXXX-XXXXXX", "XX--X---XXXX-XX-XXXX-X-XXX-XXXXXXXX-XXXXX-XXXXXX", "XXXXXX--XXXXXXXXX-XXXXXXXXXXXXXX-XXXXXXXXXX-XXXX", "XXXXXXXXXXXXXXX-XXXXX-XXXX-XXX--XXXXXX--XXXXXXXX", "XXXX-XXXXXXXXXX-XXXXXX-XXXXXX-XXXXXX-X--XXX--X-X", "XXX-XXX-X--XXX-XXXXXX-XXXX-XXXXXX-XX--XX-XXXX-X-", "XXXXXXXXXXXXX-XXX--XX---XXX--XXXXXXXXX-XXX-XXXXX", "X---XX-XX-XXXXXXXX-XXXXXXXXXXXXXXXXX----X-XXXXXX", "XXX-XXX-XXX-XXXXXXX-XX-XXXX-XXXXXX-XXXXXXXXXX--X", "X-X-XXXXXX--X-XXXXXXXXXX-XXXXXXXXXXXX-XXXXXX-XXX", "XXXX-X-XXXXXXXXXXXXX--XXXXXXXX--XXXXX-X-XXXXXXXX", "XXXXXXXXXX-XXX-XXXXXXXXXXXX-XXXXXXXXXXXXXXXX-XXX", "XX-XXXX-X-XXXXXXXXX-XXXXX--XXXXXX--X-X-XX-XXXXXX", "X-X-XX--X---XXXXXXXXXXXXXXXXXXXXXXXX-XXXXXXXXXXX", "XXXXXX-X-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-XXXX", "XXXX-XX-XXXXX-XXXXXX-XX-XXXXXX-X-XXX-X-XXXXX--X-", "-XXXXX-XXX-XXX-XX--XXXXXXXXXXXXXXXXXXXX-XXXXXXXX", "XXXXXXXXXXXXXXXX-XX-XXXXXX-XXXXXXX-X-XXX-X---X-X", "X-XXX-XXXX-XXX--X-X-XXX-XXXXXX--X-X-XX-X-XXXXXX-", "--XX-XXXXXXXX-XX-XXXXXXX-XXXXXXX-XX-XXXXXXX-XXXX", "XXXX-XXXXXXXX-X-XXXX-XXXXX-XX--XX-XX-XXXXX-X--XX", "X--X-XXXXXX-X-XX-XX-XXXX-XXXXX---XXXXXXX-XXXXXXX", "-XX-XX-XX-XXXXXXX-XXX-XXXXXXXX--XXXXXX--XXXXX-XX", "X--XXXXXXX-X--XXXXX-X-X-XXXXX-XX--XXXXXXXXXXXXX-", "XX-XX-X-X--XXXX-XX-XXXXXXXXXXXX-XXXXX-XXXXXXXXXX", "XX-XXXXXXXX-XXXXXXXX-XX-XXXXXXX-XXX-XXXXXXXXXXXX", "-XX-XXXXXXXXXXXXX-XX-XXXXXX-XXXXXXXXXXXXXX-XX-X-", "-X--XX-XXXXXXX-XX-XXXXXXX-X-XXXXXXX-XXXXXX--XXX-", "X--X--XX--XX-XX-X--XXXX-XXX-XX-XXXXX-X-XXXXXXX-X", "XXXXXXXXXXXXXXXXXXXXX-XXXXX-X--X-X-XXXXXX-XX-XXX", "XXX-XXXX-X-XXX-XXXXXXXXXXX--XXXXXXXXXX-XXXXXXXXX", "-XXXXX-XXXX-X-XXXX-XXXXX-XXXXXXXX-X-XXXX-XXXXXXX", "--X-XX--XXX--XXXX----XXXXXXX-XXX-XXXXX---X----XX", "XXXX-XXXXXXX-XXXXXXXX--XXXXXXXXXXXXXXXXXXXXXXXXX", "X--XXX--XX--XX--XXXX-XXX--X-XX-XXXXXX-XXXXXXXXXX", "XXXXXXXXX--X-XXXXX-X-XXXXXXXXXXXXX-XXXXX-XXXXXXX", "X-X-XX-XXXX--XXX--XX-X-XXXX-XXXXXXXXXXX-XXXXXXXX"};
    vector<string> problemTopics = {"------------------X------------------------X----", "------------------------------------------------", "-X----------------------------------------------", "-----------------------X------------------------", "--------------------------------------X---------", "------------------------------------------------", "--------------------------------------X---------", "-----------------------------------------------X", "----------------------X-----------------X-------", "----X-------------------------------------------", "----------X-X-----------------------------------", "------------------------------------------------", "--------------X-----------------X-----X---------", "------------------X--------X--------------------", "----------------------------------X---------X--X", "-----X----------------------------X-------------", "-------------X-X--------------------------------", "------X-----------------------------------------", "--------------------------------X---------------", "--------------------X-------------X-------------", "--X----X----------------------------------------", "------------X----------X------------------------", "--X---------------------------------------------", "----------X-------------------------------------", "-----------------------X------------------------", "--------------------------------------X---------", "----X--X---------------X------------------------", "------------------------------------------------", "-------------------------------------------X----", "------------------------------------------------", "------X-----------------------------------------", "-X-------X--------------------------------------", "---------X--------------------------------------", "----------------------------------X-------------", "------------------------------------------------", "-----------------X------------------------------", "----------------------------------------------X-", "--------X-----------------X---------------------", "-------------X--X-----------X---X---------------", "-----------------X---------------X--------------", "------------------------------------------------", "-----------------------------X------------------", "---------------------------------------------X--", "------------------------------------------------", "--------------------------------------------X---", "-------------------------X---------------X------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-XX-X-XXXX", "XX-XXXXXXXXX-X-X-X-XXXXXXXXXXXX-XXXXX--XX-XX-X", "XX--XXXXXX-XXXX-XXXXX-X--X-XXXX-XXXX-XXXXXXXXX", "XXXXXXXXXXXXXX---XXX-X-XXX-XXXXXXXXXX---XXXX-X", "XXXXXXX-XX-XXX--XXX---XXXX-XXXXXX-XXXXXXXXXXXX", "-X-XXXX-X-XX----XXX-XXXXXX-XXXX-XXX--X--XXXXX-", "XXXXXXXXXX-X-XXX-X-X-XX-XX-XXXX--XXXXX-XXXXXXX", "XXX-XXXX-XXXXX-X-XX----X-X-XXXXXXXXXX---X--X-X", "-XXXXXXXXX-XX-XXX-X-X-X-XXXXXX-XXXX-XXX-XXXXX-", "XXXXXXXX-X-XXXX---X----XXX-XXX-XXXXXX-XXXXXXX-", "-XXXXXXXXXXX-XXXX--X-XXXXX-X-X-XXXX-XX--XXXXXX", "XXXX-X-XXXXX-XXX-XXXXXXXX-XXXXXXXXXXX-XXXXXXXX", "-XXX-X-X--XX-X-X-XXXXXXXX--X-XXXXXXX-XXXX-XX-X", "XXXXXXX--X-X-X-XXXXX-XX-XX-XXXX--XXXX-X-XX-XXX", "-XX--X-X-XXX--XX-XXXX-XX---XXXXXXXX-XX--XXXXXX", "-X-X-X-XXXXX--XXX-XX-X-XX-XXXX---XXXXXXXXXXXX-", "XXXXXXXX-XXXX---XXX--XXXXX-XXXXXX-XX-XXXXX-XXX", "XX-XXXXXXX-XXX-X-XXXXXX-XXXXXXX-XXXXXX-XXXXX-X", "XXXXXXXXX-XXXXXXX-X-XXXXXX-XXX-XXXXXXXXXXXXXXX", "XXXXXXXXXX-X---XXXXXXXX-XXXXXXXXXXXXXXXXXXXX-X", "XXXX-X-XXXXX-X--XXX--X-XX--XXXX---XXX-X-XXXXX-", "XX-XXXXXXX-XXXXXX-XX-XX-XX-XXX---XXXXXXXXXXXXX", "-XXXXXXXXXXXXXXXX-XXXXXXXXXX-X-XXXXXX-XXXXXXXX", "XXX--X--X-XX-X-X-X----XX---XXXXXXXXXXX-XXX-X-X", "-XXXXXXXXX-X--XXX-XXXXX-XXXXXX-XXXX-XXX-XXXXXX", "-XXXXXXX-XXXXX--XXX-XXXXXXXX-XXXX-XX---XXXXX-X", "XX---X---X-X-X---XXXX-X----XXXX-XXX-XXX-XXXXXX", "-X-XXXXXX-XX-XXX-X-XXXXXXX-X-XX-XXXXXX-XXXXXXX", "XXXXXXXXX-XXXX-X-XX-XXXXXX-XXXXXXXXXX---X--X-X", "XX-XXXXX--XX-XXX-X-X-X-XXX-XXXX-XXXXXX-XXXXXXX", "XXXX-X-XXXXX-XXXX-XXXXXXX-XXXX---XX-XXX-XX-XXX", "XX--XXX-XX-X-X-X-X-X-----X-XXXX-XXXXXX--X-XXXX", "-XXXXXXXXX-XX-X--XXX-X--XX-XXXX--XXXXXXXXXXXXX", "XXX-XXXXXXXXXXXXXXX----X-X-XXXXXXXXXXXXXXXXXXX", "XXXXXXX-XXXXX--XXXX-XXXXXXXXXXXXXXX-XXX-XX-XXX", "-XXXXXX-XXXX---XX-XX-X-XXXXX-X-XXXX-XXX-XXXXX-", "-X---X-XX--X--X--XXX---X---XXXX--XX---X-XXXXXX", "XXXXXXXXXXXX----XX--XXXXXXXXXXXXX-XXXX-XX-XX--", "XXXX-X-XXX-X--XXXXXXXXX-X-XXXXXXXXXXX-XXXXXXXX", "-XXXXXXX-XXXX-XX--XXXXXXXXXXXX-XXXXXXX--XXXXXX", "-X-X-X-X-X-X---XX-----XXX--X-X--XXX-XX--XX-X-X", "XXXXXXXX---XXXXXXXXXX-XXXX-XXXXXXXXXXXXXXXXXXX", "XX-XXXXXXX-X--XX--X--X--XX-XXX--XXXXXXXXXXXXX-", "-XXXXXXX-X-XX---XXX-X-X-XXXXXXX---XXXXXXXXXXXX", "XX-XXXXX-X-XX-XXX-X-X-XXXXXXXX--XXX-XX--XXXXXX"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> attendance = {"-XXXXX-XXX-XXX--XXXX-XX-X-XXXXXXX-XXXX-X-XXXXXXX-X", "XXXXXXXXXXXXXXXXX-X-XXXX-XXXXXXXX-X-XXXX-XXX--X---", "XXX-XXXXXXXX--XXXXXXXXXXXXXXXXXXXXX-XXXXXX-XXXXXXX", "XX-X-XXX-XXX--XXX-XXXXXXXXXX-XXXXXXX-XXXXX-XXXXXX-", "XXX-XXXXXXX-XXXXX-XXX---X-XXX-XX-XX-XX--XXX-XXX-X-", "XX-XXXXXXX-X-XXXX-XXXX-XX-XXXXXXXXXXXXXX-X--XXX--X", "XX--X-XXXXXX-XXXXXXXXXXX-XXXX-XXX-XXXXXXXXXXXX--XX", "XXXXXXX-X-XXX-XXX--X-X-XXXXXXXXXXXXXXXXXXX-XXXXXXX", "X--XXXXXXX-XXXXXX--XXX-X-XXXXXXXXXX--XXXXX-XXXXXXX", "-X--XXXXXXXXXXXXXXXX-XXXXXXXXXXX-XXXXXXXXXX---X-XX", "XXXXX-XX--XXXX-XXXXXXXX-XXXXXXXX-XXXXXXX-XXXXXXX-X", "XXXXXXXXXXXX-XXXXXXXXXXXXXXXXXXXX-XXXXXXX-XX-XXX-X", "XXX-X-XXXXXXX-X--X--XXXXXXXX--XX---XXXX-X-XX-X-XXX", "X-XX-XXXXXXXXXXXX-XXX--XXXXXX-XXXXX-XXXX-XX-XXXXXX", "-XXXXXXX--XXXXXXXXX-XX-XXXXXXXX-XXXXXXXXX--XXXXXXX", "XXXXXXXXXXXXX-XXXXXXXX-XXX-XXXXX----XX-XX-X-XXXXX-", "-XX-XXX-XXXXXXX--XXXXXXXXXXXXXX-XXXXX-XXXX-XXX-XXX", "XXXXXXXXXXXXXXX-XXXX-X--XXXXXXXXXXXXXXXXXXXXXX--XX", "XXXXXXXXXXXXXX-XX-XXXX--XXXXXXXXX-XX-X-X-XXX-X-XXX", "XXXX-XXXX-XXXXXXX-XXXXXXXXXXXXXXXXX-XX-XXXX-XXXXX-", "XXXX--XXXXXXXXXX-XXX-XXXXX-XXXXXX-X-X-XXXXXXXXXXX-", "XXXXXXXXXXXXXXXXXXXXXXX-XX-XXXX-X-X-XX-X-XXXXXXXXX", "XXXXXXXX-XXXXXXXXXXXXXXXXX-XXXX-XXXXX-XXXXXXXX-XXX", "X-XXXXX-X--XXXXX-XX--XX--XX-X-XXXXXXXXXXXXXXX--X-X", "-XXX-X-XXXXXXXXX-X--XXXXXXXXXXX-XX--X-XXXX-XXXXXXX", "-XXXXX-XXXX-XXX-XXXXX-XXXX-XXX-X-X-X-X-XX-XXXX-X--", "XX-XXXXXXX-X-XXX-XXX-XXX-XXX--XXXXXXXXXXXXX-XXXXXX", "X-XXXXXX--XXXXX-XXXX-XXXXXXXXXXX-X-XXX-XXXXX--XX-X", "XXXXXX-XXXXXXXXXX--XXXXXX-XXXX-XXXXXXXXX-XXXXXXXXX", "---XXXXXX-XXXXXXXXXX-XXXX-XXXX--XX-XXXXXX-X-XXXXX-", "X-XXXX-XXXX--X-XXX-XX-XX-XX-X-XXXXXX-XXX-XXXXXX-XX", "XXXXXXXXXXXX-XXXX-XXXXX-XX-XXXXX-XXXXXXXXX-XX-XXXX", "X--XXXXX-XXXXXX--X-X-XXX-XXXXXXXXXX-X-X-XXXXXX-XXX", "XX-XXXXXXXX-XXXXXX-XXXXX-XX-X-XXX--XXX-XXX-XXXXXX-", "XX-XXXX-XXXXX---XXXXX-XXX-XX-XXXX-XXXXXXXX--XXXXXX", "XXX--X-XXXXXXXXXXXXXXX-XXXXXXXXXXXX--XXXXXXXXX-X-X", "XXXXXX-XXXXX-XXXX-XXXXXXXXXXXXXXXXXXXXX--XX-XXXXXX", "XXXXXXXXXXXX--XXXXXXXX-XXXXX-X-XXX-X-XXXXXXXXX-XXX", "XXXXXXXXXXXXX-X--XX-XXXXXXXX-XXXXXXXXXXXXXXX-XXXXX", "X-XXXXXXXXXXXXXXXXXXX--XX--XXXX-XXXXXXXXXX-XX-XXXX", "XXXXXXXX-XXXXXXXXXXX-XXXXXX-X-XX-X-XXXXXXXXX--XXXX", "XX--XXXXXXXXXXXXXXXXXXX-XXX-XX--XXXXXX-XX-X-XX-XXX", "XX-XXXX--XXXXXXXXXXXXXXX--XXXXXX-XXX-XX--XXXXXXXXX", "XXXXX-XXXXXXXX-X-XXXXX-XX-XXXXX--XX-XX-XXX-X-XXXX-", "XX--X-X-XX-XXX-XXXXXX-XXXXXX--XXXXXXX----XXXXXXXX-"};
    vector<string> problemTopics = {"-----------------------------------------X--------", "--------------------------X---XX------------------", "--------------------------X------------X----------", "--------------------------------------------------", "--X--------X-------X------------------------------", "--------XX----------X-----------------------------", "-------------------X----------X-------------------", "-----X----------X---------------------------------", "------------------------X-------------------------", "-----------------------X--------X-----------------", "-------X------------------------------------------", "----X---------------------------------------------", "--------------------X-----------------------------", "------------------X-----------------X-------------", "-------------------------------------------------X", "---------X----------------------------------------", "-------------------------X------------------------", "--------------------------------------------------", "--------------------------------------------------", "----------X---X-----------------------------------", "--------------------X--------------X--------------", "-----------X-------------------X------------------", "--------------------------------------------------", "--------------------------------------------------", "---------------------------X-----------X----------", "--------X-------------------X---------------------", "--------------------------------------------------", "------------X-------------------------------------", "--------------------------------------------------", "-----------X---X---X--X---------------------------", "----------------------X---------------------------", "--------------------------------X-----------------", "--------------------------------------------------", "------------------X---------------X---------------", "-------------------------------------------X------", "-----------------------------------X--------------", "-------X------------------------------------------", "--------------------------------------------------", "---------------------------X------------------X---", "--------------------------------------------------", "-----------X-----------------------X--------------", "---------------X----------------------------------", "----------------X---------------------------------", "---------X------------------------------------X---", "------------------X-------------------------------", "-----------------X-----------------------X--------", "--------------------------------------------------", "--------------------------------------------------", "-----X--------------------------------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXX-XXX-XX-XXX-XX--XXXXXXXX-XXXXXXXXXXX-XXXXXXX", "XXXX-X-X-XXXXX-XXXXX-XXXXXXXX-XXXXX-XXXX-XXXX-XXX", "XXXXXXXXXXXXXXXXXXXX-XXXXXX-XXXXXXX-XXXX-XXXXXXXX", "XXXX--XXXXX-X--XXXXXXXXXX-X-XXXXXXXXXXXXXXXXX-XXX", "XX-X-XXXX-XXXX-X-XXX--XX-XXXX---XX--XXXX-XXXX-XXX", "XXXX-XXXXXXXXXXX-XX-XXXXXXX-X--XXX-XXXXXXXXXX-XXX", "XXXX-XX--XXXXXXXXXXXXXXXXXX-XXXXXXXXXX-XXXX-XXXX-", "XXXXX-XXXX-X--X-XXXX-XXXXXXXX--XX-XX-XXXXXX---XXX", "XXXX-XXX-XXXX-XXXXX--XXXXXXXX--XX-X-XXXX-XXX--XXX", "XXXX--XXX-XX-XXXXXXX-XXXXXXXXXX-XX-XXXXXXXXXXXXXX", "XXXXX-X-X-XXXXX-XXX-XXXXX-XXXXX-XXXXXXXXXXX-XXXX-", "-XXXXXXXXXXXXXXXXXXXXXXXXXX-XXXXXXXXXXXXXXXXX-XXX", "-X-X-X--X-XXX-XXXXXXXXXX--XXX-X-X-XXXX-XX-----XX-", "XXXXXXXXXXX-XXXXXXXX-XXXXXXXX--XXX--XXXX-XXXX-XXX", "--XX---XXXXXXXX-XXXXX-XXX-XXX--XXXXXXXXXXXX-X-XXX", "---XXXXXX-XXXX-XXXXX-XXXXXXXX---X---XXXX-XXXX-XXX", "X-XXXXX-XX-XXXXXXXXXX-XXXXXXX-XXXXXX-X-XX---XXXXX", "XXXXX-XXX-XX-XXXXXXX-XXXXXXXX--XXXXXXX-XX-X-XXXXX", "XXXXXXXXX-XXX-XXXXX-XXXXXXXXX--XXXXXXX-XXXX-X-XXX", "XXXXX-XXXXX-XX--XXXX-XXXXXXXXXXXXX--XXXX-XX-X-XXX", "X--XX-X-XXX--X-XXXXX-XXXXXXXXXXXXXX-XXXX-X-XXXXX-", "X--XXXXXX-XXXXXXXXXX--XXXXXXXXXXXXX-XXXX-XXXXXXXX", "X--XX-XXXXXXXXXXXXXXX-XXX-XXXXXXXXXXXX-XXXX-XXXXX", "XXXX-------X-XX-XXX--XXX-XXXX-XXXXXX-X-XXX--XXXXX", "X-XX-X--XXX-X-XXXXXX--XXXXXXX-XXX-X-XXXX-X-X-XXXX", "---X-X-XX-XXX--XXXXXX-XXXXXXX-X-X-XXXX-X--X-X-XXX", "XXXX--X--XXX-XXXXXX--XXXX-X-XXXXXX-XXXXXXX-XXXXXX", "XXXXX-XXX-XX-XX-XXXX-XXXX-XXX-X-X-XXXXXXX-X-XXXXX", "X-XXXX-XXXXXX-XX-XXXXXXXXXXXXXXXX-XXXXXXXXXX--XXX", "--XX---XXXXX-X---XXX--XXXXXXXXXXX--XXXXXXXX-X-XXX", "XXXX-XXX-XXXX-XXXXX-X-XX-XX-X-XXX-XXXX-X-XXX-XXXX", "X--XXXXXX-XXXXXXXXXXXXXXXXX-XXX-XXXXXXXXXXXXX-XXX", "XX-X--X--XXX--XXXXXX-XXX--XXX-XXX-X-XX-X-----XXXX", "XXXX-XXX-XXXX--XXXXXX-XX-XXXX-XXX-XXXX-X-XXX-XXXX", "XXXX-XXXXX-XXXXX-XX-XXXXX-XXX-XXXX-X-XXXX-XXXXXXX", "XXXXXXXXXXX-X-XXXXXX-XXXXXXXX--XXXX-XX-X-XX-XXXXX", "XX-XXXXXXXXXXXXXXXXXXXXX-XX-XXXXXX-XXXXXXXXXX-XXX", "X-XXXX-XXXXXX-XXXXXXXXXXX-X-X--XX-XXXX-XXXX-XXXXX", "XXXX-X--XXXXXXXXXXXXXXXXX-XXX-XXXXXXXXXXX--XXXXXX", "X--XXXXXXXXXXXXX-XXXX-XXXXXXX--XXXXXXXXXXXXXXXXXX", "XXXXX-XXX-XX-XXXXXXX-XXX--XXXXX-X-XXXX-XXXXXXXXXX", "--XX-X-XX-XXXXXXXXXXX-XX-XXXXXXXXX-XXX-XXXX-X-XXX", "XX-X--XX---XX-XX-XXXXXXX--XXXXX-XXXX-XXXXXXXXXXXX", "X-XXXXX-X-XXXX-X-XX---XXXXXXX---XXX-XXXX-X-XXXXX-", "XX-X-XX-XX-XXX-XXXX-XXXX--XXXXXXXXXX-XXXXXXXXXXX-"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> attendance = {"-XXXXXXXX-XXXXXXXX-XXXXXX-XXXXXXX-XXX-X-X-XXX", "XX-XX-X-XXXXXXXXX-XXXXX-XXXX-XXXXXXXXXX-X-X--", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX-XXXXXXXXXX--X-XX", "XXX-X-XXX-XXXXXXX-XXXXX-XX-XXXX-XXXXXX-XXXX-X", "X-XX-XXX-X-XXX-XXXXXXXXXXXXXX--XX-XXXXX-XXXXX", "--XXXXX-XX-XXX-XXXXXXX-X-XXXXXXXXX-XXX--XXX-X", "XX-XX-XXXXXXXX-X-XX-XX-XXXXXX-XXXXXXXX-XXXXXX", "XXX-XXXX-XXXXXXX-XXX-X-XXXXXXX-XXXX-XXXXXXX-X", "XXXXX---XXX-XXXXX-XX-XXXXX-XXXXXXXXXXXXX-XX-X", "XXXXXXXXXXXX-XX-XXX--XXXXXX--XXXXXXX-XXXX-XXX", "--XXX-XXX-XX-X-X-XXX--X-XXXXXXXXXXXXX-XXX-XX-", "-XXXXXXX-X--XXXXXXXX-X-X-XXX-X-XXXXXXXXXXXXXX", "XXX-XXX-X-XXXXX-XX-XX-XX-XXXX-XXXX-XX-X-X-X-X", "X-XX-XXX-XXXXX-XXX-XXX-XXXXXX-XX-XXX-X-XX-XXX", "-XXXXXXXXXXX--XXX-XXXXXXXXXXX---X-XX-XXXX-XXX", "XXXXXXXX-XX--XXXXXXXXX-XX-XX-XXXX--XXXXXXXXXX", "-XX-X---XXXX-X-X---XXXXXXXXXXXX-XXXX-XX-XXXXX", "XXXXXXXX-X--X-XX-X-XXXXXXXXXXX-XXXXXXXXXXX-XX", "XXX-XXXXXX-X-XXXX-X-X-XXXXXXXXXX-X-XXXXXXXXXX", "XXXXXXX--XXXXXX-XX-XX-XXX-XX-XXX-X--X-XXXXXXX", "XXXXX-XXXXXXXXX-XX-XX-XXXXXXX--XXXXXXX--XXXXX", "XX-XXXXXXX--XX-XXXX-XXX-XX-X-XXXXXXXX-XX-XXXX", "XXXXXXXXXX-XXX--XXXXX-X-XXXXXXXXXXXXX-XXX-XXX", "XXXXXXXXXXXXXXXXXX---XXXXXX-XXXXX-X-XXXXXXXXX", "XX-XXX-XX--XXXXXXXXXX-XXXXXXXXXXXXXXXX----XXX", "-XXXXXXXXXXX--XXXXX--XXXXXXXX-XXXXXX-X--X-X-X", "X-XXX-XXXXX-XXXXX-XX-XXXX-XXXXX-XXXXXXX-XXXXX", "XXXX-XXXXXXXXXX-XXXXXXX-X--XXX-X-XXX-XXXXXXX-", "XXX-XXXXX-XXX--XXXXX-XXX-X-XXXXX-XXX-XXX-XXX-", "XX-XXX-XXXXXXX-XX-X-X-XXX-XXXXXX-XXX-XXXXXXX-", "X-XXXXXXXXXXXXXXXXX-X-XXXXXXXXXXXXXXXXX--XXXX", "X-X-XX-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--XXXXXX", "X--XXXXXX--XXXX--XXXXXX-XXX-X-XX-XXXX-XXXXXXX", "XXX-X--XX-XXXXXXXXXXX-XXXX-X-XXXXX-XXXXX-XXXX", "XXXXXXX-XXX-XXXX-X-XXXXXXX-X-X--XXX-XXXXXXX-X", "XX-XX-XXXXXX-XX-XXXXXX--X-X--XXXXX-X-X---XXXX", "XXXX-XXXXXXXXXX-XXXXXXXXXXXXXXXXXXXXX-XXXXX-X", "XX-X-XXXXXX-XX-XXXXXX-XX-XXXXXXXXX-XXXXX-XXX-", "---XXXXXXXX-XX-XX-XXXXXXX-XXXXXXX-XXX-XXXXXXX", "X--XXXXXXXXXX-XX--XXXX--X-XXXXXXXX-X--XXXXXXX", "XXXXXXX-XXX---XXXX-XX---X-X-XXXXXXXXX-XX-XXX-", "XXX-XX---X-XXXXXXX-XXXXXXX-XXX-X-X-XXXXXXXXXX", "XXXXXXXX-XXXXXXXXX-XXXXXX-XXXX-XXXXXXXXXXXXX-", "XXXXXXXXXXXXXXXXX-XXX-X-XXXXXXX--XXXX-X-XXXXX", "XXXX-XXXXXXXXXXXX-XXXXXXXXXXXXXXXXXXXXXXXXXX-"};
    vector<string> problemTopics = {"--X-------------------X----------------------", "-X-------------------------------------------", "--------------X------------------------------", "--------X--X---------------------------------", "-----------------X---X-----X--X--X-----------", "----------------------------X---------------X", "---------------------------------------------", "--------------------------------X------------", "---------------------------------------------", "---------------------------------------------", "-----------------X-----------X---------------", "----------------X-------------------X--X-----", "-X----------------X-------------------------X", "---------------------------------------------", "-------X-----------------------------X-------", "------------X-------------X------------------", "---------------------X-----------------------", "--------------------------------X------------", "-------X-------X----X------------------------", "------------------------------------X--------", "---------------------------------------------", "-------------------------------------------X-", "---------------------------------X-----------", "--------------------------X-----------------X", "----------------------X---X-----------X------", "-------------------------------------------X-", "--------X--X-------------------X-------------", "X----------------------------X---------------", "-------------------------------------------X-", "--------X------------X-----------------------", "--------------------------------XX-----------", "---------------------------------------------", "---------------------------------------------", "X----------------X----X----------------------", "-X------------XX-----------------------X-----", "---------------------------------------X----X", "X----------------X----------------------X----", "----X-------X--X---------X-------------------", "---------------------------------------------", "-------X---------------X---------------------", "-------------------------X-------------------", "-----------------------X---------------------", "----------------X----------------------------", "---------------------------------------------", "------------------------XX-------------------", "---------------------------------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXX-XXXXXX--X-XXXXXXX-XXXX-XX-XX-----XX-XXX-X", "-XXX--XXXX---X-XXX-XX-X-X-XX-XXXX----XX-X-XXXX", "XXXXX-XXXXX-XXXXXXXXXXXXXXXXXXXXXX---XXXXXXXXX", "XXXX-XXXXX-XXXX-XXXXX-X----X-XXXX-XX-XX-X-XXXX", "X----XXXXX---XXXXXXXXX-XXX--X--XXX--X-XXXXXXXX", "---XXXXXXXX--X-XXX-XX-XX--X--XXXX----XX-XXXX-X", "-X-XXXXXXX--XXXXXXXXXXXX-XX-XXXXX--XXXXXXX-XXX", "-XX--XXXXXX-XXXXXX-XX-XX---X--XXX-XXXXXXXX-XXX", "XXX--XXXXX-XXX--XX-XX-X----X-XXXX-XX-XX-XXXXXX", "XXXX--XXXXX-XXX-XX--XXXXXXXXXXXXXX-XX-XXXXXXXX", "X--X--XXXXX--X---X-XXXX-XXX-X-XXX-----X-X--XXX", "-XX---XXXXXXXXXXXX-XXXXX-X--X-XXX-XX-XXXXXXX-X", "XXXX-XXXXX---X-X-X-XX-XXX-X---XXXX--X-X-XXXX-X", "----XXX-XX---XXXX-X-XXXX-X--X--XX--XX-XXXXXXXX", "XXXX-XXXXX--XXX-XXX-XX-XXX--XX-XX-XX--XXXXXXXX", "-XX---XXXXXXXXX-XXXXXX-X-X-XX--XX-XXX-XX-XXX-X", "XX-X-XXXXX---X--XX--XXXXXX--XXXXX-----X-XX-XXX", "XXX--XXXXXX--XXXXXXXXXXXXX-XX-XXXXXXXXXXXX-XXX", "XXXX-XX-XX-XXXX---XXXXXXXXXXX--XX-XX--XXXXXXXX", "XXX---X-XXXX-X-X---XXXXXXX-XX--XXX-XX-X--XXX-X", "XXXX-XXXXX---XXX-X-XXXXX-XX-X-XXXX--X-XXXXXXXX", "-X--X-XXXXXXXX--XXXXXXX--X-XXXXXXX-X-XX-X-XXXX", "XX-X-XXXXXXXXX-X-X-XXXXXXXXXX-XXXX-XX-X-X-XXXX", "XXXX-XXXXXXX-XXXXX-XXX-XXXXXXX-XXXXXXXXXXXXXXX", "-XXX-XXXXXX-XXXX-XXXXXXX-XXXX-XXXX---XXXXXXXXX", "XXXXXXXXXX--XXX-XX--X-XX--X--XXXX-----XXXXXXXX", "X-X--XXXXX---XXXXX-XXXXXXX-XXXXXX-----XX-XXX-X", "XXXX--X-XXX--XX-X---XXX--XXXXX-XXX--X-X---XX-X", "XX-XX-X-XXX--XX-X---XXX--XXXXX-XXX---XXXXXXX-X", "-X-X--X-XX---XXX--X-XXX-XXXXX--XX-----XX-XXX-X", "X-XX-XXXXXX--XXX-XXXXXXXXXXXX-XXXX---XXXXXXXXX", "X-XXXXXXXXXX-X-XXXXXXXXX-XXXXXXXXX-XXXXXXXXXXX", "--XX-XX-XX---X-XX--XXXXXXXX-XX-XXX-XX-X-X--XXX", "XXXX--XXXXXXXXX--XXXXXX--XXXX-XXXXXX-XXXXXXXXX", "XXX---XXXXX--X--XX-XX-X----X-XXXXXXXXXX-XX-XXX", "-XXX--XXXXX-XXX-XX--XXXX-XXXXXXXX-----X---XX-X", "XXXXXXXXXXXXXX-XXX-XX-XXX-XX-XXXXX-XX-XXXXXXXX", "-X----XXXXXX-XXX-XXXXXX-XX-XX-XXXX----XXXXXX-X", "-----XXXXX-X-X-XXXXXXX-XXX--XX-XX--X--XX-XXX-X", "--XX-XXXXX---X-XXXX-XXXX-XXXXXXXX--X--X----X-X", "-XX---XXXXXX-X---X-XXXX--X-XX-XXX-X---X---XX-X", "XXX--XX-XXXX-X--X--XXXX--X-XX--XXXXXXXX-XXXXXX", "XXX---XXXXXX-XXXXXXXXXX-XX-XX-XXXXX-X-XX-XXX-X", "XXXX-XX-XX--XX-X--XXXXXXXX-XX--XX----XX-X-XXXX", "XXXX--XXXX-X-XXXXXXXXXX-XXXXXXXXX-X---XXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> attendance = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    vector<string> problemTopics = {"X--XXXX-------XX------X-XXX---X--XX----------X--XX", "XX-------X--X---XX-XX-XX---X-X----X-X-XX-XXXX-XXX-", "XX----XX---X-XX-X----X--X-XXXX---XXXX--X--X------X", "XX-XX-----XX-----X--XXXXX-----XX--XX---XX-X---XXX-", "-XX--X---X----X----X-X-XXXX------X-----XXXX----X--", "X-X--X-X--X-X-X-XXXXXX------XX--X-X-----X--XX-----", "XXX----X-X-X--X---------X---X---XX-X-----XX-----X-", "XX--X--XX-X-X---X-----X---XX-----------X--X------X", "X--XXXX--X-XXX-XX------XX---XXXX------XX-X-X-XX---", "-XXXX-----XX-X-X-X-------X-X--XX-XX---XXX--X-----X", "----X----X-X-----X----XXX--XX------XX---XX-XX-X--X", "X-X-X------X-XXXX---X-XXX--XX--X---X-X--X-XX--X-XX", "X-X-------X--X---X---XXXX-X---X-X--X--X--X-XX-----", "X-X-X-XX---XX-X----X-----X----XXX-X---XX-XX-XX-XX-", "XX---XX--X-X-X--XXX-------X---X--XXX----XX--XX-X-X", "XXX-XX--------X-X-XX--X-XXXX--X-X-X-XX-----XX---X-", "X----X-X--XX---XXX--XX----X----X----XX-XXX-X-XX---", "-X-X--XXX-XX-X-X-XX----X-X--X-X-XX-X-XX----X-X-XXX", "X-XX-XX---X---------X-XX-X-X----XXX---XX-X---X--XX", "X--XX-X-XX---X-X----X----XX-XXX-X--------X-X-XX---", "X-XXX-X-X--XXX--X--X----X--XX-X-X--XXX-X--X-XX-X-X", "-X--XX-XXX--X-XX----X-XX--------X-XX---X-X-X--X---", "XX-------XXX---X-XX-XX---XX-XXX-X---X---X--X---XX-", "-XX-X--------XXX---XXXX--XXXX--X--X-------X--X---X", "X-XX-X-XX-X-X---X-X--XX----X-XX-X--XX-XXX---XXX---", "XX-X---XX-XX-X--X-X-X-X-XXX-XXXX-X---X-----------X", "--XX-X------X-X---------------XX---X--XXXX-XX-X---", "-------------X-XX-X-----X-XXX-X---X-----X----X-X--", "---X---X--X---X---X--X-X-X---XX-X-----XX------XX-X", "XX-XX--XXXXX--XXX-XX---XXXXX---X-----X--X--X--X-X-", "X------XXX-X--XXXXX-X--X--------------------X-X---", "X--X----X-X--XX-XXX---X-XX-X--XX--X------X--XXX-X-", "X---------X------XX--XX-XX-XX-----XXX----X-X-X-XX-", "-XX---X-X-XX---X--XX---XX-X---X--XXX--XX-XX--X----", "-XXX--XX--X--XX--X--XX-X-XX-XX---XX--XX---XX-X-X-X", "-X-X-XXX-X--XX-X-XXX---XXXX-----X-----XXXX---XX-X-", "-X-X---X-X-XXX-X-XX--X-----X-X--------X-XXX-X-XXXX", "XXXX-X-X-X--XXX-----X-XXXX---XXX-X--X---X-X-X--XX-", "--X--X-X-X-XX-X------X----X-----XX-XXX--------X---", "X------X---XX-X--X-X-XX--X---X--XX-XX--XX--------X", "--XX-XX-XXX-X-X---X--X-X--X-XXX---XXXX----X--XXX--", "-X---XXX-X------X---X---X-X----XXXX-X-X-X--X----X-", "---XX---X--XXXX-X--X-X-XXXXX--XX---X----X-X--XX---", "X--X-X--X------X-XX--XXX---X---X----X--X---X-X----", "-XX--XX----X----X-XX-----X-X---X--XXX--X----------", "------X-XX--X-X-X-X-XX---X-------X-XX--X--XXX-XX--", "X-----X--XXXX---X--X---------X-XX---XXXXXXXX--XX-X", "X--X--X-XXXXX----X-----XXX-X--X-X--XXX-X-X-X---X-X", "X---XX--X----XX-X-----XX--X-X-X--XX----XX-X--X-X-X", "XX-X-X---X--XX-XXX--XXX-X---XX-XX--X-XXXX---------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> attendance = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    vector<string> problemTopics = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> attendance = {"--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------"};
    vector<string> problemTopics = {"XX-XX-XX---XXX---XXX-XXX------X-XX--X-X-XXX--XXXX-", "--XX-XXX---XX-XX----XXXXX-X-XX-X-X---XX--XXXX---XX", "--XXXXXXXXX------X--X---X---XX-X-XXX-XXXXXXX-X--X-", "XX--XXXXXXX-XXX-X---XX--XX---X-X--XXXX-XX---X-XX-X", "-XX--XX-XXXXX---XXX-X--X--X-XXXXXXX-X-X---XXX--XXX", "XX-----X---X---X-XX-X--XX-X------XX--XXX-----X-XX-", "-XX--XXXXXXXXXXXXXX-X--X-XX--XXX-X-X-X--XXXXX-XX-X", "X--X---XX----X-XX----X--X-XX-X-X--X-XXXXX--X---XXX", "-XX----XX-XXXX------X-X--X-X--XXX-XXXXXX-XXX-X-XX-", "-X-------XXXXX-XX--X---XX--X---X-XX-XX-X-XX---XXX-", "X-XXX--XXX----XXXXXXX-XX-X-XXXX-----X-XXXXX-X-XX-X", "-XX-XX------X-X--XXXX-----X-XX-X-X---X-XXX---X-X--", "-X-X---X--XXX-XX--XX---X-X-X--X----X--XXXX-XX--XX-", "----X-X--XX--X--XXX--XX----X----XX-X-XXXX---X--XX-", "XX---X-X-X----XXX------X---XXXX--X--X--X-X-X----X-", "XXX-X-X-XXXXXXXX--XX--X-XX-X-XXX-XXXXX--X------XX-", "X--XX--X-XX-X--X-XX-X--X---XXX--X------X-XXXX--XXX", "XX--X---X---X-XXX-X-X-XX-X-X-X-X-XXX--XX--X----X-X", "-X--X--X-----XXXXXX---X-X----X--X---XXX-X-X-XX--X-", "-X-XXX-XXXXXX-X-X---XX-X-XXX-XXXXXX-XX--XX-X-XX---", "-XX-------X--X-X-XX-X--X-XX-XXXX---X-X-XX-XXXX-XXX", "-XXXXXXXXXX--XX--X-XXX---XXX----XXX-XXXXX-X-XXX-XX", "---XX----XXXX-X--X-XX-XX---XXX----XXXX-----XXX-X-X", "-X-X--XX---XXX-XX---X-XXXX--X--X-XXXX-----XX-X--X-", "-X-XXX---X-X-X--XX--X---XXXX--XX-X----XXX-X-X-X-XX", "X---XXXXX-X-XX--XXXXX-XX--XXXX-X-XXX--X-XXX-X-XXXX", "---XX-----XXX-X---XXXX---XX---X---X--X-X--X---X---", "X-XX-XX-XX---X-XXX-XX--XXX--XX--XXX--X--XX---X-XX-", "--X---XX---XX-X---XX-X--XXXXXXXX-----X---XXXXXX-XX", "X-X---XXX---XXX-XXX-X-XX---XXXXXX---X--XX--XXX--XX", "XX--X--XXXX-----XX-X--XXX-X--X-XXXX-XX----X---X-X-", "XX--X---X------X-----XX---XXXX--X---XX-X-X-XXXX---", "X-----------XXXXX-XXXX-X-X--X-XX-XXX-XXXXX--X-----", "--X-X-XXX-X-X-XX--XX--X--X--X-X----XX-X--XXX--XX--", "-X-XX--X-XX---XXX---X------XX-XX-XX--XXX--X-----XX", "XXX---X-XX--X-XXXX-X--X-X-X---X--X-X-----X-X-X-X--", "--X---X-X-X-XXX---XX--X--XXX---X-----XXX--XX-XXX-X", "---XXXX----X--XX-XX-XXX--X----X--X-X---XXXX--XX-X-", "X-X-XXXXXX-XX--XX-X--X-X--X--X---XXX---XX--X-XXXX-", "--X-XXX-XXXX-XXXXXX-----XX---XX-X--XX--X--XXXXXXX-", "----XXX-X--X-XXXXXX-XX--X--X--XXX---X-XXX--XXX-X--", "X-X--XXXXXXX-X----X-XX-XX-X-X---X---XXXXX-XXXXXX--", "XX-X--X-X--XX-X-X-XXXX-X-XX-X--X-XXX-XX-X---X-XX--", "X--XXXXXX-X-X---X-X--X--XXX---XXX--XXX---XXXXXX---", "-XX--XX--XX-------XXX-XXXXXX--X-XX-XX--XX-XX-X-XXX", "----X--X--X-XX-X---X-XX---X-X----XX----X---X--XXX-", "X----XX---X-X--XXX-XX---XX--X--X-XXX--X-XXX-X-X-XX", "---X----XXXX--X-----X-XX-XXX-X-X--XX--XXXX---XXX--", "-XX-XX-X-X-XXX-XX-X---XXXX-XXX--XXXX---X----XXXXX-", "XXXXX--XX--XXX-X----X--XXX-X--XXX-XX-X-XX-XX-X----"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> attendance = {"--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------"};
    vector<string> problemTopics = {"--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> attendance = {"XXX", "XXX", "XX-"};
    vector<string> problemTopics = {"---", "XXX", "-XX", "XX-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XXXX", "XXXX", "X--X"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> attendance = {"X----X--X", "X--X-X---", "--X-X----", "XXXX-X-X-", "XXXX--XXX"};
    vector<string> problemTopics = {"X----X-X-", "-----X---", "-X----X-X", "-X-X-X---", "-----X---", "X-------X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X--XX", "-X--X-", "------", "XX-XX-", "--X--X"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> attendance = {"X"};
    vector<string> problemTopics = {"X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> attendance = {"-----", "XXXXX"};
    vector<string> problemTopics = {"XXXXX", "-----", "--X-X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X-", "XXX"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> attendance = {"XXXX-XXXX----X-XXXX-XX---X-XX--X-X-XX--XXX-"};
    vector<string> problemTopics = {"XXX--XXXXXXXX--XX-X-XX-X-X-XX--XX--XXX--XXX"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> attendance = {"-X", "X-"};
    vector<string> problemTopics = {"XX", "-X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X", "--"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> attendance = {"-XXXX", "----X", "XXX--", "X-X-X"};
    vector<string> problemTopics = {"X---X", "-X---", "XXX--", "--X--"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-X-X", "----", "-XXX", "X--X"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> attendance = {"X"};
    vector<string> problemTopics = {"-"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> attendance = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-"};
    vector<string> problemTopics = {"-------------------------------------------------X"};
    TrainingCamp* pObj = new TrainingCamp();
    clock_t start = clock();
    vector<string> result = pObj->determineSolvers(attendance, problemTopics);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22898729&rd=14538&pm=11499
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
#include <set>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>
 
using namespace std;
 
#define FZ(i,n) for(int (i)= 0;(i)<(n);(i)++)
#define FA(i,a,n) for(int (i)= a;(i)<(n);(i)++)
#define RF(i,n,a) for(int (i)=(n)-1;(i)>=(a);(i)--)
#define ALL(X) (X).begin(),(X).end()
#define PB(t) push_back(t)
#define RE(t) return t;
#define SZ size()
 
typedef int I;
typedef string STR;
typedef long long LL;
typedef long double LD;
typedef vector<int> VI;
typedef vector<long long> VLL;
typedef vector<string> VS;
typedef vector<vector<int> > VVI;
typedef stringstream SS;
 
class TrainingCamp {
public:
  vector <string> determineSolvers(vector <string> a, vector <string> p) {
      VS v(a.SZ);
      STR s;
        FZ(i,a.SZ){
          I flg = 0;
          s = "";
          FZ(j,p.SZ){
            flg=0;
            FZ(k,p[j].SZ){
              if( a[i][k] == '-' && p[j][k] == 'X') {
                flg=1;
              }
            }
            if(flg==1) s += '-';
            else s += 'X';
          }
          v[i]=s;
        }
      RE(v);
  }
};
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/
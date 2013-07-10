/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4608
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

class GradingGridIns {
public:
    vector<string> score(vector<string> answer, vector<int> lower, vector<int> upper);
};

vector<string> GradingGridIns::score(vector<string> answer, vector<int> lower, vector<int> upper) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> answer = {"4/7 ", " 4/7", "4/07", "8/14", ".571", ".572"};
    vector<int> lower = {4, 7};
    vector<int> upper = {4, 7};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> answer = {" 4/7", "1.01", "1.02", " 000"};
    vector<int> lower = {0, 1};
    vector<int> upper = {1, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "INCORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> answer = {"1.15", "1 14", "1.14", " 8/7"};
    vector<int> lower = {1142, 1000};
    vector<int> upper = {1142, 1000};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT", "MALFORMED", "CORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> answer = {" ", "....", " . ", "1 23", "8//5", "9.4.", "85/ ", "/123", "123/"};
    vector<int> lower = {1, 1};
    vector<int> upper = {1, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> answer = {"9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999", "9999"};
    vector<int> lower = {9999, 1};
    vector<int> upper = {9999, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> answer = {"1111", ".000", "9999"};
    vector<int> lower = {0, 1};
    vector<int> upper = {9999, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> answer = {"6 49", ".826", ".687", "9712", "7959", "343 ", "1173", "88/9", "6391"};
    vector<int> lower = {5377, 7851};
    vector<int> upper = {6897, 7617};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> answer = {"7 5.", "95 .", ".1/0", ".386", " 0.4", ".399", " .35", ".37 ", ".406", "4766", "1829", "9721", "2100", "273 ", "1863"};
    vector<int> lower = {2577, 7395};
    vector<int> upper = {4084, 9847};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> answer = {"1 46", ".818", ".58 ", ".267", "8/12", " .29", ".622", ".238", ".750", ".970", ".911", ".142", "1.35", ".200", " .29", ".786", ".637", "3/2 ", "410.", "8680", "3789", "4788", "6332", "32 ", "38/2", ".914", "129.", "3399", " 848", "5587"};
    vector<int> lower = {389, 3093};
    vector<int> upper = {4485, 2354};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> answer = {"55 8", ".609", " .18", ".421", ".46 ", ".328", " .37", ".883", ".734", ".332", ".155", ".639", ".877", "4082", "2553", "8.68", "3202", "1528", "3063", "15.8", ".310", "123 "};
    vector<int> lower = {620, 4565};
    vector<int> upper = {8613, 9723};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> answer = {".7/4", "15/.", "27/ ", "1.44", "1.82", ".950", ".566", ".796", ".613", ".929", ".754", ".584", ".829", ".727", ".703", ".728", "7698", " 944", "3244", "2319", "54 ", "6065", "907.", " 297"};
    vector<int> lower = {1763, 3419};
    vector<int> upper = {3721, 2050};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> answer = {"2 17", "2.34", "9/04", "2.14", "2.32", "2.23", " 2.1", "7/03", " 9/4", " 2.3", "9/4 ", "3745", "396.", "2397", " 198", "8.15", "7294", "2266", "5509", "8636", "1108", "1334", "7638", "4657", "608.", "4455"};
    vector<int> lower = {7659, 3837};
    vector<int> upper = {9578, 4093};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> answer = {"9 58", "9 7 ", "2 20", ".668", "6/03", "6.37", "5/78", "1147", "2/29", " 974", "67/0", "4365", "4.06", " 050", "7689", "908 ", "9263", "2/54", "3318", "5374", "6606"};
    vector<int> lower = {2208, 6348};
    vector<int> upper = {9911, 446};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "MALFORMED", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> answer = {"7/60", "1/8 ", "6/51", ".128", "7/54", "9/71", "6/51", ".134", "7/56", "4/33", ".131", "6/49", "5/39", ".135", "8/66", "5/38", "7870", ".074", "3509", "2582", "49 ", " 794", "87/3", "9618", "184 ", "4/73", "3099", "3004", "3414", "6426", "9575", "1294", " 937", "8961", "7178", "4268"};
    vector<int> lower = {940, 8070};
    vector<int> upper = {1241, 9217};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> answer = {"8 20", "5.9.", ".597", ".670", ".567", ".584", ".654", ".611", "5/08", "3/5 ", ".59 ", ".65 ", ".581", ".634", ".65 ", "7190", " 01.", "62/0", "6677", "321 "};
    vector<int> lower = {5497, 9778};
    vector<int> upper = {3678, 5486};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "MALFORMED", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> answer = {"4 59", "8/0.", "1.78", " 2", "2 ", "8/05", " 02", "1.73", " 002", " 02", " 9/9", "869.", ".087", "310.", "1448", "8581", "2.5 ", "4042", " 3/0", " 136", "2245", "9951", ".743", "7/41", "7/08", "20/4", " 609"};
    vector<int> lower = {8631, 5510};
    vector<int> upper = {7373, 3664};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "MALFORMED", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> answer = {"21 4", "9/08", "1.06", "1.10", " 9/8", "7/06", "5135", "9/30", "3.31", "6264", "229.", "8604", "1072", "8.62", "4266", "169.", "6877", " 117"};
    vector<int> lower = {4973, 4690};
    vector<int> upper = {5859, 4639};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> answer = {"52//", "71 6", " 5/8", ".566", ".646", ".566", ".634", ".715", "8/14", ".720", ".591", "2.08", "63/5", "854 ", "6821", "7481", "79.4", "50/9", "49.1", "9641", "9.50", "2568", "7753", "323.", "6749", "3552", "4330", "24.0", ".882", "6713", ".656"};
    vector<int> lower = {2901, 5148};
    vector<int> upper = {6828, 9461};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> answer = {"8/19", " .42", ".428", ".415", " .43", " .42", ".418", ".415", "8/19", "8/19", "5/12", ".432", ".423", ".419", ".421", ".43 ", ".430", ".416", ".420", ".43 ", ".416", ".415", ".426", ".433", ".430"};
    vector<int> lower = {4009, 9639};
    vector<int> upper = {2937, 6813};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> answer = {"76..", "7 .2", "80 4", "9.70", "5.35", " 4.2", " 16", ".63 ", " .63", ".460", "38/2", "9/07", "3/09", "2.36", ".877", "21.0", "42.6", "7.09", " 8/8", " 65", ".578", "4.99", "6.65", ".18 ", "7/35", "4664", "157.", " 838", "94.9", "78/4", "6028", "251 "};
    vector<int> lower = {1538, 8584};
    vector<int> upper = {2134, 28};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> answer = {"9/05", "7/5 ", ".930", "6. ", " 9/7", " 4.4", "7.86", "10/8", "6.11", "20/8", "62.4", "2760", "1321", "6144", "6426", "9509", "3830"};
    vector<int> lower = {2640, 3066};
    vector<int> upper = {7870, 347};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> answer = {".. ", "1 9.", "8/16", "3.34", ".747", ".494", ".506", ".962", " 2.8", ".541", ".482", ".883", "5.04", " .90", "551.", "7247", "92/0", "871.", "8910", "218 ", "1752", "92.2", "6493", "7.39", "2204", "1455", "7346", "4877", " 644"};
    vector<int> lower = {4474, 9827};
    vector<int> upper = {7943, 1513};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "MALFORMED", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> answer = {".877", ".789", "3/5 ", "8/09", ".7 ", " .62", "6/08", "6/07", ".771", "8/13", "94.5", "4/8 ", "81.4", "4123", "8540", "4345", ".681", "5751", "4819", "6300", "3883", "9955", " 055", "5260", ".329", "8715", "6815"};
    vector<int> lower = {4208, 7206};
    vector<int> upper = {9353, 7194};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> answer = {"48 .", "97 9", "39 8", ".585", ".888", ".543", ".896", ".962", ".792", ".769", ".898", ".736", ".528", ".581", ".554", ".636", "1.0 ", ".611", ".895", "7/11", ".771", ".792", ".552", ".75 ", " .74", ".722", ".654", " .60", "316 ", "505.", "9832"};
    vector<int> lower = {4997, 9575};
    vector<int> upper = {7257, 7095};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> answer = {"1/ ", "29 6", "7.5.", ".021", ".603", "4/57", "8/57", ".858", ".571", "6/81", ".625", ".103", ".207", "4/29", ".405", ".524"};
    vector<int> lower = {130, 9145};
    vector<int> upper = {2654, 2850};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> answer = {"82 9", ".47.", ". .7", "12/2", "48/7", "2.13", " 4.9", ".763", ".725", " .99", "1476", "9904", "9077", "1240", "7861", "4670", "6466", ".345", "7.15", "6029", "2129", "9.72", "3595", "5280", "2705", "1000", "676 ", "26/8", " 922"};
    vector<int> lower = {4024, 7800};
    vector<int> upper = {4176, 503};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> answer = {"4 15", "../6", " 1 4", " 4/7", ".462", ".867", "1.57", ".486", ".977", ".354", ".563", " .83", ".520", ".596", "3049", "6337", "1715"};
    vector<int> lower = {1295, 4520};
    vector<int> upper = {6778, 4215};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> answer = {"7.29", "7.39", "2.77", ".659", "2.33", "2/03", "5.71", "47/7", ".483", "12/3", "3/2 ", ".650", "3983", "8643", "7126", "4690", "5539"};
    vector<int> lower = {2478, 7728};
    vector<int> upper = {8803, 1123};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> answer = {"23 6", "9 62", "8 39", " 7/3", "1.70", ".971", "5/05", " .97", ".904", "25/8", "2.33", "5/5 ", "8/07", "1.07", "2.55", "4638", ".693", "1428"};
    vector<int> lower = {5819, 6510};
    vector<int> upper = {6642, 2027};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> answer = {"7..0", "7.35", "8.8 ", "8.00", "7.54", "69/9", "9.26", " 09 ", "7021", "1.88", "7356", "1/18"};
    vector<int> lower = {8994, 1618};
    vector<int> upper = {8749, 943};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> answer = {"9 45", " 1.6", "1.12", "4.84", ".861", " 3.9", "3.72", "3.11", "1.34", ".780", "1.27", "1.68", ".884", "1.70", "3.55", "1059", ".116", "71.7", "7/42", "7/41", "6576", ".78 ", "65.2", "1131", "3477", "43/0", "5600", "9. ", " 46.", "6298", "2/88", "9338", "3/38", "1047", "9074"};
    vector<int> lower = {6142, 7971};
    vector<int> upper = {432, 77};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "MALFORMED", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> answer = {"4 69", "9 04", "78 5", ".681", ".826", ".886", " .62", ".997", ".848", ".688", ".936", ".703", "1.01", ".668", ".833", "7/09", ".89 ", " .89", ".891", ".772", "4/6 ", "962.", " 358", "4/83", "3110", "5828", "9115", "3971", "8842", "6204", "6393", "60.6", "9708"};
    vector<int> lower = {4117, 6826};
    vector<int> upper = {9870, 9345};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> answer = {". 62", "7 06", ".482", ".617", ".842", "9/11", "3/04", ".456", ".905", ".911", " .7 ", ".830", ".655", ".530", ".714", ".792", ".492", " .50", ".954", ".748", "1.2 ", ".934", ".451", "6/11", " .92"};
    vector<int> lower = {4298, 9630};
    vector<int> upper = {9852, 7416};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> answer = {"68 1", "8/17", ".346", ".371", ".727", ".317", ".532", "8/16", " 3/7", ".554", " .45", ".310", ".413", ".496", ".206", "2/4 ", ".628", ".302", "9.28", "3/48", "4.09", "694.", " 913", "9263", "2.02", "5839", "16/2", "5889", "3849", ".046", "5850", ".625", "3368", "7922", "75.5", "2749", "6184", " .47"};
    vector<int> lower = {264, 1289};
    vector<int> upper = {6099, 8266};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> answer = {".3 0", ". /7", "3./8", "4.08", "3.53", "4. ", "3.74", "3.75", "28/7", " 4.0", "34/9", "26/8", "3.11", "10/3", "17/5", "3.52", "21/6", "3.45", " 6/2", "3.29", " 04 ", "2.99", "8898", "80/2", "5349", "410."};
    vector<int> lower = {7634, 2623};
    vector<int> upper = {9486, 2333};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "INCORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> answer = {" .24", ".206", ".336", ".372", ".225", ".259", "4/19", "8/21", ".228", ".391", " 1/4", "5/23", "4593", "8.31", "5959", " 030", " 686", "68.6"};
    vector<int> lower = {1652, 8182};
    vector<int> upper = {2411, 6083};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> answer = {"/67/", " 6/8", ".60 ", "9/09", ".943", ".616", ".784", ".695", "1.43", "7/13", ".580", ".50 ", " .52", ".690", ".484", ".636", ".402", "9977", "62.7", "1794", "57/4", "86/9", "24/4", " 89.", "5163", "8629"};
    vector<int> lower = {1657, 3471};
    vector<int> upper = {8141, 4850};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> answer = {". 7", "38 8", "80 9", " 6/5", " 5/4", "1.54", " 3/2", "1.55", "1.54", " 1.3", " 159", "16.6", "50.3", "9540", "521 ", "375 ", " 084"};
    vector<int> lower = {7496, 6332};
    vector<int> upper = {6629, 4332};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> answer = {" .98", ".931", ".96 ", ".993", " 1.", ".994", ".911", ".963", " 01", "2/02", ".946", ".930", ".914", " .97", "6/06", "6/06", ".98 ", ".974", ".916", ".935", ".933", "1.01", "91/9", "656.", "2440", "1264", "4/61", " 429", " 28.", "59.9", "5/15", "530.", "812 ", "6054", "116.", "911.", "4765", "8.08", "26.0", "8354", "963 "};
    vector<int> lower = {6495, 7125};
    vector<int> upper = {8879, 8885};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> answer = {". 61", "3 35", ". .5", ".729", ".852", "7/06", " 1.0", ".969", ".739", ".896", " 4/4", " 9/8", ".742", "8585", "2589", "347 ", " 122", "2386"};
    vector<int> lower = {3917, 5379};
    vector<int> upper = {4998, 3677};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> answer = {".14.", " /79", "3.8.", ".937", "1 ", ".940", " 8/7", " 0.9", ".850", ".878", ".83 ", ".904", "9/11", ".822", ".832", "5/06", ".963", ".990", ".823", ".919", " 5/6", ".89 ", ".843", ".99 ", ".855", ".874", "8.56", "727 ", "1324", "1786"};
    vector<int> lower = {4449, 5485};
    vector<int> upper = {3303, 2879};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> answer = {"/91 ", ".669", ".520", ".644", ".689", ".87 ", ".482", ".571", ".729", ".863", ".503", ".813", " .7", ".722", ".525", ".792", ".489", "2.97", "98. ", "3756", ".832", "3252", "71.8", ".887", "9424", "167.", "346 ", "7495", " 954", "101.", "8620", "4910", "1/26", "7.93", "7426"};
    vector<int> lower = {1600, 3537};
    vector<int> upper = {8501, 9711};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> answer = {"8/08", "1.39", "1.1 ", ".998", "9/8 ", "4/03", "1.2 ", "1.05", "1.42", "1.44", "1.02", "1.5 ", "1.71", "9/07", "7/05", "1.24", "1.44", "75 ", "8097", "2739", "55 "};
    vector<int> lower = {1430, 1447};
    vector<int> upper = {3747, 2203};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> answer = {"44 /", "4.15", "2.80", "7.83", "11.5", "4.37", "36/7", "7.35", "50/9", " 008", "27/9", "29/3", "9/81", "4/49", ".185"};
    vector<int> lower = {6839, 3037};
    vector<int> upper = {4780, 413};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> answer = {".878", ".906", "7/08", ".924", ".900", ".919", ".927", " 6/7", ".871", ".860", ".924", ".887", ".892", ".877", ".895", ".849", ".927", " .88", "74.3", "2154", " 52 ", " 0.8", "9.73", "2834", " 837", "1129", "2501", "8497", "2575", "52. ", " 210", "9012", "4614", "2428", "5.60", "4807", "7/12", " 037"};
    vector<int> lower = {6282, 7496};
    vector<int> upper = {3996, 4307};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> answer = {"6.. ", "..92", "1 /7", ".560", ".452", " .5 ", "2/4 ", " 0.5", ".532", " .47", ".513", ".530", ".535", ".442", "3599", "3726", "8553", "1510", "4847", "7859", "4527", "69/5", " 7.8", "5433", "3189", "718 ", "9001", "1390", "2480", "3652", "72.1", "5818", "3668", "5425"};
    vector<int> lower = {3163, 7209};
    vector<int> upper = {3726, 6099};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> answer = {"35 1", ".8 ", "1.78", ".606", "5/05", " 8/8", ".912", ".533", ".980", ".685", ".517", ".749", ".954", ".571", ".686", ".679", ".754", "1.09", ".795", ".699", ".817", ".811", ".692", ".546", " 4. ", "6900"};
    vector<int> lower = {3541, 9283};
    vector<int> upper = {7136, 3864};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> answer = {"7 24", "1.73", "2/15", "322.", "5999"};
    vector<int> lower = {1405, 4281};
    vector<int> upper = {6289, 1756};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> answer = {"61/ ", "8 97", ".798", "1/2 ", ".825", ".486", ".69 ", ".569", ".79 ", "7/69", ".511", ".607", "1.91", ".4 ", "6/33", " 6/6", ".763", ".26 ", ".158", ".723", ".144", ".923", " .89", "9331", "85/6", " 519", "8.67", "5149", "4588", "46.3", "321 ", " .21", "8105", ".45 ", ".62 ", "8.96", "9372", " 664", "8226", "5598", "5209"};
    vector<int> lower = {476, 5173};
    vector<int> upper = {5188, 2665};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> answer = {"68 0", "58 9", ".402", ".439", ".387", ".493", " 3/6", ".647", "9306", "8858", "5818", "86.9", "8342", "57.8"};
    vector<int> lower = {2777, 7847};
    vector<int> upper = {6601, 9657};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> answer = {"1/0 "};
    vector<int> lower = {0, 1};
    vector<int> upper = {9999, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> answer = {"1/00", "99/0", " 1/0", "0/00", "00/0"};
    vector<int> lower = {0, 9999};
    vector<int> upper = {9999, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> answer = {"0.00", "00/1", "00.0"};
    vector<int> lower = {1, 9999};
    vector<int> upper = {9999, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> answer = {"6.. ", "..92", "1 /7", ".560", ".452", " .5 ", "2/4 ", " 0.5", ".532", " .47", ".513", ".5 3", ".535", ".442", "3599", "3 6", "8553", "1510", "4847", "7859", "4527", "69/5", " 7.8", "5433", "3 /1", "718 ", "1/ 3", "1390", "/480", "3652", "72.1", "5818", "3668", "5425"};
    vector<int> lower = {3163, 7209};
    vector<int> upper = {3726, 6099};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "MALFORMED", "CORRECT", "CORRECT", "INCORRECT", "MALFORMED", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "MALFORMED", "INCORRECT", "MALFORMED", "INCORRECT", "MALFORMED", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> answer = {"1. ", " 1. ", " 1.", "1 ", " 1 ", " 1 ", " 1"};
    vector<int> lower = {1, 1};
    vector<int> upper = {9999, 9999};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> answer = {"1. ", " 1. ", " 1.", "1 ", " 1 ", " 1 ", " 1"};
    vector<int> lower = {4000, 4000};
    vector<int> upper = {1, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> answer = {" ", "....", " . ", "1 23", "8//5", "9.4.", "85/ ", "/123", "123/", "111.", " 1", " 1 ", " 1 ", "1 ", "1234", "0000", "1/99", ".000", ".001"};
    vector<int> lower = {1, 1};
    vector<int> upper = {1, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED", "MALFORMED", "INCORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> answer = {"99.9"};
    vector<int> lower = {100, 1};
    vector<int> upper = {100, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> answer = {"./5 ", " 5. ", ".333", " .3", ".3 ", " .0 ", " . 3", " 3 .", "3. ", "4/ ", "3 /4", "4 .", "0/01", "000/", " 3/2", "/333", " 1/7", ".142", ".143", "8/63", "9/56", "0.14", "0.15"};
    vector<int> lower = {100, 700};
    vector<int> upper = {10, 70};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "MALFORMED", "MALFORMED", "INCORRECT", "MALFORMED", "MALFORMED", "MALFORMED", "INCORRECT", "MALFORMED", "INCORRECT", "MALFORMED", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> answer = {" 1 "};
    vector<int> lower = {0, 1};
    vector<int> upper = {0, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> answer = {"1.02"};
    vector<int> lower = {0, 1};
    vector<int> upper = {1, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> answer = {"1/7 ", " 1/7", "1/07", "8/14", ".142", "0.14", "00.1"};
    vector<int> lower = {1, 7};
    vector<int> upper = {1, 7};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> answer = {"4000", "4001", "4002", "4003", "5000", "5001", "5002", "4999"};
    vector<int> lower = {4002, 1};
    vector<int> upper = {4999, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> answer = {"4/7 ", " 4/7", "4/07", "8/14", ".571", ".572", "1 2", ".012", "00/0", "01/0", "00/1"};
    vector<int> lower = {0, 12};
    vector<int> upper = {10, 2};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "MALFORMED", "CORRECT", "MALFORMED", "MALFORMED", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> answer = {"1 1"};
    vector<int> lower = {1, 1};
    vector<int> upper = {1001, 1000};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> answer = {" 8. ", "9999", ".999", "999.", "00.0", ".000", "000.", "1 .0", ".11.", "1./3", "0/99", "1/99", "99/1", "99/9", "4/07", ".570", ".572", ".573", ".569", ".571"};
    vector<int> lower = {400, 701};
    vector<int> upper = {400, 701};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "MALFORMED", "MALFORMED", "MALFORMED", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> answer = {"0 "};
    vector<int> lower = {2, 1000};
    vector<int> upper = {3, 1000};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> answer = {"4/7 ", " 4/7", "4/07", "8/14", ".571", ".572", ".571", ".572", "4 /7", "1. 5", ".5 7", ".573", ". 57", "4/ 7"};
    vector<int> lower = {4, 7};
    vector<int> upper = {4, 7};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "MALFORMED", "MALFORMED", "MALFORMED", "INCORRECT", "MALFORMED", "MALFORMED"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> answer = {"1/7 ", " 1/7", "1/07", "8/14", ".142", "0.14", "00.1", "1/7 ", " 1/7", "1/07", "8/14", ".142", "0.14", "00.1"};
    vector<int> lower = {1, 7};
    vector<int> upper = {1, 7};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> answer = {"4998", "4999", "5000", "5001", "5002", "5003"};
    vector<int> lower = {5000, 1};
    vector<int> upper = {5001, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> answer = {"1 0"};
    vector<int> lower = {10, 1};
    vector<int> upper = {10, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MALFORMED"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> answer = {"0.02"};
    vector<int> lower = {1, 99};
    vector<int> upper = {1, 98};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> answer = {" 4/7", "1.02", " 000"};
    vector<int> lower = {0, 1};
    vector<int> upper = {1, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "INCORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> answer = {" 1"};
    vector<int> lower = {0, 1};
    vector<int> upper = {1, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> answer = {"4/7 ", " 4/7", "4/ 7", "3/14", ".214", ". 21", ".21/", ". "};
    vector<int> lower = {0, 9999};
    vector<int> upper = {7, 33};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT", "INCORRECT", "MALFORMED", "INCORRECT", "INCORRECT", "MALFORMED", "MALFORMED", "MALFORMED"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> answer = {"4/7 ", " 4/7", "4/07", "8/14", ".571", ".572", "12. "};
    vector<int> lower = {4, 7};
    vector<int> upper = {4, 7};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "CORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> answer = {"1.43"};
    vector<int> lower = {1, 1};
    vector<int> upper = {57, 40};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> answer = {"1234", "9999", "0007", "0008", "0009", "0010"};
    vector<int> lower = {7, 1};
    vector<int> upper = {8, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT", "INCORRECT", "CORRECT", "CORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> answer = {"0.70", "0.67", "0.69", "0.71", "0.68", "0.71", "0.67", "0.71", "0.66", "0.71", "0.70", "0.67", "0.71", "0.67", "0.66", "0.71", "0.70"};
    vector<int> lower = {462, 675};
    vector<int> upper = {466, 671};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> answer = {"2.20", "2.05", "2.14", "2.19", "2.17", "2.07", "2.06", "2.13", "2.18", "2.14", "2.05", "2.09", "2.18", "2.15", "2.12", "2.08", "2.18", "2.10"};
    vector<int> lower = {808, 385};
    vector<int> upper = {815, 382};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "CORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "CORRECT"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> answer = {".111"};
    vector<int> lower = {1, 10};
    vector<int> upper = {2, 10};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> answer = {"1.47", "1.42", "1.43", "1.49", "1.50", "1.44", "1.40", "1.41", "1.49", "1.39", "1.46", "1.50", "1.47", "1.51", "1.49", "1.50", "1.51", "1.44", "1.47", "1.44"};
    vector<int> lower = {632, 437};
    vector<int> upper = {641, 435};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT", "CORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "INCORRECT", "CORRECT", "INCORRECT"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> answer = {"101."};
    vector<int> lower = {0, 100};
    vector<int> upper = {1, 100};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> answer = {"9999"};
    vector<int> lower = {9996, 1};
    vector<int> upper = {9997, 1};
    GradingGridIns* pObj = new GradingGridIns();
    clock_t start = clock();
    vector<string> result = pObj->score(answer, lower, upper);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INCORRECT"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=270505&rd=7998&pm=4608
********************************************************************************
#include <vector>
#include <string>
#include <cstdio>
using namespace std;
 
#define V(x) vector<x >
#define vs V(string)
#define vi V(int)
#define vd V(double)
 
#define fr(x,y,z) for((x)=(y);(x)<(z);(x)++)
#define fo(x,y) fr(x,0,y)
#define fir(n) fo(i,n)
#define fjr(n) fo(j,n)
#define fkr(n) fo(k,n)
#define fi fir(n)
#define fj fjr(n)
 
#define pb push_back
#define sz size()
#define cs c_str()
 
//#define fk fkr(n)
//#include <map>
//#include <set>
//#include <algorithm>
//#define ll long long
//#define flr(n) fo(l,n)
//#define fl flr(n)
//#define ins(x) insert(x)
#define df double
//#define srt(f) sort(f.begin(),f.end())
vs tk(string t,char *d)
{
  vs ret;
  char *buf,*s;
  buf=(char *) malloc(t.sz+1);
  strcpy(buf,t.cs);
  for(s=strtok(buf,d);s;s=strtok(0,d)) ret.push_back(s);
  free(buf);
  return ret;
}
 
df foo(string x) {
vs t=tk(x," ");
if(t.sz!=1) return -1;
x=t[0];
 
int d=0,s=0,i,dig=0;
fir(x.sz) if(x[i]=='.') d++; else if(x[i]=='/') s++; else if(x[i]>='0' && x[i]<='9') dig++;
 
if(dig==0) return -1;
 
if(d==0 && s==0) return (double) atoi(x.cs);
 
if(d==1 && s==0 && dig>=1) {
//t=tk(x,".");
//if(t.sz!=2) return -1;
return atof(x.cs);
}
 
if(d==0 && s==1) {
t=tk(x,"/");
if(t.sz==2) {
int x=atoi(t[0].cs); int y=atoi(t[1].cs);
if(!y) return -1; else return ((df)x)/y;
}
}
 
return -1;
}
 
bool lt(df x, df y) { return x<y-1e-8; }
 
class GradingGridIns { public: vs score(vs f, vi lo, vi hi) {
int n=f.sz;
int i,j,k,m;
 
fi printf("%f ",foo(f[i])); puts("");
vs ret;
vd subs;
 
df lof=((df) lo[0])/lo[1];
df hif=((df) hi[0])/hi[1];
 
string temp="    ";
char tt[14]="0123456789./ ";
fir(13) fjr(13) fo(k,13) fo(m,13) {
temp[0]=tt[i];
temp[1]=tt[j];
temp[2]=tt[k];
temp[3]=tt[m];
df t=foo(temp);
if(t>=0) subs.pb(t);
}
 
fi { df t=foo(f[i]); if(lt(t,0)) { ret.pb("MALFORMED"); continue; }
 
if(!lt(t,lof) && !lt(hif,t)) { ret.pb("CORRECT"); continue; }
 
fjr(subs.sz) if(lt(t,subs[j]) && lt(subs[j],lof)) { ret.pb("INCORRECT"); goto next; }
fjr(subs.sz) if(lt(hif,subs[j]) && lt(subs[j],t)) { ret.pb("INCORRECT"); goto next; }
ret.pb("CORRECT");
next:;
}
return ret;
}};

********************************************************************************
*******************************************************************************/
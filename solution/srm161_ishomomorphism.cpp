/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1807
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

class IsHomomorphism {
public:
    vector<string> numBad(vector<string> source, vector<string> target, vector<int> mapping);
};

vector<string> IsHomomorphism::numBad(vector<string> source, vector<string> target, vector<int> mapping) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> source = {"0000", "0123", "0202", "0321"};
    vector<string> target = {"0000", "0123", "0202", "0321"};
    vector<int> mapping = {0, 1, 2, 3};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> source = {"0123456", "1234560", "2345601", "3456012", "4560123", "5601234", "6012345"};
    vector<string> target = {"0123456", "1234560", "2345601", "3456012", "4560123", "5601234", "6012345"};
    vector<int> mapping = {1, 3, 2, 1, 2, 1, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(6,0)", "(6,1)", "(6,4)", "(6,6)"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> source = {"012", "120", "210"};
    vector<string> target = {"012", "120", "110"};
    vector<int> mapping = {0, 1, 2};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(2,0)"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> source = {"012", "120", "210"};
    vector<string> target = {"012", "120", "210"};
    vector<int> mapping = {1, 2, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(1,0)", "(1,2)", "(2,0)", "(2,2)"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> source = {"01", "10"};
    vector<string> target = {"10", "01"};
    vector<int> mapping = {1, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> source = {"9085757986", "6153745587", "6119873637", "3796833438", "9494764953", "7296623728", "2226603563", "7198095238", "2861164070", "5442035799"};
    vector<string> target = {"3262757233", "1906325120", "3018338180", "1463157991", "1328528587", "9719457931", "1312492347", "9955651413", "4227892411", "8856830992"};
    vector<int> mapping = {1, 6, 4, 2, 2, 2, 6, 7, 5, 9};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(0,9)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,7)", "(1,8)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(3,9)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(4,9)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(5,9)", "(6,0)", "(6,1)", "(6,3)", "(6,4)", "(6,7)", "(6,8)", "(6,9)", "(7,0)", "(7,1)", "(7,2)", "(7,4)", "(7,5)", "(7,6)", "(7,8)", "(7,9)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)", "(9,0)", "(9,1)", "(9,2)", "(9,3)", "(9,4)", "(9,5)", "(9,6)", "(9,7)", "(9,8)", "(9,9)"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> source = {"42066372", "31672736", "56410271", "72035565", "05154121", "30704305", "01154033", "35077313"};
    vector<string> target = {"70147144", "74103566", "47567276", "15600536", "77151767", "47115551", "65516700", "10345216"};
    vector<int> mapping = {2, 3, 7, 5, 3, 6, 5, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,1)", "(3,2)", "(3,4)", "(3,5)", "(3,7)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,6)", "(4,7)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,7)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> source = {"4663122", "6525101", "2062141", "1443115", "5161343", "0430101", "4413445"};
    vector<string> target = {"3523344", "0020021", "3112053", "4331355", "3255160", "5156460", "2031521"};
    vector<int> mapping = {6, 0, 4, 6, 5, 0, 6};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(3,0)", "(3,1)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(4,1)", "(4,2)", "(4,6)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> source = {"63354341", "63613315", "32304505", "03761763", "40403666", "04202324", "24320267", "04703455"};
    vector<string> target = {"13176020", "32122000", "15757236", "22075735", "43534352", "50477705", "35001624", "10125376"};
    vector<int> mapping = {6, 4, 3, 7, 7, 2, 0, 2};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,7)", "(2,0)", "(2,1)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(4,1)", "(4,2)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(5,0)", "(5,2)", "(5,4)", "(5,6)", "(6,0)", "(6,1)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,2)", "(7,4)", "(7,6)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> source = {"3426155", "0522355", "1001653", "3214062", "4166330", "2561060", "4305546"};
    vector<string> target = {"3512416", "1500623", "1522436", "4042352", "1454121", "3133402", "4516324"};
    vector<int> mapping = {3, 5, 0, 6, 0, 0, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,5)", "(6,0)", "(6,1)", "(6,3)", "(6,4)", "(6,5)", "(6,6)"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> source = {"2116506", "6061645", "6356614", "6044315", "4255062", "2444405", "5560656"};
    vector<string> target = {"6302112", "4415155", "0625162", "2642355", "2532442", "6021430", "6132142"};
    vector<int> mapping = {5, 2, 2, 5, 4, 5, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,5)", "(2,6)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,5)", "(5,6)", "(6,1)", "(6,6)"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> source = {"73747735", "34473235", "74316577", "56366724", "71421635", "62460616", "74106406", "03734046"};
    vector<string> target = {"05647141", "57561332", "13274321", "67430400", "25445216", "72475741", "26661465", "06333172"};
    vector<int> mapping = {6, 3, 5, 4, 7, 7, 3, 4};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(4,0)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(5,0)", "(5,1)", "(5,2)", "(5,4)", "(5,5)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,2)", "(7,3)", "(7,4)", "(7,6)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> source = {"138507632", "801756102", "602022561", "403445760", "481476443", "015475053", "030851282", "227221241", "088052153"};
    vector<string> target = {"882467708", "123766613", "316462837", "816766665", "604458684", "735800235", "370834273", "753287700", "027823741"};
    vector<int> mapping = {0, 2, 2, 6, 1, 1, 6, 1, 8};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(3,0)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(6,0)", "(6,1)", "(6,3)", "(6,4)", "(6,5)", "(6,7)", "(6,8)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,6)", "(7,7)", "(7,8)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,6)", "(8,7)", "(8,8)"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> source = {"3112", "1123", "0323", "2332"};
    vector<string> target = {"1201", "0100", "0032", "1101"};
    vector<int> mapping = {0, 0, 3, 3};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(3,0)", "(3,1)", "(3,2)", "(3,3)"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> source = {"632337834", "686427456", "651750204", "074233484", "842253873", "437421341", "580152202", "641538603", "375538641"};
    vector<string> target = {"688102214", "817121460", "114736661", "775531378", "563800825", "635343138", "021687552", "267448858", "631624802"};
    vector<int> mapping = {3, 6, 7, 5, 0, 1, 6, 0, 3};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,3)", "(0,4)", "(0,5)", "(0,7)", "(0,8)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(6,8)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(8,1)", "(8,2)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> source = {"4718801897", "8291267487", "5919453380", "1979440466", "5566673564", "7686143342", "7809272978", "5874234380", "8610435334", "5233175635"};
    vector<string> target = {"9429313969", "1612499941", "6412563059", "9954193399", "2444331313", "1217058416", "3620088629", "1916390218", "1366640817", "9607646828"};
    vector<int> mapping = {6, 9, 3, 8, 5, 6, 0, 7, 6, 5};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,8)", "(0,9)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,9)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(2,9)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,9)", "(4,0)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(5,9)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(6,8)", "(6,9)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(7,9)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,6)", "(8,7)", "(8,9)", "(9,0)", "(9,1)", "(9,2)", "(9,3)", "(9,4)", "(9,5)", "(9,6)", "(9,7)", "(9,9)"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> source = {"72075314", "31536725", "72146631", "40141557", "54475431", "22754055", "42721505", "00360440"};
    vector<string> target = {"73347432", "42507775", "01174467", "21200327", "00477041", "13350126", "17661065", "50305540"};
    vector<int> mapping = {3, 5, 2, 3, 5, 2, 0, 7};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,0)", "(3,2)", "(3,3)", "(3,4)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(7,0)", "(7,1)", "(7,4)", "(7,5)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> source = {"314123", "115253", "215333", "451515", "530002", "543310"};
    vector<string> target = {"544241", "504243", "142321", "541014", "552442", "054030"};
    vector<int> mapping = {1, 1, 2, 1, 2, 5};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> source = {"07243667", "11504537", "35437662", "67073302", "07465367", "37160514", "53731617", "51515731"};
    vector<string> target = {"40027546", "13705740", "26170416", "47057701", "71066555", "76426210", "47670244", "07725536"};
    vector<int> mapping = {1, 7, 2, 0, 4, 1, 6, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,6)", "(3,7)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(5,0)", "(5,1)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> source = {"010", "120", "211"};
    vector<string> target = {"200", "002", "221"};
    vector<int> mapping = {2, 0, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(1,1)", "(2,1)", "(2,2)"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> source = {"71357221", "47557077", "64606070", "77016043", "65245230", "62166056", "70322500", "00407000"};
    vector<string> target = {"35062455", "62463711", "52600745", "61544101", "21120455", "06377273", "22502376", "52111153"};
    vector<int> mapping = {6, 6, 6, 5, 3, 4, 5, 4};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,5)", "(4,6)", "(4,7)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,7)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> source = {"2032", "2202", "1132", "1132"};
    vector<string> target = {"1330", "3310", "1023", "2000"};
    vector<int> mapping = {0, 1, 3, 2};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(1,3)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(3,1)", "(3,2)", "(3,3)"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> source = {"125142", "515511", "452033", "252524", "202513", "020400"};
    vector<string> target = {"322211", "424112", "141144", "031220", "211025", "401311"};
    vector<int> mapping = {4, 2, 3, 0, 1, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,1)", "(0,5)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(4,0)", "(4,2)", "(4,3)", "(4,5)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> source = {"102", "101", "020"};
    vector<string> target = {"111", "000", "020"};
    vector<int> mapping = {2, 2, 2};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(1,0)", "(1,1)", "(1,2)", "(2,0)", "(2,1)", "(2,2)"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> source = {"9615327132", "1725186253", "4567271712", "7382011094", "2548186784", "5859169150", "7907293085", "9113266363", "4333724554", "2366477036"};
    vector<string> target = {"9582491808", "9652081679", "6423463297", "0306170873", "5650724176", "8790031936", "8625737056", "3335797291", "6876827162", "0058144879"};
    vector<int> mapping = {7, 0, 6, 4, 4, 9, 8, 0, 1, 9};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(0,9)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(1,9)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(3,9)", "(4,0)", "(4,1)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(4,9)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,8)", "(5,9)", "(6,0)", "(6,1)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(6,8)", "(6,9)", "(7,0)", "(7,1)", "(7,2)", "(7,4)", "(7,6)", "(7,7)", "(7,8)", "(7,9)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,5)", "(8,6)", "(8,8)", "(8,9)", "(9,0)", "(9,1)", "(9,2)", "(9,3)", "(9,4)", "(9,5)", "(9,6)", "(9,7)", "(9,8)", "(9,9)"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> source = {"0664246", "5326322", "2661156", "5626260", "2112313", "0116031", "5456621"};
    vector<string> target = {"5216012", "2315263", "2264665", "5112621", "5361444", "2502440", "3415232"};
    vector<int> mapping = {3, 4, 3, 3, 3, 4, 5};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(5,0)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> source = {"0058296758", "7369790131", "5584848388", "8660616806", "6996494152", "3510945861", "6902828753", "2870146162", "5650355870", "5723231725"};
    vector<string> target = {"6070719039", "4844010561", "3380575168", "4464616132", "8877708187", "2909303221", "6478511412", "8451433642", "3358339307", "3593398559"};
    vector<int> mapping = {7, 1, 2, 6, 8, 4, 4, 2, 9, 5};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,7)", "(0,8)", "(0,9)", "(1,0)", "(1,1)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(2,9)", "(3,0)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(3,9)", "(4,0)", "(4,1)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(4,9)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(5,9)", "(6,0)", "(6,1)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(6,8)", "(6,9)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(7,9)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,8)", "(8,9)", "(9,0)", "(9,1)", "(9,2)", "(9,3)", "(9,5)", "(9,6)", "(9,7)", "(9,8)", "(9,9)"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> source = {"2311", "2320", "0112", "2002"};
    vector<string> target = {"1132", "1323", "1211", "3020"};
    vector<int> mapping = {2, 1, 0, 3};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(1,0)", "(1,2)", "(1,3)", "(2,0)", "(2,3)", "(3,0)", "(3,1)", "(3,2)"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> source = {"05716013", "11223115", "05703013", "30060151", "76131467", "57222264", "47443710", "43652261"};
    vector<string> target = {"70246327", "63243604", "65404545", "12705753", "70501315", "26426622", "55661252", "77223320"};
    vector<int> mapping = {2, 5, 7, 1, 0, 3, 5, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,4)", "(0,5)", "(0,7)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(2,2)", "(2,3)", "(2,4)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,1)", "(7,2)", "(7,4)", "(7,5)", "(7,6)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> source = {"2332", "1321", "1221", "2223"};
    vector<string> target = {"1011", "2233", "2123", "2001"};
    vector<int> mapping = {0, 0, 2, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,3)", "(1,0)", "(1,2)", "(2,0)", "(2,3)", "(3,2)", "(3,3)"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> source = {"221143", "125232", "343245", "405411", "504252", "550020"};
    vector<string> target = {"234555", "515251", "222531", "210124", "413033", "220210"};
    vector<int> mapping = {5, 3, 3, 0, 4, 3};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(3,0)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(4,1)", "(4,2)", "(4,3)", "(4,5)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> source = {"74466357", "73206276", "71577610", "06267314", "13757673", "71605375", "72570150", "30364063"};
    vector<string> target = {"50573302", "04657710", "62734535", "05141673", "73465035", "10334452", "37135320", "74662137"};
    vector<int> mapping = {6, 0, 7, 0, 7, 7, 3, 3};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,4)", "(0,6)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(2,1)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(4,0)", "(4,1)", "(4,2)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(5,1)", "(5,2)", "(5,3)", "(5,5)", "(5,6)", "(5,7)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> source = {"784857221", "142068708", "288148006", "572787211", "814818611", "484153870", "567408233", "734338880", "534247757"};
    vector<string> target = {"006207655", "011322205", "467857301", "146446101", "850800053", "126635767", "766840057", "536162438", "526253471"};
    vector<int> mapping = {8, 7, 4, 8, 7, 2, 4, 1, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(1,0)", "(1,1)", "(1,2)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(2,0)", "(2,1)", "(2,3)", "(2,4)", "(2,6)", "(2,7)", "(2,8)", "(3,0)", "(3,1)", "(3,2)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(5,0)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,6)", "(6,7)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> source = {"32706261", "35473321", "41443670", "04572572", "21672427", "64563521", "71543374", "30603611"};
    vector<string> target = {"27312042", "41467346", "21266537", "24125417", "26714261", "57656217", "05110125", "11316506"};
    vector<int> mapping = {2, 4, 6, 5, 5, 7, 2, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,7)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,6)", "(3,7)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,7)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,5)", "(5,6)", "(5,7)", "(6,0)", "(6,1)", "(6,2)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,2)", "(7,3)", "(7,4)", "(7,6)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> source = {"06623470", "64136045", "33071707", "35043007", "60473343", "44167314", "14576152", "40202361"};
    vector<string> target = {"43025474", "27041603", "43431551", "10074142", "42665451", "00506305", "31474226", "36167031"};
    vector<int> mapping = {5, 0, 7, 7, 2, 0, 2, 2};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,7)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> source = {"31572727", "43100333", "17273176", "25136341", "26605533", "37537533", "04555112", "02057443"};
    vector<string> target = {"14004020", "35455270", "31470042", "74545612", "61627305", "52262412", "46745725", "57024643"};
    vector<int> mapping = {3, 5, 3, 1, 5, 3, 6, 7};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,7)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(4,0)", "(4,1)", "(4,3)", "(4,4)", "(4,5)", "(4,7)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,7)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> source = {"004541571", "545186628", "217362061", "208561054", "203703886", "650508632", "321247867", "670585232", "381646314"};
    vector<string> target = {"352786708", "452285176", "608602171", "087556052", "564535083", "760146402", "088346011", "636375446", "827617480"};
    vector<int> mapping = {6, 5, 0, 5, 5, 8, 3, 0, 8};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,8)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,8)", "(3,0)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(4,0)", "(4,2)", "(4,3)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(6,8)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,6)", "(7,7)", "(7,8)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> source = {"52024407", "02757570", "32445560", "00345506", "32210303", "61352056", "22727140", "31607427"};
    vector<string> target = {"42224651", "51370273", "51726112", "20143123", "63566745", "60470415", "61304501", "56560416"};
    vector<int> mapping = {6, 0, 6, 2, 2, 5, 0, 7};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,7)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(2,0)", "(2,2)", "(2,3)", "(2,4)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> source = {"201", "221", "211"};
    vector<string> target = {"011", "022", "101"};
    vector<int> mapping = {0, 1, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,1)", "(0,2)", "(1,1)", "(1,2)", "(2,2)"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> source = {"032412", "321233", "215014", "001212", "333424", "331500"};
    vector<string> target = {"344145", "231121", "400020", "432522", "233352", "245244"};
    vector<int> mapping = {4, 0, 3, 2, 1, 2};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,3)", "(0,4)", "(1,0)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(3,0)", "(3,3)", "(3,5)", "(4,2)", "(5,1)", "(5,3)", "(5,4)", "(5,5)"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> source = {"04203", "41324", "40432", "33404", "21300"};
    vector<string> target = {"23113", "02223", "23121", "24223", "02312"};
    vector<int> mapping = {0, 2, 0, 0, 3};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(4,0)", "(4,2)", "(4,3)", "(4,4)"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> source = {"0202", "0110", "1311", "2202"};
    vector<string> target = {"3222", "0230", "3112", "1333"};
    vector<int> mapping = {1, 1, 1, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(3,0)", "(3,1)", "(3,2)", "(3,3)"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> source = {"6899746935", "5554195847", "9135189233", "6630987996", "4525502719", "4947258801", "3982505708", "9592192664", "9223643536", "9207070642"};
    vector<string> target = {"2356764160", "9982145962", "3181757979", "3749363272", "1603468235", "4847308803", "3010160492", "3653043923", "2125087830", "2691610150"};
    vector<int> mapping = {1, 3, 6, 2, 3, 2, 5, 2, 2, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,2)", "(0,3)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(0,9)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(1,9)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(2,9)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(3,9)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,7)", "(4,8)", "(4,9)", "(5,0)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(5,9)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(6,8)", "(6,9)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(7,9)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)", "(8,9)", "(9,0)", "(9,1)", "(9,2)", "(9,3)", "(9,4)", "(9,5)", "(9,6)", "(9,7)", "(9,8)", "(9,9)"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> source = {"45600477", "70610441", "17324454", "35215206", "61377342", "60675133", "05421613", "27441406"};
    vector<string> target = {"65034611", "24337626", "07110256", "65325406", "47350476", "51545377", "45166275", "47211537"};
    vector<int> mapping = {6, 5, 6, 2, 3, 6, 0, 4};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,5)", "(0,7)", "(1,0)", "(1,1)", "(1,2)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,5)", "(5,6)", "(5,7)", "(6,0)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,2)", "(7,5)", "(7,6)"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> source = {"01231", "41004", "31023", "14001", "40031"};
    vector<string> target = {"11304", "03014", "23401", "32102", "43340"};
    vector<int> mapping = {1, 1, 4, 4, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,4)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(4,0)", "(4,2)"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> source = {"0120611", "1251234", "2341520", "5051663", "0466616", "6315164", "2000246"};
    vector<string> target = {"1544402", "6512243", "6345002", "6105155", "5021255", "2313242", "1062016"};
    vector<int> mapping = {0, 5, 6, 5, 3, 1, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,4)", "(0,6)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(6,0)", "(6,2)", "(6,4)", "(6,5)", "(6,6)"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> source = {"102", "122", "100"};
    vector<string> target = {"122", "202", "200"};
    vector<int> mapping = {0, 2, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(1,1)", "(1,2)", "(2,1)"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> source = {"345513", "002454", "443005", "413405", "455200", "421203"};
    vector<string> target = {"302222", "223245", "532331", "001210", "245030", "130523"};
    vector<int> mapping = {5, 5, 5, 4, 1, 4};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> source = {"212", "122", "002"};
    vector<string> target = {"020", "110", "210"};
    vector<int> mapping = {1, 1, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> source = {"9419727816", "3912525453", "8865158108", "0015203940", "2194943220", "4352759810", "1699845738", "5303881477", "7002558466", "9220035622"};
    vector<string> target = {"1856482648", "7460497074", "0065955006", "3003338529", "4874284685", "6796419453", "9318674258", "6198333114", "4279594178", "7503485511"};
    vector<int> mapping = {8, 4, 7, 4, 2, 2, 3, 9, 0, 8};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,7)", "(0,9)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,6)", "(1,7)", "(1,8)", "(1,9)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,8)", "(2,9)", "(3,1)", "(3,2)", "(3,5)", "(3,7)", "(3,8)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(4,9)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(5,9)", "(6,0)", "(6,2)", "(6,3)", "(6,5)", "(6,6)", "(6,8)", "(6,9)", "(7,0)", "(7,2)", "(7,6)", "(7,7)", "(7,8)", "(7,9)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)", "(8,9)", "(9,0)", "(9,1)", "(9,2)", "(9,3)", "(9,4)", "(9,5)", "(9,6)", "(9,7)", "(9,8)"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> source = {"1416664", "4203310", "5441016", "3644105", "4135523", "4433125", "6061343"};
    vector<string> target = {"4343613", "4042460", "2332601", "5456305", "4531420", "4665261", "0645310"};
    vector<int> mapping = {5, 4, 0, 3, 5, 6, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,3)", "(0,4)", "(0,6)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(3,0)", "(3,1)", "(3,3)", "(3,4)", "(3,6)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,5)", "(4,6)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> source = {"3310", "0301", "3110", "3302"};
    vector<string> target = {"3333", "1330", "1330", "0033"};
    vector<int> mapping = {3, 1, 2, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,2)", "(0,3)", "(1,0)", "(1,1)", "(2,1)", "(2,2)", "(2,3)", "(3,0)", "(3,1)", "(3,3)"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> source = {"5205302", "5623666", "6403013", "3602051", "4356245", "2436632", "2311651"};
    vector<string> target = {"3453423", "2160220", "3463355", "5231434", "1106412", "6166341", "6144263"};
    vector<int> mapping = {3, 3, 2, 1, 1, 1, 3};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,1)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,6)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,6)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,6)", "(6,0)", "(6,3)", "(6,4)", "(6,5)", "(6,6)"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> source = {"13140", "10303", "14432", "01131", "34021"};
    vector<string> target = {"10103", "30323", "34222", "23210", "03201"};
    vector<int> mapping = {3, 4, 2, 2, 3};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(1,0)", "(1,1)", "(1,3)", "(1,4)", "(2,0)", "(2,1)", "(2,2)", "(3,0)", "(3,1)", "(3,2)", "(3,4)", "(4,0)", "(4,1)", "(4,2)", "(4,4)"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> source = {"40127731", "76154726", "00525160", "33361421", "67530212", "52673510", "21405521", "24410453"};
    vector<string> target = {"51223540", "67701647", "77364443", "76302247", "22337275", "40402337", "40632041", "56074412"};
    vector<int> mapping = {2, 5, 5, 4, 1, 7, 4, 6};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,7)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(4,0)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(5,0)", "(5,1)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,6)"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> source = {"2452563", "5562261", "4333435", "3553562", "1142665", "1154223", "5250003"};
    vector<string> target = {"3011410", "4555051", "4204560", "3223265", "3426521", "2616643", "2541422"};
    vector<int> mapping = {1, 5, 1, 0, 4, 4, 2};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(1,0)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,6)", "(3,1)", "(3,2)", "(3,3)", "(3,5)", "(4,0)", "(4,1)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(5,0)", "(5,1)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> source = {"210", "221", "220"};
    vector<string> target = {"020", "002", "220"};
    vector<int> mapping = {1, 0, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,2)", "(1,0)", "(2,0)", "(2,2)"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> source = {"038020586", "130835236", "017256884", "755502372", "334645542", "327208812", "885061758", "848521800", "126471420"};
    vector<string> target = {"544526082", "316132388", "261431010", "117662857", "551784817", "567067254", "085008725", "410458053", "757253260"};
    vector<int> mapping = {2, 3, 2, 2, 4, 7, 0, 5, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,8)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,7)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,8)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,7)", "(6,8)", "(7,0)", "(7,1)", "(7,2)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(8,0)", "(8,1)", "(8,2)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> source = {"7169251858", "4960231094", "3964896682", "2263814146", "3719780885", "2594647165", "9766500562", "8463052559", "9010872825", "3421574468"};
    vector<string> target = {"2834964173", "4767000880", "4082195904", "6487780309", "7498755154", "9030640413", "9127902236", "9932354917", "4574518926", "5491721499"};
    vector<int> mapping = {8, 6, 4, 7, 4, 6, 9, 1, 8, 4};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,7)", "(0,8)", "(0,9)", "(1,0)", "(1,1)", "(1,3)", "(1,4)", "(1,5)", "(1,7)", "(1,8)", "(1,9)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(2,9)", "(3,0)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(3,9)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(4,9)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(5,9)", "(6,0)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(6,9)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(7,9)", "(8,0)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)", "(8,9)", "(9,0)", "(9,1)", "(9,2)", "(9,3)", "(9,4)", "(9,5)", "(9,8)", "(9,9)"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> source = {"31200", "22441", "04321", "30144", "24331"};
    vector<string> target = {"14240", "12444", "34401", "33040", "13414"};
    vector<int> mapping = {2, 1, 2, 3, 3};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(1,0)", "(1,2)", "(1,3)", "(1,4)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(4,0)", "(4,2)", "(4,3)", "(4,4)"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> source = {"5033345717", "2051312713", "8798827705", "4995396008", "7097188940", "5111860805", "6856185973", "4476393278", "4596156405", "3380605589"};
    vector<string> target = {"6418691315", "9903678763", "7040674518", "4577566773", "8138227820", "9136639344", "2263925059", "5887462160", "3435830721", "8846791588"};
    vector<int> mapping = {2, 1, 9, 2, 8, 2, 6, 2, 5, 5};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(0,9)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(1,9)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(2,9)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(3,9)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(4,9)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(5,9)", "(6,1)", "(6,2)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(7,9)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)", "(8,9)", "(9,0)", "(9,1)", "(9,2)", "(9,3)", "(9,4)", "(9,5)", "(9,6)", "(9,7)", "(9,8)", "(9,9)"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> source = {"305441", "010112", "550250", "212220", "355111", "140402"};
    vector<string> target = {"530323", "242050", "202044", "131023", "101003", "552311"};
    vector<int> mapping = {5, 4, 1, 0, 5, 5};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,4)", "(0,5)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(2,0)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(4,0)", "(4,1)", "(4,3)", "(4,4)", "(4,5)", "(5,0)", "(5,1)", "(5,4)"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> source = {"30342", "42310", "40231", "43230", "02401"};
    vector<string> target = {"21244", "24224", "30311", "12241", "11201"};
    vector<int> mapping = {2, 0, 1, 3, 4};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,1)", "(0,2)", "(0,3)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(2,0)", "(2,2)", "(2,3)", "(2,4)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(4,2)", "(4,3)", "(4,4)"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> source = {"1208189466", "0104422189", "5461791261", "6428493102", "0455527173", "2153497951", "3875236521", "0779699233", "6026542416", "8800033505"};
    vector<string> target = {"8449545809", "0676083167", "6964606862", "2392591386", "7565363357", "1503751588", "1060009081", "6951047050", "1098938110", "6299544283"};
    vector<int> mapping = {0, 2, 5, 5, 6, 4, 2, 0, 6, 5};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(0,9)", "(1,0)", "(1,1)", "(1,3)", "(1,5)", "(1,6)", "(1,7)", "(1,9)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(2,9)", "(3,0)", "(3,1)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(4,0)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(4,9)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(5,9)", "(6,0)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(6,8)", "(6,9)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,6)", "(7,7)", "(7,9)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)", "(8,9)", "(9,0)", "(9,1)", "(9,2)", "(9,3)", "(9,4)", "(9,5)", "(9,6)", "(9,7)", "(9,8)", "(9,9)"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> source = {"2140124", "4504152", "6422164", "3566625", "5603533", "2255043", "6222425"};
    vector<string> target = {"5233601", "4226062", "3510236", "2040053", "5200560", "3324421", "0026542"};
    vector<int> mapping = {6, 0, 6, 6, 6, 6, 6};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> source = {"183077736", "514430152", "286101475", "475112247", "328873876", "075772347", "420413608", "520101423", "043280254"};
    vector<string> target = {"841348757", "751800530", "583774676", "840452183", "008803236", "664562475", "222871484", "421073505", "751666680"};
    vector<int> mapping = {7, 1, 3, 5, 2, 6, 3, 7, 8};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,6)", "(2,7)", "(2,8)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,8)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(6,0)", "(6,1)", "(6,2)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(6,8)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> source = {"60337412", "35465307", "43100643", "62560335", "67477017", "55461750", "26117056", "13023534"};
    vector<string> target = {"16135260", "21321174", "75554677", "26477076", "45771057", "37641152", "45230012", "44534424"};
    vector<int> mapping = {6, 2, 1, 0, 0, 3, 7, 7};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,7)", "(1,0)", "(1,1)", "(1,2)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,0)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,7)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,6)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,6)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> source = {"200", "122", "100"};
    vector<string> target = {"222", "021", "110"};
    vector<int> mapping = {1, 0, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(1,0)", "(1,1)", "(1,2)", "(2,0)", "(2,1)", "(2,2)"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> source = {"1079564367", "4479746064", "6151197685", "8193804244", "8133913789", "0304918442", "1028821788", "2436326560", "6259613562", "5455077322"};
    vector<string> target = {"9608573124", "9300287341", "5155540783", "6037325089", "6593499325", "3245661759", "1358138266", "1370819277", "0552623063", "9823438894"};
    vector<int> mapping = {4, 5, 9, 0, 9, 7, 4, 6, 9, 2};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(0,9)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(1,9)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(2,9)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(3,9)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,8)", "(5,9)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(6,8)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(7,9)", "(8,1)", "(8,2)", "(8,3)", "(8,5)", "(8,6)", "(8,7)", "(8,9)", "(9,0)", "(9,1)", "(9,2)", "(9,3)", "(9,4)", "(9,5)", "(9,6)", "(9,8)", "(9,9)"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> source = {"4612127202", "1820736799", "5857264182", "3473774753", "1134248551", "3551779486", "0367198859", "4319090165", "3779633637", "6104084322"};
    vector<string> target = {"9911337280", "3800358267", "5506854924", "0511359269", "0736380649", "0898868247", "2046359980", "7838231298", "1295034014", "8602650199"};
    vector<int> mapping = {1, 4, 2, 1, 2, 5, 6, 8, 4, 7};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,7)", "(0,8)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(1,9)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(2,9)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(3,9)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,7)", "(4,8)", "(4,9)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(5,9)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,5)", "(6,6)", "(6,7)", "(6,8)", "(6,9)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(7,9)", "(8,0)", "(8,1)", "(8,2)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)", "(8,9)", "(9,0)", "(9,1)", "(9,2)", "(9,3)", "(9,4)", "(9,5)", "(9,6)", "(9,7)"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> source = {"2000", "1223", "1233", "2203"};
    vector<string> target = {"0210", "2022", "1311", "2011"};
    vector<int> mapping = {0, 0, 1, 2};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,2)", "(0,3)", "(1,1)", "(1,2)", "(1,3)", "(2,0)", "(2,1)", "(2,2)", "(3,2)", "(3,3)"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> source = {"6225534", "3512320", "1651045", "6362660", "2421164", "3412011", "0401606"};
    vector<string> target = {"4313144", "0564422", "4421235", "1455250", "5222545", "6234520", "5143520"};
    vector<int> mapping = {4, 5, 3, 5, 4, 6, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,6)", "(1,1)", "(1,2)", "(1,3)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,4)", "(2,5)", "(2,6)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,6)", "(4,0)", "(4,2)", "(4,3)", "(4,5)", "(4,6)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(6,0)", "(6,2)", "(6,3)", "(6,4)", "(6,6)"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> source = {"20143", "42013", "44324", "24041", "24213"};
    vector<string> target = {"10443", "03240", "21011", "31140", "21010"};
    vector<int> mapping = {3, 2, 0, 3, 4};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,4)", "(1,0)", "(1,2)", "(1,3)", "(1,4)", "(2,2)", "(2,3)", "(2,4)", "(3,0)", "(3,1)", "(3,4)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> source = {"2112", "0021", "3330", "2320"};
    vector<string> target = {"1111", "2113", "3113", "2222"};
    vector<int> mapping = {2, 0, 0, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(3,0)", "(3,1)", "(3,2)", "(3,3)"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> source = {"580064753", "820353530", "184474812", "107124846", "648073012", "035836237", "456141636", "142336865", "132684012"};
    vector<string> target = {"220242307", "223200113", "402546504", "860377651", "336512067", "444015745", "754580186", "273746161", "028382450"};
    vector<int> mapping = {7, 6, 3, 8, 4, 2, 5, 4, 2};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,8)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,7)", "(3,8)", "(4,0)", "(4,1)", "(4,2)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,7)", "(6,8)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,7)", "(7,8)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> source = {"010", "010", "001"};
    vector<string> target = {"021", "010", "121"};
    vector<int> mapping = {0, 2, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,1)", "(1,0)", "(1,1)", "(1,2)", "(2,1)", "(2,2)"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> source = {"205068406", "617878466", "642751068", "161480056", "186553724", "284070730", "606880522", "324104845", "428578263"};
    vector<string> target = {"215587014", "243177866", "516216587", "453306342", "262033365", "224761307", "265378418", "863687186", "470253712"};
    vector<int> mapping = {7, 1, 0, 1, 2, 5, 7, 8, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,6)", "(3,7)", "(3,8)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,7)", "(4,8)", "(5,1)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,6)", "(6,7)", "(6,8)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,8)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> source = {"224253", "442214", "153012", "543050", "342143", "422055"};
    vector<string> target = {"352001", "513435", "025020", "424420", "532345", "002521"};
    vector<int> mapping = {4, 4, 5, 5, 5, 4};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,4)", "(0,5)", "(1,0)", "(1,1)", "(1,4)", "(1,5)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(5,0)", "(5,1)", "(5,3)", "(5,4)"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> source = {"0414032", "2004212", "1035536", "1330401", "6532224", "2662255", "3646111"};
    vector<string> target = {"5151106", "3435511", "4320323", "2024535", "3050651", "0065022", "5203330"};
    vector<int> mapping = {5, 0, 2, 0, 1, 2, 4};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(1,0)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(3,1)", "(3,2)", "(3,6)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(5,2)", "(5,3)", "(5,4)", "(5,6)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,5)", "(6,6)"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> source = {"00231", "03311", "30114", "41223", "02234"};
    vector<string> target = {"40122", "22121", "44040", "24410", "44231"};
    vector<int> mapping = {4, 0, 3, 4, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,3)", "(0,4)", "(1,0)", "(1,2)", "(1,3)", "(1,4)", "(2,0)", "(2,1)", "(2,2)", "(2,4)", "(3,0)", "(3,1)", "(3,3)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> source = {"1011", "3022", "2013", "2102"};
    vector<string> target = {"1001", "0330", "2023", "0331"};
    vector<int> mapping = {2, 0, 1, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(3,0)", "(3,2)", "(3,3)"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> source = {"30203", "31132", "42101", "41210", "20443"};
    vector<string> target = {"12021", "21041", "10120", "41022", "44441"};
    vector<int> mapping = {2, 4, 3, 4, 3};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(1,1)", "(1,3)", "(1,4)", "(2,0)", "(2,1)", "(2,2)", "(2,4)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(4,0)", "(4,2)", "(4,3)", "(4,4)"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> source = {"012", "121", "001"};
    vector<string> target = {"010", "022", "000"};
    vector<int> mapping = {2, 2, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(1,0)", "(1,1)", "(1,2)"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> source = {"122", "211", "221"};
    vector<string> target = {"211", "220", "020"};
    vector<int> mapping = {2, 0, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,1)", "(0,2)", "(1,1)", "(1,2)", "(2,0)", "(2,1)", "(2,2)"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> source = {"3313", "0023", "0132", "0010"};
    vector<string> target = {"2331", "0312", "2202", "2203"};
    vector<int> mapping = {3, 3, 0, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(1,2)", "(1,3)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(3,0)", "(3,1)", "(3,2)"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> source = {"210", "211", "111"};
    vector<string> target = {"110", "111", "021"};
    vector<int> mapping = {2, 2, 2};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(1,0)", "(1,1)", "(1,2)", "(2,0)", "(2,1)", "(2,2)"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> source = {"4298598983", "5795994726", "4844238601", "7673610212", "8826679129", "8806697626", "9457614206", "3725678556", "4324906789", "6436971991"};
    vector<string> target = {"7938286524", "1233257182", "3443428225", "3673754430", "2413414612", "2202796548", "8968940344", "0596455251", "9927584491", "6660982435"};
    vector<int> mapping = {7, 2, 8, 2, 0, 7, 6, 5, 4, 8};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(0,9)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(1,9)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,7)", "(2,8)", "(2,9)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,6)", "(3,7)", "(3,8)", "(3,9)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,6)", "(4,7)", "(4,8)", "(4,9)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,7)", "(5,8)", "(5,9)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,7)", "(6,8)", "(6,9)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,6)", "(7,7)", "(7,9)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,9)", "(9,0)", "(9,1)", "(9,2)", "(9,3)", "(9,4)", "(9,5)", "(9,6)", "(9,8)", "(9,9)"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> source = {"23130", "01032", "03011", "30402", "11212"};
    vector<string> target = {"32023", "04321", "22202", "33344", "44230"};
    vector<int> mapping = {0, 4, 3, 2, 3};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,1)", "(0,2)", "(0,3)", "(0,4)", "(1,0)", "(1,1)", "(1,2)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(4,0)", "(4,2)", "(4,3)", "(4,4)"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> source = {"011", "022", "021"};
    vector<string> target = {"122", "122", "102"};
    vector<int> mapping = {0, 2, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,2)", "(1,0)", "(1,1)", "(1,2)", "(2,0)", "(2,1)", "(2,2)"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> source = {"03103", "02342", "30002", "10313", "00400"};
    vector<string> target = {"10243", "04033", "40011", "20301", "01141"};
    vector<int> mapping = {4, 0, 4, 1, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(1,0)", "(1,1)", "(1,2)", "(1,4)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> source = {"31130", "14422", "43032", "11401", "11242"};
    vector<string> target = {"33424", "14222", "44032", "02000", "32103"};
    vector<int> mapping = {2, 2, 1, 3, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,4)", "(1,0)", "(1,2)", "(1,3)", "(1,4)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> source = {"44410", "00023", "34141", "04022", "01334"};
    vector<string> target = {"14121", "40033", "04144", "04131", "13120"};
    vector<int> mapping = {2, 2, 4, 3, 4};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,3)", "(0,4)", "(1,0)", "(1,1)", "(1,2)", "(1,4)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> source = {"4203106", "6346355", "0156560", "5523660", "0334346", "2145060", "1612216"};
    vector<string> target = {"2453153", "4621232", "2645043", "1105246", "1152311", "3433045", "0133510"};
    vector<int> mapping = {5, 2, 6, 3, 3, 2, 5};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,4)", "(0,5)", "(0,6)", "(1,0)", "(1,1)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(3,0)", "(3,1)", "(3,3)", "(3,5)", "(3,6)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(5,0)", "(5,1)", "(5,3)", "(5,5)", "(5,6)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> source = {"020", "201", "101"};
    vector<string> target = {"010", "111", "210"};
    vector<int> mapping = {2, 0, 2};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,2)", "(1,0)", "(1,1)"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> source = {"0112", "3120", "2303", "0213"};
    vector<string> target = {"1033", "1030", "2211", "0121"};
    vector<int> mapping = {1, 0, 1, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(1,1)", "(1,2)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(3,0)", "(3,3)"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> source = {"7315477096", "2314165918", "3708827477", "2544147791", "7544581268", "0533985339", "6395233630", "4809579427", "4400040437", "5116845195"};
    vector<string> target = {"4024089547", "5175978332", "1340571845", "0441428092", "7227736381", "6975004370", "1372178729", "1088772577", "7164701130", "3251244788"};
    vector<int> mapping = {6, 2, 9, 2, 9, 4, 1, 8, 0, 5};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,1)", "(0,2)", "(0,3)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(0,9)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(1,9)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(2,9)", "(3,0)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(3,9)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,7)", "(4,8)", "(4,9)", "(5,1)", "(5,2)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(5,9)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(6,8)", "(6,9)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(7,9)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)", "(9,1)", "(9,2)", "(9,3)", "(9,5)", "(9,6)", "(9,7)", "(9,8)", "(9,9)"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> source = {"3302", "3333", "0013", "3232"};
    vector<string> target = {"0030", "1201", "1330", "3130"};
    vector<int> mapping = {1, 1, 1, 3};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(3,0)", "(3,2)", "(3,3)"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> source = {"111", "111", "011"};
    vector<string> target = {"110", "110", "121"};
    vector<int> mapping = {0, 0, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(1,0)", "(1,1)", "(1,2)", "(2,0)", "(2,1)", "(2,2)"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> source = {"63142724", "57101665", "10351714", "12776117", "36643411", "04232652", "35671762", "65537073"};
    vector<string> target = {"35401737", "54245650", "57523312", "03243714", "40125623", "63463465", "41740741", "70625165"};
    vector<int> mapping = {5, 5, 6, 3, 3, 5, 2, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,5)", "(0,6)", "(0,7)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(5,0)", "(5,1)", "(5,3)", "(5,5)", "(5,6)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,5)", "(7,6)"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> source = {"0653012", "2232024", "1204233", "6216243", "1443044", "5024116", "1063064"};
    vector<string> target = {"6434234", "3314363", "3060100", "1556154", "1406540", "6202611", "1323551"};
    vector<int> mapping = {3, 2, 2, 1, 3, 1, 5};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,6)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(5,0)", "(5,1)", "(5,2)", "(5,4)", "(5,5)", "(5,6)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> source = {"62213045", "04432157", "72674306", "44051743", "57452402", "11355646", "44652620", "57426752"};
    vector<string> target = {"25127377", "64447043", "36776323", "67545306", "31450301", "55436401", "46016223", "43331417"};
    vector<int> mapping = {3, 5, 5, 1, 4, 7, 7, 6};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,6)", "(2,7)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,6)", "(5,7)", "(6,0)", "(6,2)", "(6,3)", "(6,4)", "(6,6)", "(6,7)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> source = {"633700530", "512823211", "436251625", "062717740", "425612180", "813710207", "445638668", "320648002", "107166360"};
    vector<string> target = {"777137241", "205353858", "668060660", "846468303", "486084048", "647616031", "606612404", "340618538", "802801202"};
    vector<int> mapping = {2, 8, 0, 0, 2, 5, 5, 3, 2};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,8)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,8)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(4,0)", "(4,2)", "(4,3)", "(4,6)", "(4,7)", "(4,8)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(6,8)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,7)", "(8,8)"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> source = {"57507760", "04474445", "02106513", "15637354", "73177071", "52702600", "34417611", "31734450"};
    vector<string> target = {"61272035", "37760302", "05271164", "57633662", "53077335", "70026703", "24636774", "71740106"};
    vector<int> mapping = {7, 5, 2, 5, 2, 1, 5, 7};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,5)", "(0,6)", "(0,7)", "(1,0)", "(1,1)", "(1,2)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(5,0)", "(5,1)", "(5,3)", "(5,4)", "(5,5)", "(5,6)", "(5,7)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(7,0)", "(7,1)", "(7,3)", "(7,4)", "(7,5)", "(7,7)"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> source = {"2118721082", "0810080576", "1558223664", "7646770100", "6181972133", "8604054645", "5250707120", "7163575636", "0085059714", "1330859912"};
    vector<string> target = {"3076717561", "1076592508", "8995357722", "2754684659", "9113508645", "1247981659", "1695735674", "9822060023", "1930821693", "1363857438"};
    vector<int> mapping = {7, 2, 8, 1, 3, 5, 2, 7, 3, 0};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,3)", "(0,4)", "(0,5)", "(0,7)", "(0,8)", "(0,9)", "(1,1)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(1,9)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(2,9)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,7)", "(3,8)", "(3,9)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(4,9)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,5)", "(5,6)", "(5,7)", "(5,8)", "(5,9)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,6)", "(6,7)", "(6,8)", "(6,9)", "(7,0)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(7,9)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,7)", "(8,8)", "(8,9)", "(9,0)", "(9,1)", "(9,2)", "(9,3)", "(9,4)", "(9,5)", "(9,6)", "(9,7)", "(9,8)", "(9,9)"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> source = {"546065368", "313462362", "615353088", "722251542", "435303656", "705484822", "511423438", "826361765", "271476511"};
    vector<string> target = {"247028225", "545714384", "658700523", "816071436", "547624437", "447460565", "887052625", "338846128", "707563676"};
    vector<int> mapping = {0, 7, 5, 7, 2, 7, 4, 2, 8};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(0,7)", "(0,8)", "(1,0)", "(1,1)", "(1,2)", "(1,4)", "(1,5)", "(1,6)", "(1,7)", "(1,8)", "(2,1)", "(2,2)", "(2,3)", "(2,5)", "(2,6)", "(2,7)", "(2,8)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(3,6)", "(3,7)", "(3,8)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(4,7)", "(4,8)", "(5,0)", "(5,1)", "(5,2)", "(5,6)", "(5,7)", "(5,8)", "(6,0)", "(6,1)", "(6,2)", "(6,3)", "(6,4)", "(6,5)", "(6,8)", "(7,0)", "(7,1)", "(7,2)", "(7,3)", "(7,4)", "(7,5)", "(7,6)", "(7,7)", "(7,8)", "(8,0)", "(8,1)", "(8,2)", "(8,3)", "(8,4)", "(8,5)", "(8,6)", "(8,8)"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> source = {"0123456", "1234560", "2345601", "3456012", "4560123", "5601234", "6012345"};
    vector<string> target = {"0123456", "1234560", "2345601", "3456012", "4560123", "5601234", "6012345"};
    vector<int> mapping = {1, 3, 2, 1, 2, 1, 1};
    IsHomomorphism* pObj = new IsHomomorphism();
    clock_t start = clock();
    vector<string> result = pObj->numBad(source, target, mapping);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"(0,0)", "(0,1)", "(0,2)", "(0,3)", "(0,4)", "(0,5)", "(0,6)", "(1,0)", "(1,1)", "(1,2)", "(1,3)", "(1,4)", "(1,5)", "(1,6)", "(2,0)", "(2,1)", "(2,2)", "(2,3)", "(2,4)", "(2,5)", "(3,0)", "(3,1)", "(3,2)", "(3,3)", "(3,4)", "(3,5)", "(4,0)", "(4,1)", "(4,2)", "(4,3)", "(4,4)", "(4,5)", "(4,6)", "(5,0)", "(5,1)", "(5,2)", "(5,3)", "(5,4)", "(5,5)", "(6,0)", "(6,1)", "(6,4)", "(6,6)"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4610&pm=1807
********************************************************************************
#include <algorithm> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
using namespace std; 
 
#define REP(i,n) for(int i=0;i<(n);++i) 
#define FOR(i,a,b) for(int i=(a);i<=(b);++i) 
#define FORD(i,a,b) for(int i=(a);i>=(b);--i) 
#define FOREACH(i,c) for(typeof((c).begin()) i=(c).begin();i!=(c).end();++i) 
typedef long long LL; 
const int INF = 1000000000; 
typedef vector<int> VI; 
template<class T> inline int size(const T&c) { return c.size(); } 
 
char buf1[1000]; 
 
string i2s(int x) { 
  sprintf(buf1,"%d",x); 
  return buf1; 
} 
 
 
struct IsHomomorphism { 
  // MAIN 
  vector <string> numBad(vector <string> source, vector <string> target, vector <int> mapping) { 
      int n = size(source); 
      vector<string> res; 
      REP(a,n) REP(b,n) { 
          if(mapping[source[a][b]-'0']!=target[mapping[a]][mapping[b]]-'0') { 
              sprintf(buf1,"(%d,%d)",a,b); 
              res.push_back(buf1); 
          } 
      } 
      return res; 
  } 
   
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
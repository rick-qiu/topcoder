/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7415
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

class ReverseResources {
public:
    int findDecompositions(string str, vector<string> resources);
};

int ReverseResources::findDecompositions(string str, vector<string> resources) {
    int ret;
    return ret;
}


int test0() {
    string str = "Error in module foo;
    vector<string> resources = code 123.";
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string str = "The fox jumped over the dog.";
    vector<string> resources = {"The fox %s over the dog.", "lazy", "brown", "jump%s", "s", "ed", "The %s", "fox %s", "%s over %s", "the dog."};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string str = "abcde";
    vector<string> resources = {"%sc%s", "b", "de", "a%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string str = "abcde";
    vector<string> resources = {"%se", "a%s", "%sb%s", "%sc%s", "%sd%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string str = "aaaaa";
    vector<string> resources = {"a", "%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string str = "abcde";
    vector<string> resources = {"%se", "a%s", "%sb%s", "%sc%s", "%sd%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
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
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> resources = {"a", "aa", "%s%s", "%sa", "a%s", "aaa", "aa%s", "a%sa", "a%s%s", "%saa", "%sa%s", "%s%sa", "%s%s%s", "aaaa", "aaa%s", "aa%sa", "aa%s%s", "a%saa", "a%sa%s", "a%s%sa", "a%s%s%s", "%saaa", "%saa%s", "%sa%sa", "%sa%s%s", "%s%saa", "%s%sa%s", "%s%s%sa", "%s%s%s%s", "aaaaa", "aaaa%s", "aaa%sa", "aaa%s%s", "aa%saa", "aa%sa%s", "aa%s%sa", "aa%s%s%s", "a%saaa", "a%saa%s", "a%sa%sa", "a%sa%s%s", "a%s%saa", "a%s%sa%s", "a%s%s%sa", "a%s%s%s%s", "%saaaa", "%saaa%s", "%saa%sa", "%saa%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 879704799;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> resources = {"a", "%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 209635674;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> resources = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1662570;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string str = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    vector<string> resources = {"W", "%s%sW%s%s%sW%s", "%sWW%sW%s%s%s", "%sW%s%s%s%sW%s%s%sW%s%s%sWWW%s%s%s%s%s%sWW%sWW%s", "%s%sW%s%s%sW%s%sW%s%sWWW%s%s%s%s", "W%s%s%sWW%sWW%s%s%s%s%sW%s%s%s%s%sW%sW%s%sW", "%s%sW%sW%s%s%s%sWW%s%s%s%sW%s%s%s%s", "%sW%sW%s%s%sW%sW%sW%sW%s%s%sWW%s", "%s%sWWW%s%s%sWW%s%sWW%sWWW%sW%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%sWW%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "WW%s%sW%s%s%s%s", "%s%s%s%s%s", "WW%s%s%s%sWW", "%s%sW%sW%s%s%sW%s", "%sWW%sW%sW%sW%sW%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%sW%s%s%sW%s%s%s%s%s", "%s%s%s%s%s%s%s%s", "WWW%s%s%s%s%s%s%s%s%sW%s%s%s%sW%s%s%s%sW%s%s%s", "%s%s%sW%sW%s%s%s%sW%s%s%s%s%s%s%s%s%s%s", "%s%sW%s%s%s%s%s%s%s%s%s", "W%s", "%s%s%s%s%s%sW%s%s%s%s%sW%s%s", "%s%s%s%s%s%sWWWWW%s%s%s%s%s%s%s", "W%s%s", "%s%s", "W%sW%sWW%s%sW%sW%s%sWW%s%s%s%sW%s%s%s%s%s%sW%s%s%s", "%sW%s%sW%s%s%sW%sWW%sW%s", "%s%sW%s%sWW%sW%sW%s%s%sW%s%sW%sW", "%sW%s%s%s%s%s%s%s%s%s%s%s%s%sW%s%s", "W%s%s%s%s%sW%sW%s%sWW%s%s%s%sW%s%sW%s%sWW%s", "%s%sWW%s%s%sW%s%sW%s%s%s%sW%sWWW%sWWW%sW", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "WWWW%s%sW%s%sWWW%s%sW%sWW%s%s%s%s%s", "%s%s%s%s%s", "WW%s%s%s%sW%sW%s%s%s%sW%s", "WWWW%s%s%s%sW%sW%s%s%s%sWW%s%s", "%sW%s%s%sWWWW%sW%sWW%s%s%s%s%s%s%s%s%s%s%s%sW%sW", "%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s", "WWWW%s%s%s", "%s%s%sWW%s%s", "W%sW%s%sW%s%sW%s%s", "W%s%sW%s%s%s%s%s%s%sW%s%sWW%s", "W%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%sWW%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 463091996;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string str = "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    vector<string> resources = {"M", "MM%sM", "%s%s%s%s%sM%s%s%s%s%s%s%s%s%s%s", "%s%s%sM%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%sM%s%s%s%s%s%s%s%sM%s%s%s%s%s", "%s%s%s%s%s%sM%s%s%s%s%s%s%s%sM%s%sM%s%s%s%s%sM%s", "%s%s%sMMM%s%s%s%s%s", "%sMMM%sMM%s%sM%s%sMMMMMMMM%s%sM%sMM%s%s%s%sMM%s", "M%s%s%s%s%s%s%sMM%sM%s%s%s%s", "%s%sM%s%s%s%s%s%s", "MM%s%sM%s%s%s%s%sM%s%s%s", "%s%s%s%sMM%sM%s%s%s%s%s%s%sM%s", "%s%s%s%s%sM%s%s%s%s%s", "MM%s%sM%s%s%sMM", "%s%s%sM%sMMM%sMMM%sMMM%s%s%s%s", "%sM%s%s%sMM%s%s%s%s%s%s%s%sM%s", "%s%sM%s%s%s%sM%s%s%s%s%s%s%s%s%s%s%sM%s%sM%s", "MM%sMMMMMMMM%s", "%sMM%sMMMMM", "M%sM%s%sMM%s%s%sM%sMMM%s%s%sMMM%sM%s%s%s%sM%s%s", "MM%sM%s%s%s%s%sM%s%sM%s%s%s", "%sM%s%s%s%s%s", "%s%s%s%s%s%s%s%sM%s%s%s%s%s%s%s%s%s%sM%s", "%s%s%s%s%s%s%s", "M%s%sM%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "M%s%s", "%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%sM%s%s%s%s%s", "%sM%sM%sM%s%s%s%s%s%sM%s%s%s%s%s%s%s%s%s%sM%sMM%s", "%sMMM%s%sMMM%s%s%s%s%s%sM%s", "M%sM%s%sM%s%s%s%s%s%s%s%s%s%s%s%s%sM%s", "%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "MM%sMM%sM%s%s%sM%sMMM%s%sM%s%sMM%sMM%s", "%sMM%s%s%s%s%s%s", "M%sMM%s%s%s%s%s%s%s%sM%s%s%s%s%s%sM", "%s%s%s%s%s%s%sM%s%sM%sM%s%sM%s%s", "%sM%s%sM%s%s%s%sM%sM%s%sMM%s%s", "M%sMM%sM%s%s%s%s%s%sM%s%s%s%s%s%s", "%sM%s%s%s%s%s%sMMM%s%sM%s%sM%sM%s%sM%sMM%s", "%sM%s%sMMM%sMMM%sM%sM%sM%s%sM%sMM%s%s%s", "%sM%s%s%s%sM%s", "%s%s%s%s%sMM%s%s%s%s%s%s%sM%sM%sMM%s%s%s%s", "M%s%sM%sM%sM%sM", "M%s", "%sM%s%sMM%s%s%sMM%sM%sMMM%s%s%s%sM%sM", "%s%s%s%s%sM%sMM%s%s%s%sM%s%s%s%s%s%s%sM%s", "%sMMM%s%s%sMM%s%s%sM%s%s%sM%s%s%sMM%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "M%s%s%s%s%s%s%s%s%s%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 194974024;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string str = "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    vector<string> resources = {"!", "%s!%s%s!%s%s!%s%s%s!%s%s%s!!%s%s%s!!%s", "%s%s!%s", "%s%s%s%s%s!%s%s%s%s%s", "%s!%s%s%s%s%s%s!%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s!%s%s%s", "%s!!!%s%s!%s%s!!%s!%s%s", "!%s!%s%s%s%s%s%s%s%s%s%s%s!%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s!%s!%s%s%s%s%s%s%s%s!%s!!%s", "%s%s%s%s%s", "!%s!%s%s%s%s%s%s%s!%s!%s%s%s%s%s!!%s", "!%s!!%s%s%s%s!%s%s!", "%s!!%s%s%s%s%s", "%s!!%s%s%s!%s!%s%s", "%s%s", "%s%s%s!!%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s", "%s!%s!%s!%s%s", "!!%s%s%s!%s%s%s%s", "%s%s%s!%s%s%s%s!!!!%s%s%s%s%s%s%s%s%s%s%s!", "!%s%s%s!%s!!%s%s%s%s%s%s%s%s%s%s!!%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s!%s!!!%s%s%s%s!!%s%s%s!%s%s%s!%s%s", "%s%s%s%s%s!!%s!%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s!%s%s%s!%s!%s%s!!!%s!!%s%s%s!%s%s!", "%s!!%s%s%s%s", "%s%s%s%s!%s%s%s%s%s!!%s%s%s%s%s%s%s", "!%s!!%s%s!%s", "!%s!!!%s%s%s%s!%s%s!%s%s%s!!%s!%s!", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s!%s%s%s%s%s%s%s", "%s!%s!%s%s%s%s%s%s%s!%s%s!%s!", "%s%s%s%s%s%s!!%s%s%s%s", "%s%s", "!%s!%s!%s", "%s%s%s!%s!%s!%s%s!!!%s!!%s%s%s!", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s!%s%s%s!%s%s%s%s%s%s%s%s%s%s%s", "!%s%s%s%s%s", "%s%s%s%s!!%s%s%s%s!", "!%s%s%s%s!%s%s%s", "%s!!!%s%s%s!%s%s%s!%s!%s%s%s%s%s", "%s!%s!!%s%s%s!%s%s%s%s%s%s%s%s%s%s%s%s%s%s!%s", "%s%s%s%s%s%s%s%s!%s%s!%s%s%s!%s%s%s!%s", "!!%s%s%s%s%s%s!%s!%s!!!%s!%s%s!%s%s%s%s%s%s!!", "%s%s%s%s%s", "!%s%s%s%s%s%s!%s%s!%s!%s!%s!%s%s", "%s%s%s", "!%s%s!!%s!!!!!!!%s%s!%s!%s!!!%s%s!%s", "%s%s%s%s%s%s%s%s%s%s%s!%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 258324526;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string str = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    vector<string> resources = {"x", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%sx%sx%s%s%sx%s%sxxx%s%sx%sx%s%s%sxx%s%s", "%s%sxx%sxxxx%s%s%sx%s%s%s%sx%sxx%s%s%s%s%sx%sx", "%s%s%s%s%s%sx%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%sxx%s%s%sx%s%s%s%s%sx%s%s%s%s%sx%s%s", "%s%s%s%s%s%s%s%s%s%s%s%sx%s%s%sx%sx%s", "%s%s%s%s%s%s%sx%s%s%s%s%s%s%s%s%s%s%sx%s%s%sx%s", "%s%s%s%s%s%s%s%s%s%s%s", "x%s%sx%s%s%s%s%sxx%s%s%s%sx%s%s%s%sx%sx%s", "%s%s%s%s", "%sxx%sx%s%s%s%s%sx%s%s%sxx%s%sxx%s%sx%s%s%sxxx", "x%sx%sx%s%s%s", "%s%s%s%sx%s%s%s%s%s%s%s%s%sx%s%s%sx%s%s", "%sx%sx%sxx%sx%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%sx%s%sxxx%s%s%sx%s%s%s%sx%s%s%s%sxx%s%sx%s%s%s", "%s%sxx%sxx", "%sx%s%s%s%s%s%s%s%s%s", "x%s%s%sx%s%s", "%s%s", "x%s%s%sxx%s%s%s%sxxx%s%s%s%s%s", "%s%sxxxx%sx%s%s%sx%sxxxxxxxx%s%s%s", "%s%s%s%s%sx%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%sx%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%sx%s%s%s", "%sxx%sx%s%s%sx%s%s%s%sxx%s%s%s%s%sx%s%sx%s%s%s", "%s%s%s%s%s%s%s%sx%s%sx%s%s%s", "%s%s%sx%s%sx", "%sx%sx%sx%s%s%s%sx%s%s%s%sxx%sxxxx%s%sx%s%sxxx%s", "%s%s%s%s%s%s%s", "x%sxx%sxx%s%s%s%s%sx%s%s%sxx%sx%s", "xxx%sx%s%s%sxxxxx%s%s%s%sx%s%s%sxxx%sx", "%s%s%sx%s%s%s%s%s%s%s%s%s%s%sxxxxx%s%s%sxx%sxx%s", "%s%s%s%s%s%sxx%s%s%sx%s%sx%s", "%s%s%sx%s%sx", "%s%s%s%s%sx%s%s%s%s%s%s%s%s%s%s%s%s%s", "x%sx%s%s%s%sx%s%sx%s%s%s%s%sx%sxxxx%sx%sxxx%sx%s", "%s%s%s%sxxx%sxx%sxxx%sxx%s%sxx%sxxxx", "%s%s", "%s%s%s%sx%s%s%s%s%s%sx%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s", "%s%s", "xx%sxxx%sx%s%sxx%sx%sxx%sx%s%sxx%sxx%sx%s%s", "%sxx", "%sx%s%s%s", "x%sx%s%sx%sxx%s%s%s%sxxxx%sx%s", "%s%s%s%s%s%s%s%s%s%s%sx%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%sxx%s%sx%s%sx%sx%s", "%s%sx%s%s%s%sx%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 372512614;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string str = "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmm";
    vector<string> resources = {"m", "%s%sm%sm%smm%s%s%s%s%smmm%s%s%sm", "%s%s", "%s%s%s%s%s%s%sm%s%s%s%s%s%sm%s%s%sm%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s", "%sm%s%s%s%smm%s%s%s%s%s", "%s%s%s%s%s%sm%s%s%s%s%sm%s%s%s%s%s", "m%sm%s%smm%s%sm%sm%s%sm%sm%s%smmmm%s", "%s%sm%s%sm%sm%s%smm%sm%sm%s%s", "%s%s%s%s%s%s%s%s%sm%s%s%s%s%s%s%s%sm%sm%s%s%s", "%sm%smm%s%s%s%smm%sm%s%s%sm%s%s%s%s%s", "%sm%s%s%smm%s%s%s%s%s%s%s%s%s%s%s", "m%sm%s%s%sm%s%s%s%s%s%s%s", "m%s%s%s%s%s%s%s%s%s%s%s%sm%s%s", "%s%s%s%s%smmmm%sm%s%sm%sm%sm%smmm%s%s%s%s%sm%s%sm", "mm%sm%s%s%s%sm%s%s%s%s%s%s%s%s%s%s", "%s%smmmm%s%s%s%s%sm%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s", "%s%s%smm%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%sm", "%sm%sm%s", "%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%sm%s%s%sm%s%s%sm%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%sm%s%s%s%s%s", "m%s%smmm%s", "%s%s%s%s%smm%s%sm%sm%s%s%s%sm%s%sm%s%s%s", "%s%sm%s%s", "mmmm%s%s%s%s%s%s%smmm%s%sm%s", "m%s%s%s%s%s%s%sm%s%s%s%s%sm%sm%s", "%sm%s%s%s%s%s", "m%sm%s%smm%sm%s%s%s%s%s%s%s%s%smm%smm%s%s", "%sm%s%s%s%s%s", "%s%smmm%s%s", "%s%s%sm%s%s%s%s%s%s%s", "%sm%sm%s%s%smm%s%sm%sm%smm%s", "%s%s%smm%sm%s%smm%smmm%s", "mm%s%s%s%sm%s%s%s%s%s%s%sm%s%s%s%s%s%s%sm%s%s", "m%s%s%s%s%s%s%s%s%s%sm%s%s%s%s%s%s%s", "%s%s%s", "m%s%s%s%s%sm%sm%s%s%s", "%smm%sm%s%sm%sm%s%s%smm%sm%s%s%sm%s%s%s%s", "%s%sm%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s", "%s%smm%sm%s%smm%s%smm%smmmm%sm%smm", "%s%s%s%s%s%s%s%sm%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%smm%s%s%s%s%s", "%s%s%sm%s%s%s%s%sm%s%s%s%s%s", "m%s%s%s%s%s%s%s%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 514215182;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string str = "212002012201020202001101102220";
    vector<string> resources = {"10%s2%s1", "221222%s", "2%s1%s%s", "012111%s", "%s%s%s%s", "0200", "%s%s%s%s", "2%s%s%s%s", "01102121", "02%s2%s2", "122%s211", "%s%s%s%s", "1%s%s%s%s", "12%s22%s", "%s%s%s%s", "%s%s%s%s", "%s1%s%s%s", "%s0%s%s%s", "10%s1%s1", "0202%s11", "12222022", "2%s%s%s%s", "22%s%s%s", "%s%s%s%s", "%s21%s%s", "%s%s1%s1", "02000000", "110", "%s%s%s%s", "2%s%s%s%s", "02%s%s%s", "020021%s", "22", "%s%s00%s", "220", "2221", "12211", "0%s20012", "%s%s%s%s", "1122000%s", "0", "12221212", "%s120101", "0%s0210%s", "%s0%s%s0", "%s21211%s", "2212%s1%s", "10", "%s%s%s0%s", "%s%s%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string str = "221100021222012212120210221020";
    vector<string> resources = {"%s%s%s%s%s1%s%s", "111", "02002%s00%s121", "2212", "0%s%s0%s212201", "211", "002", "21120", "0%s%s1001%s2%s", "2", "01110212110%s0", "%s%s%s%s%s%s%s", "2%s%s001102%s%s", "%s%s1%s%s%s0%s", "01", "102", "11122", "0", "0020000020120%s", "10022", "%s000102%s102%s", "0%s2%s00%s2121", "%s112%s%s%s1%s", "20%s1%s%s2%s21", "00210", "%s%s%s2%s01%s1", "21021", "22%s1%s001001%s", "1011", "12", "%s%s%s%s%s%s%s", "21%s20%s%s2%s%s", "%s%s1%s2%s%s21", "10212222020001", "%s%s%s2%s%s%s%s", "0%s%s0%s21%s%s", "%s2%s%s%s1%s%s", "22100", "0%s%s02%s%s2%s", "%s1%s%s10%s01%s", "202%s%s%s%s%s%s", "211", "0", "%s%s%s%s%s%s%s", "%s%s%s%s1%s%s%s", "%s%s%s%s%s2%s%s", "%s%s%s%s%s%s0%s", "201%s022200111", "0212", "%s0121%s%s%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1054848;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string str = "200112101011222222121111010111";
    vector<string> resources = {"10%s", "%s%s", "011", "02%s", "%s0", "%s%s", "2%s", "0%s", "120", "%s%s", "222", "002", "%s%s", "012", "%s0", "%s%s", "%s%s", "220", "%s%s", "2%s", "%s%s", "112", "220", "%s%s", "0%s", "202", "%s0", "%s%s", "%s%s", "%s%s", "%s0", "111", "%s%s", "%s2", "%s%s", "02%s", "021", "%s1", "100", "%s2", "1%s", "21%s", "%s%s", "%s0", "020", "%s2", "222", "02%s", "%s%s", "102"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 768374121;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string str = "121211222121002110210212122110";
    vector<string> resources = {"0110%s1101", "1%s%s%s%s2", "%s%s%s%s%s", "120122%s10", "201%s20111", "10%s%s0%s0", "0%s%s%s%s%s", "%s%s%s2%s%s", "1000100012", "0%s%s00%s%s", "1%s1012202", "%s%s%s0%s%s", "%s%s%s%s0%s", "%s%s%s%s%s", "2%s2220000", "%s1%s%s%s1", "%s%s%s%s%s", "2%s%s%s%s%s", "%s%s%s%s%s", "1010002012", "2%s00%s111", "%s2%s%s%s0", "%s%s%s%s%s", "00%s12%s%s", "%s%s%s%s%s", "%s%s1%s%s%s", "%s%s120120", "%s0%s1%s%s", "%s%s2%s%s%s", "0010022012", "%s12%s%s01", "2201%s2120", "%s%s%s%s%s", "%s%s%s%s%s", "2012022022", "1021011100", "1%s%s%s%s%s", "22%s122002", "1020%s2112", "%s%s01%s%s", "%s002%s%s%s", "%s%s%s%s%s", "2%s1%s0101", "0%s2%s%s02", "%s%s0%s%s%s", "11111121%s", "22%s0%s211", "2%s01%s%s2", "22%s021020", "%s2%s%s%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string str = "keVbsLfMughdD.py";
    vector<string> resources = {"eV", "fMughd", ".", "keVbsLfMughdD%spy"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string str = "E5g615kFV0a ChRhKGt3TDe xI9";
    vector<string> resources = {" C", "E5", "g615kFV0a C", "615kFV0a ChRhKGt3TDe xI9", "RhKG", "0a ChRhKGt3TDe xI9", "3T", "5g6", "De x", "De x", "De x", "E%s15kFV0a ChRhKGt3T%sI9", "E5g615kFV0a ChRhKGt3TDe xI9"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string str = "xFMcHAPg YyqjFj8Iyz2FQtr4IRXc0";
    vector<string> resources = {"AP", "cHAPg YyqjFj8Iyz2FQtr", "g YyqjFj8Iyz2F", "FMcH", "z2FQt", "8Iyz2FQtr4", "2F", "F", "Mc", "x%s%sHA", "FM", "x%scHA", "Yy", "8Iyz2", "y", "8I%sz2", "FQ", "%sPg %sqjFj%s%str4IRXc0", "8", "I", "tr4", "j%s%syz2FQ%sIR", "j8Iyz2FQtr4IR", "j", "r", "%s8I%sz2%sQt%s4IR", "z", "Q", "j8Iy%s2F%str4IR", "xFMcHAPg YyqjF%sXc0", "HAPg YyqjFj", "z2FQtr4I", "xFMc%s8Iy%sRXc0"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string str = ";
    vector<string> resources = cKj5ZyheFruCCVi";
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 232;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string str = "Kr4MYr1zinKc383cAMra";
    vector<string> resources = {"Kr4MYr1z", "3", "3", "inKc%s83", "inKc383", "i", "i", "i", "n", "n", "n", "Kc3", "%s%s%s83", "Kr4MYr1z%scAMra", "Kr4MYr1zinKc383cAMra", "Kr4MYr1zinKc383cAMra"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string str = "lZEJk4T8qLSlNcGweh";
    vector<string> resources = {"T8", "EJk4T8qLSlN", "Jk4T8q", "weh", "ZEJk4T8qLSlN", "l%scGweh", "EJ", "EJ", "EJ", "EJ", "Z%sk4", "ZEJk4", "Z", "Z", "Z", "Z", "%sEJk4", "Z", "Z", "Z", "Z", "J", "J", "J", "%sE%sk4", "T8", "T8", "LS", "LS", "LS", "LS", "cGw", "c", "c", "%sGw", "cGw", "cGw", "l%s%sq%slN%seh"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 2221;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string str = "2UV2YQGh679tSAai2Ea!";
    vector<string> resources = {"Gh", "YQG", "h", "2YQG", "2UV2YQGh679tSAai2Ea", "2UV2", "2UV2", "2", "2", "2", "2", "2", "%sUV2", "Q", "%sGh67", "Gh", "Gh", "Gh", "Gh", "Gh", "Q%s67", "QG", "QG", "QG", "QG", "QG", "h", "h", "h", "%s%s67", "SA", "SA", "SA", "%sY%s9t%sai2Ea!"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 693;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string str = "uaId8hyietQnIEHyam7mK2ZA";
    vector<string> resources = {"nIEHyam7mK", "8hyietQ", "hyietQnIEHyam7mK2Z", "EHyam7mK2Z", "uaId8hyietQnIEHyam7mK2ZA"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string str = "C38 t05dYQhscsx5 TK8UT8S7cni5h";
    vector<string> resources = {"8 t05dYQhscsx5 TK8UT8S", "05dYQhscsx5 TK", "K8UT8S7cni", "ni5h", "8UT8S7cni5", "TK8UT8", "8UT8S7cni", "t05d", "C38 t05dYQhscsx5 TK8UT8S7cni5h"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string str = "MylS6AxmugSskbRGE4A!IVo3H7";
    vector<string> resources = {"A!IV", "Vo", "skbRGE4A!I", "ylS6AxmugSskbRGE4", "sk", "6Ax", "mugS", "bR", "GE4A!IV", "MylS%s%ssk%s%so3H7", "l", "%sS6", "lS6", "%sAxmugSskbRGE4A!", "lS6AxmugSskbRGE4A!", "lS6A", "gS", "R", "%sxmu%s%sb%sGE4A!", "ugS", "kb", "GE", "lS6Axm%ss%sR%s4A!", "My%sIVo3H7", "y", "xm", "6A%sugS", "x", "m", "6A%s%sugS", "6AxmugS", "6", "u", "%sA%sm%sgS", "M%slS%ssk%sGE4A!IVo3H7", "S", "gSskbRG", "k", "gSs%sbRG", "Ss", "g%s%sRG", "g", "s", "%sS%s%sRG", "E", "3", "Myl%s6Axmu%s%s4A!IVo%sH7"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string str = "4dUlZP.CybAS4nB2r";
    vector<string> resources = {"UlZ", "dUlZP.Cyb", "4dUlZP.CybAS4nB2r"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string str = "W34MCYiCz0Db9E";
    vector<string> resources = {"34MCYiCz0", "MCYiCz0", "W34MCYiCz0Db9E", "iCz0", "b9E", "Cz0Db", "0D", "MCYiCz0Db9E", "YiCz0", "W", "W", "W", "W", "MCY", "b", "b", "%s34%siCz0D%s9E", "W34MCYiCz0Db9E", "M", "Cz", "Cz", "Cz", "Cz", "D", "D", "D", "W34%sCYi%s0%sb9E"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string str = "hH;
    vector<string> resources = iJjENi3LswBYVIylGVnTpysS2F!";
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string str = "20gXbpwwOI5OwV7HH;
    vector<string> resources = wbYpO0aZVsHH";
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1066;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string str = "zcJl9IJ3TWjyxufcE4vAhha XfOHgT";
    vector<string> resources = {"jyxufcE", "zcJl9IJ3TWjyxufcE4vAhha XfOHgT"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string str = "SfGGtIBuZx415ApIFQCPXmmNRDAlsw";
    vector<string> resources = {"GGtIBu", "PXmmNRDAls", "ApIFQCPXmmNRDAls", "SfGGtIBuZx415ApIFQCPXmmNRDAlsw"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string str = "KJr8JVCoQqqiICMmm9iAS5jb11bW";
    vector<string> resources = {"Jr8JVCoQqq", "KJ", "8JVCoQ", "8J", "8J", "8J", "%sVCoQ", "KJr%sqqiICMmm9iAS5jb11bW", "KJr8JVCoQqqiICMmm9iAS5jb11bW"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string str = "KcMAf8X2iC8";
    vector<string> resources = {"C", "MAf8X2", "8X2iC", "Af8", "Af", "KcMA", "KcMA", "KcMA", "f8X2i", "%s%sC8", "f8X2", "KcMA%siC8", "Af8X", "f", "f", "A%s8X", "Af8X", "KcM%s2iC8"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string str = "THvNzkWX1.YrV Sg4UIDFLPvWx4LNP";
    vector<string> resources = {"P", "PvWx4L", "THvNzkWX1.YrV Sg4UIDFLPvWx4LNP"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string str = "kl9xlw0IV!U.eXEQJunTOsTqzMiHc5";
    vector<string> resources = {"TOs", "0IV!U.", "Ju", "Ju", "Ju", "OsT", "q", "q", "q", "q", "kl9xlw%seXEQ%snT%s%szMiHc5", "kl9xlw0IV!U.eXEQJunTOsTqzMiHc5"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string str = "111010122211121001112202122200";
    vector<string> resources = {"%s10", "1201", "%s20", "%s%s", "%s%s", "1211", "2%s%s", "%s00", "%s1%s", "%s%s", "21001", "%s%s", "%s%s", "01%s", "%s%s", "%s%s", "0202", "0112", "%s%s", "110", "21%s", "%s%s", "2%s2", "%s%s", "%s02", "0%s2", "12%s", "200", "%s%s", "%s%s", "12221", "1%s%s", "%s%s", "00010", "2221", "%s%s", "0202", "0%s%s", "0200", "%s%s", "2001", "0", "22211", "22%s", "%s00", "0%s%s", "12%s", "%s20", "12%s", "2%s0"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 923346;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string str = "200202202222120212222200202202";
    vector<string> resources = {"0%s%s011020%s11%s", "1100210120212011", "%s010%s%s1%s0%s2", "21010121%s010122", "0202%s1%s2%s%s2%s", "2222211221210210", "%s%s021%s%s21%s%s", "0%s%s%s%s%s22%s%s", "00%s0%s2%s1%s%s2", "12%s1%s%s202%s%s", "%s%s%s%s%s%s%s%s", "22112%s100%s%s%s", "2%s2120%s2122221", "%s1%s%s%s%s%s%s%s", "122%s21110011022", "%s0%s%s%s%s%s2%s", "202200%s%s10%s22", "21%s12%s11%s0120", "1112%s1222212201", "1%s01121%s000201", "2%s12200011211%s", "%s%s%s%s200%s220", "111100%s0002102%s", "%s%s0%s%s%s%s%s%s", "%s%s%s%s%s0%s%s%s", "01200%s%s222%s02", "1%s%s%s1%s1%s%s%s", "10%s%s1%s010%s%s", "01%s%s%s%s12%s2%s", "1021202%s220%s11", "0010100200121110", "1%s%s%s%s2%s%s%s", "0101122%s2120212", "%s0%s2%s11%s0220", "%s%s%s%s%s%s2%s2", "2%s1001012022100", "0%s%s%s1%s12%s2%s", "%s%s%s%s%s%s%s%s", "%s%s2%s22%s%s1%s", "12111021101%s%s0", "20%s%s1%s0%s1112", "2%s21%s102%s02%s", "12010%s12%s%s220", "%s%s12%s%s%s02%s", "0%s110112112%s12", "%s%s%s%s2%s%s%s%s", "%s000%s%s2%s%s%s", "2100212220202022", "%s001222020002%s", "%s%s%s1%s02%s%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string str = "CfUFnUpd2ETbBwpKZz4V";
    vector<string> resources = {"nUpd2ETbBwpKZz4V", "ETbBwpKZz", "ETbBwpKZz4", "FnUpd2ETb", "wp", "Fn", "B", "V", "fUFnUpd2ETbBwpKZ", "C%sz4V", "F", "T", "T", "B", "B", "B", "B", "B", "p", "p", "p", "p", "p", "CfU%snUpd2E%sb%sw%sKZz4V"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string str = "bDhQPeqRvURi2g57pnlA.9YkguMDdg";
    vector<string> resources = {"vURi2g57pnlA.9YkguMDd", "2g", "7pnlA.", "57", "vURi2g", "QPeqRvURi2g57pn", "eqRvURi2g57pnlA.9YkguMD", "UR", "vURi2g57pnlA.9Ykg", "URi", "U", "U", "U", "U", "%sRi", "URi", "%s2g5", "qRv%s7pnl", "vURi", "g", "qR%s2%s57pnl", "qRvURi2g57pnl", "bDhQPe%sA.9YkguMDdg"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string str = "4cMnfn0tqiyIEvAmhe";
    vector<string> resources = {"nfn0t", "4cMnfn", "n0tqi", "vAm", "Mnfn0tqiyIEv", "Mnfn0", "4", "4", "4", "4", "4", "Mnfn", "n", "n", "n", "n", "M%sfn", "t", "t", "t", "t", "iyIEvAm", "iyIEvAm", "iyI", "%sEvAm", "%sc%s0%sq%she"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string str = "DqdhVo5iGK9ADYT0y7On gMbZY!.8R";
    vector<string> resources = {"DqdhVo5iGK9ADYT0y7On gMbZY!.8R", "o5i", "o5i", "o", "o", "o", "o", "%s5i", "o5i", "dhV%sGK9ADYT0", "dhVo5iGK9ADYT0", "h", "h", "h", "h", "GK9", "d%sVo5i%sADYT0", "dh", "dh", "5i", "9", "9", "9", "9", "9", "%sAD", "%sVo%sGK%sYT0", "y7On gMb", "Z", "Z", "Z", "!", "!", "!", "!", "!", "Dq%s%s%sY%s.8R"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 331;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string str = ";
    vector<string> resources = E;
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string str = "aOO8Mevtc5y 70";
    vector<string> resources = {"OO8Mevt", "5y 70", "O", "y ", "OO8Mevtc5y 7", "OO8Mevtc5", "aOO8Mevtc5y 70"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string str = "yGnod0U1lz!RS1sUDyojaC0IiTrYqr";
    vector<string> resources = {"UDyojaC0Ii", "z!RS1sUDyojaC0IiTrYq", "d0U1lz!RS1sUDyojaC0", "!RS1sUDyojaC0IiTrY", "D", "yGnod0U1lz!RS1sUDyojaC0IiTrYqr", "no", "lz!RS1s", "d0U1%sUDyoja", "d0U1lz!RS1sUDyoja", "U", "1lz", "sUDy", "sU", "%sDy", "d0%s%s!RS1%soja", "yG%s%sC0IiTrYqr", "yGnod", "y", "%sGn", "yGn", "%sod", "!R", "S1s", "%sUD", "oj", "%s0U1lz%s%sy%saC0IiTrYqr"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string str = "54gIK!ssYrj1Ca9uWqehh74aV2sPNl";
    vector<string> resources = {"ssYrj1Ca9u", "hh74aV2", "j1C", "rj1Ca9uWqehh7", "j1Ca", "a", "74", "Ca9uW", "IK", "ss", "r", "1", "%s!%sY%sj%sCa", "K", "!s", "rj1", "I%s%ssY%sCa", "ssY", "rj", "IK!%s%s%sCa", "uW", "h", "54g%s9%sqeh%s74aV2sPNl", "54gIK!ssYrj1Ca9uWqehh74aV2sPNl", "%sC%s9u", "1Ca9u", "C", "1%sa9u", "ehh", "e", "%shh", "54gIK!ssYrj%sWq%s74aV2sPNl"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string str = "SnKz5xSnYhagn !amb4nVtSvuP";
    vector<string> resources = {"nK", "SnYhagn !amb4nV", "!", "Yhagn !amb4nVtSv", "nKz5", "hagn", "S%sz5xSnY%s !amb4nVtSvuP", "n", "%sKz5", "K", "%s%sz5", "a", "h%sgn", "h", "%sagn", "ha", "%sgn", "mb", "%s4n", "b", "m%s4n", "mb4n", "S%sxSnY%s !%s%sVtSvuP", "SnKz5xS", "5", "Sn%sz%sxS", "Kz", "Sn%s5xS", "%sag", "!amb4n", "am", "!%sb4n", "%snY%sn %sVtSvuP", "Sn%s5xSnYhagn !amb4nVtSvuP"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string str = "3sZb2NAh9At;
    vector<string> resources = ";
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string str = "xEEV9KCg1ki0CwDG";
    vector<string> resources = {"EV9KCg1ki0C", "xEEV9KCg1", "EV9K", "9KCg1ki", "wDG", "9KCg1ki0C", "g1", "xEEV9KC%ski0CwDG"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string str = "g3g98Gn61VRKGL2JK2GohteI88zn!X";
    vector<string> resources = {"GL2JK2GohteI88", "I88zn", "g3g98Gn61VRKGL2JK2Gohte%s!X", "JK2Goht", "g3g98Gn61VRKGL2%seI88zn!X", "g3g98Gn61VRKGL2JK2GohteI88zn!X", "9", "9", "%s8G", "98G", "98G", "VRKGL2JK2G", "VRKGL2JK2G", "RKG", "V%sL2JK2G", "VRKGL2JK2G", "g3g%sn61%sohteI88zn!X"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string str = "WeidLUZYVzRe !;
    vector<string> resources = JHhISmho.IpOTo;
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string str = "FjQVzkh70sHpRdzC.W3Hqy4SVCrAjb";
    vector<string> resources = {"4S", "sHpRdzC", "FjQVzkh70sHpRdzC.W3Hqy4SVCrAjb", "jQVz", ".W", ".W", "H", "H", "%s3%sqy", ".W", "H", "H", "H", "H", "%s3%sqy", ".W3Hqy", ".", "H", "H", "H", "%sW3%sqy", "zC%s4SVC", "z", "z", "z", "z", ".W", ".W", "3", "3", "3", "Hqy4S", "Hqy4S", "%sC%s%s%sVC", ".W3Hq", "C%sy4", "C.W3Hqy4", "z%sSVC", "F%skh70sHpRd%srAjb"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string str = "qFCo1Ki F0";
    vector<string> resources = {"qFCo1K", "1Ki F0", "o1Ki ", "qFC", "1K", "qFCo1", "qF", "FCo1K", "FCo1", "FCo1", "C", "C", "C", "F%so1", "q%sKi F0", "qFCo1Ki F0", "FCo", "FCo", "F", "%sCo", "F", "F", "%sCo", "1K", "1K", "1K", "1K", "1K", "q%s%si F0", "q", "q", "q", "q", "q", "F", "F", "F", "%s%sCo", "Ki ", "K", "K", "K", "%si ", "Ki ", "%s1%sF0"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 265;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string str = "5YBzKI5ECy3YImRx9rpZpk.ocqpJdr";
    vector<string> resources = {"Cy3Y", "5YBzKI5ECy3YImRx9rpZpk.ocqpJdr"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string str = "AgT.ZrsIwdfSbWsjztIG2GQKQ!d Mm";
    vector<string> resources = {"QK", "AgT.ZrsIwdfSbWsjztIG2GQKQ!d Mm", "W", "W", "W", "W", "W", "%ssjztI", "z", "z", "Wsj%stI", "Q", "Q", "Q", "dfSb%sG2G%sKQ!d", "dfSbWsjztIG2GQKQ!d", "AgT.ZrsIw%s Mm", "A", "A", "T", "T", "T", "T", "ZrsIwdfSb", "ztIG2G", "%sg%s.%sWsj%sQKQ!d Mm", "sjztIG2G", "AgT.ZrsIwdfSbW%sQKQ!d Mm"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string str = "kFlqSnqWGEWBqyzDC5oq8RiE!Pix";
    vector<string> resources = {"nqWGEWBqyzDC5oq", "DC5oq8", "qyzDC5", "SnqWGEWBqyz", "Fl", "qSn", "qyz", "qyz", "qyz", "qyz", "kFl%sqWGEWB%sDC5oq8RiE!Pi"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string str = "laMeBntmXGWFEn0F6!!zrw5LeP";
    vector<string> resources = {"mXGWFEn0F6!!zrw5L", "0F6!!zr", "laMeBntmXGWFEn%sw5LePd"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string str = "6UtT 32xJsv04WrMGom4Kb5tttx";
    vector<string> resources = {"v04", "2xJs", "4Wr", "t", "Jsv", "04WrMGom4Kb5tttx", "sv04WrM", "4Kb5tttx", "v04Wr", "sv04WrMGo", "v04W", "v", "v", "v", "0", "0", "0", "0", "0", "%s%s4W", "s%srMGo", "sv04WrMGo", "sv04WrMGo", "b5tt", "6UtT 32xJ%sm4K%stx"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string str = "aa";
    vector<string> resources = {"a", "a", "%s%s", "%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> resources = {"a", "%s%s", "%s%s%s", "%s%s%s%s", "%s%s%s%s%s", "%s%s%s%s%s%s", "%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 717574546;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> resources = {"%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%saa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "a%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%s", "%sa%saa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "a", "aa", "a", "%s%sa", "%sa%s%saa%s%sa%s%sa", "aaa", "a", "%sa"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 90708305;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> resources = {"%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> resources = {"a", "aa", "%s%s", "%sa", "a%s", "aaa", "aa%s", "a%sa", "a%s%s", "%saa", "%sa%s", "%s%sa", "%s%s%s", "aaaa", "aaa%s", "aa%sa", "aa%s%s", "a%saa", "a%sa%s", "a%s%sa", "a%s%s%s", "%saaa", "%saa%s", "%sa%sa", "%sa%s%s", "%s%saa", "%s%sa%s", "%s%s%sa", "%s%s%s%s", "aaaaa", "aaaa%s", "aaa%sa", "aaa%s%s", "aa%saa", "aa%sa%s", "aa%s%sa", "aa%s%s%s", "a%saaa", "a%saa%s", "a%sa%sa", "a%sa%s%s", "a%s%saa", "a%s%sa%s", "a%s%s%sa", "a%s%s%s%s", "%saaaa", "%saaa%s", "%saa%sa", "%saa%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 879704799;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string str = "aabbbbcbbbabbbabbbbbbbaacaaaaa";
    vector<string> resources = {"a", "b", "c", "a%s", "c%s", "b%s", "%s%s%s%sc", "%s%s%s%sbbb", "%s%s%s%sb%s%s%s%sb", "%s%s%s%s%s%s%s%sb", "%s%sa%sc%s%sba", "aabb%s%s", "%sa%s%sb%sa%s", "%sb%s%sab", "%s%sa", "%sc%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%saa", "%s%saaa", "%s%sbbb", "%scc", "cc", "%s%s%s%s%s%s%s%s%s%s%s%sa%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%sb%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "aaa", "bbb", "c", "aba", "bba", "abb", "%s%s%s%saba", "ab%s", "b%s", "%sa", "%sbb", "%sa", "%sbab", "aabbbbc", "bcb%s%s", "%sa", "%sb", "%sc", "%sb", "%sa", "%s%sb", "%s%sa%s%sa", "%s%sb%s%sba", "%s%s%sa", "%sabc", "%sa", "%s%s%sa%s%sb%s%sa"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 225917183;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> resources = {"a", "%s%s", "%s%s%s", "%s%s%s%s", "%s%s%s%s%s", "%s%s%s%s%s%s", "%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "a", "%s%s", "%s%s%s", "%s%s%s%s", "%s%s%s%s%s", "%s%s%s%s%s%s", "%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 297596632;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> resources = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 118755;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string str = " ! ! ! ! ! ! ! !!";
    vector<string> resources = {"!", " ", "!!", " ", "!%s!", "%s%s", " %s ", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "!%s%s!%s%s %s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s!", "%s%s%s%s%s%s!%s%s%s!%s%s%s%s%s%s%s%s%s%s%s%s%s%s", " ! !", "%s%s%s", "%s%s%s%s", "%s%s %s%s%s", "%s%s%s%ss%s", "%s%s%s%s%s%s", " ", "%s%s%s%s%s%s!!", "%s%s", "%s !%s", "%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s ", "%s%s%s%s%s%s%s ", "%s%s%s%s%s%s%s ", "%s%s%s %s%s%s!%s ", "%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s", "%s%s", "%s%s", "%s%s", "%s%s", "%s %s", "%s !%s", "%s! %s", "%s %s", "%s!%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 845136002;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> resources = {"%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa%sa", "%sa%sa%sa%sa%sa%sa%sa%sa", "%s%s", "a"};
    ReverseResources* pObj = new ReverseResources();
    clock_t start = clock();
    int result = pObj->findDecompositions(str, resources);
    clock_t end = clock();
    delete pObj;
    int expected = 5932893;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=10666&pm=7415
********************************************************************************
#include<algorithm>  
#include<sstream> 
#include<numeric>  
#include<string>  
#include<vector>  
using namespace std;  
   
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it)  
#define all(x) (x).begin(),(x).end()  
#define CLEAR(x,with) memset(x,with,sizeof(x))  
#define sz size()  
typedef long long ll;  
const ll M = 1000000007; 
ll cache[31][31][51][51]; 
ll c2[31][31]; 
struct ReverseResources 
{ 
  vector<string> R; 
  string S; 
  ll go2(int left, int right); 
  ll go(int left, int right, int idx, int pos) 
  { 
    if(pos == R[idx].sz) return left == right ? 1 : 0; 
    if(left == right) return 0; 
    ll& ret = cache[left][right][idx][pos]; if(ret != -1) return ret; 
    ret = 0; 
    if(R[idx][pos] != '%') 
    { 
      if(S[left] == R[idx][pos]) ret = go(left+1, right, idx, pos+1) % M; 
    } 
    else 
    { 
      for(int p = left+1; p <= right; ++p) 
      { 
        ll add = (go2(left, p) * go(p, right, idx, pos+2)) % M; 
        ret = (ret + add) % M; 
      } 
    } 
    return ret; 
  } 
  int findDecompositions(string str, vector <string> resources) 
  { 
    S = str; 
    R = resources; 
    CLEAR(cache,-1); 
    CLEAR(c2,-1); 
    return go2(0, S.sz); 
  }   
}; 
ll ReverseResources::go2(int left, int right) 
{ 
  ll& ret = c2[left][right]; if(ret != -1) return ret; 
  ret = 0; 
  REP(i,R.sz) ret = (ret + go(left, right, i, 0)) % M; 
  return ret; 
}

********************************************************************************
*******************************************************************************/
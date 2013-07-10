/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10295
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

class GroupedWordChecker {
public:
    int howMany(vector<string> words);
};

int GroupedWordChecker::howMany(vector<string> words) {
    int ret;
    return ret;
}


int test0() {
    vector<string> words = {"ccazzzzbb", "code", "aabbbccb", "topcoder"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
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
    vector<string> words = {"ab", "aa", "aca", "ba", "bb"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"happy", "new", "year"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"yzyzy", "zyzyz"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
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
    vector<string> words = {"z"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"ababbb"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
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
    vector<string> words = {"aaabbbbbcccccccdddddd", "bbbbaaaacccccdddd", "ddddaaaacccccabbbbbb"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"ab", "bc", "abc", "aaaabc", "ooaoooooo", "oooooooooooooooooooooaooooooooooooo", "zzzzzzzzzzzdzzzzz"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"abbbbbbbbbbbbbbc", "zxxxxxxxxxxxxxxxxzc", "aaaaaaaaaaaaabcbbbbbbbbbbb", "aaaaaaaaaaaaefeeeeeeeee"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "ddddddddddddddddddddddddddddddddddddddddddddddddd", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "ooooooooooooooooooooooooooooooooooooooooooooooooo", "ggggggggggggggggggggggggggggggggggggggggggggggggg", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqi", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjp", "llllllllllllllllllllllllllllllllllllllllllllllllll", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzb", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkb", "lllllllllllllllllllllllllllllllllllllllllllllllllf", "ooooooooooooooooooooooooooooooooooooooooooooooooov", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "lllllllllllllllllllllllllllllllllllllllllllllllllj", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhn", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrs", "ttttttttttttttttttttttttttttttttttttttttttttttttts", "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwm", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqk", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvj", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwt", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxg", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwx", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmme", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "gggggggggggggggggggggggggggggggggggggggggggggggggo", "pppppppppppppppppppppppppppppppppppppppppppppppppu", "ssssssssssssssssssssssssssssssssssssssssssssssssss", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaap", "oooooooooooooooooooooooooooooooooooooooooooooooook", "cccccccccccccccccccccccccccccccccccccccccccccccccr", "pppppppppppppppppppppppppppppppppppppppppppppppppl", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwws", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrb"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"m", "kkkkk", "yyyyyyy", "iiii", "uuuuuuuu", "lllllllll", "nnnnnnnnnn", "ssssss", "ii", "xxx"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"ffffffffffffffffffffff", "ss", "pppppppppppppppp", "nnnnnnnnnnnnnnnnnnnnnnnn", "qqqqqqqqqqqqqqqqqqqqqqq", "aaaaaaaaaaaaaa", "ssssssssssssssssss", "ooooooooooooooooooo", "ooooooooooooooooooooooooooooooooooooo", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "ddddddddddddddddddddddddddddd", "ppppppppppppppppppppppppppppppppppp", "p", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "gggg", "ddddddddddddddddddddddddddddddddddddddddddddddd", "llllllllllllllllllll", "rrrrrr", "ddddddd", "www", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "sssss", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "dddddddddddddddddddddddddddd", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn", "ppppppppppppppppppppppppppppppp", "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv", "uuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "zzzzzzzzzzzzzzzzzzzzzzzzzz", "pppppppppppp", "ooooooooooooooooooooooooooooooooooooooooooo", "ccccccccccccccccc", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "ooooooooooooooooooooooooooooooooo", "ooooooooooooooooooooo", "qqqqqqqqq", "llllllllllllllllllllllllllllllllll", "wwwwwwww", "dddddddddddddddddddddddddddddddddddddddddddddddd", "hhhhhhhhhhhhhhhhhhhhhhhhh", "cccccccccccccccccccccccccccccccccccccccccccccccccc", "ddddddddddddd", "zzzzzzzzzzzzzzz", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh", "zzzzzzzzzz", "ccccccccccccccccccccccccccc", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"vvvvvvvvvvvvvvvvvvvvvvvvvwwwwwwwwwwwwwwwwwwwwwwwwv", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmddddddddddddddddddddd", "zzzzzzzzzzzzzzzzzzzzzzzzzzgggggggggggggggggggggggg", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrnnnnnnnnnnnnnnnnnnnnn", "qaaaaaaaaaaaaaaaaaaaaaaaaaqqqqqqqqqqqqqqqqqqqqqqqa", "euuuuuuuuuuuuuuuuuuuuuuuuueeeeeeeeeeeeeeeeeeeeeeeu", "uuuuuuuuuuuuuuuuuuuuuuuuuummmmmmmmmmmmmmmmmmmmmmmm", "vvvvvvvvvvvvvvvvvvvvzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "eeeeeeeeeeeeeeeeeeeeeeeqqqqqqqqqqqqqqqqqqqqqqqqqqq", "vvvvvvvvvvvvvvvvvvvvvvrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "vvvvvvvvvvvvvvvvvvvttttttttttttttttttttttttttttttt", "ooooooooooooooooooooooooobbbbbbbbbbbbbbbbbbbbbbbbo", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqiiiiiiiiiiiiiiiiiiii", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjpppppppppppppppppppp", "eeeeeeeeeeeeeeeeeeeeeeeeeeewwwwwwwwwwwwwwwwwwwwwww", "vvvvvvvvvvvvvvvvvvvvvvjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "llllllllllllllllllllllllllljjjjjjjjjjjjjjjjjjjjjjl", "rrrrrrrrrrrrrrrrrrrrrrrrrrrlllllllllllllllllllllll", "ttttttttttttttttttttttuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "fffffffffffffffffffffffffffffqqqqqqqqqqqqqqqqqqqqq", "ccccccccccccccccccccccccccczzzzzzzzzzzzzzzzzzzzzzz", "vvvvvvvvvvvvvvvvvvvvvvvvvddddddddddddddddddddddddd", "iiiiiiiiiiiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxxxxx", "ffffffffffffffffffffffffllllllllllllllllllllllllll", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwhhhhhhhhhhhhhhhhhhh", "zzzzzzzzzzzzzzzzzzzzzzcccccccccccccccccccccccccccc", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkknnnnnnnnnnnnnnnnnnnnn", "yyyyyyyyyyyyyyyyyyyyyyyyyyybbbbbbbbbbbbbbbbbbbbbbb", "iiiiiiiiiiiiiiiiiiiiiioooooooooooooooooooooooooooo", "iiiiiiiiiiiiiiiiiiiiiiiiiiaaaaaaaaaaaaaaaaaaaaaaaa", "fhhhhhhhhhhhhhhhhhhhhhhhhffffffffffffffffffffffffh", "bbbbbbbbbbbbbbbbbttttttttttttttttttttttttttttttttt", "nnnnnnnnnnnnnnnnnnnnnnnggggggggggggggggggggggggggg", "aaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbb", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmwwwwwwwwwwwwwwwwwwwwww", "eeeeeeeeeeeeeeeeeeeeeeemmmmmmmmmmmmmmmmmmmmmmmmmmm", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeuuuuuuuuuuuuuuuuuuuuue", "eeeeeeeeeeeeeeeeeeeeeeebbbbbbbbbbbbbbbbbbbbbbbbbbb", "tttttttttttttttttttttttyyyyyyyyyyyyyyyyyyyyyyyyyyy", "ssssssssssssssssssssssssssssssjjjjjjjjjjjjjjjjjjjj", "pppppppppppppppppppppppppppppppppmmmmmmmmmmmmmmmmm", "ddddddddddddddddddddddgggggggggggggggggggggggggggg", "ssssssssssssssssssssssbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "qdddddddddddddddddddddddddqqqqqqqqqqqqqqqqqqqqqqqd", "wwwwwwwwwwwwwwwwwwwwwwwwwwssssssssssssssssssssssss", "lllllllllllllllllllllllllllccccccccccccccccccccccc", "mmmmmmmmmmmmmmmmmmmmmmmmmsssssssssssssssssssssssss", "wwwwwwwwwwwwwwwwwwwwwsssssssssssssssssssssssssssss", "dddddddddddddddddddddddddddqqqqqqqqqqqqqqqqqqqqqqq", "aaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbb"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"jjjjjjjjjjjjjjjjjjjjjjjjrrrrrrrrrrrrrrrrrrrrrrrrrr", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjdddddddddddddddddddddd", "dddddddddddddddkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "ccccccccccccccccccccccccccccoooooooooooooooooooooo", "mmmmmmmmmmmmmmmmmmyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy", "uuuuuuuuuuuuuuuuuuuuuuummmmmmmmmmmmmmmmmmmmmmmmmmm", "aaaaaaaaaaaaaaaaaaaaaaaassssssssssssssssssssssssss", "nnnnnnnnnnnnnnnnnnnnnnnnnddddddddddddddddddddddddd", "oooooooooooooooooooooccccccccccccccccccccccccccccc", "hhhhhhhhhhhhhhhhhhhhhhhhshssssssssssssssssssssssss", "zzzzzzzzzzzzzzzzzzzzzzzzzzzqqqqqqqqqqqqqqqqqqqqqqq", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzkkkkkkkkkkkkkkkkkk", "tttttttttttttttttttttttttttggggggggggggggggggggggg", "jjjjjjjjjjjjjjjjjjjjjaaaajaaaaaaaaaaaaaaaaaaaaaaaa", "lllllllllllllllllllllllllllttttttttttttttttttttttt", "nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnttttttttttttttttttn", "jjjjjjjjjjjjjjjjjjjkkkkkkjkkkkkkkkkkkkkkkkkkkkkkkk", "qqqqqqqqqqqqqqqqqqqqqqqqqqqbbbbbbbbbbbbbbbbbbbbbbq", "cccccccccccccccccccccccccccnnnnnnnnnnnnnnnnnnnnnnn", "kkkkkkkkkkkkkkkkkkkkkknnnnnnnnnnnnnnnnnnnnnnnnnnnn", "hhhhhhhhhhhhhhhhhhhhhhhhhhuuuuuuuuuuuuuuuuuuuuuuuu", "ooooooooooooooooooooooooxxxxxxxxxxxxxxxxxxxxxxxxxx", "mmmmmmmmmmmmmmmmmmmmmmqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "ssssssssssssssssssssssmmmmmmmmmmmmmmmmmmmmmmmmmmms", "vvvvvvvvvvvvvvvvvvvvvvvvjjjjjjjjjjjjjjjjjjjjjjjjjj", "hhhhhhhhhhhhhhhhhhhhhooooooooooooooooooooooooooooo", "jjjjjjjjjjjjjjjjjjjjjjjjjjmmmmmmmmmmmmmmmmmmmmmmmm", "bvvvvvvvvvvvvvvvvvvvvvvvvvvvbbbbbbbbbbbbbbbbbbbbbv", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiooooooooooooooooooooo", "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhmmmmmmmmmmmmmmmmmmm", "zzzzzzzzzzzzzzzzzzzzzzzzzddddddddddddddddddddddddd", "kkkkkkkkkkkkkkkkkkkkkktttttttttttttttttttttttttttt", "wwwwwwwwwwwwwwwwwwwwwwwwwzzzzzzzzzzzzzzzzzzzzzzzzz", "yyyyyyyyyyyyyyyyyyyyyyyyaaaaaaaaaaaaaaaaaaaaaaaaaa", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeejjjjjjjjjjjjjjjjj", "wwwwwwwwwwwwwwwwwwwwwwweeeeeeeeeeeeeeeeeeeeeeeeeee", "yyyyyyyyyyyyyyyyyyyyyyyyyiiiiiiiiiiiiiiiiiiiiiiiii", "rrrrrrrrrrrrrrrrrrrrrrrrrrpppppppppppppppppppppppp", "pppppppppppppppppppppppppppppppnnnnnnnnnnnnnnnnnnn", "qqqqqqqqqqqqqqqqqqqqqqqqqjjjjjjjjjjjjjjjjjjjjjjjjj", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmxxxxxxxxxxxxxxxxxxxxx", "fffffffffffffffffffffffffffffhhhhhhhhhhhhhhhhhhhhh", "rrrrrrrrrrrrrrrrrrrrrrrrkrkkkkkkkkkkkkkkkkkkkkkkkk", "iiiiiiiiiiiiiiiiiiiiiiiiiiiieeeeeeeeeeeeeeeeeeeeee", "ggggggggggggggggggggqqqqqqqqqqqqqqqqqqqqqqqqqqqqqg", "ttttttttttttttttttttttttthhhhhhhhhhhhhhhhhhhhhhhhh", "ppppppppppppppppppppbbbbbpbbbbbbbbbbbbbbbbbbbbbbbb", "tppppppppppppppppppppppttttttttttttttttttttttttttp", "uuuuuuuuuuuuuuuuuuuuuuunnnnnnnnnnnnnnnnnnnnnnnnnnn", "xxxxxxxxxxxxxxxxxxxvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"pppppppppppppppppppppppssssssssssss", "vvvvvvvvvvvvvvvbbbbbbbbbbbbbbb", "iiiiiiiiiiiiigggggggggggggggggggggi", "czzzzzzzzzzzzcccccccccz", "wwwwwwwwwwwwwwwwwwwiiiiiiiiiiiiiiiiiiii", "zzzzzzzzzzzbbbbbbbbz", "wwwwwwwgggggg", "hhhhhhhhhhhkkkkk", "ldddlld", "qqqqqqqqqqqqqqqqqqqqqqqqqmmmmmmmmmmmmmmmmmmmmq", "eeeeeeeeeeeeeeeeeeeeeeeeeaaaaaaaaaaaaaaaaaaaaaa", "nnc", "ddddd", "ffffffggg", "c", "uuuuuutttt", "kkkkkkkkkkkkkkkkkkkkkkkmmmmmmmmmmmmmmmmmmmmmm", "kkkkkkkkkkkkkkkkkkkkkkkkkeeeeeeeeeeeeeeeeeeee", "nnnnnnnnnnnnnnnnnnnnnaaaaaaaaaaaaaaaaaaaaaa", "ccccckkk", "ttttttttttttssss", "wwwmwmmmm", "ggggggggggggggggooooooooooooooooo", "aaaaaaaaaaaaaaaaawwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwjjjjjjjjjjjjw", "xxxxxxxxxxxxxxxoooooooo", "lllllvvvvvvvvvvvvv", "i", "fffffffffffffffffffffffqqqqqqqqqqqqqqqqqqqqqq", "dddddddddddddddddddccccccccccccccccccc", "uuuuuuuuuuuuuuuuuzzzzzzzzzzzzzzzzzzzzzzzzzzzu", "zzzzzzzzzxxxxxxxxxxx", "nnnnnnnnnnnnnnppppppnppppppppppppppppppp", "ttttttttttttttttttttttqqqqqqqqqqqqqqqqqqqqqqqqqq", "occccccccccccccccccccccccoooooooooooooooooooc", "uuuuuuuuuuuuvvvvvvvvvvvu", "ddd", "oooooggggggg", "qqqqqqqqqqqqqqqqqxxxxxxxxxxx", "hhhhhzzzzz", "uuuuuuuuueeeeeeeeeeeeeee", "ttttttssstssssssss", "crrrrrrrrrrrrrrrrrrrrrrrrccccccccccccccccccccr", "ininn", "iiiiiiiiiiiiiiiiiiiisssssssssssssss", "vvvvvvvvvgggggg", "jjjjjjnnnnnn", "xhh", "vvvvvvvvvvvvvvvvvvvvvvvvvwwwwwwwwwwwwwwwwwwwwwwww", "xxxxxxxxxxxllllllllllll"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"gggggggggggggggcccccccccccc", "jsssssssssssssjjjjjjjjjjjjjjjjjjjs", "vv", "zz", "cccccccccccccccccccccvvvvvvvvvvvvvvv", "wwwwwwwwwwwhhhhhhhhh", "zzzzzzzzzzzzzzzzzzzzzzzzzuuuuuuuuuuuuuuuuuu", "ffffffffffffppppppppppppppppppf", "bbbbbbbbbbbbbbuuuuuuuuuuuuu", "ffffffffjjjjf", "llllllllllllllllllnnnnnnnnnnnnnnnnnnnnnnnl", "bbbbp", "bbbbbkkkkkkk", "pppppaaaaaaaaaaaaaa", "wwwwwwwwwwwwzzzzzzzzzzzzzz", "ddddddddddddddddlllllllllll", "llllllllllllllllyyyyyyyyyyyyyyyyyy", "pppppppppppplllllllllllll", "tttttttttttttttttttyyyyyyyyyyyyyyyyyyyyyyyyyy", "kkkkkkkkkkkb", "nj", "ddddddddddddddddddddddddddwwwwwwwwwwwwww", "ssssssssssssssssssslllllllllllllllllllllllll", "uuuuuuuuuuummmmmmmmm", "xxxxxxxxxkkkkkk", "jxxxxxxxxxxxxxxxxxjjjjjjjjjjjjx", "zzzzzzzzpppppp", "eeeeeeeeeeeeeeeggggggg", "eeeeeeeeeeekkkkkkkkkkkkkke", "ttttttttttttttttttttttttgggggggggggggggggggggg", "qqqqqqqqqqff", "uuuuuuuuuuuuqqqqqqqqqqqqqq", "dddddddddddddddddddiiiiiiiiiiiiiiiiiii", "tbbbbbbbbbtttttb", "tttttttllllll", "ddddddddddddzzzzz", "oo", "uuuuuuuuuuuuuuukkkkkkkkkkkkkkkkkk", "jn", "vkkkkkkkkkkkkkkkkkkkkkkvvvvvvvvvvvvvvvvk", "zzzzzzzzzzzzzzzzzzzzzzzzzzzkkkkkkkkkkkkkkkkkkk", "iiiiiiiiiiiiiiiiiiiiiiiiiiiiaaaaaaaaaaaaaaaaaaaai", "hhhhhhhhhhhhhhhhhhhhhhhppppppppppppppppppppppp", "v", "pppppppppppppppppppppppoooooooooooooooooooo", "ppppppffff", "eeeeeeeeeeeeeeeeeeeeeeeeeeeppppppppppppppppppppp", "sssssssssssshhhhhhhhhhhh", "ffffffffffffffffffooooooooooooooo", "looooooooooooooooooooolllllllllllllllllllllo"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"aaaa", "ccc", "d", "dd", "xxxx", "t", "v", "mmmm", "zww", "rrr", "caac", "uuuu", "gggww", "tpptp", "eed", "zi", "hff", "kkkf", "auu", "r", "unnnn", "n", "uu", "m"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"wh", "ghh", "ggu", "lll", "ddgg", "nnn", "jjaa", "q", "nn", "cc", "p", "lwlww", "tttqq", "qqqi", "dnn", "ff", "zs", "c", "hhhhv", "buuu", "gy", "aaooo", "ii", "mmm", "ppg", "w", "ayyy", "ir", "frrr", "ww", "v", "zzzpp", "pp", "nnzz", "qqq", "wwvvv", "j", "kee", "dc", "tt", "iiii"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"dnnnnnggguujrrrpfbbyywww", "hhxpeccqqsssjjjjynnh", "kkkyypssssssrrrvhbbuuuuuqqqzzl", "hnngqqqkkwcccccjjxxxxvvvvtttttu", "akkdfffqzhhhhpjlyyw", "udddllssskx", "baaccccqqqqddffrrrzzzuuuuuooooeh", "vzzzzmmmmmmmsssssccccnnnnnyyykkkduuuqqqqiixxxx", "pbqpg", "mdeeeeefffjjjssccccqllbxxkaaam", "yttffhhhhvvvvcllldddqqqqmmmmmuxxnnnnyt", "hrnhcxx", "lluublyojex", "dwwggnna", "jssuccwwaaaniii", "ssssiiiwwwwppuuuuuddddoooohhhhhyyycccceeeeexxzz", "kkkovvbbbuumtyr", "zhhqqcaaalkz", "kkkaarrrrrreeeeebbbnnnnnnnqqqqqqqqwwwwsjjjjooohhh", "wwwhhhrrlllggxxxxxxjjjeeemmmmvvvvvnooooooaaa", "nnddffftrrriigzzjjmmxxooooo", "bbbveeeeqqqrrrxxdsssssmmttt", "uje", "prrrddzzebnnllmmmaauuuuuppv", "owlcco", "tttssssssqqqqrrnnnnffffccccyyybbbdddooooozzzj", "mmmiitqdllllxgggggzzzooaaaww", "eemmmmmmsssshhhhjjjooooooqqqqqqqxxgggdddrb", "abm", "bwwwdddnnqqssggaammzz", "g", "yztkkb", "rbkkkkdocjjmsssaaaa", "wwcrrrrrvddnnnotlssjjjfff", "se", "fssovveeiiiiqwlllld", "jjjjxxxxuuukkkkkiirrrfjfffvvvvvvvvvwammmmmmmt", "zzbbbqqseddookmz", "zzqqqqqqrrrrrsssssssspppeekkkyyyxhhhhhhiiiiiiiivvv", "iiieetttrrrqqnfffffdzzzhhhvvvoooosssss", "na", "ybawnnnhhhhqqqessfffttggjjjjjy", "uddddddyyyyyvvkkkkzttttqqqggggggnncceeeeeeerrr", "zzzjxxxxuufffppkkkkkssssttttttthhhharrrrgg", "qqssrkdq", "sssscuummmkbiiiittqqooofffhhh"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"kelkizd", "zggoooooppccsszkkkyyllltthhh", "nxhhkktmqjpeer", "dvdhvhoobbbnnnnnkpppppppzzzlllliirrrd", "sssssjjjjjkkoooobbbbmmmmllqqqqeeeeehhhhrrxxws", "zzqqqfbtevvia", "odl", "uagkffhrrrroommvvvnnnxx", "uuuzzzzhhheeeejjssssssppppaaaaaayycccdddfffffffkk", "jjzzzjzcccyyyyypppmmgggdddoooooiiwwwwwtttff", "uuuuuzzzzzzgggnnnnqqwwmmfffffeeesssrrrrrrraaaaayy", "kcpdvblkko", "qqqfbbuuunrrwwkipppppyyyy", "rrggbbsr", "atx", "rrrrqqqppxxxwwhhhvvttttkkkkkkkuuuuumbbbr", "cccyyqgggvvvvvxxxxxppppphhbbllltttttwwwwwiic", "qqqqqmmyyyccchhhhppppfffffxnnndddee", "llllqnuaxxebrrrvm", "ooggppiiiforvvlccccw", "ha", "fdojtk", "gcmmwwx", "wwvkkkkklllttttwtajjjssmnnzziii", "nqbbbwwwre", "rdy", "snnnnooollhhhhhstkkkkeffffpccy", "egggggqqllllpppppkiiiiiddddxxmmmmmmmnaazeeeeg", "zhhaaaapjdqqzs", "jjjnkksssssssuubbbbvvvvehhhrxmmmdd", "flllpssssszzzzzyyyyyyyooobbbbbxiwwwweeee", "eeoooolllliiiiixddbbbbrrrrssnnnnnnzzzzjjj", "yddhnrggxxttttuull", "hxaaakkkkjiiwwwwettttbbrruuu", "ddddccyyyssssssrrrnnuuuueekkktttmppaa", "nbnq", "ddmiigghrbbbyfwd", "bbbbrrrpttmmmsccccciieeeeoooflnnnnnn", "uuuggvvvvfkkkkkmmmeeeeeppphhiibbyyaaa", "msvvnntteqzzhhhhggciioo", "cmmmmmkkkkkhhhxxxzzzgnnjjjfddddpyyycccm", "uuuttttaaakdddhhhrrrrppiiiiiieswwl", "trhhggkkkkuuz", "uuddccmmmmzzkkjqq", "ctaozc", "mwyxmzzzv"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"xxbbxbbb", "eeeeeeeeeeeeexexxxxxxxxxxxxx", "vvvvvvvvvvvvvvvvvvvvvoooooooooooooooooo", "vvvvvllvllllll", "qqqqqqqqqmmmmmmmmmmm", "r", "kkkkkkkkuuuuuuuuuuuuuu", "nnnnnnnnnnnnnnnnnncccccccccccccccccc", "ggggu", "sssssssssskkkkkkk"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"ccccccccddddddddc", "jjjjjjqq", "qqqqqqqqqqqqqqqqqqaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaappppppppppppppppppppppppppppp", "hhhhii", "jjjjjjjjjjjjjjjjjjjjvvvvvvvvvvvvvvvvvvvv", "gggggggggggggggggggagaaaaaaaaaaaaaaaaaaaa", "hhhhhhhhhhhhhhhoooooo", "jgggggggggggggggggggggjjjjjjjjjjjjjjjjg", "uuuuuuuuuuuuuucccccccccccccu"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"nnnnnggggggeeeeewwwwwwaaaaaaaaaaaaaaffffff", "tttppppooouuuqqqkk", "sssttttttttqqqqqqbbbbbbkkkppppp", "iiiiiiiiiieeeeeeeeeewwwwwwwzzzzzzmmmmmkkkkkkki", "iifkuux", "gggggeeeeebbbbbboxxxxxxcccc", "edduuuuqtt", "nnnnnddddddzzzzzzzzzzkkkkkkkktttttttttrrrrrrr", "zzzzbbbbbbqqqqqqqrrrrrrrrllllllkkz", "jjjjjjjcccccnnnnnnnnxxxxxxzzztttttttttt", "fffffffffffdddddddddddbbbbbbbrrrrrrrrraaaahhhhhh", "rrrrqqqqqwwwwwwvvvvvhhhhaaaaaar", "llllcccccsssseegg", "sssssssseeeeeeeeerrrrrrmmmmmmmmmmooooooonnnnnnnnn", "dddcfwwwwwxxq", "qqqqqqqnnnnnnuuuuuueeeeeeeeeeddddjjjjjjj"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"iiiiiiiiiitttttjjjjnnnnnnllllwwwwwwwww", "mmmmmzzzzzddddddddddpppppppppgggggjjjjjjj", "hhhhhhhggggccccccoyynnnnnnnh", "cccccctttttiiuuuuufffffffxxxxxxxx", "eeeeeggggggggggkkkoooooooxnnnnnn", "kkkkkkkkkjjjjllltttttttttppppppppppxxxxx", "qpppvvvvvvvjjjjjhhhhheeeeqp", "wwwwwiiiiiiiiffffffgggggggggggeeeeeeeennnnnnn", "h", "fffffffbbbbbbbxxxxxxxxxvvvvvvvsssssssssnnnnnnnn", "vsssssscccccccccccyyyyyyqqqqqqqwwwwwwvvvvs", "iiiiiiiiqqqqqqqquuuuuuuuuzzzllllllllllcccccc", "spppbbbbbbbkkkkcccs", "fl", "zzzzzzggggooooooooodddddddddddpppprrrrrrrrr", "nnnnnnnnqqqqqqqqqqyyyyywwwwwweeeeerrrrr"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"ambbqq", "wwdddqquuukkizzzblllaaaatjggo", "rknllidddccccmmmmbbbaauuuuoooyyyqqqzzhhhvv", "wmmmtttjkncccub", "qqqbbkkkuuuuxxttldpccyyyyyyzzznnnnvvarrr", "bbuuuuyggggggddddddxoeeelkkzzzzzzzpqrrrsssmhh", "xsqo", "cl", "vvaffcccmtthskkkknnnbboorrrll", "vdllssmvtnnbkg", "aezzmkktttttvviaddduuoogppwwww", "efmmwjjjgggkklllnvvhooe", "l", "dtxxxoaehhjbgg", "tffhhldvjjjccynnw", "nkggggccccjsyrrrzffiwootttv", "kkuudlllcggggzzzzeeeeyyyhbbbrooojaaa", "mmmjfffxxrriiiivvvvvvlaaadddddccbbnnnnnnssppp", "iqjjjeeeykggggmhhhhaaaxzdddssssssrrrllooooniiq", "ggoooyyurvvlbbbmmhhhssffnpp", "ommmmmeeevvvvvjjqqnzsssbbaaaccckkxxddddwwii", "qppwwlvvrrrkkdddffyj", "llggwwwuukkkeeeeqqqxxppzzyvvattt", "bzzzzettkggpooxddhmmmauucccccyyffbl", "kxxxxffrrppplljggbbbboi", "tttllccccnnnnnhbbuuqxkvoodzzzz", "dddnnnnvccrrmmmaaapppuuuoxfeeeeeetttthhhhh", "dzkppggrrrffnl", "pglasxniiikujezz", "xzzvvvttggxcmmpkkulll", "lvh", "zzffuulndxxaaaabbjriiccppph", "acszzllllluutttrxxiiiiooooodddddqqqqqqkkkkyywaaac", "tllzvpffyxdguuirl", "aaaammmkkkuuuoooojjzbbcrdfitttttyyy", "ggvjjbbfmddwwwwheeeqaapptiiiis", "llllllswhhhhhmmoodddtggjjyyppiqqqqffeeeezzaaaaa", "sxs", "d", "aaaaakiiiirrhmggzzzzuulffffsbpppvvv", "wxxw", "cpwx", "yhvvb", "klraasssdddiiieeggghhcccoofffbbvvvvvvjjxxxnnkkl", "jjrrrzzbbbffyyutdsscc", "xxxmmaaccchdk", "mmhtxdddzzwpppcceaajjkkqq"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"ssyrdxxovpccuus", "xxdaaafwwwwgggggguuuiiqyybbbjjeeetr", "kopppppvvviiihfmuunccccllxgggjjko", "qqffffffffvvnpprroggzzkkkddddxxwasssuuu", "mbbbddwqqqvvvrrrrooggspt", "vvxffhzcvtbbaall", "jjqatwwllciuzz", "yyuuggjglovakxdssssmmnnnhhhhbbb", "iiiisssssyyqqqqqwwwllllicccgnnnnnndzzzvuuukxxx", "rrddsahnttu", "qjzbaagq", "pppppppooaaazzzneeeqqvvvmmwwwwwwwgciiiifssjj", "aaarnttzzcvupkkkooommiifqqqq", "rrzzzzkkkqqqhhgppppfffxcdyymmueeeeer", "gggttvvcccccddduaxneefwwwwyoillljjzzzz", "yipvvseaaqqqbbbrroky", "ffllttaarrrrhhhebbppppgggggxxwwwwmmdddssoo", "alalvggggggczzznnnnnooffffpprrqqqqqqjjjuuukka", "aawwwwwsjjjjjrrrrvyuufqpxxxxttbbbbbbbidddd", "xgyuuczeeqvfspp", "stgiebmmaaaj", "bfxeeeiszz", "ooogovgviiiuueeeecbbtnzzzzjjjjxxxkkkkhhhrao", "mm", "hmmmtttxaivoojjghr", "llvdquuuucnnntthhiiiiieleeewwwoozzkkkkkkxffffff", "eeebaawxxkkky", "jjzpsfabjbbohnnnq", "eqqqqggggfffhhhhhhhlllleuujjjmxxpbbcccvowwiiii", "obbfujjzgwwlaxqccprrrt", "pphttvvrmmyyeeeeiiaallccjjfb", "wnnlppzoaaauueeitskccc", "uullugtzzrraaxevccccpppu", "wwwoaaaaappzjjjjttttdxgssfffceee", "ysssseeecccccddppnnnllzzzuuuwxxhhhhkkkkyt", "auubbbffxmeejpvvsqq", "ssdgclljoeemshhhhkxxxavvp", "jnnnuuuuuuxpppppohbbcttttlllliiizzqqqqddderrrssjn", "ffffooyyyrrqqxxagccccwwzbbbddd", "nnbbwaahhhhrrrxxddtttnlooooqqqqeyyyyffzzvvv", "mmmssqqqwiiggbyyffeeuurm", "iiiikkddezzzwiwyyrrrrruuvht", "byxtvv", "kkkkksmmwwyyaaattxxxxxnnnnqqjjjpllfccceeegg", "yyyrrreotttcvvvvxxxxxxxssssqqqqghhhhhhppaannnb", "ykktt", "tllndddrrueepwf"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"cwxl", "czzrnffqqdemmjjoootv", "eeekkoobbcpgyyyffjhhlvmsxx", "mztpssskddvvaa", "yvvtnfzzwwbbxxc", "kkjqqqqqnccttmbbszppihu", "vniaqrcpw", "rrttttmsssebpppyyyywhhhcnkauffiiidr", "vdembbjccuuhr", "iiiiimoollxcchhqqqqqqutsseerbffwwaa", "nnuuqsggxiklyahon", "scjvi", "kggdtsszjcxqk", "ttttrriiyymmmmonnnkkkpddeuuwwwhhhxxllljjjccccaaaa", "bekkxxjltcpamqqrsssvb", "bp", "uuuuccktxxxxxffwiiiiijyyovvvbbllqpdnnngzzeehhhh", "hoomnnnnnfsiekcccttlaaadyyyqqggpzzwwww", "hhmlljaxxxvwotfuc", "jjjrrfeetolllhbdddjkqqwwwxvviiippzgg", "pwqrrrevvvoooskkghux", "hhznyjjjwfgggggeeeeebkkcciittuuuummdvvvvqqqaaxh"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"wkntsado", "ddddsicqqeeeeevbuaarmmmwnkkhhtttggj", "qhhffbbndryytujjppm", "qqrrlrzzpmmmooijjbnayuukwffddddtttxxxvvv", "gagfffdzoeqrrrrrxxiiyttluppsssw", "wwaaxxeettuuwqskkcrzzvll", "rpmmmmffbbbghdjlllllaaacccttxxxsuvqqqwp", "ssssctttvvonbkkkzqqqpuggyxxffffeearr", "aaaaarpygggvvhoooxccccccqdujjjkkmmsssbnnzll", "iiiillzqqnyywwodddjfeeevvxxtbbhksssuu", "fffkkkkbbtrwwayyynnleeggvhhmucqzz", "cxxxhsuedddnvvvvooobfgj", "daawqqtppppvvjooemmyxnsscciirrzzz", "ttuccgozppvx", "mmmvvvpptttffffbbbqkkmwzzzzlcuuuiggyenxrrr", "sdkkkyooiltabbbbeh", "soqsjr", "np", "eeerrdwpljjkyggnnnbfoouax", "hhylllllkdtttfccccggqbbzrrrrnvjuupww", "pppddoooozzzzllllyyakuuxjjwwwggciiietmbbvvvvff", "bffwlippeg"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"ixxivyo", "lffmoozccaai", "euuuudddtbmmffffpppoooorr", "vvkkkkssszldxqqqqjjhp", "eeeeevvpttttoooommuxxxxnnnnnffdddcce", "eepsssoodnnnccczzzzyyyyyuuuuuuffffqqxx", "tkk", "c", "paasxk", "eoooozgpppppsssddddddhhhyyyyyqqbbbbbxuuu", "jjrpj", "pmnnnyyysxxkkqbb", "nnnddduhsyyyyyqqqqwwweeioo", "iiooraah", "fccccctddddkkkkkvvxxxxssssssaaagoooommm", "ccccccpfoooggaasiitddem", "rfuezdqqmw", "bbbvddiigxxxeejjjfkkkqqhhhhh", "rbbbbeeefftttaaaaccccssdddw", "qqqssvvtttttiiooooddddmbbbbllfffffggzq", "dddgggggggjjjjjtzzzeeeeeohhvvvvvrrr", "wwkkbbbbttrrrrjjpppuuuuiiiiiizzzmmaaaall", "vpppydgggcccbbnnnhhhhhhmmmmsssavvp", "ozzhhtuyykbbbxxxxxnnnniigo", "vrrrnnnccwwwwiiyyyyyxxxxxddddddzzjaaaqqqqq", "hhw", "fffffuuubwwwmmmmmiiiiikkkknnyyyyssssxxxxxxxhhhaa", "xxnnjjwxhhhgddd", "aaaannnoocccceeeeuuuuuuuxxxxdddpbbbvvvvvtzzzzz", "cccaaghhhxxxxxqqqqwwwllvddkkkk", "xrreccddzhugggwtttttxr", "qqdwztvx", "vkumrobgzvy", "kvvvccffffzwwwwwqqqqoobbbexxyy", "pzrni", "bbeeuuuuhhhhhyyiiazzzzzccqqqlll", "uuoncmdayyp", "zletqquucccirrrr", "ffpppppppjjyyaaaaaaqqqqguubbbwwwkkkmmmmnn", "qoacce", "gs", "llmmcffffjjjjgxxxbo", "cmmmmvvvvvvvvvrrrreefflliiinnxxxxxhhhhhpppp", "ppgrraaaiiiuuuzzzzevok", "xnuuullcccchhhhqbbbwwwwffgxxxxn", "uubbbifffrrrrddddjccccppptttty", "xvvvwwhhhttttttttpppoooooooccckkjjjjmmgggg", "qnnqbx", "e", "ooohhhlllluuwwwwwwsggddddddddyjjttttttteeeemmm"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"lppmmmyynncccccccccrrraaakffdddbbbbwwww", "zznnnnqqqqqdmmmaaaaahhhhhhcccyyyfffkkkkbbttt", "i", "xxxxxbbueeeeeedddmmmmkwwwcccppplllllllrrrrrriiiiii", "dwwaaxbclffff", "w", "srrrrnbbbbptwqqq", "lggwwwuuukkkkhhzzrrdvy", "xxxxxxaaahhhheypppvvvqqqquuuuzztttttiiiiiirrrrrr", "uvvvvvoooqqqrrrrraaahhhhhfffffmmmmeeeeewwwppttuuv", "fivvzlhhhtftjjjddppbb", "mmkkiillllqquuuussssvvvvnnxejjjj", "eqmmmmsslllndddkkkfffu", "qqqqcllezzzzkkkvvtttiiooooaaaaa", "yyyyyoozzzppppppppllijjjjjccckkkddddddduwwwgggg", "pw", "xxxxwffpppeeeeeuuusiillljaaakkkvvvv", "mmmssssjjynbbbbbiikkffffvvv", "gpzoje", "ssssjjxxnneesookkffffbbb", "uuyyyfffsssspppqqejjjwwbblltu", "ffpoooodkkyvvaaaaqqqg", "nnooovvvnzzxddeeh", "kttvrpkaaayl", "zzzrroooyydimhhhpexxxw", "xgnirrrrrcyzsssg", "czscrr", "ssrqujovvvpzns", "nbs", "lliddddwv", "hhhxexeeeeuurrrbivvmmmyyyyykkkqqqqaaaaaaa", "xxqqqssaaabbbbbbbbkyyyyyhhtttttteeeeuuurrriiiii", "rrwwsooyaccchhbbbbggggnnnlljjr", "pppgggsssuuuuunnxxxxxvvvvlaaabbjjjjjj", "bbbbbuuuuumzzyynnllllphhkkkqqqb", "occiiiiiiiimmqqqqqggrrrddddkkeeeelllllyuu", "yu", "ufffghrsusbbmvyyy", "npuggnocyjz", "uhhhbbccccjjmmooookkkllaeuuuy", "kkhgpppiy", "aaaaaxxhhggzzyyqqqppbbbbdddwww", "oosvjfffftixuukgwwwmo", "aaeennnnnybmggrrpwi", "vvcccjjjjjjxxxzzzuuooooyyffffeeeqqqggggg", "ddddzzsjvvvvhhgoooooooonnneeeeeeqqqq", "vvzzrrnnnkpssffw", "zzzvdiiwmmmhhhhlllccxrraaaaz", "vvvvvkkkkkkeeeedmmmmmttcfaazqqqqq", "gyyyyyaaapsgeiiiwwkkkll"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"yyyyyyyyyllllllllllllllbbbbbbboooooooooooo", "aaaaaaaaaappppppooooojjj", "ppppppppiiwwwwwwwwooooooooooooo", "wwwwwwwwjjjjjjjjjjjjtttttdddw", "mnnnnnnnnnneeeeeeeekkkkkkkkkkmmmmmn"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"iiirrrggggggggfff", "yyyyffffffffcqqqqqq", "mkkkmk", "beeeeeeeezzzzzrrrrrrrrrrbbbbbbbbbbbbbbbbbbe", "a"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"yyyyrrrrrvvvghcfnnnx", "xxssrrw", "qqttssuuii", "xccccbbbbjjgggggpptk", "ooppppadddddddnnnkyyycccccccllllll", "xddooqvvnnnerr", "wllxxxccuuuurzyyyyyaw", "wwwwbbbbbbfffeeejddddnnnqqqmmmm", "iiikkkssqqqqqqooozzzzzztttttrrrrrree", "yyyyyuuuuggggkkkfffffdydddccccccccjjjjiiiiiii", "dddddddiiiiiiiiiioooottttttyyyyxxxxxrrrrrbbllllll", "cc", "sssjjjuuuuzzzrweeebbbb"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"hhhhvvvvvvoooooofffffwwwhwwweeeqqqqzzzzzzcccccccc", "uuuuriiisssssspwwwvllgg", "ggtgsj", "snnneegvvbbttdddddk", "nnnnnnnffffqqqwwwiiiiiipppvvvvkkkkkkkkkkkkbbb", "ppppddaaaaaaaaassxxxxxxhhhhhheeeeeekkkkkffp", "sskkkddyxxxxxwq", "zzzzzaaaaaaiczcpppphhhhdkt", "ppppppvvvkkhhhhccuudiig", "y", "jjjjjjsssssskkkkdddddwwwwggggggglllllmmmmm", "eeewwwwwggggxexxrrrhuuuuvvj", "bbbbbjjjrreeewwdddddxxxxzzzzzzzvvv"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"pppjtthssfffbooooooommmuuuddd", "hhsuhdaaa", "kbxxccvvvsssqqqttttmmmrrrrhhhjjjjzpww", "zyyttkmmjl", "zzzjjxxxxnnnttttttssmmmrrryyyyyeeeoowwwwkkaaaz"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"pppoooeevvccciiyyyllsssuuudddddrrkkqqqqnp", "rddttttooollvvffffffyyszzzzxxxeewwrrrrrrp", "wseggjddddozzzxcyyrmmm", "bnnnneerrruubfpzckkkkkqq", "doowwjmmnyypppdiizzeeeexxxrrr"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
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
    vector<string> words = {"bmneefffiiszqdddcccyyppppxkwllggh", "zzndohaasjg", "nnnmagbedddkk", "qfkqx", "cccgppfffffvhhaaamsjbbbbnnooykkkkweeelltttttxxxzzu", "hhyyymmmmnnnjjjjsszxkrrrcuupppeeeeettbbaaaggilf", "dullmvvwwgggxxxxccccasszzfbbbbyyyyooeeihhprrrrrjk", "azf", "vvvvyfbbbmmmoxxxhgggllnnncccwkkkttuujjzad", "ppxwogft", "nlli"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"lynhkhhoommmvvvsxxxxeeedzzzzggfccly", "oopgcurrfwyyxxx", "qfmugaayyqizzxjkkkc", "hkbbbmmmoooduwwwccssseeqqhqpvvvxrrraaaffgggllliinn", "reeeepyyizooggghbffcjxquuuuwkddtll", "himbuadorellkk", "iifpjggyuuuvvvntksss", "pssfttgwlllyzzpmoarxxkbniidh", "xjfymmdbupa", "pqqxlsccjkknp", "qqvvvkkyyssdmoeeccrrpppfftjjwnnua"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"ccccccccccccccpppppppppooooo", "kkkkkkkkkkkkgggggggggggcccccccccccccc", "ssssssssssssssaaaaaaggggggggggggggg", "qqqqqqqqqqkkkkkkkkkkkkkqkkkkkkeeeeeeeeeeeeeeee", "qyyyyyytttttqqqqqqqqqy", "ggggxxxxxxv", "uuuuuuuuuzzzzzzjjjjjjjjjjj", "yyyyyyyyyyyyyyyywwwwwwwwwwwwwwiiiiiiiiiiiiiiiii", "lllllllllllllggggglgggggccccccccccccc", "zkkkkkzc", "ooddkkkk", "xxxxxxxxxxxffffffffffffffffffffyyyyyyyyy", "jjjjjaalll", "ggggggggggnnnnnnnnnnnnnnnhhhhhhhh", "lllllllllllllllliiiiiiiiiiiiiqqqqqqqqqqqqqqq", "iiizzzzzkkkk", "tttttjjjjjjhhhhh", "rrrrrrrrrrrrrwwwwwwwwwwwwwyyyyyyyyyyyyyyyy", "bbbbbbbbbbvvvvvvvvvvvvvvvvcccccccccccccb", "zzssz", "ggggggddddddddddlllllllllll", "xxxxzzzzzzzaaaaaaaaaa", "a", "ttttttttttdddddddddddddddoooooooooooooo", "rrrf", "hhhhhbbbbbhnnnnnnnnn"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"nnnnnnnnnnxxxxxxxxeeeeeeeeeeeeen", "ttttttttttttttteeeeeeeeeeeeeeeewwwwwwwwwwww", "dddddddoooooooopppppp", "kkkkkkkkkkkvvvvvvvvwwwwww", "nnnnnnsssslllll", "uuiiirrrrr", "llllllllllllllllnnnnnnnnnnnnyyyyyyyyyy", "ggggggggggggggggllllllllllllleeeeeeeeee", "sssssffffffc", "uuuuuuukkkkooooo", "qyyyyuuuuuuuuuuuqqqqy", "eeeeeeeedddddkkkkkkkk", "mmmmmmmmmmmmmmiiiiiiiiiiiiiinnnnnnnnnnnnnnnnm", "fffnnnnnnnnnnnsssssss", "lllllllllllllllllvvvvvvvvvvvvvvvnnnnnnnnnnn", "uuuuuuuuuueeeeeeeeeeeeeewwwwwwwwwwwwwwu", "yhhhhhhhhhhhhhhhhheeeeeeeeeeeyyyyyyyyyyyyyyyyyyh", "kkkkkkkkkkkknnnnnnnnnnnnnnnlllllllllllllllllll", "qqqqqmmmmqmmmmdddd", "d", "dddddddppppppppkkkkkkkk", "pm", "rrrrrrrrrrrrrnnnnnnnnnnnnnnnnnssssssssssssssssss", "vyyyqqqqqqq", "eeeeeessssssdddddd", "gggxxxxxxxw"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"ssssttpppdddwwejuuuzzzzaagvmccccccqffhhrlll", "mffwwggcxnaaattyrkqdddddzze", "yyikorssg", "ooeehhjjjjxxppbbbbbwwwzzziiiaaaaavrruuuccggggg", "eepqfulxj", "rzujjjssvcccmggfl", "ttqqqqjjiiieewwwdddayynnbbbuffssppppovxxxgggzz", "ccsssuukkkkrrrrollgbhhhzqpiixxxxxnn", "ppcccceeeekkzzyyyymbbbjjnnaaaggivvv", "xxcccs", "wppaofqrrjjjveecccugxdttyyy", "yysjclooggggqz", "fiiccccclzwwwwoorrnnvvvvaaay", "ocuqknhhaao", "zex", "rreeaaazzmgvlllluuuwwwnfoddcccciiisspyxx", "mbbbrrwwinooeelkuuff", "ihnnmmllccppyeeqaaxxzswwd", "iittwwwuuaaiaqqooppxjvv", "nnhvvlllajqzyytffcciddsu", "bbbyqrrzzeeeeeoopjjaxxxxkkccvvwww", "vhalffmmmzqqbt", "uuuddbzoattttccgggvvvviiyypqqqlleeeeefffrrxxx", "kkkitttfayljqqhpppwbsssscc", "lllddddzzzzzeoocrviiwkqmnppp", "oossiiiifweeeeeeemmlpphhhhhhkkytjuuuucbbbggga", "ssibyzzg", "gggfttmmmppqrsssnnhhuzzzzbccceejjjjg", "uubzziiggcssllllkkkkkddhoowwqtten", "egglllbfffffyyyyvvvnoopkhdzzttttt", "ppsssggxvabnqeep", "vvuusssrrfqqhwecccddkkkkki", "izzzzdbblwffffvvyyyyqqqqqqgggggggkuuuttxxaaoo", "ydddrssvwictmfn", "nnngmmmmqqqqwwlllzzrrsuubeoyyyvvffff", "psvvffhyyeecccktxxxxlldwwwmmmmmm", "absua", "kksillyrrpphhnntjjaxxxggqmddwwk", "kkkeecmffoo", "oolqquhiyynnnaatzzzjxxxwsssss"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"hsxxpvjja", "ovyvzzuudqqqggajjjjitttcrrrkkkl", "bbbqsskkuufffffeeahoonnnggppxxxccll", "wccczrrommmmssseeebjjjjjpxxxqkkfiyyy", "zvz", "oojjjlakkzzzshiitrmyggu", "xgpllkwwuqabbin", "ehhpllcjjg", "dtpcg", "hhhvmbiiiieeepaaaaaulllggcczzyyyykxxqqqqqqffff", "hrrtttpbinassl", "kkhzzzfyidd", "xwkml", "idzzyyobhi", "kkkaayyyxxhhhutnnvvbbboooomggggzzccli", "lllxvvgggjyykdpppmiirff", "ekkzqxxfpwcyed", "iiiiowwwyyrrvmmmmhhsssaapx", "wwjgeooozdtbbbxrrrrkkyyssvv", "aaaaaphbbbeexxxxffffcsgguwwwwvvrzzznyy", "iiiinngkkkkkbbsssttvfeejjjjwwwddlllllooqrppi", "zaaaggkksseeclffbhhhjovvdddz", "ssccclyyynnttjjhhhhhduuuarrrrkkvzzzbbfff", "gyyrrqonpjdmccvvss", "ouuugtbbmwwdddeqo", "cccggolmmxxfycyyjakvvqqbbpp", "riiiiccqqqquemmmyyyddddddddooppppbflhnnnxgg", "oooekkwbbbttiiiyyzzzjrrxqqqqllfffuuhnnnvvvv", "buummdwooohhvvvkkfffittzzaaaeeejjsscll", "nghd", "hhyvmpso", "txuuqwcccvppallllffyzzeesbbbb", "kallbbbffsrrrrvvwddddttooojjyyqqqkkka", "irvvclluuohhbbbbfqzzpjjjd", "xpxjiickkkddduuaaawwwrrgvfffbbztthhqqqqx", "rrssywoohhbccccxattt", "eeiivatlxjzooonsssqkhmuu", "kkkffpppllsbbbbggnozwwvxxjuuuk", "hhhhooaaulllmmmmfccjzzeeetttppppiiqqqkkwwwddddxx", "ww"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"kd", "ppppaaaaaaaaaaaadddddddyyyyyuuuuunnnnnnnffff", "rrrrrrrrrrrhhhhhhhvvvvvvvvvcccooooooddeeer"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"xx", "uucccrrgskk", "jjjjzzxxxxxajaiiiiinndddd"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
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
    vector<string> words = {"qqkkkeeeemmmrrrrddlllluunnvii", "xlb", "zzzzyymmmmvvvllxxxxoakkksssddppppuu"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"xxxxxxxttttooobbbbrrrrrrrrkkzccvvvvvvlllljjjjhhhh", "aaalleeeooomrxvvvvggghhhfffiiqqqq", "kkvvck"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"wwwwwwaaaaannnnttttthhhhrrrrrrrsslllccccccc", "vvmmiwoo", "cdhggsvvvvnnnwwwccd", "zzmw", "iru", "f", "bbbaammquuuupsxb", "arrrsssssjjjjjttzzzzzzcccchhhhhkkkkkaaaaaaaaaar", "ooooooooommjjjiiippppwwwwwwwbbbbzzzfffff", "mmmhhhssigbkffff", "sssiiinnnooooooorrrrrrrruuuuuddmmmmmmmm", "ddddyyorraaaaaappssssssnnn", "ppppnnnqqqqrrrmmmmmooyyuuulllp", "bbddiitm", "zwurrxmzzzw", "cclllllhttttnniibwwwwvvvvv", "xzppujjjyz", "kkkkkeeeeeeexxxxxxddddbbbbbbbrrrrrrruuuuvvvvvooooo", "tgkkwjjxss", "dddddcccllllllllqrrnnnnowwwwwgggg", "ssaexxxxgggvvvdd", "bbbrrrrrnnnluuuufffffffwwwww", "hhhhhhhhhheeeejjjjgggyyyyyyccccuuuuuuuuuuzzzzllll", "uuuuuwwwwwwjjffffooosssssslccccxxxxx", "yyyyeeeeeeeeeetttttffffffuuuuaaalllhhhhhhbbb", "llllllttttwwwwwwwwyyyyyyaafffffcccxzzzz", "wwwwwttttiiiiiiialllxxxpppppggggggyy", "sssssssiirrnnnnncccccccyyyyyyyhhhhhxxxxxxjjjjjjs", "qqqqqfffpptteeaaaajjjrriiq", "kkkkkvvvvvvlllsttttzzxxxxxxe", "qxiiffannll"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"lllllllllhhhbbbccccccccvvvvvtttsssssssssfffjjjjj", "ffffffhhhhhhpppppppoooooonnnnnnnnbbbbmmmmmmmmiiaaa", "oookkkknnnnppabyyyssssuu", "gggsssiiiiiffdddddahhhooooqqqq", "xmlllsskaaayl", "krrsuuuooowwwzzvvvv", "ffqnnkkkkkiizzzuf", "ftttnkqqeegjju", "kkkus", "linc", "zj", "ttillp", "rrhhccccckkkkwwiivvvvvbbbbqqq", "ooooooouuuuuuaaaaavvvvvyyywwtttttttbbbbbbmmmmm", "liibbbgrrcccfffa", "mmmmmmmjjjjjjjjjjnnnnkkkkkkgggqqqqxxxxxxxuuuueeeee", "tttttttttzzzznnnvvvvvvdwwwwwwwccccsssspppppp", "tffbbbooneerr", "cccoooeeyyaaaannnnniiikkkllllc", "wddwhs", "rbxxxuupyyah", "ggggggqqqqqqqfffffffffrrrbbbbbzzzzzzzuuu", "vvkqdh", "xxxxsssssqakuuwwwwwfx", "uuurrnmjjjjiiiikkkw", "sssszzczzccceeeeebbbbbuuuuuuuuuqqqqqwwwwwwwwyyyy", "g", "oqoqqqqqhhhhhhhyypiiiiiiissjjjtttt", "ppppppppppzzzzzznnnccccssyyyyllvvvvvvvvvbbbbb", "yysxnwjjjddo", "zziiiiiiikkkxxxrrrrrrrfffffffssssspppppmmmmmm"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"jjjjjjiiiiiiiiiiiiiiggggggggggggaaaaaaaaccc", "ffffffffffzzzzzzrrrrrrdddddddyyyyyyyyyy", "bbbbbbbbbbffffffffjjjjjpppppppppiiiiiiiiiiiib", "llllllllxxxxxxxljjjjjjjhhhhuuu", "engooooben", "cccccrrrrrrrrrmmmmmmmmmmmiiiiiiiikkkkkkkkkk", "vvvvvveeeeeeeeeeeeeeemmmfffffpppppppp", "oooooooovvvvmmmmmmmmmxxxxxxxxxxxqqqqqq", "mx", "ttttttkkkkkkkkkuuuuppppppww", "gggggghbbbbbbbbqqqqqyyy", "eppdddqaa", "kkkkkkkyyyyyyyccccccccccllllllllllhhhhh", "liiip", "qqqqqqpppppppppwwwwwwnniiiiii", "vvvvvvvvvvvvffffffffppppppppppxxxxxxuuuuuuu", "en", "eeof", "vvvvvvvvssssssssssgggggggggggggnnnnnnyyyyyyyyy", "bbbbyyyyyyyyyqqqqqllldddddd"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"g", "qu", "oooooooohhhhhgggggoggzzzzzzzznnnnnnn", "zzzzzzzuuuuuuuurrrrlllllllllllllsssssssss", "bbjcdd", "wwwwwwwwwnnnnnnnnnnkkkkkkkkkyyyyyyyeeeeeee", "ljjjjjjggggggggghhhhhhhhhhhxxxxxxxxxxxxxxllllllj", "rrgkar", "ayycxxdda", "vvttttuuvuuuccck", "eeeeeeekkkkkkkkkkkkaaaabbbbbbgggggg", "ccccttttttooooorrrjjc", "lllllllcccrrrrmmmmmmmmmmhhhhhhhhhhh", "rrrrrrrrrrtttgggggggggzzzzziiiiiiiii", "vvvvvvvvffffffffooooooiiiiiiiizzzzzzzzzzzz", "ggggggggggggqqqqqqqqquuuuuuuuuujjjjjjjjjjllllllll", "pppppppppfffffffffffssspsiiiiiiiiiiiiggggggggg", "lfffffkkkkkkkkkkoooowwwwwwwwwllllllllf", "eeeeepppppppmmmmmyyyyyyyccc", "ffccccrrrrrggguuuu"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"uyqqqqaaiiwwwggzzrrtleejffnnuuy", "cbppokrwwwyiaaaat", "xxaaaaaalyyjmmqqwwwggppppttbbiioon", "wnbrdsecca", "jjzzzhhhhccuuannrrkooppxxggg", "bzzxxwpfyhhhhjjollukkesttbz"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"jjjqjqqqxxxxgggkppfyyjyccccrrrrmmmmmuusiee", "annnnniilabbvdffjje", "llsl", "zzzzzcffffuuooyaaaaaajjgggxxxbbbbtttrmwwwwww", "ccuukkkkkllllmmmmmmmcyyyaaaowwiiiitggffr", "oodmmzzvvvnfabhgg"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"nxmoojllcvrr", "ooiccdgyffr", "oolmccwwqqktttuuayyydveffzsrjjbbbb", "f", "ecppzaaayyhhuuuxliowwgnqqqvssstttrrrrr", "jjjllllyyyyxkdddbqqeegggfffaauuinnpmccotzj", "yyflssssuunnddtxxqvvmaaceeiibbg", "sfaaorrmxghbkywnnjjf", "dddvvzjjjjssshhhmexxxyyyrllggaffffuubbknppd", "hujtricdwwbnppppkvoooggh", "ccwwvvssshhhxmmmmtauuoffpppdlzyyebi", "mjjrrsuxxzzqlfpppoottyybbeeeecnnh", "hhwmmyyrrtugggdaaqzzzzppppkkeeeeeiiijooo", "ffyddxkkcccmmpooooorrzhhaaaiiittttbllwwwvvveef", "aaehhgxuuutiiivorkkkyyynpdddccccbbbbsss", "vvcccrzztkxxxqqqddasmwwpppppppfffuunnnniiiigyyyyv", "rnvvulxxcasssfphmot", "ccbbppqiiigggguuukaahhnnmmvvvvvvxxxxollttjdwwwwffs", "bkyyyhrptwwjfffdgziiv", "ifooqnhhhkwxxxxxxxaayceeeippjjlllllmrbbbzzguuusddd", "bbocjqqtgnnukkyvvzxrrrah", "aaaaasssssddtlbbiiizqqqxoeeehhhukkggggjfcvv", "pihtfqj", "yyoswibnkkzrmmjggxffleeeq", "xuyydfllkm", "bprrrqccccctwwwflhudgggiizy", "qqqrrrxxooivwwhccbbsmmmmekktnnnjddlllll", "zzzswwwwwebcccllrxxtaiiimhhhhnkyyouvvvvz", "jjjouuufvniircwzqddekgaalsy", "fifp", "zaqfskwwnppz", "ffffettzzzxxdhhhossikkkkkbbbrapyyuuwwwnnnnmjv", "nnnpvvvjjdmfffsscuulliizzoottgwaaaxx", "lfrrrpteeggadddhbmyyucc"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"fnnmmucctwjovhyeeees", "jquuofkvv", "xuunggficomtyyqvddlaaaax", "vlhhqheerrfffiyzzmmmmwwkkkppccbnnnuuddtooovvq", "ub", "mmmcbbldgwwffhhhooappzzqjnnitttr", "pjaaaaaaxvssllewniiiofffduccrrrbhhmmyyyyttzzz", "xxxptedbiljjfffawwvvkkknnsscy", "qg", "hhxmlllqqeiiicttnyooossrkj", "uummeezsvybllcc", "nrcuz", "yyxdxxxzeeccclliwwwwwwggpjfrra", "suzzeewjcdhbbopiga", "gnejovsqddlpphuguttyybbbbkkzrr", "rrottwwwqqqkssbbdxxxxxzzaafflyyyeevvgmmmiuuupp", "iggghhhjhmseeeebaddllouvtttccccffffkpyyyw", "c", "buukkttteffggwwhhhvxxppqrrnccjjllllabu", "xddlaatthhppvbu", "ks", "ttazeerrffnhjjdwwbxslg", "ttkkkkkwxxvvvvhllliiqmoooeppjjbbgggddnnuus", "kqqwnssafjjhheggrmmmmppic", "yyqzv", "hakerr", "hbqx", "iqaqafubmmgvkeyxplj", "ttllllxxffaiiiimrrssuccqvwwwzjhhk", "ssssqdojjjkhwtrrzl", "ogxollddmmnnvvtoticcyykkkhhpzz", "gjjrjewwlppdddduxxxbmvvssnttizoyg", "nnnfvddygbittn", "bbbsssimmmmjqzzzcfvvhhaaadooooeerryyykllllwb"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"cumkkkelgnwwppaaaaastivbbbjoox", "xxwwwwzzavvvuuuuttttttsssxfbnnniihhhjjqccpooogggky"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
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
    vector<string> words = {"qwwwkgccciibbssdddffmmepppxryyvzhhhaj", "nwpeyn"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"kvmmmksuccj", "eecmbaduwsnt", "aawhjjqqqymxu", "ynvvecokkggi", "rfhhltssscqquujjoeeennnkkkxxiazzzmyyyy", "ghxwoooooommmtttqqqkkeerddnnaivvvvjppsccccbfyl", "lfsssoocujjeeeykwwwzxvvvttttgdiqmm", "ijzdvivfwxt", "bbtttnkkmmwgqjjjxxrszzzfhadddyb", "iwzztyyaabbbbbdqxjjnppppi", "tueeepxxgayvvddrroffzzzmnnnbcclh", "jayxb", "fffdddppssssggueeezjjmmkwhhrbbblliqqyytttvcna", "hhhcnnblaoouuhjwxpggvmzyqe", "eaawwwwkssgddzzooojjjxxxxxqiiirrppphhhvvtttmmmmcc", "yxxwocccvvvvhhhtdggffnzkbbbmqqqss", "d", "kapz", "oheeesntv", "ecqqkkkkddgghhffffxxiottzzzzzuyyysmmpjjjwwwaaaar", "ttthhuwqvyyjjeeexcsskkiiinddbbblla", "zajqqvvveiikkrrrllmxsgdddhpyz"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"lsifhattzujg", "ppppzzsddbbrammmkkkktiiuvvohhhxxxqqgl", "qssvllxhhgbzuajcq", "uevgzlhfcnn", "qqqzziiiggyyyuuepppccssswttttxhhhhhookdrrjffnn", "hfkpppefejqccsswtttolbbzzznnyymxuuhhf", "bbbvvvvvvwwwpoomkkccnnnjaaaaqqlrrrxxxghuussy", "ccsngqqluuzepddwk", "aaaiiuuwrrrxttjyyhzzooggmnf", "rkyjgkvaaazooccccneefffmqiddbbbbb", "bgyyawl", "vvfyanggh", "gggguuujjtvvddllllzzziisegnccfffmmaaawwpyyxxqqqqhh", "hhsintmypaaabbgkeeujl", "cxxwwvvukkrrzpofddbsieeeenngllttqqqqhhjjyyaa", "ionsfwhykkllccccruxxemmmmpppjggvvviia", "affcisyudkzm", "abaxxdaznnccs", "uuuutvvepppslkkknzyyyrrammihxgg", "ccummngyttqqvfozzwwal", "kxssqqqtdpiimlukeeeegwwnnnnyaaa", "dlapppxqqeuiiiivvvjjjzccttkkkkyygsshm"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"xxheeeeejjuoommmdddbbllnnn", "yyeettwwppppppfssszurrrrrrdddii", "pppzxxxxxxxxxiiiiibbqwwwvvvvffooooeee", "lszz", "pppmmmmmaaxxxxxxxxsssvvuuuffffyyyyyyjnnnntttt", "odol", "fffpzzzyuurrrddmmmsiiiiiigcccc", "wwwwwwwwwttpppprrrdccccccnnnnaaakkkkeebbbbb", "ccffffqqqqbbbbbbaaaauuuuwwwwwwnnnndxxxxoc", "pmmlzboo", "oommmmqhhhhhzuurrllldd", "pco", "oooyyyuuuuuukkaaammmmmmddqqwwhhhhhfffffff", "fkkkkkkppptttttttccccvvvxxxxxbbbssssweelllllllffk", "eouzvvqqqqiiddsmm", "kgggvrrrrraaaqqqyfuhhh", "fztri"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"vvvvaaaajjjjjjjbbbbrreeeeeeffszzzz", "qaqqqqqjtttttdddmmmccccccnnnnnnnnuubbbbooooovvvvvq", "xxxfffwwwwwwwwwttttrmmmmmmeeeesssvvvvvvvvvvvhhnnnn", "azawwg", "qqqqpppppuuuuxxxxxbbbrrrrrrddhhhhhhggffffq", "dddttsbbbppppzzfggvvvym", "axxxxuppplllllnngggggvvvqqq", "rrrrrraauuummmmmrokkkiipppsjjjjj", "k", "gokne", "hhcpppppppaddtttmmmvrrrrsssbbbbiiih", "wwwqqqqnnhhwgarrrpyyyy", "n", "ddqqovvvvvhhrrggggzwuuuuuuuaaaaaiiiiii", "bbbbffffhyydi", "zwwlllkttaa", "appxeeehhhhhhddccssoooooozzjjj"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"pwmuiiaa", "lllljdrrvuuiffbbqqqmmpccggyyzzz", "kkkkdddiiiffssssmzzlhhbgggeeeejjvvttxxwwaaa", "uuukppppeerrrooiiiiggzztccyvvvmmlllnnnxxssdddu", "vvzzqeedmwkoo", "xyixpwj", "rg", "tiqjrkkkcssxwlyydepmmbgg", "vvkbddlllaaanjxqeeooyfsig", "wcor", "qqeoojdddnnnmmpvvvvbbbrrrrxxaaallshhkkkiittcccc", "z", "ady", "uukkkvaaggpjjjjjhccytmmdderrffsszu", "rkksoooodddnnnnnnhhhyyybzuuppfeeqqqqaaawlli", "ooootapqqxxyykvvvccccczjjjllwwhhmrrrriiuuuuussbb", "joppmyyrziiuuffhdeeebqglllswwncjjo", "wvvbmnyyy", "lgopyeeeewwhhccqlmfffkaaarbviddzj", "jckkkwvvnnnaayyytthhdddfffzzppuumsrrc", "rrhhaaaxiiigzzecccqqqqoyywbssssuuuv", "sssswaqqoobbbkkkmmmvllllegtyyxxxnnhhhrjjccfs", "mettddkksujccccccllrrrrwwwwxxxiizzgyooppnffffvvve", "echwmbtlusrde", "vzzhnuuewcgg", "bunnpfftlccrjxh", "yyrnnnaxxkbog", "rppiiiidzoub", "pmuupskn", "veezzwjsbbhmmmiiqquuol", "hhjxrsssssswbfomvvvkypppglll", "hhhagzociyydpppkkjlllxxxruh", "dpppnnaaaatqvgojjzue", "bbtrrrpeewwzzssbudfakkkmmmggiy", "rrrffkkpbosshhhhhaatyyllzccxxdeevvr", "hwwfqdmbbjx", "evvtbumlllwweiinxxqqsggg", "rvvttttehhhddalbbzzzjjgggiiiixwcffssqyyy", "bmeyxxcdwuuotszj", "dkkkajjjmmbzzssrcqqeeggyyivoww", "cxgdvwc", "iinbaajrllzzmu", "dddkooopppxujjjjhhhbblliivnnnfzzweeeemmqyggggggsss", "eiibbkkjjyyynnnnfppplggg", "bbllsjnnvvvuww", "rkhhooozigvrcpmmwwuubyq", "v", "uoaymmsnnjqqfwxxxvbiidt", "bvddyykkkjjtttauzznccllllgfsoooiiixxeeem", "pppppuuttbbbboozvvvweeshccgddnnfffxqi"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"aassmynccdllwqqqqzzzjjroooffxppgggga", "ellwbgggtttffffiiiiiiiooorrnddddspphhccxameeel", "sooeuiiiiccrrttxxflgwwbanjk", "uejhiikw", "oooyyyvvkkkuuxgppjjibsczzqfhhhlmmn", "yeuggrmcvpppxxy", "tjjdifecsyyzrr", "fahs", "cqphmmsszzaaacwguuuuljkvbn", "llyobbpggaasscmmeeezqxttwn", "dbbbpllqykjir", "pewwabbbbbvqrxtttfhnnoidc", "pppqqqlstddvvxkffarryyyyiiicccbbbbgghhnejp", "kccllttgbnirrrssshhhfxx", "xupphhijnqqaaaee", "psffrgecccaqnmoottvwwwkh", "uaaaqqooctttzfffkrrrrwyllllleedddhhmmvvppppjjjj", "slcjcgnnnnxxttzzdyarppefff", "nnnaaaaxxxiizzzzyyyyeenooowmmtjjppprrrvssssl", "slcjr", "mrzkf", "qqquuflkyyqnppgjjxze", "muhwvvvvijjggpmeztyykkrrrqqxx", "oaxprr", "czqqqqsxaajjtttolllucueeenrrhhpppyyyywbkm", "lgzbyead", "wppejattmnn", "xoosffddrjzzeeccttuyahb", "uwppbbffyhttlllsggoeerrrkacd", "mokklriyyydgxuvnnppa", "rfyyoooqqllljjmuuhaaaavvzzteeccxwwwsb", "ve", "sekkkcccdddfppojrtgggqqqmiiinnbbbaxe", "ohvb", "pzmrreeeekvviioohwqqaa", "ssxoeeujyn", "ssgkkiixxcnnnbbrryyoolwwzzaaus", "dsqjccaavxzzmmwhhnffuuutttggllppibbs", "xeeecccskkkugggbjiiiaymnfffwwtttzzzzvrrro", "ippypyydddvzlqqqeeewbbcffjg", "jjjjjketiiippppdwwummmmsanbllfggcrrrovvv", "izveyrrroiqqgwtajn", "mmlllllkvvvvxxfhhhhmzqpppggrniiuoooeeey", "nukkawvvvzzxxfmyggneoophqqqbbbsssiitd", "zdpnyybcuuuujjlvvtksshhfmmg", "kaanulllwebgsyyyftddhhvvvpppzzmmjjj", "wfmssattvvuuhhhgnnlli", "qqquusssshhhvvvtioeeggbbrqrrraaadffffxxcjzzppmkkkk", "tbbhhxxxxccfffrgggvvkkkeuuuussssommmyyyqqq", "uer"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"gjjjeeellllllxttthqqqvdddbccppooosssskk", "sssllqqqqqrrrrrxxxikkkvvggggdddwaaaayyyyycccjj", "ahwvjppdmooc", "eecaaooohhiiivvvvrrrrffffxxssdbb", "gfrgjzu", "ktiispvfgrr", "ggxxuuoomzzzfgpttjjjkkqqhaa", "gapmejj", "qqwwwiiiiiiihhppffffxaannyyzkkdddluccc", "wwwwkrrddzzxxmmahyyvvssppccnjuoo", "hhcccnneidtffffkwwbm", "eednngghhpooavffffttttmmmbbbbbxxxjjyyyyy", "nnnnnbbbbsssfffqaagggccyyyyyymzolikkktthhhhuuu", "ntmmrrrullppxxxxyyygggdddeeessssswwwwzzzaaa", "bbaaacccccqqqfnnnnnnwppppoodttteeeggggzyrrr", "yyypp", "aaammyjiiwwwhfgddznscqa", "pgggbzklltttwwccyyjj", "jffffatiiiiiwwllmmmuuuuddpeqqsssxx", "vvdddpppffsrrzzzzzzwwwkkkkhhhhxxxxxtttloouummbbbb", "mra", "zrsgki", "hyyyyffkummmmlllllllbbbbwwvvjjciiiiaazzxxxxpppp", "rouzzccbpppxxqqdnawi", "oonniuxxttapojjqbbvvvvvmm", "ddbbeeh", "b", "zzmxxfwwrqnnc", "hemmdgttjjj", "eegiirrkkkkkhhttbzzzffssjaaxxnqqcc", "kqqqqxxxbbbbpppgggggtttttnnncciiirrrmmwwwaaeuv", "zzhhqqriiiwwwwjjjsmmggyyoouunnnnle", "yk", "fqchsuiiwwwzzxlq", "fbbxxggkkqquuvvfvenlllddwwmmmms", "vdddzhcarroooopppsbqm", "llnujam", "oodddddddbbbjgcccyfrrrrizzzqqxx", "jj", "vxpppbnqqrkkyffjjitoaaggg", "gj", "wchhhhhnqrrrrrkkdduaaavsjyyyzzoob", "sssssmmmiidddddywtfrgggoopppqqqqqqzzkkknnnn", "jjcclllzzmmmmmhppoooosssssbbbbbbvvgggkkxxxxwwwedd", "qqjjlffbaaeekkssoovvnpyyyhxxxx", "yymxgthsjjjppw", "sssssiiggkkllwnnaxddhhhyyzzfbmmmjjs", "rwllsear", "hbss", "tttnnxxxxxszzoojjgggccrvvvvvffffeeeppqqbbbbhhhhd"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"pjjcwwwlqokkj", "ttpsrrojyqfffmccd", "gggslllaxxqqqqqwwiiirvvkkkkkkmmmmmmoottdddddddhccj", "s", "hnnxvtckkqqff", "iynalvbhhjjr", "zzzdppggkxxxscjjjjryybbbbaaaqllhhhhhhhww", "lllllllfffwwwwwwyhhuuttttrqqkiiinnnoeeemmadx", "kjeeessshhyyytxxdmmzzzzllwoc", "uqqpffyyivgghjrrwwmuuq", "jyxxxxaaattmdrrppwkffihhq", "iiiiffxllsswhtttrrrzzzmvci", "ttttffpbvxxxxlllleeeekrmmmczsssoouuuuuu", "czbdc", "jffnnsssdkkggjttrvvzzzzwwoo", "vcjjgvhyetf", "rpdllywkvb", "llgkrwwwoouvmefzz", "cdddkyqqqqnlxzsvvj", "ccazzbbffffrrrrrrhhhhtteeeexxxxllnnyyyyypwjjjkkk", "vrrdppqqqqwwweyyyiiis", "ddvnvnnnwaaaaageeeeeefrrxxiiiyyyzzzzuumqqqssss", "yyyyoooppucxxnnhhqqqbwwwwwwwltttdddmzzzziii", "vvvyyyttjiiiccrrrfwwwwhhhhlmeeddggsoov", "eeekiiioooccczzzxxuuesssbbjjjjvvvhgggdnnn", "lllnssccmmmoobbwwwpyyyjjjeekkk", "gggzffhnnnxdlmoorrrcbu", "lvatptooffzzkkkyyujeerrrbbhhh", "xzzzaddmmmkkiiccylwww", "gppppooooobblhhqqqqqssvvvvvcckkkkkkmmmmdznnyyyyyy", "tvkjjixxxyyygnmmmmbf", "jnevuwpkm", "nncgfiiiivvaaaattkuddhhrrrrrrooooossm", "jccmvvvzzzppbbbniiittqhoorreess", "cfppyyyyyhhhhmttollqvvveeeeeeeaai", "mmmppppmtttwwrrrxxxxdahheeeffuuuiill", "tfrrs", "xxuuuwwhhsstqqqrrrmmm", "tttqvbbbbbjjjjggyyiiiimcosssxxxxt", "vvvkfyyydmmcrrrsxxbgg", "ebbrwwqq", "llleeezzzbbboooogggttmmrrrrjjvvuuaassiii", "veeyykkhsiqqfr", "mmbkkkiulvvnwh", "pxxcarq", "rrxiiiidmclffawwuubzzzhheeoo", "baabeoooddiissllllmgrrrrxxxwwww", "xkkkkkooossccjjjwwwnqqbblhypp", "uwhvyde", "ttsxutqofr"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"aajjsuxxddblehhooccqqqf", "hbejjjaassggggchccckkkddrrzoooo", "oooeemmmhkkddddxxuutttttwllppppffjjjj", "whhhhhffajjjjjppvvlllkkkiiid", "mmwwlllbbjjjjjjrrrhhhfffmiiiiyyzzzzzpoooooccddeee", "twnnmtxcff", "uuvsmqffffuddekwwwbb", "iippaanme", "zzeeeelllrrcuuuppttttttyiiiihhffffd", "hbly", "u", "rrrccjjjjnxxxxmdzzzffllqqyyggeee", "llwwwwkkkjjjjjnaaarrrhhffyyppbbbbmmqqtd", "ooonnuhqayygb", "fllllrmmkkggguuccciioooopppjjjl", "yyhx", "nnnnssuuiiiizzpplhhrrrjjjxggg", "rbbbnioogrkkjjjxtt", "bccccjjummqzzzzhhsssbnnnnniiiiiifffroooo", "xnngsqq", "eeeaauutttonyiiiiiwwwpsssmmmm", "mfttjooukkimwwbbbhhvnn", "gggxmmmonnnvuayrjwqq", "ceogjbbc", "ccccyyyyawwwwwiiijjjjjjkllllpppqqqoorrrruuuuhttt", "ttttjjjkkkhfffflllmmmyyyyxqqiiwwwwzzaauuu", "dkktppammhhzeudi", "vljmqf", "hmmccccbbeeeeeknnwwwuuuyyysllllqrraaah", "ppggwm", "lnhvxxw", "wwbxgcruf", "whaaaaxxxxxiiceeefftttqqqqqqqgggvvvssrrd", "wuueehjiiikvppnmgggra", "eeeeebbbbbbbttggszzcxxxxnffflvvv", "skgghpezxn", "yrrxxuucdddlssiivvmooyb", "sxxa", "mihyggcccllljeerraaaobzzxxx", "zzaacvjkfftd", "aajwwtrom", "fffbbethhwwwllxxnnojjkkkkssaagg", "pqqqoyybbwwsmmrhhhvvvvvxxxggguuu", "ffffqqqzzzpppllbbbbeeevvvdddddduuuuuuirrswwggmm", "llmmmbbtttttavvvzzzziiwwqqqqkkoognnnnyyyyjjjj", "kqssxbljjogggvk", "mmmmbnnppphhhyzzzzuuuuukklllttddva", "booocyigggdddhsmaaqq", "gjiikrrqqwhhettaab", "aaazzzttdddbmmhkkff"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"kgtdiuuoossehbjjj", "rrrrrrghhnnllkiiiicccccddyyjzzxxxxuuuvv", "llojjyffmptggxxbbbbaa", "bxd", "zzzvuuuuukaaaciiiibqnnfffhhhhxxxxddoosssss", "llllyyyqqqqtttgggouuuunnkkkwwwmmmmddddpppphxl", "ttwwnnwnnnxxiiiiaaarrrmyybhheeeeooolt", "llkkuuurrrmmmjjjjnaayyyiivddddoooob", "hhhtpppyyvvzzlluuuuujjjxxxmmmbbwwwwssskkkkc", "ozarllljjsbk", "pfttzzdkkkyyiuupehhnngggooooool", "hhhhddffxabbbbccccrrrvvikkknnnnnessszzz", "ogjjjjjhhnnnvvrrrdqqsssswwbbbbllllly", "zzzjjjvnwlluurkkpthhhhhqqfff", "uugwxxxxyyyiiiaaqqubhhheejjoddssssnnn", "p", "vvoofddddugxxxxheeeejjjplll", "fqwwyyyyvvvzzzmfeettrrrrnjjbbb", "ajjpkkchhbbmmmllvvrrua", "jjjjppuuudrrmnnqqqtyyyykkkkbbej", "ebbvgaqqyi", "hoeetttsssmzza", "rrrggppppddddmmmyyyyvvvsnaaaaaakkkkhh", "ppzzzzzzzrrrrrhnngggffxxssdddddmvvvvccbaaat", "ggffffpppppwwwwxxuuuhhhhdorrllttttjjjjjmbbbbby", "qqqqqihhavvvllllrrrrryyyyoooccbbuuuuuuuwwwmmssss", "wznhhfij", "kkrrrrrmmeggggdddtyyyybbbiiiicccqxxnn", "tteelvwwwwyyyynqqqmmccxxxrrrro", "nviqqrdpp", "xsdaajjjuuippzzzzzhhhhhffkkkkkknnrrttw", "iiaiaaxpppfffhgeeeennnnrrrrssssooojjjjjllllyyy", "kkkyyyyyymmdddccoooouuuuhhllllrggfffjjnpp", "xxuuhhhhhllldkkkkynxnnqqqqggvvmfffwsaaa", "ggdvj", "bbbbyyyzccvllhooxxxkbkwwwwwaaaiiijjjppdd", "hupppbddmccclqzoooe", "xiitngy", "ohhffddoqqxxrv", "cccaaaawwssssvvvvviiipppppttyloooxrrdddddc", "rrrrrnnnsstttttthhhhlrxxwwdddddvqqkjbbzaaa", "xxxxxxuuvyyyddddddpprrroooooooooannnnnnnczmq", "ejiiyyttcc", "ffeppttyqqsrrzzmdv", "mhbqcvd", "ek", "yyykkkkklaaaeejjjgggggggzztttttwwwwnnnnnnppuuu", "ddnptwbxyyhhhem", "yeeiiammjoozkde", "nnssstttgggggghaaaacccuuuxeelllqzzzzoooopppn"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> words = {"tttttkkkkkaaaaapppdddbbuuucccccvvvmmmmmmmoooxxxx", "wlll", "aajjxxglwwbfffhhhzzea", "ddddqqqqmmkeeeezzzoogggwwllaaahd", "xxnnnnooooooooffhhhhhhhppppemmccccckkkkkqqqqyyyydd", "ijj", "jpta", "bbrgsyw", "jwpprffdmuuaan", "ytpq", "nnnnacccwwwrmmssh", "axxqttttgrffsssssssiiuuuuuab", "nnnncppphhhkttqqqqqqqliiiggggggggjjjeeee", "mmmmhfbqnnnjjaaddepv", "lllvvnnqqxiiuuujoozrr", "hhhhhhhffffffqqjjjzzzzkssssrvggpppppplllxxxxx", "xxbocyf", "vvccussbjziiohhhq", "mppibbbblhxx", "bbbf", "xqqsocck", "kkmmxvv", "owppvccccfssqhhhhzzzirow", "xxxbbbbtngddzmkl", "jjjjjynnuuuuuusssrrrrwwwwaaahhhooiiiiik", "aaaaammmmooossgttttqqqqwbbzk", "cccooooooffffuuuubbbqqttttddddgggggjjjjwwyyyyxx", "axxlliiyymmmmuubaq", "iq", "unnnqowwwyllhikk", "riimmlssqnnneeeeuhhhcf", "ppggyyyrrsookkkkuueeee", "ahfggqnnh", "awk", "qpbjjjttsssxuy", "vvmdddnnnssssjjvbbrrrrggoooqqc", "ttrraaayynw", "eeeeobbbhhquuupgggggcjjssss", "ikexfwlsahhiin", "hcccuwwwwwwwwwkkkzzzzgheeeqqqooooyyyyaaaadddd", "vyxxjuuffftk", "gjjjjmmmmdddddddyyyccccxxxzzzfooviiiiiiiiiuuuggggj", "kkkttgggwwphqqx", "vhhwwwxxxsssssnkkkruuucccmmpve", "rrmdyyyebttwwooxv", "eggfddytttllzab", "jjjjjjbvvvvmyiiizzzzzssssshhttxxxxxxkkkkkkkllllll", "jjjvvvllllllmmkkppppzuuttttccwwsi", "hhnywxjjlllttddddzzzzee", "ngf"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> words = {"ddjmmmqekaaaa", "tttttttxxxxxcccooorfyyyyyyjjgggvvnnnnmmmmmmzz", "uzwwwkd", "izwa", "fbbldcccpppoohhhtgsssnnnzz", "zzzzzzzzccctthhhhlvvvnfqiiieeeppppppp", "oooooqqqqyyyyyytttttwwwsiiinkkkkhhhrrrrrcccccaaaa", "cccubbbyyyyyyooledjkhhh", "eooooooffffffyyygggpppppkkkiisssttttttwwwwwcccll", "nnneeeiqqqqlmmmmmmmmmmoouuuuubbbkkkkkftttttzzz", "hhwwwqqqqrddcccgggnnyyyyl", "sppccifffzztb", "aazzhhhhhhxxxxggggvvvvtjbuuuiccc", "rrnnyypvveezzsssshhhhiiiiittaa", "aaammppzfffffvvvuuccc", "pppiiiigigggggtttttyyyyyyyffzzzzzzqqhhuucccxxx", "zzzhhbeeaqqqqzoodddwwmmmmif", "fsseevvvpyqmuu", "chqiooozdduummn", "mmtjjjcpooniggggyyy", "jjjxxxsiiiiggj", "jjhkonlllzzzmqqyyddff", "zggkkkfffffoaahhhhhnnnnxxxxxxxxwwwqqqqbbbzzzg", "ssrrrrhmmmmmpxxjjjkkktttttizzzyyyyyeeeeee", "fiiiijjjjlllszzzgggqqqqooupppppttnnffi", "wwllddddttttbbkkuuuhmmsseezz", "iiibbbbbbbbbwwpppvvvvvvzzutttnnls", "hhkrkrjjjeewwwwiiltaaounn", "eeennwssssslmggp", "nnnnnrzzzzsssaaajjjggggggliiiiihhyyyyyyyyeqqqq", "zzznnnnnittccqqqqqddddddmmaaabbwwwwwk", "cvcgbeemmmu", "fffffffqqqkkxxxxxcccmmfmpppgggoollrrrrrhhhhh", "ttuuhhhreeeffxxxxzzvgccd", "djjjjwqqqupdhvvinssffy", "jsjsssyyyyeezzcppuuuuhqmmmnn", "ggffcutkkkkpoooooeeelqqqqxxx", "hhhcccccckkiiiaaaapppooooxxxxffffftttteeessuuh", "eeeeeoooogggaaaartttffnnlllbbqqqzzze", "jsssssuuuoooolllvjeeeefffppnnnqqqqq", "jcyyzzzvkkllluuuuuqqqtttaaojc", "jhdxxxvsnbblg", "xwwttfffddooooooossivvvvvzzzzzrrrplllllxw", "hhhzpppuubbwwccccccckaaaaqqqxxxlllee", "iiioooooxddqqqwwssnfyymmmmrrrr", "lllllrrffddddccccczjjjnnwwussbbbb", "glw", "uummffnndccccccewwwwoovv", "z", "bbbbirrrsyyyzjjjjmmmaaaaaooff"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> words = {"ccazzzzbb", "code", "aabbbccb", "topcoder"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> words = {"ababababab"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> words = {"aabbaabbaabbaabb"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> words = {"abc"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> words = {"ccazzzzbb", "code", "aabbbccb", "topcoder", "abccccccccccccdeffffffffffffffffffffggggggggggggg", "abbbbbbbbbcccccccccccccdddddddd", "cccccccccceeeeeeeeeeffffffffaaaaazzzz", "fffffffffeeeeeeeeeeeewwwwwwwwasdf", "fdsaerwrwerew", "affffffffssssssssssssdddddddd"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> words = {"aaa"};
    GroupedWordChecker* pObj = new GroupedWordChecker();
    clock_t start = clock();
    int result = pObj->howMany(words);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22735928&rd=13694&pm=10295
********************************************************************************
#include <iostream> 
#include <vector> 
#include <string> 
 
using namespace std; 
 
class GroupedWordChecker{ 
public: 
  int howMany(vector <string> words) 
  { 
    int len=words.size(); 
    int i,j,k; 
    char c; 
    int ans=0; 
    for(i=0;i<len;i++) 
    { 
      int s=words[i].size(); 
      for(j=0;j<s;j++) 
      { 
        k=j; 
        c=(words[i])[k]; 
        while(c==(words[i])[++k]); 
        for(++k;k<s;k++) 
          if(c==(words[i])[k]) 
            break; 
        if(k<s) 
          break; 
      } 
      if(j==s) 
        ans++; 
    } 
    return ans; 
  } 
};

********************************************************************************
*******************************************************************************/
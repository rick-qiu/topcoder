/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2002
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

class WordForm {
public:
    string getSequence(string word);
};

string WordForm::getSequence(string word) {
    string ret;
    return ret;
}


int test0() {
    string word = "WHEREABOUTS";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVC";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string word = "yoghurt";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVC";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string word = "YipPy";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCV";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string word = "AyYyEYye";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCV";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string word = "y";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string word = "YggggggggggggggggggggggGGgggGGggg";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string word = "aeiouaoeuaoeuoauoeuoEOAuouOAEuoEUOAUEOUAoEUO";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string word = "ayya";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCV";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string word = "ayYya";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCV";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string word = "dyyyZYUYgzYY";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string word = "oAuwAUOtAIfA";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCV";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string word = "ObyNKiboYEXsYYAyAelCgoTljImYnYuhkPyRCOj";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCVCVCVCVCVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string word = "yyyhYYYUYYYYFyYuYyYIYYCycyyYaYyGYyTeYpaYbY";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string word = "YYIyYiYAyeyAYyEyayoUYYFyYyyYyYyYyYY";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string word = "yAqSjuZCQuNPYmXTIiyORwyYoyupliOUAaiYAYi";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string word = "tGPtHmqRUVmZyYnNRvWXZjhjyyrFFfoPTpTyQcZtABazQYZnqY";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string word = "uOOOY";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VC";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string word = "YEyyIyyyUyYAYYyuyEyeyYuyYYyi";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string word = "mvIiOJanymuofPIpypkXBojhyIYyoobanfEP";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string word = "yOUPnOUuo";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCV";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string word = "oidOOvoiJUoAIOPEaooIoEuQougaaauEoSeoEeeIoIZtEYaYum";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCVCVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string word = "AaAeEiqYOUUYUjUi";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCV";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string word = "YYYYbYyYYYyaAyay";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string word = "YYYYYYyyYYyyyy";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string word = "TQZnEJhWYYfpeaYikgCjRhUPkbXytyzVyHAZPuo";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string word = "eUeIYOYEsiYyeiI";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string word = "el";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VC";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string word = "U";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string word = "lsYwR";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVC";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string word = "YgIwHUT";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVC";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string word = "IO";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string word = "yYnyXuYUhEIyPRR";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string word = "eaaouyieUyIIUOYiUao";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCV";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string word = "eyAgOYeAgiyYyEQiAqUOIyUxCEUUOuyY";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string word = "seyYIyEYyiYoYyYyHYyj";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string word = "xMDLcmmKRNOlJHZLfwNtRdVcprilGcQghwXZsgRKMiuC";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVC";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string word = "YgIoYy";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCV";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string word = "iAIUOEeyIOaYuyOaUaaYioYaEA";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string word = "yYeyuYEUUYYYoYUyYYyeAyOYOiAOyYeYIoYoyx";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string word = "IxA";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCV";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string word = "uAYaI";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCV";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string word = "tyYyYYyrYnyYEoEyIAYYYY";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string word = "AyfyYAOoYYaYazuCEYuyyOyyuoYIyyayyYNy";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCVCVCVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string word = "uouEyXOfKodaIEyuAY";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string word = "yhMyyYYYYYyyfYYYyyYyyYYYYdpypYyYYyYMyyYyyYyyyyyYYq";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string word = "aYYYyQYQcUUiDHIjjyHoxaYyyOY";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCVCVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string word = "MYYnoOYYaOSDyuLeUIonaEEuEuAN";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string word = "yIYAeYEYDyaYiEuayyyyYBuYeYUkYAYeYYuyyy";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string word = "YuvYyYYYDayuAnYyOYOOIUNTyIyYYYiIyYSyyaYYpyEyyyiYYY";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string word = "EAeokCaEPYIuOieeoOYfaiiYIyaea";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string word = "NantaYuXByYjxRpishgYYosqEgoYOZoIOEEeMiuqaDIo";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string word = "UYyYyYYoYzyeYJzyYzYYyYeYwYyYy";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCVCVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string word = "yEqywf";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVC";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string word = "uauOO";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string word = "YYoLOsuyeRc";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string word = "yoeeUiYAaYyyuIIEEuyYAYOoYoeouOuOYIYaOyo";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string word = "ASyxyyeoJyyYWyYNYYeYYyUyYeyYueyyyyYYyYyypyYYYO";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string word = "TyHyFYkcYaLPyYmeZGyidyDyUYYfcoNyYjyOzOYYYyF";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string word = "BYxfGYNvySYYyltByyqrPYdlx";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVC";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string word = "YYYYYyyyyyYYYYYyyyyyYYYYYyyyyyYYYYYyyyyyYYYYYyyyyy";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string word = "yC";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string word = "yC";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string word = "a";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string word = "aaaaaaaaaaaa";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string word = "yyo";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CV";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string word = "dYeYddYeeyYYYyyYaoopopo";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string word = "y";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string word = "aAaA";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string word = "toy";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVC";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string word = "RRRRRRRR";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string word = "YipPy";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCV";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string word = "YeeeYyYeeYeyEYghihiEeeIhYyy";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string word = "aeiou";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string word = "AyYyEYye";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCV";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string word = "ICE";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCV";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string word = "AYYYYYYYYYYYYYYYYYYYY";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VCVCVCVCVCVCVCVCVCVCV";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string word = "AY";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "VC";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string word = "yyyyyyy";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCVCVC";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string word = "BEBA";
    WordForm* pObj = new WordForm();
    clock_t start = clock();
    string result = pObj->getSequence(word);
    clock_t end = clock();
    delete pObj;
    string expected = "CVCV";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4670&pm=2002
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
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
string vowels = "AEIOU"; 
 
class WordForm { 
public: 
string getSequence(string word) { 
  int i, j, k, x, y, z, n; 
  string ret; 
  char ch; 
 
  for( i = 0; i < word.size(); i++ ) { 
    word[i] = toupper(word[i]); 
    if( vowels.find(word[i]) != -1 ) { 
      ch = 'V'; 
    } else if( word[i] == 'Y' && ret.size() && ret[ret.size()-1] == 'C' ) { 
      ch = 'V'; 
    } else { 
      ch = 'C'; 
    } 
    if( !ret.size() || ret[ret.size()-1] != ch ) ret += ch; 
  } 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/
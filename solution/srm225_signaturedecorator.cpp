/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3077
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

class SignatureDecorator {
public:
    string applyDecoration(string name, vector<string> commands, vector<string> decorations);
};

string SignatureDecorator::applyDecoration(string name, vector<string> commands, vector<string> decorations) {
    string ret;
    return ret;
}


int test0() {
    string name = "Bob";
    vector<string> commands = {"surround", "append", "prepend"};
    vector<string> decorations = {"-=", "(", ")"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = ")-=Bob=-(";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string name = "Super_Man_01";
    vector<string> commands = {};
    vector<string> decorations = {};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "Super_Man_01";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string name = "4BcD3FgHIjklMN0pqrS7uVWxYZ_";
    vector<string> commands = {"append", "prepend", "surround"};
    vector<string> decorations = {"`{[(", ")]}'", ",.;<>?:|-=_+!@#$%^&*~"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = ",.;<>?:|-=_+!@#$%^&*~)]}'4BcD3FgHIjklMN0pqrS7uVWxYZ_`{[(~*&^%$#@!+_=-|:?><;.,";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string name = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    vector<string> commands = {"prepend", "prepend"};
    vector<string> decorations = {"-+=~!@", "#($*(@"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "#($*(@-+=~!@ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string name = "yz0123456789_";
    vector<string> commands = {"append", "append", "surround"};
    vector<string> decorations = {"[[[]][]]", "{}":;'\|", "<>,./?+=-_*&^%$#@!~`"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "<>,./?+=-_*&^%$#@!~`yz0123456789_[[[]][]]{}":;'\|`~!@#$%^&*_-=+?/.,><";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string name = "RacEcaR";
    vector<string> commands = {"surround"};
    vector<string> decorations = {"([{/"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "([{/RacEcaR/{[(";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string name = "DLKjdlkdjLJf09_09_0";
    vector<string> commands = {"surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround"};
    vector<string> decorations = {".,_", "_(*", "!)_@", "#$(*", "@)(*", "_+_+", "=+=", "|", "\/\", "{}"", ")(&(*", "!@~", "#$^&", "&%^", "{}[]", "':;", "?><", ",./", ",.,.", ")_", "-_-", "^_-", "^#^", "!_!", "+=+", "}|\";
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "*)(//\\,>.<...;,.>"""[}|!@#$#)(#)(*(*#!_+#*(,.)(:]['[];-=[!+_)$(*@)(#*$%)(*,.<>?/;:'}|\+=+!_!^#^^_--_-)_,.,.,./?><':;{}[]&%^#$^&!@~)(&(*{}"\/\|=+=_+_+@)(*#$(*!)_@_(*.,_DLKjdlkdjLJf09_09_0_,.*(_@_)!*($#*()@+_+_=+=|\/\"}{*(&()~@!&^$#^%&][}{;:'<>?/.,.,.,_)-_--_^^#^!_!+=+\|}':;/?><.,*()%$*#()@*($)_+![=-;]['[]:().,(*#+_!#*(*()#()#$#@!|}[""">.,;...<.>,\\//()*";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string name = "abcdefghiJkLmNopqRsTuVWXyZ1234567890_ABCDEFGHIjKlM";
    vector<string> commands = {"surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround", "surround"};
    vector<string> decorations = {"./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]", "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]./;'<>?:"\|[]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{]abcdefghiJkLmNopqRsTuVWXyZ1234567890_ABCDEFGHIjKlM]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.]{}-=_+!@#$%^&*()~``~)(*&^%$#@!+_=-}{][|\":?><';/.";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string name = "0xC4";
    vector<string> commands = {"append", "prepend"};
    vector<string> decorations = {"~~~<<<", "<~~~"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "<~~~0xC4~~~<<<";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string name = "_";
    vector<string> commands = {"surround", "prepend", "append"};
    vector<string> decorations = {"_!-|", "[", "]"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "[_!-|_|-!_]";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string name = "o";
    vector<string> commands = {"prepend", "append", "prepend", "surround"};
    vector<string> decorations = {"-{", ">", "|:", "="};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "=|:-{o>=";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string name = "V";
    vector<string> commands = {"surround", "append"};
    vector<string> decorations = {":", "-)"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = ":V:-)";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string name = "Nevermore";
    vector<string> commands = {"surround", "prepend"};
    vector<string> decorations = {"/", "$_=~"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "$_=~/Nevermore/";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string name = "Speedy_Gonzales100";
    vector<string> commands = {"surround", "prepend", "prepend", "prepend"};
    vector<string> decorations = {"_|", "===", "---", "~~~"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "~~~---===_|Speedy_Gonzales100|_";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string name = "_";
    vector<string> commands = {"surround", "append", "surround", "prepend", "prepend", "append", "append", "surround", "surround"};
    vector<string> decorations = {"__", "___", "____", "_____", "______", "_______", "________", "_________", "__________"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "________________________________________________________________________________";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string name = "__ATIVITA__";
    vector<string> commands = {"surround", "append", "prepend", "surround", "prepend", "append"};
    vector<string> decorations = {"._", "/\", "/\", "_", "(", ")"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "(_/\.___ATIVITA___./\_)";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string name = "Bob";
    vector<string> commands = {"surround", "append", "prepend"};
    vector<string> decorations = {"-=", "(", ")"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = ")-=Bob=-(";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string name = "RacEcaR";
    vector<string> commands = {"surround"};
    vector<string> decorations = {"([{/"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "([{/RacEcaR/{[(";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string name = "Bob";
    vector<string> commands = {"surround"};
    vector<string> decorations = {"-)"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "-)Bob)-";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string name = "Bob";
    vector<string> commands = {"surround", "append", "prepend"};
    vector<string> decorations = {"----==", "(", ")"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = ")----==Bob==----(";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string name = "joe";
    vector<string> commands = {"surround"};
    vector<string> decorations = {"-=-=-*"};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = "-=-=-*joe*-=-=-";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string name = "4BcD3FgHIjklMN0pqrS7uVWxYZ_";
    vector<string> commands = {"append", "prepend", "surround", "append"};
    vector<string> decorations = {"`{[(", ")]}'", ",.;<>?:|-=_+!@#$%^&*~", "[[[["};
    SignatureDecorator* pObj = new SignatureDecorator();
    clock_t start = clock();
    string result = pObj->applyDecoration(name, commands, decorations);
    clock_t end = clock();
    delete pObj;
    string expected = ",.;<>?:|-=_+!@#$%^&*~)]}'4BcD3FgHIjklMN0pqrS7uVWxYZ_`{[(~*&^%$#@!+_=-|:?><;.,[[[[";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11879970&rd=5871&pm=3077
********************************************************************************
#include <string> 
#include <vector> 
#include <iostream> 
#include <algorithm> 
#include <sstream> 
 
#include <cstdio> 
#include <cstdlib> 
 
#include <cmath> 
 
#include <functional> 
#include <numeric> 
#include <cctype> 
#include <climits> 
 
#include <queue> 
#include <map> 
 
using namespace std; 
 
typedef vector<string> VS; 
#define ALL(S) (S).begin(), (S).end() 
#define REV(S) reverse(ALL(S)) 
 
#define si size() 
 
#define fi(i,S) for (int i=0;i<(S);i++) 
#define fd(i,S) for (int i=(S)-1;i>=0;i--) 
#define ftype(i,S,T) for (typeof(T) i = (S); i != (T); i++) 
#define foreach(i,S) ftype(i,(S).begin(),(S).end()) 
 
class SignatureDecorator { 
  public: 
  string applyDecoration(string name, vector <string> commands, vector <string> decorations)  
  { 
    string ret=name; 
    fi(i,commands.si) 
    { 
      if(commands[i]=="surround") 
      { 
        string tmp=decorations[i]; 
        ret=tmp+ret; 
        REV(tmp); 
        ret=ret+tmp; 
      } 
      else if(commands[i]=="append") 
        ret=ret+decorations[i]; 
      else if (commands[i]=="prepend") 
        ret=decorations[i]+ret; 
    } 
    return ret; 
     
  } 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
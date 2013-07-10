/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3092
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

class ParameterSubstitution {
public:
    string processParams(string code, vector<string> params);
};

string ParameterSubstitution::processParams(string code, vector<string> params) {
    string ret;
    return ret;
}


int test0() {
    string code = "if ($1 == $2) $3;";
    vector<string> params = {"12", "12", "doWhatIWant()"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "if (12 == 12) doWhatIWant();";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string code = "$3+$1*$2-$7=$10";
    vector<string> params = {"myvar", "490jri", "e09jd9", "dlkjfoiej"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "e09jd9+myvar*490jri-$7=myvar0";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string code = "12342123$13231232$2123211242$a$dlkj$";
    vector<string> params = {"$2", "$1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "12342123$23231232$1123211242$a$dlkj$";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string code = "while($_=~/([0-9a-fA-F]{2})/){print hex($1).'n';}";
    vector<string> params = {""7F""};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "while($_=~/([0-9a-fA-F]{2})/){print hex("7F").'n';}";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string code = "{[(+.*-,/\:;<=>?@)]}_`~|$$1";
    vector<string> params = {"1{[(+.*-,/\:;<=>?@)]}_`~|"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "{[(+.*-,/\:;<=>?@)]}_`~|$1{[(+.*-,/\:;<=>?@)]}_`~|";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string code = "$01";
    vector<string> params = {"abc"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$01";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string code = "$$$$$$$$$$1";
    vector<string> params = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "11"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$$$$$$$$$2";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string code = "$1";
    vector<string> params = {};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$1";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string code = "$1";
    vector<string> params = {""};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string code = "while($5){$1$2@($_=~$3/g).' '}$4";
    vector<string> params = {"print ", "2**", "/[DFLT]", ";", "<>"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "while(<>){print 2**@($_=~/[DFLT]/g).' '};";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string code = "$1$2$3$1$2$3$$1$2$3$5$4";
    vector<string> params = {"adc", "3098(", "***)", "!!@@##$$%%^^", "~!@)($*)(*%"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "adc3098(***)adc3098(***)$adc3098(***)~!@)($*)(*%!!@@##$$%%^^";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string code = "$1$2";
    vector<string> params = {"123", "456"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "123456";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string code = "$3$6$12$1$5$4$1$11$7$14$8$9$17$8$10$11$13$15$2$16";
    vector<string> params = {"Main", "Length", "using ", "void ", "{static ", "System;", "{for", "Console.", "WriteLine", ".ReadLine", "()", "class ", "Split", "(int i=0; i<10;i++)", "('D','F','L','T').", ");}}", "(1<<"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "using System;class Main{static void Main(){for(int i=0; i<10;i++)Console.WriteLine(1<<Console..ReadLine()Split('D','F','L','T').Length);}}";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string code = "$2$1$11$6$9$12$8$13$1$15$6$16$4=!!$7($10$14$3p$4$5";
    vector<string> params = {"char ", "main(){", "cout<<", "<<", "endl", "while(", "strchr", "int", "cin>>", ""TDLF"", "i[21];", "i){", " p=1;", ",*(n++));", "*n=i;", "*n)p"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "main(){char i[21];while(cin>>i){int p=1;char *n=i;while(*n)p<<=!!strchr("TDLF",*(n++));cout<<p<<endl";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string code = "{[(+.*-,/\:;<=>?@)]}_`~|$$1";
    vector<string> params = {"1{[(+.*-,/\:;<=>?@)]}_`~|"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "{[(+.*-,/\:;<=>?@)]}_`~|$1{[(+.*-,/\:;<=>?@)]}_`~|";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string code = "12342123$13231232$2123211242$a$dlkj$";
    vector<string> params = {"$2", "$1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "12342123$23231232$1123211242$a$dlkj$";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string code = "$3+$1*$2-$7=$10";
    vector<string> params = {"myvar", "490jri", "e09jd9", "dlkjfoiej", "rt", "rt", "rt", "rt", "rt", "rt", "rt", "rt", "rt"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "e09jd9+myvar*490jri-rt=rt";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string code = "$10$1";
    vector<string> params = {"x", " ", " ", " ", " ", " ", " ", " ", " ", "$1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$1x";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string code = "$11$12";
    vector<string> params = {"a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "101", "102"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "101102";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string code = "12342123$13231232$00$21232$$11242$a$dlkj$";
    vector<string> params = {"$2", "$1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "12342123$23231232$00$11232$$21242$a$dlkj$";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string code = "if ($1 == $2) $3;";
    vector<string> params = {" $1", "12", "doWhatIWant()"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "if ( $1 == 12) doWhatIWant();";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string code = "$$2";
    vector<string> params = {"1Eryx was here $1", "1Eryx was here $1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$1Eryx was here $1";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string code = "a$2a";
    vector<string> params = {"aap", "$1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "a$1a";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string code = "$01ww";
    vector<string> params = {"xxxx"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$01ww";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string code = "$01";
    vector<string> params = {"abc"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$01";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string code = "{$12$01[(+.*-,/\\:;<=>?@)]}_`~|$$2";
    vector<string> params = {"XXX", "1{[(+.*-,/\\:;<=>?@)]}_`~|"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "{XXX2$01[(+.*-,/\\:;<=>?@)]}_`~|$1{[(+.*-,/\\:;<=>?@)]}_`~|";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string code = "$10";
    vector<string> params = {"a", "b", "c", "f", "d", "e", "r", "f", "t", "g", "h", "y", "d", "d", "d", "f", "g", "h"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "g";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string code = "$2";
    vector<string> params = {"abc", "def"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "def";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string code = "$";
    vector<string> params = {};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string code = "$0$2$22$11$01$2$2$10";
    vector<string> params = {"a", "b", "c", "", "d", "e", "r", "h", "k", "i"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$0bb2a1$01bbi";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string code = "$1053$2$02$2bitch$40fuckyo code fyocode $20$1$2$3$";
    vector<string> params = {"death", "will", "come", "to", "your", "code", "ha ", " aha", " hah", "yueah bitch", "die bitch", "wha?"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "yueah bitch53will$02willbitchto0fuckyo code fyocode will0deathwillcome$";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string code = "$1234567890123456";
    vector<string> params = {"A"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "A234567890123456";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string code = "$12345678991234";
    vector<string> params = {"a"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "a2345678991234";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string code = "12342123$13231232$$$2123211242$a$dlkj$";
    vector<string> params = {"$2", "$1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "12342123$23231232$$$1123211242$a$dlkj$";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string code = "$01+12";
    vector<string> params = {"x", "r", "z"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$01+12";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string code = "__DOLLAR__";
    vector<string> params = {"a"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "__DOLLAR__";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string code = "$1$2$3";
    vector<string> params = {"$3", "$2", "$1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$3$2$1";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string code = " $11 $1$2 $3$4 $5 + $6 + $7 + $8 + $9 + $10 ";
    vector<string> params = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "oops", "oops2"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = " oops2 AB CD E + F + G + H + I + oops ";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string code = "|$a1|";
    vector<string> params = {"a", "b", "c"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "|$a1|";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string code = "$11";
    vector<string> params = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "k";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string code = "$11$1$";
    vector<string> params = {"$"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$1$$";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string code = "$111111111111111111111111";
    vector<string> params = {"a", "b", "a", "a", "a", "aa", "a", "a", "aaa", "aaa", "aa", "a", "a", "a", ""};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "aa1111111111111111111111";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string code = "$10";
    vector<string> params = {"a", "b", "c", "d", "e", "f", "g", "h", "ab", "cd"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "cd";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string code = "$dlk$102$56$p";
    vector<string> params = {""one"", ""two"", ""three"", ""four"", ""five"", ""six"", ""seven"", ""eight"", ""nine"", ""ten"", ""eleven"", ""twelve""};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$dlk"ten"2"five"6$p";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string code = "($2)";
    vector<string> params = {"nothing()", "$1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "($1)";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string code = "blablabla$1blablabla";
    vector<string> params = {"aaaaaaaaa$1", "kombajnn"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "blablablaaaaaaaaaa$1blablabla";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string code = "$2";
    vector<string> params = {"1", "$1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$1";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string code = "$3+$1*$2-$7=$1";
    vector<string> params = {"myvar", "490jri", "e09jd9", "dlkjfoiej", "rt", "rt", "rt", "rt", "rt", "rt", "rt", "rt", "rt"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "e09jd9+myvar*490jri-rt=myvar";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string code = "$$01$02$1$2$ $$$";
    vector<string> params = {"$02", "33", "10078", "22342"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$$01$02$0233$ $$$";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string code = "$";
    vector<string> params = {"1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string code = "$2347893492783642396854$638947239847238497";
    vector<string> params = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "b347893492783642396854f38947239847238497";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string code = "$1$11$1$9$0$12";
    vector<string> params = {"$1", "$2", "$3", "$4", "$5", "$6", "$7", "$8", "$9", "$A", "$B", "$C"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$1$B$1$9$0$C";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string code = "$9763456789098765434567865434567";
    vector<string> params = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "9763456789098765434567865434567";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string code = "$1$1$1$1$1$1$1$1$1$1$1$1$1$1$1$1$1$1$1$1$1$1$1$1$1";
    vector<string> params = {"01234567890123456789012345678901234567890123456789"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "01234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string code = ""$25"";
    vector<string> params = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = ""15"";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string code = "__d__ $1";
    vector<string> params = {"$2", "$1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "__d__ $2";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string code = "$10";
    vector<string> params = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "l", "m", "n"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "j";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string code = "$1";
    vector<string> params = {"$1$1$1$1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$1$1$1$1";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string code = "$3$2$1";
    vector<string> params = {"Hello", "Hi", "$1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$1HiHello";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string code = "";
    vector<string> params = {};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string code = "$49$50$51";
    vector<string> params = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "xyE1";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string code = "$10$02$3$$$35$03$010$101";
    vector<string> params = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "10$023$$35$03$010101";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string code = "\\\{$$21[(+.*-,$02/\\:;<=>?@)$001]}_`~|$$1\";
    vector<string> params = {"\1{[(+.*-,/\:;<=>?@)]}_`~|\\", "2"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "\\\{$21[(+.*-,$02/\\:;<=>?@)$001]}_`~|$\1{[(+.*-,/\:;<=>?@)]}_`~|\\\";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string code = "$$21";
    vector<string> params = {"z", "1"};
    ParameterSubstitution* pObj = new ParameterSubstitution();
    clock_t start = clock();
    string result = pObj->processParams(code, params);
    clock_t end = clock();
    delete pObj;
    string expected = "$11";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=5871&pm=3092
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
 
class ParameterSubstitution { 
public: 
string processParams(string a, vector <string> b) { 
  int i, j, k, x, y, z, n; 
  string ret; 
 
  for( i = 0; i < a.size(); i++ ) { 
    if( a[i] != '$' || i == a.size()-1 || a[i+1] == '0' ) { 
      ret += a[i]; 
      continue; 
    } 
    x = y = 0; 
    for( j = i+1; j < a.size(); j++ ) { 
      if( !isdigit(a[j]) ) break; 
      y = x*10 + a[j]-'0'; 
      if( y > b.size() ) break; 
      x = y; 
    } 
    if( !x ) { 
      ret += a[i]; 
      continue; 
    } else { 
      i = j-1; 
      ret += b[x-1]; 
    } 
  } 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/
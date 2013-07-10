/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4483
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

class WordCompositionGame {
public:
    string score(vector<string> listA, vector<string> listB, vector<string> listC);
};

string WordCompositionGame::score(vector<string> listA, vector<string> listB, vector<string> listC) {
    string ret;
    return ret;
}


int test0() {
    vector<string> listA = {"cat", "dog", "pig", "mouse"};
    vector<string> listB = {"cat", "pig"};
    vector<string> listC = {"dog", "cat"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "8/3/3";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> listA = {"mouse"};
    vector<string> listB = {"cat", "pig"};
    vector<string> listC = {"dog", "cat"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "3/5/5";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> listA = {"dog", "mouse"};
    vector<string> listB = {"dog", "pig"};
    vector<string> listC = {"dog", "cat"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "4/4/4";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> listA = {"bcdbb", "aaccd", "dacbc", "bcbda", "cdedc", "bbaaa", "aecae"};
    vector<string> listB = {"bcdbb", "ddacb", "aaccd", "adcab", "edbee", "aecae", "bcbda"};
    vector<string> listC = {"dcaab", "aadbe", "bbaaa", "ebeec", "eaecb", "bcbba", "aecae", "adcab", "bcbda"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "14/14/21";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> listA = {"baacd", "aaebe", "dbacc", "aaeca", "aacdd", "eacdb", "eddce", "acabd"};
    vector<string> listB = {"aaebe", "eaeac", "adbda", "bcedc", "eddce", "abcac", "aaabc", "deaab", "acabc", "dccce"};
    vector<string> listC = {"dbdad", "deaab", "aacdd", "aacce", "acabc", "eacdb", "bedba", "aaebe", "abcac", "ccbec"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "19/24/23";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> listA = {"ccaea", "ecece", "badea", "ddbae", "bccdd", "eedae", "cccee"};
    vector<string> listB = {"aeaac", "ecdeb", "eedae", "ddbae", "adadb", "eceda", "cbaba", "badea", "bbcde"};
    vector<string> listC = {"eacbe", "adadb", "aebea", "ecdeb", "eedae", "eceda", "ccaea", "decea", "badea", "bbcab"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "15/19/22";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> listA = {"beccd", "decae", "eedcc", "ccebe", "bcdcd", "ebeeb", "deaeb", "ddbdd"};
    vector<string> listB = {"eceea", "cccdc", "ccebe", "ecaec", "ddbdd", "eaacc", "ecddb", "accdc"};
    vector<string> listC = {"dccba", "beabe", "ecaec", "badbe", "daeaa", "eaacc", "adebc", "cccdc", "dddce", "badbd"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "22/19/27";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> listA = {"eaaec", "dcabb", "eaecd", "aedee", "adbbd", "adbde", "acded", "bbbcb", "acbde"};
    vector<string> listB = {"acded", "bbaaa", "caaab", "ddbca", "ddbea", "bcdda", "adbde", "dadbc", "eecaa", "caeee"};
    vector<string> listC = {"ddbcd", "adbbd", "bbbcb", "acded", "eadda", "ddbca", "abbde", "caeee", "baeab", "eaaec"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "21/25/23";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> listA = {"ebedb", "eeadc", "eadee", "beaac", "abdcd", "dbcda", "cadea"};
    vector<string> listB = {"edebc", "beaac", "aaecd", "cadea", "eeadc", "edddd", "abcab", "daced", "cbabb"};
    vector<string> listC = {"eeadc", "edebc", "beaac", "ecebe", "dcead", "abbdc", "aaecd", "cadea", "aebcc", "caeab"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "15/19/22";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> listA = {"aaceb", "aecad", "beebe", "cebaa", "ededd", "decea", "babbc"};
    vector<string> listB = {"babbc", "aecad", "aaeba", "ededd", "abcea", "ddcdb", "bdadc", "cebaa"};
    vector<string> listC = {"deaae", "aaebe", "abcea", "dcebb", "adaab", "bbbbd", "bbded", "ddcdb", "aadae"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "17/18/25";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> listA = {"eadac", "bddee", "aeabb", "dedcc", "dbabe", "aeccc", "dcaae", "ebaad", "ccada"};
    vector<string> listB = {"cbacb", "dcaae", "ebbac", "aacdd", "bddee", "ccedd", "dceed", "eadeb", "aeabb"};
    vector<string> listC = {"eeaee", "eecbd", "dedcc", "cabcb", "dcaae", "aacdd", "aeabb", "eadcc", "dbdaa"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "21/21/21";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> listA = {"cadbb", "bdaad", "ebadb", "dcaae", "ebecc", "aadbc", "cbead", "bbdbc"};
    vector<string> listB = {"dcebc", "bdedb", "bdeed", "ebccb", "ebecc", "bdbbb", "beecb", "dcaae", "bbcca"};
    vector<string> listC = {"ebadb", "bbdbc", "aadbc", "dcaec", "bdedb", "eceeb", "bdeed", "ecdbd"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "19/23/19";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> listA = {"bdaed", "ecaae", "ccdeb", "aecac", "edccd", "ababc", "dcdbe"};
    vector<string> listB = {"aaadd", "dbcac", "cbcad", "ecdbc", "cbaed", "dbaec", "ecaae", "eeead", "dcdbe"};
    vector<string> listC = {"edcea", "dacaa", "bddbe", "cdcbc", "dbcac", "deced", "abbae", "edecc"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "19/24/23";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> listA = {"iebccgbhfd", "kkecekehbj", "iahkbjjfkh", "gcjhbagjib"};
    vector<string> listB = {"dbkdfedicd", "kkecekehbj", "bbhbbgdgfi", "abikddbdfg", "jfiakchhac", "iebccgbhfd"};
    vector<string> listC = {"kkecekehbj", "jfiakchhac", "iahkbjjfkh", "bbhbbgdgfi", "iebccgbhfd", "abikddbdfg"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "7/11/10";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> listA = {"dhbjhedhkf", "bkbjjfdcci", "hkbjciighf", "eaegeghjhe", "ibkcffafij", "dcjkfbejcg", "hafhjagiie", "agejckjefd"};
    vector<string> listB = {"hkbjciighf", "bkbjjfdcci", "dhbjhedhkf", "kbebghfhbg", "agejckjefd", "eaegeghjhe", "dcjkfbejcg"};
    vector<string> listC = {"bkbjjfdcci", "ibkcffafij", "hafhjagiie", "eceicafhbd", "dcjkfbejcg", "eaegeghjhe", "kbebghfhbg", "agejckjefd"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "12/10/13";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> listA = {"bcghfbfbek", "cbikebigdj", "ibbecgibgk", "iigegjeiff", "ddgaegakdh", "dfbfdkchha", "daifeegbii"};
    vector<string> listB = {"ejdkfbdakh", "iigegjeiff", "hihceedcfg", "daifeegbii", "cbikebigdj", "ddgaegakdh", "ibbecgibgk", "eahkjjjefd", "dfbfdkchha"};
    vector<string> listC = {"bcghfbfbek", "ejdkfbdakh", "daifeegbii", "dfbfdkchha", "cbikebigdj", "ddgaegakdh", "eahkjjjefd"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "10/15/10";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> listA = {"abibikjabk", "fiaicekhdg", "aegcjfhiah", "ikgahddcdh", "fchjaigaki", "gebgfecfib"};
    vector<string> listB = {"abibikjabk", "ggcbbkcghb", "ikgahddcdh", "dciiijjbbf", "fchjaigaki", "bcikkbiead", "fiaicekhdg"};
    vector<string> listC = {"keffkgbaab", "ggcbbkcghb", "bcikkbiead", "abibikjabk", "fiaicekhdg", "fchjaigaki"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "11/12/10";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> listA = {"gidbccfifa", "djfdjfikce", "eagidabcbj", "kjciikbejb", "bcibeckgjh"};
    vector<string> listB = {"dghggchkfa", "gidbccfifa", "hcbcaifkcd", "kjciikbejb", "eagidabcbj"};
    vector<string> listC = {"hcbcaifkcd", "bcibeckgjh", "kjciikbejb", "ggcakedbhf", "dghggchkfa", "iegebdchhj"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "10/9/13";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> listA = {"kcifefaeeg", "ahagffhafb", "ifkbfgckgi", "faeackabad", "fhbhfjidak", "keiaikbgef", "abiffekcfd"};
    vector<string> listB = {"ahagffhafb", "keiaikbgef", "abgbackihc", "acjfdcebfe", "abiffekcfd", "faeackabad", "fhbhfjidak", "dehkjbefkb"};
    vector<string> listC = {"kcifefaeeg", "fhbhfjidak", "abgbackihc", "acjfdcebfe", "ifkbfgckgi"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "13/16/9";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> listA = {"adahicgdcj", "iiadkjihkj", "idfgkkaabd", "ekhiidfgbh", "agakiacbki", "hjehhddagf", "afhbckkegc", "bjaicedijb"};
    vector<string> listB = {"idfgkkaabd", "iiadkjihkj", "hjehhddagf", "fcfijjbejc", "hjjieddeki", "ekhiidfgbh"};
    vector<string> listC = {"idfgkkaabd", "adahicgdcj", "hjehhddagf", "agakiacbki", "ekhiidfgbh", "iiadkjihkj"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "14/10/8";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> listA = {"ifiefjhebd", "begdhjajce", "dgdakdhcea", "gdgeidhecf", "bdbjbcjgab", "eajjkbjaij"};
    vector<string> listB = {"gdgeidhecf", "bdbjbcjgab", "hfjckcijjf", "ifiefjhebd", "dgdakdhcea", "begdhjajce", "bccaebcfdk", "adfdjkjdig"};
    vector<string> listC = {"adfdjkjdig", "eajjkbjaij", "bccaebcfdk", "ifiefjhebd", "dgdakdhcea", "hfjckcijjf", "begdhjajce"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "9/13/11";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> listA = {"cbcfccfgjd", "idgggghchc", "hihgbjkhff", "ccggegdgbc", "hcjfgddccj", "ifibejbbag", "bajkbfkkcf", "cgjjdgjbeg"};
    vector<string> listB = {"addcacebhk", "idgggghchc", "ifibejbbag", "bajkbfkkcf", "dfhifffkij", "ccggegdgbc", "hihgbjkhff"};
    vector<string> listC = {"ifibejbbag", "addcacebhk", "bajkbfkkcf", "dfhifffkij", "hcjfgddccj"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "16/12/8";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> listA = {"dbejjidkgk", "icdikieigk", "ijkidchhgi", "jfaaekjdec", "babkebdibf", "kdeffcgeec", "egbdhhiack"};
    vector<string> listB = {"icdikieigk", "kjhcjjjffg", "dbejjidkgk", "khjbhfebah", "babkebdibf", "ijkidchhgi"};
    vector<string> listC = {"egbdhhiack", "dbejjidkgk", "kdeffcgeec", "kjhcjjjffg", "khjbhfebah", "icdikieigk", "kfjghjbhih"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "13/10/13";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> listA = {"jwctsngdtguigmmwsgeo", "gdxjcvzjrfbwtlgedmdy", "gtrpalrvgmzukdzuoeaj", "sjhucnkvajjsvhiezslh", "mionyycxthwujllzqlhj", "ctaycqanpztjeynperfj", "reycjmndcpdbgwwbntis", "fqrayqgyoamlqvjvwcsr", "bszbbfbywcovqqaqjwfj", "agriunkfdydzhqvtoxaj", "mavzburbmuwdkheooyae", "pfetoqtwqcuwnhbalsrx", "zkvqcmmqmcvaymkbexpt", "egypyvdqcnfbeestukca", "mppduwxodztjmjlgctbl", "mnrhdjkvvkmdmcsgrlwi", "ildhsznbhssobvtxaevf", "kdoyxaxhjsdwljgktgmn", "ldjcedyzzzbyohsyywmg", "lbnirbzsojrpjxprupic", "dqtnedsybrnyjdpviive", "rrblydzdwknqvgnnmofd", "aqhusaxbfaagsnrnyoqj", "bvhucavuncgijsvtvbhl", "xzzmerxynghwljpvmvci", "zhpkxzssfxrzuulhlfhc", "omrypmuicoruoscrmhiy", "broshsprqxcuvrjxrdkk", "vrxrywqzkipikktxxpwk", "swqhmghqqilbgbumecns", "enkrqgvehvaicmozkozv", "bnlakkwqtatdikcjzlqx", "sblcovbtarnnqjgqbzzb", "afhncgpiwxvenrjjukzt", "apkcxyihpcbluhcvcjht", "qdkbwfbedqjviqafurdl", "pxiymzefszpoketjhpci", "oszhjqeyifjqctwdiucp"};
    vector<string> listB = {"teqrruzrbtmjcopcpuqv", "zkvqcmmqmcvaymkbexpt", "rwanuiwpnyjxbawwdtsr", "edhteadtdxcmrbyxlzdp", "dsgjpgfopzagvdctvsfb", "bgdywnpyqqbgjzxyvhsm", "lqeoszwsoqdkcwskrkde", "tzarnxmsoadeimduwjlv", "lxfjzvzyhvyhjsnzjhft", "rfqthtsfkzddvkfqtmhp", "oogosehycnazftypexwq", "bnlakkwqtatdikcjzlqx", "apkcxyihpcbluhcvcjht", "lbnirbzsojrpjxprupic", "jsafstisvnrkvxbaurjs", "xlxxnsuoutjmjgyfcxxx", "fifzdgnrarjqepaxmjng", "aoadgrjwcttdnzqdnrzu", "agriunkfdydzhqvtoxaj", "jtcxioqordrlieriugde", "broshsprqxcuvrjxrdkk", "nzpcrduvdmtotzxcpktt", "ggclopyujkrmbtwxyhkb", "omrypmuicoruoscrmhiy", "bhwlpqbdegtzhaebgwhh", "qxeqjnakijcegftkztcq", "pxiymzefszpoketjhpci", "pfetoqtwqcuwnhbalsrx", "nuapowrvptolyoejipvf", "enkrqgvehvaicmozkozv", "xccyghfsqzavoowjxbpa", "zhpkxzssfxrzuulhlfhc", "lzmzoehpjhiwnfptazpp", "knlvmuwpdiyxfttmivpo", "tuihmqlcvqwbhjksaorv", "oxnipvxscszrheonkqze", "atynxzjueolgyaobklfz", "rxhgdjqhiesquyedzyoz"};
    vector<string> listC = {"agriunkfdydzhqvtoxaj", "rrblydzdwknqvgnnmofd", "pxiymzefszpoketjhpci", "reycjmndcpdbgwwbntis", "ylecznhnoxdscfzmyeff", "ctaycqanpztjeynperfj", "yowldhkaqautgztiktsa", "bnlakkwqtatdikcjzlqx", "gmfvardcfgwyxlcaoozz", "egypyvdqcnfbeestukca", "fwnshwkxmqucemxplosp", "zkvqcmmqmcvaymkbexpt", "akvtqnvpqdlfbrkaocef", "afhncgpiwxvenrjjukzt", "uznxsmmoiavtbmiodxoj", "sjhucnkvajjsvhiezslh", "bghiovcjhfsnsvefhdgv", "lqeoszwsoqdkcwskrkde", "fifzdgnrarjqepaxmjng", "thfxxbazbwtyjnchgsrk", "oogosehycnazftypexwq", "edhteadtdxcmrbyxlzdp", "fqrayqgyoamlqvjvwcsr", "pyxcnvvodqxitmxupafu", "oxnipvxscszrheonkqze", "qdkbwfbedqjviqafurdl", "apkcxyihpcbluhcvcjht", "xafhajeeqbhjhnvferoz", "udetdnbneaxzgkolvaqx", "knlvmuwpdiyxfttmivpo", "ycvcgbciykywlcvgetzq", "xzzmerxynghwljpvmvci", "pfetoqtwqcuwnhbalsrx", "nuapowrvptolyoejipvf", "dsgjpgfopzagvdctvsfb", "oszhjqeyifjqctwdiucp", "jsomqahnpxqenxrvbukz", "rynuqmifvhusgwadyggh", "kdoyxaxhjsdwljgktgmn", "rxhgdjqhiesquyedzyoz", "lzmzoehpjhiwnfptazpp"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "86/87/90";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> listA = {"zdvfnpvyntzceucphsgo", "tqziofrzhbubawwahizq", "mbgxpedapvlvrqkzqzkg", "dpkhezbbckdsjdqybrjl", "mxfwuanawegicfehrgmw", "qrmjrjpxdqukqnfwdhte", "oktmpapfivwvjxgqrhcy", "lnqmmzobdkulwoytxzye", "xswhfxceagvludgwudej", "sbziqvpomuttpkofszri", "czshbfycjfjphzjnpoqf", "agkhsshzzpkircpsucum", "sysfjqggrhrnylnlndai", "isttodlbplrxiblhiupl", "rkexbhtqxpafkhlgwaxw", "mlinopnyzexnleukasjf", "lpmjaxtwwrrvzlszeynb", "koklsfsyqpisbelkaior", "vuuasarndfiahlgjvxgs", "tebeesxvootqgtpulori", "liawozjfzncndzauxocv", "ovtedqjzoumidxmhndcz", "obgbozjmgzolnitkiymr", "rhayaxgphidjxfokyqiv", "ovmxamdonwyeykidmqaz", "cyvsxdpiarpzjoemhpch", "libujmarstbmbaoyundf", "wuzynaaalmejmbacimiz", "nusyregaivdnigjiobvh", "kidrtpblxoyrnnttrsrv", "hfvdjntjnzuuwrnderdd", "wjkwlxzbrwzbcfojpzaw", "mpqnpidxdtyyljuwgetd", "tgwnsppeppuvvvxkzidp", "axygfydmqkzilgaxlfla", "jxyrqzlqottsuylerrds", "jcubthrrvshljimcdphf", "fnlwbhlnzqocamnyizas", "ychvamgzejypwbqbswap", "ifneytrznkamorjbtcet", "netuvsdqekrbaavworns"};
    vector<string> listB = {"rtiqplurjmronyyoakba", "iiaoyyitgosoedoxanzj", "libujmarstbmbaoyundf", "hrkekrzolyfkfsrkzlhy", "bcnslqfbiuqiothmovyk", "hwaazfyozsdxvdnwcjgb", "rkexbhtqxpafkhlgwaxw", "gnmgymeeamqaosdfsmsy", "cjsbezzgmcxfozowttfq", "wjkwlxzbrwzbcfojpzaw", "lppxdsiugdmhtfxhscdx", "feuzifahwobvwefopvqx", "sryopehzdnenymlmslfk", "uqfmavqkemeuyaywuokd", "gdhnwlsvpbfsryffzxpz", "vuuasarndfiahlgjvxgs", "uhbxcplzamoiabsshiyg", "hodkafmwnlvfueuspxhx", "bvrqexrlkrpiccbquhfj", "nusyregaivdnigjiobvh", "axygfydmqkzilgaxlfla", "qqqgasbcgvdefrktsgia", "mocxxlwemeyteswqtxko", "hfvdjntjnzuuwrnderdd", "tebeesxvootqgtpulori", "rnfnwffyaudmwalkymoo", "pchttkhgrieenatrougz", "xcvqcdkuzuisgcufnylx", "zdvfnpvyntzceucphsgo", "jxyrqzlqottsuylerrds", "qrmjrjpxdqukqnfwdhte", "cypmxctywmjkmsyuikeu", "hhuvdzvehldpesaxahij", "yahsrxjvvvcsvrwkqxtb", "wuwtoddnvxajkkowznqs", "grvqstbiuchzzbcrpvzg", "koklsfsyqpisbelkaior", "mpqnpidxdtyyljuwgetd", "tldxfuugqcmckwwngejx", "ovqnirmimnrsrpvpvjed"};
    vector<string> listC = {"rhayaxgphidjxfokyqiv", "haodbwbcrudycxphlhhw", "hrqxwvvrdmscxrrpmidf", "eyrehtlxnlekmvafiqze", "isttodlbplrxiblhiupl", "obgbozjmgzolnitkiymr", "wclwsjvcohdkcfktanwu", "rnfnwffyaudmwalkymoo", "vakftrjbeqyotopeyxwv", "bcnslqfbiuqiothmovyk", "sxkzfoveqgjkvnhfrmzl", "hwaazfyozsdxvdnwcjgb", "xswhfxceagvludgwudej", "lnqmmzobdkulwoytxzye", "zdvfnpvyntzceucphsgo", "pchttkhgrieenatrougz", "uhbxcplzamoiabsshiyg", "tebeesxvootqgtpulori", "thiyrvrtbufwftjjmaas", "sryopehzdnenymlmslfk", "bxneeykaqdhexqjdnibx", "vuuasarndfiahlgjvxgs", "mjpsfxbzimohuaatmqwv", "wuwtoddnvxajkkowznqs", "oktmpapfivwvjxgqrhcy", "tqziofrzhbubawwahizq", "gfrmsvtwjrwpzosyacmy", "jpsynztosydozzpjkmwn", "yahsrxjvvvcsvrwkqxtb", "mtdxdlxytlehvalsuvkh", "wjkwlxzbrwzbcfojpzaw", "sqdadnjftfealnfxoutg", "sysfjqggrhrnylnlndai", "hhuvdzvehldpesaxahij", "mlinopnyzexnleukasjf", "etnedbncpaskqffcmvxf", "pdppybsyiluknndcxgda", "aoyvandgtqmbhpgfmtix", "lfnufjyznzgpwswjewvy", "cypmxctywmjkmsyuikeu", "koklsfsyqpisbelkaior", "netuvsdqekrbaavworns"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "95/92/96";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> listA = {"zzesnfpruklrzfdisuwt", "uxpsjfjerkmmfycciiln", "fhhcqczkeiwhstvxxayf", "ykpuoqagbprgvwttozgq", "yphhptpixrpfosltzslg", "myecngrpksktaqfaaglv", "yvfhryuerchqptttrvhp", "ivyydfdkndhkqtroxsao", "gccjfacpdfngspnyasaz", "onackuhnpjdkaipfcdqa", "bckfyiomlonfkxztokji", "korsbfpnajrksnppfpfk", "vccwekenbtkjcsbuqsid", "holihzsmlkadirmagdxk", "bzqnhjvxgcwclkjyswnt", "czisxahstzsdqnotrbud", "gzwvahbklboytspxcqud", "hiipsaghkaqmoqgnpbjy", "vkwegsbskuclojaieqrq", "aqgpyyhsqqpvlpiukqos", "seezyorpvihctlvssxal", "pealoiqlnvgehxyoiqvs", "qatiwqaeyhiahxesphuz", "kcxoyaffurcaomvwfkay", "bbqkuuifmnzsixmmodlf", "emhgxtistszdmlkqevsn", "johmjzvnvnbrzomzygse", "ozpeoijbvztuffgpnaji", "rnnyiekhkpckspwauwuv", "gqsyqqguivpmwgpzxtco", "pbkaopwmjlacdyelesdk", "cbteohrvdtmrfnxcnjja", "offkgnbulvwintuwaour", "edyadtvufffbkktmvagg", "mdyktxrtwtkhylsepqhk", "abxhuhfpchqghxtfdylq", "kefulxqgaqqnwcvzcqmj", "fxbrnftszwfipdeznebl", "xiwxwcwyaonxnyutekga", "zbcuivskrnygrlfdpfql", "nhxaylloprxdrrwwaktd", "ybgpdcblpanhkbrsqkne"};
    vector<string> listB = {"ztpinsnqnkhihovsydtj", "izycufwrehaatbbdbgmg", "myecngrpksktaqfaaglv", "nutdfcvoblektwcbtnih", "dzuiasaprgphffqvwhfn", "kcxoyaffurcaomvwfkay", "johmjzvnvnbrzomzygse", "cyiccanjcxdvsscokpdk", "qhjtiydgrqnzkcdlubzq", "zzesnfpruklrzfdisuwt", "uxpsjfjerkmmfycciiln", "pjjgzfxwwxhvyfmvuppv", "aoqcfeixmyttyesesebs", "smnjulhdrofmnhnimdlh", "rnnyiekhkpckspwauwuv", "emhgxtistszdmlkqevsn", "fxbrnftszwfipdeznebl", "vccwekenbtkjcsbuqsid", "holihzsmlkadirmagdxk", "ajaqiugarapsejjydfhf", "kyefmikgfkeaachkletn", "kyksnijluioldfejmton", "mqkkuagfuqmfsfgjolwu", "amoekcyirtxrpxdtxtpb", "gqyahkdyrhrapsnruqjh", "qydoilcnzzcpwjisdqfw", "klzeglmfucclbntincqd", "bckfyiomlonfkxztokji", "ptgavpidfrqcdlrxvisb", "abxhuhfpchqghxtfdylq", "hiipsaghkaqmoqgnpbjy", "nyrtixbbyawvxfmsnfjo", "ukzwlkocyibppgsledbi", "jnsiwvxyeqbcrmkxdecq", "cauwpydncwwygpmkpdcm", "qcfexsefffkuekhdycid", "jzbkuqrepjfpvdhuvcqj", "bzqnhjvxgcwclkjyswnt"};
    vector<string> listC = {"nzivwevqynwqlhtalovx", "kefulxqgaqqnwcvzcqmj", "kyefmikgfkeaachkletn", "sngcopndrhjjkpqdzsjt", "coeaoaholzvvubpbvven", "onackuhnpjdkaipfcdqa", "bkmzrtzjgzxzybwunmkf", "myecngrpksktaqfaaglv", "zaqldcppihgdoxxbklar", "smnjulhdrofmnhnimdlh", "fxbrnftszwfipdeznebl", "ajaqiugarapsejjydfhf", "hiipsaghkaqmoqgnpbjy", "xsjzvrwhsqvmbqyrrufk", "nuhcuycgsdxmtyrdmyda", "xrnpafcvbhegasdkwovt", "seezyorpvihctlvssxal", "pealoiqlnvgehxyoiqvs", "lqaoujbsgpwfewihupbv", "nhxaylloprxdrrwwaktd", "bzqnhjvxgcwclkjyswnt", "qfcdkddaacctqabaqlft", "abxhuhfpchqghxtfdylq", "offkgnbulvwintuwaour", "jnsiwvxyeqbcrmkxdecq", "ynpumbbzrrepsrbrblcn", "vkwegsbskuclojaieqrq", "gjpzvjdsfjqmxmjipafw", "mqkkuagfuqmfsfgjolwu", "qbzthcjtavxbisuwgnyi", "phpkotshtefsjahkefqv", "pbkaopwmjlacdyelesdk", "vccwekenbtkjcsbuqsid", "nacumxjgdoolarljqoxt", "ivyydfdkndhkqtroxsao", "amoekcyirtxrpxdtxtpb", "cyiccanjcxdvsscokpdk"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "97/87/83";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> listA = {"lquagbpymfolaynxwmcm", "cpwgncetdwuhdpzdlume", "sueipazzykbsrjkcayaf", "cgbasmqyprunvdbikjgk", "bcnairnksrrnhfsevnga", "nmjehdbpmonhtdfvwfea", "nxgidfwdhfxlfmpbyjew", "varihwnmldfeoaflxcrv", "mijwsxkenvccedztkkdv", "cnsammnmwaxklnsxyrxj", "xnzrufkgwtcaletxkbft", "tawbwsgizwkpwcdljbqy", "dgkhhpvbjkhmhgceunnm", "dvhwbbzcpwfjvvrxzgip", "lrnitbmihunwhkqhrmgi", "yebcibundqslycahfcjl", "yglwxcgosxrfnwmxgpds", "yfkddhfqjfxcafrmlwsf", "fglynxbgdvifkwkeplhq", "mthrljfkqsimgzanonzo", "tafjnjzfuwrojwtnoxbx", "svncjexyumucybecbgaq", "izblbxrjvoawjvdycgwu", "zseereknhgomrelnmibg", "voddloamfhktybstkobr", "zcghkhdxrkrwscxhjxmo", "xufesnbzduocesoqhzzx", "fwqxxeqoylpedvphmxdf", "zwoaakdvxnzwgqiuadlo", "mlxkerrshtmwsbowtysh", "zmpcgpokdtrivcqderca", "feiafowpmuycftysrmrd", "jtlponglpmbbcdovdzqw", "cwypxetmzqpwuuksjdox", "sihokwtnrbbzrduafxxl", "jgrcdohjuorcrjfdeadh", "melgahfvfctnabslojts", "nsmbzlcqpkazuimvirlz", "xeiyjyqclkvxugsgcyjt", "bkjvedeibariammaaofj", "oobnjafuapsoczbxozsj", "jqqibviglqrxybqpirpv"};
    vector<string> listB = {"xeiyjyqclkvxugsgcyjt", "vdsmratnjfwcmxoucysi", "lquagbpymfolaynxwmcm", "varihwnmldfeoaflxcrv", "vfjkkqwzrlgkkezsiyzx", "yfkddhfqjfxcafrmlwsf", "owlzqfqhimuyzkldsjcw", "sihokwtnrbbzrduafxxl", "jqqibviglqrxybqpirpv", "xslhehpubrzracfdvtym", "qbsrzklrxjxbudponkxx", "xugpjbyuqbfgbbvtmrvj", "xcoohubsbfylsruwmpqr", "cgbasmqyprunvdbikjgk", "eyuuiuhwjkhbyavxjyzn", "buhtmlckrxmgyqgvclud", "mtfcygdxoqhzoblvtzzg", "nsmbzlcqpkazuimvirlz", "lrnitbmihunwhkqhrmgi", "frljaidtdjyzvjxjkdsv", "fmvtrarhcspvuvjznuld", "rqpupmnhdzidmdokfdpc", "zgnozfrrotjusopwjmaf", "xzfosaeufpbzxelhnhyw", "gacqybdswhfnwliwdoqu", "mtwxfbguenwlxppsbvbt", "bfdgbzgweqvxtcngckza", "svncjexyumucybecbgaq", "izblbxrjvoawjvdycgwu", "fspdjwfmqvybuanwrteo", "xtnistokuvqdajpdlmnd", "dokrwlgruesmfuvkgzcg", "cewmevcwdlanbobtvemn", "kfoqlwuskufrvrbvzgik", "yglwxcgosxrfnwmxgpds", "uhfimihpqwuuhycnnmpf", "ufcrhurjzolpnrfftqpl", "wnqkwsnnzggdglhoozho", "cpwgncetdwuhdpzdlume", "nmjehdbpmonhtdfvwfea", "mijwsxkenvccedztkkdv", "sueipazzykbsrjkcayaf"};
    vector<string> listC = {"dugpihkmekkjuiuspcqn", "fjniuiqhbabdljqjtpxj", "varihwnmldfeoaflxcrv", "fspdjwfmqvybuanwrteo", "vnlfcjlohpneghpheuld", "szhhicduczchdtsncuxg", "dvhwbbzcpwfjvvrxzgip", "tmsjcwbhpjgsrtnocoqu", "fglynxbgdvifkwkeplhq", "dokrwlgruesmfuvkgzcg", "wtvgfdsbcmjeboshwlxr", "melgahfvfctnabslojts", "vdsmratnjfwcmxoucysi", "nsmbzlcqpkazuimvirlz", "nmjehdbpmonhtdfvwfea", "tlwimgnwjbjwhpktdqht", "oobnjafuapsoczbxozsj", "cewmevcwdlanbobtvemn", "bcwzwvidebhewynaxnrx", "jgrcdohjuorcrjfdeadh", "flsxteyrazaytzsvtcoz", "qhngxgxrmymggjcnlezk", "tawbwsgizwkpwcdljbqy", "yebcibundqslycahfcjl", "wtsqfpmhucivxbgjeqqn", "lpehliicvsxmtulhlflw", "xcoohubsbfylsruwmpqr", "jtlponglpmbbcdovdzqw", "frljaidtdjyzvjxjkdsv", "uhfimihpqwuuhycnnmpf", "ufcrhurjzolpnrfftqpl", "qijltleupwhzqcaotxqt", "svncjexyumucybecbgaq", "pftghxolcenesgfdogas", "jcotmogljmilckvjtdxv", "feiafowpmuycftysrmrd", "wbsurzrnkdjrybujvkvs", "mlxkerrshtmwsbowtysh", "mthrljfkqsimgzanonzo", "nxgidfwdhfxlfmpbyjew", "jbudjjyekjxfbidnbcmi"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "94/98/95";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> listA = {"xsigurhuromzadgobppd", "rbjewlapagaqrmlfnlvu", "fanaaxgocslczmcmpkpf", "moytqsmqeftihgaydvdy", "iamkeyqklhuafehbmrrr", "lrdocjdnilqqgmatttqs", "ztcwmexyntpzjnntkwpx", "ickhsnbdbeluwenrffdv", "agzdtwrpbfmmyjtxffpg", "gurilgufxpxdewiprtnr", "mdoitkqpdffxgtjjflxv", "avnxbuzumymdqgxdfejr", "pceoiedujhmpsstgwyzu", "ycsjqdzvbjnkifimsyww", "ohpgahkigkyuejwrjeow", "atvcvoknqcjpwihrxhyu", "uqppgcxenlrllslbtold", "xfggugcukzxejtrsnzfx", "lmvzfinxtbdpnfmhirda", "zwntarcdgdhibocfpztl", "rmrznklbxlmqymlqeojy", "pohcnmptbcbtkmledtzb", "bhqhykgohyvulzmmwqya", "ghqrlzxzdgythcyaqaul", "gkexcfibahzcntuhlvod", "kucnqluuedfithpzmrru", "wgeskstmndtyhzplazxm", "mxbtejxbbptyhgmpphwj", "tuyxqbjcfdvdjbdgopqr", "aqtkbvjudjtznlvkywad", "gsgywrleqdyjnmqfknud", "qtndseevvcgstrezmvcl", "rqrinymonechhxnuopuf", "ufpmbiojdvgxbmhvcsis", "vozrqasdcnxbpxwrdifd", "qpwepmememydxzxbohwe", "nlpsmbqwbbwsnewugtmo", "elsemtulvsuvptpyksci", "rmxplrnebaanmpjsvako", "kwtesopyrbndwlvttcrv", "pcgirhbswibibbsdhjom", "zqcphbammpgkoklpnxwg", "wtycowtpldcajeeclguc"};
    vector<string> listB = {"ickhsnbdbeluwenrffdv", "mzjladkxacvoenorrscn", "tiepwxtbcmzijgpotiov", "uqppgcxenlrllslbtold", "bravnauguzdkjtjabwmr", "ptnabmpxljxyhhbeagcj", "pcgirhbswibibbsdhjom", "nlpsmbqwbbwsnewugtmo", "hhtxvlbqiookknjwibgf", "gurilgufxpxdewiprtnr", "piknuxoyijlmniwnohhw", "euzxwjhwihvrarzfzzae", "zwntarcdgdhibocfpztl", "pqgzcexinanxmegxgprt", "vozrqasdcnxbpxwrdifd", "lrdocjdnilqqgmatttqs", "jbhqtlafnpcijskaeols", "lmvzfinxtbdpnfmhirda", "xqcifvdfokbuktznxsra", "zqcphbammpgkoklpnxwg", "qpqzcnymfzmqblscylms", "rmxplrnebaanmpjsvako", "ghqrlzxzdgythcyaqaul", "czbkusnspemxhbrphilt", "mzctteooifptpcswsesn", "aqtkbvjudjtznlvkywad", "hpwloayzerydhjusdcga", "vjzlnowacancrqfejoir", "atvcvoknqcjpwihrxhyu", "cpzzntugughjzrdsoszj", "wtycowtpldcajeeclguc", "wstqacyggkajhnxxkgvn", "mdoitkqpdffxgtjjflxv", "pivizbiteocjqgvcddjg", "pohcnmptbcbtkmledtzb", "esstpekivivnoqieqhlk", "rmrznklbxlmqymlqeojy", "bhqhykgohyvulzmmwqya", "kwtesopyrbndwlvttcrv", "chitvkfymdnkxpnkdigb"};
    vector<string> listC = {"kwtesopyrbndwlvttcrv", "fwqybalqvennpwkgqxme", "rbiljsqnwumcnmoghmxh", "ptnabmpxljxyhhbeagcj", "ltvpdpbdbbujpgzqwcnc", "fhzlhpuokwfngjmkwvga", "wgeskstmndtyhzplazxm", "metxjkykwykwmeuklovd", "piknuxoyijlmniwnohhw", "hhtxvlbqiookknjwibgf", "mdoitkqpdffxgtjjflxv", "geobolttatcyidvtthnk", "ickhsnbdbeluwenrffdv", "xfggugcukzxejtrsnzfx", "hpwloayzerydhjusdcga", "ponxbshpzmmifglmaoju", "agzdtwrpbfmmyjtxffpg", "vsgvqyujmiiwvboxknuo", "chitvkfymdnkxpnkdigb", "tuyxqbjcfdvdjbdgopqr", "bravnauguzdkjtjabwmr", "tfuavreunxphgdbgzges", "cdlrizfzyctvwwnknocb", "ownrjlsbuctmklnrqhrq", "aqtkbvjudjtznlvkywad", "hdzwjonalsbuoenebdyb", "wtycowtpldcajeeclguc", "aojfvmirqbybtkchakss", "ccastrutzsuylmanwfgo", "euzxwjhwihvrarzfzzae", "gsgywrleqdyjnmqfknud", "rhfdsstdivuqmujvubkx", "tiepwxtbcmzijgpotiov", "mxbtejxbbptyhgmpphwj", "mzjladkxacvoenorrscn", "qpqzcnymfzmqblscylms", "qtndseevvcgstrezmvcl", "gkexcfibahzcntuhlvod", "oqrchisuiemitocatvwb", "pohcnmptbcbtkmledtzb", "rmrznklbxlmqymlqeojy"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "94/83/91";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> listA = {"jgcchrgrbrjwsqcqxscc", "dyluxfnsczxcujcwzasf", "jjdpfcgphzqnjzrmuydj", "ngdcqvzynapwjokmnaon", "ktioqdbexyxqepjvisdc", "tykbeltkyhvhyfdtnmsu", "rrxyqacqjufqokmdtdoo", "dlpxiyiokkpemdjlevfv", "yavzuxcydpmmwhnrcfwa", "stqqevaqlxggsavqmemu", "olnzdqslornwesigngvz", "hxbxdwarzwoygtemzkxy", "dytfdcuzitjatdqjbvdv", "nvbnxxwqjrynbjajoimw", "khzwyatxtjrfqhxgefmk", "ronlwgurovujqtbtiwrx", "akufyymthiebybajarhm", "swyjqgrxrgurdzgcakdm", "ovztsxtmsuiowdeijyab", "zcmhtvxcarvgfmcjifuc", "rulqtzoqbvzepsozfmzf", "ecswugbexwgxgxzfcpqq", "mkzfuiscthmutegjwxcp", "cztthxnojudsqhrszgef", "pkunjdlcpsvzffuwtgyt", "efqlertkdxuesnagezdi", "mzpmpwvryqicxfzavbkd", "kzdkfchpaxusaeymzbfc", "xzlvhhdjitqycnlyyeij", "fxnmvdokygcuaeigrxfc", "mmthxahrszbbktdrkzaf", "uaoelbiftuwuukyvyciy", "tfwkduvaxtkpwwiyfmtf", "igopreouwcutnjpgpoma", "tagatuapvgcqyykxowgj", "ihezzdaakfvumqjcglnh"};
    vector<string> listB = {"dytfdcuzitjatdqjbvdv", "yluwefbhcxyymjxccjbv", "brpixghyahakmzapbzvg", "ovztsxtmsuiowdeijyab", "zcmhtvxcarvgfmcjifuc", "kpddxwzaxdgrudntyfmp", "jyvtirbxslyyoogidxmw", "tagatuapvgcqyykxowgj", "bopvepgewicyudiusndh", "jvieqspryzwtoglwjaum", "judjppzxpivbecsorvkx", "aolouodhswkqeectlcmq", "uzormvkectqrjmuxzadk", "euxpryhiertmyuqlfjpk", "ghbeeyxkpvtbtnzlvznn", "fzjnhylahgsdgwwglncy", "guazjcihsproljsiyczz", "nvbnxxwqjrynbjajoimw", "qmoqztkdyihrnfwzoucw", "wucrrfvmxpqzaypuswmk", "rwbsdyzgqkpunrrnozqq", "olnzdqslornwesigngvz", "phbecqpowonemuvblbna", "ruyekuwcrqxhhvrkqvmu", "hxbxdwarzwoygtemzkxy", "xjbbnulxgdhhaebasxkn", "xzlvhhdjitqycnlyyeij", "dyluxfnsczxcujcwzasf", "rhudvwyanrgygwdftzmj", "cztthxnojudsqhrszgef", "xnlistjngjkrbrmnfehi", "ywogatqvgcgzwhifhlyt", "ascopfdutqjsdrrgkzga", "akufyymthiebybajarhm", "nprhcebqcvvpkvvdlzre", "pmcvnjdozwsuzxmgwegy", "rezhybwotmnkwprakyoa", "ecswugbexwgxgxzfcpqq"};
    vector<string> listC = {"zfatpjaxrrysjrqxaeoy", "icclnwcmwjswtauaperh", "rmzjepvmifjsybptamxc", "qwohxqqgsetqrvlipxyi", "pmcvnjdozwsuzxmgwegy", "fzjnhylahgsdgwwglncy", "jvieqspryzwtoglwjaum", "mzpmpwvryqicxfzavbkd", "zcmhtvxcarvgfmcjifuc", "mmthxahrszbbktdrkzaf", "kphufpgcbwzoyorxcjqs", "ascopfdutqjsdrrgkzga", "ywogatqvgcgzwhifhlyt", "ruyekuwcrqxhhvrkqvmu", "yluwefbhcxyymjxccjbv", "jyvtirbxslyyoogidxmw", "jjdpfcgphzqnjzrmuydj", "pkunjdlcpsvzffuwtgyt", "zruipvcrkrnzkkprotdu", "rnalghsgbomygpkqkabb", "sppealqaizzfhdtiedgh", "olnzdqslornwesigngvz", "uaoelbiftuwuukyvyciy", "phbecqpowonemuvblbna", "ihezzdaakfvumqjcglnh", "hucdvlapyfadmenxzlpk", "efqlertkdxuesnagezdi", "jysknrvikbeeicnzturx", "fxnmvdokygcuaeigrxfc", "ovztsxtmsuiowdeijyab", "ulegknoirxzymuyrodnd", "tagatuapvgcqyykxowgj", "pknbjqyirxrqzumzqkqs", "khzwyatxtjrfqhxgefmk", "deeikfuavvpcqrmrupcj", "dyluxfnsczxcujcwzasf", "vdaglhkokemeofaarkit"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "82/88/83";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> listA = {"gagoraehqymjtpdihoow", "wfvnxxfgauuwpaafazju", "jrueotzumsdcszfqszgr", "amwjybgbzzbuhwgohkgy", "hkerfzfbcgboxwzkxqws", "tsjijsgsqmlrgxlisggt", "fwvcjfafvsbqghluecuu", "ccuqedorzckmrndxyyqj", "vqpnuinqupbqttavxfjw", "gvezostmzvxblsjyifdu", "hdvrcflnnvdhiacguymq", "fxahifwkgooqohyxibjp", "sunsmktlelsoykmopjzj", "qxtqcwmfbvrjfpszpkgp", "dksxqijcmfrnjtdqlozk", "jtpnqrtpiihqpmpawmoz", "cgpkfnhobbgrhjzjbfwk", "ooicyifoefsjdirnyobb", "oaazxouptufrefudtdfr", "nsebykxypzausiwgoikv", "hlqniubipejwjcacsvjg", "xzxkgyhckfocfiymoxms", "dbivamxzpasbkelzbohi", "qkyigirfdaqrvpbqfkqa", "tdemsjfosjnfwejwjgrk", "khxpnwumlhintwvmybkf", "glxyxvbgrammpjahcvnr", "enlweksfxldtxlcwhhiu", "kzcfvakwvsrqpuheqxjc", "bjmjtzjpdcayqqjozlcr", "cgzisclbqveuwfrdqyev", "udtdhushgitititflxnd", "awicbwamcfyyqvhryuwu", "swvgilaldnkbjgsiqdys", "pfvimoyrfdsurflywlhj", "ihwcmuimtuqvegvlwxax", "dtgjbpyovcyarcroqlnd", "ezubmhfkweuxosdmzrbs", "divoashjotlflvepckcy", "fjovuvoibrtwccpqhzlu", "wvcnxnboeyvchgjlpkre"};
    vector<string> listB = {"sdgpchugkyhikpkpdmaj", "lupahgbztnciiwyjaldj", "seonwzrotxgammfzprpu", "ujvniifwqpzapxnaccka", "pogtlldhdpskcmmycfoa", "rplknrxcmfyttpbmnxiv", "vozwyrbwjajzuljjxwbr", "tbxzwteegjkwehgwyved", "gagoraehqymjtpdihoow", "awsoqjccytnmlhizxuiz", "hlqniubipejwjcacsvjg", "ihwcmuimtuqvegvlwxax", "fxahifwkgooqohyxibjp", "xzxkgyhckfocfiymoxms", "qmqkjjmpzziuwbxcnfcp", "vqpnuinqupbqttavxfjw", "hdvrcflnnvdhiacguymq", "urwggsrieazbdcbzmwnb", "yyhqgmhtzcelftixfyie", "glxyxvbgrammpjahcvnr", "rjiuqmdfhopouweggroo", "mbzjtgtjwvrrpvvdndvd", "olxmtcauzebyezwyjgou", "enlweksfxldtxlcwhhiu", "tvzxgdvzcvcziojkkguh", "ooicyifoefsjdirnyobb", "uxkajgxtncrgqwtdtfkb", "rmlfuewnnmyjekyxffcg", "qkyigirfdaqrvpbqfkqa", "ccuqedorzckmrndxyyqj", "toruwpkecfybymokzimi", "zlhlimegujlrpsqddmgc", "vvafoefpcjyovftqybpq", "fbirdwhvhiuazmchbwwc", "mtzizaqxigcxkzvauqwf", "ayzwmgemmwnetjyfuvff", "udtdhushgitititflxnd", "ksshhinnhswvokmriizo", "tbtqydnzqtyrioopdheh"};
    vector<string> listC = {"tsjijsgsqmlrgxlisggt", "armrfohdfqljfcrutgur", "dksxqijcmfrnjtdqlozk", "hlqniubipejwjcacsvjg", "dbivamxzpasbkelzbohi", "vgiiihnwmvpmhgflbrsq", "mbzjtgtjwvrrpvvdndvd", "ayzwmgemmwnetjyfuvff", "fbirdwhvhiuazmchbwwc", "enlweksfxldtxlcwhhiu", "ktsszqrueafmemhowzfq", "oaazxouptufrefudtdfr", "pogtlldhdpskcmmycfoa", "ezubmhfkweuxosdmzrbs", "mtzizaqxigcxkzvauqwf", "gaxhgriibhclrkzntxda", "wfvnxxfgauuwpaafazju", "hkerfzfbcgboxwzkxqws", "sunsmktlelsoykmopjzj", "rjiuqmdfhopouweggroo", "nsebykxypzausiwgoikv", "hpecvapjqwtpbeiblqjm", "qyfugacxxvwdyrrzsdro", "bpmejwqdppxreuqugjal", "swvgilaldnkbjgsiqdys", "vzctgzkonckwelcczmay", "rplknrxcmfyttpbmnxiv", "ngyjgqdfyhapxvvywghr", "ertqsyjgksthhgdphspy", "jrueotzumsdcszfqszgr", "hkyyvxrvpajncpowucnc", "gvezostmzvxblsjyifdu", "qxtqcwmfbvrjfpszpkgp", "ucylayaiqwjfonjviqdz", "sugzvycsoskcvucpjpna", "glxyxvbgrammpjahcvnr", "rmlfuewnnmyjekyxffcg", "ksshhinnhswvokmriizo", "urwggsrieazbdcbzmwnb", "wvcnxnboeyvchgjlpkre", "qmqkjjmpzziuwbxcnfcp", "pvhrfqlwyekyvjysdiht", "ujvniifwqpzapxnaccka", "zlhlimegujlrpsqddmgc", "dtgjbpyovcyarcroqlnd", "amwjybgbzzbuhwgohkgy", "seonwzrotxgammfzprpu"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "91/87/105";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> listA = {"hjdwemgbdrpjjkbndzkt", "csowhgqanqvjzsfnxjtr", "siraylxhrjuvybalzuya", "tzbeetcwpuazrbcrplor", "xenyxkihkhmsneekarss", "udliqmucqciuzjqszuzn", "ndmudfclsuupagbdjrht", "iqwvjxdqwvundcrsqjli", "cvjzanxrvxujuuerhdro", "dexhpypqxltjrpbmsydu", "gyycpkdlgdsyxcmbjvwa", "zjxmfmzhkmvfakhvqxjy", "ithiapmltngoyjmtrtbi", "sdoxbpvsljwegwcpueju", "wfibsvkochvvuoclxamo", "piakewqhtlkdwvrimxvc", "uppxwxmparwaggixhqvr", "slczcrzkezyaiudhpbhp", "edkswlhqisgucfczwdmh", "edtquxqjqhotwbdkqjmu", "lnfyqeesnldhpyamwwrj", "vvvsxhydpgynbebvzhro", "diewulrfwhkhnnbdoadh", "obvbzpmtmyanamxhgzjh", "mkxmbjchrxvruzolbtrh", "ljggnffguqpylkufgarw", "pvlefvorzrxfzfswwmeh", "htseuktrzydolmkfyrmg", "nhjqzzbklicsveuetrkt", "npvgchmkeqtjsdslnmvb", "plbpupoxwhekquklhchn", "gmrqqhwxgcmzlaytjuai", "ujnqgblathhqieujgeig", "ardplgzdsttfiroqfxcn", "uuurpjabttsxrakzuqac", "garjfadzbrxbpajmqdkd", "irtgctkymidbxjcadkrf", "awpcwzkwrxtlczmmmhvz", "rwczcaxwdxopujetprlc", "dnbrfskwmocofdlgrknl", "wluqnukzsxvrmoemsdoq", "ppxmahosodbzyfefxeee"};
    vector<string> listB = {"rcfxrllxvmxspfnrwcqe", "ppxmahosodbzyfefxeee", "lbxdupryshejpjqkgfuq", "edtquxqjqhotwbdkqjmu", "mkxmbjchrxvruzolbtrh", "ardplgzdsttfiroqfxcn", "iqwvjxdqwvundcrsqjli", "tzbeetcwpuazrbcrplor", "usnqbsrcmtvhtejvhcxl", "wfibsvkochvvuoclxamo", "mtjbzhecxfnsvjusnbvt", "csowhgqanqvjzsfnxjtr", "edkswlhqisgucfczwdmh", "wwzntqudhdnqswkvpseu", "rwczcaxwdxopujetprlc", "npvgchmkeqtjsdslnmvb", "vvvsxhydpgynbebvzhro", "ndmudfclsuupagbdjrht", "qadwmgatzorxmpyffitk", "cvjzanxrvxujuuerhdro", "nhjqzzbklicsveuetrkt", "bxblwhhopouvkeosmhow", "awpcwzkwrxtlczmmmhvz", "zzhrlhcxymlcmnmsjdhq", "dexhpypqxltjrpbmsydu", "qsqpwmsxpaipsfiyqgwa", "suhaymeylnqsyzrrolsk", "cvxbxilebxleowopemjk", "vqprhfenulvugovmmctw", "xpqupvjcfzwhobmlupvw", "kwgjofibcdndsfjfquqr", "gwvlwiqquczsfnvwfusw", "yhzaokijezlftybtfxbg", "nlulvmynodsvhidkfwev", "qssgwobwknffcflkmfsy", "cwctulmypusvbkuhrdal", "guhdsedzlskewkqclcqf", "dnexpoudnyejnuphtrtf", "ithiapmltngoyjmtrtbi"};
    vector<string> listC = {"hweznfakmggmiqururle", "hfudzholymrghtggedrl", "uuurpjabttsxrakzuqac", "mtjbzhecxfnsvjusnbvt", "edkswlhqisgucfczwdmh", "zjxmfmzhkmvfakhvqxjy", "hnmlvqbxnqpcmhtemgzx", "uppxwxmparwaggixhqvr", "oqxrkgtgzejhwgkexlsu", "ljggnffguqpylkufgarw", "pnpclvxlvqkudqhisvli", "cwctulmypusvbkuhrdal", "nhjqzzbklicsveuetrkt", "cvxbxilebxleowopemjk", "ujnqgblathhqieujgeig", "ithiapmltngoyjmtrtbi", "htseuktrzydolmkfyrmg", "wwzntqudhdnqswkvpseu", "oibiqxtatcncegmxwuxm", "deptkdznhpjjzwhtjkfs", "hkmvjoomxdocjnaovvyx", "dkdaxosyridyvbgausil", "garjfadzbrxbpajmqdkd", "usnqbsrcmtvhtejvhcxl", "gmrqqhwxgcmzlaytjuai", "zzhrlhcxymlcmnmsjdhq", "lbxdupryshejpjqkgfuq", "puqdouvsfipvcrawpnak", "rkkjypzwxtxivoeyttce", "yhzaokijezlftybtfxbg", "rcfxrllxvmxspfnrwcqe", "nkdrvfseqkvkgilvfxya", "suhaymeylnqsyzrrolsk", "hjdwemgbdrpjjkbndzkt", "rnlahcawtdywdayvthkd", "ecmzqoeymcikhdzkbfqm", "xpqupvjcfzwhobmlupvw", "dnexpoudnyejnuphtrtf", "bsmxfhmjnopzsrjrpxgs", "gytqhbejcperqfrqvnru", "xxmoziddfqchoeygydga", "prteniedkfowhmnkrdzs"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "96/84/99";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> listA = {"dbgxeojobdhujiygbrzv", "newghmfdvstpsbbjbhnv", "voanerufkgimtksjufds", "eyztakutvwajfxsytwpw", "ilzjahqxaslnzysopulf", "mbivznzmaqfhczfuvqsj", "xilyhmqasalgaqdfbtza", "fzysobsjsdrphovgmify", "obdvdmnrhmwbuzzpvqhp", "ipsmknmlrirtugaevhpz", "dbuwksdoayixqaibrjks", "xiinbvbqifwexupimopi", "whefzarqmoxafykzqctc", "lvgllgokuampejamjywo", "uouglympqbvtujhuwscl", "gydelopbpscbzfkglmbb", "iwpkmpgudctfkuouoioi", "dsevuyastwumznhghbmw", "apsdwskabyiqddpjdkuo", "suaibhutoufvoxxktbtx", "qsjrqorurpoubvxqinry", "wiwfzelnbczaemvzongz", "ioopoirwbmyapumolokj", "oticgtebdwzmwcmhypjr", "dibpuxhfumhqsopqvgmp", "ayseyzdeidzaxjilevxr", "icjfhkborhevyknfwwxq", "ztevfiaoatfffhnfmgrt", "wmdplyywhycvmmrgomeb", "kxylvprycorobifxhrfm", "pzkayiwrqamdtyzryrbq", "lyiesxwksumgprszbxao", "mfomkwxgquabrwztezug", "bevvrwaxtvxaraqepfnm", "tpxdgxjvxllmgseqdcxr", "jydfbuafzlelgnskknht"};
    vector<string> listB = {"dcytzuewrewqjphoxdpk", "bufqevzzpbaetivkluhc", "dzngdjuylkcrpofrqlzz", "qxzlicvmwffllfugyyil", "colpzvbdqgdoftqqffdp", "dihefdywvqafkvcybmos", "okfembkabuijztfnpanq", "tyyouugnezheowbjhxew", "xbbmtgegjhartlpranoq", "ayseyzdeidzaxjilevxr", "dndxonnafdxcwgfcilnm", "ioopoirwbmyapumolokj", "mbifffhcmvyyhufwnbth", "cjjeqsljrxfcdjcxkmms", "nvcsjoqkcowsbajdcfqh", "mbivznzmaqfhczfuvqsj", "eslmvxigkjnmqtoestxd", "ubpaclywflujonjbnqiw", "xilyhmqasalgaqdfbtza", "txfutejfutloxgqbfqek", "twvudqonsesbcujyydov", "vnqnsavhaehpcgfyjggl", "iwpkmpgudctfkuouoioi", "cmvtghgcflmdiexrdqwx", "kzvynssbcykpuriqmmzq", "obdvdmnrhmwbuzzpvqhp", "pjnuroulvsbwnrqndvlg", "uhuqgsrtsrhzaeizvedz", "vybolnahkaqntgoiyjnm", "newghmfdvstpsbbjbhnv", "wmdplyywhycvmmrgomeb", "lyiesxwksumgprszbxao", "aphplvylxhcyvmxwnkic", "kcyalcqivjozkgabfpuk", "pzkayiwrqamdtyzryrbq", "zdadnphipzghrnzzjzpx", "oticgtebdwzmwcmhypjr", "mfomkwxgquabrwztezug", "rcdxloaymxtdmafprugh", "ejqqteieffmvgumcmstx", "dibpuxhfumhqsopqvgmp"};
    vector<string> listC = {"fqaooqgarbvokvhfpubo", "smorozngprvknzxyxgpa", "mjzvjxuvfjexypkiliey", "mbifffhcmvyyhufwnbth", "mbivznzmaqfhczfuvqsj", "ucjjmnuurvhgcbqurtjy", "suaibhutoufvoxxktbtx", "vnqnsavhaehpcgfyjggl", "puwvjjfxfseycubyajmf", "kzvynssbcykpuriqmmzq", "vgwjyeztidkxkupqrwfz", "qsjrqorurpoubvxqinry", "pzkayiwrqamdtyzryrbq", "ulwxuzlwyapstwvkdswf", "ckczevgizyfdjlnwrocx", "fzysobsjsdrphovgmify", "aphplvylxhcyvmxwnkic", "dzngdjuylkcrpofrqlzz", "vybolnahkaqntgoiyjnm", "okfembkabuijztfnpanq", "dtfvyrsfuwfikqupkadi", "qxzlicvmwffllfugyyil", "yoqikhdymsmgeydwqltb", "dsevuyastwumznhghbmw", "iabsdebgsmgylnohjscc", "ubpaclywflujonjbnqiw", "zdadnphipzghrnzzjzpx", "ejqqteieffmvgumcmstx", "pjnuroulvsbwnrqndvlg", "uiomleqwbbmkteqimiwh", "yxphkbdolpqqqkvtulbh", "lopdtpozgkmpksgjkgsd", "ncbojwzudxftmawgwbmj", "wmdplyywhycvmmrgomeb", "kcyalcqivjozkgabfpuk", "cksixwuwxbxqiltdwdle", "xggcuegslsynwtvwdpyw"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "88/94/88";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> listA = {"vxigkkvtnsaiwimwtwno", "baxtpzsfgtsspfmbkdzw", "eqijkclgasuxzdgoljpy", "kdushfbmfngxeardcnxw", "fdbfkkqrngessbufpcja", "bozygretcfjnvlkyibta", "svwrlivglsoknyoskhql", "ssensxladhknciesbccc", "akokypwqdpsjaknrszti", "wxcoewydvrthvjiqnrvz", "vgimramqvhwzlwameojm", "hzkwxirqlbkqoinelzub", "kkhgtixkresavylenllx", "tjvgkwmkyogcbhpogktk", "yfhoxehephkbwhwvijve", "etzsatwnjwvxamhewajx", "xfltwzfrkrrpyzaknrkq", "clmkqgakshqjettsslrc", "lqjyyuwpgubjgxdzgdvv", "szkdibozcghjldehqcas", "zsvrggshdhuitwxadqyd", "hfqiczwicvcpxqvosxoi", "endtugnzficydxaxstkt", "fqkuyzonzypjtzhulcaa", "rtxbxmaecmamthrevees", "ntqsfcxupnjvmoebdzxz", "oqjsunysyemnkyjwynbj", "qqhsnhacwwohpfdmsdxu", "jpodaixruovlifpufxyk", "lfzbcyywkcfobqkdwpzv", "wbzvcltmyibjqabsvjkw", "nztrshtoadfliybcmhfw", "kicillpyzwlsgbolrbyv", "lokjrfstsejcqvxivukn", "thebbgoqmhvnbyrxwslc", "ifbzptjzujaibfvkszks"};
    vector<string> listB = {"unaqhxivbvnggkvucbcv", "zsvrggshdhuitwxadqyd", "tjvgkwmkyogcbhpogktk", "gmvulvwlkixzcutsnrxv", "aceytmcljgqdevrnludh", "fdbfkkqrngessbufpcja", "heylaoczofzrjjbaxuli", "qgmibriibeehdbsjzgbu", "bozygretcfjnvlkyibta", "lbgviiijumiybtsznfxx", "lvvmqaixiqgvfzxjvpuc", "baxtpzsfgtsspfmbkdzw", "fdutihgbnskufkwrecuu", "szovlszpqckzjgpfitxq", "xewhtptbrjgzhledaroa", "kkhgtixkresavylenllx", "ntqsfcxupnjvmoebdzxz", "kdushfbmfngxeardcnxw", "ophctiecfxdezbarvguz", "ljvpprqrvemursptswqb", "vgimramqvhwzlwameojm", "rtxbxmaecmamthrevees", "knnqqppfxfkveejwojvw", "lnxkvfnzyghuhjlxscyv", "vzfryjxngmzbpafxbnig", "vfvhxduigvicnhzfzlvq", "typfjdtnvthryufxajtt", "miqjjygocznvmtoilcui", "lljuexqeuhqsncfbyens", "aicvbddcwvgqkzmwnyiz", "yfhoxehephkbwhwvijve", "vrrcivfeaqgcoletwqsa", "liunkzycliydurzxkntc", "cdcdaetyvwtukfmglpgu", "lokjrfstsejcqvxivukn", "ktoekqxulhyvrputnqrl", "tlmgrkzfxbnvzhukcjyr"};
    vector<string> listC = {"kofdircweyujjivhfvyx", "hfqiczwicvcpxqvosxoi", "bkjverjzgcdjbbpymdym", "iygbxanmhcqckjgblich", "siquepfwjxfqjaqvnyit", "ssensxladhknciesbccc", "rtvqbratgpxuposcicuc", "fjvrdowgbmxhwbxzapbj", "wbzvcltmyibjqabsvjkw", "tjvgkwmkyogcbhpogktk", "oqjsunysyemnkyjwynbj", "xewhtptbrjgzhledaroa", "qgmibriibeehdbsjzgbu", "cdcdaetyvwtukfmglpgu", "ifbzptjzujaibfvkszks", "defhybcreapvovwyhnzd", "aicvbddcwvgqkzmwnyiz", "fqkuyzonzypjtzhulcaa", "kdushfbmfngxeardcnxw", "cqrwqzfqtnmnijairzku", "cshduwhcfifczhpifoah", "rtxbxmaecmamthrevees", "liunkzycliydurzxkntc", "knnqqppfxfkveejwojvw", "fdutihgbnskufkwrecuu", "lnxkvfnzyghuhjlxscyv", "clmkqgakshqjettsslrc", "wxcoewydvrthvjiqnrvz", "uvdnvfavdecgcrmbljog", "rolzppvlgfenpesllrvf", "typfjdtnvthryufxajtt", "dypngkzfccspauobdagm", "sjjxkyiuvezgvxpavztc", "ntqsfcxupnjvmoebdzxz", "zsvrggshdhuitwxadqyd", "eszgpevlzchdjowuwiij", "umrpklaebzltwauohcnn"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "83/85/84";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> listA = {"s", "r", "a", "p", "i", "v", "c"};
    vector<string> listB = {"o", "q", "v", "a", "p", "f", "t", "c"};
    vector<string> listC = {"k", "c", "t", "r", "p", "e", "a", "q"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "13/15/15";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> listA = {"t", "l", "x", "p", "e", "g", "s", "r", "u"};
    vector<string> listB = {"s", "x", "t", "l", "e", "b", "q", "g"};
    vector<string> listC = {"c", "f", "q", "u", "l", "w", "t", "p", "e"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "16/14/18";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> listA = {"u", "g", "y", "f", "l", "v", "d", "h"};
    vector<string> listB = {"h", "l", "y", "g", "z", "q"};
    vector<string> listC = {"g", "q", "h", "v", "y", "u"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "15/10/9";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> listA = {"i", "b", "q", "v", "x", "g"};
    vector<string> listB = {"f", "d", "o", "v", "s", "i", "g", "q", "l"};
    vector<string> listC = {"a", "s", "d", "b", "q", "f", "v"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "11/18/13";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> listA = {"i", "w", "e", "u", "r", "q", "g", "j"};
    vector<string> listB = {"r", "q", "l", "t", "a", "e", "j"};
    vector<string> listC = {"w", "a", "e", "q", "z", "r", "t", "l"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "16/11/14";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> listA = {"a", "c", "f", "b"};
    vector<string> listB = {"b", "c", "e", "g", "f"};
    vector<string> listC = {"a", "b", "f", "c", "g"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "5/8/7";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> listA = {"b", "g", "h", "f", "d", "e"};
    vector<string> listB = {"h", "d", "b", "f", "a", "e", "c"};
    vector<string> listC = {"f", "h", "c", "g", "d", "b"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "8/11/8";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> listA = {"e", "h", "d", "b", "a", "c", "f", "g"};
    vector<string> listB = {"a", "c", "d", "h", "g", "e"};
    vector<string> listC = {"b", "e", "c", "d", "g"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "13/8/6";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> listA = {"d", "h", "c", "a", "e", "f"};
    vector<string> listB = {"g", "a", "c", "f"};
    vector<string> listC = {"a", "g", "d", "c", "f", "h"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "10/5/9";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> listA = {"h", "a", "f"};
    vector<string> listB = {"c", "f"};
    vector<string> listC = {"a"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "7/5/2";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> listA = {"jxiufpifqaluzjjoxmii", "botkegnhwkeppoyoimnn", "docsmqttvzujhsfxttez", "jcinklwvhsksgzyvezms", "ewhscmrtmvoupxnxirtm", "orqsnbrfdyfmdjkmuoqa", "rdxgecmjdvxogoosydak", "epxlnozrhxxjeeclitsi", "xuwsmpocgnmpifxofznr", "aadwvrmnftahiamzwkir", "giefeppsutusuikwfpxi", "zgpiucdrunjqukslqigj", "wgfvidprvixasvowmgjw", "jikawmtnzuwsqzufhdur", "eekyfnmzwddnmumcmfwo", "flyhhqfwgvhlpkhjkpcq", "avtacddcbufbqdlbcakd", "yipxabhorlamzxhtxmid", "ccoirhrlwlhjmlbplpal", "wkxpdrzycokixgywnakx", "mnbseiieexvnznsvlzjb", "wlodoiycaqvabnmdowcc", "qbeufppiwijqmgfpcpis", "oczujnsbzltybedubzve", "yylhookgxjeftylcekru", "eskldcgyggsogcmtdiap", "qypcqlufcpzpmzrplybi", "icxgjmbeasxlhuzuizzi", "neldpsxspniudbkqfbsp", "gystblovppwmnagydfyz", "adhktpkbaimtealvzuxv", "ajwtzcidaptoytwqdcvx", "dfqtfpeikgffiwglcgby", "dlblviildstysepurkqd", "wgsctvydjbvrcjzcjibv", "dsbdvwcoprgqzknbscjn", "qztwcipcswvdffichzuj", "iegmrrmxvuolflavhmja", "sxsxxgbsxaaexqxreyca", "opzfbjcbquhxbkgstfby", "lazzysfmscoqvxdcpkap", "akjggbdhexsaamnoouav", "jytponrpqfanenrivchy", "awrkkktmfuqydvhyhnxi", "tnwcrwzbtjhdzozceapa", "rsjukjnrrtotokhstuds", "exzpjgwkrqounqedilss", "zwjilpdsgzttpdambzoq", "xqnwwijjmcnwdllkdxhl", "tuzyhqzmpzflvtwpiayr"};
    vector<string> listB = {"sxsxxgbsxaaexqxreyca", "jikawmtnzuwsqzufhdur", "avtacddcbufbqdlbcakd", "akjggbdhexsaamnoouav", "jcinklwvhsksgzyvezms", "xqnwwijjmcnwdllkdxhl", "jxiufpifqaluzjjoxmii", "lazzysfmscoqvxdcpkap", "orqsnbrfdyfmdjkmuoqa", "neldpsxspniudbkqfbsp", "wkxpdrzycokixgywnakx", "epxlnozrhxxjeeclitsi", "qztwcipcswvdffichzuj", "icxgjmbeasxlhuzuizzi", "yipxabhorlamzxhtxmid", "ccoirhrlwlhjmlbplpal", "dfqtfpeikgffiwglcgby", "yylhookgxjeftylcekru", "rsjukjnrrtotokhstuds", "zgpiucdrunjqukslqigj", "dsbdvwcoprgqzknbscjn", "tnwcrwzbtjhdzozceapa", "docsmqttvzujhsfxttez", "jytponrpqfanenrivchy", "iegmrrmxvuolflavhmja", "dlblviildstysepurkqd", "awrkkktmfuqydvhyhnxi", "rdxgecmjdvxogoosydak", "exzpjgwkrqounqedilss", "qypcqlufcpzpmzrplybi", "eekyfnmzwddnmumcmfwo", "ajwtzcidaptoytwqdcvx", "giefeppsutusuikwfpxi", "xuwsmpocgnmpifxofznr", "botkegnhwkeppoyoimnn", "flyhhqfwgvhlpkhjkpcq", "aadwvrmnftahiamzwkir", "zwjilpdsgzttpdambzoq", "oczujnsbzltybedubzve", "wgsctvydjbvrcjzcjibv", "tuzyhqzmpzflvtwpiayr", "ewhscmrtmvoupxnxirtm", "opzfbjcbquhxbkgstfby", "wlodoiycaqvabnmdowcc", "eskldcgyggsogcmtdiap", "mnbseiieexvnznsvlzjb", "adhktpkbaimtealvzuxv", "qbeufppiwijqmgfpcpis", "wgfvidprvixasvowmgjw", "gystblovppwmnagydfyz"};
    vector<string> listC = {"wkxpdrzycokixgywnakx", "giefeppsutusuikwfpxi", "wgsctvydjbvrcjzcjibv", "tnwcrwzbtjhdzozceapa", "docsmqttvzujhsfxttez", "xqnwwijjmcnwdllkdxhl", "opzfbjcbquhxbkgstfby", "gystblovppwmnagydfyz", "yipxabhorlamzxhtxmid", "avtacddcbufbqdlbcakd", "jytponrpqfanenrivchy", "ewhscmrtmvoupxnxirtm", "jikawmtnzuwsqzufhdur", "wlodoiycaqvabnmdowcc", "aadwvrmnftahiamzwkir", "eekyfnmzwddnmumcmfwo", "jxiufpifqaluzjjoxmii", "adhktpkbaimtealvzuxv", "zgpiucdrunjqukslqigj", "rdxgecmjdvxogoosydak", "epxlnozrhxxjeeclitsi", "neldpsxspniudbkqfbsp", "sxsxxgbsxaaexqxreyca", "yylhookgxjeftylcekru", "qztwcipcswvdffichzuj", "awrkkktmfuqydvhyhnxi", "ajwtzcidaptoytwqdcvx", "jcinklwvhsksgzyvezms", "icxgjmbeasxlhuzuizzi", "mnbseiieexvnznsvlzjb", "dfqtfpeikgffiwglcgby", "eskldcgyggsogcmtdiap", "lazzysfmscoqvxdcpkap", "exzpjgwkrqounqedilss", "dlblviildstysepurkqd", "tuzyhqzmpzflvtwpiayr", "ccoirhrlwlhjmlbplpal", "qypcqlufcpzpmzrplybi", "wgfvidprvixasvowmgjw", "oczujnsbzltybedubzve", "zwjilpdsgzttpdambzoq", "qbeufppiwijqmgfpcpis", "akjggbdhexsaamnoouav", "rsjukjnrrtotokhstuds", "orqsnbrfdyfmdjkmuoqa", "iegmrrmxvuolflavhmja", "botkegnhwkeppoyoimnn", "xuwsmpocgnmpifxofznr", "dsbdvwcoprgqzknbscjn", "flyhhqfwgvhlpkhjkpcq"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "50/50/50";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> listA = {"xfkrtcvpbnfcntonrici", "qvommquotwvumdxgwoue", "qgkxmnycaaeqvbzwculz", "gubgukzmwcqclmbukivo", "hvweqtuxbcofssvfvnur", "fchqylglcpnlujrjfyxu", "rhbqwdtlpygelebnixhr", "ndmrucvglhgeflypcesg", "ocklxjfctzxoewmmusvj", "uqucymnqihfrgveopnlk", "vpnmirabkxnjhsbkgtji", "qekonxtgmrzztkzwipqh", "adtasomumypsimhabozd", "dqgjhrvxsqwlbycpgvab", "plrqhjfgmnhclspowpsb", "aqkirspcjlzncgtksqma", "hweahxviwczdgzsiqeor", "nbwmxedybhluquzxssyt", "zuoojrsdloisgeublgzc", "kelhizkdcgvpjfivsibm", "twnbquknyurebjsspwmz", "qirldvqkkvhdnrxjunmn", "vlfqkcknyxbmssbhvzlp", "dtbuoyudfynbtehvuxre", "mysnfjtrzxdhmgkvzjml", "ojknipbduftmdndlgogz", "oxyilltsoqlbangfyntk", "kfirkyeqedgrjlroshkc", "mgxskvhnrmwqshsmpzop", "zetbmegizmexadjmmktr", "drfcmayffbcwpouazcnj", "meygheyxmpxhhrucnwva", "hbdoditsxfqpminnnmhg", "qwqhauikjhozgyyqfnls", "jedwoonemxdpswyqvvuo", "epbxgdgzzjcofqopmbdr", "dgucdmohnxsuftmryafn", "ptvynceajxalyvrzligz", "tvnxuytxirjcggtegbsx", "sfufxepircuqimfjjwcb", "qqwlbimyfhzartquqqtr", "rbqxyaxvdnfegowjzesz", "nrrzyfzcwnjwrqiqihoq", "hduxexzbrtchpylnedhb", "wflrxvnbhyffbjtaafor", "gwxipchqypbtsxvojhlj", "fdhnvcgryeuhqzjwsjds", "nktkgbltleqqcmzyhdsp", "ynbimknabhiblakfkvnk", "pehjmifygssnllmnjkjo"};
    vector<string> listB = {"fzhkjoypysjojnbnefjn", "rakosenkgxljbktqomvb", "hofhnrlekgcyaojtuesi", "jxakjefzuoycddvngria", "qubovwwvzenmbdndhqiv", "konxlzbuwdlcsfdkgaru", "iawxbxtpxkrqsdgphjda", "vrwhqniuoraqsznlxnfk", "tsmfjwdyczwmtjejzzgi", "uiawvkkozkcotojrewdr", "gnyuhmlgdvymvetvquga", "dmzscbaevbvqkluyhikz", "nodsledmhhyewaladhfv", "nqxoifnxaufbbemxhpkr", "cbrvmrtjyexeapltbfcz", "emmkncsbzamedncbvsef", "zslhxhgpiqzksglkybwy", "kxpydsvvajbkzcmuzogv", "qbhxdyhycxuoaqgduzdb", "cokwflbbdfizqjdufmkq", "nblvqoatcjgvfudumure", "sgtafvdwzffjygvweecq", "frvahedrirvijbibuddv", "muyzxsznxkpbuniufnid", "nryllsyhuszkvspvoitl", "yyzfsxgtocgcrptsaucy", "bampcnilqadkduvizwgl", "akmeqyljhexxkycygcuz", "cuocerpgfvorvtifveod", "whfmjpitkkuyrepxzqvo", "wvootvkqrnjervxkgvtd", "couiufzhkpecveikfukw", "raktvmgmkkhyrnyrdoit", "veqifnicwrnbyibsxube", "gsqxbcijtlhrzyzolndd", "becacwcejkvlkuetfyld", "ftsafuzltfbogvyokehw", "phtupzcvxrjowgvjayqx", "srmvrxpcpxicbuocbmka", "xjyvifivohxzqncxegqe", "eunnkjayaiuuquvndgbk", "bvndugtizbdqvlncydah", "mfrvvpvkpozqfgiolwfv", "yomtwsnkhuczgtbzrrvl", "cicozocahnuwolaggcnx", "verpxppfhyvwvyunzqer", "lueopdrhaxmbwoqnasqv", "gxoqyyxijgnnmerodcsf", "bhzfjmdboafiblqobygv", "oouqmrnrlxrlyiqhatbp"};
    vector<string> listC = {"yurmlviyzxyehuulyazh", "kzpbuothwtiudcqunpqw", "cnvqbjjgzuwgqmebylun", "qmnblcdtfuhcgjetvorr", "fuchbroqzueqoujiuzaw", "kolqloagqyjfychzxqyu", "usnzlwcrddryjsvmltmu", "xahiemslbatqrizboddo", "wpjgkuonopumoowpnbpa", "qurlotbmuhykviiggfnw", "sdfsxsuqnkxafxtoqodk", "webnlqdmtrspfgejmepz", "hhrammoekaxmjdawmgrr", "sjmaeokuskcqxtgijyuq", "miwjbtjdanohykyfndwc", "ixuyieyzwksuehdsqtoy", "obimvacwlhcioesrlkth", "xlrfdnfnniuetlhvwmhn", "zfuwtzvikwdyspyhcemk", "rgqhbnafxnlioivxlehe", "eiaeoexkphzsndshcuxw", "vdndlexwnkwymncscatr", "fwhodcfbkcbirmqtyvzo", "kloufqtokttacwhwpieo", "dkkmlsfhghoplofijccd", "ddjmjwvimimrdztwdjnw", "xqgmbidnnhecyivxnrtp", "nembwhbfagidcaxswflw", "vlioacwyojdrggnlihbw", "qhbhbpmmrfgnugmhtjix", "lwhjoyyfpiwbpswrrzqd", "mqfxjvfzdascgfoelner", "swssnejwqtsjofhiztxc", "bzawhfcrrxgxlshoofic", "cucetmimphgnliwdyzeq", "jlvvqafysbczkvjgmwhq", "bpngucynxkfacogpnwur", "caekvcazqzeovrqkvmpt", "nwjslbargxurxedvcgbt", "whffxkavdzpztjlzunjt", "wyjhpcgdndpribzipyrd", "vnklnvkteooowbnjdrsa", "ivgjuhtutglviylbnzle", "jcxbiatjrvnkvyugueau", "vvairhyrmvkfeoazovrk", "ajyqqzefvsprbywkrnia", "xdqjkcovtanuubnwlrmp", "imueyfccwzghyoxpyqkh", "dihuodtwiwfsnpkknzuh", "klypkqyyasgawicttbru"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "150/150/150";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> listA = {"aaaaaaaaaaaaaaaaaaao", "aaaaaaaaaaaaaaaaaazn", "aaaaaaaaaaaaaaaaaanh", "aaaaaaaaaaaaaaaaaavw", "aaaaaaaaaaaaaaaaaarf", "aaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaatj", "aaaaaaaaaaaaaaaaaatf", "aaaaaaaaaaaaaaaaaass", "aaaaaaaaaaaaaaaaaabh", "aaaaaaaaaaaaaaaaaafb", "aaaaaaaaaaaaaaaaaahg", "aaaaaaaaaaaaaaaaaacz", "aaaaaaaaaaaaaaaaaadb", "aaaaaaaaaaaaaaaaaahd", "aaaaaaaaaaaaaaaaaaix", "aaaaaaaaaaaaaaaaaapf", "aaaaaaaaaaaaaaaaaadg", "aaaaaaaaaaaaaaaaaabb", "aaaaaaaaaaaaaaaaaabo", "aaaaaaaaaaaaaaaaaatm", "aaaaaaaaaaaaaaaaaalw", "aaaaaaaaaaaaaaaaaasc", "aaaaaaaaaaaaaaaaaafq", "aaaaaaaaaaaaaaaaaaim", "aaaaaaaaaaaaaaaaaays", "aaaaaaaaaaaaaaaaaaoy", "aaaaaaaaaaaaaaaaaazh", "aaaaaaaaaaaaaaaaaalx", "aaaaaaaaaaaaaaaaaanq", "aaaaaaaaaaaaaaaaaakv", "aaaaaaaaaaaaaaaaaagp", "aaaaaaaaaaaaaaaaaaep", "aaaaaaaaaaaaaaaaaajv", "aaaaaaaaaaaaaaaaaavf", "aaaaaaaaaaaaaaaaaayh", "aaaaaaaaaaaaaaaaaauy", "aaaaaaaaaaaaaaaaaaga", "aaaaaaaaaaaaaaaaaaqo", "aaaaaaaaaaaaaaaaaavz", "aaaaaaaaaaaaaaaaaatb", "aaaaaaaaaaaaaaaaaajl", "aaaaaaaaaaaaaaaaaast", "aaaaaaaaaaaaaaaaaadk", "aaaaaaaaaaaaaaaaaaod", "aaaaaaaaaaaaaaaaaagc", "aaaaaaaaaaaaaaaaaaea", "aaaaaaaaaaaaaaaaaawy", "aaaaaaaaaaaaaaaaaawc", "aaaaaaaaaaaaaaaaabdu"};
    vector<string> listB = {"aaaaaaaaaaaaaaaaaaaf", "aaaaaaaaaaaaaaaaaaut", "aaaaaaaaaaaaaaaaaaeh", "aaaaaaaaaaaaaaaaaasa", "aaaaaaaaaaaaaaaaaany", "aaaaaaaaaaaaaaaaaayl", "aaaaaaaaaaaaaaaaaaop", "aaaaaaaaaaaaaaaaaalq", "aaaaaaaaaaaaaaaaaacm", "aaaaaaaaaaaaaaaaaaue", "aaaaaaaaaaaaaaaaaank", "aaaaaaaaaaaaaaaaaafo", "aaaaaaaaaaaaaaaaaarg", "aaaaaaaaaaaaaaaaaalf", "aaaaaaaaaaaaaaaaaajt", "aaaaaaaaaaaaaaaaaavv", "aaaaaaaaaaaaaaaaaajw", "aaaaaaaaaaaaaaaaaary", "aaaaaaaaaaaaaaaaaalc", "aaaaaaaaaaaaaaaaaaqv", "aaaaaaaaaaaaaaaaaafx", "aaaaaaaaaaaaaaaaaagy", "aaaaaaaaaaaaaaaaaanr", "aaaaaaaaaaaaaaaaaavl", "aaaaaaaaaaaaaaaaaaxa", "aaaaaaaaaaaaaaaaaayu", "aaaaaaaaaaaaaaaaaabz", "aaaaaaaaaaaaaaaaaavw", "aaaaaaaaaaaaaaaaaapo", "aaaaaaaaaaaaaaaaaalj", "aaaaaaaaaaaaaaaaaatl", "aaaaaaaaaaaaaaaaaaja", "aaaaaaaaaaaaaaaaaajl", "aaaaaaaaaaaaaaaaaavs", "aaaaaaaaaaaaaaaaaaqi", "aaaaaaaaaaaaaaaaaafw", "aaaaaaaaaaaaaaaaaare", "aaaaaaaaaaaaaaaaaauj", "aaaaaaaaaaaaaaaaaawa", "aaaaaaaaaaaaaaaaaaak", "aaaaaaaaaaaaaaaaaatz", "aaaaaaaaaaaaaaaaaala", "aaaaaaaaaaaaaaaaaajj", "aaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaasd", "aaaaaaaaaaaaaaaaaaiz", "aaaaaaaaaaaaaaaaaavh", "aaaaaaaaaaaaaaaaabvh", "aaaaaaaaaaaaaaaaabvi", "aaaaaaaaaaaaaaaaacdu"};
    vector<string> listC = {"aaaaaaaaaaaaaaaaaaxi", "aaaaaaaaaaaaaaaaaaua", "aaaaaaaaaaaaaaaaaaix", "aaaaaaaaaaaaaaaaaabk", "aaaaaaaaaaaaaaaaaaxe", "aaaaaaaaaaaaaaaaaarm", "aaaaaaaaaaaaaaaaaacg", "aaaaaaaaaaaaaaaaaajf", "aaaaaaaaaaaaaaaaaaaq", "aaaaaaaaaaaaaaaaaayv", "aaaaaaaaaaaaaaaaaaui", "aaaaaaaaaaaaaaaaaakb", "aaaaaaaaaaaaaaaaaaau", "aaaaaaaaaaaaaaaaaaag", "aaaaaaaaaaaaaaaaaamo", "aaaaaaaaaaaaaaaaaari", "aaaaaaaaaaaaaaaaaami", "aaaaaaaaaaaaaaaaaasj", "aaaaaaaaaaaaaaaaaaec", "aaaaaaaaaaaaaaaaaaxf", "aaaaaaaaaaaaaaaaaaiz", "aaaaaaaaaaaaaaaaaayw", "aaaaaaaaaaaaaaaaaahk", "aaaaaaaaaaaaaaaaaati", "aaaaaaaaaaaaaaaaaahs", "aaaaaaaaaaaaaaaaaaqo", "aaaaaaaaaaaaaaaaaaqj", "aaaaaaaaaaaaaaaaaayp", "aaaaaaaaaaaaaaaaaabl", "aaaaaaaaaaaaaaaaaafq", "aaaaaaaaaaaaaaaaaakf", "aaaaaaaaaaaaaaaaaapg", "aaaaaaaaaaaaaaaaaabm", "aaaaaaaaaaaaaaaaaamx", "aaaaaaaaaaaaaaaaaaij", "aaaaaaaaaaaaaaaaaald", "aaaaaaaaaaaaaaaaaaed", "aaaaaaaaaaaaaaaaaaxy", "aaaaaaaaaaaaaaaaaapb", "aaaaaaaaaaaaaaaaaadm", "aaaaaaaaaaaaaaaaaauz", "aaaaaaaaaaaaaaaaaaqe", "aaaaaaaaaaaaaaaaaagu", "aaaaaaaaaaaaaaaaaavi", "aaaaaaaaaaaaaaaaaatr", "aaaaaaaaaaaaaaaaaany", "aaaaaaaaaaaaaaaaaaws", "aaaaaaaaaaaaaaaaaayr", "aaaaaaaaaaaaaaaaabyh", "aaaaaaaaaaaaaaaaaddu"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "145/145/144";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> listA = {"aaaaaaaaaaaaaaaaaagf", "aaaaaaaaaaaaaaaaaamt", "aaaaaaaaaaaaaaaaaaxe", "aaaaaaaaaaaaaaaaaahy", "aaaaaaaaaaaaaaaaaaqs", "aaaaaaaaaaaaaaaaaaih", "aaaaaaaaaaaaaaaaaabj", "aaaaaaaaaaaaaaaaaaze", "aaaaaaaaaaaaaaaaaalg", "aaaaaaaaaaaaaaaaaaah", "aaaaaaaaaaaaaaaaaarg", "aaaaaaaaaaaaaaaaaaqr", "aaaaaaaaaaaaaaaaaazu", "aaaaaaaaaaaaaaaaaawz", "aaaaaaaaaaaaaaaaaavb", "aaaaaaaaaaaaaaaaaave", "aaaaaaaaaaaaaaaaaahd", "aaaaaaaaaaaaaaaaaavm", "aaaaaaaaaaaaaaaaaaeq", "aaaaaaaaaaaaaaaaaads", "aaaaaaaaaaaaaaaaaack", "aaaaaaaaaaaaaaaaaaxg", "aaaaaaaaaaaaaaaaaakb", "aaaaaaaaaaaaaaaaaaqc", "aaaaaaaaaaaaaaaaaatk", "aaaaaaaaaaaaaaaaaaum", "aaaaaaaaaaaaaaaaaakg", "aaaaaaaaaaaaaaaaaajb", "aaaaaaaaaaaaaaaaaahl", "aaaaaaaaaaaaaaaaaams", "aaaaaaaaaaaaaaaaaazn", "aaaaaaaaaaaaaaaaaalk", "aaaaaaaaaaaaaaaaaalc", "aaaaaaaaaaaaaaaaaaub", "aaaaaaaaaaaaaaaaaakv", "aaaaaaaaaaaaaaaaaafm", "aaaaaaaaaaaaaaaaaamr", "aaaaaaaaaaaaaaaaaawb", "aaaaaaaaaaaaaaaaaawq", "aaaaaaaaaaaaaaaaaauk", "aaaaaaaaaaaaaaaaaalb", "aaaaaaaaaaaaaaaaaarj", "aaaaaaaaaaaaaaaaaahk", "aaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaaui", "aaaaaaaaaaaaaaaaaaga", "aaaaaaaaaaaaaaaaaadt", "aaaaaaaaaaaaaaaaaazg", "aaaaaaaaaaaaaaaaaajf", "aaaaaaaaaaaaaaaaabdu"};
    vector<string> listB = {"aaaaaaaaaaaaaaaaaaul", "aaaaaaaaaaaaaaaaaawc", "aaaaaaaaaaaaaaaaaarx", "aaaaaaaaaaaaaaaaaazr", "aaaaaaaaaaaaaaaaaatl", "aaaaaaaaaaaaaaaaaafc", "aaaaaaaaaaaaaaaaaaig", "aaaaaaaaaaaaaaaaaabm", "aaaaaaaaaaaaaaaaaakd", "aaaaaaaaaaaaaaaaaaik", "aaaaaaaaaaaaaaaaaaid", "aaaaaaaaaaaaaaaaaawm", "aaaaaaaaaaaaaaaaaafw", "aaaaaaaaaaaaaaaaaafy", "aaaaaaaaaaaaaaaaaagc", "aaaaaaaaaaaaaaaaaapl", "aaaaaaaaaaaaaaaaaaff", "aaaaaaaaaaaaaaaaaajq", "aaaaaaaaaaaaaaaaaalv", "aaaaaaaaaaaaaaaaaagh", "aaaaaaaaaaaaaaaaaaja", "aaaaaaaaaaaaaaaaaacq", "aaaaaaaaaaaaaaaaaaiu", "aaaaaaaaaaaaaaaaaanv", "aaaaaaaaaaaaaaaaaaso", "aaaaaaaaaaaaaaaaaadp", "aaaaaaaaaaaaaaaaaaqu", "aaaaaaaaaaaaaaaaaahd", "aaaaaaaaaaaaaaaaaaug", "aaaaaaaaaaaaaaaaaaaj", "aaaaaaaaaaaaaaaaaake", "aaaaaaaaaaaaaaaaaacf", "aaaaaaaaaaaaaaaaaauc", "aaaaaaaaaaaaaaaaaawv", "aaaaaaaaaaaaaaaaaamb", "aaaaaaaaaaaaaaaaaauw", "aaaaaaaaaaaaaaaaaaif", "aaaaaaaaaaaaaaaaaald", "aaaaaaaaaaaaaaaaaabc", "aaaaaaaaaaaaaaaaaakb", "aaaaaaaaaaaaaaaaaaex", "aaaaaaaaaaaaaaaaaaev", "aaaaaaaaaaaaaaaaaaxk", "aaaaaaaaaaaaaaaaaara", "aaaaaaaaaaaaaaaaaalx", "aaaaaaaaaaaaaaaaaagz", "aaaaaaaaaaaaaaaaaaus", "aaaaaaaaaaaaaaaaaatr", "aaaaaaaaaaaaaaaaabyh", "aaaaaaaaaaaaaaaaacdu"};
    vector<string> listC = {"aaaaaaaaaaaaaaaaaasx", "aaaaaaaaaaaaaaaaaayb", "aaaaaaaaaaaaaaaaaabv", "aaaaaaaaaaaaaaaaaaxb", "aaaaaaaaaaaaaaaaaara", "aaaaaaaaaaaaaaaaaafm", "aaaaaaaaaaaaaaaaaand", "aaaaaaaaaaaaaaaaaaru", "aaaaaaaaaaaaaaaaaajd", "aaaaaaaaaaaaaaaaaafo", "aaaaaaaaaaaaaaaaaayr", "aaaaaaaaaaaaaaaaaaox", "aaaaaaaaaaaaaaaaaakj", "aaaaaaaaaaaaaaaaaakn", "aaaaaaaaaaaaaaaaaale", "aaaaaaaaaaaaaaaaaavt", "aaaaaaaaaaaaaaaaaaps", "aaaaaaaaaaaaaaaaaaow", "aaaaaaaaaaaaaaaaaahv", "aaaaaaaaaaaaaaaaaalz", "aaaaaaaaaaaaaaaaaabk", "aaaaaaaaaaaaaaaaaavd", "aaaaaaaaaaaaaaaaaaff", "aaaaaaaaaaaaaaaaaall", "aaaaaaaaaaaaaaaaaakx", "aaaaaaaaaaaaaaaaaatx", "aaaaaaaaaaaaaaaaaaqc", "aaaaaaaaaaaaaaaaaayq", "aaaaaaaaaaaaaaaaaaqm", "aaaaaaaaaaaaaaaaaazh", "aaaaaaaaaaaaaaaaaafy", "aaaaaaaaaaaaaaaaaawp", "aaaaaaaaaaaaaaaaaasz", "aaaaaaaaaaaaaaaaaayy", "aaaaaaaaaaaaaaaaaavz", "aaaaaaaaaaaaaaaaaazq", "aaaaaaaaaaaaaaaaaahg", "aaaaaaaaaaaaaaaaaaun", "aaaaaaaaaaaaaaaaaalx", "aaaaaaaaaaaaaaaaaapu", "aaaaaaaaaaaaaaaaaayl", "aaaaaaaaaaaaaaaaaaca", "aaaaaaaaaaaaaaaaaaxn", "aaaaaaaaaaaaaaaaaadm", "aaaaaaaaaaaaaaaaaazx", "aaaaaaaaaaaaaaaaaamj", "aaaaaaaaaaaaaaaaaatp", "aaaaaaaaaaaaaaaaaaoa", "aaaaaaaaaaaaaaaaaaob", "aaaaaaaaaaaaaaaaaddu"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "145/143/144";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> listA = {"aaaaaaaaaaaaaaaaaafn", "aaaaaaaaaaaaaaaaaaes", "aaaaaaaaaaaaaaaaaaxn", "aaaaaaaaaaaaaaaaaaie", "aaaaaaaaaaaaaaaaaaeq", "aaaaaaaaaaaaaaaaaaph", "aaaaaaaaaaaaaaaaaafk", "aaaaaaaaaaaaaaaaaacs", "aaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaaur", "aaaaaaaaaaaaaaaaaamw", "aaaaaaaaaaaaaaaaaazn", "aaaaaaaaaaaaaaaaaavy", "aaaaaaaaaaaaaaaaaatv", "aaaaaaaaaaaaaaaaaapv", "aaaaaaaaaaaaaaaaaapn", "aaaaaaaaaaaaaaaaaagc", "aaaaaaaaaaaaaaaaaazl", "aaaaaaaaaaaaaaaaaanz", "aaaaaaaaaaaaaaaaaajs", "aaaaaaaaaaaaaaaaaakh", "aaaaaaaaaaaaaaaaaakk", "aaaaaaaaaaaaaaaaaadt", "aaaaaaaaaaaaaaaaaaqj", "aaaaaaaaaaaaaaaaaada", "aaaaaaaaaaaaaaaaaayj", "aaaaaaaaaaaaaaaaaawi", "aaaaaaaaaaaaaaaaaaop", "aaaaaaaaaaaaaaaaaapp", "aaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaahi", "aaaaaaaaaaaaaaaaaahf", "aaaaaaaaaaaaaaaaaavv", "aaaaaaaaaaaaaaaaaaot", "aaaaaaaaaaaaaaaaaary", "aaaaaaaaaaaaaaaaaaip", "aaaaaaaaaaaaaaaaaadc", "aaaaaaaaaaaaaaaaaaqo", "aaaaaaaaaaaaaaaaaaeg", "aaaaaaaaaaaaaaaaaadd", "aaaaaaaaaaaaaaaaaatc", "aaaaaaaaaaaaaaaaaauu", "aaaaaaaaaaaaaaaaaazv", "aaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaazm", "aaaaaaaaaaaaaaaaaaof", "aaaaaaaaaaaaaaaaaapl", "aaaaaaaaaaaaaaaaaahm", "aaaaaaaaaaaaaaaaabyh", "aaaaaaaaaaaaaaaaardu"};
    vector<string> listB = {"aaaaaaaaaaaaaaaaaagc", "aaaaaaaaaaaaaaaaaazl", "aaaaaaaaaaaaaaaaaaeg", "aaaaaaaaaaaaaaaaaatc", "aaaaaaaaaaaaaaaaaawi", "aaaaaaaaaaaaaaaaaadc", "aaaaaaaaaaaaaaaaaauu", "aaaaaaaaaaaaaaaaaavy", "aaaaaaaaaaaaaaaaaaur", "aaaaaaaaaaaaaaaaaaof", "aaaaaaaaaaaaaaaaaapl", "aaaaaaaaaaaaaaaaaapp", "aaaaaaaaaaaaaaaaaacs", "aaaaaaaaaaaaaaaaaahi", "aaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaahf", "aaaaaaaaaaaaaaaaaadd", "aaaaaaaaaaaaaaaaaaph", "aaaaaaaaaaaaaaaaaakh", "aaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaop", "aaaaaaaaaaaaaaaaaaot", "aaaaaaaaaaaaaaaaaazv", "aaaaaaaaaaaaaaaaaazn", "aaaaaaaaaaaaaaaaaaeq", "aaaaaaaaaaaaaaaaaajs", "aaaaaaaaaaaaaaaaaaxn", "aaaaaaaaaaaaaaaaaapv", "aaaaaaaaaaaaaaaaaapn", "aaaaaaaaaaaaaaaaaanz", "aaaaaaaaaaaaaaaaaaqo", "aaaaaaaaaaaaaaaaaada", "aaaaaaaaaaaaaaaaaatv", "aaaaaaaaaaaaaaaaaaqj", "aaaaaaaaaaaaaaaaaaie", "aaaaaaaaaaaaaaaaaazm", "aaaaaaaaaaaaaaaaaafk", "aaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaes", "aaaaaaaaaaaaaaaaaafn", "aaaaaaaaaaaaaaaaaamw", "aaaaaaaaaaaaaaaaaayj", "aaaaaaaaaaaaaaaaaakk", "aaaaaaaaaaaaaaaaaadt", "aaaaaaaaaaaaaaaaaavv", "aaaaaaaaaaaaaaaaaahm", "aaaaaaaaaaaaaaaaaaip", "aaaaaaaaaaaaaaaaaary", "aaaaaaaaaaaaaaaaabyh", "aaaaaaaaaaaaaaaaardu"};
    vector<string> listC = {"aaaaaaaaaaaaaaaaaapl", "aaaaaaaaaaaaaaaaaada", "aaaaaaaaaaaaaaaaaaur", "aaaaaaaaaaaaaaaaaawi", "aaaaaaaaaaaaaaaaaadt", "aaaaaaaaaaaaaaaaaaie", "aaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaauu", "aaaaaaaaaaaaaaaaaapp", "aaaaaaaaaaaaaaaaaavv", "aaaaaaaaaaaaaaaaaakk", "aaaaaaaaaaaaaaaaaamw", "aaaaaaaaaaaaaaaaaaqj", "aaaaaaaaaaaaaaaaaapv", "aaaaaaaaaaaaaaaaaary", "aaaaaaaaaaaaaaaaaaeq", "aaaaaaaaaaaaaaaaaaip", "aaaaaaaaaaaaaaaaaazn", "aaaaaaaaaaaaaaaaaazm", "aaaaaaaaaaaaaaaaaaop", "aaaaaaaaaaaaaaaaaaof", "aaaaaaaaaaaaaaaaaahi", "aaaaaaaaaaaaaaaaaakh", "aaaaaaaaaaaaaaaaaahm", "aaaaaaaaaaaaaaaaaazl", "aaaaaaaaaaaaaaaaaatv", "aaaaaaaaaaaaaaaaaahf", "aaaaaaaaaaaaaaaaaaqo", "aaaaaaaaaaaaaaaaaadc", "aaaaaaaaaaaaaaaaaafk", "aaaaaaaaaaaaaaaaaacs", "aaaaaaaaaaaaaaaaaaot", "aaaaaaaaaaaaaaaaaatc", "aaaaaaaaaaaaaaaaaaaw", "aaaaaaaaaaaaaaaaaazv", "aaaaaaaaaaaaaaaaaafn", "aaaaaaaaaaaaaaaaaagc", "aaaaaaaaaaaaaaaaaadd", "aaaaaaaaaaaaaaaaaavy", "aaaaaaaaaaaaaaaaaanz", "aaaaaaaaaaaaaaaaaayj", "aaaaaaaaaaaaaaaaaaph", "aaaaaaaaaaaaaaaaaajs", "aaaaaaaaaaaaaaaaaaeg", "aaaaaaaaaaaaaaaaaaxn", "aaaaaaaaaaaaaaaaaaam", "aaaaaaaaaaaaaaaaaaes", "aaaaaaaaaaaaaaaaaapn", "aaaaaaaaaaaaaaaaabyh", "aaaaaaaaaaaaaaaaardu"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "50/50/50";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> listA = {"aaaaaaaaaaaaaaaaaafn", "aaaaaaaaaaaaaaaaaahf", "aaaaaaaaaaaaaaaaaaue", "aaaaaaaaaaaaaaaaaato", "aaaaaaaaaaaaaaaaaafq", "aaaaaaaaaaaaaaaaaake", "aaaaaaaaaaaaaaaaaaqh", "aaaaaaaaaaaaaaaaaayp", "aaaaaaaaaaaaaaaaaajd", "aaaaaaaaaaaaaaaaaazk", "aaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaazs", "aaaaaaaaaaaaaaaaaann", "aaaaaaaaaaaaaaaaaazq", "aaaaaaaaaaaaaaaaaaus", "aaaaaaaaaaaaaaaaaazc", "aaaaaaaaaaaaaaaaaauv", "aaaaaaaaaaaaaaaaaagh", "aaaaaaaaaaaaaaaaaawy", "aaaaaaaaaaaaaaaaaasx", "aaaaaaaaaaaaaaaaaaip", "aaaaaaaaaaaaaaaaaayv", "aaaaaaaaaaaaaaaaaait", "aaaaaaaaaaaaaaaaaacc", "aaaaaaaaaaaaaaaaaaxy", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaom", "aaaaaaaaaaaaaaaaaabe", "aaaaaaaaaaaaaaaaaavj", "aaaaaaaaaaaaaaaaaaqr", "aaaaaaaaaaaaaaaaaara", "aaaaaaaaaaaaaaaaaajk", "aaaaaaaaaaaaaaaaaanz", "aaaaaaaaaaaaaaaaaabz", "aaaaaaaaaaaaaaaaaayz", "aaaaaaaaaaaaaaaaaaex", "aaaaaaaaaaaaaaaaaanb", "aaaaaaaaaaaaaaaaaavv", "aaaaaaaaaaaaaaaaaans", "aaaaaaaaaaaaaaaaaaud", "aaaaaaaaaaaaaaaaaasc", "aaaaaaaaaaaaaaaaaauy", "aaaaaaaaaaaaaaaaaagb", "aaaaaaaaaaaaaaaaaamh", "aaaaaaaaaaaaaaaaaajg", "aaaaaaaaaaaaaaaaaadv", "aaaaaaaaaaaaaaaaaauu", "aaaaaaaaaaaaaaaaaamm", "aaaaaaaaaaaaaaaaabyh", "aaaaaaaaaaaaaaaaardu"};
    vector<string> listB = {"aaaaaaaaaaaaaaaaaacc", "aaaaaaaaaaaaaaaaaayv", "aaaaaaaaaaaaaaaaaaex", "aaaaaaaaaaaaaaaaaaue", "aaaaaaaaaaaaaaaaaaip", "aaaaaaaaaaaaaaaaaavj", "aaaaaaaaaaaaaaaaaahf", "aaaaaaaaaaaaaaaaaayp", "aaaaaaaaaaaaaaaaaaom", "aaaaaaaaaaaaaaaaaabe", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaayz", "aaaaaaaaaaaaaaaaaaud", "aaaaaaaaaaaaaaaaaauy", "aaaaaaaaaaaaaaaaaann", "aaaaaaaaaaaaaaaaaajd", "aaaaaaaaaaaaaaaaaait", "aaaaaaaaaaaaaaaaaamm", "aaaaaaaaaaaaaaaaaasx", "aaaaaaaaaaaaaaaaaazq", "aaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaauv", "aaaaaaaaaaaaaaaaaawy", "aaaaaaaaaaaaaaaaaazs", "aaaaaaaaaaaaaaaaaajg", "aaaaaaaaaaaaaaaaaagb", "aaaaaaaaaaaaaaaaaajk", "aaaaaaaaaaaaaaaaaato", "aaaaaaaaaaaaaaaaaaxy", "aaaaaaaaaaaaaaaaaazc", "aaaaaaaaaaaaaaaaaasc", "aaaaaaaaaaaaaaaaaake", "aaaaaaaaaaaaaaaaaaus", "aaaaaaaaaaaaaaaaaafq", "aaaaaaaaaaaaaaaaaaqh", "aaaaaaaaaaaaaaaaaavv", "aaaaaaaaaaaaaaaaaabz", "aaaaaaaaaaaaaaaaaafn", "aaaaaaaaaaaaaaaaaara", "aaaaaaaaaaaaaaaaaaqr", "aaaaaaaaaaaaaaaaaanb", "aaaaaaaaaaaaaaaaaanz", "aaaaaaaaaaaaaaaaaauu", "aaaaaaaaaaaaaaaaaagh", "aaaaaaaaaaaaaaaaaazk", "aaaaaaaaaaaaaaaaaamh", "aaaaaaaaaaaaaaaaaadv", "aaaaaaaaaaaaaaaaaans", "aaaaaaaaaaaaaaaaabyh", "aaaaaaaaaaaaaaaaardu"};
    vector<string> listC = {"aaaaaaaaaaaaaaaaaacc", "aaaaaaaaaaaaaaaaaajk", "aaaaaaaaaaaaaaaaaanz", "aaaaaaaaaaaaaaaaaamh", "aaaaaaaaaaaaaaaaaato", "aaaaaaaaaaaaaaaaaabe", "aaaaaaaaaaaaaaaaaajd", "aaaaaaaaaaaaaaaaaajg", "aaaaaaaaaaaaaaaaaauy", "aaaaaaaaaaaaaaaaaazk", "aaaaaaaaaaaaaaaaaagb", "aaaaaaaaaaaaaaaaaagh", "aaaaaaaaaaaaaaaaaayp", "aaaaaaaaaaaaaaaaaauu", "aaaaaaaaaaaaaaaaaayz", "aaaaaaaaaaaaaaaaaafq", "aaaaaaaaaaaaaaaaaavj", "aaaaaaaaaaaaaaaaaaav", "aaaaaaaaaaaaaaaaaaus", "aaaaaaaaaaaaaaaaaait", "aaaaaaaaaaaaaaaaaawy", "aaaaaaaaaaaaaaaaaaip", "aaaaaaaaaaaaaaaaaahf", "aaaaaaaaaaaaaaaaaamm", "aaaaaaaaaaaaaaaaaavv", "aaaaaaaaaaaaaaaaaann", "aaaaaaaaaaaaaaaaaaud", "aaaaaaaaaaaaaaaaaans", "aaaaaaaaaaaaaaaaaaxy", "aaaaaaaaaaaaaaaaaake", "aaaaaaaaaaaaaaaaaadv", "aaaaaaaaaaaaaaaaaanb", "aaaaaaaaaaaaaaaaaasc", "aaaaaaaaaaaaaaaaaara", "aaaaaaaaaaaaaaaaaabz", "aaaaaaaaaaaaaaaaaauv", "aaaaaaaaaaaaaaaaaazc", "aaaaaaaaaaaaaaaaaaex", "aaaaaaaaaaaaaaaaaazs", "aaaaaaaaaaaaaaaaaaqh", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaazq", "aaaaaaaaaaaaaaaaaaom", "aaaaaaaaaaaaaaaaaaue", "aaaaaaaaaaaaaaaaaayv", "aaaaaaaaaaaaaaaaaaqr", "aaaaaaaaaaaaaaaaaafn", "aaaaaaaaaaaaaaaaaasx", "aaaaaaaaaaaaaaaaabyh", "aaaaaaaaaaaaaaaaardu"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "50/50/50";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> listA = {"aaaaaaaaaaaaaaaaaodb", "aaaaaaaaaaaaaaaaaykg", "aaaaaaaaaaaaaaaaabgq", "aaaaaaaaaaaaaaaaaani", "aaaaaaaaaaaaaaaaansm", "aaaaaaaaaaaaaaaaawwj", "aaaaaaaaaaaaaaaaaoir", "aaaaaaaaaaaaaaaaanbp", "aaaaaaaaaaaaaaaaapjj", "aaaaaaaaaaaaaaaaakfi", "aaaaaaaaaaaaaaaaakvu", "aaaaaaaaaaaaaaaaatlw", "aaaaaaaaaaaaaaaaaail", "aaaaaaaaaaaaaaaaafqv", "aaaaaaaaaaaaaaaaahuo", "aaaaaaaaaaaaaaaaadnh", "aaaaaaaaaaaaaaaaauhv", "aaaaaaaaaaaaaaaaallw", "aaaaaaaaaaaaaaaaagmi", "aaaaaaaaaaaaaaaaakoa", "aaaaaaaaaaaaaaaaacim", "aaaaaaaaaaaaaaaaasfw", "aaaaaaaaaaaaaaaaablv", "aaaaaaaaaaaaaaaaanix", "aaaaaaaaaaaaaaaaaldt", "aaaaaaaaaaaaaaaaaqsq", "aaaaaaaaaaaaaaaaajyr", "aaaaaaaaaaaaaaaaaoja", "aaaaaaaaaaaaaaaaasbs", "aaaaaaaaaaaaaaaaautc", "aaaaaaaaaaaaaaaaaolb", "aaaaaaaaaaaaaaaaaquu", "aaaaaaaaaaaaaaaaaniy", "aaaaaaaaaaaaaaaaaepz", "aaaaaaaaaaaaaaaaadpv", "aaaaaaaaaaaaaaaaasgw", "aaaaaaaaaaaaaaaaasht", "aaaaaaaaaaaaaaaaajln", "aaaaaaaaaaaaaaaaadwa", "aaaaaaaaaaaaaaaaagqu", "aaaaaaaaaaaaaaaaafeb", "aaaaaaaaaaaaaaaaacmb", "aaaaaaaaaaaaaaaaajxg", "aaaaaaaaaaaaaaaaaygf", "aaaaaaaaaaaaaaaaazat", "aaaaaaaaaaaaaaaaabfk", "aaaaaaaaaaaaaaaaakgq", "aaaaaaaaaaaaaaaaaxau", "aaaaaaaaaaaaaaaaardt", "aaaaaaaaaaaaaaaaardu"};
    vector<string> listB = {"aaaaaaaaaaaaaaaaagmi", "aaaaaaaaaaaaaaaaajyr", "aaaaaaaaaaaaaaaaasgw", "aaaaaaaaaaaaaaaaansm", "aaaaaaaaaaaaaaaaadpv", "aaaaaaaaaaaaaaaaabgq", "aaaaaaaaaaaaaaaaagqu", "aaaaaaaaaaaaaaaaatlw", "aaaaaaaaaaaaaaaaaldt", "aaaaaaaaaaaaaaaaaquu", "aaaaaaaaaaaaaaaaasbs", "aaaaaaaaaaaaaaaaardt", "aaaaaaaaaaaaaaaaaail", "aaaaaaaaaaaaaaaaanix", "aaaaaaaaaaaaaaaaajxg", "aaaaaaaaaaaaaaaaallw", "aaaaaaaaaaaaaaaaaani", "aaaaaaaaaaaaaaaaahuo", "aaaaaaaaaaaaaaaaanbp", "aaaaaaaaaaaaaaaaaykg", "aaaaaaaaaaaaaaaaautc", "aaaaaaaaaaaaaaaaakgq", "aaaaaaaaaaaaaaaaadnh", "aaaaaaaaaaaaaaaaaniy", "aaaaaaaaaaaaaaaaaodb", "aaaaaaaaaaaaaaaaaolb", "aaaaaaaaaaaaaaaaaygf", "aaaaaaaaaaaaaaaaauhv", "aaaaaaaaaaaaaaaaawwj", "aaaaaaaaaaaaaaaaafqv", "aaaaaaaaaaaaaaaaablv", "aaaaaaaaaaaaaaaaasfw", "aaaaaaaaaaaaaaaaaoja", "aaaaaaaaaaaaaaaaasht", "aaaaaaaaaaaaaaaaaoir", "aaaaaaaaaaaaaaaaaxau", "aaaaaaaaaaaaaaaaakfi", "aaaaaaaaaaaaaaaaafeb", "aaaaaaaaaaaaaaaaaqsq", "aaaaaaaaaaaaaaaaabfk", "aaaaaaaaaaaaaaaaazat", "aaaaaaaaaaaaaaaaakoa", "aaaaaaaaaaaaaaaaacmb", "aaaaaaaaaaaaaaaaapjj", "aaaaaaaaaaaaaaaaadwa", "aaaaaaaaaaaaaaaaakvu", "aaaaaaaaaaaaaaaaardu", "aaaaaaaaaaaaaaaaaepz", "aaaaaaaaaaaaaaaaacim", "aaaaaaaaaaaaaaaaajln"};
    vector<string> listC = {"aaaaaaaaaaaaaaaaaepz", "aaaaaaaaaaaaaaaaadnh", "aaaaaaaaaaaaaaaaasgw", "aaaaaaaaaaaaaaaaafeb", "aaaaaaaaaaaaaaaaaoir", "aaaaaaaaaaaaaaaaaoja", "aaaaaaaaaaaaaaaaahuo", "aaaaaaaaaaaaaaaaaygf", "aaaaaaaaaaaaaaaaasbs", "aaaaaaaaaaaaaaaaautc", "aaaaaaaaaaaaaaaaardt", "aaaaaaaaaaaaaaaaansm", "aaaaaaaaaaaaaaaaaail", "aaaaaaaaaaaaaaaaauhv", "aaaaaaaaaaaaaaaaagmi", "aaaaaaaaaaaaaaaaakgq", "aaaaaaaaaaaaaaaaaquu", "aaaaaaaaaaaaaaaaaolb", "aaaaaaaaaaaaaaaaafqv", "aaaaaaaaaaaaaaaaaani", "aaaaaaaaaaaaaaaaadwa", "aaaaaaaaaaaaaaaaacim", "aaaaaaaaaaaaaaaaacmb", "aaaaaaaaaaaaaaaaazat", "aaaaaaaaaaaaaaaaatlw", "aaaaaaaaaaaaaaaaawwj", "aaaaaaaaaaaaaaaaadpv", "aaaaaaaaaaaaaaaaajxg", "aaaaaaaaaaaaaaaaaldt", "aaaaaaaaaaaaaaaaakfi", "aaaaaaaaaaaaaaaaajyr", "aaaaaaaaaaaaaaaaajln", "aaaaaaaaaaaaaaaaakvu", "aaaaaaaaaaaaaaaaaqsq", "aaaaaaaaaaaaaaaaabgq", "aaaaaaaaaaaaaaaaallw", "aaaaaaaaaaaaaaaaanbp", "aaaaaaaaaaaaaaaaaniy", "aaaaaaaaaaaaaaaaanix", "aaaaaaaaaaaaaaaaasfw", "aaaaaaaaaaaaaaaaaxau", "aaaaaaaaaaaaaaaaaykg", "aaaaaaaaaaaaaaaaardu", "aaaaaaaaaaaaaaaaabfk", "aaaaaaaaaaaaaaaaasht", "aaaaaaaaaaaaaaaaagqu", "aaaaaaaaaaaaaaaaapjj", "aaaaaaaaaaaaaaaaaodb", "aaaaaaaaaaaaaaaaablv", "aaaaaaaaaaaaaaaaakoa"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "50/50/50";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> listA = {"aaaaaaaaaaaaaaaaavqq", "aaaaaaaaaaaaaaaaadzl", "aaaaaaaaaaaaaaaaacpk", "aaaaaaaaaaaaaaaaabgt", "aaaaaaaaaaaaaaaaamsn", "aaaaaaaaaaaaaaaaaoid", "aaaaaaaaaaaaaaaaabjs", "aaaaaaaaaaaaaaaaaonl", "aaaaaaaaaaaaaaaaaoon", "aaaaaaaaaaaaaaaaabvu", "aaaaaaaaaaaaaaaaayde", "aaaaaaaaaaaaaaaaabmv", "aaaaaaaaaaaaaaaaachi", "aaaaaaaaaaaaaaaaacwz", "aaaaaaaaaaaaaaaaadjl", "aaaaaaaaaaaaaaaaacfk", "aaaaaaaaaaaaaaaaavqf", "aaaaaaaaaaaaaaaaaozf", "aaaaaaaaaaaaaaaaaiiy", "aaaaaaaaaaaaaaaaaqhv", "aaaaaaaaaaaaaaaaakfj", "aaaaaaaaaaaaaaaaahzr", "aaaaaaaaaaaaaaaaafwv", "aaaaaaaaaaaaaaaaaqrq", "aaaaaaaaaaaaaaaaavfj", "aaaaaaaaaaaaaaaaapsr", "aaaaaaaaaaaaaaaaavmi", "aaaaaaaaaaaaaaaaahgo", "aaaaaaaaaaaaaaaaamcw", "aaaaaaaaaaaaaaaaapyy", "aaaaaaaaaaaaaaaaabcq", "aaaaaaaaaaaaaaaaatnj", "aaaaaaaaaaaaaaaaaklk", "aaaaaaaaaaaaaaaaaalk", "aaaaaaaaaaaaaaaaaosf", "aaaaaaaaaaaaaaaaatzb", "aaaaaaaaaaaaaaaaaktm", "aaaaaaaaaaaaaaaaacpx", "aaaaaaaaaaaaaaaaamma", "aaaaaaaaaaaaaaaaapjv", "aaaaaaaaaaaaaaaaawma", "aaaaaaaaaaaaaaaaawer", "aaaaaaaaaaaaaaaaaxbn", "aaaaaaaaaaaaaaaaawtc", "aaaaaaaaaaaaaaaaanet", "aaaaaaaaaaaaaaaaamqo", "aaaaaaaaaaaaaaaaaivv", "aaaaaaaaaaaaaaaaaido", "aaaaaaaaaaaaaaaaamva", "aaaaaaaaaaaaaaaaaqck"};
    vector<string> listB = {"aaaaaaaaaaaaaaaaapsr", "aaaaaaaaaaaaaaaaacpk", "aaaaaaaaaaaaaaaaaklk", "aaaaaaaaaaaaaaaaacfk", "aaaaaaaaaaaaaaaaacpx", "aaaaaaaaaaaaaaaaavmi", "aaaaaaaaaaaaaaaaaoid", "aaaaaaaaaaaaaaaaaiiy", "aaaaaaaaaaaaaaaaaktm", "aaaaaaaaaaaaaaaaadzl", "aaaaaaaaaaaaaaaaachi", "aaaaaaaaaaaaaaaaawer", "aaaaaaaaaaaaaaaaayde", "aaaaaaaaaaaaaaaaafwv", "aaaaaaaaaaaaaaaaabcq", "aaaaaaaaaaaaaaaaaivv", "aaaaaaaaaaaaaaaaahgo", "aaaaaaaaaaaaaaaaamqo", "aaaaaaaaaaaaaaaaakfj", "aaaaaaaaaaaaaaaaacwz", "aaaaaaaaaaaaaaaaabjs", "aaaaaaaaaaaaaaaaawtc", "aaaaaaaaaaaaaaaaavqq", "aaaaaaaaaaaaaaaaapyy", "aaaaaaaaaaaaaaaaaido", "aaaaaaaaaaaaaaaaanet", "aaaaaaaaaaaaaaaaapjv", "aaaaaaaaaaaaaaaaaqck", "aaaaaaaaaaaaaaaaavqf", "aaaaaaaaaaaaaaaaadjl", "aaaaaaaaaaaaaaaaaqhv", "aaaaaaaaaaaaaaaaamma", "aaaaaaaaaaaaaaaaatzb", "aaaaaaaaaaaaaaaaaqrq", "aaaaaaaaaaaaaaaaaonl", "aaaaaaaaaaaaaaaaaalk", "aaaaaaaaaaaaaaaaawma", "aaaaaaaaaaaaaaaaaozf", "aaaaaaaaaaaaaaaaamsn", "aaaaaaaaaaaaaaaaabvu", "aaaaaaaaaaaaaaaaamcw", "aaaaaaaaaaaaaaaaahzr", "aaaaaaaaaaaaaaaaaosf", "aaaaaaaaaaaaaaaaamva", "aaaaaaaaaaaaaaaaavfj", "aaaaaaaaaaaaaaaaaxbn", "aaaaaaaaaaaaaaaaaoon", "aaaaaaaaaaaaaaaaatnj", "aaaaaaaaaaaaaaaaabmv", "aaaaaaaaaaaaaaaaabgt"};
    vector<string> listC = {"aaaaaaaaaaaaaaaaakfj", "aaaaaaaaaaaaaaaaamva", "aaaaaaaaaaaaaaaaadzl", "aaaaaaaaaaaaaaaaawtc", "aaaaaaaaaaaaaaaaabjs", "aaaaaaaaaaaaaaaaacwz", "aaaaaaaaaaaaaaaaapjv", "aaaaaaaaaaaaaaaaapyy", "aaaaaaaaaaaaaaaaamcw", "aaaaaaaaaaaaaaaaatzb", "aaaaaaaaaaaaaaaaafwv", "aaaaaaaaaaaaaaaaamqo", "aaaaaaaaaaaaaaaaacpk", "aaaaaaaaaaaaaaaaamsn", "aaaaaaaaaaaaaaaaahzr", "aaaaaaaaaaaaaaaaavmi", "aaaaaaaaaaaaaaaaawma", "aaaaaaaaaaaaaaaaaozf", "aaaaaaaaaaaaaaaaaqrq", "aaaaaaaaaaaaaaaaabgt", "aaaaaaaaaaaaaaaaanet", "aaaaaaaaaaaaaaaaaktm", "aaaaaaaaaaaaaaaaaxbn", "aaaaaaaaaaaaaaaaabvu", "aaaaaaaaaaaaaaaaawer", "aaaaaaaaaaaaaaaaacfk", "aaaaaaaaaaaaaaaaaqck", "aaaaaaaaaaaaaaaaaosf", "aaaaaaaaaaaaaaaaaonl", "aaaaaaaaaaaaaaaaadjl", "aaaaaaaaaaaaaaaaaklk", "aaaaaaaaaaaaaaaaaqhv", "aaaaaaaaaaaaaaaaavfj", "aaaaaaaaaaaaaaaaachi", "aaaaaaaaaaaaaaaaatnj", "aaaaaaaaaaaaaaaaaoid", "aaaaaaaaaaaaaaaaavqq", "aaaaaaaaaaaaaaaaahgo", "aaaaaaaaaaaaaaaaaiiy", "aaaaaaaaaaaaaaaaaido", "aaaaaaaaaaaaaaaaaalk", "aaaaaaaaaaaaaaaaaivv", "aaaaaaaaaaaaaaaaapsr", "aaaaaaaaaaaaaaaaaoon", "aaaaaaaaaaaaaaaaayde", "aaaaaaaaaaaaaaaaacpx", "aaaaaaaaaaaaaaaaabmv", "aaaaaaaaaaaaaaaaavqf", "aaaaaaaaaaaaaaaaabcq", "aaaaaaaaaaaaaaaaamma"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "50/50/50";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> listA = {"bcdbb", "aaccd", "dacbc", "bcbda", "cdedc", "bbaaa", "aecae"};
    vector<string> listB = {"bcdbb", "ddacb", "aaccd", "adcab", "edbee", "aecae", "bcbda"};
    vector<string> listC = {"dcaab", "aadbe", "bbaaa", "ebeec", "eaecb", "bcbba", "aecae", "adcab", "bcbda"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "14/14/21";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> listA = {"sswezzfbzouxthsqiwbf", "nqhnrdcsxawcfk", "akifvg", "wmsayjpobdk", "gisfbwwafmfquwds", "nucckksdnwesvp", "hkjhshdcpacna", "exqkb", "jqexrtpmsdwgzgvncuk"};
    vector<string> listB = {"shvzfwmgrfhnyplfe", "hdkdulp", "azztedbwwygrj", "qdzjwfjwrvvggagny", "ysjtudbsysfbera", "qnyensjztjgoqz", "jqknyxpdpiymftcv", "nemeoefugelc", "hclyojwgugsaqe", "teqzfvlmk", "bwbovtoylcjm", "nqhnrdcsxawcfk", "jzlkquethyer", "qvkyna", "nucckksdnwesvp", "uek", "mdrn", "xqmtxp", "bcgpcegwqycakeauf", "efoldl", "hfgrxhkmslvuhcq"};
    vector<string> listC = {"dpijzgmlzj", "xqmtxp", "knmkapqhuwayrluykqy", "upflqzzwxantuj", "zuf", "ebuzxtlaua", "ptwsefmhjlnp", "jrjy", "dfgrpp", "uiblwgbesshpsltm", "nxkiq", "qdzjwfjwrvvggagny", "qvkyna"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "25/58/36";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> listA = {"cat", "dog", "pig", "mouse"};
    vector<string> listB = {"cat", "pig"};
    vector<string> listC = {"dog", "cat"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "8/3/3";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> listA = {"ca", "cab"};
    vector<string> listB = {"cat"};
    vector<string> listC = {"cat"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "6/2/2";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> listA = {"q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "a", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "c", "v", "b", "n", "qq", "ww", "ee", "rr", "tt", "yy", "uu", "ii", "oo", "pp", "aa", "ss", "dd", "ff", "gg", "hh", "jj", "kk", "ll", "zz", "xx", "cc", "vv", "bb", "nn"};
    vector<string> listB = {"asdf"};
    vector<string> listC = {"qwer"};
    WordCompositionGame* pObj = new WordCompositionGame();
    clock_t start = clock();
    string result = pObj->score(listA, listB, listC);
    clock_t end = clock();
    delete pObj;
    string expected = "150/3/3";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=7228&pm=4483
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <queue>
using namespace std;
 
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ii;
#define rev(A) reverse((A).begin(), (A).end())
#define s(A) sort((A).begin(), (A).end())
 
//----------------------------
 
class WordCompositionGame {
  public:
  string score(vector <string> a, vector <string> b, vector <string> c) {
    map<string,int> C;
    for (int i = 0; i < a.si; i++) C[a[i]]++;
    for (int i = 0; i < b.si; i++) C[b[i]]++;
    for (int i = 0; i < c.si; i++) C[c[i]]++;
    int AA=0,BB=0,CC=0;
    for (int i = 0; i < a.si; i++) AA += 4-C[a[i]];
    for (int i = 0; i < b.si; i++) BB += 4-C[b[i]];
    for (int i = 0; i < c.si; i++) CC += 4-C[c[i]];
    char buf[100];
    sprintf(buf, "%d/%d/%d", AA,BB,CC);
    return string(buf);
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/
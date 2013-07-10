/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11443
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

class PalindromizationDiv1 {
public:
    int getMinimumCost(string word, vector<string> operations);
};

int PalindromizationDiv1::getMinimumCost(string word, vector<string> operations) {
    int ret;
    return ret;
}


int test0() {
    string word = "racecar";
    vector<string> operations = {};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string word = "topcoder";
    vector<string> operations = {"erase t 1", "erase o 1", "erase p 1", "erase c 1", "erase d 1", "erase e 1", "erase r 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
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
    string word = "topcoder";
    vector<string> operations = {"erase t 10", "erase o 1", "erase p 1", "erase c 1", "erase d 1", "erase e 1", "erase r 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string word = "caaaaaab";
    vector<string> operations = {"change b a 100000", "change c a 100000", "change c d 50000", "change b e 50000", "erase d 50000", "erase e 49999"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 199999;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string word = "moon";
    vector<string> operations = {"erase o 5", "add u 7", "change d p 3", "change m s 12", "change n d 6", "change s l 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string word = "aaaazzaazazaazzaazaazaazzaazzazzazzaazzazazzaazzzz";
    vector<string> operations = {"change h g 100000", "change y x 100000", "change p q 100000", "change s t 100000", "change h i 100000", "change r s 100000", "change g h 100000", "change s r 100000", "change i h 100000", "change o p 100000", "change m n 100000", "change n o 100000", "change u t 100000", "change x w 100000", "change c d 100000", "change x y 100000", "change y z 100000", "change w v 100000", "change r q 100000", "change q r 100000", "change d e 100000", "change l m 100000", "change m l 100000", "change a b 100000", "change v u 100000", "change l k 100000", "change j k 100000", "change k j 100000", "change t u 100000", "change d c 100000", "change o n 100000", "change j i 100000", "change t s 100000", "change b a 100000", "change n m 100000", "change b c 100000", "change v w 100000", "change c b 100000", "change f e 100000", "change z y 100000", "change w x 100000", "change e d 100000", "change i j 100000", "change q p 100000", "change e f 100000", "change p o 100000", "change f g 100000", "change g f 100000", "change u v 100000", "change k l 100000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 62500000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string word = "zaaazazazzzzaaaaazzzaaazzaazzzaaazzzzzaaaazazazzza";
    vector<string> operations = {"change o p 100000", "change v w 100000", "change m l 100000", "change s t 100000", "change k j 99999", "change p o 100000", "change v u 100000", "change y z 100000", "change f e 100000", "change k l 100000", "change l k 100000", "change b c 100000", "change b a 100000", "change p q 100000", "change q p 100000", "change u t 100000", "change z y 100000", "change d e 100000", "change t s 100000", "change e f 100000", "change n o 100000", "change r s 100000", "change q r 100000", "change j k 100000", "change w v 100000", "change y x 100000", "change g h 100000", "change o n 100000", "change x w 100000", "change c b 100000", "change f g 100000", "change i h 100000", "change d c 100000", "change u v 100000", "change g f 100000", "change l m 100000", "change h i 100000", "change r q 100000", "change h g 100000", "change j i 100000", "change e d 100000", "change i j 100000", "change x y 100000", "change w x 100000", "change n m 100000", "change c d 100000", "change t u 100000", "change a b 100000", "change m n 100000", "change s r 100000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 62499975;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string word = "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww";
    vector<string> operations = {};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string word = "wwwwwwwwwwwwwwwwwrwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww";
    vector<string> operations = {};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string word = "wwwwwwwwwwwwwwwwwrwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww";
    vector<string> operations = {"change r w 123", "erase r 124", "change w r 13"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string word = "wwwwwwwwwwwwwwwwwrwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww";
    vector<string> operations = {"change r w 2123", "erase r 2124", "change w r 13"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string word = "l";
    vector<string> operations = {};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string word = "la";
    vector<string> operations = {"change a m 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string word = "la";
    vector<string> operations = {"change a m 1", "erase a 100000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz";
    vector<string> operations = {"change o n 100000", "change q p 100000", "change g f 100000", "change k j 100000", "change s r 100000", "change n o 100000", "change n m 100000", "change g h 100000", "change w x 100000", "change h i 100000", "change r s 100000", "change u v 100000", "change c b 100000", "change b a 100000", "change q r 100000", "change x y 100000", "change w v 100000", "change x w 100000", "change h g 100000", "change r q 100000", "change j i 100000", "change f e 100000", "change l k 100000", "change k l 100000", "change a b 100000", "change i h 100000", "change v u 100000", "change t u 100000", "erase y 100000", "change s t 100000", "change e d 100000", "change y x 100000", "change c d 100000", "change p o 100000", "change m l 100000", "change u t 100000", "change o p 100000", "change j k 100000", "change f g 100000", "change m n 100000", "add y 100000", "change d c 100000", "change e f 100000", "change d e 100000", "change l m 100000", "change i j 100000", "change p q 100000", "change t s 100000", "change b c 100000", "change v w 100000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 122500000;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string word = "zaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> operations = {"change d e 100000", "change w v 100000", "change c b 100000", "change o n 100000", "change v w 100000", "change c d 100000", "change r q 100000", "change r s 100000", "change k l 100000", "change x w 100000", "change e f 100000", "change s r 100000", "change h g 100000", "change e d 100000", "change f g 100000", "change t s 100000", "change d c 100000", "change i h 100000", "change n o 100000", "add y 100000", "change g h 100000", "change v u 100000", "change q p 100000", "change i j 100000", "change p q 100000", "change k j 100000", "change b a 100000", "change g f 100000", "change y x 100000", "change x y 100000", "change j k 100000", "change t u 100000", "change h i 100000", "change u t 100000", "erase y 100000", "change j i 100000", "change f e 100000", "change o p 100000", "change a b 100000", "change l k 100000", "change p o 100000", "change l m 100000", "change u v 100000", "change n m 100000", "change s t 100000", "change m n 100000", "change w x 100000", "change q r 100000", "change b c 100000", "change m l 100000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 122500000;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string word = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbz";
    vector<string> operations = {"change o n 1", "change q p 1", "change g f 1", "change k j 1", "change s r 1", "change n o 1", "change n m 1", "change g h 1", "change w x 1", "change h i 1", "change r s 1", "change u v 1", "change c b 1", "change b a 1", "change q r 1", "change x y 1", "change w v 1", "change x w 1", "change h g 1", "change r q 1", "change j i 1", "change f e 1", "change l k 1", "change k l 1", "erase z 1175", "change i h 1", "change v u 1", "change t u 1", "erase y 1", "change s t 1", "change e d 1", "change y x 1", "change c d 1", "change p o 1", "change m l 1", "change u t 1", "change o p 1", "change j k 1", "change f g 1", "change m n 1", "add y 1", "change d c 1", "change e f 1", "change d e 1", "change l m 1", "change i j 1", "change p q 1", "change t s 1", "change b c 1", "change v w 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1175;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string word = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbz";
    vector<string> operations = {"change o n 1", "change q p 1", "change g f 1", "change k j 1", "change s r 1", "change n o 1", "change n m 1", "change g h 1", "change w x 1", "change h i 1", "change r s 1", "change u v 1", "change c b 1", "change b a 1", "change q r 1", "change x y 1", "change w v 1", "change x w 1", "change h g 1", "change r q 1", "change j i 1", "change f e 1", "change l k 1", "change k l 1", "erase z 1177", "change i h 1", "change v u 1", "change t u 1", "erase y 1", "change s t 1", "change e d 1", "change y x 1", "change c d 1", "change p o 1", "change m l 1", "change u t 1", "change o p 1", "change j k 1", "change f g 1", "change m n 1", "add y 1", "change d c 1", "change e f 1", "change d e 1", "change l m 1", "change i j 1", "change p q 1", "change t s 1", "change b c 1", "change v w 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1176;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string word = "ltbgpjcsaknlzctionkqffrpevmybpptydvizassekdoznkln";
    vector<string> operations = {"change g n 47673", "erase r 77264", "change l t 42081", "add r 4800", "add b 96464", "erase k 51662", "change b n 39898", "erase d 22461", "erase g 27854", "change p u 14295", "add d 51496", "add e 75369", "add o 87389", "change t z 27185", "change c z 71695", "change b l 54216", "add i 19003", "add f 27638", "add u 85866", "change j u 67802", "erase t 57582", "erase i 22054", "add k 10000", "change q b 34740", "add q 72938", "change x m 44234", "erase s 36666", "erase b 14907", "add h 69181", "erase f 99058", "change p b 90898", "erase l 21277", "add x 32316", "change c m 85633", "change v o 96383", "change y u 61797", "change h v 19755", "change p r 8901", "change n h 99960"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1629924;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string word = "skqfxttxeexbhbepzqjnutvbxuuulyrwqrreqsppy";
    vector<string> operations = {"erase x 55169", "change d z 63843", "change y n 50218", "change x q 96283", "change n t 7350", "change j s 47169", "add y 25955", "change n a 82715", "add v 27293", "add w 1501", "change g t 35954", "change p m 28531", "change z t 37399", "erase z 46251", "add c 72282", "change h v 94063", "add l 41187", "erase o 24856", "erase y 95188", "erase c 40894", "change y d 97270", "add r 48616", "change p h 79304", "erase f 94278", "change r n 83395", "add b 71423", "change t h 64972", "change z p 28328", "change x a 59390", "erase n 89677", "change w e 74070", "change t g 87341", "add g 27109", "erase k 73339", "erase r 2864", "add u 38787", "change x k 93725", "add o 85828", "change t a 42814", "erase a 36481", "change m u 83783"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1899730;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string word = "hidxennvjqbfuaukugdfqddzstmlkkowfzqyfsfjq";
    vector<string> operations = {"change o j 51208", "change g f 32365", "change r h 57857", "change t b 82814", "add n 55311", "change t q 44336", "erase s 3638", "change p q 52249", "change u o 85395", "change p t 39867", "change q w 8672", "add d 79495", "change s t 46535", "erase m 18827", "change r n 45267", "add s 84863", "change w l 89256", "change a f 49049", "change y f 3283", "add c 61103", "change m i 4846", "erase b 18280", "erase c 32074", "change h z 62221", "change g h 61625", "change o i 44005", "change o k 80694", "change e l 39484", "erase j 92058", "change u d 30783", "add r 74995", "change g a 44914", "change z m 28587", "erase r 3258", "erase k 91503", "erase u 32899", "change f k 41193", "change i r 94746", "change y d 42267", "change g v 49092", "add v 93460", "add j 40452", "change b e 4702"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3590492;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string word = "uxubamlhzxvsahtvgmwckgfzjssvebrzyzubnoblluskgjzg";
    vector<string> operations = {"change x t 23271", "change m p 37207", "add y 54342", "erase g 82125", "change u n 85465", "change i v 20095", "change x j 12391", "change u z 98847", "add k 87196", "add e 62266", "change h n 42785", "change e x 65397", "change s h 60246", "erase l 98209", "change d w 28775", "change y s 21905", "change q n 10952", "change d k 40690", "add c 44642", "erase w 49916", "erase e 53522", "change w p 41284", "erase s 74886", "change n b 58584", "change o e 24075", "change o m 85667", "erase q 53965", "change v w 72218", "change i h 91686", "change j z 88325", "add h 79948", "erase x 5578", "change f z 28027", "add q 19509", "erase m 42669", "change i f 23840", "change x w 97850", "add m 90440", "change y b 87413", "change e w 65116", "add a 65032", "change h d 66979", "change v d 88858", "erase h 37807", "erase b 73408", "change l a 39493"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2547622;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string word = "fcegtvqqvenrwnedwsytaepgraiinxqdhxvoqmqckduemlndk";
    vector<string> operations = {"add t 71234", "change q b 19684", "add b 89701", "erase p 61007", "add s 7411", "change d h 36907", "change u g 12280", "change x a 41792", "add x 8969", "change g n 48590", "change s h 49130", "add p 21253", "erase f 29360", "add a 89713", "add h 67461", "erase q 58045", "add o 76594", "change s k 97573", "add r 65752", "change c l 63652", "add k 58134", "change i s 54169", "erase o 71651", "add m 33667", "erase t 10888", "add q 73054", "add v 90540", "add c 67023", "erase r 27385", "change x w 40684", "erase j 64904", "change n s 96988", "add y 96539", "add j 92747", "add e 37456", "add z 14006", "erase c 34285", "change d n 26720"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1518358;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string word = "vaojzmimngduzunnwhjokekcydpifeiqfjjxnxaukcpjcsq";
    vector<string> operations = {"change i k 80763", "erase g 87091", "change n m 811", "add q 80264", "add s 21635", "add r 71032", "erase w 37393", "add o 78225", "erase k 76776", "erase d 39068", "erase e 348", "erase u 99229", "add v 45640", "erase n 22872", "add k 79013", "change u p 38622", "add n 31948", "add f 83715", "change f d 72758", "change t v 28650", "erase c 26010", "add x 37816", "change z e 91912", "add t 65131", "add j 27015", "change y t 88527", "change u a 66526", "change u j 41489", "erase j 84056", "add e 43248", "add c 66010", "erase b 25370", "erase a 14205", "add a 102", "add m 11891", "change a z 77429", "add u 59617", "erase r 68108", "add i 71176"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1811665;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string word = "qdtadyxdoobzrteokdeiywoznsfomddmcuuzmtsefulrpvcwp";
    vector<string> operations = {"change r i 46717", "change b r 20839", "add e 6360", "change c l 56129", "erase m 53873", "erase k 53103", "erase h 81061", "change u o 68390", "change y s 69829", "add i 21819", "change o t 91582", "add b 2044", "erase i 98147", "erase d 14059", "erase w 72962", "erase g 66877", "erase p 19876", "erase z 53536", "erase q 4880", "change r c 92407", "change i n 86965", "change f g 45613", "change f m 85494", "erase l 63878", "add t 58952", "erase b 93178", "erase o 53756", "erase r 63044", "erase j 41008", "erase t 99049", "erase x 54419", "change s f 16849", "erase v 89277", "change h m 51270", "erase s 21016", "add a 98341", "change u m 47290"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1764380;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string word = "mehvydyipwuxdnjydaypvzosqcrrwzgyaqhnyzipobxm";
    vector<string> operations = {"erase s 69973", "add w 37502", "add j 43911", "change p b 85122", "erase y 86746", "erase o 66792", "erase e 15164", "add u 48462", "change s l 43231", "erase f 70509", "erase j 22780", "add e 146", "erase k 61925", "erase h 59116", "erase d 14641", "change h d 77497", "erase w 87431", "erase z 36739", "erase v 79453", "erase q 49336", "erase a 83311", "change y m 64795", "erase n 83634", "change x k 78800", "change j i 55290", "erase i 99658", "erase r 64346", "erase t 44597", "erase c 23565", "change s b 36690"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2279346;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string word = "urleykvccvgplkxnpbrfvhaxkdpoeludbrsygpui";
    vector<string> operations = {"add w 78627", "change h l 53759", "change p b 10430", "change y z 4231", "change e u 77461", "change s i 58735", "change e l 49572", "change a n 98554", "change t h 53636", "change p a 85825", "change r s 15370", "change d k 7495", "erase m 6550", "add a 89187", "erase y 68208", "erase s 1300", "change h y 1696", "change y v 36286", "change f y 20609", "change p u 74679", "change b r 42638", "change d u 87318", "change f l 78370", "change d z 849", "change g h 99465", "add o 45333", "change i n 2577", "change h r 11568", "change z e 7477", "change c d 3657", "erase o 44697", "change d t 9757", "add k 1709", "add v 4501", "change r l 1034", "change a b 54425", "change l w 26802", "add e 13762", "change x w 85623", "erase b 27744", "add p 74704", "change c b 76418", "add z 37539"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 777430;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string word = "wcpigwqeihvieyofohdaibtlcnlvtdckolahbpdnx";
    vector<string> operations = {"change h u 51171", "change k b 17561", "add t 69841", "change x b 93744", "erase s 52689", "change r u 30403", "add l 84594", "change e w 60747", "erase l 58163", "change t x 53643", "erase d 30638", "change p t 84963", "change j t 62209", "change w u 28475", "change e z 59193", "change n d 89778", "change c v 40725", "change l g 4359", "change j e 26203", "change z a 49615", "erase w 34441", "change k x 54248", "add d 7459", "change t j 59733", "change g t 48579", "change b y 99879", "erase j 21970", "erase i 95902", "change g z 44599", "change j r 12189", "erase e 89315", "change n s 48925", "change i n 61019", "change z n 52208", "change z t 35551", "erase g 64598", "change c l 50449", "change n u 59892", "change o a 84140", "change y q 94067"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2724189;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string word = "bjqgigqovhjoiizwbpdrxhdtexvoomgvowunjfxlpmihwfxjeo";
    vector<string> operations = {"change w n 99427", "erase e 35661", "add j 11442", "add b 13834", "add i 62317", "add e 88714", "add k 77838", "add h 51950", "add r 99784", "add s 57181", "erase v 70833", "change v o 72972", "add m 5331", "erase t 37602", "add w 13304", "erase y 78816", "add g 14969", "add q 65050", "erase c 49060", "add u 27470", "erase r 21306", "erase p 30999", "add z 55368", "change r x 13346", "erase m 93047", "add d 37518", "change o h 10318", "add l 98721", "add a 53168", "change p j 40985", "erase q 69229"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1769068;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string word = "cmuyifvthgwrrpdoyudcfyykmlkhrilzbvuccuusbup";
    vector<string> operations = {"add x 45991", "add p 4679", "add q 53550", "add i 72996", "add b 98819", "add d 1712", "add r 96666", "add h 27205", "add f 39390", "change e l 31344", "change b d 57757", "erase r 1437", "add k 46326", "add y 59667", "add n 88130", "change c h 75387", "add l 97913", "add g 36955", "erase e 71019", "change i z 72414", "add t 1944", "add m 1937", "add o 16404", "add w 99389", "add v 35492", "add u 87345"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1948771;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string word = "tvqtunuezdxnkipwlmtiqdyrdkcnkccnqprismfwp";
    vector<string> operations = {"erase l 60558", "erase y 34262", "erase i 35720", "erase h 33279", "erase b 21665", "erase u 67424", "erase j 6781", "erase t 61377", "add v 67261", "change f l 99824", "erase r 89642", "add e 69653", "erase q 9472", "erase c 51873", "add g 82687", "erase x 93676", "erase p 6400", "erase v 91268", "erase d 92", "erase s 64451", "add n 57191", "change v k 41722", "erase f 39354", "add u 38308", "add d 22430", "erase z 20583", "erase o 46283", "change n k 83004", "erase m 7414", "erase g 65460", "add t 31391"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1106744;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string word = "izzynwmwkhrlymvdovgnnweufuiqkrdiblvdfxnpnwktxwfkrv";
    vector<string> operations = {"erase k 14936", "add l 59413", "erase v 62077", "erase x 92739", "change q g 72504", "erase y 4586", "erase d 66945", "erase w 21777", "add q 75476", "erase u 51661", "change i r 53817", "erase i 70269", "erase e 21845", "erase b 74714", "add d 27523", "erase s 10112", "erase h 28515", "erase f 71798", "erase m 77983", "erase r 73110", "erase j 38182", "erase q 43074", "change j q 38645", "erase p 15299", "erase t 23268", "erase g 5520", "add n 28520", "add p 25562", "change e x 29656", "erase o 28327"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1960425;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string word = "woyqqwrzpcpxroxiyaleexljbiespdfltholfwknatd";
    vector<string> operations = {"add p 91328", "change v u 9989", "add w 33246", "add s 4218", "add h 45385", "change s p 87296", "change n q 9427", "add f 93739", "change m p 82748", "change p f 81032", "add q 89632", "erase u 24122", "change d n 50474", "add r 38792", "add l 26845", "change a z 9524", "add z 37252", "change f w 46985", "add y 36732", "change z m 94220", "change k w 55455", "change k z 32630", "add u 65110", "add i 44501", "change u n 98510", "change v c 11290", "change r d 6148", "change c o 4845", "add e 25072", "change t c 19496", "add t 85163", "change r j 1897", "add x 63344", "change t v 97287", "change e q 55927", "add d 22064", "change y m 59707", "change w a 37252"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1335896;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string word = "ydlklfliswieaouykhbmxtdyegdmfvxjnaqngytuege";
    vector<string> operations = {"change p t 21119", "change n o 20089", "change r g 51117", "add a 26517", "change q h 86081", "change w u 29114", "add c 56051", "erase j 75411", "add y 87812", "add q 78954", "change t r 54710", "erase n 61382", "change y b 74550", "change j e 57034", "change w d 25503", "add v 73726", "change t e 64672", "add x 65462", "change m d 83680", "add g 54252", "change x c 69940", "change y m 34031", "change d k 88878", "add t 57765", "add s 61255", "add d 50221", "add i 20406", "add j 86458", "change t f 68760", "change q v 4264", "change k g 76072", "change x e 77648", "add l 35352"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2807451;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string word = "cokzamoiefjlpjtijxxneakelswtzyqufvnnpzygfrjcg";
    vector<string> operations = {"add e 68286", "add o 91067", "add h 68974", "erase l 27133", "add b 80246", "change g w 33193", "add j 17093", "erase a 23114", "erase y 79411", "change j h 75185", "erase t 34545", "add z 18347", "erase d 23622", "erase s 33", "erase u 92166", "add v 31997", "add i 82854", "add n 29121", "add x 40447", "erase j 65328", "change d j 55294", "add s 27366", "erase h 64768", "add f 28709", "erase m 67743", "add p 31176", "add m 59215", "add w 23488", "change g r 93225", "erase f 68125", "erase k 93932", "change b p 21167", "erase o 88033", "erase b 73777", "add a 97903", "add r 55633", "erase e 31736", "erase z 50305", "erase p 86472"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1506079;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string word = "hgpiihqaaihicgdaefogbrthdftatzoutvrpuvngnamzcajeso";
    vector<string> operations = {"erase a 65144", "erase n 71489", "change r h 40235", "add n 86774", "add y 61225", "erase j 23206", "add x 82231", "erase i 98206", "erase v 99348", "change a e 4080", "erase y 34485", "add a 88480", "add j 72612", "add h 16331", "erase h 37419", "erase e 8194", "add v 10339", "add s 61817", "erase u 53691", "add k 33120", "add o 93087", "erase f 68204", "erase g 19023", "erase q 63057", "add b 93498", "add f 35457", "add p 26773", "add d 80300", "erase t 35002", "add g 32761", "change o p 65964", "add l 80218"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1858817;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string word = "hthqmmoljsokttmtrnpnqoqhnqpsjolttgnjthglmohk";
    vector<string> operations = {"erase n 62106", "erase i 63276", "change h r 83369", "change q n 42354", "add h 33592", "change g q 2363", "add m 32907", "change p n 17576", "change p g 22930", "change r s 59931", "erase q 87202", "change n h 46847", "change p l 3615", "add l 75529", "change o r 17231", "add s 27530", "change r h 71350", "erase j 32667", "erase t 3335", "erase p 73", "change r l 67542", "change l t 73102", "change p q 99119", "add k 68047", "change r p 40260", "change j t 25677", "add j 80656", "change g p 55284", "erase s 95959", "change h s 10939", "add p 15792", "add n 60140", "add t 83128"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 680281;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string word = "ssnsstoosjtrotsrhkstqirhmlgqsktnmppohnpmhjrlikikp";
    vector<string> operations = {"change s r 79488", "add i 10902", "change q o 19506", "change i k 48064", "erase r 27399", "change p n 5052", "change s q 50590", "change l k 1601", "change m l 57635", "erase i 65229", "change g k 42082", "erase k 41160", "change g p 76404", "erase s 88646", "add r 48405", "change o m 32310", "change o s 67524", "erase h 25477", "change j h 38707", "erase m 96393", "erase o 76176", "add q 92154", "erase t 88589", "erase n 45297", "erase j 73499", "change i m 96266", "change k n 88999", "add l 95769", "change l h 61087", "change m j 91192", "erase p 32311", "add h 48488", "change s p 43007"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1310923;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string word = "gilorgoktgqpojgiqkhrigginhlhlngjhlhqmmgjsjjhosopr";
    vector<string> operations = {"add i 32637", "add h 82149", "erase g 65102", "add t 30463", "add r 13681", "change s g 33332", "add m 45788", "erase p 86259", "add p 21201", "add n 28004", "add l 33701", "erase t 19744", "add o 46722", "erase r 88696", "erase i 3343", "add k 78727", "add q 56255", "add j 47307", "erase q 53041", "add g 19560", "add s 68722", "erase j 31417"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 910068;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string word = "smirnqgmrgroptlqpsgtknrtkgljiskshqpkllrih";
    vector<string> operations = {"add p 62561", "add i 97508", "add m 45923", "add k 41905", "add t 24351", "add h 90894", "change l p 86900", "add n 89186", "add l 92418", "add o 94286", "erase k 24864", "change t q 56913", "add r 39081", "erase j 6999", "add j 47011", "add g 84847", "erase s 85527", "add q 66532", "erase t 62640"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1513357;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string word = "qojqongkrrigsqrginoghgmhrjqmgrkrpikqrimogihl";
    vector<string> operations = {"change q l 59108", "change g j 18253", "change h m 5295", "add r 95880", "erase i 91698", "change r g 25087", "change p k 19943", "change g o 10846", "change l o 79894", "add h 15701", "add i 78687", "change m s 63002", "add j 22779", "add g 61039", "change l n 92203", "add n 56871", "add q 85546", "change m g 98231", "add m 68125", "change t l 46573", "change g m 84621", "change k n 1539", "change q p 78569", "change n i 98523", "change r s 23123", "add s 75", "change m i 80918", "change s h 13580", "add o 11973", "change i g 62055", "change j p 70658", "change g q 26650", "change k g 85765", "add l 53768", "change i k 76392", "change s t 54224", "change r k 27129"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 666939;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string word = "shnhrtrltqhngmrokinosothjihlotghorjkirpk";
    vector<string> operations = {"change k i 11310", "change n i 67987", "change h i 83008", "change s m 90395", "change k t 90533", "add h 7465", "add q 49336", "erase q 18600", "change q h 56262", "erase t 87757", "erase s 15113", "change h o 51905", "change j g 64258", "change i k 76563", "change i m 10355", "add j 44468", "add s 92101", "change r l 49363", "change g i 53218", "add n 70167", "change t k 52570", "change o g 37398", "change o k 19317", "add k 89302", "change s t 11883", "change l k 35937", "add m 40402", "change t i 43694", "add g 29537"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2287588;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string word = "oklqrlgtqnotlkmlljkqknmrqllhkmltnhgmrjloijmrmsp";
    vector<string> operations = {"erase o 19200", "erase g 81094", "erase s 84937", "change n p 64254", "erase q 82027", "add o 92525", "erase i 12734", "add q 76511", "erase l 84368", "change i l 26422", "erase r 31486", "erase t 9829", "erase k 35543", "erase n 10365", "erase h 32737", "erase p 48466", "erase m 70829", "erase j 10196", "change o q 47569"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 954707;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string word = "mzgtdubyfpgjiaxcrjkybvpdecnugjkcxhijgpkubddtgio";
    vector<string> operations = {"erase v 12127", "add y 79342", "change s z 75358", "add z 7488", "add r 18241", "erase x 64973", "add i 13087", "add e 10690", "erase p 28115", "add x 84495", "add m 51570", "change e z 54962", "erase g 65799", "change k b 24951", "add a 90647", "change g b 73754", "add u 3733", "add w 14255", "change x a 2764", "change w o 73256", "change i g 41425", "add h 25975", "erase y 65322", "change p w 89846", "change k d 3726", "add d 40294", "change e n 23563", "change w v 13208", "add p 65340", "change f c 13486", "erase o 80985", "erase z 92805", "change c v 34620", "change a o 30859", "add v 78829", "erase t 55849", "change g h 31175", "add b 50673", "change i j 36737", "erase s 96068", "change s t 78841"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 771014;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string word = "bgmzblthcuvcccbrvkzjpxtrtxpencvcecccswehvalzmgs";
    vector<string> operations = {"change u e 66586", "erase s 94842", "add u 15051", "erase o 70210", "erase y 67692", "change k r 22106", "erase g 24082", "change l c 93512", "erase w 40886", "change x c 4402", "erase z 27885", "change b v 49298", "add c 43870", "add b 99868", "erase m 29247", "erase d 69455", "add o 29960", "add v 15175", "change u l 90140", "change h f 49688", "erase u 82296", "add f 76995", "add p 37265", "add z 61714", "erase a 44297", "add q 41626", "change g z 45912", "change r s 53637", "add j 66017", "erase t 92768", "change s l 84304", "erase e 92141", "add y 90517", "add r 3333", "erase p 46654"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1214369;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string word = "iwjfpyfswnybfnwpcvuuqfjcqumvopwnfuysusfypqjwm";
    vector<string> operations = {"change p j 11970", "add r 20160", "erase n 22704", "add b 3105", "erase q 40937", "change x m 75896", "erase f 99086", "erase i 56327", "change e r 93218", "add v 63577", "add d 83972", "erase d 21070", "erase y 89762", "add s 64290", "add t 60623", "erase h 34993", "change i a 48132", "change t p 4618", "change i v 30232", "change m p 63441", "add l 87350", "add c 86396", "change y b 53979", "change z g 90004", "change w d 38216", "change z w 94899", "erase u 44049", "add m 50816", "change a e 76975", "change u z 93974", "erase x 66377", "add z 17914", "add g 49453", "erase p 95627", "add u 12944", "erase b 42820"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1070204;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string word = "okxflxjkbbpqujupklquviuofkpsjuqpbbkjvufmno";
    vector<string> operations = {"add o 59568", "add b 6967", "add t 22204", "change y s 87981", "add v 30792", "change o j 82390", "change b l 27892", "add x 80383", "change n f 57096", "erase w 99319", "erase t 65976", "erase q 7582", "add u 94821", "change r p 93115", "add e 20233", "add s 52864", "erase z 8281", "change p h 29698", "add r 19853", "add f 22609", "add a 97811", "change z a 71860", "erase g 48395", "add j 53685", "add c 12836", "add m 11958", "add k 90203", "add q 92204", "change f v 89083", "change p w 95185", "add i 91849", "erase b 35300", "add y 58159", "erase l 92380"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 806199;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string word = "xjzecoyyjtqyblxlulhjkvzokjsgulxvonqtjgyouezjx";
    vector<string> operations = {"change x p 38586", "change x f 83811", "add k 65042", "erase h 19342", "add u 1757", "add b 99834", "add m 99262", "add y 55365", "add v 48762", "erase c 60207", "add t 88460", "add x 67820", "add n 26314", "add q 84850", "add j 19903", "erase n 10790", "erase v 34550", "erase f 27889", "add z 70732", "add l 44098", "add p 47560", "erase s 84605", "change d g 45250", "add s 76592", "add h 19834", "erase d 10753", "add e 48475", "change h c 28028", "erase j 90964", "add r 67486", "add o 94384"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1472985;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string word = "cakkpkdyligpuarnbzbtgggnunggptbqbkqnxhcilqdkppkan";
    vector<string> operations = {"change a n 67594", "erase x 73191", "change q d 39877", "change n b 5583", "erase o 6795", "add y 51127", "erase v 59555", "erase u 76663", "erase w 31140", "change i b 38917", "change k u 47301", "erase n 30295", "change t y 4250", "add c 51789", "change x z 96315", "change p q 34206", "change h l 88602", "change g m 29515", "erase d 78347", "erase e 10422", "add t 62836", "add p 23124", "change d g 62260", "erase z 7469", "erase f 25747", "change b x 27695", "erase b 24251", "erase y 15878", "erase k 80642", "add j 69132", "erase a 10650", "erase q 32468", "change n k 85284", "change x c 23367", "change e x 49301", "change b l 61523", "erase s 55995", "erase l 19102"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1499602;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string word = "kccjaapngegcovlrtlvzbbzvltryvocgegnpaajick";
    vector<string> operations = {"change z a 72103", "change o x 68264", "erase e 35325", "change z h 86963", "change q c 4907", "change e l 71736", "erase c 23671", "erase i 77465", "erase t 13227", "change r u 9339", "change n u 76575", "erase f 99453", "erase d 40601", "change u p 25439", "add w 13838", "erase h 20573", "change b d 55202", "erase g 1271", "erase u 26074", "change e s 43666", "change o e 76044", "erase m 62983", "erase b 27107", "add h 88973", "erase x 15095", "change l y 56325", "change c m 22540", "change l v 42003", "change m w 32611", "erase p 40954", "change v t 32942", "change p f 39003", "erase w 18476", "change a k 20644", "change s v 50621", "erase r 91052", "change g e 42430", "erase v 8945", "change w i 795"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 94629;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string word = "kseakjvqdczikoovcuallaucvzglizchqvjkaesk";
    vector<string> operations = {"change b e 35103", "change g s 82627", "change r h 4207", "change q i 90881", "change r g 72491", "change z j 8585", "change j c 95975", "change i w 28917", "change n o 71298", "change g w 37082", "change j g 7719", "change p r 77649", "erase j 89538", "change l q 37186", "change o h 87828", "change r t 47028", "erase x 11690", "change c s 86519", "add t 77292", "add z 42451", "add i 52716", "change e l 32117", "erase e 27617", "add x 26178", "change b x 66226", "change b g 84212", "erase k 3222", "change u r 12481", "change r x 78495", "change v o 26087", "change b k 2498", "change u n 89447", "change h i 41600", "change v n 95009", "change w y 18197", "change a l 22990", "change g k 12790", "change a y 96766", "change h w 27312", "change v z 27483", "change z k 76834", "change w l 17541"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2092758;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string word = "apqswdezojxqheoqptcsvjzrzkvsctpqoehttjozedwsqoa";
    vector<string> operations = {"add g 76458", "change o q 86107", "change e d 73288", "add w 99469", "change e y 62540", "change z v 22771", "change r s 83470", "change q v 16829", "add a 11068", "add o 63381", "erase j 44547", "add r 13056", "change o w 79950", "change g h 28235", "change q w 81972", "change q c 17111", "change s i 74081", "change i w 78965", "change a m 37697", "change u m 77106", "add c 61637", "change o b 59275", "change l o 82685", "change t d 58325", "change f c 40285", "change g c 57132", "change d f 86632", "change q r 55747", "change x y 40473", "add i 66969", "change o v 57889", "erase i 20366", "change u e 25721", "change b h 78254", "add d 7427", "change h s 38254", "change f o 56555", "change u t 80769", "change u r 64183"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string word = "qplyceopbqxplwoiilxkbwufddfuwbkcliiowgpxubpoeclltq";
    vector<string> operations = {"add g 58120", "add e 30661", "add q 20431", "add t 54001", "erase z 29335", "change w q 47568", "change v w 28013", "change u q 5943", "change s e 46020", "add s 72667", "change i c 26977", "add d 73968", "add l 80042", "add n 8821", "change k v 84700", "add y 94730", "add w 9846", "add v 69130", "add o 71365", "add x 59669", "add m 78099", "add r 84171", "add k 3094", "add c 47165"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string word = "mkutzbvudnmkslgsahrbvbrmasglckmnduvbztukd";
    vector<string> operations = {"add o 29348", "add h 4639", "add e 81589", "add m 77048", "erase h 58624", "erase g 23119", "change o t 60749", "erase b 69569", "change y l 25463", "erase j 98521", "add t 83514", "change b w 98153", "change m r 30418", "erase m 98560", "erase f 57301", "change g e 10034", "change p v 54739", "add b 82594", "erase q 48795", "add a 18065", "change d y 70096", "erase n 87180", "change r x 97371", "change q s 37199", "add u 10004", "add f 25977", "add l 82441", "change x i 92389", "erase r 75573", "change t z 69625", "change n s 966", "change e o 5991", "add s 34729", "erase e 99211"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string word = "yocvggtejvlpltpzsizmlzdzqzdzlmziszpplklvjetggvcoy";
    vector<string> operations = {"erase i 96074", "erase x 38422", "add p 89535", "add y 87143", "add t 5117", "add h 17589", "erase q 99328", "change g w 27358", "erase r 78814", "change u t 4796", "change o p 99140", "change f g 38129", "add z 57215", "erase d 47548", "erase j 52769", "add o 69378", "add m 62168", "change t j 37414", "erase o 64551", "add c 79372", "erase p 51556", "change q h 96461", "erase c 53704", "change e v 35896", "erase m 64862", "erase z 27503", "change s o 32414", "erase f 22497", "erase h 66779", "erase a 49279"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string word = "fclilmbjiaiaenhmkifbiiiihbfikmhneagaijbmlemcf";
    vector<string> operations = {"change n h 38359", "add l 32404", "change c k 2526", "change g m 33777", "erase f 85781", "erase l 92017", "change e i 32443", "erase h 99049", "erase d 77610", "change i c 17881", "add j 72367", "erase e 14193", "add b 86152", "erase j 96621", "add e 17396", "add k 35754", "change l i 61390", "change d a 62651", "add n 82298", "change f k 35543", "change d g 63949", "erase g 12938", "add c 61547", "change h l 28070", "change d j 9712", "erase c 50441", "erase b 4930", "add f 7773", "change d h 39523", "erase n 74425", "change j e 90836", "add i 15157"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string word = "edimcknffhhbcmcjdhiigaeggeaccihdjcmcbkhffnkamide";
    vector<string> operations = {"add l 82031", "add d 92823", "add m 32450", "add g 32616", "add n 40615", "add f 28132", "change m l 49861", "change d l 3625", "add c 11012", "change f n 41596", "add j 98004", "add k 4584", "erase i 64791", "add a 5074", "change d k 58021", "add e 19354"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string word = "meaalgnbjhmkedkiffllikajjckillffikdekmhdbnglagem";
    vector<string> operations = {"erase f 39155", "erase m 12311", "change d g 39734", "add e 39327", "change n f 92316", "change m h 39899", "change n i 82547", "erase k 75359", "change k d 99362", "add b 34197", "change b f 14067", "change k f 32531", "add c 34618", "add j 42814", "erase b 70642", "change e b 15637", "erase h 91962", "change n c 30419", "erase n 17388", "change n g 78798", "erase l 26006", "erase c 78802", "erase g 62392", "change c b 4133", "erase e 45742", "change l d 93187", "erase d 49834", "erase j 23663"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string word = "knifkhlflggnhnjnifmgkhmnflgmfinjnhngfiflhkfgnj";
    vector<string> operations = {"add i 44127", "add h 44286", "erase i 90892", "change i g 51651", "erase n 49803", "change j g 74013", "erase j 32111", "erase h 54566", "add n 72164", "add m 32844", "change h i 80633", "change g n 92157", "change f n 62943", "change h g 60319", "erase f 79756", "add j 54134", "erase g 53452", "change g h 11663", "change h m 73356", "erase m 48377", "change j i 56302"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string word = "rqnqpqksqnsr";
    vector<string> operations = {"change l k 34747", "change x r 10117", "change p o 33580", "add w 46091", "change o p 47044", "erase w 446", "erase v 27079", "erase m 8745", "add o 62362", "change k o 11921", "add r 52748", "erase u 73956", "erase r 65322", "add x 61731", "change v s 79211", "erase o 41821", "erase q 10871", "add n 11821", "change s w 27403", "change o n 91077", "erase t 71987", "change o q 58106", "change n x 85148", "add v 11356", "change l r 70711", "change q t 89854", "erase s 18064", "add p 10836", "change m l 83752", "add m 65678", "erase l 24338", "change o u 36219", "erase n 38781", "change r w 89170", "change o x 42848", "erase j 91941", "change q n 57014", "change q l 67699"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 68706;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string word = "rqjkokmuwwuonmwpnpnpknpponpxxjuwwnuvwwumurkjqs";
    vector<string> operations = {"erase w 57369", "add w 94240"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string word = "oomomopommnpponpmmonomoppmpmmn";
    vector<string> operations = {"add n 13479", "change m p 43074", "erase p 70353", "change l p 69524", "erase l 44594", "add m 95023", "add l 22374", "erase o 11396", "add o 99757", "erase m 5335", "add p 92507"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 128070;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string word = "ovvouvroouoqqqrqsrooqoororvuovss";
    vector<string> operations = {"change v q 88771", "change u s 60577", "change y w 64882", "erase v 72822", "erase q 87844", "erase w 99666", "change u y 10105", "add v 43058", "erase t 19111", "erase r 80628", "change w q 18008", "change u x 71802", "erase x 83433", "add w 74868", "add y 3561", "add q 39652", "erase s 2116", "add s 21203", "erase y 43444"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 616664;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string word = "mfgiigmgmmngfnhmmfljlmggm";
    vector<string> operations = {"add g 37463", "change k e 72931", "change m j 50713", "add k 68095", "erase l 90892", "erase j 78449", "erase g 57942", "erase h 54988", "change m l 52007", "erase m 71275", "change j e 34282", "change h m 55604", "add l 24001", "change h f 32928", "change l f 5114", "change f k 95690", "change i f 32865", "change j k 92240", "change g f 21156", "erase k 84459", "change f m 18086", "erase i 66962", "add f 3806", "change j m 56366", "erase f 40530", "change e h 89870", "erase e 69622"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 229289;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string word = "ehigkekfkhkiigf";
    vector<string> operations = {"change f i 49884", "change f c 50767", "erase i 848", "change b h 47819", "erase d 58451", "add h 51223", "change i h 15367", "add c 15535", "change b c 33691", "change e d 30537", "change d b 75988", "add g 53721", "add e 1322", "add b 83325", "erase e 93876", "erase h 7010", "change h g 90194", "add d 20375", "erase f 4683", "change b d 23964", "add i 65961", "change b e 28379", "erase g 46815", "change b f 71819", "change c i 38843", "erase c 55950"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 23891;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string word = "ecdgfdebhfbfcidddhcdcgfddgidbfgbddfgdih";
    vector<string> operations = {"change d b 8055", "erase f 64380", "change e b 96458", "change i b 85130", "erase i 87704", "change g d 80218", "change b e 65316", "erase e 84643", "change d f 64095", "change f b 75445", "add j 25640", "change j g 10222", "add i 83910", "change f c 12875", "change c b 73840", "erase g 1638", "change c f 75311", "erase j 67302", "change f j 32315", "change b h 26482", "change g e 14142", "change j f 10362", "change j e 97913", "add b 64382", "erase c 4741", "erase h 50755", "add c 66633", "add e 89157", "erase b 46191", "add f 94788"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 374799;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string word = "wxqwxxuqtzttwxttzsyyqsrpxx";
    vector<string> operations = {"change u k 86073", "change y z 87880", "change n m 98351", "change j s 72123", "change v n 42135", "erase m 73372", "add q 7290", "add k 42827", "erase r 66377", "erase p 44802", "erase w 92116", "change n r 85067", "erase s 42743", "erase j 42416", "change x w 64527", "add r 55141", "erase q 67959", "change l z 14673", "add v 21310", "change k y 71972", "erase n 22687"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1475135;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string word = "hinjijfhionigegnkoihheonnif";
    vector<string> operations = {"erase n 77199", "erase h 83658", "erase t 92238", "erase m 39613", "erase l 48611", "change r q 96247", "change p i 60664", "change p l 93871", "change t g 7268", "erase o 52435", "change m o 46523", "erase p 66574", "add r 97994", "change k q 90976", "erase s 21833", "change n p 58409", "add p 40851", "erase v 96009", "add j 8824", "erase k 96133", "add m 16534", "change k i 89310", "change o k 99236", "erase r 11620", "add q 85702", "change v i 90175", "change g l 69443", "add s 47545", "change q l 27365", "add v 41434", "change l s 48793", "add i 13346", "add h 12511", "erase u 33537", "change p v 3459", "change g p 69730", "add n 42540", "erase q 65497"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 587733;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string word = "svsnwstrnqntrwnsmq";
    vector<string> operations = {"erase j 94223", "change s q 91768", "add q 73569", "add t 83491", "change r w 49618", "change q t 72874", "erase l 70398", "change l k 84328", "change o j 16233", "change k o 77769", "change j k 43756", "erase r 56813", "change k s 60434", "erase o 2880", "change k m 82886", "erase s 35185", "erase m 31026", "add r 60153", "change p q 6620", "change v l 26538", "erase w 36224", "change v k 36774", "change o t 32665", "add o 41676", "change o l 8134", "add l 7300", "add m 8914", "change l t 39767", "add u 24100", "add p 39358", "erase n 78745", "change j m 65269", "erase v 75863", "erase q 93854", "add s 69022", "change r v 32376", "erase u 4773", "change u v 52994", "change s u 77558", "erase p 81228", "add k 36238", "change t w 20868", "change r p 7830", "change p o 87383", "erase t 3559", "add n 66957"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 166218;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string word = "nrslnqpnmrsnrsnsnqolmpmrrmpmlomnslplnslqnspnsrrn";
    vector<string> operations = {"erase d 95538", "erase i 1066", "erase w 9266", "change u i 68578", "erase n 1770", "erase q 50285", "erase p 72740", "change e v 8410", "erase g 28215", "add d 43715", "change x e 88808", "change n q 50944", "change v n 82622", "erase f 51581", "change s v 4579", "change k i 3003", "add u 86456", "add v 28046", "change d q 65752", "change k q 44399", "add y 30283", "erase v 72105", "change w l 36639", "erase r 86210", "change n i 80044", "change t q 93984", "change e i 10615", "erase y 94972", "add e 76005", "add w 19028", "erase u 64602", "add f 21201", "change i v 19530", "add q 72244", "change d k 8045", "change m d 75398", "change l r 49335", "erase x 13041", "add x 97013", "add j 6018", "change y d 52721", "erase l 54294", "add r 18404", "erase j 87486", "add t 56322", "change n e 61026"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 591995;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string word = "hlkjlj";
    vector<string> operations = {"erase h 40108", "add o 53695", "change r n 82282", "change o n 20754", "erase n 61151", "add s 2594", "add g 80917", "add p 71632", "change h n 35494", "erase p 79823", "erase g 14934", "change m s 53777", "erase l 69671", "change g j 92905", "change u m 99704", "add j 98714", "change u h 63135", "erase t 4698", "change f m 87575", "change p m 89208", "change p n 70468", "change g m 67030", "add q 85466", "add u 62755", "add r 7281", "erase u 53988", "add e 69153", "change s i 94490", "change t k 13476", "change o m 56590", "erase j 78310", "erase f 89722", "change l m 317", "erase r 98686", "change h l 82301", "change j p 23247", "change o k 69466", "change l f 94529", "change n s 70447", "erase i 87649", "add k 92202", "change s j 43322", "change u j 85049", "erase q 87754", "add h 70487", "change j e 62846", "change r e 95136", "change s u 46056"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 131940;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string word = "owwo";
    vector<string> operations = {"erase k 67316", "add n 29721", "add m 83911", "change o s 29915", "change q l 44163", "change o m 24484", "erase l 41489", "change k o 34604", "change i k 69795", "erase s 74636", "change m o 54695", "erase q 3810"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
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
    string word = "xvpptuxxuuuuvx";
    vector<string> operations = {"change p u 66758", "add t 18428", "change p n 95909", "change t r 82345", "add w 13235", "erase n 30656", "erase u 64204", "erase s 51392"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 216148;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string word = "njnmlfhijjn";
    vector<string> operations = {"erase p 32080", "change h z 98653", "erase u 45426", "add f 78534", "change g c 64793", "change l w 87101", "change q s 97347", "change g r 80388", "erase t 26891", "add z 34830", "change k s 63958", "add x 75527", "erase g 79661", "erase a 45207", "erase h 40355", "add w 33806", "change s u 30867", "erase c 370", "change d g 62941", "add m 5557", "change f c 24606", "add v 26106", "change k p 7485", "change v m 44290", "add a 96939", "change k h 91008", "change t c 57523", "erase k 45345", "change m z 31582", "change u k 36273", "change f g 67141", "change y r 27133", "change u d 18776", "change g v 83610", "change i q 71138", "add q 57226", "erase w 61775", "add r 68473", "add s 29754", "erase x 60242", "add n 42658", "change u c 5022", "change a q 63171", "erase z 35827", "add b 34930", "add d 65857", "change d w 68935", "erase l 62226"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 304136;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string word = "usrqpqqwuvssvrruwvututttuuutwurqusvqutqtqqqsv";
    vector<string> operations = {"add x 94043", "add m 81816", "erase d 37004", "erase v 23973", "change i h 32387", "erase p 93782", "erase k 46017", "add v 75659", "change v n 95007", "add w 59579", "add a 51505", "erase m 53859", "change i f 45546", "change d x 15093", "erase g 88083", "erase a 1666", "add l 27748", "change x c 28833", "change r x 20650", "erase s 77516", "add c 79337", "change d m 9372", "change c m 75680", "change c u 53427", "add i 94350", "erase x 96045", "change a s 10850", "change t a 74158", "change j y 61399", "erase b 72521", "change n w 17719", "add e 65873", "add d 61638", "add p 19700", "add f 86945", "add b 37026", "erase l 23113", "change i d 11504", "change w i 4742", "add g 35", "add y 96501", "add j 38793", "change p y 97039", "change c p 88499"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2449900;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string word = "ssqmisqpjsuqnnlmurulkmpnnnuslmoskmsps";
    vector<string> operations = {"erase h 77306", "erase e 66706", "erase o 59235", "add o 69065", "change y u 16298", "add y 4015", "add k 68104", "change s c 83590", "erase c 41905", "erase s 61349", "erase y 88168", "add w 55952", "erase k 24574", "change c v 70811", "change k u 63533", "change q e 91814", "change i g 23687", "add t 59070", "add d 82582", "change q i 95953", "erase u 80090", "change c n 45302", "change e p 27928", "erase z 78449", "erase t 2755", "erase r 890", "erase b 27282", "erase w 21604", "erase m 26210", "change z q 97327", "change t p 24115", "change t k 81223", "erase a 43862", "change f q 13787", "add z 80320", "change k w 43902", "add s 77982", "change b v 75113", "erase f 66535", "erase d 89463", "change f m 1677", "erase v 4268", "erase g 10882", "change j f 16744", "erase q 9002", "add e 92034", "add p 30945", "change y j 84542", "change g y 65160"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 1520424;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string word = "lqnolrprqqqornsnoqmmqonsnroqqqrprlonql";
    vector<string> operations = {"erase v 2701", "change h b 43075", "erase h 73759", "erase x 75566", "change l p 63050", "change l j 86151", "change c m 62529", "change r i 97897", "change u e 65412", "change t s 13668"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string word = "lplomnnlpmokrnlrpqimookolmiqprlnrkomplnnmolpl";
    vector<string> operations = {"add r 72073", "add w 95123", "add t 81613", "add o 33666", "change x v 32045", "erase z 70026", "change w k 50176"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 246297;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string word = "hihnijojhkhimkkmhlhmimoihhiomimhlhmkkmihkhjojinhih";
    vector<string> operations = {"add i 96919", "change k y 92626", "change p e 82116", "add b 14197", "add n 4696", "change p y 21175", "change h y 91814", "erase k 93404", "change i p 89888", "add v 68733", "erase u 19619", "change q w 9962", "change f k 87472", "erase h 2014", "change a i 97685", "add a 64893", "change e r 30345", "add f 89109", "erase y 23391", "change t s 54365", "erase b 26951", "erase x 56656", "change y c 71416", "change u t 59089", "add s 56939", "erase w 93350", "change e w 10841", "add w 91057", "erase n 24258", "change y q 74472", "change o s 65717", "erase c 63186", "change m x 27866", "change e z 36373", "change y u 21526", "add l 52044", "add z 6772", "change o z 49586", "add o 50975", "add c 71371", "change x f 1693", "add x 578", "erase a 1064", "change v x 49839", "change t o 51356", "erase d 29688", "erase o 26630", "add p 71847", "erase t 10530", "add g 27744"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string word = "ohjukljphdejxnusodplmshjjjhsmlpdosunxjedhpjlkujho";
    vector<string> operations = {"erase l 98932", "change f w 23038", "add a 33707", "add w 4615", "change i x 96321", "erase n 67615", "erase c 294", "change f a 2128", "change g o 75653", "add f 13936", "erase s 98867", "erase i 89425", "erase a 573", "change q y 36105", "add v 58869", "change k s 18326", "add u 35029", "change m h 8289", "add z 96023", "change r w 55342", "change j y 95231", "add x 6828", "change e a 36466", "erase h 70777", "erase w 43913", "change n f 35607", "change x u 40481", "add t 67718", "add i 39789", "change r t 17957", "add r 41889", "add j 86611", "change i w 77982", "erase j 64520", "erase r 82050", "add k 71539", "change z u 91490", "erase q 34575", "erase g 85831", "change q p 69357", "change e o 7930", "erase b 47184", "change j v 89203", "change i k 13094", "change j q 16731", "add o 8972", "erase m 25858", "add n 30708", "add c 29357", "change s l 57910"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string word = "onkqlopppqonoonmnmimmnljjjqnmmimnmnoonojpppklqkno";
    vector<string> operations = {"erase z 87406", "add a 96119", "change k f 49643", "change o b 72169", "add x 54035", "erase j 40369", "add y 12941", "add p 44312", "change f a 43573", "erase h 80153", "add h 56454", "add q 75093", "add e 53732", "change l m 91452", "erase b 37918", "add s 30563", "change u a 49513", "change j o 35509", "change x m 33788"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 611084;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string word = "aaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> operations = {"change a b 1", "erase a 1", "add b 1", "erase b 1", "change b a 1", "add a 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string word = "caaaaaab";
    vector<string> operations = {"change b a 100000", "change c a 100000", "change c d 50000", "change b e 50000", "erase d 50000", "erase e 49999"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 199999;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string word = "xab";
    vector<string> operations = {"change a c 1", "change b d 1", "change c e 1", "change d e 1", "add y 1", "change y z 1", "change x z 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string word = "esprit";
    vector<string> operations = {"change p x 42", "change r x 42", "erase i 13", "change s b 6", "erase b 7", "change e q 17", "change t w 666", "change w q 1337", "change w t 666"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2130;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string word = "aaze";
    vector<string> operations = {"change a b 10", "add d 10", "change d c 10", "change c b 10", "change e f 10", "change f g 10", "erase g 10"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string word = "cady";
    vector<string> operations = {"add d 1", "erase c 1", "change x y 1", "add x 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string word = "adcfdq";
    vector<string> operations = {"add r 100", "change r c 50", "change r d 75", "change c d 20", "change d f 30", "add c 50", "change c f 110", "change f b 25", "change z c 50", "change z d 75", "change z e 20", "change q z 50", "change s z 75", "change t z 20", "change v z 30", "change w q 50", "change z q 75", "change w t 20", "change z t 30", "change j k 50", "change q j 75", "change z l 20", "change l m 30", "change r l 50", "change r q 75", "change z g 20", "change g x 1", "change x n 1", "change n p 1", "change p y 1", "change x q 1", "change z r 30"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 440;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string word = "acc";
    vector<string> operations = {"add b 1", "change a b 1", "add a 3"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string word = "becfbddcbdcfgegadbccdafccffgbffadfdcbaccbefagdgccb";
    vector<string> operations = {"change a b 27", "change e b 2", "add g 15", "erase a 25", "change a c 21", "erase f 9", "change f e 27", "change b e 7", "change e a 15", "change f a 3", "change g b 2", "change g a 30", "change e d 12", "change b f 28", "change f b 6", "add b 30", "change d e 30", "add e 1", "erase d 11", "change b c 9", "change a g 15", "change a d 26", "change c e 18", "change c f 2", "change a e 16", "erase e 10", "erase c 27", "change g f 18", "change g d 6", "change e c 15", "change b a 5", "erase b 19", "change c a 13", "change f d 9", "change d f 15", "change e g 16", "add f 21", "change f c 20", "change g c 3", "change c b 24", "change f g 15", "add c 30", "change d a 1", "add a 28", "add d 20", "change c d 21", "change b g 4", "change d c 25", "change a f 3", "change e f 19"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string word = "abcdefghijklmnopqrstuvwxyzxwvutsrponmlkjihgfedcba";
    vector<string> operations = {"erase z 100000", "erase y 100000", "erase x 100000", "erase w 100000", "erase v 100000", "erase u 100000", "erase t 100000", "erase s 100000", "erase r 100000", "erase q 100000", "erase p 100000", "erase o 100000", "erase n 100000", "erase m 100000", "erase l 100000", "erase k 100000", "erase j 100000", "erase i 1", "erase h 100000", "erase g 100000", "erase f 100000", "erase e 100000", "erase d 100000", "erase c 100000", "erase b 100000", "erase a 100000", "change a b 1", "change b c 1", "change c d 1", "change d e 1", "change e f 1", "change f g 1", "change g h 1", "change h i 1", "change z a 1", "add q 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string word = "bca";
    vector<string> operations = {"change b d 12", "change c d 6", "add b 20", "erase a 20", "change a e 6", "erase e 6"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string word = "xpac";
    vector<string> operations = {"change a b 1", "change c b 1", "change p q 3", "change p r 1", "change r q 1", "erase r 1", "erase p 100", "add y 1", "change y z 1", "change x z 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string word = "ab";
    vector<string> operations = {"change a e 50", "change e c 50", "change b c 50"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string word = "ababababababababababababababababababababababababab";
    vector<string> operations = {"change a c 1", "change c b 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string word = "aefxefefefefefefefefefefefefefefefefefefefefefefef";
    vector<string> operations = {"change a b 1", "change b c 1", "change c x 1", "add x 1000", "change e f 1", "erase f 1000", "add e 10"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 487;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string word = "aaaaaaaaaaaaaaaaaaaaaaaazzslkdjblksdjblkjsdlkbjlsl";
    vector<string> operations = {"change a b 1", "change b c 1", "change c d 1", "change d e 1", "change e f 1", "change f g 1", "change g h 1", "change h i 1", "change i j 1", "change j k 1", "change k l 1", "change l m 1", "change m n 1", "change n o 1", "change o p 1", "change p q 1", "change q r 1", "change r s 1", "change s t 1", "change t u 1", "change u v 1", "change v w 1", "change w x 1", "change x a 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string word = "syeysattbclqmxkaygcheqweqkmhazbuxfsrhlkipvbcunevvh";
    vector<string> operations = {"add l 83182", "change j k 3306", "erase q 17277", "add q 31092", "erase s 84650", "change v x 2006", "change y r 9785", "change w t 924", "change p c 9463", "change j q 8117", "change k j 2639", "add v 97910", "change g o 3703", "erase k 79589", "add b 10643", "change b i 7174", "add a 79265", "change x u 8214", "change i d 1327", "change o v 3229", "change y n 3749", "change b e 1497", "change f c 3935", "change q h 4624", "change i b 2277", "erase v 50126", "change a z 562", "erase y 36934", "change e s 2339", "change d i 6356", "change z g 2230", "change h s 7121", "change t w 8556", "erase r 66558", "change p m 5271", "change t l 7695", "change s e 8467", "change e b 8725", "change w k 3327", "change c p 2564", "change d a 768", "change c f 80", "change m l 6894", "change r y 2439", "change l t 4853", "erase w 78670", "change n y 4967", "change u n 5479", "add d 52372", "change r f 8510"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 426331;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string word = "abg";
    vector<string> operations = {"add a 10", "add d 3", "add c 9", "change d c 3", "change c a 3", "change g x 1", "change x y 1", "erase y 3", "erase g 10", "erase x 7"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string word = "ab";
    vector<string> operations = {"add a 8", "add z 1", "change z a 2"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string word = "ab";
    vector<string> operations = {"change a c 1", "change c d 1", "change b e 1", "change e d 1", "change a b 10"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string word = "rgyormgmhvyszgnqxyjrifiauyajfbnjuchwltcrjljzzwskli";
    vector<string> operations = {"change a b 2240", "change b c 9213", "change c d 4848", "change d e 2861", "change e f 3013", "change f g 11", "change g h 1597", "change h i 2975", "change i j 2899", "change j k 63", "change k l 6198", "change l m 2717", "change m n 433", "change n o 2387", "change o p 3636", "change p q 9636", "change q r 7301", "change r s 4897", "change s t 9269", "change t u 1633", "change u v 4255", "change v w 2011", "change w x 3082", "change x y 5478", "change y z 8902", "change z a 6730", "add o 3017", "erase q 6234", "erase l 8059", "erase z 2364", "add v 1128", "add s 160", "add a 607", "add c 5898", "erase f 5005", "add n 5308", "erase n 9396", "erase d 9545", "add j 2094", "add f 38", "add w 4436", "erase b 2018", "add x 2926", "erase t 7785", "change z t 2", "change y f 4", "change c j 8", "change h w 7", "change o a 3", "change v n 9"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 61249;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string word = "xaaaaaaaaaaaa";
    vector<string> operations = {"change x y 1", "change y z 1", "erase z 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string word = "xz";
    vector<string> operations = {"change x z 5", "change x y 1", "change y z 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string word = "aabcdefghijklmnopqrstuvaaaavutsrqponmlkjihgfedcbag";
    vector<string> operations = {"change a z 10", "change a b 1", "change b c 1", "erase z 1", "add z 1", "change z w 1", "add w 1", "erase u 1", "change t i 1", "change j l 1", "erase l 1", "add k 1", "add o 1", "erase o 1", "change a g 1000", "change c d 1", "change d e 1", "change e f 1", "change f g 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string word = "topcodercodertoptoptoptopcodertopcoderdercopoooptp";
    vector<string> operations = {"erase t 10", "erase o 1", "erase p 2", "erase c 1", "erase d 1", "erase e 1", "erase r 1", "add e 3"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string word = "axbp";
    vector<string> operations = {"change b e 1", "change c e 1", "erase a 1", "add c 1", "add q 1", "change q p 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string word = "ab";
    vector<string> operations = {"change c a 1", "add c 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string word = "ab";
    vector<string> operations = {"erase x 100", "change b c 200", "change c d 200", "change d x 200"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 700;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string word = "xyz";
    vector<string> operations = {"change x a 478", "change y b 3784", "add a 38745", "add b 763"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 43770;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string word = "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyy";
    vector<string> operations = {"add a 100000", "change a b 100000", "change b c 100000", "change c d 100000", "change d e 100000", "change e f 100000", "change f g 100000", "change g h 100000", "change h i 100000", "change i j 100000", "change j k 100000", "change k l 100000", "change l m 100000", "change m n 100000", "change n o 100000", "change o p 100000", "change p q 100000", "change q r 100000", "change r s 100000", "change s t 100000", "change t u 100000", "change u v 100000", "change v w 100000", "change w x 100000", "change x y 100000", "erase a 100000", "change b a 100000", "change c b 100000", "change d c 100000", "change e d 100000", "change f e 100000", "change g f 100000", "change h g 100000", "change i h 100000", "change j i 100000", "change k j 100000", "change l k 100000", "change m l 100000", "change n m 100000", "change o n 100000", "change p o 100000", "change q p 100000", "change r q 100000", "change s r 100000", "change t s 100000", "change u t 100000", "change v u 100000", "change w v 100000", "change x w 100000", "change y x 100000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 21600000;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string word = "asdjflaksdfadlkfjaksdjflaksdjflaksdjlfaksdlkjfalks";
    vector<string> operations = {"add a 100000", "add b 100000", "add c 100000", "add d 100000", "add e 100000", "add f 100000", "add g 100000", "add h 100000", "add i 100000", "add j 100000", "add k 100000", "add l 100000", "add m 100000", "add n 100000", "add o 100000", "add p 100000", "add q 100000", "add r 100000", "add s 100000", "add t 100000", "add u 100000", "add v 100000", "add w 100000", "add x 100000", "add y 100000", "add z 100000", "erase a 100000", "erase b 100000", "erase c 100000", "erase d 100000", "erase e 100000", "erase f 100000", "erase g 100000", "erase h 100000", "erase i 100000", "erase j 100000", "erase k 100000", "erase l 100000", "erase m 100000", "erase n 100000", "erase o 100000", "erase p 100000", "erase q 100000", "erase r 100000", "erase s 100000", "erase t 100000", "erase u 100000", "erase v 100000", "erase w 100000", "erase x 100000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2700000;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string word = "mb";
    vector<string> operations = {"add k 1", "change k c 1700", "change c m 1700"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3401;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string word = "cccccccccccccccaauuuuuuggggggggggggggg";
    vector<string> operations = {"change a b 1", "add b 1", "change c d 100", "change d e 100", "change e f 100", "change f g 100"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 6004;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string word = "fyyyzzzaxxxxaaxzyaxaxyayxzxabayyyyxxxzzzaf";
    vector<string> operations = {"change x z 19", "change y z 57", "change x y 11", "change a b 34", "erase b 19", "erase a 939"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 483;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string word = "dbcd";
    vector<string> operations = {"add a 1", "change a c 1", "change b c 10000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzzzzzzzzzzzz";
    vector<string> operations = {"change a b 100000", "change b c 100000", "change c d 100000", "change d e 100000", "change e f 100000", "change f g 100000", "change g h 100000", "change h i 100000", "change i j 100000", "change j k 100000", "change k l 100000", "change l m 100000", "change m n 100000", "change n o 100000", "change o p 100000", "change p q 100000", "change q r 100000", "change r s 100000", "change s t 100000", "change t u 100000", "change u v 100000", "change v w 100000", "change w x 100000", "change x y 100000", "change y z 100000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 62500000;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string word = "ab";
    vector<string> operations = {"change b d 1", "change a d 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string word = "bc";
    vector<string> operations = {"add a 1", "change a b 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string word = "abc";
    vector<string> operations = {"add z 2", "add y 5", "change z b 3", "change y a 7"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string word = "ad";
    vector<string> operations = {"add c 10", "change c e 10", "change e d 10"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string word = "st";
    vector<string> operations = {"change s p 1", "change p w 1", "change w t 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string word = "xabday";
    vector<string> operations = {"erase d 5", "change x k 10", "change y l 10", "change k z 10", "change l z 10"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string word = "abadcaba";
    vector<string> operations = {"add x 1", "change x e 1", "change d e 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string word = "abca";
    vector<string> operations = {"erase a 1", "erase b 10", "erase c 10", "change a b 2"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string word = "ac";
    vector<string> operations = {"add x 1", "change x y 1", "change y a 1", "change x a 1000", "add a 1000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string word = "tm";
    vector<string> operations = {"add x 10", "change x c 100", "change c t 100"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string word = "ab";
    vector<string> operations = {"add d 10", "change d b 100"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string word = "aaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbb";
    vector<string> operations = {"change a b 10", "change b a 10", "change a c 10", "change c a 10", "change b d 10", "change d b 10"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string word = "abcxa";
    vector<string> operations = {"change x b 100", "change x y 1", "erase y 1", "add z 1", "change z b 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string word = "ac";
    vector<string> operations = {"change a b 1", "change c b 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string word = "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyz";
    vector<string> operations = {"add a 100000", "change a b 100000", "change b c 100000", "change c d 100000", "change d e 100000", "change e f 100000", "change f g 100000", "change g h 100000", "change h i 100000", "change i j 100000", "change j k 100000", "change k l 100000", "change l m 100000", "change m n 100000", "change n o 100000", "change o p 100000", "change p q 100000", "change q r 100000", "change r s 100000", "change s t 100000", "change t u 100000", "change u v 100000", "change v w 100000", "change w x 100000", "change x y 100000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 122500000;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string word = "abc";
    vector<string> operations = {"change a d 1", "change d e 2", "change e f 33", "add k 22112", "erase f 44", "change k l 44", "change l c 99"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 22335;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string word = "ab";
    vector<string> operations = {"change a b 10", "change a c 3", "change c b 3", "change a z 1", "change b z 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaaaazzzaaaa";
    vector<string> operations = {"change a z 100000", "add z 100000", "change a b 1", "change b c 1", "change c d 1", "change d z 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string word = "xxxabckxxxyyydeflyyy";
    vector<string> operations = {"add a 10", "change a b 13", "change b c 14", "erase d 9", "change e d 15", "change f e 36", "change x y 10", "change y x 12", "change k m 10", "change l m 10"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 243;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string word = "bc";
    vector<string> operations = {"change b a 1", "change c a 2"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string word = "cacacababbabbaaabbbabbababbbbabcbbcbabcbcbbbbaaaab";
    vector<string> operations = {"change b a 25000", "change c a 25001", "change c b 50000", "change b e 50000", "erase c 50000", "erase a 49999"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 350003;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string word = "acda";
    vector<string> operations = {"erase a 1", "change a b 1", "change c b 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string word = "to";
    vector<string> operations = {"add x 1", "change x o 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string word = "bac";
    vector<string> operations = {"change b d 100000", "change c d 100000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 200000;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string word = "abcdefggfed";
    vector<string> operations = {"change c a 7", "change b m 10", "change m x 10", "change z n 100", "change x t 10", "change t y 100", "change y n 9", "change a o 10", "change o m 10", "change t z 10", "erase n 27"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 525;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string word = "ac";
    vector<string> operations = {"add a 1000", "add x 1", "change x y 1", "change y a 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string word = "ab";
    vector<string> operations = {"change b c 100", "change c d 100", "add d 100"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string word = "xxxxxxb";
    vector<string> operations = {"add b 11", "add y 5", "change y b 5", "erase b 11"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string word = "dab";
    vector<string> operations = {"add d 1", "change a c 1", "change b c 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string word = "zaetoooooooooooooooooooopooooooooooooooooooooqlkdy";
    vector<string> operations = {"add z 10000", "erase y 10000", "change a b 1", "change b c 1", "change c d 1", "change a d 1000", "change e f 1000", "change f g 1000", "change g h 1000", "change e h 1000", "change h i 1", "change j k 1", "erase e 1", "erase f 1", "erase g 1", "erase i 1", "add f 1", "add g 1", "add h 1", "add j 1", "add l 10000", "add m 1", "change m n 1", "change n l 1", "change q r 1", "change r s 1", "change t u 1", "change u s 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 20013;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string word = "az";
    vector<string> operations = {"change a b 5", "change b c 5", "change c z 5"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string word = "axyc";
    vector<string> operations = {"change a z 1", "change c z 1", "change y z 1", "change z x 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string word = "abcd";
    vector<string> operations = {"change a b 1", "change b c 2", "change d c 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string word = "racecat";
    vector<string> operations = {"change t r 10", "change t p 1", "change q r 1", "change p q 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string word = "de";
    vector<string> operations = {"add a 1", "change a b 1", "change b c 1", "change c d 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string word = "bc";
    vector<string> operations = {"change b a 1", "change c a 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string word = "adb";
    vector<string> operations = {"add x 1", "change x a 1", "change d z 1", "erase z 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string word = "noeieuacieidsjhkfiqwjixxyxifjnjniowejcnieijieriiw";
    vector<string> operations = {"erase a 2", "erase b 2", "erase c 2", "erase d 2", "erase e 2", "erase f 2", "erase g 2", "erase h 2", "erase i 2", "erase j 2", "erase k 2", "erase l 2", "erase m 2", "erase n 2", "erase o 2", "add p 2", "add q 2", "add r 2", "add s 2", "add t 2", "add u 2", "add v 2", "add w 2"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string word = "caaaaaae";
    vector<string> operations = {"change b a 100000", "change c f 100000", "change c d 50000", "change b e 50000", "erase d 50000", "erase b 49999", "change e f 50000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 150000;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string word = "qwe";
    vector<string> operations = {"add r 1", "change r t 1", "change t y 2", "change y u 3", "change u i 5", "change q o 6", "change o p 7", "change i p 31", "change w n 5", "change n v 5", "change e v 5"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string word = "axshjhtyb";
    vector<string> operations = {"change x y 10000", "add l 20", "change l s 2", "erase z 20", "change t z 2", "erase x 20", "add y 20", "erase y 20000", "add x 20000", "change a k 3", "change k d 3", "change a d 120", "change b a 100000", "change b m 3", "change m d 3"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string word = "ab";
    vector<string> operations = {"change a c 10", "change b c 100"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string word = "ac";
    vector<string> operations = {"change a b 1", "change b c 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string word = "zb";
    vector<string> operations = {"change a z 1", "add a 1", "add z 100"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string word = "abcdefg";
    vector<string> operations = {"add e 3"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string word = "abc";
    vector<string> operations = {"add a 1", "change b d 1", "change c d 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string word = "ab";
    vector<string> operations = {"add a 1000", "add c 1", "change c a 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string word = "cb";
    vector<string> operations = {"add a 1", "change a b 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string word = "cdefghijklmnopqrstuvwxyzbbbbbbbbbbbbbbbbbbbb";
    vector<string> operations = {"add c 1", "change c d 1", "change d e 1", "change e f 1", "change f g 1", "change g h 1", "change h i 1", "change i j 1", "change j k 1", "change k l 1", "change l m 1", "change m n 1", "change n o 1", "change o p 1", "change p q 1", "change q r 1", "change r s 1", "change s t 1", "change t u 1", "change u v 1", "change v w 1", "change w x 1", "change x y 1", "change y z 1", "change z a 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    string word = "adc";
    vector<string> operations = {"change a b 1", "change c b 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    string word = "moonoomoonoomoonoomoop";
    vector<string> operations = {"add o 10", "add n 1", "erase m 10", "erase o 10000", "add m 10", "add p 10000", "change o q 1", "change o r 1", "add q 100", "add s 1", "add r 1", "erase s 1", "erase t 10", "erase u 10000", "add v 10", "add w 10000", "change x y 1", "change y x 1", "add z 100", "add a 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    string word = "vex";
    vector<string> operations = {"change s v 1", "erase x 1", "add s 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    string word = "azxa";
    vector<string> operations = {"erase a 1", "change a x 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    string word = "caabbaaad";
    vector<string> operations = {"change d e 10", "add e 10", "change a c 10", "change b c 10"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    string word = "ababababababababababababababababababababababbabab";
    vector<string> operations = {"add c 1", "change c d 1", "change a z 100000", "change d e 1", "change e f 1", "change f g 1", "change z g 10000", "change g c 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 220004;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    string word = "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyy";
    vector<string> operations = {"add a 1", "add b 1", "add c 1", "add d 1", "add e 1", "add f 1", "add g 1", "add h 1", "add i 1", "add j 1", "add k 1", "change a b 1", "change b c 1", "change c d 1", "change d e 1", "change e f 1", "change f g 1", "change g h 1", "change h i 1", "change i j 1", "change j k 1", "change k l 1", "change l m 1", "change m n 1", "change n o 1", "change o p 1", "change p q 1", "change q r 1", "change r s 1", "change s t 1", "change t u 1", "change u v 1", "change v w 1", "change w x 1", "change x y 1", "change y z 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    string word = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx";
    vector<string> operations = {"change a b 100000", "change b c 100000", "change c d 100000", "change d e 100000", "change e f 100000", "change f g 100000", "change g h 100000", "change h i 100000", "change i j 100000", "change j k 100000", "change k l 100000", "change l m 100000", "change m n 100000", "change n o 100000", "change o p 100000", "change p q 100000", "change q r 100000", "change r s 100000", "change s t 100000", "change t u 100000", "change u v 100000", "change v w 100000", "change w x 100000", "change x y 100000", "change y z 100000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 28900000;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    string word = "ab";
    vector<string> operations = {"change a c 10", "change b c 10"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    string word = "ab";
    vector<string> operations = {"add c 2", "change c a 3"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    string word = "cazzb";
    vector<string> operations = {"change a t 1", "change b t 2", "change c d 100", "add u 200", "change u d 1000", "change u v 150", "change v d 250"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 703;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    string word = "ab";
    vector<string> operations = {"change a c 1", "add c 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    string word = "ab";
    vector<string> operations = {"change a c 1", "change b c 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    string word = "xzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    vector<string> operations = {"add a 100000", "change a b 100000", "change b c 100000", "change c d 100000", "change d e 100000", "change e f 100000", "change f g 100000", "change g h 100000", "change h i 100000", "change i j 100000", "change j k 100000", "change k l 100000", "change l m 100000", "change m n 100000", "change n o 100000", "change o p 100000", "change p q 100000", "change q r 100000", "change r s 100000", "change s t 100000", "change t u 100000", "change u v 100000", "change v w 100000", "change w y 100000", "change y z 100000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 122500000;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    string word = "bc";
    vector<string> operations = {"add a 1", "change c a 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbb";
    vector<string> operations = {"change b c 1", "change b d 1", "change b e 1", "change b f 1", "change b g 1", "change b h 1", "change b i 1", "change b j 1", "change b k 1", "change b l 1", "change b m 1", "change b n 1", "change b o 1", "change b p 1", "change b q 1", "change b r 1", "change b s 1", "change b t 1", "change b u 1", "change b v 1", "change b w 1", "change b x 1", "change b y 1", "change b z 1", "change b a 1", "change c b 1", "change d b 1", "change e b 1", "change f b 1", "change g b 1", "change h b 1", "change i b 1", "change j b 1", "change k b 1", "change l b 1", "change m b 1", "change n b 1", "change o b 1", "change p b 1", "change q b 1", "change r b 1", "change s b 1", "change t b 1", "change u b 1", "change v b 1", "change w b 1", "change x b 1", "change y b 1", "change z b 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    string word = "axxxxx";
    vector<string> operations = {"change a b 1", "add b 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    string word = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaz";
    vector<string> operations = {"change a b 1", "change b c 1", "change c d 1", "change d e 1", "change e f 1", "change f g 1", "change g h 1", "change h i 1", "change i j 1", "change j k 1", "change k l 1", "change l m 1", "change m n 1", "change n o 1", "change o p 1", "change p q 1", "change q r 1", "change r s 1", "change s t 1", "change t u 1", "change u v 1", "change v w 1", "change w x 1", "change x y 1", "change y z 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    string word = "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyy";
    vector<string> operations = {"add a 1", "add b 1", "add c 1", "add d 1", "add e 1", "add f 1", "add g 1", "add h 1", "add i 1", "add j 1", "add k 1", "change a b 1", "change b c 1", "change c d 1", "change d e 1", "change e f 1", "change f g 1", "change g h 1", "change h i 1", "change i j 1", "change j k 1", "change k l 1", "change l m 1", "change m n 1", "change n o 1", "change o p 1", "change p q 1", "change q r 1", "change r s 1", "change s t 1", "change t u 1", "change u v 1", "change v w 1", "change w x 1", "change x y 1", "change y z 1", "add l 1", "add m 1", "add n 1", "add o 1", "add p 1", "add q 1", "add r 1", "add s 1", "add t 1", "add u 1", "add v 1", "add w 1", "add x 1", "add y 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    string word = "xagfy";
    vector<string> operations = {"change a b 1", "change b c 1", "erase c 1", "add d 1", "change d e 1", "change e f 1", "change x z 1", "change z y 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    string word = "abb";
    vector<string> operations = {"add c 1", "change c e 1", "change a e 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    string word = "ajhdhcgabgfhfebcaabegahbhhhhddfjjibicggadiabcfajeh";
    vector<string> operations = {"add a 42", "add b 468", "add c 335", "add d 501", "add e 170", "add f 725", "add g 479", "add h 359", "add i 963", "add j 465", "erase a 706", "erase b 146", "erase c 282", "erase d 828", "erase e 962", "erase f 492", "erase g 996", "erase h 943", "erase i 828", "erase j 437", "change b e 903", "change d c 383", "change b g 719", "change f h 727", "change b i 870", "change c h 300", "change f e 704", "change b c 334", "change d e 142", "change b d 869", "change h e 663", "change j d 742", "change j i 317", "change f a 843", "change i g 41", "change c e 649", "change g f 891", "change j a 351", "change g b 394", "change i j 624", "change g a 967"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 6842;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    string word = "axx";
    vector<string> operations = {"change a b 1", "change b c 1", "add c 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    string word = "ax";
    vector<string> operations = {"add t 1", "change t a 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    string word = "ab";
    vector<string> operations = {"change a c 10", "change c a 100"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    string word = "ab";
    vector<string> operations = {"add c 1", "change b c 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    string word = "zb";
    vector<string> operations = {"change b c 1", "add c 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    string word = "dbc";
    vector<string> operations = {"change d e 1", "change c e 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    string word = "yzvwvxwzxzyxxvyyyzzyzwafpsgbwvwwxzvvwxvzyvvxwwzxwy";
    vector<string> operations = {"change a d 1", "change d c 1", "change b e 1", "change e c 1", "change f j 1", "change j i 1", "add k 1", "change k l 1", "change l i 1", "change g o 1", "change o h 1", "add m 1", "change m n 1", "change n h 1", "change p q 1", "change q r 1", "erase r 1", "change s t 1", "change t u 1", "erase u 1", "change v w 1", "change w x 1", "change x y 1", "change y z 1", "change z v 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    string word = "aaab";
    vector<string> operations = {"erase e 10", "change b c 10", "change c d 10", "change d e 10"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    string word = "ab";
    vector<string> operations = {"add c 2", "change b c 2"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    string word = "abzzzzzzzzzzzzzzz";
    vector<string> operations = {"add c 1", "add d 1", "add e 1", "add f 1", "add g 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    string word = "uuuuuuuuuuuuuuuuuuuuuufailuuuuuuuuuuuuuuuuuuuuuuuu";
    vector<string> operations = {"change u p 1", "change u r 1", "change u o 1", "change u t 1", "change u a 1", "change u m 1", "change u s 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    string word = "xxxxxz";
    vector<string> operations = {"add a 1", "change z a 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    string word = "ad";
    vector<string> operations = {"add a 10000", "add b 1", "change b c 1", "change c d 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    string word = "bzz";
    vector<string> operations = {"erase a 2", "change a b 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    string word = "ab";
    vector<string> operations = {"change b x 42", "add x 42"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    string word = "xccccc";
    vector<string> operations = {"change x y 100", "add y 100"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    string word = "ab";
    vector<string> operations = {"add c 1", "change c d 1", "change a d 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    string word = "ax";
    vector<string> operations = {"add y 1", "change a z 1", "change y z 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    string word = "ab";
    vector<string> operations = {"change a c 2", "change b c 2"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    string word = "ax";
    vector<string> operations = {"add b 1", "change b a 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    string word = "fpgkrxdnvszsjyqgmmbljcgsewoxsvtrprubcxgo";
    vector<string> operations = {"add l 13", "add t 13", "change r w 7", "add a 7", "change f b 2", "add k 6", "erase w 10", "change q k 16", "change i o 5", "change u x 3", "change m g 19", "change i h 8", "erase v 13", "add o 14", "add w 5", "erase j 5", "change k e 18", "change f u 2", "change f n 12", "add j 19", "erase a 11", "erase x 19", "change g l 14", "erase p 18", "erase s 16", "erase d 8", "add c 19", "erase o 9", "change i t 9", "erase c 12", "change x p 6", "erase l 13", "erase m 20", "erase z 2", "change y q 16", "change t w 13", "erase i 19", "add h 14", "change l m 16", "erase g 19"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    string word = "efghijklmnabcdefghijklmnxynmlkjihgfedcbanmlkjihgfe";
    vector<string> operations = {"add a 1", "add b 1", "add c 1", "add d 1", "add e 1", "add q 100000", "erase f 1", "erase g 1", "erase h 1", "erase i 1", "erase j 1", "change a b 1", "change a c 1", "change a d 1", "change a e 1", "change b a 1", "change b c 1", "change b d 1", "change b e 1", "change y q 100000", "erase a 1", "erase b 1", "erase c 1", "erase d 1", "add f 1", "add g 1", "add h 1", "add j 1", "add k 1", "add l 1", "add m 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 200000;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    string word = "zb";
    vector<string> operations = {"add c 1", "change c b 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    string word = "bbc";
    vector<string> operations = {"add x 10", "change x c 10"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    string word = "az";
    vector<string> operations = {"change a b 100000", "change b c 100000", "change c d 100000", "change d e 100000", "change e f 100000", "change f g 100000", "change g h 100000", "change h i 100000", "change i j 100000", "change j k 100000", "change k l 100000", "change l m 100000", "change m n 100000", "change n o 100000", "change o p 100000", "change p q 100000", "change q r 100000", "change r s 100000", "change s t 100000", "change t u 100000", "change u v 100000", "change v w 100000", "change w x 100000", "change x y 100000", "change y z 100000"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2500000;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    string word = "aq";
    vector<string> operations = {"change q w 1", "add w 1"};
    PalindromizationDiv1* pObj = new PalindromizationDiv1();
    clock_t start = clock();
    int result = pObj->getMinimumCost(word, operations);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22699521&rd=14438&pm=11443
********************************************************************************
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <utility>
 
#include <set>
#include <map>
#include <vector>
#include <string>
#include <queue>
#include <memory.h>
 
#include <iostream>
#include <sstream>
 
using namespace std;
 
typedef long long int64;
 
#define forn(i, n) for(int i = 0; i < (int)(n); i++)
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; i--)
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define y1 YYYYYYYYYYYY1
#define all(a) a.begin(), a.end()
#define abs(x) (((x) >= 0) ? (x) : (-(x)))
 
const int INF = (int)1E9;
const int64 INF64 = (int64)1E18;
const long double EPS = 1E-9;
const long double PI = 3.1415926535897932384626433832795;
 
class PalindromizationDiv1 {
public:
  int getMinimumCost(string, vector <string>);
};
 
string s;
int64 del[40], add[40], g[40][40], d[100][100];
 
int64 solve(int l, int r) {
  if (l >= r) return 0;
 
  int64 &ans = d[l][r];
  if (ans != -1) return ans;
 
  int cl = s[l] - 'a', cr = s[r] - 'a';
 
  ans = INF;
  ans = min(ans, del[cl] + solve(l + 1, r));
  ans = min(ans, del[cr] + solve(l, r - 1));
  forn(c, 26) {
    ans = min(ans, g[cl][c] + solve(l + 1, r - 1) + g[cr][c]);
    ans = min(ans, add[c] + solve(l, r - 1) + g[cr][c]);
    ans = min(ans, g[cl][c] + solve(l + 1, r) + add[c]);
  }
 
  return ans;
}
 
int PalindromizationDiv1::getMinimumCost(string word, vector <string> a) {
  s = word;
  memset(del, 60, sizeof del);
  memset(add, 60, sizeof add);
  memset(g, 60, sizeof g);
 
  forn(i, a.size()) {
    stringstream st;
    st << a[i];
 
    string op;
    st >> op;
    if (op == "add") {
      int x;
      char c;
      st >> c >> x;
      add[c - 'a'] = x;
    }
 
    if (op == "erase") {
      int x;
      char c;
      st >> c >> x;
      del[c - 'a'] = x;
    }
 
    if (op == "change") {
      int x;
      char c1, c2;
      st >> c1 >> c2 >> x;
      g[c1 - 'a'][c2 - 'a'] = x;
    }
  }
  forn(i, 26) g[i][i] = 0;
  forn(k, 26)
    forn(i, 26)
      forn(j, 26)
        g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
 
  forn(i, 26)
    forn(j, 26) {
      del[i] = min(del[i], g[i][j] + del[j]);
      add[i] = min(add[i], add[j] + g[j][i]);
    }
 
  memset(d, 255, sizeof d);
  int64 ans = solve(0, (int)s.size() - 1);
  if (ans > INF/2) ans = -1;
  return ans;
}

********************************************************************************
*******************************************************************************/
/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1625
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

class SuperRot {
public:
    string decoder(string message);
};

string SuperRot::decoder(string message) {
    string ret;
    return ret;
}


int test0() {
    string message = "Uryyb 28";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "Hello 73";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string message = "GbcPbqre";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "TopCoder";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string message = "";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string message = "5678901234";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "0123456789";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string message = "NnOoPpQqRr AaBbCcDdEe";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "AaBbCcDdEe NnOoPpQqRr";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string message = "Gvzr vf 54 71 CZ ba Whyl 4gu bs gur lrne 7558 NQ";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "Time is 09 26 PM on July 9th of the year 2003 AD";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string message = "Gur dhvpx oebja sbk whzcf bire n ynml qbt";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "The quick brown fox jumps over a lazy dog";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string message = "nopqrstuvwxyzabcdefghijklm";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopqrstuvwxyz";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string message = "NOPQRSTUVWXYZABCDEFGHIJKLM";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string message = "5678901234";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "0123456789";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string message = "topcoder com is the place to go when you are bored";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "gbcpbqre pbz vf gur cynpr gb tb jura lbh ner oberq";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string message = "gbcpbqre pbz vf gur cynpr gb tb jura lbh ner oberq";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "topcoder com is the place to go when you are bored";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string message = "a B c D e F g H i J k L m N o P q R s T u V w X y";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "n O p Q r S t U v W x Y z A b C d E f G h I j K l";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string message = "abcdefghijklmnopqrstuvwxy and z now ive said my";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "nopqrstuvwxyzabcdefghijkl naq m abj vir fnvq zl";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string message = "abcs next time wont you sing with meeeeeeeeeeeeeee";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "nopf arkg gvzr jbag lbh fvat jvgu zrrrrrrrrrrrrrrr";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string message = "5";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string message = "OxrqVmSDxNEnMjdpJFg8Fx3cSEDBnwczjHf2rw3f 8IJejwnnR";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "BkedIzFQkARaZwqcWSt3Sk8pFRQOajpmwUs7ej8s 3VWrwjaaE";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string message = "isCcIVgJWJ5w8c3aUkMMFJJLQovBPYSyEUQMnwW83Pt0qkR9Lb";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "vfPpVItWJW0j3p8nHxZZSWWYDbiOCLFlRHDZajJ38Cg5dxE4Yo";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string message = "KQjUaz7L0LhG lZNvC F91Trp S45bWGp5YFsUOjdtndUCoEFo";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "XDwHnm2Y5YuT yMAiP S46Gec F90oJTc0LSfHBwqgaqHPbRSb";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string message = "HDdasIX9DTZXXDQvI9DVfeEJ5XLkbOMiPp89vU4wlSH7VXpbUs";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "UQqnfVK4QGMKKQDiV4QIsrRW0KYxoBZvCc34iH9jyFU2IKcoHf";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string message = "wzLz9GMIqlW2JmfEiPXcB9sH5BekdyRNmcCiiOqNzBD8njBJyY";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "jmYm4TZVdyJ7WzsRvCKpO4fU0OrxqlEAzpPvvBdAmOQ3awOWlL";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string message = "lxVS4OTXwwJD9tdASAP9NC Q kx tjVTXqlP42kpnsslbKltKy";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "ykIF9BGKjjWQ4gqNFNC4AP D xk gwIGKdyC97xcaffyoXygXl";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string message = "qV1njyMVv54HMPvvdooDTRv 2LJd4RQimHKK3WfpPZucpfNIJ1";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "dI6awlZIi09UZCiiqbbQGEi 7YWq9EDvzUXX8JscCMhpcsAVW6";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string message = "JcI3c9Eja71qfbxnlo ETOeDqHh2NqtUH0NhyPGMM52pXnS7SP";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "WpV8p4Rwn26dsokayb RGBrQdUu7AdgHU5AulCTZZ07cKaF2FC";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string message = "BjddlIiIAtwtD3hPYUedgoYZRtCjqSwp2QGdYojYXVFYPlnl5I";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "OwqqyVvVNgjgQ8uCLHrqtbLMEgPwdFjc7DTqLbwLKISLCyay0V";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string message = "EZudwCMxj0FWd5mjW9L5UgRZ5e9iF1oIRXlBZvy9k2SBv4lI0u";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "RMhqjPZkw5SJq0zwJ4Y0HtEM0r4vS6bVEKyOMil4x7FOi9yV5h";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string message = "GnIk0GPCV mU5FHlC8LmXl3D4QNUuHm90xcAFWLIdk4wQchh";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "TaVx5TCPI zH0SUyP3YzKy8Q9DAHhUz45kpNSJYVqx9jDpuu";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string message = "SxVs5EuwsBKzFgNzNIIZcUjRcy5nVeBB1s88jiWTGZv9Il";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "FkIf0RhjfOXmStAmAVVMpHwEpl0aIrOO6f33wvJGTMi4Vy";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string message = "kgCnbrhEHbQ7VYjdz0b8aiaSbtG5lMwRkYgz94823CMXM8I";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "xtPaoeuRUoD2ILwqm5o3nvnFogT0yZjExLtm49378PZKZ3V";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string message = "s0zeIrvXtIHBN0olX m8SMbLczUcVlUSk1t2YFi9ghmUN2";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "f5mrVeiKgVUOA5byK z3FZoYpmHpIyHFx6g7LSv4tuzHA7";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string message = "KoCHrLMQ87uTD3G lncc1zkaSODttCBDnQYKRPDV9WDGqk";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "XbPUeYZD32hGQ8T yapp6mxnFBQggPOQaDLXECQI4JQTdx";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string message = "lufo9bD9jpoIuYd8SUb7wSmejOw5PTTu4W9qogOXG97UJ11";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "yhsb4oQ4wcbVhLq3FHo2jFzrwBj0CGGh9J4dbtBKT42HW66";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string message = "tVntQ12z7mWGnZjDnWBmsrTO4BUvy HpaBAoFRxkV5pgzw";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "gIagD67m2zJTaMwQaJOzfeGB9OHil UcnONbSEkxI0ctmj";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string message = "b5nY9SWCMKnXRIlQpWdhyqa ZW2Vh1cFPXLIqFdtL5vGrY";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "o0aL4FJPZXaKEVyDcJquldn MJ7Iu6pSCKYVdSqgY0iTeL";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string message = "bOlAALCQ9PCvV5YPQpWUnJssfpKtduspbv HeOn01j5d7M";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "oByNNYPD4CPiI0LCDcJHaWffscXgqhfcoi UrBa56w0q2Z";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string message = "zjTFcz4S0o5PHHvcPrU1dbpJDzZJoy89NtZSNJbVEbN7zM";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "mwGSpm9F5b0CUUipCeH6qocWQmMWbl34AgMFAWoIRoA2mZ";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string message = "a19N428CssZ0 nIwhBQEA77PDPXk7foWWliQddRKMqAJRI3yHK";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "n64A973PffM5 aVjuODRN22CQCKx2sbJJyvDqqEXZdNWEV8lUX";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string message = "0IExVFCsq7LSSi30wXUDhesfn lgwqomwqXHwXyaT skfmaS8s";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "5VRkISPfd2YFFv85jKHQurfsa ytjdbzjdKUjKlnG fxsznF3f";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string message = "TcKB5x gStM4T lpEVC2vU2b4XDSn9B5aJ4V81zNkAH28qhB h";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "GpXO0k tFgZ9G ycRIP7iH7o9KQFa4O0nW9I36mAxNU73duO u";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string message = "4s1uKvHLEtKDmiMg2HYrS7pYwmERoCzguqQ2aVEeEMfoupLkxh";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "9f6hXiUYRgXQzvZt7ULeF2cLjzREbPmthdD7nIRrRZsbhcYxku";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string message = "QFb5dOigfKiUqQ 7JXRL1UXU9F Hquo70EzRSXxvfTELiBFrYV";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "DSo0qBvtsXvHdD 2WKEY6HKH4S Udhb25RmEFKkisGRYvOSeLI";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string message = "2NpNhlSet7PV0FZqUpBGZhZdq5ewm2HcFupkV7EC0TYrWvXrZW";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "7AcAuyFrg2CI5SMdHcOTMuMqd0rjz7UpShcxI2RP5GLeJiKeMJ";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string message = "xy3KRkGtUqlbHoLuMeqQhhk3M4ohlD3W1vhGTlznRaCYCNJOrx";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "kl8XExTgHdyoUbYhZrdDuux8Z9buyQ8J6iuTGymaEnPLPAWBek";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string message = "fMSDFe8uBhv33noat8 hiR8kn9xuMcgppyquRmcQJOJAzxZgsY";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "sZFQSr3hOui88abng3 uvE3xa4khZptccldhEzpDWBWNmkMtfL";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string message = "DQp 0R8lBHChvrUbZlB21IE J3wiZd7brmag3XF2cHaNwunMTm";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "QDc 5E3yOUPuieHoMyO76VR W8jvMq2oeznt8KS7pUnAjhaZGz";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string message = "EKvGJ4 4cWVYxA9Ngzims rGMeyxqHasPLyXFvPfHk13k0GFnn";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "RXiTW9 9pJILkN4Atmvzf eTZrlkdUnfCYlKSiCsUx68x5TSaa";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string message = "iljOZaMiNB4gwym8P3D4uaIbdjAbPiNwJwAgMMDZL549ue3 X8";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "vywBMnZvAO9tjlz3C8Q9hnVoqwNoCvAjWjNtZZQMY094hr8 K3";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string message = "1FXAgyhePuCbgJNeqYrrv0mpwWHqTenLj9JDwqi Yka5umZY9E";
    SuperRot* pObj = new SuperRot();
    clock_t start = clock();
    string result = pObj->decoder(message);
    clock_t end = clock();
    delete pObj;
    string expected = "6SKNtlurChPotWArdLeei5zcjJUdGraYw4WQjdv Lxn0hzML4R";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=273136&rd=4575&pm=1625
********************************************************************************
#ifdef WIN32 
#pragma warning(disable:4786) 
#endif 
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <cctype> 
#include <sstream> 
#include <stdlib.h> 
using namespace std; 
 
/* 
"Uryyb 28" 
Returns: "Hello 73" 
*/ 
 
class SuperRot { 
public: 
    string decoder(string message) { 
  int i; 
  string final=""; 
 
  for (i=0;i<message.size();i++) { 
      if (message[i]>='A' && message[i]<='M') 
    final+=message[i]+13; 
      else if (message[i]>='a' && message[i]<='m') 
    final+=message[i]+13; 
          else if (message[i]>='N' && message[i]<='Z') 
    final+=message[i]-13; 
      else if (message[i]>='n' && message[i]<='z') 
    final+=message[i]-13; 
      else if (message[i]>='0' && message[i]<='4') 
    final+=message[i]+5; 
      else if (message[i]>='5' && message[i]<='9') 
    final+=message[i]-5; 
      else if (message[i]==' ') 
    final+=' '; 
  } 
 
  return final; 
     
    } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/
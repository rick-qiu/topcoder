/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8383
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

class HillWalker {
public:
    int highestPoint(vector<string> landscape, int threshold, int timeToDark);
};

int HillWalker::highestPoint(vector<string> landscape, int threshold, int timeToDark) {
    int ret;
    return ret;
}


int test0() {
    vector<string> landscape = {"AD", "JG"};
    int threshold = 3;
    int timeToDark = 10000;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> landscape = {"AD", "JG"};
    int threshold = 3;
    int timeToDark = 29;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> landscape = {"AABCDE", "GJIHGF", "MKLMNO", "STSRQP", "YUVWXY", "edcbaZ"};
    int threshold = 6;
    int timeToDark = 36;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> landscape = {"BCDE", "AJKF", "AIHG", "AAAA", "AOMK", "AQSI", "ACEG"};
    int threshold = 5;
    int timeToDark = 14;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> landscape = {"BCDE", "AJKF", "AIHG", "AAAA", "AOMK", "AQSI", "ACEG"};
    int threshold = 5;
    int timeToDark = 57;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> landscape = {"ABCDEFK"};
    int threshold = 3;
    int timeToDark = 1000;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> landscape = {"gb", "Yd", "ZY", "bd", "fd", "cc", "ZV", "ZX", "WZ", "TR", "NO", "QS", "WY", "dd", "ff", "hl", "km", "gg", "cf", "df", "WX", "VW", "VZ", "UW", "PY"};
    int threshold = 6;
    int timeToDark = 72;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> landscape = {"kdZYYZYVUVUWdZXUVdgdbXQ", "geddceYRSUVcbbXSTbfdcYS", "gfedcZXUUWeeecYUVZbedWT", "hebbZZYYXYbggcbZXbcZZWR", "fYVYYWYcbWWZcefbceZXYWU", "ZYWTVXbYXXWVYdbYZYbYTSV", "cdZUUVRSXZZZbXSSVYXUSRV", "cbZXUROOTbcbYXUQQTVUTVQ", "fbbZVSPNQXZYcbWRSUVTVZe", "cZYYVQPOQTXZcdcYXXXXYen", "SVXTPRPOOTVYdfefedbXchj", "URSRNMURPRXbWbeikcccZgb"};
    int threshold = 8;
    int timeToDark = 136;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> landscape = {"WXYbTOVdW", "XYZYUTUVY", "UUWXVTTWY", "RRSVWVVVZ", "VTSUVVXZb", "TSRSWYddW", "POSWYdebd", "PUWZdbZXX", "SXddYVSTV", "YedYUUUTR", "fecYWXXVU", "dfdbbZYYe", "cYbcYYbZY", "XXYUTWWVU", "YWSNPSRPN", "USPOKOOLK"};
    int threshold = 4;
    int timeToDark = 283;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> landscape = {"fg"};
    int threshold = 10;
    int timeToDark = 272;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> landscape = {"S", "l", "b", "c", "Q", "O"};
    int threshold = 8;
    int timeToDark = 281;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> landscape = {"Q", "f", "S", "S", "f", "m", "n", "S", "H"};
    int threshold = 4;
    int timeToDark = 349;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> landscape = {"ORURXckjn", "RPTbXcikk", "RWZVSYihk", "bcbTRYdhl", "VZXTUXZXZ", "YVTXVZVXW", "TUbffZUQN", "MYgdhZMIJ"};
    int threshold = 8;
    int timeToDark = 161;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> landscape = {"TRRVUXefk", "bSNMOWcff", "bRPNNQZip", "XSRUTVcfj", "WbZQPXZbV", "XdYSRWVOP", "feedVVcZR", "XhfdZZefg"};
    int threshold = 4;
    int timeToDark = 50;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> landscape = {"WKNW"};
    int threshold = 5;
    int timeToDark = 272;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> landscape = {"Sc", "eb", "Ub"};
    int threshold = 10;
    int timeToDark = 112;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> landscape = {"PWRS", "cYUW", "ifWb"};
    int threshold = 7;
    int timeToDark = 287;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> landscape = {"qjbV", "lgfY", "ehcX", "YYcT"};
    int threshold = 4;
    int timeToDark = 327;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> landscape = {"QUdbgjhiURMTUdLFKKQcqlNeo", "WngjQHgPijnXflPIZfptVWsYK", "pjsbPRHSqfLSRTecXXVYXWijh", "oopmVZMThTRRTemggTWKWMdWR", "NMkogcMZcigkNmrhgcdQGYORb", "ULgSbPdifUOTOSZTTYQOcYVbl", "ioOhodUkfcNYMRehdZYTZhPNH", "SQjpfmckiheUjhniXKfUcXXfp", "KIclrnqeekcregLLKYVNbdPYr", "cTLSrZeZXjkeniVJcpncknbhk", "ibXWOnWdPdicjpcqhZYTrcZng", "UNSeZbpMMjrYRKeQkZNdsqoZP", "lUnSYQbWPSLcckRihTgTotSQp", "SWZiVdQTMTdbTVpUefRgSfOWq", "XSogPQdZYbQSkqmpZZjKMbPjs", "ZURZXRNRMFYlorhZnkVMYiYXl", "WYWeRRMJdSdrieWONZSZroUYZ", "oPTXgkheVpofRjXPhglmdlgdN", "MeUcOhrcRlfcXVLWjighUUnmO", "eUebkUNjjrPPMUQZYKHgoptXd", "nOknpmhZdfdNWMUnggQViggYk", "hQQlpjmhXbTIXUmoXTeZZYgVg", "kbhmheZOoQDQSUcQXXXgfUgfj", "mPiVKNHLgoTSYjOTWVnQXoQZn", "ZVHVcRYUnbiYjqmKJkbQrOOOF"};
    int threshold = 4;
    int timeToDark = 34;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> landscape = {"hfoOPIIkorVDeOhRZfoUfkjVk", "XqZmeMNTgqXLKLVMinXKXnlgu", "hXpZceVNWjnhXSbegcKfRVidj", "kcnTXkKXpcRdbZfVKJbPUqZTp", "gjVTmdeRLZOZWedhoRcYQekQf", "SiTXVZcXfjUOTblRYijkkcXUi", "KbflmldpgYOQUpYNVTcUJJRco", "dSUWMVnjgSUheiTLHbYQjRVZR", "VdggQjXgcWLhtjgnYQSdUdPZL", "ijVRmPgZUNSOUnjmPiSVghMSc", "ghrjTmNbUKUMfePRQjRPcTiVR", "ZiqnUMNYeghlXbgTQQQMjrpjn", "pbmRQiXiqXnSLdNgPZcpZernS", "QVKJkgTZVWiPbfgijefkhfmlX", "PHJOLcbbdbZLihOmodjnVRWkW", "WYbLRWKWfdkhYdbilopmmXbVT", "rUJMOOLMLdXkmTfWmoSSISQKZ", "NfjLJhTKbVkhUThoSYWMHVQmZ", "MMbeVcIVomfLZeiPLZeUYLdbQ", "SolfcSTTekmVhpgnZRThcVMIL", "fXhioOYWcbdllhRiWWnWbkYfS", "hinUicfSWOWUdQXQLdTRSfXin", "qhjUfRkkWjSYjdfSKYNKWPVWd", "OdWKHeXjokPNiqZORWQigPZcT", "lWLOMJSrZXnXTekqmjWYecLfd"};
    int threshold = 8;
    int timeToDark = 42;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
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
    vector<string> landscape = {"qQMZbNjWliROSYoMPifKIFWii", "KPSUhSimegbeYZTTKimcXiSHN", "jRgRPOQOQYWLknMJQXYejQbcJ", "QOYThNQmrRgchYJHekfljXhnp", "NKhiQUksdkiYMZUglXdYYhnhl", "SkYmbmuZrqXmibQcVbioqYMjk", "hhbjlemYelTdkmPdPdTNidSPY", "SPbNfgVLoUQfnZSOOSipgTSml", "eefkQYmgNjQhmNQYXWYUKdQdb", "OemRNUhYPhoTMIVnomfRbWMPj", "cpoklhQdTWnMbqTXcccOMRNYX", "oppfQhObQfiiZScYMegfLEVOI", "fRndZWeNmcRWOgTNffnPVPHTb", "XUcgeljiWdmWZfNnpqclNJkfQ", "IPotWVMOfoUdpPYipucVMblmg", "VjfbddUhmfUoYNYmYmoojtjjp", "NhccSgObOgjWZbSbfjsnsrdVW", "mLVOSTSSTSRZYYZfpswSdlNRH", "hMLdciblXVRUXXjfmgcmbKOTE", "UYVfnPPPehiWWVgieiWMJfbhK", "jhSbfeZZbfflPnTmTKKimTWYJ", "WgYhOKcggYPigeqkbhSZbZLZN", "khRdVSTijjcQgSlfVinneZPTX", "OhsWNHOZQPbmRXcnYZglQiopl", "KhgggkRcSKbWeckjbksRTryZn"};
    int threshold = 6;
    int timeToDark = 42;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> landscape = {"WXObkWReJhgeKJoRXKKNJbWho", "MYoQPdeePVUZTgkhLGWekhTfg", "QKdPfmjefXRISPjRObglbTnPl", "lgKSVnNXghkNUTblpTkcikfXf", "hgjYPfVMfrVNKXrWdMXomqnVN", "pccngULXbmkTYqYbcNQgmVUVc", "fjibjlphcceXfbmfULdomSjcT", "cWLZTjlWjemqqfWgNQfOINVbQ", "NYeYOeKUORemWVSSKfieMLceR", "MfkZSKTKGFKjjXlnYlpfNcoUH", "LnWTjZfbSLVnXcpkbSYZTcdYY", "bUZYWYgWJdfmilqNNlfONjnqq", "boSOXiNVmWNPcRLRQndMNcZRb", "sjUcdXdlSSOinbUUMhpiVmYjh", "cTgTNZWXkcNgqXILYUgYVgpmQ", "dibVnSTfcTKegOIMienblTibT", "rYSmllceNHPHfRkmScNVGYgfO", "SWPXYljkYjNJJckcSdeIHKYNW", "WYOQmUlqUOZIZpUcfnYWRLgnO", "LHGcOcVckRXgObYlTKeVTopLl", "IYQeQWNPHbTSdNbdlpUfpZNcW", "ibbeiUMGXSiiieYQNRVQKMQQO", "fimotTgVOXTMblckLUOWfYXdd", "mTZSdoRhPXkhYhXfPLLcmPbRF", "ELLlWGITWeNcWJXfininNJcOS"};
    int threshold = 10;
    int timeToDark = 40;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> landscape = {"ZNVmVVcnVcYpolRKKeZTNQZiR", "jRLbYNOhcKkUlRcMljSGVdiow", "KTPjnjWLcqNOWUcUgkPfUdfhp", "QGRVnVUYUJbQJOONQPRYdmbbd", "lOVOVioeMSlgbNUZbllYMcOUW", "edlUghcQLMfnVPfXPUYRNVdWf", "LdilomVHSTQNGdZJPikeRPXhS", "YkkWOOJOUQYZeLWchPioXZkYQ", "TSYZgdWPJWngTQHkkOWoUUjUS", "khZpkNfmZlpZkXYPTbPjnnjUm", "WmVgldSdYoeNiPYiRfUKgXSeY", "XTpmdZQScSdiWOdjddOLSfNZe", "hmdjSSTgdZUnrVRmSYUZhikbo", "ncfcSgWiSeQciirqnXXgTYgXo", "glTSPhkTcjRfmQgWcZNUcjqUI", "fXQbXOLUdWeWTNcjfQRfqjoff", "mfXkYbJZlegmWhScQUbpTcpeo", "SQKhSecROlbLlPOjoieehXMYp", "PKPUqSPUiQOZeWbYjUMjQVfbp", "dKZsifibkXZklrqTSeiNOMZpo", "lkgiceQPbXjfbRhYYYeecNOWU", "VlbcWMDciWmjmpUJSQJPcgUOf", "ZRmRXjONfkRepdNMPTIVnhdVL", "OhnZhibSXIWOhfegQRlSfYdQN", "ZXIiWghkVmJeRjvQlbVcMPjjZ"};
    int threshold = 9;
    int timeToDark = 36;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> landscape = {"fWOOQWbZYTbcRMPcbYWSLIMTQ", "eeXWUWcXQYYVWTSVeeZZUPSPU", "XbdSSWURTRTUTRWWVZZeVUSVU", "YWRQRQWUORWZSZcWUUZcbWWVN", "cbTQSbZbYYedcbceWTYcbUTSO", "UVUVbXZZfhigbbfeYYeihXQRR", "PQRVebZbfghiebdYVdkheVVYY", "UPQVcgeZghiecXWZeeeZTWWcj", "YXRXejhcZeffVUVXdgdUWVfhk", "fVTXdgfWXXXWXZYVcbYXTchmo", "VVZehcXXPTcbUYZbUXZbbijko", "bZfheYWZWVbZXVcUSZZZffgec", "WfgcXUZZYVYXWTWVWbdbUTTVV", "WdbUPUZZSSSWYZUWcdbcVTSPU", "TYTWUWWRSQWcXUXdhehgfXRZW", "VRWXdXQRNRUZcWWXckngXXfde", "OXbecbWOMMSbbVSTeifhdYbce", "YVcieVZVSTVXURUVYecYbedXW", "YXcbYbZfcZYbdcYccbXYXZYZX", "UYZWUZdegXWchgcbbddbgeYZg", "eccYdYZigZUZddccgYcidbbWZ", "licZdZYWcdYZYbXcdcdZcZUWW", "kkZXWbVSWdgdbTVebZWbZeYRU", "ZdXXeecYYdfdTTWWSPRbjibUO", "RTZYhjYcedYWRPRLGHTYgndOS"};
    int threshold = 5;
    int timeToDark = 30;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> landscape = {"VUWVWOSSPPOXRQPTOLRUWTYfe", "VWSXXWSTSUZVUQORTSYWTTVdX", "dccdWSUXWYbZZRNQQccbVQUUT", "gfccVRUUXdgbUTRMOScfXRXVN", "bcjgYQQVddefcZZUQWZZWcUSW", "UXfhYSRSdfggdifYbZcYYXXVb", "cchdXTRTcigVZhleVbXYXTSbb", "ZhebZUQTfeXRUggcbbXTTVZbW", "fcfcYTQXdfdWYgfYZbTRYZZXU", "keWXRQXVbjedgfcbXZXXWdZVb", "ggZQNTVYceighXRWgbbhdXZWZ", "WcYVUYZcijijhWTWYedbZVWdW", "OTcfhibZcjlhfebXZdYSQRWWU", "LPVemibTZjiYVYbfcXYSLMQVW", "LPUZgidcZbYQPUYZceYSNNQWe", "ZWTYdggdheTOOTWZebUTUXWYU", "XYbWYZdghfZVVTWfbVZXYcbUY", "WVVVVbgcZfdbbdebYcbXYgYTY", "XbWXbdidYcbefZVWbdbWWZYYb", "eXXSUbgfXWVcYYXSSXWXeXTYh", "XZbYUXdZWRUXbUSVWXWbZTPPW", "WccXZZbfVVYeUTSSZcYYWWRQL", "fZYYWVYdhcbZWRWURYbUVTQTS", "XVPVeccjjjfXQUURRSYcTVZdg", "YPMRZdmjndbYZTSVXUWZVZcim"};
    int threshold = 6;
    int timeToDark = 49;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> landscape = {"peZVRUbYdiZOKRSSTcbghkpdS", "ddWSUdcbiZUWSSXVROSbeddXP", "kZSSXbfgeecUQTRTRPRVQVbVO", "fgZYWXbeebUTSRVXTVWROUTVi", "gfhXTWXXbXWXYYcWWXYXSQUfo", "dgYWUOQTWbXcdXNRVVbVQSXgg", "bZYVQOMQbfccTQQPNTXbYZcce", "XccUWURUbdfdYTQQQVeYcbZZV", "cbWYYXXcghbWYbeWXceYYVXZU", "ZZXWedXdeZYZXbYebdddTSZbe", "ZbXYYZbZbccfbcYUXYXbXTXch", "iYTVYYWYYXYXbZbXPSXYbebVS", "gdXUWYXZZSSUUSXbZSTbfbTUP", "bdddeeecYZSRRWWcYWWYYXTLI", "RYYcZfklfUUSUWbdgZUXcXRNO", "SWZVXdifcWVYdcYgibRVdfTOS", "SbfgbcfYUUWhieZYYUXZZXQOM", "XgkcefgcUZdehbWWWXZceZRMS", "fhddYefddcecUVfdeeegXXWWU", "dYVVTTZdYTZcWVYeecgZXYcXc", "gZXUOPbheYcbRPUWVWYYXZbdb", "jgZXWXbggbddVRQUUWXdeWRSV", "cdihcZZXWdkdWVYZYSRWXVQQR", "XdffhbTSUYdigZTbcXRUdgeWO", "LYheWXRSSTehfRNYffcbiihYW"};
    int threshold = 4;
    int timeToDark = 42;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> landscape = {"KUZfgjdXUVZgeZRWhmcSdbZcf", "WVfklhdYbXWVXXZYbbbccZYfc", "VeihhhgfXRQSRXcYYcYccYXXX", "cecWTWccXSQXcZYdYUceTSZXZ", "YVQRQTcdVXbdeVdjebZVUWXgZ", "fZRSRSZYUTdddYdhhegeUWeej", "fZUQRTYZWXdccebedghdYYZZd", "QTTWWXYYekmhZZbdZdcbWWdjc", "PRXbYcfejnjebYbffZYXZdeci", "PRccZbbdhihZYYVVbXSUYXSXh", "PYbZWUYcffWUYYVVTRSVYTRSU", "SUUROWbccWVXZWXTUUZdUQSXT", "STSTVVYccWSRUUORQWcYUVXWf", "POXcYVdZUbUUVRPOUUZWXbcgn", "PRYYVWZYZYYVTTTXYYTXdiied", "YZbddbfcYeXRRVgiZSXciifch", "ZYdeedcdcbWWZdgcYbcZUedgk", "deZXVbcZfbXccfgXWfhYSXfhk", "lcZYYZbZZYVWedXWXcfVTWeil", "dhkZYffeYROVVZYUPSYXWgkhb", "gkfdfgkcQOTVYUVOJOZdhniWZ", "fdfbbhfcUXdhbUSPNRYcbedbX", "VWebUWVTXZhgbZVUUXWRTYdWc", "WXdcUNPQUgfbYUYZdeWUYcZXd", "VUgeQRQRWYdVUVYZdUcYXbdYc"};
    int threshold = 4;
    int timeToDark = 30;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> landscape = {"RTbWXQTgkffcXYfYOMQUghWWb", "SVbeVSYedbfecfZXSSPSbddYT", "SdicVWciebZdfedVVRPQTYYZb", "eifbZhicXbicccXZUTPTUWXcb", "dYYcgceiddegZYdWPQZVURbZd", "YWbbbYbZbZebdcXUTYbdWSTei", "SXYZTSUVXccXWTZcWbjeURWcd", "VVQSUTVTbgdZVUUXegfeWXYWW", "TRNNXYTUZgZTYWYecZfeZUTYZ", "SQPUYXTWebXXTWfhdXUbeVTTd", "SPUegWSVSYXSTWceWTUYZXTWZ", "XVYdWXWUTSUTYdZWbbVZbbfdc", "XTccVTWSPWZXYTVcZbYVbihgc", "ZcfcYRQRTXeeUPWZZWWZcbcde", "egheRMMOXbeeVUVWVVUVbZWZj", "kldVTQNWXVYcedbbWRNVcTOZk", "lihbYVVXZTSemibUQTUWXRRbY", "lidbecTWZXWcjibVQOSZVRTbj", "XdZXVVVUWcheidXSOPWYTUWel", "YXQTYSWYbcdegZPOPXcXYVXfk", "iYQRTUWcfZSZZWUNUdfcTPYeY", "gbSTbXcjdTSXYbXWUZebTQRUV", "khYdfhfeeUUWdhdWZbdYSRPVf", "mefhhcZebYUZgfdYUYgYSTYeX", "keXgfZYddRSXWdhVNRbYRXddd"};
    int threshold = 10;
    int timeToDark = 32;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> landscape = {"VZddgfbcbYZecWTSTVVVVZfgf", "cddeddffdbZYWWUUVXZYXXZcb", "fdbXWdgffZUTTVXUUZebVUVXX", "fcVRSXcdZUSSUWVTUZccXTTUS", "fbVSTVXYWSQQSUSQRXbZXVTQM", "ebWUUWYYWROQSRPPRUVWWUTPL", "eZVVYYccXTSSSSRSTTTTTUTRP", "ZYWWYcdcYYYZXUUVUTSSVWVUV", "VTUWXbcddeebYWVVTSUVWWXYb", "PQRTWbdfhhfcZWVTSTVWXWXbZ", "OPRTWZdhigcZYXUUTUWZYWXXV", "ORUVYZbehfYWVVVVVVYZZYXVT", "STWYYYbgifYTUUVXWWWXZdZVT", "TWXXYcgjjfYWWYZZXTSTXZYWV", "VWWVYdilidZcdeebVROPRVVUY", "YZYXXbghgbbeghfbUOMNQSSVY", "dcbZZbddbZZcgiheWPMPTUUWX", "XYbbZXWXZbYbeikhbUSUWYXYZ", "RTXYWTRUZcdbbfiiebYbbYYYY", "SVWURPPUcfecZYZccbbZYXWWY", "XYYVTRTWZefebXUUUVTUVTUYd", "dcZZXXXWYdffdcVRQQQSSUVZf", "bZbddbZYYceccZWTRSUVWXZcf", "bYZdfebXZdcXVWVTVZZZbZZde", "cbYbggbXbcbUPRVUUZebZbXWd"};
    int threshold = 4;
    int timeToDark = 40;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> landscape = {"VceZRTdhfdYRMMQSTTSUXXWTM", "bdbXVXdfebXTRRTUUUWXXWURQ", "dcbXWXZdbYXYYYWUVbdbYWVWZ", "ZZZYYXYYWWbdcZWUWZcdbZbcf", "WWYcZXWVUWZcbWRQSWZccdffc", "WXbbbYVUVYbYWTPNRUXZYbege", "XYYXWXXXZbZZYVRRSTVVWZefi", "bZZXWVWXYZcecYWUSUUUXdggg", "ddbZXWXVWXcddbWUWVUXcegeZ", "bcbYXYZXVVWXbZVTTWYbdfebW", "ZbbYYZYWVWUUWWUTVYZbdcZWV", "XYZYYbbWWVUVWWVWZZbbZYWVS", "bbYWZbZXWVWZbbZZbdcbXVWVT", "bZXXXYXWWZZZcccbbccYWXYXX", "edZWUWXXXXYYXbZbcZWWYZYYZ", "dcWSVWWVVUUUVXZccZXWWXWXd", "ZXUUVVUUSRRRVYbccYWVUUXbY", "XWVWWSQQSRRTWYYZZWVWYYZWW", "UUWXWSPRTUUTVWXVTVYddcXWV", "TUUUUUVVVUTUVXVTSUbghcWXc", "RQRTVXZZVVUUVUVTRUZffZWYe", "RRQSWbZYXXYXTUUTSUYccbYYW", "XTQSXZZYbdbWUTVTTUWYZYWUR", "YSPUZbbcddbWTTSRRTWXVVVTQ", "cUQUccbbdedXSOPPPTVWWRTVS"};
    int threshold = 7;
    int timeToDark = 46;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> landscape = {"bcZbdgeYVPLMQWdfefZSSVWYg", "YXYbeecYVQNOUceccZVTUUVZc", "VVWYcecXTQPSZccZWUTRSTVYd", "WVXZZccYTRTYcccYSRQOQUXYZ", "VWYbZZbZXWYbdeZVTRQQSVYZY", "ZbccZXYZXXcecZZYXWVUVYYWY", "effbXXXWWXbccccccdZYYXWUP", "dddZXVXXUWbdefgffecbYXVSQ", "WVWYWWWTUWYehhgffedcZWTQR", "RSVXZXTRRTZegedddddcYWRPO", "RSWbZWTRQTXddbYYcdcYWUSNJ", "QTYbZWURRRUYbYWXXbbZWTPLJ", "TWYZZZXSOPSXXXVUVYcZWTRON", "VXXXYXVTRQTWUSUVUWXWUTTVV", "VTUVWVVVWWVURRTUVVVTRSTUW", "SSSUVWWWWXXVSQSVWYWTRSRSR", "UWYVUVVWVXYVRRSTXZYVTTSPO", "bbYYVUVVWXWWVSRUWbZXWWUQP", "bbbYWUUWWVXXWUUVYbcbbZWSQ", "cbZZXTSVXXXWVXWVYbbeedYUR", "fcYXWSTXbYWXXXWWXYdefcWVW", "fZWWVTTYcbYYZZYXXcfedZXXX", "cYVVVTUXZZbcddZZcfecXVYZW", "bWUVUUVWbccddbcffecWRTWYX", "cWSRTSTVYedcdeceedZTRRSUb"};
    int threshold = 3;
    int timeToDark = 48;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
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
    vector<string> landscape = {"YXXVWZZZXZdbXZdfcZdeZbcce", "XYWWYccXXZZWXZcbZbdbYXbcd", "UUVYZcbZZbWUWWWXYYXVTVYZb", "WWWXYXYbcYWWWWVVWWSQRSWYV", "ZYYWUVXXXXYbZYWVUPOOPRVWV", "XWVUUUVVUWbdcXWWSOMMOSXZZ", "RQTTSUWVVWXZXWVVUQMNQVbee", "RQRSTVWXYXVVVVVVUTSQSWdhg", "QSRRTUVYbZVTTUVVTSRRUZefi", "NOSUUTTVYZXUSVXTQQQUYcedd", "LOTXXTRVYYVTUXXTRQSWZecZT", "PRVXWUVXZYTPTWVTSTUXbccVS", "VVWWUVXZbXSRQSTSSUXYZZXUU", "ZYWXYWWXXVUSRQQQUWXXXVWUP", "bYZbbXWWVWXVTTTTUVWVXYVSR", "bZbecZXUUYZYYbZXVTTWYYWVT", "bZcecYVUWZbZbddXTSUWWWWWc", "dccbXWWYbZYYbbYVTTTUUUWcb", "hgdYVWYcbXXYYYWTTTTSUWYYZ", "hfbXXYbcbZYWXWVSSUUVVVWWW", "fcbYXbdbbcZXWWTSSTUUTSSUS", "gfdbbcbbdebXWUSSTUSSTTSSP", "fffdbcbbccbYVTTUWVSTWVUTS", "YceebZYWYbcbZWUVVTSUXYWWZ", "SYdcYbXTTbggdWTVVRQSVXZZb"};
    int threshold = 3;
    int timeToDark = 35;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> landscape = {"hcVXYWTQPQTXcgfbXVVUUWWVR", "cYXWXYVVTSTWccZWTUVVTVXVT", "ebXXZZYYVUUWWVSPRTUTVXXVR", "dZZYYYXWVUVWUPNPRTUTTVVTQ", "VWYcZXWVTTUUSQPPRUUTSSTQO", "SVYcdcYYVUTUVTSSRSUVVSQRN", "PSYfihebWUWXYXWWUUXYWVURP", "PTbfiieYUUYbZZXVWYZYWUTSU", "TYdffebVTWZbbZYZYXWUTSQSW", "TZeedXUUWYbXXbcbZVSQOORWZ", "VYddXTRTWYXVWYdcYUTRPPSZe", "WYZZURRTVWWUWZcdZWVUUSVcf", "VWWVTSTUWXWWXZecYYYWUUWbc", "TTUSTTUWXWVSUZbZYYWUUTXbd", "STUWXWVWWVRRUZZWVVXWUXZce", "TWXbcZVVVWVUWXZYWYbbYYZce", "RSXbcYVUWYYYYXYbdedbbYYbb", "OQUXXVUXYZbbZYZdfffdbZZbb", "PRTUVVVXccccYWYcdedbbbbZY", "TVWVWVWbcbbZXUVYZZZZXZbYb", "cZYYXVXbZWWVUVWXWWXZbdcYX", "edcZXWWXXWXXXWYYXXZdeecXR", "cedbXXXXYbbbZZYYbbbbefdYT", "bcddbXVVYcZXZcZbddbbeeecZ", "bZdgdYVTTYXSWdecfhfZbfedc"};
    int threshold = 10;
    int timeToDark = 42;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> landscape = {"YVmddcZNlqQZiXOfLJKmXhfOb", "XgoQLcoqSghUdUhdcThgVgTTi", "hstRSVRjQeXkqUntpmeedmdWo", "eijniXPlWXpVeVksjooeoZchp", "jdqoUfrflgmlYiPKgfhgnUjsT", "cVZYhUObmRloSiVSYlnkUSNQp", "ibNWghMcfRQPNbVUShlXLZNdl", "qggpZXVUWVhbWJJZQVfPIbdks", "cokYNNcoSnfhmXPOdQPTULicM", "STcXikcWVYgsjXSdTWRTijTiV", "GXhskZSOZOdSWcbNMhlmQKkqW", "PQWendbSbUeXYQgjekRgTQbMb", "LKRcMfkicUZUinXlbhWWngQLJ", "JgWechUclifgSJePgoenoiZLL", "mpQkhULLZKYTYTKPTmSYmmSGK", "qjRgLgidZKFiXXbjnYWgNcWQH", "kinfjRcfgScNWOSqWRZRLQRLE", "hkQQMftbQKgSXYgkigeTiVIWc", "jdRQQlohNIJPYdhcnrjQHPUWr", "eSdRoqfXbVHTgcgOTfTWOXVRT", "pmdYXgcObQXNedliSTWhQZXkn", "mrUkgPJSPGRbcjhQXUfVZYViO", "TVWVQWUkPKKSfTWUWRmZRjbjL", "jSLQhhbgbTLfmsTQkjfflWhiL", "knspVTntpopXocjRPqYjPIgXN"};
    int threshold = 4;
    int timeToDark = 54;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> landscape = {"gPgNgmsgltgjfnkpheTZiQLcJ", "TfSjkmhZUbUKdiTgUYjVjQXij", "ZKWkelbSRjOIdoefRhRmYZPnn", "irUSMVoWlhRIjpgWSNSfVXbSn", "OVgejQPobXVTQMUOJWlZnUNWO", "UYbhQIfViThdPPhiSZTgfZdNn", "OcOfcXVfSRXUZiWgimZSdTJVb", "nbXYWkTQhpVKQhfcNWcgQGRbg", "VVdnTbXQRULIMXXUMXbgfYMQO", "WmtYblQhldXlUeQUZfbjiMgLJ", "vTYNjoRORdcpXUdbLRlnlTYJR", "mjUUhZYYXMXkipSgUUXUhObnV", "mTZbZTKXlbgkOVcLjmiZchVSn", "GZWMQfYmokSROLSNbYneecVbP", "XObLVMchiTLdPQPLWnochkXVp", "NWkUIRKLMLRRfefhpUQMQgfWp", "drkKHPQLWOYefRVeihMUiTdlp", "PPVMXOjOdiYeQdifbkcUZYfsQ", "PPLkToehSVSgnmYnPbRmRYbIi", "HYXYQQeQPfrkkeSZeKcZVUUXR", "RXijdPSfUqoXOjSQdNeWWeOdN", "QmTRIZbPjhhQkMZZYRfTTSTkM", "YPhYbYbpVhNblUXTMTiQfcdjR", "UlVZMfeLWKSUeiSlmWgSbYkTN", "RMRlRROMGRifLOWqZWMZqolMI"};
    int threshold = 21;
    int timeToDark = 56;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> landscape = {"pWcZkWNhpPhVddSWiNMlgKfcn", "WYcZKgeYXMWnhRWeWUgZZjUhK", "ifYgpWVcdTdPkcXTTMPVTTYZU", "fULnXWQNXlbOOhkpeOIiMdZLF", "VfQgcWdZpiMYcRcqonXeWQTRK", "UNMSlObjjWjdiojYlichNUceK", "XfUQRZPlprRXeUhWQcRfcUSkR", "mRgOPMPPhoiRVccgphkRSgfNe", "QllMigkfbVYTXglhhfVNTLPTj", "qdKQbkUXbPUUlRJJURXcTdUVq", "TQcPRlrobkZhhNXUZdogpdiXl", "bfPMYXmplROlknPhXjofYprbM", "cMVfplnjnYSiWIiPUUeOotiWV", "PfovsljZblUThegjNYRZoogiq", "ifgWnnkXeOPpXVRcUkUfeOUps", "MZdRUgjZYQhMhPLeeOgWNORjT", "kZkXiRZZZlKMRgkgVifJLcVUg", "NifTNeZWjVSQfVjQoVPcNiUhT", "QjTVYlZfXbebUiUTcolOSMoVG", "gYfPgSLJfcLONZQcgkfWOeelO", "PRNlkYVgWHFRWRgbfRHMlSikr", "VVdfUbNRgocLSfnbhmUbMWYbX", "bbdiOffPPhkZTdVeWjXhrZGgj", "PXUQOjVOckkVVdhLSMmWLgUIe", "OLYJLOVSTXhMZrbPIjpPROfcK"};
    int threshold = 11;
    int timeToDark = 84;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> landscape = {"jeckdROZjokmdZJUhZUjichNM", "nnpsOhthcRdUUbZQhnSTIglVj", "VYfOmdjefbUSYmeUbJShVQnks", "TWlfVcWVZgcjYjWPGXQTXNhru", "oSiScVOiUSQXigkMKdYSHPeld", "gkigkegcWVPPZsoMhpqdQgjiL", "qZZfVicnQYLJUQepRjqjUgRdc", "iOekghZUfUSYJkSEZbhXiPJYs", "nVljZUQQRhTbVTKNLJbdShXPf", "lboMenfleMZcYkfWVqRUZQeTT", "pdfdQOgelohQZfQSnnhZlcPUp", "RipjlWSVpjQfORMceedlMfVmv", "nZeZdcSUleVfhfVUgVjcRScVM", "gWXqefONOUlefcneRiWKSobKD", "qrWQmRHbmtmmicVeSSGJMKcgX", "gbTfYOdeSVdUeckjndUIHXlfS", "LkidUkdjjVYTmSMQXWbPdqoPH", "njqsbRUUTnldJbOeWTPMPNXTN", "YmZfhTIQeYZnYRMkYTKKhdVeM", "TjZWVRiOVbUjfUhiPSXppeQJe", "pdbfldKHUiZPfrTXcRPbXYSIk", "dYjVNUIPeYMYbNbYLSZVQVeWH", "YmeXSlMLiejYRmmfRNVZmlbbk", "QYdkpnWPRMOcejjTJisZfXWhn", "djZreKedQKhelTFZrXhhonshp"};
    int threshold = 11;
    int timeToDark = 58;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> landscape = {"sehhcNGIHjVIkejiZPjmOYgiM", "oWdpVNUOWYfpSdsbKXmXUTNJE", "OMPLUTijRJWnYilfoTZVTVJMg", "MXYcULSPgqQUhgUhPfoiieUbg", "cNTnRYNJLYYUkkmlfmoqoPfQR", "LVqjmdcMZYYdYpwempbbhUWQO", "NTUoWeYkefqPggonbmkPPNRTL", "IcfeoVVedijfNnleXUUKDHQOR", "NcblXjmbMQeekbhePXSYJKOJc", "RMgecbQhpUReSjfjpUbcQUlhh", "oQKokbYUlhhLgRoqfZnndZpgo", "ZmbprlUMiobfPohocfklkhniu", "OOqggVVhfXQKSWfmkVbUUhlnm", "lShfUgokPeLMYYZeTUdVZccbi", "PUiXmcgbKYMkVPlffrPjSifUS", "WUiVhQTdTHjOcnWlegifhphno", "STPNKPmYccfTPYhkUeblocdou", "TNTcWfoWXPZUQJWXmhcmdOJlo", "bNKZhZhUMfQeMGIgqliVOdeXL", "WiQbTbmWOfpkfRIWlPHfWfMJc", "WLRJeSMLYTiXcgXNQHLKnpMWo", "VeNPYbhYkRgXbmlhdWWjvjZqU", "ZhcNlnNdhldWnheYinbTepmis", "meicjcqSOVnnpXVTgXbfUnkRM", "YQHjVWmXlgjhcNcjKOXIQjnYh"};
    int threshold = 17;
    int timeToDark = 58;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> landscape = {"gYSPYbVbdWTcWPXbZWWOTTdWL", "feTXbcbcXWecYYbZeeZXWVRSU", "eYbWdeZYcifdcbYdkhYVXYVSR", "TVVWcYUZhjccfbVUUYVUUbXUX", "NONYYVZcYXehZVVUTSRUXbeXP", "LNTTZWUXZbgbdbWUWTTYZcXVQ", "MNUXXYXXehfgffcWZbYXYVcbc", "MRUbbWbfiffZceZXXYdZYZbei", "RUbZXbedbZdfccWUZddZVWZbg", "VVSXcdgbUYefhbVWbbdcdbYWR", "hdZXZYWZZdYbZVXYYddeYZcWZ", "ljdZTRSTXbZWXWddfikbWdbed", "olbXVRRXYZZVXeilgfbdcXYfd", "lgfZUTSZhXUYehdZhbYbYRYei", "kiggcYbecYSXhdVVUcZXTSTcl", "kfcbecbcZTOVccWTYceYYWWWZ", "hXPSUcfhgYTRUUXWZgbZfZPPT", "dYTQRXgeefeYVSTWccWVYVOOX", "SXXWSUYgijgebURZYUTTTRSSS", "RPZVOQbighjgdXZbVZbTUbYSR", "KSSUUUdikjffYYXUXecbchYVb", "QTbWUceileUSYYYURWbXVbeZZ", "RZUSVXeffbTSTZfdWUUVZXZgY", "bcUVVcXZihVQSWccWZWUWUXZg", "YddWdbehijcQOWYTXdZSSQOdc"};
    int threshold = 12;
    int timeToDark = 92;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> landscape = {"eWZSRZjkekhbRLTORcTOWZchi", "fcSUVemijljbTTPPUXURTWXbe", "fdXVceikfijdVRORYYbXWYcbX", "gfXUXZcdggghcYWUbZXdbYXUO", "fYUTUYYfeXchiYUYWXZWWZbZV", "STSOOQXdZSZfZWXWWUSbZYZck", "cVQPMNbgYVTSRXeZUTZfgXZmk", "ZbVLMTWdXPPNVdYXZdYYXWXfl", "ZYQOOVcXXURVXZbdbVTSSQVbi", "UWRUWZcZXZUWXcdXbcXUPOTYf", "ZVVRTfcYefYUZdcefZTPPSWVT", "gYRSUYdbijdZcfeYcZROORTSO", "cXSUbbWZghihggYXVYXUVWPKN", "RWYUUXTbfcfdbcZXWZZdbXPOQ", "bYZZWVXXYbbfbWcTVYbfYWTOM", "UYdbebUTXZbYZcbWRTecbSPPO", "gbbebVVYZZXYXdfdWURXbVPNO", "ZdcZXWYbZXWPXciebSVVVUTRT", "VbcdeWchbSTWSbfkhXQXWSUVT", "bbgjfcfkYSVWXVdheVVXWVWXh", "cfbfiggfeYXbTYbbZWUWXYcYb", "UYYbegegddZYbbXdcfcZZURUW", "RWccbdZTSWXXZXehffgeZTNSZ", "TWVWWSUVQQQZccbccccgVSRRS", "WbWTXUUZRJTbiZVYchbZcVPTQ"};
    int threshold = 3;
    int timeToDark = 63;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> landscape = {"HQVdUWbfYeXchfYfXYZWWfbUX", "TRTWXWdcbeihbYXcYROWYUXgl", "PQSYdXXYbgiggYXVUSQQTZZdj", "NRTWYXVdkhfgdXYdXXSRSUYYb", "JQdbTRdihiddcehbXWWWZcUXW", "UVYcYbegddXbhjdXUZVYYVZVb", "dgZXXdgZZYYbZZefZTTRVXZZW", "jcXTWdVYbTSSRbeZWVRRVXXVb", "igXUZYVUURPRXWbVPPQTSbZZc", "fecVTWbZRUWXUTWWTQNSbXZcb", "ZWYZUTTUVSXbYVbbYUUYdcXVT", "XbbXRSSTRTXUXYWfecYgjeWSc", "fdURSUSXYWbYRTZdhZbegfXXd", "PVZTYcZZXbcXUQYdXZYVWYXbc", "OQUbYYZTYZVRLQUXcbSRWebcc", "OTWUWZWTVXTPPPYbZTWWZcfch", "ZbdcbXXcXYbZZXeeZUTVXXXdl", "hjhcSSXVWcefbbgkZTQNRXWXd", "kfebSRUVRVYcVTgfcWPPTWTSR", "fbcYbZVXXRSRQVbeZcXSXSVUM", "dXbYUXYYXSNNPTcbdfcZWYUVV", "YYUWWZYeYQQTbcUVYVXWURRcj", "YVXYcUbfcWSYfbTQNVUWUVYel", "UXZcWXXbYVQTSVVRQUbejhkke", "ijVbeSVVRXSKOUTUZVfhiokki"};
    int threshold = 7;
    int timeToDark = 66;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> landscape = {"XbYYUUVdUUVPMYjjlmbcfbVcZ", "OTUVYVVTTRSUTUccdebWXUSbi", "LOTVUQUURQZYVUVZUUbYbXWYe", "LPVVTQPUUWbcbddXRRWcebXYY", "OSWZVSQPTfijhiheVPSXcbZbe", "YZWRRPMOWekifffWVUORVXbbc", "VYWTTNMUbeecWZXYWTOOWeYZT", "ccYYVPPUdbWUXVbYdZTTYWYWY", "edbcWNRUWXRTXbegjeZZZYWch", "WUWZXWQSVbYTSZghhffhcTTSW", "dVXgiVURXhfRQXcebcedXRLQP", "VZbddcVTUdcWUXcXceXWUUSNM", "XcccdgYYZdcZYdbWfgYSWYWVP", "ebZdjhhfeZbfffZXficZXTQSV", "bccYegbdeYVTbhWQXZbdZYUSW", "fYYZcZbZWbVTXZWTQRUXXVXYc", "gdbgdZTXbYVSZYYXUSVWbhcYU", "kjihhbTWVXYVWVZdVXZefZZTX", "hjmocZXSTRUYYXWXUcifYVZfZ", "nonheeYTUWTVbecSRXhZVXfgl", "ojgdcdcZdZSUZdUTUUWcWZfkp", "dgbZfdYficTQWXYTRWZUVZjli", "ZbZccYcedZYUPOPXYWTRWhklh", "bcXUVXdgbecXRNSTXTOOUbfgm", "gfSMPVefXdhYXTOTOQOKKVVbm"};
    int threshold = 22;
    int timeToDark = 55;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> landscape = {"YZVZhXXhihdWSWfYedZSUVirt", "YdbZYVZdgbSQYfcggfbVRThpo", "XXYfcUYeeVPQWgfejiZVWYeeh", "SdfbYZYeXTVTZfhkjdbbXXdfR", "WWZfbUURWVPVYcfdYVYVYkhYR", "ecYVZbUTTSXVSTXVRYWYhlnYS", "YYUYYWVSRVTUSXWUTXYbejiiY", "YUXYUQPOSVYYVWcbYUUbcZghe", "RRZcVLNUQWggebYYYZYVTcfeg", "MTddWTROPTbhZTTQXedYfefkj", "SWYbZZYUQSYVZWOSYecfhhhdh", "dgZSWZdYSRVUUYSUcgccfebZV", "kdYVYZYYURTVTSUUVZgfdcUWb", "eZTZXXVTRQTcYRSVZZdeWUYTW", "TPSUXRPOTWYdcWTUVZYXYWRQM", "POPVVUQPSVXfeVVRUWWVWWRQO", "PVVUQSYWRTdfcTNQTQTZXSUVd", "VcbVVYVWXWVVXUOQUUXRVZVWZ", "WcdZeeeZZZVUUSPXbURTVUVcc", "UdZXfhZTYYXTUSRZYVSOVYYfn", "WcdbdZPRPWXVUZbcVSTTTXiqp", "TehdSMRQRRVXcddYTQVVUcjmp", "YdeWLKPYSRVWUZZSSVWZffidb", "bbZRJJQWZTVWWXWRQZeihbYWO", "RTTSMMRQWYVVQUYWTcmkicQRT"};
    int threshold = 8;
    int timeToDark = 55;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> landscape = {"CbPfhPdOYOXrtLmifpwvsWnlY", "JJdVLZolRLMckTYgfZswjZimM", "MMJOWljofdpXXKMhVMlejPhnn", "pTYTNNQgdSlTPRZTOdZPdVUlm", "loXUPZjYSXieWOlplfjiKTOUI", "miQibUXQUVXmdUpkhUOTJOKhM", "jgYkMMgdoQchcNZWMTMSWNcjn", "iSVmTRTUkmoUHUPYUZScideqS", "lfTVfVYoRhTlQWkgdeYYWjlYV", "npTZULLNfTUiqSXPGYZmkehMV", "TSdSRQLgfWhdKXYTPKLZZoQfY", "VqQJHIipibNMceVjTSjOnRdlp", "RWjQSPKmtZhclVmTfjckbXpcb", "KbXiOILNjrghoXNLXjhhchYTX", "PSNUTWgfYcSnbYeTodYblRMZm", "UVjMHYnRZflPfoYQLYWjoYQob", "SogPXTQTThjmWObOOKeffhQTl", "gPeZOegbbYUZXcijjLhgcbNjX", "RmOZXVdhPIWddcrnRPPNKVUor", "PdsObjcPeVQRMZWeOTkdKWbor", "pZbmWeRbOJOPTYQTlflUJIlcL", "WhlPgrUIgZYgQOUMTTgiOUdbI", "PNRTTfbbZUTbjmbNQPdXkUVKH", "OPfNZpRKIWSmVdOdNKLScOSIf", "WTXOVKLlRbtkVoSEfNEeUZWhT"};
    int threshold = 5;
    int timeToDark = 6359;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
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
    vector<string> landscape = {"NXrYLiRkWbfcKXLUlpcmPMYgL", "SUlXQIIgrUOefXIUcMJXLTkLk", "PTdYgVMXdcdjiYMIMTNRinWTH", "IWPMNRRjRcbUcOZXfWfiUYjcQ", "VbXTVMZUVSeSKLgVMORGcgcdc", "TPXOUbmWbTLTIJjgNUfUROLJS", "IWLgcKcehOdlceiZflmfQJRSj", "nXfdgWMiQVmrfTPZdcRJjoWln", "cRZoNGgPcmbdcPjdLXRPZckrY", "jbifcRYTihTbShkidYhmkckRT", "pjqRZNWqYbOgdimPigSZcdOcZ", "ggTfOSRYlPOOZmYUTQjRiXYdo", "kfgQiLKRdWPLVoZKikSdVfXXo", "SgTTJIJYjZORTcjipcQbidlgf", "MgXhSbncgORZfqZTYRKVmdkeS", "RPiUOXedPKiZomfWXNTXQhbNJ", "RWlVIZWSeQIPXgNjSIQfdTPUT", "gdUkPZUkiUhWXWQNceOUJdiPH", "JSXhXZVSJXSiTZmjRhRTSYPOl", "PfUVWNXMLNhMbdhiSdNjPYKmw", "iVZmcSJPlSRWViWQUQVhQILPe", "eSNSfdSVmlldXNKjqVdlhNSbX", "MRYXWQfTidOickUgjbhhfcUkq", "gSHRQUKhSNKgrTNiVNTNdMNjq", "iQbLDLSITnoTkNKVlWfNCPKIQ"};
    int threshold = 7;
    int timeToDark = 9814;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> landscape = {"mPqokhpcoXHEYQhMDcWJROJnw", "WgjoSgnVNcRVLYYTiPFZUlVSl", "MXhhPZgiYLUlhYjcYTlPgXmcm", "egXjncpeVVidgVjZXVPIcdmfd", "WmffePWidkepYhTWecWRJTPTn", "NmtghSejltggOXYjcgjVkPebK", "TcjohnVdQUmQPdXdbZlWknVdX", "gVkfogSQNRbUXOKfqrVKJbRNd", "oNYeMeRMcWLddfTgrgVXNVPNX", "fONRMNTlSWZpdSTUdYhLdhSXp", "PfTeQSUUphZZTeZVXbWffgqUK", "lbOSYNkWgehgRJYNSUXYncgYG", "fNibPTkWdPOglSYglXMOPgRiP", "LOTjnhmjPIMgnZYMkkNfhlRVR", "KLQgpjhiejmeUZjRcWdldTfVJ", "VjfhPUddnrtmQhjXbiVUcjleJ", "bZPWfdkddrredbTSmXTLkiWYM", "oYQLgTlmdRoXOUXrSRXclMdfL", "egZjYhtkPKSfdMIbfdmWdThjW", "VPOWQOniKVOQZfPMOWLlqqrZY", "YMQdfuoYYjidoOFENNdlVhcRE", "RekkVgqfmvmshRTNQNfcLgpMC", "TKNZluknSfsSipUiYYVORekOK", "LIGhbRlSWWOknmOUiZVheSeTo", "WmUTNQPlRKlWrWNLIeXYjrLRo"};
    int threshold = 6;
    int timeToDark = 6652;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> landscape = {"LnegOIlYGZXRiQlvxVmqSQLPi", "IkeYmgnTMFfhoklprpijlNHLe", "OHZflikMfTRdiphmrnmbQlWZP", "oZMQTQORUXofNONchpoiVQmgc", "oiXeokmmXokYKUTQMSYRdOXXm", "kRXoqdbpWiiXSZeegRQbOWNkm", "JiZUdUbbeUPNJLjteVmmekWjl", "NNTNdQjkVJZTJNklffbZnrtbp", "GQOQitiljhXMHIkUeUddsmocI", "bLdmmWklsqQMIPKYmYdRjVmoe", "WNTcZObUmoPSihXlRWfPRQpZr", "bQdbPTZWNJmViNSQQQOLQTgnn", "WNYVeWcbZXdnlPLgeLbcWbgcQ", "VUNUUQWdOXSnQfZNYWSjqpXVS", "fhRLYnQSXijVTefnPLMmZXlPG", "VjRcpSZQjiMefgZgXPmXiTjYJ", "sodbWjgXSdcULZXbmbSScmjoQ", "djYPdZPGbVYLRZXfTcdTeUbIl", "cOLLhehZUdPbSWUKjZOSLnOLS", "UVWhgYTQdigbTQNkMUkPktnQK", "lmdOcklPQSfqbQYMFTiVestWI", "bjNXfOLNemcVkeNNHLleqgjpe", "QUgXjWPbeiWnsZWSKTWnmgXos", "bSlunffbjknhMbXcRJJRPSWnY", "UdepfpYJceSgiROmJTIDbhPIX"};
    int threshold = 36;
    int timeToDark = 5823;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> landscape = {"QYkUoReZmgMMgqnkrruTRWcsZ", "lcRYbYYjNUksiignvUkcLSjdp", "hXMjSVVWPRhqkUMiirdgMOfRK", "qQNjVfnlXVrljYOUfTiTPQfUh", "TgscedUUXdnhRgVMTkfjcUfWf", "WSSkXgdLgeeOWmYbohliVTmjm", "NPkcdWUXPiWNTSlobkPRMbkos", "MkdTdZKciUPZjdmXgbQJUdYQG", "QhlkTNbUXXfUgmWXgZPMZUZHR", "ZcniJGRNRhSTNegmUTfbNLGEJ", "WYVdLTLYPeWgnfgmsWVMegjOK", "rYnVJdNORYdkcQdjkkNRmgLOd", "ocojUYTIfPhhRQccVObVYjRQO", "IQenViNLPPVbJjdYkdUVOLQJW", "ERgQoeSgNhQidPcVLSUiibipV", "GZggYmjZcfTnffTfTSebRiVfS", "LXrbhsZLNPNTmQLORIIhceWSd", "gTglUWcXeMVQbJSWkNUSOlXbe", "chciYlhRLJfgdYYQZcReSRehL", "PdOeppmmiWUYopggfhndYgfNc", "egUchWUXYkmWoefQLXRSPMTfV", "UUmrMePbWNJnoTePIiZbMTojd", "QXmfdLQbkfUedZORPggNTXUXX", "OLgZiOXOUPOTQHdTLSLjgoUbZ", "blXsVGBcMidJIlXTLFkPdOobI"};
    int threshold = 32;
    int timeToDark = 6469;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> landscape = {"xesTtFSGvRmWwKpzNCcXXojyf", "yoYjtQUSyGzmchoMjeoMGJJOQ", "wPzXcHsvtXMmglUQHEAZXZkYR", "ywOLALwMEGhCGAjXShgiwngDL", "dZmlqFUJAPLUCVDPqdUtzzaCO", "eiPzUbprjNUUKBLUMJVVQRZAY", "CWVSadOIlAknSxeAxeAubdHyO", "fBcbVXhxndRQczLmiBnQuUAUj", "LiGUGxRSiCsCBBkTtcjMXzxck", "BGOnqUnUJruaMKSoNQiUPLhLm", "HbvkzonsDwtjdiJslFdzCoCSr", "kKgzPMLJPDgmNjNzngyiNkuwr", "bccOlBecJEXQPJQeDmBLXnDpp", "IrSiMNWaMVZexZxVaLkGFsmqc", "VuRvplvQkPjKbIoyPmXSSxwvf", "nPWSOFasyTocrAzmKbLirLXwg", "IuznsiwxsKpqhWhHezZrSpMlm", "PTmtqjKTWvUbQZmXRdJLxUViA", "yhmZKnzkUdiRNOqJKaHQnLBIq", "ZSlepzGuOcLMDovQgQYtLKFFm", "FncOBrhthSiltudMQBDnLDkny", "oDUnmTwUZKAZBBtfspiPzwkSc", "yCAeyKnNwTNhVRSFdyneDxxaV", "NzSqaxLygVwlxEizrsehvdjni", "QYWybckMbKQXSfCBdGBctMIwD"};
    int threshold = 37;
    int timeToDark = 600;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> landscape = {"wiygcCqFbiBTsMZpHuNfsbYGW", "jiAgFuhgykTZnqnLdiNgEuOZS", "IohWTythiNJrnCypuQVSLkbXd", "MZrxxOPCAdnaKFxCbstlUrdHU", "gSXGQINLzyZltcUPWkevVcnJI", "HyhrFuQTTTHRauDbIArGSogiP", "NXVQlBKvBzJqpWCyETbbHIBtp", "krjzxNgtGzvBZuzJXBbfaseNU", "BmSmFagVJhysUZMyMVtyjaYRA", "YkKWfddQIqEJaFZLEvKesIBHM", "rclFhESKAsvSSBoHHnYNYzjCM", "bpcolJCVzKfkGSDTmoSHNMeGY", "YvpGpFYmKKIctXZzXwRxZJBWU", "XsRZqhZttonCZOBHpwiFtSLnY", "deWwHoYBpZmNpGZyZKmEkKMZo", "tdqrQIIahCbTaEFmkIOyxZXMD", "cQlSJPQMmdemOLhlNuSbHeXAS", "VdAEWeVpMhFwRkycXKBWNOMeF", "FqypYPtnUZbdxqwpEfYRAEqnP", "dojaIJNSckQVilbIilISUquaL", "HfsCBZxhrEviANvZaCWhpxKYI", "huYXXzCdKYgMxUeIUDKMlilvs", "fLRGZyMuTqmMXMMmxBYIsgqwk", "AcmtDAYVuiFgCmjjyTKGpNHxq", "tFuzeDsYqnfEtZKUkiFaWiFfb"};
    int threshold = 7;
    int timeToDark = 7552;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> landscape = {"mlIqhIjnhmlOkctxXoOimrXXZ", "gmOmGsnWmhHmjbqvaMdBbbszx", "MJMmRqTuHzdyVALKJiGYxPszZ", "mLGNXYHWBEKISxSuPshdsCDSM", "ZpblMzILtgyOSQfdmPHQmMbGE", "gkvuIqEhQOhvBgVQRdAuCcNrt", "EvuAlHbJyKbVvfIXmaqhTWrdD", "eaEyKGYVghaGqbyTtZNTUeIyV", "grjyCxQoRGrwEErDQaQMTWGXt", "yONNRQJGIphpbEJgUXmHtOTyI", "kxMpABuPaynUezjaxSNErZRuo", "lhIRNglqkFyJqREmofkJSvePx", "tsUBXQslCTKMZfxWWbRXlNlzm", "plrSQyvRUZBLyctZPLdVbfyob", "UUSGMCjTZSZJvYqKUsPsAVOlJ", "zIOiFVyxQgwriaWvijbLXHseH", "aukKVjUPnyjmEkuTANCqPOBww", "AcRIgmppFckKfjZplaueddidy", "IXHLYfpOCZmUirqHLyasQcGxW", "JpundXsyxFlEMVXLwcfMNEJXt", "ZptISMNqENfbvRVfyVFKkixxG", "lJeTMiAhgLfuRBifzzRETHJgZ", "WCrOhxRZtbMKgYIIKuaMPgXAx", "HmkIMBeMMsxPEblMjyxXUldWk", "UJTpPdzgCuqEpVMTaSLxHoeyx"};
    int threshold = 21;
    int timeToDark = 1000;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> landscape = {"PaXKPlQjUDQfrroiQXoqNtwiW", "WmqicHfqIzHQEqsDlgVtptGtU", "GaGYvabBxXheRPueRUrCjRFnY", "NvKbpvKWJtdvugHXbAkYRfdtH", "lNCCRPPqVSpNdEXkOYDubYpnX", "GfOuNanIurUZTWcLnbsBrehuR", "pDNkDZSzDhNBQFRsIesBAHFgC", "teDOefMdAqWsgRJXixzhLoFWU", "eueEDIWpAIsreUEOzYwRgmQer", "lfAGPQKHxUmJUKnDaYvwjSPCI", "ZKPXaolwKgBQYhXghevoHvbch", "ODLeZpnQVCQwIpAzkvmCoGFFr", "qEIVgYwAdptYOIAWWsGrBkJve", "JzUUdxpgTGOugUdYQqyfNvMVB", "FALKlBgTjERkZcSahZlwquaaK", "pHcpPkNxfiALnfiloRCcVFagL", "pmaPCBccOGPPEFtVVLykVMmwN", "CbPPpLyzluiTjRsrHBlbVSJWf", "zMpzdJfmaSKfDgdUlJvuZQkfq", "ErJQzosFzvsbGUwcLkKEJlERf", "lKbUsuLkfAGHrSNCPKbDFdxAb", "UVAlNHhZREUfXvFCPMmPszIVL", "ORlpCcubjwjzuaPVvpVfjQyHf", "vkrmGpBTbznzYFRGUthTefoBm", "DuWlSqvfTrGbbdoZllzeUCttt"};
    int threshold = 6;
    int timeToDark = 6441;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> landscape = {"olkHMhWyYXxywIXfvOsiNfNjE", "cpeNxMiqEamFYdOLIVGtcmNDL", "XtkeWSmcbUWnGAdFYEgeFaxCX", "PcFZGtrWwetQxHtYzcScojyem", "mkzObLMyPgrkwxpCzfTIcWrKu", "qEXeAtuctJeNyDRLRUpRCdvSx", "zjRYswuwALrFImHChLXxwKYiR", "bQSVbcnhGuGQWuAYuqtPoGivP", "JpIomiFIBsauGEUCqRltDJyGr", "THikKmTyVWmUfUygAKRqRcReh", "llVQkBRgSLIayokyCivmHbsEc", "yoFCYXBUCQhVmGMjTjFDQhnkD", "fmlmrJtmmBJUndhZbbeYsefdZ", "bexdBNVkUeWLqvOuMlriqEMUm", "qBMasnadqpmnccGPXtIQJgdfr", "TiwhUNnNwWphABHXyjeGwZEOK", "IuvtviODJqxqbukVZjbkgcpLb", "mqJYmqNyyqWQYmvxJfkhyxILP", "tLhppvnCIvIqISFwFqcOIygZD", "MZcjtOevGVmDIPXkKhsWpOFss", "CTLuCZFNdzjsjftLMmhxbIrGn", "DvTpNXObMTSRtmDjMXpKjsjSB", "dSWCwDCMbaWfrTDkQyEOmFFDi", "ZOeLiiMmrKIUWliXfEYUXWgbu", "yYDtbXgKZjehhHQENnVtxqWPZ"};
    int threshold = 42;
    int timeToDark = 6900;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> landscape = {"yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAz"};
    int threshold = 52;
    int timeToDark = 120148;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> landscape = {"yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAy", "AyAyAyAyAyAyAyAyAyAyAyAyA", "yAyAyAyAyAyAyAyAyAyAyAyAz"};
    int threshold = 52;
    int timeToDark = 120149;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> landscape = {"cCs", "UVP"};
    int threshold = 51;
    int timeToDark = 1183;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> landscape = {"AyAAAyAAAyz", "AyAyAyAyAyZ", "AyAyAyAyAyA", "AyAyAyAyAyA", "AAAyAAAyAAA"};
    int threshold = 52;
    int timeToDark = 2600;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> landscape = {"AAAAAA", "yyyyyA", "AAAAAA", "Ayyyyy", "AAAAAA", "yyyyyA", "zZAAAA"};
    int threshold = 52;
    int timeToDark = 2600;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> landscape = {"AAAAAAAAA", "yyyyyyyyA", "AAAAAAAAA", "Ayyyyyyyy", "AAAAAAAAA", "yyyyyyyyA", "AAAAAAAAA", "Ayyyyyyyy", "AAAAAAAZz"};
    int threshold = 52;
    int timeToDark = 2600;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> landscape = {"AyAAAyAAA", "AyAyAyAyA", "AyAyAyAyA", "AyAyAyAyZ", "AAAyAAAyz"};
    int threshold = 52;
    int timeToDark = 2600;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> landscape = {"AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAaZYXWVUTSRQPONM", "AAAAAAAAAAbaZYXWVUTSRQPOL", "AAAAAAAAAAcbaZYXWVUTSRQPK", "AAAAAAAAAAdcbaZYXWVUTSRQJ", "AAAAAAAAAAedcbaZYXWVUTSRI", "AAAAAAAAAAfedcbaZYXWVUTSH", "AAAAAAAAAAgfedcbaZYXWVUTG", "AAAAAAAAAAhgfedcbaZYXWVUF", "AAAAAAAAAAihgfedcbaZYXWVE", "AAAAAAAAAAjihgfedcbaZYXWD", "AAAAAAAAAAkjihgfedcbaZYXC", "AAAAAAAAAAlkjihgfedcbaZYB", "AAAAAAAAAAmnopqrstuvwxyzA"};
    int threshold = 52;
    int timeToDark = 1000000;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> landscape = {"AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAabcdefghijklm", "AAAAAAAAAAAAZabcdefghijkN", "AAAAAAAAAAAAYZabcdefghijo", "AAAAAAAAAAAAXYZabcdefghip", "AAAAAAAAAAAAWXYZabcdefghq", "AAAAAAAAAAAAVWXYZabcdefgr", "AAAAAAAAAAAAUVWXYZabcdefs", "AAAAAAAAAAAATUVWXYZabcdet", "AAAAAAAAAAAASTUVWXYZabcdu", "AAAAAAAAAAAARSTUVWXYZabcv", "AAAAAAAAAAAAQRSTUVWXYZabw", "AAAAAAAAAAAAPQRSTUVWXYZax", "AAAAAAAAAAAAOPQRSTUVWXYZy", "AAAAAAAAAAAANOPQRSTUVWXYz", "AAAAAAAAAAAAMLKJIHGFEDCBA"};
    int threshold = 52;
    int timeToDark = 1000000;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> landscape = {"aZYWUSRQPONMaZYXWVTRQPONM", "baZXVTSRQPOLbaZYXWUSRQPOL", "cbaYWUTSRQPKcbaZYXVTSRQPK", "dcbZXVUTSRQJdcbaZYWUTSRQJ", "edcaYWVUTSRIedcbaZXVUTSRI", "gfecaYXWVUTGgfedcbZXWVUTG", "hgfdbZYXWVUFhgfedcaYXWVUF", "ihgecaZYXWVEihgfedbZYXWVE", "jihfdbaZYXWDjihgfecaZYXWD", "kjigecbaZYXCkjihgfdbaZYXC", "lkjhfdcbaZYBlkjihgecbaZYB", "mnoqsuvwxyzAmnopqrtvwxyzA", "aZYWUSRQPONMaZYXWVTRQPONM", "baZXVTSRQPOLbaZYXWUSRQPOL", "cbaYWUTSRQPKcbaZYXVTSRQPK", "dcbZXVUTSRQJdcbaZYWUTSRQJ", "edcaYWVUTSRIedcbaZXVUTSRI", "fedbZXWVUTSHfedcbaYWVUTSH", "gfecaYXWVUTGgfedcbZXWVUTG", "hgfdbZYXWVUFhgfedcaYXWVUF", "ihgecaZYXWVEihgfedbZYXWVE", "jihfdbaZYXWDjihgfecaZYXWD", "kjigecbaZYXCkjihgfdbaZYXC", "lkjhfdcbaZYBlkjihgecbaZYB", "mnoqsuvwxyzAmnopqrtvwxyzA"};
    int threshold = 52;
    int timeToDark = 1000000;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> landscape = {"TRRVUXefk", "bSNMOWcff", "bRPNNQZip", "XSRUTVcfj", "WbZQPXZbV", "XdYSRWVOP", "feedVVcZR", "XhfdZZefg"};
    int threshold = 4;
    int timeToDark = 50;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> landscape = {"aaaaaaaaaaaaaaaaaaaaaaaab", "dcccccccccccccccccccccccc", "eeeeeeeeeeeeeeeeeeeeeeeef", "hgggggggggggggggggggggggg", "iiiiiiiiiiiiiiiiiiiiiiiij", "lkkkkkkkkkkkkkkkkkkkkkkkk", "mmmmmmmmmmmmmmmmmmmmmmmmn", "poooooooooooooooooooooooo", "qqqqqqqqqqqqqqqqqqqqqqqqr", "tssssssssssssssssssssssss", "uuuuuuuuuuuuuuuuuuuuuuuuv", "xwwwwwwwwwwwwwwwwwwwwwwww", "yyyyyyyyyyyyyyyyyyyyyyyyz", "BAAAAAAAAAAAAAAAAAAAAAAAA", "CCCCCCCCCCCCCCCCCCCCCCCCD", "FEEEEEEEEEEEEEEEEEEEEEEEE", "GGGGGGGGGGGGGGGGGGGGGGGGH", "JIIIIIIIIIIIIIIIIIIIIIIII", "KKKKKKKKKKKKKKKKKKKKKKKKL", "NMMMMMMMMMMMMMMMMMMMMMMMM", "OOOOOOOOOOOOOOOOOOOOOOOOP", "RQQQQQQQQQQQQQQQQQQQQQQQQ", "SSSSSSSSSSSSSSSSSSSSSSSST", "VUUUUUUUUUUUUUUUUUUUUUUUU", "WWWWWWWWWWWWWWWWWWWWWWWWX"};
    int threshold = 1;
    int timeToDark = 647;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> landscape = {"BCDE", "AJKF", "AIHG", "AAAA", "AOMK", "AQSI", "ACEG"};
    int threshold = 5;
    int timeToDark = 14;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> landscape = {"zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "zyxzyzaethzyxzyzaethplabc", "abcdefghijklmnopqrstuvabc"};
    int threshold = 32;
    int timeToDark = 256;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> landscape = {"AAAD"};
    int threshold = 3;
    int timeToDark = 100;
    HillWalker* pObj = new HillWalker();
    clock_t start = clock();
    int result = pObj->highestPoint(landscape, threshold, timeToDark);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22658761&rd=10806&pm=8383
********************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <list>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
 
class HillWalker {
  private:
 
  public:
  int highestPoint(vector <string> landscape, int threshold, int timeToDark) {
    int i,j,i1,j1,i2,j2;
    int best,x,y;
    long long h[30][30];
    int d;
    long long dist[30][30][30][30];
    y = landscape.size(); 
    x = landscape[0].size();
    
    for (i=0;i<landscape.size();i++) {
      for (j=0;j<landscape[i].size();j++) {
        if ('a'<=landscape[i][j] && landscape[i][j]<='z') h[i][j]=landscape[i][j]-'a'+26;
        else h[i][j]=landscape[i][j]-'A';
      }
    }
    best=h[0][0];
    
    for (i=0;i<y;i++) for (j=0;j<x;j++) for (i1=0;i1<y;i1++) for (j1=0;j1<x;j1++) {
      dist[i][j][i1][j1]=9999999999999LL;
      d = abs(i-i1)+abs(j-j1);
      if (d==1 && abs(h[i][j]-h[i1][j1])<=threshold) {
        if (h[i][j]>=h[i1][j1]) { dist[i][j][i1][j1]=1; }
        else {
          dist[i][j][i1][j1] = (h[i][j]-h[i1][j1])*(h[i][j]-h[i1][j1]);
        }
      }
    }
    
    for (i=0;i<y;i++) for (j=0;j<x;j++) {
      for (i1=0;i1<y;i1++) for (j1=0;j1<x;j1++) {
        for (i2=0;i2<y;i2++) for (j2=0;j2<x;j2++) {
          if (dist[i1][j1][i2][j2] > dist[i1][j1][i][j] + dist[i][j][i2][j2]) {
            dist[i1][j1][i2][j2] = dist[i1][j1][i][j] + dist[i][j][i2][j2];
          }
        }
      }
    }
    
    for (i=0;i<y;i++) for (j=0;j<x;j++) {
      if (dist[0][0][i][j]+dist[i][j][0][0]<=timeToDark && h[i][j]>best) best=h[i][j];
    }
    
    return best;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/
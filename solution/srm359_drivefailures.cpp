/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7702
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

class DriveFailures {
public:
    vector<double> failureChances(vector<double> failureProb);
};

vector<double> DriveFailures::failureChances(vector<double> failureProb) {
    vector<double> ret;
    return ret;
}


int test0() {
    vector<double> failureProb = {1.0, 0.25, 0.0};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.75, 0.25, 0.0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<double> failureProb = {0.4, 0.7};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.18000000000000002, 0.54, 0.27999999999999997};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<double> failureProb = {0.2, 0.3, 0.0, 1.0, 0.8, 0.9};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.011199999999999993, 0.15319999999999995, 0.5031999999999999, 0.2892, 0.0432, 0.0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<double> failureProb = {0.0};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<double> failureProb = {0.5};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5, 0.5};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<double> failureProb = {1.0};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<double> failureProb = {0.3};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.7, 0.3};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<double> failureProb = {1.0E-8};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.99999999, 1.0E-8};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<double> failureProb = {0.99999999};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0000000050247593E-8, 0.99999999};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<double> failureProb = {0.0, 0.0};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<double> failureProb = {0.0, 1.0};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0, 0.0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<double> failureProb = {1.0, 0.0};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0, 0.0};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<double> failureProb = {1.0, 1.0};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<double> failureProb = {1.0, 0.5};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.5, 0.5};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<double> failureProb = {0.0, 0.5};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5, 0.5, 0.0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<double> failureProb = {0.5, 0.5};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.25, 0.5, 0.25};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<double> failureProb = {0.3, 0.2};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5599999999999999, 0.38, 0.06};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<double> failureProb = {0.2, 0.3};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5599999999999999, 0.38, 0.06};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<double> failureProb = {0.3, 0.7};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.21000000000000002, 0.58, 0.21};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<double> failureProb = {0.85, 0.99};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0015000000000000015, 0.15700000000000003, 0.8415};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<double> failureProb = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<double> failureProb = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<double> failureProb = {0.3, 0.7, 0.4, 0.2, 0.6, 0.3, 0.7, 0.4, 0.2, 0.6, 0.3, 0.7, 0.4, 0.2, 0.6};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {6.554832076800003E-5, 0.0010183399833600002, 0.0070858793779200015, 0.029235425955840007, 0.07984751662080002, 0.15270933299097603, 0.21109227031808003, 0.21469299841536005, 0.16201860087552, 0.09078461342720001, 0.037500766815744, 0.01122818720256, 0.00236201225472, 3.3004952064E-4, 2.7433727999999998E-5, 1.024192512E-6};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<double> failureProb = {0.01, 0.02, 0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.1, 0.11, 0.12, 0.13, 0.14, 0.15};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.28159159160078, 0.3774589717956491, 0.23056026026113033, 0.08500016810502983, 0.02111582444846962, 0.003736891073464306, 4.8561329785468707E-4, 4.706610943803578E-5, 3.419999240600057E-6, 1.856541577583813E-7, 7.435784291984619E-9, 2.1465056329584774E-10, 4.294330805387521E-12, 5.5720653753600026E-14, 4.1430118464000025E-16, 1.307674368000001E-18};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<double> failureProb = {0.999, 0.0010, 0.998, 0.0020, 0.997, 0.0030, 0.996, 0.0040, 0.995, 0.0050, 1.0E-7, 0.99999999, 0.50001, 0.49999, 0.5};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.4776270219817798E-22, 1.477660709601046E-14, 3.371009647237236E-11, 2.7672349722218394E-8, 1.0466858638696476E-5, 0.0018575761051757892, 0.12683668650067884, 0.3712952094128612, 0.3712952314141295, 0.12683671975006808, 0.0018575875195364548, 1.0467025817959465E-5, 2.7673291734892944E-8, 3.371258697336947E-11, 1.4779640980119786E-14, 1.4776271475434976E-21};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<double> failureProb = {0.2, 0.3, 0.0, 1.0, 0.8, 0.9};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.011199999999999993, 0.15319999999999995, 0.5031999999999999, 0.2892, 0.0432, 0.0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<double> failureProb = {0.2, 0.3, 0.0, 1.0, 0.8, 0.9, 1.0, 0.0, 0.0, 0.0, 0.4, 0.643, 0.2345, 0.0090};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0018199369339199991, 0.029959394153639986, 0.15465959875075996, 0.3246078893044799, 0.3094725778644, 0.14428690530548, 0.032306431214760005, 0.0028638166226400003, 2.344984992E-5, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<double> failureProb = {1.0, 0.25, 0.0};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.75, 0.25, 0.0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<double> failureProb = {0.13245546, 0.454, 0.333, 0.777, 0.995, 0.315, 0.045, 0.45456, 0.0, 0.454, 0.486, 0.132, 0.79, 0.65, 0.1324};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.952578132073999E-6, 4.1591641410763594E-4, 0.005602457332012813, 0.03217653449930757, 0.1021216434801872, 0.1996186326183762, 0.25421589487906204, 0.21701399760341442, 0.12537767857921714, 0.04873565033181908, 0.012483650859565489, 0.002029180906738993, 1.9657073696661552E-4, 1.0041655751466966E-5, 1.975253415587311E-7, 0.0};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<double> failureProb = {1.0E-9, 2.0E-9, 3.0E-9, 4.0E-9, 5.0E-9, 6.0E-9, 7.0E-9, 8.0E-9, 9.0E-9, 9.0E-9, 0.0, 1.0E-9, 2.0E-9, 3.0E-9, 0.99999999999};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0000000227403676E-11, 0.9999999399900015, 5.999999677940006E-8, 1.6099999233939012E-15, 2.5529998934336715E-23, 2.6635199036508658E-31, 1.9264499404875557E-39, 9.915529743084918E-48, 3.6687989220815977E-56, 9.735214135637374E-65, 1.8251696765434623E-73, 2.3438285785591793E-82, 1.9470347887560293E-91, 9.353750374432287E-101, 1.959551999980405E-110, 0.0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<double> failureProb = {1.0, 0.6666666, 0.77777, 0.0, 0.0, 0.3666666666, 1.0, 0.4545454545, 0.56565656, 0.7878756328, 0.48895626, 0.48451526, 0.45845415, 0.884893115, 0.3215};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 2.626978556812887E-5, 5.998271495027147E-4, 0.0056053532430687105, 0.02866643719622964, 0.08999438177594908, 0.18372801408955935, 0.2509499008473976, 0.23096053983500867, 0.14118929962174626, 0.05485513685971355, 0.012234792075579447, 0.0011900475206767778, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<double> failureProb = {0.9663215844125232, 0.9955234579585222, 0.9854712547896322, 0.1254789631454563, 0.12365478965478965, 0.2514563254896667, 0.2589654789654124};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {9.311582385789273E-7, 2.978573750406699E-4, 0.022088002623568116, 0.4242562337379834, 0.398179662278224, 0.13511109859535061, 0.019108351130936067, 9.578631006585824E-4};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<double> failureProb = {0.92342446, 0.1231242, 0.6666346, 0.92342446, 0.1231242, 0.6666346, 0.92342446, 0.1231242, 0.6666346, 0.92342446, 0.1231242, 0.6666346, 0.92342446, 0.1231242, 0.6666346};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {5.620091357769545E-9, 3.990018729128323E-7, 1.2064054034164672E-5, 2.0262227383252907E-4, 0.002072724997899383, 0.013392948598636725, 0.05544651265036511, 0.1481314981296609, 0.25411009975734267, 0.2732050424446605, 0.1754191052383979, 0.06330982125336683, 0.013060956756626297, 0.001537337447545144, 9.636049035237197E-5, 2.501285315071009E-6};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<double> failureProb = {1.0};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<double> failureProb = {1.0E-6, 1.0E-4, 0.05123, 0.0123, 0.12345, 0.9, 0.011, 0.7634, 0.00222, 0.19992, 0.087, 0.87123, 0.077, 0.0011, 0.0222};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0016261375811550316, 0.03197873493276076, 0.20281323698381165, 0.4472810372298462, 0.24767669615645846, 0.060343883969074724, 0.007708407116563414, 5.493883689413699E-4, 2.199087090801454E-5, 4.812455029724557E-7, 5.514704553737296E-9, 3.020921262541888E-11, 6.340122591434084E-14, 4.32889584750931E-17, 3.762045596811884E-21, 3.7188236850204005E-27};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<double> failureProb = {0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.04, 0.04, 0.04, 0.04, 0.04};
    DriveFailures* pObj = new DriveFailures();
    clock_t start = clock();
    vector<double> result = pObj->failureChances(failureProb);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.35099121024604574, 0.38511535568663346, 0.1924222645677589, 0.05790986344031848, 0.011699312575242243, 0.0016736356062996482, 1.7422498212249602E-4, 1.3349113196544003E-5, 7.521235845120003E-7, 3.0754805760000015E-8, 8.867266560000005E-10, 1.7068032000000013E-11, 1.9660800000000014E-13, 1.0240000000000007E-15};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=10770&pm=7702
********************************************************************************
#include<algorithm>  
#include<sstream> 
#include<string>  
#include<vector>  
using namespace std;  
   
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it)  
#define pb push_back  
#define all(x) (x).begin(),(x).end()  
#define CLEAR(x,with) memset(x,with,sizeof(x))  
#define sz size()  
typedef long long ll; 
struct DriveFailures  
{ 
  vector <double> failureChances(vector <double> failureProb)  
  { 
    int n = failureProb.sz; 
    vector<double> ret(n+1, 0); 
    REP(i,(1<<n)) 
    { 
      double p = 1.0; 
      REP(j,n) if(i & (1<<j)) p *= failureProb[j]; else p *= (1.0 - failureProb[j]); 
      ret[ __builtin_popcount(i) ] += p; 
    } 
    return ret; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/
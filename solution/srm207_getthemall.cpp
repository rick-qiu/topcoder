/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2926
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

class GetThemAll {
public:
    int quickKnight(vector<string> pieces);
};

int GetThemAll::quickKnight(vector<string> pieces) {
    int ret;
    return ret;
}


int test0() {
    vector<string> pieces = {};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
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
    vector<string> pieces = {"1 2"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> pieces = {"2 -1", "2 1", "-2 1", "-2 -1"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
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
    vector<string> pieces = {"0 1"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> pieces = {"0 7", "7 7", "7 0"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> pieces = {"-3 -3", "-3 4", "4 4", "4 -3"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> pieces = {"1000000 0", "1000000 1000000"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> pieces = {"-1000000 -1000000", "1000000 1000000", "1000000 -1000000", "-1000000 1000000"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3666668;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> pieces = {"-1000000 -1000000", "1000000 -1000000", "-1000000 1000000", "-300000 300000", "1000000 1000000", "500000 -400000", "-500001 -100000", "500700 408000", "500200 -401000"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3817872;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> pieces = {"127171 -613392", "617481 170019", "-40254 -299417", "791925 645680", "493210 -651784"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1141931;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> pieces = {"127171 -613392"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 306697;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> pieces = {"170019 -40254", "-299417 791925", "645680 493210", "-651784 717887", "421003 27070", "-392010 -970031", "-817195 -271096", "-705375 -668203"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1990421;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> pieces = {"-108615 -761834", "-990662 -982178", "-244240 63326", "142369 203528", "214332 -667532", "326090 -98422", "-295755 -885922", "215369 566637", "605213 39766"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1839346;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> pieces = {"751946 453353", "911802 851436", "78707 -715324"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1170678;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> pieces = {"-529344 724479", "-580798 559313", "687308 993592", "999390 222999", "-215125 -467574"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1823439;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> pieces = {"680288 -952514", "-248268 -814753", "354412 -887570"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 871656;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> pieces = {"837581 -448226"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 428603;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> pieces = {"175817 382367", "675222 452986", "-30122 -589282"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1023426;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> pieces = {"-63082 -84079", "898313 488876", "-783441 198096", "-229530 470016", "217933 144810", "-277322 -696891", "-549791 -149693"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1698869;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> pieces = {"34211 979980", "503098 -308878", "-662038 314615", "-16205 -872921", "399518 9613", "-705008 899167", "-716850 810236", "385785 -393903"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1993133;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> pieces = {"-859249 933226", "366375 -693533", "754509 643361", "164098 -617298"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1885117;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> pieces = {"634389 -49471", "-688895 7843"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 978838;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> pieces = {"-188818 -440840", "137486 364483", "511704 443831", "-49409 -753960", "-264382 669363", "-929808 34028", "325968 -147557"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1856216;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> pieces = {"898679 842769"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 580484;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> pieces = {"-308023 -56551", "-250038 693961", "-366253 -87802", "-456221 965942", "-404401 478378"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 749633;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> pieces = {"-608021 522630", "678885 -204688", "1801 780328", "-945067 989258", "145177 -898984", "62655 -611866"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1985667;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> pieces = {"253517 315226", "-604297 684317", "-753350 -780145", "486252 -371868", "882138 -427839", "-327372 -719474", "466170 669241", "415998 200476"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2428637;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> pieces = {"-494553 -711051", "-996766 -877987", "612476 705253", "-578845 -768792", "106418 -971496", "-772454 -90976", "504441 372295"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2136078;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> pieces = {"-852230 -126560", "-596118 392438", "-419294 -126621", "-535142 155736", "65157 257363"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 935320;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> pieces = {"8271 926085", "391522 849605"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 616430;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> pieces = {"-328105 -643300", "990357 -85116"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 983035;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> pieces = {"-804987 250343", "-811213 -124546", "863033 -903135", "789240 -419965", "-545397 538133", "-178564 -596057", "256142 208289", "-96774 -67293", "195654 269448"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2096808;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> pieces = {"657583 249550", "441817 131504", "-249733 -631459", "475814 110263", "810175 -514268", "-622120 209449", "397015 169225", "-297403 -11078"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1755255;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> pieces = {"481491 224098"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 240747;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> pieces = {"382245 609058", "-701773 152074", "735466 823115", "229408 455367", "-913572 335551", "953063 -369976"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1941953;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> pieces = {"-388348 -652150", "-782892 738091", "702445 488632", "-690237 -346172", "-841304 -846798", "281961 640004"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2108427;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> pieces = {"-103488 -182043", "-402509 -68880", "2411 -694693", "-353923 475997", "-372234 653371"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1056207;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> pieces = {"746697 450057", "-399884 887998", "-745537 -868527", "569933 49165", "219276 912229", "-855465 751275", "307718 -355754", "-790399 10102", "-545824 -419416"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2331062;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> pieces = {"102329 325602", "-770928 -14924", "-241737 -6378", "586719 18525", "-235267 376324", "64303 212562", "-209632 -988220", "415754 -798761", "246132 726493"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2181168;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> pieces = {"494675 -6195", "-239784 570727", "105625 -285806", "911436 261696", "-646840 -251503"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1523820;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> pieces = {"486557 903440", "223975 -944335"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1387222;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> pieces = {"-888181 278421", "-736748 694144", "728630 193762"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1304868;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> pieces = {"707938 -970642", "-747063 415815", "234291 -564867", "-868099 -662160", "248207 -318034", "-361187 -264870", "322001 604786"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2405110;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> pieces = {"53072 222205", "596362 801203", "-710380 260354", "-195166 -492600", "-726921 710380", "-867672 -144383", "146703 -395429", "96103 -548876"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1984519;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> pieces = {"-778741 616077", "-730583 -431501", "576220 790460"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1588634;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> pieces = {"487594 230445", "-277749 713309", "-543016 727165", "-541124 -500901", "84811 969665", "-892392 -837154", "49348 -146397", "-810664 -482406"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1990684;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> pieces = {"-534471 -706901", "-749810 863278", "-839778 -905820", "-882565 -327189", "829402 -202796", "-134434 892331", "674368 68453", "684195 387066", "-204627 -481674"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2528878;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> pieces = {"51180 909605"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 454803;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> pieces = {"-517808 171117", "-489731 368023", "890561 -129002", "780450 -985657"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1475833;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> pieces = {"203101 572314", "153356 -715141", "-555346 -233986", "-991455 -164159", "-835506 319865", "710197 -870297", "622120 324137", "382977 605396", "60274 371258"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2276454;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> pieces = {"379010 455794", "555468 -937865"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 975099;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> pieces = {"289041 413129", "-829097 103977", "895810 -882443", "-450057 -709647", "963561 239967", "-415510 844966", "-264931 389081", "-562731 -688162"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2627231;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> pieces = {"42879 804560", "-787164 805292", "-116550 -839778"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1639840;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> pieces = {"-656423 948790", "551744 740776", "-578723 -86764", "-992493 501267", "-771905 -190588", "-377728 985230", "-922850 -495834", "-621449 -504624"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1976904;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> pieces = {"240639 770745", "878171 -608692"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1075093;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> pieces = {"291116 313517", "818293 -89084", "842586 328349", "-698477 272683", "139073 -155919", "886044 81149", "157140 72909", "-489426 -206092"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1581136;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> pieces = {"-926756 590503", "-606983 -859432", "-221168 181494", "-858150 -604664"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1271985;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> pieces = {"288675 -91342", "208594 394696"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 387358;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> pieces = {"368938 -206946", "671438 184423", "-600818 898923", "752007 -216590"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1246257;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> pieces = {"-629384 791437", "148900 -115879", "254677 417036", "-900754 -428877", "-479599 -184729", "790643 420393", "456893 792108", "-212867 -205176", "807734 -382794"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2505650;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> pieces = {"141148 -292886", "467391 490707", "472762 478866", "-721366 -599658"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1142422;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> pieces = {"360882 822261", "-264321 35310", "-781244 814875"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1135389;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> pieces = {"35920 309671", "-122959 375286"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 234277;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> pieces = {"-840877 -848446"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 563109;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> pieces = {"-289834 -385541"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 225125;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> pieces = {"-714652 -210303", "-864315 351482", "449874 -602588", "388043 231422", "309794 87985", "-803400 90732", "-900754 949157"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1787667;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> pieces = {"939940 455733", "61922 359844", "385602 -255776", "-222755 -900083", "619557 -660879"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1675056;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> pieces = {"-378887 568957"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 315948;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> pieces = {"-356182 -30671", "-981689 -120274"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 490845;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> pieces = {"211890 517075", "-197852 -300394", "685293 884640", "246620 994568", "-893064 125706"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1550415;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> pieces = {"100 40", "20 40", "23 10", "-5699 342", "-123 1233", "-89 0", "-1 -1", "-89 0"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3543;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> pieces = {"-1000000 -1000000", "1000000 1000000", "1000000 -1000000", "-1000000 1000000", "1 1", "-1 -1", "1 -1", "1 1", "500000 500000"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3666674;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> pieces = {"100 40", "20 40", "23 10", "-5699 342", "-123 1233", "-89 0", "-1 -1"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3543;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> pieces = {"5 2"};
    GetThemAll* pObj = new GetThemAll();
    clock_t start = clock();
    int result = pObj->quickKnight(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=293874&rd=5853&pm=2926
********************************************************************************
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <list>
#include <iostream>
#include <math.h>
#include <queue>
#include <iterator>
#include <sstream>
#include <stdio.h>
 
using namespace std;
 
#define fi(a, b) for(int i=((int)(a)); i < ((int)(b)); i++)
#define fie(a, b) for(int i=((int)(a)); i <= ((int)(b)); i++)
#define fj(a, b) for(int j=((int)(a)); j < ((int)(b)); j++)
#define fje(a, b) for(int j=((int)(a)); j <= ((int)(b)); j++)
#define fk(a, b) for(int k=((int)(a)); k < ((int)(b)); k++)
#define fl(a, b) for(int l=((int)(a)); l < ((int)(b)); l++)
#define di(a) for(int i=(int)((a)-1); i>=0; i--)
#define dj(a) for(int j=(int)((a)-1); j>=0; j--)
#define die(a) for(int i=(int)(a); i>=0; i--)
#define dje(a) for(int j=(int)(a); j>=0; j--)
#define fdi(a, b) for(int i=((int)(a)); i > ((int)(b)); i--)
#define fdj(a, b) for(int j=((int)(a)); j > ((int)(b)); j--)
#define fdk(a, b) for(int k=((int)(a)); k > ((int)(b)); k--)
#define fdl(a, b) for(int l=((int)(a)); l > ((int)(b)); l--)
#define ri(b) for(int i=0; i < ((int)(b)); i++)
#define rie(b) for(int i=0; i <= ((int)(b)); i++)
#define rj(b) for(int j=0; j < ((int)(b)); j++)
#define rje(b) for(int j=0; j <= ((int)(b)); j++)
#define rk(b) for(int k=0; k < ((int)(b)); k++)
#define rke(b) for(int k=0; k < ((int)(b)); k++)
#define rl(b) for(int l=0; l < ((int)(b)); l++)
 
#define itadj for(int adx=-1; adx<=1; adx++) for(int ady=-1; ady<=1; ady++)
#define chkadj(i, j, n, m) ((i)>=0&&(j)>=0&&(i)<n&&(j)<m)
 
#define fe(v,it) for(__typeof(v.begin()) it=v.begin(); it != v.end(); it++)
 
typedef int i32;
typedef unsigned int u32;
typedef long long i64;
typedef long long ll;
typedef unsigned long long u64;
typedef string str;
typedef double dbl;
 
#define bz(a) memset(a,0,sizeof(a))
#define sq(x) ((x)*(x))
 
typedef vector< i32 > vi;
typedef vector< str > vs;
typedef vector< i64 > vl;
typedef vector< vi  > vvi;
typedef vector< vs  > vvs;
typedef vector< dbl > vd;
typedef vector< vd  > vvd;
 
typedef set< i32 > si;
typedef set< str  > ss;
 
typedef vi::iterator  itri;
typedef vvi::iterator itrvi;
typedef vs::iterator  itrs;
typedef vvs::iterator itrvs;
typedef vd::iterator  itrd;
typedef vvd::iterator itrvd;
 
#define ffof   find_first_of
#define ffnof  find_first_not_of
 
#define dbg_vint(v) do { copy(va(v),ostream_iterator<int>(cout,"\t")); cout << endl; } while(0)
#define dbg_vll(v) do { copy(va(v),ostream_iterator<ll>(cout,"\t")); cout << endl; } while(0)
#define dbg_vstr(v) do { copy(va(v),ostream_iterator<str>(cout,"\t")); cout << endl; } while(0)
#define dbg_vdbl(v) do { copy(va(v),ostream_iterator<dbl>(cout,"\t")); cout << endl; } while(0)
 
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)>(b)?(b):(a))
#define ABS(a)   MAX((a),-(a))
#define DIST(a,b) ABS((a)-(b))
 
#define vp(v,a)  (v).push_back(a)
#define vpb(v,a) (v).push_back(a)
#define vpf(v,a) (v).push_front(a)
#define vpob(v) (v).pop_back()
#define vpof(v) (v).pop_front()
 
#define va(v) (v).begin(), (v).end()
#define vf(v,a) find(va(v),(a))
#define ve(v,a) (vf(v,a)!=(v).end())
#define vins(v,a) do { if (!ve(v,a)) vpb(v, a); } while(0)
#define vind(v,a) (ve(v,a)?(vf(v,a)-v.begin()):-1)
 
inline i64 gcd(i64 a, i64 b) { if (b==0) return a; return gcd(b, a%b); }
inline i64 lcm(i64 a, i64 b) { return (a*b)/gcd(a,b);                  }
 
#define sz size()
 
#define mp(x, y) make_pair(x, y)
#define mt(x, y, z) mp(mp(x,y),z)
 
#define pfst(p) (p).first
#define pscd(p) (p).second
 
#define tfst(t) (t).first.first
#define tscd(t) (t).first.second
#define tthd(t) (t).second
 
typedef pair<int, int> pii;
typedef pair<int, str> pis;
typedef pair<str, int> psi;
typedef pair<str, str> pss;
 
typedef pair< pii, int > tii;
typedef pair< pss, str > tss;
 
#define pq priority_queue
 
 
int d1[201][201];
 
int adx[] = { -1, -1, -2, -2, 1, 1, 2, 2 };
int ady[] = { 2,  -2, 1,  -1, 2, -2, 1, -1};
 
int doit2(int x, int y)
{
  if (d1[50+x][50+y]) return d1[50+x][50+y]-1;  
  
  d1[50][50]=1;
  
  list< pii > t;
  vp(t,mp(0,0));
  
  while(!t.empty())
  {
    int cx=t.front().first;
    int cy=t.front().second;
    
    vpof(t);
    rk(8)
    {
      int nx=cx+adx[k];
      int ny=cy+ady[k];
      if (!chkadj(nx+50,ny+50,200,200)) continue;
      if (d1[nx+50][ny+50]) continue;
      d1[nx+50][ny+50]=d1[cx+50][cy+50]+1;
      vp(t,mp(nx,ny));
    }
  }
  
  return d1[50+x][50+y]-1;
}
 
int d[10][10];
 
int get_dist(pii p1, pii p2)
{
  pii p(ABS(p2.first-p1.first),ABS(p2.second-p1.second));  
  
  int ret=0;
  while(ABS(p.first)>99||ABS(p.second)>99)
  {
    ret++;
    if (ABS(p.first)>ABS(p.second))
    {
      if (p.first>0) p.first -= 2; else p.first += 2;
      if (p.second>0) p.second -= 1; else p.second += 1;
    }
    else
    {
      if (p.first>0) p.first -= 1; else p.first += 1;
      if (p.second>0) p.second -= 2; else p.second += 2;
    }
  }
  
  ret += doit2(ABS(p.first),ABS(p.second));
  return ret;
}
 
class GetThemAll {
  public:
  int quickKnight(vector <string> pieces) {
    
// BEGIN CUT HERE
    static bool s_FirstTime = true; if (s_FirstTime) { s_FirstTime = false; run_test(-1); }
    // END CUT HERE
    
    bz(d1);
vector< pii > pt;
vp(pt,mp(0,0));
ri(pieces.sz)
{
  int a, b;
  istringstream st(pieces[i]);
  st>>a>>b;
  vp(pt,mp(a,b));
}
 
ri(pt.sz) fj(i+1,pt.sz) d[i][j]=d[j][i]=get_dist(pt[i],pt[j]);
//printf("OK\n");
 
vi v;
fi(1,pt.sz) vp(v,i);
 
int ret=2000000000;
 
 
 
do
{
  int x=0;
  int c=0;
  ri(v.sz) { x += d[c][v[i]]; c=v[i]; }
  
  ret <?= x;
} while(next_permutation(va(v)));
 
return ret;    
  }
  
// BEGIN CUT HERE
  public:
  void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
  private:
  template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
  void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
  void test_case_0() { string Arr0[] = {"1 2"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(0, Arg1, quickKnight(Arg0)); }
  void test_case_1() { string Arr0[] = {"2 -1", "2 1", "-2 1", "-2 -1"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 7; verify_case(1, Arg1, quickKnight(Arg0)); }
  void test_case_2() { string Arr0[] = {"0 1"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(2, Arg1, quickKnight(Arg0)); }
  void test_case_3() { string Arr0[] = {"0 7", "7 7", "7 0"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 15; verify_case(3, Arg1, quickKnight(Arg0)); }
  void test_case_4() { string Arr0[] = {"-1000000 -1000000", "1000000 1000000", "1000000 -1000000", "-1000000 1000000"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3666668; verify_case(4, Arg1, quickKnight(Arg0)); }
 
// END CUT HERE
 
};
 
GetThemAll GetThemAll_obj;
 
extern  "C" void i_know_it_would_fail_but_at_least_i_can_try() {
  GetThemAll_obj.run_test(-1);
}
 
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4559
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

class ConvexPolygons {
public:
    double overlap(vector<string> polygon1, vector<string> polygon2);
};

double ConvexPolygons::overlap(vector<string> polygon1, vector<string> polygon2) {
    double ret;
    return ret;
}


int test0() {
    vector<string> polygon1 = {"00 00", "02 00", "00 03"};
    vector<string> polygon2 = {"1 1", "3 1", "3 3", "1 3"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08333333333333326;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> polygon1 = {"-1 -1", "1 -1", "1 1", "-1 1"};
    vector<string> polygon2 = {"-2 -2", "0 -2", "2 -2", "2 0", "2 2", "0 2", "-2 2", "-2 0"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> polygon1 = {"-1 -1", "-2 -1", "-1 -2"};
    vector<string> polygon2 = {"1 1", "2 1", "1 2"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> polygon1 = {"-2 0", "-1 -2", "1 -2", "2 0", "1 2", "-1 2"};
    vector<string> polygon2 = {"0 -3", "1 -1", "2 2", "-1 0"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 5.233333333333333;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> polygon1 = {"999 -1000", "1000 -1000", "999 1000"};
    vector<string> polygon2 = {"-1000 1000", "-1000 999", "1000 999"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.498272806406021E-7;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> polygon1 = {"-2 -2", "2 -2", "2 2", "-2 2"};
    vector<string> polygon2 = {"3 1", "10 1", "10 2"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> polygon1 = {"0 0", "10 9", "9 10"};
    vector<string> polygon2 = {"0 4", "-10 0", "-9 -10", "13 -7", "14 1"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1435590357746053;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> polygon1 = {"-1 -1", "1 -1", "1 1", "-1 1"};
    vector<string> polygon2 = {"0 0", "1000 -1", "1000 1"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 9.999999999999436E-4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> polygon1 = {"1000 0", "992 125", "968 248", "929 368", "876 481", "809 587", "728 684", "637 770", "535 844", "425 904", "309 951", "187 982", "62 998", "-62 998", "-187 982", "-309 951", "-425 904", "-535 844", "-637 770", "-728 684", "-809 587", "-876 481", "-929 368", "-968 248", "-992 125", "-1000 0", "-992 -125", "-968 -248", "-929 -368", "-876 -481", "-809 -587", "-728 -684", "-637 -770", "-535 -844", "-425 -904", "-309 -951", "-187 -982", "-62 -998", "62 -998", "187 -982", "309 -951", "425 -904", "535 -844", "637 -770", "728 -684", "809 -587", "876 -481", "929 -368", "968 -248", "992 -125"};
    vector<string> polygon2 = {"998 62", "982 187", "951 309", "904 425", "844 535", "770 637", "684 728", "587 809", "481 876", "368 929", "248 968", "125 992", "0 1000", "-125 992", "-248 968", "-368 929", "-481 876", "-587 809", "-684 728", "-770 637", "-844 535", "-904 425", "-951 309", "-982 187", "-998 62", "-998 -62", "-982 -187", "-951 -309", "-904 -425", "-844 -535", "-770 -637", "-684 -728", "-587 -809", "-481 -876", "-368 -929", "-248 -968", "-125 -992", "0 -1000", "125 -992", "248 -968", "368 -929", "481 -876", "587 -809", "684 -728", "770 -637", "844 -535", "904 -425", "951 -309", "982 -187", "998 -62"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 3126769.6289103786;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> polygon1 = {"-1000 -999", "999 -999", "999 1000", "-1000 1000"};
    vector<string> polygon2 = {"-999 -1000", "1000 -1000", "1000 999", "-999 999"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 3992004.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> polygon1 = {"67 789", "-34 -974", "23 -847"};
    vector<string> polygon2 = {"954 54", "-876 456", "-634 -4"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 4623.942657081756;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> polygon1 = {"-910 -40", "868 -49", "993 -5", "949 5", "792 28", "-245 44", "-950 49", "-936 11"};
    vector<string> polygon2 = {"97 -264", "89 341", "63 393", "-45 422", "-92 -95", "-83 -474", "1 -491", "66 -492", "96 -290"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 15008.12699970091;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> polygon1 = {"991 404", "995 523", "857 732", "-75 748", "-794 739", "-953 527", "-976 460", "-984 320", "-899 259", "-234 258", "355 262", "837 278"};
    vector<string> polygon2 = {"-45 -260", "-963 -254", "-986 -274", "-995 -339", "-971 -585", "-965 -608", "-893 -748", "-211 -747", "-39 -745", "925 -709", "957 -306", "802 -268"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> polygon1 = {"-1000 1000", "-1000 -999", "999 1000"};
    vector<string> polygon2 = {"1000 -1000", "1000 999", "-999 -1000"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> polygon1 = {"988 970", "355 999", "-299 999", "-928 962", "-963 933", "-982 795", "-987 723", "-998 -35", "-1000 -223", "-999 -490", "-996 -562", "-989 -688", "-960 -882", "-909 -965", "-635 -1000", "498 -998", "883 -978", "985 -858", "997 -452", "997 528", "997 650"};
    vector<string> polygon2 = {"99 -69", "99 -47", "99 -40", "99 51", "97 89", "92 99", "85 99", "37 99", "36 99", "33 99", "0 99", "-40 99", "-91 97", "-98 75", "-100 14", "-100 -4", "-100 -23", "-98 -86", "-97 -89", "-92 -95", "-89 -97", "-66 -100", "-60 -100", "-59 -100", "-48 -100", "-2 -100", "9 -100", "75 -100", "84 -100", "99 -96"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 39047.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> polygon1 = {"-15 -9", "-36 -4", "-21 -21"};
    vector<string> polygon2 = {"999 535", "997 948", "986 994", "953 999", "941 999", "801 999", "647 999", "142 999", "-828 999", "-900 999", "-991 974", "-999 971", "-1000 771", "-1000 607", "-1000 -264", "-1000 -358", "-1000 -663", "-1000 -669", "-1000 -972", "-989 -992", "-986 -995", "-838 -998", "-651 -999", "485 -1000", "949 -1000", "954 -1000", "990 -989", "992 -959", "999 -676", "999 -667", "999 -457", "999 -251", "999 -237", "999 6", "999 157", "999 218"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 141.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> polygon1 = {"-900 220", "-900 4", "-899 -190", "-897 -324", "-888 -399", "-671 -400", "-440 -400", "55 -400", "87 -388", "97 -371", "99 -329", "99 168", "99 287", "98 415", "95 584", "55 595", "43 596", "-69 599", "-74 599", "-160 599", "-358 599", "-632 599", "-689 599", "-815 598", "-888 596", "-895 525", "-897 467", "-898 406"};
    vector<string> polygon2 = {"899 538", "892 597", "659 599", "530 599", "525 599", "423 599", "-35 599", "-70 596", "-89 575", "-91 571", "-99 458", "-100 381", "-100 326", "-100 132", "-100 22", "-100 -28", "-100 -247", "-100 -279", "-99 -360", "-81 -387", "16 -397", "77 -398", "356 -400", "394 -400", "659 -400", "704 -400", "737 -399", "885 -391", "899 -379", "899 -150", "899 -50", "899 -41"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 194517.64408590665;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> polygon1 = {"499 31", "491 93", "475 154", "452 212", "422 267", "385 318", "342 364", "293 404", "240 438", "184 464", "124 484", "62 496", "0 500", "-62 496", "-124 484", "-184 464", "-240 438", "-293 404", "-342 364", "-385 318", "-422 267", "-452 212", "-475 154", "-491 93", "-499 31", "-499 -31", "-491 -93", "-475 -154", "-452 -212", "-422 -267", "-385 -318", "-342 -364", "-293 -404", "-240 -438", "-184 -464", "-124 -484", "-62 -496", "0 -500", "62 -496", "124 -484", "184 -464", "240 -438", "293 -404", "342 -364", "385 -318", "422 -267", "452 -212", "475 -154", "491 -93", "499 -31"};
    vector<string> polygon2 = {"-968 498", "-996 397", "-999 226", "-995 -319", "-993 -452", "-892 -498", "691 -500", "921 -495", "988 -460", "996 -373", "999 49", "979 352", "970 434", "951 459", "937 477", "924 480", "814 492", "742 495", "633 496", "66 498", "-299 499"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 781666.7932584676;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> polygon1 = {"-200 55", "-200 -10", "-200 -16", "-200 -43", "-200 -47", "-200 -55", "-200 -63", "-200 -139", "-200 -186", "-199 -198", "-150 -200", "-142 -200", "-56 -200", "-22 -200", "-20 -200", "27 -200", "49 -200", "161 -199", "190 -198", "199 -182", "199 -133", "199 -109", "199 -83", "199 0", "199 120", "199 174", "199 182", "199 190", "198 198", "147 199", "107 199", "70 199", "69 199", "46 199", "32 199", "-22 199", "-24 199", "-74 199", "-180 199", "-185 198", "-198 191", "-200 115", "-200 87", "-200 72"};
    vector<string> polygon2 = {"500 0", "496 62", "484 124", "464 184", "438 240", "404 293", "364 342", "318 385", "267 422", "212 452", "154 475", "93 491", "31 499", "-31 499", "-93 491", "-154 475", "-212 452", "-267 422", "-318 385", "-364 342", "-404 293", "-438 240", "-464 184", "-484 124", "-496 62", "-500 0", "-496 -62", "-484 -124", "-464 -184", "-438 -240", "-404 -293", "-364 -342", "-318 -385", "-267 -422", "-212 -452", "-154 -475", "-93 -491", "-31 -499", "31 -499", "93 -491", "154 -475", "212 -452", "267 -422", "318 -385", "364 -342", "404 -293", "438 -240", "464 -184", "484 -124", "496 -62"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 158771.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> polygon1 = {"870 996", "832 998", "65 999", "-375 999", "-477 999", "-952 997", "-989 975", "-999 858", "-1000 422", "-1000 153", "-999 -812", "-997 -860", "-989 -942", "-944 -985", "-769 -996", "-673 -999", "-196 -1000", "837 -999", "980 -985", "988 -919", "996 -809", "998 -506", "997 333", "996 834", "991 943", "988 971", "969 980"};
    vector<string> polygon2 = {"499 31", "491 93", "475 154", "452 212", "422 267", "385 318", "342 364", "293 404", "240 438", "184 464", "124 484", "62 496", "0 500", "-62 496", "-124 484", "-184 464", "-240 438", "-293 404", "-342 364", "-385 318", "-422 267", "-452 212", "-475 154", "-491 93", "-499 31", "-499 -31", "-491 -93", "-475 -154", "-452 -212", "-422 -267", "-385 -318", "-342 -364", "-293 -404", "-240 -438", "-184 -464", "-124 -484", "-62 -496", "0 -500", "62 -496", "124 -484", "184 -464", "240 -438", "293 -404", "342 -364", "385 -318", "422 -267", "452 -212", "475 -154", "491 -93", "499 -31"};
    ConvexPolygons* pObj = new ConvexPolygons();
    clock_t start = clock();
    double result = pObj->overlap(polygon1, polygon2);
    clock_t end = clock();
    delete pObj;
    double expected = 781730.0000000002;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=307060&rd=7225&pm=4559
********************************************************************************
#include <string> 
#include <vector> 
#include <algorithm> 
#include <sstream> 
#include <cstdio> 
#include <cmath> 
#include <map> 
#include <set> 
#include <cstdlib> 
#include <queue> 
using namespace std; 
 
#include <math.h> 
#include <complex> 
#include <cstdio> 
#include <algorithm> 
using namespace std; 
 
#define oo                   1000000000 
#define eps                  1.0e-9 
#define SGN(x)               ((x)<-eps?-1:(x)>eps?1:0) 
#define DET(a,b,c,d)         ((a)*(d)-(b)*(c)) 
#define CRAMER1(a,b,x,c,d,y) (DET(x,b,y,d)/DET(a,b,c,d)) 
 
typedef complex<double> tComp; 
 
int ccw(tComp a, tComp b, tComp c) { 
  double d = DET(real(b - a), real(c - a), imag(b - a), imag(c - a)); 
  return SGN(d); 
} 
 
int ccw5(tComp a, tComp b, tComp c) { 
  tComp e = b - a; 
  tComp f = c - a; 
  double d = DET(real(e), real(f), imag(e), imag(f)); 
  if (d >  eps)                                      // counterclockwise 
    return 1; 
  if (d < -eps ||                                    // clockwise 
      real(e) * real(f) < 0 || imag(e) * imag(f) < 0)// b a c 
    return -1; 
  if (abs(e) < abs(f))                               // a b c 
    return 1; 
  return 0;                                          // b c a 
} 
 
int intersect(tComp a, tComp b, tComp c, tComp d) { 
  return ccw5(a,b,c) * ccw5(a,b,d) <= 0 && ccw5(c,d,a) * ccw5(c,d,b) <= 0; 
} 
 
tComp intersection(tComp a, tComp b, tComp c, tComp d) { 
  return a + CRAMER1(real(b-a), real(c-d), real(c-a), 
                     imag(b-a), imag(c-d), imag(c-a)) * (b-a); 
} 
 
int inside_cpoly(tComp p, int n, tComp a[]) { 
  int left = 0; 
  int right = 0; 
  for (int i = 0; i < n; i++) 
    switch (ccw (p, a[i], a[(i + 1) % n])) { 
    case  1: left  = 1; break; 
    case -1: right = 1; break; 
    } 
  return !(left & right); 
} 
 
int startpos(int n, tComp p[]){ 
  int j = 0; 
  for (int k = 1; k < n; k++) 
    if (imag(p[k]) < imag(p[j]) || 
  (imag(p[k]) == imag(p[j]) && real(p[k]) < real(p[j]))) 
      j = k; 
  return j; 
} 
 
int nextpos(int n, tComp p[], int i) { 
  int j = 0; 
  for (int k = 1; k < n; k++) { 
    int c = ccw(p[i], p[j], p[k]); 
    if (c == -1 || (c == 0 && abs(p[i] - p[k]) > abs(p[i] - p[j]))) 
      j = k; 
  } 
  return j; 
} 
 
// convex hull of (n, p[]) 
// yielding the m indices of the hull points saved in index 
void convex_idx(int n, tComp p[], int &m, int index[]) { 
  index[0] = startpos(n, p); 
  for (m = 0; index[m] != index[0] || m == 0; m++) 
    index[m + 1] = nextpos(n, p, index[m]); 
} 
 
typedef struct { int n; tComp p[100]; } cpolygon; 
 
// convex hull of (n, p[]) 
// returning a polygon 
// Polygon should be non-empty ! 
// n <= 100 
cpolygon convex(int n, tComp p[]) { 
  int i, index[100]; 
  cpolygon ch; 
 
  convex_idx(n, p, ch.n, index); 
  for (i = 0; i < ch.n; i++) 
    ch.p[i] = p[index[i]]; 
  return ch; 
} 
 
// area of an arbitrary polygon, n >= 0 
double polyarea(int n, tComp p[]) { 
  double area = 0; 
  for (int i = 0; i < n; i++) 
    area += 0.5 * imag(p[i] + p[(i+1)%n]) * real(p[(i+1)%n] - p[i]); 
  return fabs(area); 
} 
 
double doit(int n,tComp *p, int m, tComp *q) { 
  tComp r[100]; 
  cpolygon cx; 
  int i,j,k; 
  for (i=k=0;i<n;i++) { 
      if (inside_cpoly(p[i],m,q)) { 
        r[k++] = p[i]; 
      } 
      for (j=0;j<m;j++) { 
        if (i==0 && inside_cpoly(q[j],n,p)) { 
        r[k++] = q[j]; 
      } 
      if (intersect(p[i],p[(i+1)%n],q[j],q[(j+1)%m])) { 
        r[k++] = intersection(p[i],p[(i+1)%n],q[j],q[(j+1)%m]); 
      } 
    } 
    } 
    cx = convex(k,r); 
  return polyarea(cx.n,cx.p); 
} 
 
class ConvexPolygons { 
  public: 
  double overlap(vector <string> polygon1, vector <string> polygon2) { 
    tComp p[100],q[100]; 
    int n = polygon1.size(); 
    int m = polygon2.size(); 
    for (int i=0; i<n; i++) { 
      double x,y; 
      sscanf(polygon1[i].c_str(),"%lf %lf",&x,&y); 
      p[i] = tComp(x,y); 
    } 
    for (int i=0; i<m; i++) { 
      double x,y; 
      sscanf(polygon2[i].c_str(),"%lf %lf",&x,&y); 
      q[i] = tComp(x,y); 
    } 
    return doit(n,p,m,q); 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/
/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11050
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

class TravellingPurchasingMan {
public:
    int maxStores(int N, vector<string> interestingStores, vector<string> roads);
};

int TravellingPurchasingMan::maxStores(int N, vector<string> interestingStores, vector<string> roads) {
    int ret;
    return ret;
}


int test0() {
    int N = 3;
    vector<string> interestingStores = {"1 10 10", "1 55 31", "10 50 100"};
    vector<string> roads = {"1 2 10"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 3;
    vector<string> interestingStores = {"1 10 10", "1 55 30", "10 50 100"};
    vector<string> roads = {"1 2 10"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 5;
    vector<string> interestingStores = {"0 1000 17"};
    vector<string> roads = {"2 3 400", "4 1 500", "4 3 300", "1 0 700", "0 2 400"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 25;
    vector<string> interestingStores = {"41257 54985 26521", "16226 67120 1326", "54421 60605 53372", "52398 58957 40184", "59698 88159 14782", "39728 75437 12470", "39215 97166 31604"};
    vector<string> roads = {"0 1 41504", "1 2 55076", "0 4 60074", "4 6 34802", "4 9 23908", "1 3 58948", "4 11 4024", "11 10 33185", "3 13 27069", "13 17 8164", "9 19 25872", "4 14 58866", "14 23 9418", "23 8 48655", "9 18 52708", "8 22 6697", "13 7 11413", "5 15 34403", "0 10 33164", "15 23 44676", "1 7 31920", "19 3 43466", "12 16 36349", "21 14 33740", "13 2 10775", "9 24 23944", "3 0 12152", "12 18 42036", "8 12 31759", "14 15 58777", "23 7 36538", "8 2 638", "8 20 30635", "16 17 30280", "3 7 39219", "15 0 52712", "1 10 16597", "21 1 26771", "7 2 60009"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 36;
    vector<string> interestingStores = {"55038 111843 42713", "24898 58111 38720", "42624 44284 33587", "19508 44737 39482", "59211 119048 56096", "20505 61172 54111", "48274 54164 29762", "56781 81164 50500", "50333 109561 17555", "29381 83596 10676", "54403 112844 31794", "18560 46303 5196", "43943 47142 3475", "46612 58637 7413"};
    vector<string> roads = {"0 1 5102", "1 3 30916", "1 4 16108", "4 2 49579", "1 8 43125", "3 11 19333", "4 13 49304", "2 5 54270", "5 9 47488", "0 17 37435", "3 14 1124", "4 10 44583", "13 21 37602", "2 23 53392", "3 25 45461", "25 24 52339", "23 12 24680", "24 29 33783", "9 7 11951", "7 33 38586", "1 32 18826", "13 16 10071", "0 6 32490", "32 30 29266", "2 20 45749", "5 7 26448", "9 21 17756", "1 10 4459", "9 33 6555", "10 11 51660", "10 3 30807", "11 14 28329", "13 14 16128", "31 9 31430", "32 25 46132", "5 33 9820"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 47;
    vector<string> interestingStores = {"55333 107327 3098", "52349 53203 22069", "14451 19392 45053", "1580 50748 43717", "13635 45893 35785", "24884 75611 47359", "2257 47997 53596", "21130 78025 26674", "57787 102674 27816", "25252 80036 16565", "9657 13513 10095", "2160 28924 40531", "5757 44153 38989"};
    vector<string> roads = {"0 1 58819", "0 2 30781", "0 4 35517", "2 7 42635", "4 3 59128", "3 11 51316", "7 9 25612", "1 12 5772", "4 14 7186", "11 13 21011", "4 20 16227", "13 8 8906", "2 6 30022", "1 21 58914", "20 27 51707", "3 17 35627", "14 24 60149", "12 29 15482", "14 10 989", "8 38 3167", "4 15 43825", "4 33 20352", "8 40 17054", "11 44 16611", "33 28 49494", "33 5 36941", "44 42 37240", "5 41 7064", "40 46 53769", "14 18 6939", "17 32 2411", "17 43 35198", "1 31 27659", "42 23 50958", "13 19 30855", "29 36 53721", "11 21 38066"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 25;
    vector<string> interestingStores = {"48629 57080 56846", "47716 67519 47328", "37510 52818 53877", "2665 52490 48842", "47865 82018 43635", "51584 65620 12054", "34029 91553 15337", "36015 76455 43091", "52742 60588 7711", "51862 70703 27529", "17799 52030 56044", "20626 40839 7399", "35791 84349 40597", "40402 87437 41803", "52669 87124 23495"};
    vector<string> roads = {"0 1 5515", "1 2 45491", "1 3 4988", "2 6 52282", "2 7 57392", "3 11 54833", "6 12 36659", "1 8 19190", "3 9 24132", "11 13 2729", "2 18 53987", "6 17 20671", "6 16 5742", "6 22 27688", "17 4 43288", "18 20 15036", "6 10 24894", "1 5 17229", "20 19 30342", "22 3 3100", "3 24 7647", "13 24 38059", "23 13 2722", "10 18 18658", "8 3 39742", "10 12 24108", "18 13 34215", "19 10 32512", "3 10 18839", "20 2 13382", "0 13 19474", "22 15 11340", "24 2 42144", "19 7 4032", "3 23 43340", "14 11 39718", "20 9 11595", "18 3 13866", "6 23 53928", "19 9 57255", "0 21 2452"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 25;
    vector<string> interestingStores = {"25281 73672 39589", "45532 69156 35358", "14088 42362 18179", "28446 55021 34850", "28376 57330 50606", "37334 87253 42727", "30196 90134 18660", "51561 85676 19113", "10601 41858 31440", "51821 72487 20744", "45230 98495 36042"};
    vector<string> roads = {"0 1 32197", "0 3 51867", "3 5 7741", "5 6 55609", "6 4 42799", "5 9 22496", "1 10 12498", "9 2 56490", "3 11 29901", "3 15 55403", "9 16 15806", "5 18 59482", "15 7 12845", "0 12 22457", "7 22 37434", "22 24 14073", "3 17 25846", "16 21 51828", "3 23 14062", "23 14 37270", "10 11 47963", "1 4 59926", "2 4 18173", "15 0 47926", "14 2 44498", "5 0 32668", "19 23 25152", "13 4 1484", "19 16 34901", "10 8 35529", "23 1 36456", "5 20 41729", "20 10 19768", "13 8 22978", "15 5 31412", "19 11 5064", "6 11 2990", "11 20 22373", "22 17 3385", "17 5 1013", "16 17 1924", "6 7 57664"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 28;
    vector<string> interestingStores = {"12897 45253 5567", "32358 91385 33065", "16950 69822 47672"};
    vector<string> roads = {"0 1 12643", "1 2 2357", "0 4 59434", "2 7 50359", "2 3 28579", "1 10 33977", "10 5 10462", "5 6 16747", "0 8 49198", "4 15 17704", "4 13 13312", "7 23 22798", "13 22 50343", "13 9 20092", "13 21 36378", "6 25 29976", "0 19 2910", "6 16 20911", "16 12 18283", "7 24 1351", "12 18 14119", "5 21 48237", "18 22 18289", "3 0 14409", "10 26 35188", "9 21 21013", "23 9 8414", "14 8 39207", "11 1 51543", "22 6 36024", "2 27 1240", "1 9 24302", "22 25 25281", "8 7 52570", "25 27 610", "2 23 37579", "22 3 24467", "18 10 19856", "16 21 19105", "3 17 39795", "20 18 53957", "0 6 21225", "19 23 21090", "23 15 19640"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 50;
    vector<string> interestingStores = {"49081 108033 53493", "3765 13816 46412", "25435 85250 29486", "40733 58002 10420", "53482 107302 43014"};
    vector<string> roads = {"0 1 20125", "0 3 52431", "3 4 29382", "0 5 40366", "4 7 46060", "0 11 21750", "3 10 49840", "5 2 47548", "11 16 45713", "7 9 20268", "7 17 28809", "1 23 35978", "16 18 33602", "5 19 59707", "4 25 22258", "9 28 28850", "23 15 49947", "0 32 5277", "28 37 42318", "7 30 34377", "5 34 17288", "5 20 1274", "3 12 15959", "37 45 13669", "17 26 15834", "15 36 4234", "3 42 31483", "42 41 32421", "18 24 51095", "20 49 28264", "10 33 28386", "3 47 437", "42 46 55685", "49 40 20287", "3 13 45586", "30 31 5790", "23 6 34742", "26 21 57"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 36;
    vector<string> interestingStores = {"34163 56383 54704", "51386 54084 17901", "24410 53628 1933"};
    vector<string> roads = {"0 1 52401", "0 2 46920", "0 3 49717", "2 5 35226", "0 6 58661", "6 10 32114", "5 11 11046", "1 4 55613", "0 9 19332", "9 8 3723", "6 19 12460", "3 15 32531", "2 22 44790", "3 25 59637", "10 7 40529", "0 20 56235", "25 12 32880", "7 13 40129", "4 23 4409", "0 26 39207", "5 27 38923", "8 28 57816", "11 16 52082", "19 33 29491", "15 30 25922", "33 32 15101", "30 17 40241", "34 29 49399", "14 9 49577", "34 5 20806", "15 26 50878", "5 21 55392", "12 28 12262", "0 21 50140", "21 7 55352", "3 18 43002"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 36;
    vector<string> interestingStores = {"20145 78591 30225", "16665 76591 27107", "5229 19070 5603", "17657 75668 19116", "11923 32602 5842", "42793 75045 11026", "15445 62637 46898"};
    vector<string> roads = {"0 1 42287", "1 2 7607", "1 3 38127", "0 6 44680", "1 8 5747", "8 5 25584", "2 4 59159", "5 7 16303", "4 15 27069", "7 9 52163", "8 14 51239", "5 18 24150", "2 19 7793", "19 21 46031", "9 23 3845", "18 30 39528", "15 26 24109", "14 34 12086", "19 32 47573", "32 11 41290", "1 25 18213", "19 28 23830", "18 8 38093", "35 17 49064", "24 16 50994", "14 29 1247", "30 1 47895", "17 27 25820", "21 14 25135", "18 3 1907", "24 15 31071", "26 12 7602", "30 31 33644", "28 22 11055", "2 9 48350", "27 6 28515"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 40;
    vector<string> interestingStores = {"1864 15254 21719"};
    vector<string> roads = {"0 1 9872", "0 3 33018", "3 4 42528", "0 2 24532", "4 6 2455", "6 5 50717", "6 10 28397", "1 12 24440", "2 9 54999", "4 11 9018", "9 18 11214", "1 8 46849", "3 22 49296", "2 16 5842", "11 14 58975", "8 21 31045", "18 30 32308", "18 31 30845", "16 34 41301", "1 27 15680", "11 25 32694", "21 36 19968", "12 7 43512", "11 29 5435", "0 19 5885", "36 20 37354", "10 37 5247", "22 13 17081", "7 38 27687", "34 33 31728", "18 38 97", "36 34 46343", "35 9 34456", "23 21 43860", "22 2 59976", "24 1 34080", "28 12 37245", "28 25 19863", "1 16 57213", "37 21 5981"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 50;
    vector<string> interestingStores = {"31602 44333 18334", "1636 33469 53367", "27662 51980 50121", "47920 56114 57994", "18707 43853 30783", "27640 77536 57785", "13696 28203 27005", "50304 65322 42529", "36488 56662 52560", "55532 84257 56357", "4757 34763 12818", "18476 67341 58313"};
    vector<string> roads = {"0 1 54184", "0 2 30495", "0 3 35536", "1 6 16059", "6 9 53301", "1 7 6468", "9 4 35161", "0 12 36483", "2 15 14334", "2 18 15589", "15 14 55039", "1 5 17413", "1 10 1762", "15 21 51187", "14 16 18552", "16 19 20664", "15 25 17104", "7 27 16933", "2 31 23984", "16 37 45893", "31 26 268", "10 8 16623", "21 34 56941", "14 11 36275", "16 39 23363", "1 41 43317", "21 32 38397", "12 47 1283", "12 43 25284", "21 42 29977", "43 28 692", "8 40 7424", "26 46 34801", "26 20 45810", "1 48 9490", "7 23 19073", "47 13 4063", "6 36 53064", "44 22 44430"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 32;
    vector<string> interestingStores = {"39778 66035 27646", "9621 66576 48013", "21921 51071 13431", "14880 60976 4907", "54876 105528 35879", "47072 75728 56288", "10034 64341 57246"};
    vector<string> roads = {"0 1 26307", "0 3 41524", "1 5 18045", "3 6 46779", "1 7 4096", "5 10 1383", "10 4 48079", "1 12 20453", "1 9 58753", "5 8 13901", "12 17 54800", "8 13 16403", "3 23 27314", "5 27 16229", "23 14 57186", "8 22 5320", "12 11 34449", "3 30 26904", "9 29 20690", "4 26 54100", "11 31 638", "7 15 16889", "14 24 23112", "14 3 20509", "20 1 59187", "17 23 21626", "27 11 38156", "20 8 16376", "11 18 14030", "16 10 43615", "22 23 59858", "22 14 383", "5 31 317", "29 2 50215", "19 24 24992", "7 9 25638", "1 31 6652", "13 28 35676"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 37;
    vector<string> interestingStores = {"22784 49589 40710", "22524 59530 25903", "36874 95484 48174", "4138 11602 30439", "7954 51184 51009"};
    vector<string> roads = {"0 1 36388", "0 3 19713", "0 4 51214", "4 2 5344", "0 6 16652", "2 7 22395", "1 10 51377", "2 13 35679", "3 15 13485", "10 11 57122", "13 21 32601", "21 5 3957", "21 19 43681", "7 20 53180", "5 22 5872", "0 18 60437", "19 17 32725", "10 34 22536", "2 26 5824", "3 8 6425", "26 30 54515", "11 12 23897", "15 36 48114", "19 27 29175", "18 25 47017", "27 32 28645", "14 3 25041", "16 18 18245", "31 4 16015", "21 22 16498", "11 26 3393", "1 6 31831", "15 1 60061", "11 3 40545", "8 16 25906"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 50;
    vector<string> interestingStores = {"58791 81960 26692", "56352 96722 18193", "30486 59265 42690", "13597 40683 17179"};
    vector<string> roads = {"0 1 54381", "1 2 2568", "2 3 13218", "2 6 28934", "2 9 7232", "3 4 59838", "2 10 18849", "0 13 2590", "9 16 44478", "1 15 17882", "16 11 39051", "0 12 12860", "13 19 46368", "13 8 3783", "8 17 4375", "13 20 30738", "8 28 3930", "11 25 15057", "4 29 53442", "11 31 43960", "20 39 50567", "19 5 55443", "12 27 59175", "19 40 58314", "1 35 54257", "35 34 45799", "12 14 43418", "11 43 9985", "0 47 49871", "8 44 12390", "2 37 14095", "14 26 26249", "9 22 54340", "40 7 18927", "28 38 4935", "14 48 39833", "34 33 41931", "48 42 28602", "5 21 11417", "16 49 3039"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 40;
    vector<string> interestingStores = {"1615 49438 59738", "34675 70239 35778", "30775 43672 48142", "46516 67592 36278", "9941 54504 10248", "50560 102019 23463", "42249 96622 45978", "53849 74968 36271", "30539 71154 27333", "15136 16142 48868", "24238 28172 33689", "42652 51966 40226", "49323 80664 44522", "50810 83191 36349", "8280 42150 29170", "771 31400 19185"};
    vector<string> roads = {"0 1 27993", "0 3 24484", "0 2 2044", "0 4 58070", "1 5 5776", "5 10 33468", "3 9 36286", "2 13 1078", "13 6 43117", "2 14 44862", "5 11 30132", "10 23 9277", "13 20 59210", "5 21 34150", "2 27 20060", "21 18 18130", "21 12 14226", "4 15 19855", "13 30 56015", "12 26 8606", "13 17 32545", "21 29 7956", "21 38 99", "14 19 52082", "27 32 19094", "20 7 35329", "14 28 41345", "0 31 32117", "11 35 34329", "20 24 54831", "28 30 51489", "1 19 52911", "24 11 4937", "12 11 35620", "20 18 8015", "14 34 28842", "29 31 35667", "37 8 7395", "35 15 10623", "32 28 21619", "35 32 28762"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 39;
    vector<string> interestingStores = {"59489 76806 56354", "18448 67051 21879", "18165 63878 48200", "54006 81005 56742", "8481 29990 43407", "58295 78112 39725", "14638 35078 2824", "18245 25225 43280", "43387 86144 18067", "4250 26973 29292", "3424 38143 30382", "58095 75581 44721", "4268 29095 20362"};
    vector<string> roads = {"0 1 50641", "0 3 33841", "0 2 38132", "2 5 48249", "2 8 3754", "8 4 56903", "4 6 39682", "8 11 34023", "2 14 23353", "1 12 18444", "5 15 15004", "2 22 44548", "14 16 31889", "16 20 13298", "6 10 38653", "11 26 46257", "5 29 45075", "22 21 55494", "14 19 51486", "5 35 21260", "15 33 41706", "15 37 7611", "0 34 9303", "37 13 43906", "19 17 27558", "26 36 25497", "16 25 19802", "5 25 26527", "12 2 58978", "35 12 59761", "27 34 21889", "24 4 20606", "35 30 52158", "27 13 53881", "26 0 28533", "12 25 46181", "38 24 20299"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 47;
    vector<string> interestingStores = {"44981 82910 7574", "15439 68562 5524", "22779 25958 24580", "31231 75777 11697", "50647 95911 29469", "4062 25185 22327", "20995 74589 29025", "49564 86172 45831", "54877 61972 42337", "6789 45917 49832", "55983 105975 7547", "25537 51040 28255", "1846 20617 43506"};
    vector<string> roads = {"0 1 19613", "1 3 1809", "1 5 3955", "5 4 6884", "1 7 30084", "7 8 19371", "1 11 47713", "1 13 16863", "13 14 18642", "0 12 35182", "7 15 15527", "11 17 22712", "1 10 47090", "0 2 4947", "2 25 10080", "8 31 27617", "3 24 6719", "11 22 60420", "13 35 6366", "7 29 5779", "17 20 60039", "17 34 20750", "35 33 11472", "33 32 25933", "13 9 4091", "33 40 9680", "40 36 947", "40 41 41230", "25 27 866", "41 37 4131", "41 21 56553", "33 46 37881", "22 19 28107", "4 30 47921", "7 6 28156", "13 23 34708", "14 6 55870"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 30;
    vector<string> interestingStores = {"33644 77023 14008", "2961 46339 21579", "24746 35702 51122", "16057 35848 41687", "54066 94598 13732", "13496 65542 41099", "59650 117100 23785", "15487 66856 16508", "21589 54056 32710", "30318 83269 20543", "13785 42285 36644", "20249 35099 2263", "23096 60812 25232", "53255 109615 52198"};
    vector<string> roads = {"0 1 59777", "0 3 55769", "0 5 22954", "5 4 9660", "5 2 12789", "4 11 13601", "1 8 58975", "11 6 39834", "5 13 29837", "0 9 41725", "2 21 26383", "21 14 32599", "0 10 18253", "9 20 53677", "11 17 6777", "20 15 37730", "6 24 45146", "17 27 52240", "9 28 5540", "2 22 50052", "22 29 34744", "20 25 38972", "8 23 38330", "22 17 28017", "19 5 22686", "15 14 57214", "29 5 11183", "24 23 46496", "9 10 9268", "0 13 57902", "18 26 29716", "25 28 25339", "24 5 4436", "1 20 2418", "26 4 29337", "24 7 59511", "20 28 54703", "10 19 56722", "8 21 56833"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 49;
    vector<string> interestingStores = {"57664 86377 5579", "54533 103642 52096", "57706 100445 26843", "5562 5588 41436", "7765 36850 51510", "10901 59330 22964", "50222 79490 44990", "3194 31420 26079"};
    vector<string> roads = {"0 1 21015", "1 2 17637", "1 5 40545", "5 6 4558", "2 8 41239", "5 11 12552", "5 4 42639", "2 7 16919", "1 9 9523", "0 19 38026", "5 3 48194", "7 23 30175", "8 16 23177", "1 25 23289", "5 14 53309", "9 29 56493", "14 32 45143", "23 30 19411", "30 20 42929", "6 39 48784", "29 38 27331", "2 27 10567", "7 28 29076", "14 12 50903", "0 22 11599", "22 37 33318", "28 21 28555", "20 35 3054", "4 18 22199", "38 48 20579", "25 45 9957", "38 43 51970", "12 47 57555", "27 40 21", "16 46 4690", "48 44 4086"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 31;
    vector<string> interestingStores = {"1739 17729 8633"};
    vector<string> roads = {"0 1 46396", "0 3 49559", "3 4 29590", "0 5 2466", "1 6 59628", "3 9 21692", "0 2 35788", "2 11 43141", "11 7 40470", "9 16 43056", "11 17 35122", "3 10 46164", "11 20 54185", "4 19 3655", "3 12 11976", "3 18 35417", "5 29 40581", "9 15 23835", "19 8 6664", "8 24 29059", "2 30 15395", "8 27 41282", "2 26 28147", "7 0 36264", "22 18 30409", "17 8 49957", "7 10 26296", "5 2 20654", "3 29 40172", "25 22 3082", "15 17 25040", "15 27 10793", "6 11 1397", "26 6 28713", "27 26 37663", "4 28 46268", "7 15 2877", "30 21 4121", "29 24 33427", "6 29 36820", "2 8 57214", "10 17 39014", "7 13 51727"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 35;
    vector<string> interestingStores = {"11697 25402 20946", "46042 96432 3803", "23718 45636 22500", "41442 69221 50444", "22542 62444 25465", "56686 108722 53322", "29610 72962 30321", "27404 86540 44321", "1575 27278 55156"};
    vector<string> roads = {"0 1 34535", "0 2 16868", "0 5 3037", "5 4 52937", "4 9 26295", "0 6 54103", "6 10 5910", "6 11 50083", "4 13 43427", "0 7 9760", "1 15 19132", "6 21 57216", "6 24 41030", "6 12 46136", "21 19 17468", "4 22 13408", "12 31 40728", "15 30 51830", "1 8 59991", "12 17 38056", "11 23 18125", "19 32 7628", "23 14 9840", "22 3 58054", "24 25 4049", "8 29 41411", "19 20 59757", "3 18 49041", "23 27 36857", "20 1 58208", "20 7 18048", "22 32 36660", "24 1 8890", "8 32 4770", "3 13 37418", "24 9 19087", "31 33 26025", "6 13 27875", "23 26 34060", "13 16 56636", "26 1 16579", "12 19 9762"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 32;
    vector<string> interestingStores = {"11735 14246 46610", "53782 58899 40100", "60173 107469 11900", "16957 61803 47370", "42087 76164 41525", "45415 90235 10467", "56925 74096 10311", "20937 66289 59560", "24798 30405 46753", "47649 66659 49338", "32990 91022 52934", "8358 32731 3966", "19895 76415 42006", "10087 16436 41477", "6490 59426 48488"};
    vector<string> roads = {"0 1 5050", "1 3 53118", "3 2 48802", "1 7 24860", "7 9 20256", "9 10 45023", "3 5 19019", "3 12 5132", "2 15 10970", "5 19 53052", "1 18 49218", "5 17 50021", "1 14 10147", "9 11 46527", "18 26 1179", "17 23 1624", "11 24 32874", "7 25 53623", "24 27 51816", "26 21 58261", "27 28 6625", "2 30 53909", "23 6 1964", "6 31 3799", "27 5 14491", "21 30 30236", "8 10 38624", "9 21 56380", "4 28 39113", "10 22 48771", "18 7 46644", "10 28 59184", "27 1 52648", "9 25 9843", "3 21 49200", "30 23 7608", "18 19 1079"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 49;
    vector<string> interestingStores = {"20859 40671 47104", "32523 46850 47638", "45074 53671 23079", "7011 20875 6960", "35148 73763 13510", "23380 68516 23984", "11935 41246 25821", "26979 67694 59746", "3675 20958 54715", "9338 69726 33819", "50266 101867 6192", "59370 60205 32462", "41210 46348 36486"};
    vector<string> roads = {"0 1 37892", "1 3 37267", "3 2 36827", "1 7 17637", "2 6 50001", "1 5 41754", "1 9 20803", "6 10 15208", "2 8 41384", "3 16 46723", "3 12 33994", "7 11 37745", "5 23 4118", "5 13 40668", "0 18 34101", "3 27 32990", "3 31 49541", "11 20 18111", "11 28 46152", "9 15 46184", "6 22 44327", "9 43 47334", "2 26 8538", "1 47 46908", "31 25 15241", "2 21 34415", "3 35 52512", "31 44 43682", "27 37 10938", "12 30 22447", "21 39 58441", "39 45 59555", "7 24 36538", "11 40 15524", "23 14 54866", "7 28 22206", "46 31 10962"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 50;
    vector<string> interestingStores = {"358 4287 47607", "685 55544 31293", "406 57746 35303", "18714 28614 38913", "17130 47637 45465", "219 52993 41349", "1181 9938 56917"};
    vector<string> roads = {"0 1 2672", "0 2 60009", "2 5 37427", "2 3 26945", "0 9 37418", "2 11 18611", "3 6 32175", "1 10 5243", "0 7 20385", "10 16 21583", "9 21 46103", "1 4 48253", "6 15 1896", "15 12 50775", "11 20 51727", "1 29 48872", "9 13 46120", "6 31 12925", "13 22 53674", "16 8 29373", "0 38 39330", "10 43 24394", "13 30 18643", "0 32 18880", "9 33 9733", "5 25 56675", "12 36 46404", "43 19 35394", "36 28 13642", "2 14 5613", "25 41 5794", "29 48 14615", "0 23 14216", "33 17 26375", "3 26 27285", "30 27 19930", "10 49 21386", "5 6 52043"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 50;
    vector<string> interestingStores = {"14378 43635 29402", "60258 110240 40460", "29943 75520 50251", "17859 47099 43095", "39381 88529 43961", "45261 61801 40450", "1006 55890 8217", "35131 81968 27284", "25817 67501 53424", "22127 45875 37871"};
    vector<string> roads = {"0 1 47357", "0 3 59699", "1 4 11585", "4 2 46740", "4 7 42311", "7 5 51703", "7 9 40997", "5 6 29074", "0 17 37281", "4 14 25698", "0 12 15147", "12 23 14646", "0 8 38881", "1 10 45908", "17 22 22775", "10 11 50302", "17 21 8653", "6 28 51746", "1 35 58925", "1 15 40755", "21 18 45399", "17 27 5117", "10 39 55527", "0 43 50799", "1 42 46676", "0 24 5015", "10 47 47172", "43 44 1913", "3 34 15745", "14 32 55890", "34 33 37444", "8 25 6474", "10 45 2490", "2 31 8717", "45 26 38562", "8 29 3556", "6 30 783"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 38;
    vector<string> interestingStores = {"16604 19435 55941", "44349 103173 50603", "48320 65608 57256", "21473 66240 40484", "35564 44440 33295", "41026 82702 21688", "12228 38397 41898", "44623 99425 8316", "47926 88692 37229", "950 58616 2682", "46496 65843 42931", "42489 88522 36973", "1543 10645 38057", "9461 53008 49807", "25629 46130 24584"};
    vector<string> roads = {"0 1 25259", "1 2 27195", "0 4 4413", "2 5 40145", "0 9 20003", "5 11 58136", "1 12 11935", "1 3 40816", "3 14 18396", "0 7 24625", "9 21 32500", "11 18 28006", "7 8 33076", "14 10 48785", "0 25 52927", "5 23 46869", "11 24 53246", "24 33 19726", "10 28 38822", "18 15 27704", "11 29 52576", "8 20 10924", "7 32 16158", "28 6 27698", "2 34 24815", "33 26 13052", "26 16 47510", "35 28 53478", "10 25 33062", "1 27 54074", "29 14 45974", "6 14 27093", "18 24 14563", "4 3 13943", "1 13 13398"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 41;
    vector<string> interestingStores = {"39079 95084 13442", "4398 6044 36779", "43024 99896 30794", "25366 32503 17208", "10309 39806 39997", "24772 46220 3438", "32821 32912 38041", "43413 78960 43467", "3097 32372 29513", "10458 70344 55554"};
    vector<string> roads = {"0 1 17352", "0 2 55805", "0 3 54940", "1 4 48340", "4 9 21182", "1 5 51366", "9 11 12981", "5 7 45285", "0 16 43157", "3 14 6628", "9 18 37142", "0 8 51571", "3 12 50317", "4 17 22773", "1 10 57597", "9 21 48948", "1 27 14515", "16 30 15342", "18 20 8802", "11 32 41697", "0 35 5139", "27 40 48219", "9 13 54899", "30 23 56212", "17 25 48149", "18 15 51880", "27 36 57507", "23 26 4271", "5 34 45236", "25 4 53053", "37 35 5349", "22 30 51279", "23 4 9790", "16 35 37282", "2 18 8302", "14 29 15826", "15 36 33007"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 32;
    vector<string> interestingStores = {"29522 49972 4044", "31244 76873 53308", "29904 76969 35095", "25147 31829 22408", "53776 104521 16307", "4586 58483 41219", "11204 51919 4006", "58810 67770 10081", "19192 38680 26370", "3666 11623 54696", "38609 68848 45049", "58807 76936 26471", "21256 70627 41742", "41765 62997 13970", "40799 66863 17075", "27958 53489 48907"};
    vector<string> roads = {"0 1 55350", "0 2 1155", "1 3 55891", "0 6 57315", "1 7 58743", "6 4 58329", "3 9 19820", "9 5 36987", "6 17 3965", "0 19 13012", "2 16 16049", "19 20 34734", "16 12 3656", "7 10 37570", "7 11 25628", "5 14 6561", "16 30 29012", "12 15 48246", "2 28 60464", "12 23 10347", "30 22 4951", "6 21 9670", "1 29 40266", "22 21 16391", "13 25 55116", "6 28 14707", "31 4 39001", "5 6 15914", "21 27 46260", "22 26 23541", "21 31 27186", "3 6 9603", "20 26 9022", "18 23 17846", "25 7 43964", "16 0 22141", "19 8 51350", "8 27 8629", "16 17 32922", "26 31 53466"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 39;
    vector<string> interestingStores = {"54201 54380 2663", "41089 79455 41345", "41762 80963 45879", "28572 70433 5469", "40351 69174 56382", "37912 81548 930", "27608 79046 50407", "47202 60121 42789", "60381 65656 51620", "50277 55543 44257", "45754 68393 59377"};
    vector<string> roads = {"0 1 37484", "1 3 41402", "0 4 34963", "1 6 10353", "6 7 14464", "1 2 36467", "2 13 42338", "2 9 19277", "7 14 47397", "14 5 4994", "1 20 47350", "6 11 31459", "6 23 42044", "2 22 32127", "3 29 53628", "14 28 54685", "5 30 9187", "29 8 14115", "3 37 46731", "2 31 36305", "20 16 35199", "16 32 31718", "32 21 53193", "4 38 4859", "5 27 58489", "8 17 914", "38 25 50653", "22 10 27649", "22 28 60405", "20 3 54431", "13 37 56182", "0 38 2188", "25 15 2758", "36 26 57798", "7 26 55421", "24 2 47671", "31 3 43694"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 49;
    vector<string> interestingStores = {"57425 101166 48144", "59870 115341 48675", "53308 56823 37565", "14874 69741 11619", "17913 64698 42892", "15386 29448 9667", "58511 83958 50601", "60079 62122 8393", "30525 76804 10790", "5517 28694 21468", "34121 50085 8167", "15544 74609 59637"};
    vector<string> roads = {"0 1 22210", "1 2 16609", "0 3 50912", "0 4 35051", "1 8 9026", "4 5 43716", "2 12 52505", "8 15 26307", "12 6 16898", "4 19 26900", "3 10 29754", "15 14 2658", "10 24 46981", "8 26 4275", "10 13 468", "13 23 52707", "5 21 15185", "26 17 3673", "5 37 58474", "0 20 5393", "37 39 25764", "13 11 14671", "23 16 5596", "23 46 40616", "6 30 24306", "5 42 54202", "4 43 59006", "6 31 52830", "0 36 45012", "19 25 37893", "14 44 14371", "0 48 2437", "12 32 10330", "39 29 22713", "21 7 22440", "5 40 29521", "2 45 13043", "41 47 28561"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 28;
    vector<string> interestingStores = {"52471 70677 20477", "50030 78322 49878", "56628 69584 18115"};
    vector<string> roads = {"0 1 23003", "0 2 31725", "1 3 22852", "0 5 58902", "2 8 57740", "0 9 29415", "0 7 30200", "2 15 35419", "7 4 28244", "2 11 37129", "3 12 42118", "0 14 22565", "8 21 52146", "4 26 25581", "3 13 16539", "14 23 35627", "13 16 51483", "8 19 57308", "1 20 42147", "16 27 24741", "27 18 24720", "11 1 4728", "9 14 9183", "23 0 982", "26 2 13626", "14 6 23035", "18 17 15083", "21 20 28280", "6 23 8324", "26 8 50248", "8 0 3007", "21 23 2775", "6 22 45605", "11 16 7483", "13 18 29422", "9 6 27003", "11 7 58550", "6 16 54757", "1 26 12299", "5 10 58802", "25 16 24268", "25 22 38586", "10 13 12779"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 35;
    vector<string> interestingStores = {"18569 62340 19059"};
    vector<string> roads = {"0 1 35129", "0 2 55742", "0 4 43977", "1 3 4563", "1 6 7088", "1 11 10399", "0 13 44677", "0 12 23637", "3 15 45367", "1 9 54930", "12 20 54319", "20 19 2313", "12 21 12453", "13 27 3948", "12 26 34523", "21 24 28162", "1 8 21328", "21 14 45541", "24 25 3011", "0 23 17787", "25 29 15893", "4 5 46416", "29 10 26581", "14 30 19473", "14 1 41014", "18 7 10420", "16 22 14063", "22 26 44998", "19 1 55685", "10 15 17718", "8 10 3306", "24 23 6258", "7 22 9706", "34 18 22852", "10 27 56837"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 41;
    vector<string> interestingStores = {"4779 30181 32867", "43597 71329 1657", "21683 61719 16697", "35509 35726 42453", "41644 43736 38375", "11646 59728 17239", "16838 46316 26774", "44154 61175 22332", "16851 51895 6900", "29671 37494 22002", "8573 8627 24882"};
    vector<string> roads = {"0 1 5630", "1 2 42795", "0 3 48292", "2 4 23539", "0 8 28415", "0 10 49220", "4 13 40498", "3 9 8150", "0 15 25412", "15 7 11084", "7 20 11407", "8 17 40113", "13 6 23501", "10 11 32060", "0 29 28512", "13 5 28895", "5 33 27412", "15 16 48370", "20 27 20018", "3 26 40748", "1 24 10099", "15 35 29915", "20 38 211", "27 23 41223", "29 32 56469", "3 19 25062", "38 34 49851", "4 32 57924", "36 6 12295", "8 26 38061", "16 8 53160", "24 33 35819", "37 19 27642"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 29;
    vector<string> interestingStores = {"58344 80844 40370", "35266 38766 19558", "44393 62414 30524", "45193 87791 57420"};
    vector<string> roads = {"0 1 29932", "0 3 16135", "0 5 24644", "5 7 51603", "5 6 22139", "3 9 23942", "5 4 5342", "4 8 27580", "3 14 7209", "8 10 43730", "10 15 52277", "6 23 4240", "0 20 813", "0 11 13772", "6 25 60350", "4 22 31214", "9 19 51254", "20 13 2906", "15 24 54980", "3 2 48586", "15 16 35146", "6 20 53835", "1 12 32464", "16 0 59343", "9 17 27447", "1 2 15670", "1 18 14006", "12 19 50690", "19 24 56384", "6 24 9745", "4 26 41713", "9 2 47321", "1 10 45527", "19 18 26690", "24 16 43205", "18 2 7170", "28 4 31466", "9 6 29909", "5 16 17450", "22 1 50444", "9 4 7891", "26 15 23731", "10 3 11063"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 44;
    vector<string> interestingStores = {"20642 27929 35845", "37109 76716 29191", "8613 66334 8240", "1862 50143 27319", "25900 81978 42847", "57164 115704 42185", "32835 49683 51429", "45262 91557 10396", "11678 47786 18625", "59316 85942 30287", "41270 89719 8295", "59445 82357 10418", "44409 95135 58122", "33753 74531 55691", "4866 11572 1093", "50927 50995 39137"};
    vector<string> roads = {"0 1 42079", "0 3 33593", "0 5 51902", "5 2 39870", "1 4 29145", "3 10 58624", "0 6 39632", "0 11 23859", "6 17 14526", "4 15 51631", "15 14 42493", "3 19 22036", "19 22 26741", "1 27 13735", "2 9 53289", "9 31 21541", "27 23 55453", "10 32 32293", "0 30 4113", "6 37 48051", "22 36 45552", "5 34 59504", "5 40 13426", "11 24 8371", "4 41 48420", "41 7 57764", "3 8 10370", "32 38 35646", "9 18 3243", "32 25 19963", "34 39 17710", "19 26 31236", "31 7 8923", "12 19 1209", "33 31 23005", "43 37 10738", "25 30 57541", "2 25 54352", "41 43 18749"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 49;
    vector<string> interestingStores = {"14798 40519 13275", "50813 86025 4822", "24125 38396 34502", "59926 66370 29663"};
    vector<string> roads = {"0 1 1186", "1 2 44952", "0 4 34756", "2 5 10414", "2 8 32915", "0 7 13111", "0 3 28476", "1 13 47445", "8 10 29127", "13 9 49609", "9 21 21756", "13 20 25832", "0 12 43306", "2 17 16553", "13 27 40730", "3 25 17875", "25 29 21199", "27 16 36155", "25 22 30986", "2 37 55221", "17 11 10674", "9 43 4192", "1 24 48956", "1 32 50468", "9 42 8002", "42 46 36207", "37 45 36494", "42 18 17166", "9 19 16611", "9 40 50836", "32 35 16411", "7 23 19827", "12 31 18142", "25 36 36028", "8 28 5734", "32 38 18453", "32 48 57970", "27 33 34384", "3 34 19721", "15 8 11688"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 33;
    vector<string> interestingStores = {"35329 63517 34599", "42881 91205 31088"};
    vector<string> roads = {"0 1 2771", "1 3 29582", "3 5 43189", "3 6 49410", "6 2 338", "3 10 18444", "0 12 41411", "2 9 58563", "10 14 31639", "6 15 36301", "5 20 28289", "1 13 21816", "6 16 7724", "1 17 18135", "9 18 49494", "14 30 28420", "20 22 2620", "17 29 7101", "13 4 50254", "12 11 24668", "18 8 58257", "12 27 29751", "5 28 31891", "19 9 56830", "22 16 34088", "20 13 24249", "12 20 35367", "22 0 35188", "6 17 57468", "20 2 24951", "18 29 1400", "6 31 26180", "10 11 20550", "22 18 26123", "5 29 20089", "23 30 27378", "5 8 7429", "11 20 34084", "3 19 16824"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 45;
    vector<string> interestingStores = {"21968 38812 1947", "2124 62455 28455", "10676 30454 45158", "45253 72030 3486", "39355 90484 32044", "21409 81173 28796", "48339 58534 7024", "57194 89460 15861", "7437 29088 47309", "7152 35677 52114", "57234 115414 4694"};
    vector<string> roads = {"0 1 34747", "0 2 25557", "2 3 40424", "2 7 31327", "2 4 47291", "7 10 13861", "2 13 57614", "1 15 36465", "4 5 58817", "4 18 40623", "13 11 31486", "0 21 32597", "10 6 57692", "21 20 5026", "6 23 58857", "5 31 60093", "20 33 46954", "20 26 17835", "20 8 11239", "2 17 14727", "23 37 2467", "6 28 23420", "10 41 43247", "37 30 19305", "37 38 3056", "30 39 32614", "21 24 57642", "38 43 60087", "5 29 23086", "20 16 16174", "33 35 59046", "11 16 26426", "0 15 21361", "25 31 43463", "21 10 20650", "19 28 53188"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 26;
    vector<string> interestingStores = {"24130 31110 44688", "58540 99047 11866", "14303 14483 33103", "58930 96673 11386", "60458 120769 32442", "31667 79787 52005", "4366 26622 32919"};
    vector<string> roads = {"0 1 52447", "1 3 1242", "3 2 34457", "0 5 11041", "5 9 11595", "3 11 16939", "1 4 44070", "5 7 57899", "5 17 26243", "17 15 53754", "17 10 36702", "4 8 6291", "8 24 57231", "11 14 7590", "2 21 39119", "1 18 32131", "8 12 54252", "24 20 16382", "4 19 20022", "2 25 14135", "19 6 135", "15 3 38354", "24 1 52601", "9 1 3038", "22 21 10951", "19 16 22420", "16 0 26744", "11 0 18001", "16 3 25497", "13 3 34979", "5 3 34196", "12 9 36577", "15 24 6557", "14 24 56135", "20 14 12317", "25 7 280", "23 17 51797", "4 15 9194", "8 2 20278", "7 18 38718", "15 23 54381", "14 25 49616", "23 11 10613"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 27;
    vector<string> interestingStores = {"37212 41956 54038", "23040 79960 6640", "32854 65294 55393", "39613 68538 48753", "4549 20535 25759", "30516 40907 10880", "30759 66922 4343", "9678 39038 53939", "25139 38105 11756", "7051 53528 4888", "46066 93245 9149"};
    vector<string> roads = {"0 1 12952", "0 3 51486", "3 5 27198", "1 4 30668", "5 9 27169", "9 2 12304", "3 12 44726", "0 8 13123", "3 14 45418", "4 15 12458", "15 7 41105", "5 23 51673", "12 20 40980", "15 11 25613", "5 13 33671", "13 21 58460", "15 19 23990", "15 16 13657", "3 10 11078", "24 8 1744", "23 21 49467", "21 5 23038", "8 21 1036", "23 0 3148", "12 11 12346", "7 6 17", "21 15 49125", "8 3 3101", "10 23 4729", "0 4 47444", "11 22 34158", "23 14 19029", "3 19 58285", "12 23 53661", "22 8 36306", "5 7 2456", "13 8 35357", "23 24 9781", "7 0 11821", "3 13 51605", "2 5 29859", "6 20 2", "3 15 28491"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 42;
    vector<string> interestingStores = {"59477 81109 30682", "13488 67919 7711"};
    vector<string> roads = {"0 1 25896", "1 3 27942", "1 2 1278", "1 7 46676", "0 4 2632", "7 9 8985", "3 5 54621", "2 14 17481", "14 15 10852", "14 19 41868", "14 13 28907", "15 6 46809", "7 18 11728", "7 23 29700", "23 24 53543", "3 25 5500", "14 10 45730", "3 31 20203", "6 35 45872", "10 38 45135", "7 36 20950", "3 34 28561", "19 20 52639", "20 41 27511", "41 17 17734", "38 40 51638", "34 16 54659", "41 8 14202", "31 27 18586", "14 33 33636", "19 25 18708", "26 6 37203", "35 29 51725", "2 20 12540"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 26;
    vector<string> interestingStores = {"13059 20512 28228", "21067 79334 26850", "39079 76431 12293", "13958 65467 7176", "4013 18653 43462", "48211 80437 12427", "49858 80592 59541", "25970 30687 52973", "35849 47376 11288", "4375 18938 42558", "56205 59337 39854"};
    vector<string> roads = {"0 1 45844", "0 3 18574", "1 2 16872", "1 5 17587", "3 6 148", "0 10 41027", "3 8 29410", "10 14 20150", "6 9 26693", "14 18 18032", "10 15 33739", "8 22 42903", "22 23 5831", "23 25 25919", "2 13 50781", "10 17 20017", "3 20 44854", "18 24 60370", "20 19 35342", "8 2 18248", "10 11 53426", "3 1 38645", "25 10 55981", "22 16 15221", "12 22 55344", "13 17 764", "23 21 33997", "10 5 46030", "22 7 55523", "12 5 31016", "12 20 27326", "11 21 59883", "9 3 8459", "7 4 1778", "17 4 58192", "16 1 13220", "21 10 18065", "11 0 1315", "15 22 43262", "20 21 9509", "6 19 33169", "1 7 54646"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 47;
    vector<string> interestingStores = {"3208 55353 1223", "41102 85844 28105", "45359 68969 39154", "42038 90309 2577", "10554 40351 26151", "52380 96724 15685", "21156 41842 22026", "9192 32433 21895", "25434 65704 54632", "40205 60832 44897"};
    vector<string> roads = {"0 1 38075", "1 3 10999", "1 2 23903", "3 6 20148", "0 8 47436", "8 10 45621", "8 7 59241", "6 12 45042", "3 17 13524", "1 16 10661", "6 21 19030", "21 13 26792", "1 20 34686", "16 19 30395", "7 14 33328", "7 23 8447", "17 15 28468", "12 28 31302", "2 22 40095", "13 33 59099", "22 38 43269", "1 43 16836", "3 11 55442", "23 42 5062", "22 40 31885", "11 32 43944", "3 26 51478", "42 4 54026", "22 31 22200", "8 5 10622", "8 25 466", "33 30 3888", "11 44 56979", "15 34 25503", "11 27 27391", "6 16 23888", "7 13 9228", "40 13 53219", "21 32 39660"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 40;
    vector<string> interestingStores = {"19016 26124 27462", "20698 55368 6801", "1865 15119 21338"};
    vector<string> roads = {"0 1 6378", "1 2 8612", "2 3 17671", "3 7 3011", "7 6 33466", "3 11 10202", "2 10 29672", "6 8 33938", "6 15 24145", "8 9 29723", "3 13 34941", "0 19 21570", "0 20 13601", "6 22 25080", "10 23 28716", "11 31 54340", "13 25 28745", "22 27 54983", "10 26 52245", "20 39 49081", "1 34 30920", "22 5 24117", "26 24 30142", "5 29 7191", "13 38 29238", "23 36 21725", "1 14 53383", "8 21 57374", "7 32 2949", "25 16 42372", "31 28 16878", "2 20 10297", "33 34 50067", "17 22 24932", "8 28 39503", "23 4 52743", "13 26 3335", "34 9 32710", "37 34 44269", "18 37 34870", "34 26 847"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 25;
    vector<string> interestingStores = {"23997 27244 21200", "31599 86775 57847", "21258 31360 50359", "1188 32099 36909", "11168 54529 18009", "10084 23328 37691", "52451 62135 13134", "9853 25807 2298", "1782 50716 15778", "24652 29660 35230"};
    vector<string> roads = {"0 1 25500", "0 2 59399", "0 5 33348", "0 3 11456", "3 4 30234", "4 9 26869", "2 7 18308", "9 12 42911", "0 11 22037", "3 13 31", "7 8 33150", "12 23 1222", "3 24 48877", "12 6 13846", "5 16 1789", "5 19 9743", "2 10 30739", "0 22 32524", "9 7 9898", "2 1 45528", "15 11 20848", "0 19 10425", "15 14 20801", "9 23 1249", "11 7 2789", "12 20 23434", "1 24 23222", "24 6 24947", "24 16 12997", "4 7 45804", "19 24 32295", "10 1 10919", "19 12 11758", "19 8 50544", "13 16 11495", "21 0 45608", "2 19 19260", "3 1 3927", "17 5 2480"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 25;
    vector<string> interestingStores = {"54569 98127 50983", "48355 93483 11863", "52601 103809 14434", "53123 55011 16877", "4874 11086 22476", "47658 81162 7885", "18275 40122 1962"};
    vector<string> roads = {"0 1 43564", "1 2 3767", "1 5 35048", "2 4 52487", "4 3 28796", "0 9 18432", "4 11 10492", "5 6 45053", "1 8 9688", "3 14 38000", "9 13 6686", "8 16 12596", "11 19 12674", "14 17 9805", "2 15 12049", "8 24 33398", "2 20 17997", "17 21 26368", "1 22 43910", "12 6 1299", "19 14 14942", "3 1 44197", "22 11 12245", "16 2 3086", "16 17 6942", "18 21 26876", "10 19 14175", "16 6 39318", "1 15 1492", "11 20 38764", "18 5 16598", "19 6 46877", "8 19 13182", "5 17 1386", "12 23 29924", "22 7 45278", "20 1 5707", "10 22 22411", "22 16 585", "4 1 25126", "7 24 30615", "21 19 26960", "9 23 27516"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 35;
    vector<string> interestingStores = {"23933 69954 16057", "3328 36152 51788", "26364 84905 34022", "26974 73460 5118", "18583 53294 33036", "58701 64216 2643", "31532 64528 55903", "34539 60648 3469", "47116 86193 26191", "28326 75318 38185", "39259 97748 15891", "18192 39354 26421", "11352 53285 45453", "54191 87122 16291", "5313 48421 33759"};
    vector<string> roads = {"0 1 43585", "0 3 24932", "0 5 47098", "5 4 3656", "4 2 15262", "5 11 39548", "4 9 15854", "2 14 25301", "14 12 26329", "11 7 36507", "3 6 3460", "11 10 1044", "7 16 13118", "1 15 40716", "7 24 53734", "9 20 28179", "0 23 54364", "4 22 27708", "12 27 7489", "0 18 35316", "24 34 51624", "20 8 39283", "15 19 33724", "22 30 53454", "11 25 13092", "34 26 18820", "10 33 26060", "28 31 1104", "29 34 33716", "18 3 17193", "6 9 33903", "29 18 15790", "9 3 36693", "21 14 29609", "6 16 29494", "25 1 59654", "13 12 51536"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 34;
    vector<string> interestingStores = {"55519 89158 57326", "51806 111725 7086"};
    vector<string> roads = {"0 1 43853", "0 2 40876", "0 3 21856", "3 6 27213", "2 9 23544", "1 5 16257", "6 10 35101", "1 14 43717", "0 16 8773", "3 18 57571", "3 17 22353", "16 22 11246", "18 11 24415", "6 12 46779", "2 29 32080", "3 20 19608", "22 13 59047", "5 33 28878", "29 32 53250", "22 15 11371", "16 25 8933", "12 23 6496", "1 8 29917", "9 21 3127", "0 7 38649", "6 13 48800", "5 32 60367", "7 8 16205", "10 29 238", "33 2 26439", "13 24 54455", "15 2 50618", "23 18 27816", "2 13 44690", "9 7 41286", "4 9 46548", "9 16 16578"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 31;
    vector<string> interestingStores = {"24400 36718 37509", "11092 48710 22982", "34489 73648 34208"};
    vector<string> roads = {"0 1 51062", "1 2 16182", "2 3 23916", "1 4 11923", "4 9 27324", "2 10 29809", "2 11 22559", "1 13 10878", "9 8 17908", "0 6 6518", "11 15 23743", "11 21 11937", "15 24 6869", "3 22 34540", "3 29 23142", "22 30 18355", "21 16 52750", "0 25 31151", "8 18 47355", "22 20 45208", "6 27 3590", "2 12 53057", "3 7 50132", "6 28 49746", "29 28 11770", "8 26 26286", "8 25 58616", "28 7 1338", "21 15 5043", "1 29 58028", "27 14 29982", "8 23 22592", "17 4 21784", "6 29 38407", "20 29 6686", "26 20 1079", "21 12 46731", "21 3 8800", "4 5 9038", "17 22 251", "24 16 16513", "13 25 12728", "19 10 38723"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 40;
    vector<string> interestingStores = {"46813 92219 23859", "9005 69082 7474", "50164 70276 32992", "42042 100866 28696", "37383 93909 28155", "383 53465 39752", "40696 52106 50710", "26004 64159 11612", "53647 55899 58828", "42656 63936 24325"};
    vector<string> roads = {"0 1 44713", "1 3 8784", "0 4 48799", "3 5 8749", "4 2 3925", "4 6 34214", "6 10 53761", "1 7 9891", "10 17 8043", "3 15 30806", "0 9 47506", "7 22 21411", "0 25 83", "10 24 36514", "25 20 33184", "4 19 28395", "24 18 4495", "22 35 57014", "2 32 19154", "25 37 19842", "10 13 39753", "4 30 31874", "25 14 16843", "32 38 21930", "3 27 36442", "0 26 49618", "32 16 19445", "3 28 28627", "30 36 23088", "28 29 38990", "25 33 21833", "14 5 44699", "29 21 1269", "23 26 6888", "26 8 324", "30 13 16242", "11 3 23369", "20 24 50118", "34 10 39713", "14 17 30042"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 44;
    vector<string> interestingStores = {"45560 59338 25173", "59395 93558 11522", "54621 83833 7167", "7245 62213 39889", "52797 68447 28802", "32307 77267 30294", "13383 38387 53129", "40121 96073 34545", "57986 91831 14332", "46739 52346 56178", "19541 76222 5379", "19941 75898 33457"};
    vector<string> roads = {"0 1 19548", "1 2 17022", "0 3 10670", "1 7 58371", "3 8 40893", "8 11 31448", "7 5 28735", "2 13 24723", "1 12 10993", "2 17 15293", "7 21 5328", "8 15 13109", "1 16 6989", "13 6 47694", "2 28 22392", "5 20 44641", "8 25 14406", "2 24 59736", "3 19 25448", "6 14 23564", "7 40 30420", "14 30 9847", "0 4 58246", "3 9 36755", "6 32 40", "16 33 53025", "17 22 13373", "3 34 25570", "25 39 22913", "11 38 43079", "5 27 56728", "4 36 56293", "20 10 49900", "28 41 30495", "38 29 7240", "30 33 43138", "34 31 36848", "16 26 15397", "7 23 9364"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 40;
    vector<string> interestingStores = {"13220 53484 60219", "10535 35032 16512", "7249 32573 24584", "18348 25392 31256", "28289 30713 19843"};
    vector<string> roads = {"0 1 20056", "1 3 33696", "1 4 2992", "4 5 55370", "1 7 35690", "0 11 34809", "5 6 9571", "0 10 26143", "11 16 53465", "4 12 16499", "16 9 29570", "6 23 60464", "7 25 12964", "9 18 44378", "0 8 32974", "0 19 17071", "4 33 21301", "25 17 24823", "11 37 39911", "3 20 2650", "33 31 40626", "12 27 51854", "1 22 14", "10 29 52137", "20 30 14199", "3 21 31218", "2 10 8565", "1 24 21212", "24 11 55921", "23 0 1698", "4 2 48568", "27 25 10158", "23 13 17157", "17 10 49469", "10 38 7839", "10 22 7286"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 37;
    vector<string> interestingStores = {"49937 70222 39482", "57491 103235 16852", "58010 102981 24139", "40240 60633 59356", "43924 99812 56860", "43278 67826 45507", "56190 92741 2017", "57874 93483 4095", "32828 51433 38045", "55036 74385 31520", "3944 19275 58309", "13446 39326 17223", "30993 73504 24499", "2584 34634 50635"};
    vector<string> roads = {"0 1 39360", "1 3 28897", "1 5 24747", "5 6 53238", "6 9 13866", "0 8 57269", "5 2 24682", "8 15 52536", "9 10 32664", "6 7 16017", "6 17 36342", "17 13 17555", "10 24 17633", "5 20 18137", "2 14 16017", "24 12 41462", "10 30 57422", "2 27 18954", "9 11 60430", "14 29 10336", "30 34 49699", "20 32 1145", "7 36 22369", "36 19 52418", "5 21 29822", "10 23 15484", "19 25 57847", "3 33 57938", "23 4 41523", "11 16 21024", "9 18 6650", "36 20 55089", "19 3 51788", "8 32 1634", "23 18 9859", "8 11 60178", "7 30 51127", "4 11 4373", "12 20 44959", "22 12 35386", "14 28 43093", "15 1 59779", "15 31 2786", "19 8 31522", "13 10 29268"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 50;
    vector<string> interestingStores = {"14643 26983 53429", "44211 82897 35001", "18977 56067 9345", "15624 43689 41012", "4582 10683 34777", "4280 54418 5500", "22838 23716 193", "51894 77047 24720"};
    vector<string> roads = {"0 1 46711", "1 3 18183", "1 4 17713", "4 7 40469", "3 5 27047", "3 10 58269", "0 12 43976", "0 14 44166", "4 6 26125", "10 13 41192", "0 16 14371", "6 9 54678", "5 23 45827", "3 25 60229", "4 27 56616", "23 11 3917", "0 32 2101", "10 30 26334", "27 28 33482", "28 39 56024", "27 40 55579", "12 15 60163", "10 19 28161", "7 22 49523", "7 29 5387", "1 17 41752", "1 48 29988", "32 31 27230", "22 42 21975", "10 38 43611", "28 26 58888", "25 20 43774", "4 21 34608", "27 33 49644", "6 45 58225", "48 25 25822"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 32;
    vector<string> interestingStores = {"54993 75741 30716", "39313 59055 46167", "16897 40995 59899"};
    vector<string> roads = {"0 1 137", "0 2 12067", "2 3 46188", "1 6 31134", "2 4 43630", "2 8 11773", "2 7 7344", "7 11 27568", "8 15 36781", "8 9 21833", "6 16 22679", "15 13 18866", "11 18 19909", "0 24 54069", "1 20 38636", "16 28 55594", "8 30 24824", "24 23 56943", "7 14 14535", "14 19 24923", "19 27 30687", "0 5 4595", "20 10 10129", "1 12 18375", "23 22 37094", "11 28 29726", "19 30 42162", "27 15 45795", "28 5 8520", "5 13 55820", "18 19 23506", "30 22 12631", "24 27 17194", "2 30 54155", "31 2 33022", "26 31 57323", "13 0 19753", "17 27 42327", "28 29 14904", "2 21 22500", "19 28 6309"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 41;
    vector<string> interestingStores = {"24910 37801 34826", "33196 37934 36070", "44546 84504 39796", "27451 79307 31585", "12982 13000 10997", "48234 86772 46264", "35987 54157 16570", "42293 72304 6511", "7890 45659 20561", "8942 40108 49081", "39771 78594 1792", "6465 54286 43032"};
    vector<string> roads = {"0 1 7111", "1 3 55577", "1 2 19739", "3 5 30874", "2 9 29436", "1 7 54101", "7 6 39995", "3 14 53163", "0 12 22084", "1 19 8597", "14 13 7636", "6 20 29206", "7 24 25422", "14 15 20440", "5 21 30635", "2 31 8010", "12 25 23176", "25 26 2398", "15 22 11252", "1 28 1007", "5 39 21249", "9 10 50761", "21 32 49824", "22 29 18975", "25 23 7449", "28 16 10605", "5 34 34883", "14 8 56174", "13 11 45447", "23 27 21786", "13 36 40583", "20 22 50186", "12 31 31205", "30 32 40839", "19 13 11020", "13 29 24745", "32 16 23811", "30 5 51667"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 30;
    vector<string> interestingStores = {"44017 51380 10445", "43326 45781 10826", "1858 7620 55820", "59671 69374 49335", "43469 91557 19846", "56665 62962 9195", "23925 83744 36638", "24987 36482 16873", "49497 91643 8310", "37946 80751 6922", "40836 87754 48723", "22729 38381 19605", "24733 66899 58724"};
    vector<string> roads = {"0 1 58347", "0 3 12218", "3 5 36887", "5 6 28245", "3 4 41830", "3 9 23633", "9 2 16042", "2 7 28163", "9 16 51186", "16 10 59664", "7 15 5895", "7 14 11381", "2 21 25986", "9 23 38346", "21 12 58189", "9 27 52827", "0 18 12855", "10 26 21285", "15 25 1589", "25 13 30677", "5 19 18386", "12 28 26422", "11 26 10195", "15 5 20557", "22 28 28994", "1 23 49421", "29 16 15007", "12 23 25646", "28 13 51562", "24 19 4146", "15 18 58771", "1 27 31312", "24 20 46064", "1 16 42453", "15 1 29331", "3 6 38801", "20 2 46850", "22 3 31069", "16 21 35728", "1 10 46523", "26 29 54648", "6 21 31583"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 46;
    vector<string> interestingStores = {"39958 72729 29481", "28004 57507 8735", "24862 77710 4104", "21949 25519 22123", "53947 62348 33479", "29569 56168 41313", "45772 97372 13226", "23872 61809 4937", "46865 104068 21266", "54581 79792 30595", "32776 66638 31704", "51830 80114 49222", "43561 58229 26173"};
    vector<string> roads = {"0 1 57723", "1 2 1732", "2 4 21455", "1 7 45612", "0 8 9773", "0 6 24137", "4 5 39405", "0 14 20928", "1 9 20750", "5 10 5710", "9 17 50349", "4 12 24131", "12 23 41814", "6 19 5397", "6 18 43219", "0 11 27751", "19 33 13927", "6 31 5352", "31 28 24138", "2 24 12202", "8 16 26213", "7 37 40173", "17 21 36212", "23 36 56304", "24 25 46517", "5 41 21724", "14 43 9882", "12 42 36360", "21 27 8655", "19 30 18688", "28 15 17212", "45 15 39173", "18 41 23700", "44 1 45020", "39 21 17684"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 25;
    vector<string> interestingStores = {"48740 73375 4349", "46525 73309 24112", "35755 65470 7242", "22006 53784 30706", "49689 53269 48541", "47600 89571 33875", "245 6630 47790", "48827 106435 2758", "41889 59500 35178", "2580 6006 15784", "4160 64058 10198", "32652 37789 51826", "2000 9692 54134", "6174 61628 59460", "24862 46545 8870"};
    vector<string> roads = {"0 1 27896", "1 3 54632", "3 2 537", "0 6 5326", "6 8 28344", "1 5 4448", "2 11 29053", "3 14 19006", "5 10 40106", "3 16 51801", "14 17 26011", "3 22 51841", "14 4 1862", "22 9 43613", "22 19 7138", "1 12 32428", "6 24 42526", "8 23 46180", "10 21 20712", "23 15 48846", "24 13 21162", "8 3 28666", "17 1 56040", "12 16 16216", "19 1 4263", "9 13 47592", "17 15 8689", "17 19 9609", "19 11 11267", "9 6 6696", "22 5 59391", "20 14 9770", "7 1 22379", "23 22 965", "5 21 50833", "3 11 13128", "14 7 1475", "4 2 4272", "14 5 8418", "23 10 51913", "2 8 33244", "4 19 12017", "2 21 20484"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 38;
    vector<string> interestingStores = {"22076 46778 43666", "7915 60330 5172", "3995 15099 58546", "26689 77336 20028", "29127 56142 10870", "26107 49271 10898", "316 4039 32923", "7505 11465 22559", "30912 42481 46223", "21937 26851 56831", "29271 54979 54521", "23490 37858 19243"};
    vector<string> roads = {"0 1 24591", "0 2 19314", "1 5 8257", "2 7 36307", "0 3 13051", "7 6 33440", "7 13 32222", "2 14 24733", "13 4 7754", "4 16 20193", "13 15 12042", "0 22 38340", "2 21 53361", "2 27 1764", "27 10 2738", "2 28 57382", "0 29 36260", "10 11 46226", "0 19 35452", "11 36 19450", "27 9 39699", "14 18 24845", "14 31 21688", "4 26 7843", "0 32 6448", "1 25 47586", "27 30 29055", "5 8 3500", "30 23 58806", "21 34 11224", "30 12 33607", "32 24 37733", "8 36 10598", "34 29 46291", "16 0 55680", "8 7 15086", "16 30 11567", "36 33 18920", "23 29 33705", "35 37 48784", "15 11 56994", "0 10 60025"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 29;
    vector<string> interestingStores = {"31612 38345 29255", "12446 60163 7495", "33 36187 31523", "49317 94080 3588", "30306 74307 40236", "40049 41359 16946", "57750 76403 42882", "43523 55643 44052", "20562 64958 24239", "20502 67594 14692", "27296 43926 37578", "24661 44278 59829", "51851 91155 38987", "43308 75415 27327", "43235 66095 59766", "37781 44299 1966"};
    vector<string> roads = {"0 1 2939", "1 3 24524", "1 5 14666", "3 2 44937", "5 9 1929", "1 8 29494", "5 12 21178", "2 14 41802", "2 4 56507", "14 11 6790", "2 18 2685", "14 16 45257", "0 19 30159", "12 7 46811", "9 24 19687", "16 27 31274", "11 28 16348", "28 20 1071", "5 10 60267", "9 15 26200", "1 26 51268", "6 3 49253", "27 13 31710", "24 28 55752", "24 25 11435", "5 8 41471", "18 20 5076", "7 3 49186", "16 28 17843", "25 20 51079", "5 26 60417", "20 5 36567", "4 7 31732", "21 9 7845", "19 17 28074", "12 14 19972", "0 8 57488", "11 5 18575"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 35;
    vector<string> interestingStores = {"38319 80358 16342", "20222 36053 53332", "14005 48967 59221", "33105 76237 2355", "23892 67054 17837", "55859 70739 21457", "52953 90517 22092", "21993 74623 29871", "56783 94347 22342", "23925 57424 52297", "55080 86840 26680", "7692 33822 55402", "46284 66495 21290"};
    vector<string> roads = {"0 1 48015", "1 2 7833", "2 5 45087", "1 3 2804", "2 7 52821", "2 11 8801", "11 6 11672", "1 10 21117", "0 14 60269", "7 12 52608", "0 8 7267", "3 9 29201", "11 4 58373", "4 18 54071", "14 15 28834", "3 24 17313", "3 30 60426", "2 34 3862", "30 32 35522", "1 31 2766", "15 23 4576", "14 20 42989", "23 21 25867", "15 26 23531", "3 23 23112", "6 30 44565", "22 28 18600", "25 22 57891", "19 29 29430", "25 5 19616", "2 13 24986", "20 34 58005", "5 16 23276", "9 26 55601", "18 9 35503"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 42;
    vector<string> interestingStores = {"14527 55075 18604", "4706 32628 36912", "52032 72361 16088", "9875 27579 42749", "30422 71867 52832", "52350 79105 3274", "25559 27102 11694", "18805 20953 41567"};
    vector<string> roads = {"0 1 58838", "0 2 15258", "2 5 4811", "1 4 2205", "5 8 55188", "1 11 1460", "5 9 32321", "9 12 43217", "9 14 12976", "11 17 29277", "8 19 16750", "8 10 11100", "4 6 53038", "0 16 51519", "19 15 40721", "14 30 24787", "11 22 46898", "1 32 9233", "15 31 27018", "10 28 18921", "15 25 56288", "32 37 47954", "22 39 57002", "9 20 28249", "25 23 49301", "22 26 24455", "8 33 14757", "19 38 22465", "19 24 6591", "13 11 38983", "35 21 20815", "29 21 29078", "14 41 4384", "12 41 45308"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 40;
    vector<string> interestingStores = {"13796 72995 15834", "16248 66809 42045", "28965 29404 1191", "49764 68536 14655", "50059 55382 26474", "26467 48034 57815", "13817 47509 57039", "44279 80742 21352", "18919 79227 47272", "36530 54433 57746", "19999 78914 52275"};
    vector<string> roads = {"0 1 20641", "0 3 20337", "3 5 18789", "5 4 4915", "1 6 47453", "6 10 29849", "4 7 11715", "1 12 26506", "6 9 12592", "3 2 31030", "4 17 60382", "5 8 30506", "6 15 3616", "4 27 14606", "0 21 7934", "12 28 17419", "6 26 27804", "26 30 3626", "1 23 37098", "10 22 36611", "27 37 10973", "26 13 22178", "7 36 25856", "1 16 16924", "10 19 44488", "37 38 7911", "10 25 14585", "20 5 23799", "34 36 5039", "34 33 46313", "21 25 60116", "36 28 38864", "17 39 33478"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 42;
    vector<string> interestingStores = {"28733 55037 14358", "59613 79869 32223", "47206 56812 5302", "18625 25261 37662", "17381 64546 30279", "2802 50028 48917", "1851 12154 13738", "30990 32006 20719", "17094 73167 57351", "21122 76830 50537", "7707 29169 39394"};
    vector<string> roads = {"0 1 53713", "1 3 9696", "0 2 51586", "3 5 41760", "2 8 53047", "0 11 12491", "0 9 34251", "3 4 40849", "9 12 41405", "9 16 28835", "9 17 39663", "1 7 20879", "2 20 7260", "9 10 40053", "5 28 28836", "28 22 25764", "20 19 57718", "1 35 16160", "20 29 51935", "9 33 35011", "33 25 11900", "4 21 31614", "1 32 25043", "1 41 16526", "8 26 29533", "16 34 24097", "34 37 36594", "19 14 56480", "13 17 14611", "5 33 49191", "31 35 984", "1 24 13105", "1 9 30553", "5 36 21305", "34 14 9464"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 43;
    vector<string> interestingStores = {"34098 92978 44353"};
    vector<string> roads = {"0 1 49867", "0 3 15334", "1 2 4751", "0 5 30462", "1 8 38797", "8 6 39540", "2 12 10237", "5 11 28912", "1 10 54043", "11 9 57309", "12 20 51001", "0 21 2104", "1 23 22688", "2 22 18877", "3 25 33632", "2 28 27844", "10 17 16477", "20 4 44724", "17 35 17038", "22 18 58743", "25 33 39353", "11 41 42552", "0 36 2730", "10 15 58685", "5 7 27374", "4 31 25561", "18 40 41863", "36 27 2938", "41 30 950", "36 19 32898", "22 37 37891", "34 33 3247", "10 14 11304", "20 2 4223", "34 42 43783"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 49;
    vector<string> interestingStores = {"55893 91528 3638", "2875 58300 4590", "33617 60703 39612", "8798 21955 18782", "47577 56506 45103", "39307 78123 3701", "11540 25353 41042", "36511 96395 14982", "53911 56833 34494"};
    vector<string> roads = {"0 1 45627", "0 3 10250", "0 4 31703", "1 2 11558", "0 9 60174", "9 6 14911", "0 11 6958", "2 8 30332", "3 10 53912", "11 19 24300", "9 7 35322", "3 23 59208", "2 5 59100", "6 15 47282", "23 21 30798", "9 31 50444", "5 13 2986", "10 14 19703", "0 33 26259", "5 12 30383", "21 20 58330", "0 43 21401", "12 28 43638", "20 27 6006", "7 32 9229", "27 30 59862", "14 48 24442", "28 40 39138", "14 22 38289", "4 17 13616", "19 36 33780", "6 24 58099", "19 39 46587", "30 37 9035", "3 35 7702", "17 45 10758", "12 42 27828", "11 34 24201", "21 25 32094", "26 14 11754", "21 48 15781"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 36;
    vector<string> interestingStores = {"54176 99621 47710", "22204 70257 44460", "25542 50531 15138", "34461 36435 4240", "43589 98074 7634", "45734 71303 11865", "36417 84958 36128", "22512 50824 54294", "54924 114495 33282", "55465 106104 22991", "21103 40299 54262", "30251 84418 8125", "10009 19202 56371", "26651 33885 47711", "27654 67087 8000", "18466 75554 31811"};
    vector<string> roads = {"0 1 56282", "1 2 18037", "0 3 28965", "3 7 12451", "0 5 17259", "7 9 11152", "7 10 18762", "5 13 47792", "3 6 189", "2 11 134", "3 15 40292", "10 12 51750", "3 19 21366", "12 25 20830", "2 28 39636", "5 24 3026", "6 14 16381", "25 32 57818", "1 18 54150", "5 30 36625", "3 27 35229", "32 22 26470", "13 20 16863", "5 29 2771", "20 17 4443", "10 23 42652", "29 34 7939", "19 31 31096", "7 35 48842", "10 25 16691", "28 19 41033", "29 26 47012", "4 0 15888", "14 12 26074", "18 29 59562", "31 17 42238", "31 22 7143", "18 13 3875"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 40;
    vector<string> interestingStores = {"32466 82449 40306", "2626 32213 52792", "40629 54873 5814", "46460 58237 462", "13902 25010 5482", "4977 54428 47839", "41178 84024 34331", "6427 55432 11449", "30030 62815 47698", "21562 68675 51359", "36945 51742 47493", "9617 56549 51358", "43780 83949 34580", "43824 65496 43952"};
    vector<string> roads = {"0 1 4367", "0 2 48962", "2 5 50900", "1 7 56878", "5 3 40465", "7 11 44573", "1 10 36611", "0 4 53754", "4 13 38107", "2 6 59970", "11 20 36971", "13 14 56068", "6 15 5882", "6 18 55944", "15 29 13871", "7 23 12148", "23 30 45772", "5 28 16094", "29 24 8388", "15 12 19763", "7 21 15573", "15 16 6011", "5 35 53305", "16 17 162", "6 33 59115", "13 32 34078", "16 37 30439", "28 36 8683", "7 27 27320", "24 38 56222", "35 22 7796", "21 28 53845", "1 6 4424", "6 36 42395", "2 9 32556", "36 20 59988", "0 32 24982", "20 22 27781", "33 34 18671", "21 34 27404"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 45;
    vector<string> interestingStores = {"37525 45502 3472", "20836 30248 38418", "342 12466 52389"};
    vector<string> roads = {"0 1 56794", "1 2 33671", "0 4 28831", "1 7 21850", "0 9 48529", "9 6 13203", "7 3 4920", "4 15 54283", "0 11 54360", "4 5 42369", "7 18 40950", "11 13 47902", "18 16 47179", "18 26 30306", "16 10 41442", "10 17 28859", "15 23 58393", "11 22 35037", "3 14 32105", "4 8 58151", "10 37 38552", "22 35 45380", "6 43 56543", "8 38 14270", "23 34 55022", "17 20 43082", "2 44 16044", "35 21 38470", "44 36 6032", "13 41 23372", "5 19 24878", "23 29 12028", "18 27 10779", "31 3 27471", "4 17 1525", "30 10 39563"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 26;
    vector<string> interestingStores = {"49135 54616 8957", "57221 77310 35735", "23186 68514 48473"};
    vector<string> roads = {"0 1 43207", "0 2 54296", "1 3 1000", "3 4 19513", "4 7 790", "7 11 35042", "3 5 46514", "5 6 20997", "5 12 47857", "4 10 25566", "12 20 213", "2 22 5150", "0 21 21295", "21 13 29541", "21 14 38595", "20 9 55463", "3 8 26095", "2 16 1087", "16 25 31116", "13 23 50940", "7 9 8292", "25 24 50233", "12 21 19922", "3 19 1378", "19 17 14944", "17 20 27428", "24 15 27870", "9 18 9406", "23 25 12824", "19 25 25757", "21 2 31909", "4 25 5787", "20 16 4098", "8 7 24729", "9 25 44996", "16 1 59165", "15 7 51128", "1 9 954", "22 20 19970"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 35;
    vector<string> interestingStores = {"59075 95469 10975", "10879 26983 32954", "14678 54242 15433", "2187 26191 36722", "17119 30314 42310", "43030 73108 31009", "1858 59558 30265", "6651 50435 41182"};
    vector<string> roads = {"0 1 35044", "1 3 729", "1 5 24577", "0 7 39445", "1 9 32517", "0 2 16863", "3 12 12340", "5 6 7256", "7 10 55757", "3 13 40925", "13 11 12469", "13 22 56706", "0 21 47608", "7 20 48955", "9 27 10524", "10 16 8186", "27 25 41149", "6 17 18242", "10 19 46054", "5 26 41024", "13 15 48296", "25 8 54203", "27 4 24933", "27 32 13388", "22 8 58755", "24 15 49203", "11 24 9953", "4 24 24018", "26 25 40543", "23 29 38144", "32 15 46169", "27 17 10354", "17 29 33235", "10 32 18422", "8 1 51273", "23 12 29969", "0 13 6201", "15 2 13949", "8 16 37625"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 26;
    vector<string> interestingStores = {"56268 77173 48814", "42280 43370 36017", "42685 49221 55394", "56791 93190 56197", "55 18139 49276", "43258 48650 33681"};
    vector<string> roads = {"0 1 9682", "0 3 11525", "0 2 39281", "3 7 33530", "3 6 12126", "1 11 4448", "11 9 59836", "1 8 37720", "0 4 2881", "8 16 4068", "4 19 11359", "16 20 10193", "11 23 2261", "3 22 37805", "23 5 8130", "5 10 50879", "4 25 13787", "4 18 60344", "16 17 33086", "1 21 18308", "6 12 20247", "10 20 20813", "21 16 40660", "12 5 54824", "9 3 60024", "23 19 42896", "5 6 48371", "24 12 2775", "15 8 12365", "19 10 982", "3 21 821", "25 2 16665", "16 3 34610", "21 13 26233", "24 0 46656", "12 0 7469", "6 2 31082", "0 6 1375", "21 6 1464", "8 18 34243", "6 15 58990", "23 7 55227"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 38;
    vector<string> interestingStores = {"37885 58168 40863", "34595 88268 7316", "44549 90482 143", "37230 79155 1420", "60402 72467 52953", "30898 79338 18683", "8849 21909 34183", "35914 84599 38601", "928 55974 51125", "25423 36262 34020", "34572 94619 30424", "8682 67445 18437"};
    vector<string> roads = {"0 1 50416", "0 2 48298", "0 5 30645", "2 6 27253", "2 7 24452", "1 11 40208", "7 9 11484", "2 14 57749", "9 3 16905", "9 15 13256", "6 13 13628", "1 4 22297", "0 24 26447", "2 27 58570", "14 8 2266", "3 20 48651", "4 33 20562", "5 23 3085", "27 16 54013", "3 17 42565", "2 12 37329", "13 22 60427", "2 36 42533", "23 32 35814", "5 18 38995", "3 26 36679", "16 30 3136", "22 31 37402", "21 30 22677", "26 25 49719", "11 37 16023", "1 16 51236", "37 31 40145", "10 15 58121", "29 12 6310", "24 19 18893", "13 8 30778", "9 30 18645", "13 33 5892"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 37;
    vector<string> interestingStores = {"52338 53411 56611", "15730 60828 22229", "57314 60707 15797", "24898 60741 10311", "55458 57043 32149", "50513 110176 7014", "34164 38500 51861", "2364 3882 52494", "12986 53007 35357", "45915 66530 15266", "42121 71523 50479", "37761 65766 3095"};
    vector<string> roads = {"0 1 278", "0 2 13170", "2 4 2317", "1 6 33240", "6 3 2316", "3 7 56479", "3 13 42211", "1 9 36655", "1 17 30194", "6 10 30854", "7 18 4869", "4 23 38627", "7 24 55393", "3 12 38926", "0 19 36442", "9 22 51496", "6 29 44045", "7 11 58682", "1 28 9242", "9 21 15739", "24 35 15995", "3 27 38731", "28 8 10460", "8 33 28770", "22 36 22870", "3 31 43807", "1 26 15201", "12 14 38498", "8 26 41591", "23 24 55494", "2 30 26973", "5 28 31975", "34 33 18490", "1 25 57574", "11 25 43750", "0 4 40559", "7 15 9667", "12 24 8161", "20 8 40199", "21 30 10544", "20 5 2599"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 33;
    vector<string> interestingStores = {"54876 82578 25988", "37892 42140 27590", "13373 26333 25023", "15119 21990 8527", "37421 39811 29266", "33450 65749 27491", "21723 69840 24363", "58517 109476 51533", "54064 92064 55991", "18209 53046 21050", "3693 52373 48133", "36833 61026 59775", "50323 103679 20626", "45627 61258 3837", "24333 67062 14412"};
    vector<string> roads = {"0 1 725", "1 3 838", "3 4 763", "4 5 871", "4 2 969", "1 7 914", "2 9 718", "7 13 935", "7 14 954", "9 15 917", "15 19 871", "9 11 1000", "5 21 906", "11 22 891", "14 27 811", "15 24 732", "4 30 838", "21 32 979", "19 8 750", "24 12 994", "1 23 968", "7 20 864", "32 16 827", "22 30 862", "3 21 817", "1 27 734", "30 16 721", "27 20 841", "23 20 733", "5 27 722", "6 2 728", "14 20 754", "29 13 947", "25 7 927", "18 14 739", "5 0 908", "8 10 940"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 31;
    vector<string> interestingStores = {"4620 28084 52488", "41892 79482 6018", "39070 80614 18009", "19094 33416 6226", "58117 71179 13117", "59933 66259 10312", "28966 60542 59375", "55103 76403 351", "20693 59222 30266", "44548 95726 22664"};
    vector<string> roads = {"0 1 728", "1 2 856", "0 4 898", "4 6 726", "6 7 984", "2 8 919", "1 9 775", "7 11 982", "9 16 904", "6 10 979", "8 19 837", "9 3 785", "0 24 797", "16 17 886", "24 5 830", "16 14 781", "1 26 739", "17 18 898", "8 29 831", "9 12 776", "14 25 923", "17 28 909", "19 26 758", "0 26 895", "8 26 994", "24 7 749", "26 10 729", "11 29 876", "5 13 841", "6 30 832", "10 15 927", "28 11 976", "7 30 941", "22 15 866", "18 27 928", "7 12 979", "23 0 881", "1 25 937", "18 9 781", "4 23 889"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 50;
    vector<string> interestingStores = {"25506 46492 12085", "59932 81989 49846", "32829 76061 37381", "35991 70227 43757", "42236 58415 28712", "5834 48009 60321", "48955 88699 29607", "52401 76105 34073", "2098 57254 40902", "23444 81031 38805"};
    vector<string> roads = {"0 1 982", "1 3 722", "0 2 922", "3 4 877", "4 7 834", "3 10 889", "1 6 836", "10 8 967", "0 12 939", "12 5 987", "0 13 860", "6 21 993", "1 24 847", "7 23 824", "8 28 844", "8 26 724", "26 33 772", "3 17 977", "21 32 959", "17 15 826", "24 14 785", "26 41 850", "4 40 954", "0 31 714", "13 16 778", "7 25 784", "5 34 825", "0 18 808", "10 48 733", "14 38 785", "7 9 770", "40 22 890", "6 44 993", "33 42 795", "40 43 942", "9 35 958", "42 11 724", "29 19 736"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 27;
    vector<string> interestingStores = {"3944 41009 9169", "27742 73162 53546", "44927 99243 46286", "37753 42965 17878", "59858 86921 7305", "16015 17966 7020", "12744 50411 43671", "32261 88487 2944"};
    vector<string> roads = {"0 1 822", "1 3 805", "1 2 782", "2 7 790", "1 9 848", "3 10 880", "0 11 883", "7 15 956", "3 14 807", "7 12 778", "12 21 722", "3 6 802", "0 25 778", "14 24 980", "1 26 946", "26 20 826", "6 5 948", "16 8 761", "8 17 963", "2 12 808", "9 13 955", "16 6 939", "13 3 927", "15 13 982", "4 19 898", "2 18 995", "21 1 999", "18 8 859", "12 6 853", "4 14 903", "8 14 998", "2 3 842", "18 10 911", "12 14 818", "23 0 849", "14 10 706", "5 23 928", "3 22 853"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 40;
    vector<string> interestingStores = {"17564 45687 32442", "56301 79305 22021", "41753 50110 37095", "21522 42596 39143", "4257 20201 17685"};
    vector<string> roads = {"0 1 901", "1 3 848", "1 4 806", "0 6 817", "0 8 783", "1 5 836", "1 2 864", "8 15 734", "1 17 872", "8 13 994", "0 18 933", "13 9 705", "17 20 766", "15 11 985", "2 28 866", "0 12 766", "1 19 758", "6 24 962", "3 30 842", "3 29 943", "6 32 954", "15 25 723", "15 21 940", "28 33 748", "2 39 709", "21 37 833", "17 27 722", "2 38 765", "11 31 737", "31 14 777", "4 26 960", "21 35 735", "2 18 832", "1 9 729", "14 1 710", "15 3 843", "29 12 850", "28 26 767", "28 6 977"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 50;
    vector<string> interestingStores = {"48724 103410 39750", "41056 59247 17167", "9714 53522 4378", "26106 62050 42083", "39559 58136 15128", "44263 96917 51016", "19444 28371 15739", "25754 54514 4324", "30862 64799 13660", "28965 86421 11666", "49380 72122 20988", "51620 90383 10656", "42726 84484 44722", "38030 39498 48732"};
    vector<string> roads = {"0 1 983", "0 3 739", "0 5 728", "5 7 903", "1 6 723", "6 11 887", "7 12 975", "7 14 837", "3 9 921", "9 19 846", "14 20 912", "6 4 822", "20 21 846", "4 24 918", "5 13 956", "14 27 945", "4 26 745", "26 10 761", "19 34 748", "9 31 706", "5 16 988", "24 36 972", "10 8 789", "11 43 947", "11 41 799", "13 38 960", "19 29 907", "27 49 796", "29 33 946", "31 42 915", "3 40 953", "27 30 835", "24 48 745", "38 35 987", "31 2 774", "39 16 703"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 25;
    vector<string> interestingStores = {"41427 98663 28423", "36354 50182 29557", "52095 63064 18913", "16580 40869 7612", "512 2878 25050", "47077 96149 31463", "11828 50117 41507", "1393 15411 46644"};
    vector<string> roads = {"0 1 879", "1 3 742", "3 2 915", "1 4 996", "3 6 777", "2 11 763", "1 5 713", "5 7 1000", "4 12 966", "0 15 786", "5 9 851", "11 22 832", "0 24 755", "7 13 876", "11 20 833", "5 23 814", "15 19 954", "4 10 735", "22 18 743", "11 9 708", "24 3 887", "23 8 886", "14 21 765", "16 24 937", "14 12 992", "22 8 844", "20 3 902", "0 12 756", "15 17 737", "2 13 716", "13 12 944", "21 18 783", "24 13 854", "8 16 782", "19 20 975", "16 20 734", "19 1 967", "17 6 937", "4 17 902", "1 13 721", "2 4 757"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 27;
    vector<string> interestingStores = {"10668 28808 24604", "16666 70581 2281", "24325 59223 12616", "59089 85665 36350", "54463 106933 7752", "9325 24854 21380", "22581 41549 2944", "27525 75568 51717", "16552 22846 55557", "39074 54519 44009", "10702 26652 521"};
    vector<string> roads = {"0 1 940", "0 3 956", "1 4 775", "3 7 933", "0 8 814", "8 6 966", "0 9 930", "3 2 906", "0 14 996", "6 5 820", "14 17 806", "1 15 960", "7 22 716", "7 21 746", "4 24 767", "7 25 943", "2 23 798", "7 19 997", "8 13 945", "18 23 926", "18 0 886", "23 25 945", "5 12 891", "19 4 777", "19 9 860", "10 9 855", "24 0 966", "7 26 829", "5 10 974", "25 11 822", "12 13 814", "2 5 813", "2 26 780", "4 8 807", "17 6 767", "22 1 885", "10 1 957", "26 4 778", "16 3 969", "19 6 915", "24 14 953", "5 25 877"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 38;
    vector<string> interestingStores = {"28936 68204 2202", "38735 40413 46681", "56225 111170 44821", "31632 59264 16758", "39528 73535 57605", "33129 69301 50181", "4176 38995 56288"};
    vector<string> roads = {"0 1 960", "0 3 868", "1 2 798", "2 6 774", "6 7 786", "1 5 843", "3 13 767", "5 8 743", "13 9 744", "7 4 866", "7 16 992", "16 14 957", "0 23 758", "16 19 890", "9 25 788", "9 24 969", "7 33 731", "6 32 733", "24 20 894", "8 10 936", "3 11 830", "8 12 785", "6 15 870", "23 30 714", "25 28 847", "28 35 772", "34 35 1000", "11 6 946", "2 30 849", "22 28 821", "24 6 703", "11 29 754", "31 35 773", "21 30 929", "11 33 731", "29 36 750", "2 7 888", "35 3 888", "13 0 979"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 26;
    vector<string> interestingStores = {"23707 30547 27242", "1164 3339 11282", "19909 36425 28052", "1515 16664 54574", "47226 73331 1116"};
    vector<string> roads = {"0 1 935", "0 2 874", "2 4 753", "0 7 769", "1 3 863", "0 9 985", "0 10 753", "0 13 988", "10 8 945", "2 6 830", "8 14 709", "9 20 729", "2 25 740", "2 24 822", "13 21 856", "8 22 933", "17 14 900", "0 4 873", "3 5 828", "5 17 706", "15 24 800", "11 21 803", "5 10 896", "15 21 814", "0 12 862", "1 24 976", "11 2 957", "25 10 734", "5 16 793", "19 16 873", "23 1 935", "6 18 922", "13 20 991", "19 13 807", "11 13 987", "3 17 726", "20 11 924"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 42;
    vector<string> interestingStores = {"46084 81540 39", "16109 49482 59302", "51316 66534 20557", "20710 36073 56465"};
    vector<string> roads = {"0 1 846", "0 3 862", "3 2 977", "0 5 798", "2 8 700", "8 4 707", "3 7 880", "3 6 940", "8 13 899", "8 9 922", "3 19 827", "1 18 996", "0 22 988", "22 23 766", "6 26 973", "4 12 791", "26 24 711", "19 29 791", "12 10 848", "1 16 890", "13 28 852", "29 35 806", "29 17 717", "6 27 852", "4 32 964", "16 36 753", "2 37 733", "9 31 998", "32 25 952", "36 41 831", "18 15 895", "35 14 810", "34 18 784", "8 14 815", "23 10 996", "7 0 853", "28 3 946", "24 39 907", "35 17 770", "39 27 752", "37 9 818"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 49;
    vector<string> interestingStores = {"16735 75319 26125", "21963 59692 1505", "36063 49834 12069", "54186 110554 7832", "16353 41750 28935", "29682 69885 14455", "13048 71929 34439", "25311 27175 31153", "56564 59262 38358", "38868 68726 21377", "37382 81463 40586", "9446 22955 29234", "12803 43927 9910", "12030 34508 22592", "14162 51151 20152", "30584 69491 10797"};
    vector<string> roads = {"0 1 840", "0 3 941", "3 5 875", "3 4 956", "3 6 933", "3 9 734", "6 13 954", "6 10 957", "4 16 837", "3 12 890", "9 19 959", "10 23 833", "16 18 791", "0 20 710", "9 28 753", "9 31 752", "13 25 738", "25 33 984", "19 24 714", "12 14 870", "14 27 748", "25 29 750", "28 37 946", "6 42 864", "9 32 993", "4 46 845", "20 38 830", "37 7 908", "20 41 898", "24 21 896", "21 2 711", "21 11 797", "13 40 851", "3 35 837", "0 30 966", "31 15 780", "6 30 899"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 26;
    vector<string> interestingStores = {"30807 42807 26935", "7488 20533 39159", "11475 54666 37355", "21174 57114 34061", "46980 50496 742", "17226 24992 35690"};
    vector<string> roads = {"0 1 814", "0 3 838", "0 4 781", "0 2 989", "3 8 989", "1 9 817", "2 7 900", "4 13 730", "9 5 1000", "1 17 742", "3 6 845", "2 22 768", "3 16 931", "1 21 942", "2 25 942", "17 24 880", "24 15 812", "4 10 850", "24 4 744", "23 21 750", "16 24 808", "21 25 767", "16 0 861", "12 17 985", "19 8 836", "7 18 739", "20 3 1000", "7 23 770", "17 20 910", "17 7 812", "17 21 997", "12 16 945", "5 20 953", "2 17 867", "13 5 812", "4 18 862", "2 9 973", "13 6 790", "23 24 763", "14 0 863", "3 15 876"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 50;
    vector<string> interestingStores = {"58058 113779 36649", "40326 86963 38465", "23022 33956 21941", "29997 45459 36160", "20502 67522 8705", "39091 92499 45110", "51590 92371 39761", "128 56498 9054", "1669 12908 46251", "24493 60286 59820", "21416 70600 59075", "40454 67040 32436", "5548 35333 43107", "41208 85208 46631", "8965 23308 30361", "31192 53527 45282"};
    vector<string> roads = {"0 1 932", "1 2 925", "0 4 827", "0 5 996", "0 9 793", "5 10 738", "2 13 710", "0 6 794", "9 17 775", "1 12 927", "10 11 958", "0 14 737", "10 21 997", "6 15 949", "2 16 719", "16 22 821", "14 19 986", "15 25 941", "21 18 964", "6 24 928", "25 8 728", "0 26 927", "5 43 760", "19 33 935", "11 41 882", "13 48 773", "1 42 801", "16 40 808", "15 35 912", "1 3 747", "6 39 868", "39 34 806", "43 46 779", "15 7 755", "5 27 834", "46 47 738", "18 24 792"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 27;
    vector<string> interestingStores = {"32758 62866 24846", "26101 52895 3764", "31743 72242 16262", "44785 83972 28536", "38653 64317 26196", "28456 47181 21124", "18064 74559 14380", "39811 92681 37101", "2699 26876 7926", "1905 46800 47732", "55729 64075 11386", "47013 59398 55572", "14428 70612 32539", "41553 93020 47395", "39736 54227 26180"};
    vector<string> roads = {"0 1 835", "0 2 989", "0 3 944", "0 5 994", "5 8 780", "1 9 974", "8 7 834", "0 4 859", "1 15 830", "0 6 808", "5 12 702", "9 11 796", "4 10 714", "6 21 937", "21 14 763", "9 25 769", "4 13 930", "2 18 864", "4 19 997", "0 16 903", "3 2 983", "22 18 702", "14 16 894", "18 4 704", "17 24 978", "16 25 723", "16 12 955", "14 6 939", "2 9 944", "25 6 769", "8 0 755", "15 3 749", "15 23 890", "4 7 713", "6 2 865", "9 26 900", "25 4 729", "17 19 845", "14 22 987", "20 9 932", "16 19 945"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 30;
    vector<string> interestingStores = {"3266 54821 9496", "17707 50161 15037", "31276 83255 4091", "48557 82197 24130", "13517 44423 13595"};
    vector<string> roads = {"0 1 815", "1 2 725", "2 4 963", "2 6 949", "4 5 759", "2 9 887", "6 7 943", "4 8 941", "4 16 849", "8 18 806", "18 20 906", "16 21 877", "18 12 722", "18 19 737", "12 25 833", "2 22 780", "6 29 947", "12 27 918", "2 14 856", "4 26 919", "18 28 709", "4 13 945", "25 3 963", "0 9 828", "21 26 904", "14 24 866", "2 20 725", "10 23 931", "22 0 774", "9 5 952", "19 29 926", "2 26 966", "7 21 900", "12 10 947", "26 1 931", "25 26 737", "23 16 946", "0 3 898", "26 8 885", "24 29 759", "17 11 929", "7 4 854"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 34;
    vector<string> interestingStores = {"43769 49521 2963", "36985 85449 56102", "7161 43388 42515", "52949 56569 21322", "15153 70950 32430", "49229 60439 37353", "23043 58298 40901", "25840 47278 38553"};
    vector<string> roads = {"0 1 864", "1 3 952", "3 5 989", "3 4 823", "0 9 843", "3 7 802", "0 13 983", "5 15 726", "13 14 952", "14 2 722", "3 11 886", "3 23 775", "13 10 767", "9 18 756", "18 16 743", "16 17 890", "11 30 790", "4 26 982", "16 28 704", "10 25 707", "10 32 770", "9 20 896", "28 27 945", "24 4 996", "22 17 773", "31 20 886", "27 26 941", "0 14 855", "11 33 845", "1 16 890", "7 10 764", "29 18 733", "28 24 701", "4 17 870", "9 27 858", "5 26 992", "14 21 934", "29 7 824"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 50;
    vector<string> interestingStores = {"40198 91033 39514", "20273 59994 20324", "14597 57788 30196", "24928 80998 312", "53430 85830 37711", "8191 65441 7595", "44725 61783 26163", "29888 33318 23802", "54523 103396 42258", "2541 57201 53319", "59977 117312 16455", "1933 3890 7884", "19068 43994 52995", "39895 61822 7652"};
    vector<string> roads = {"0 1 859", "0 2 996", "0 5 986", "5 6 952", "1 7 987", "7 10 807", "10 3 854", "1 9 761", "3 17 891", "1 14 942", "9 16 843", "9 22 824", "1 19 899", "0 23 827", "17 11 727", "7 15 923", "6 33 904", "0 32 742", "9 26 813", "2 18 770", "9 37 705", "10 24 842", "16 45 905", "9 35 768", "9 40 751", "10 47 799", "9 25 922", "0 12 864", "25 48 749", "1 31 844", "10 27 953", "25 42 764", "3 4 900", "9 36 825", "2 21 747", "40 33 713"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 25;
    vector<string> interestingStores = {"4836 7994 54071", "18478 45781 40016", "42706 55059 56905", "7973 40388 54461", "33339 59361 31978", "48473 52117 60193", "26734 42053 50710", "23465 28672 31392", "15245 46761 3944"};
    vector<string> roads = {"0 1 905", "1 2 848", "2 3 713", "3 7 871", "1 9 841", "9 5 791", "7 11 765", "2 4 941", "4 10 987", "0 14 994", "7 6 1000", "4 15 704", "5 18 981", "0 20 861", "7 23 713", "3 12 835", "5 8 822", "23 16 753", "15 14 939", "13 17 749", "17 0 904", "5 6 885", "1 4 909", "3 24 704", "19 4 862", "19 1 937", "22 14 710", "8 9 933", "0 16 951", "6 9 827", "13 12 716", "24 21 942", "9 0 759", "8 15 793", "1 16 714", "22 0 933", "13 16 900", "13 5 981", "9 11 1000", "22 19 898", "4 9 903", "6 8 782", "11 10 794"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 25;
    vector<string> interestingStores = {"29214 89516 24450", "50931 104315 12603"};
    vector<string> roads = {"0 1 904", "0 2 834", "1 5 824", "2 4 875", "0 7 784", "5 3 979", "3 13 742", "0 8 911", "5 6 870", "0 11 985", "11 10 822", "4 16 875", "1 20 889", "2 12 757", "5 21 944", "12 22 881", "2 17 878", "22 9 762", "21 15 971", "12 8 829", "23 10 723", "11 21 850", "24 21 919", "3 17 915", "24 9 889", "11 24 839", "2 1 954", "23 21 832", "9 5 871", "11 6 913", "11 22 976", "20 17 976", "6 18 715", "1 12 940", "23 7 800", "20 0 920", "7 6 934", "24 17 704", "17 5 810", "17 12 974", "5 8 830", "7 18 755"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 43;
    vector<string> interestingStores = {"953 7152 47474", "19606 30743 43942", "22068 65083 14954", "29767 49674 28376", "13735 32403 60079", "19944 46808 13654", "20918 76604 3060", "55354 84287 9892", "50101 55683 38472", "38246 41404 6400", "42783 44857 19076", "7091 12433 44096", "53447 110980 41786", "39277 73372 49912"};
    vector<string> roads = {"0 1 745", "1 2 935", "2 4 817", "1 3 895", "3 8 895", "3 9 831", "2 5 792", "5 7 755", "5 12 716", "8 18 899", "0 14 825", "1 19 773", "14 24 735", "14 22 934", "12 27 745", "5 20 869", "18 33 841", "19 21 796", "5 30 966", "19 38 773", "8 11 794", "1 31 815", "5 36 744", "19 25 836", "18 40 983", "1 26 767", "19 29 790", "33 39 799", "0 10 766", "21 32 761", "14 15 747", "10 16 708", "19 37 755", "16 1 981", "41 21 982", "25 32 765", "31 25 868"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 28;
    vector<string> interestingStores = {"49985 100668 55150", "27093 50832 21613", "2974 55338 38636", "50825 84736 14323", "32177 77916 37512", "37111 62480 35649", "52114 109991 46554", "53956 61706 54869", "40100 92850 31644", "2640 25301 23649", "59287 73627 16188", "51806 96519 35165", "50521 70309 56933"};
    vector<string> roads = {"0 1 870", "0 3 837", "1 5 886", "0 2 950", "1 6 796", "1 11 815", "0 13 971", "3 14 801", "1 10 743", "14 8 995", "14 17 876", "11 19 907", "2 9 781", "10 26 957", "17 16 867", "1 18 942", "0 15 875", "19 25 810", "26 24 809", "14 7 767", "18 22 872", "18 15 832", "14 11 987", "7 11 939", "21 26 899", "27 12 812", "17 15 915", "4 25 735", "27 25 752", "17 9 979", "20 4 785", "5 22 721", "9 3 802", "24 10 760", "15 25 822", "16 7 734", "6 16 970", "4 18 732", "6 22 928", "12 19 889", "11 4 980", "14 26 895", "27 8 973"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 39;
    vector<string> interestingStores = {"14855 37765 60243", "58156 79183 54310", "52054 59575 11412", "29966 60602 49265", "36358 65934 34571", "24578 33377 11715", "52625 106855 34408", "29133 58852 34982", "42561 88894 19825", "41853 90493 60387", "26579 61305 45402", "58018 60732 41663", "46792 74623 19222"};
    vector<string> roads = {"0 1 761", "1 3 981", "0 2 959", "3 7 967", "7 9 700", "3 11 774", "1 10 942", "3 12 829", "12 16 812", "11 13 954", "10 8 728", "7 5 987", "0 24 734", "9 14 999", "16 25 987", "2 23 957", "24 31 840", "23 27 932", "8 6 809", "9 33 859", "13 37 995", "10 38 784", "5 22 742", "33 20 885", "11 34 738", "37 36 836", "20 15 719", "31 18 836", "15 16 885", "16 4 930", "21 0 923", "27 1 750", "28 0 956", "38 8 959", "13 10 707", "20 13 918", "14 36 885", "15 35 708", "23 29 760", "24 12 906"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 29;
    vector<string> interestingStores = {"14172 17405 6722", "54921 91565 31352", "50140 108918 25356"};
    vector<string> roads = {"0 1 702", "1 2 752", "1 4 874", "4 5 707", "5 9 845", "1 11 715", "0 6 886", "2 7 902", "2 14 912", "4 17 860", "7 12 770", "2 13 738", "7 10 878", "1 22 852", "2 21 864", "1 28 932", "11 23 873", "22 3 942", "6 18 894", "22 20 983", "21 25 825", "13 19 769", "4 15 829", "17 8 909", "13 14 894", "15 5 710", "13 1 759", "16 12 720", "20 8 865", "16 18 969", "14 20 741", "18 27 815", "12 18 777", "15 7 779", "14 26 998", "1 9 860", "2 19 805", "18 15 761", "18 13 821", "15 3 846"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 38;
    vector<string> interestingStores = {"9941 30752 35840", "26207 58116 51896", "60000 64014 39655", "30221 32482 24585", "21713 54722 9672", "35959 95919 23341", "1699 16036 24652", "58379 111450 2571", "13752 42762 47229", "60068 108305 47329"};
    vector<string> roads = {"0 1 744", "0 3 878", "3 4 924", "4 6 857", "0 9 854", "4 10 872", "3 5 907", "5 13 946", "9 15 859", "0 14 720", "6 17 731", "15 21 993", "14 2 883", "10 25 867", "21 23 774", "5 30 724", "21 33 773", "6 11 947", "23 36 851", "14 8 787", "21 35 975", "23 22 786", "15 19 723", "14 32 937", "36 12 959", "22 29 934", "30 34 978", "6 7 851", "29 7 859", "36 2 997", "10 33 759", "28 27 865", "13 7 791", "20 13 708", "19 21 748", "30 1 859", "28 11 896", "23 15 919", "29 18 929", "32 19 759"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 32;
    vector<string> interestingStores = {"34923 73259 23302", "35320 74562 5058"};
    vector<string> roads = {"0 1 993", "0 3 961", "1 5 892", "3 4 956", "5 9 941", "9 10 750", "9 11 745", "4 6 965", "0 12 779", "5 19 822", "6 7 750", "6 17 819", "0 22 776", "0 25 708", "9 23 857", "3 18 869", "1 8 869", "23 15 734", "1 26 904", "19 24 704", "15 30 939", "13 23 835", "31 8 717", "22 11 843", "17 20 810", "28 22 912", "5 27 877", "27 7 836", "25 29 871", "23 18 981", "28 12 944", "8 9 828", "28 3 960", "21 4 960", "21 24 870", "26 11 761"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 31;
    vector<string> interestingStores = {"59010 81637 14854", "13351 37165 8055", "40399 81056 49097", "23114 35538 35146", "17098 59791 46544", "49155 95693 26944", "49086 72766 31630", "52372 72544 46837", "737 29364 50453", "28680 81531 32506", "43054 64805 53961", "20703 23976 39296", "529 7192 51813"};
    vector<string> roads = {"0 1 922", "1 2 949", "1 5 720", "5 4 828", "0 9 982", "9 7 826", "5 8 898", "5 11 705", "9 15 896", "5 10 859", "10 21 901", "8 12 787", "5 18 773", "9 22 784", "9 13 791", "2 3 787", "1 16 968", "1 27 727", "0 20 952", "3 14 859", "3 30 791", "22 12 875", "12 14 997", "9 16 761", "12 5 745", "2 5 967", "11 17 758", "21 2 922", "0 21 736", "6 3 760", "8 0 886", "18 15 792", "16 22 807", "8 11 735", "13 16 895", "0 6 864", "11 30 858", "2 8 776"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 26;
    vector<string> interestingStores = {"54555 69603 46550", "1980 16936 17623", "51856 84015 13478", "15821 29152 5787", "14000 21723 4790", "13458 30335 14822"};
    vector<string> roads = {"0 1 741", "1 2 838", "0 3 890", "0 7 752", "1 8 753", "3 11 847", "2 4 833", "7 13 852", "3 6 885", "4 17 939", "3 9 976", "17 15 801", "6 20 800", "1 24 773", "4 16 733", "4 18 846", "4 22 777", "17 21 859", "15 12 902", "14 15 759", "20 9 998", "9 4 799", "11 22 934", "19 8 829", "15 13 951", "2 17 980", "10 16 982", "11 25 717", "18 11 930", "0 8 781", "23 1 850", "10 8 772", "1 14 951", "7 23 983", "6 12 833", "5 2 845", "12 23 935", "13 2 982", "19 17 781"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 48;
    vector<string> interestingStores = {"35599 60156 8807", "54725 65112 32423", "25459 51492 540", "51769 106226 38684", "11329 40851 45737", "32623 51429 29239", "26672 80058 3260", "26910 84764 5750", "58061 79558 29256", "47902 86180 41219", "23334 52958 52293", "204 8456 6386"};
    vector<string> roads = {"0 1 806", "0 3 885", "1 5 802", "0 4 763", "0 2 854", "5 7 727", "3 11 793", "2 13 732", "3 8 750", "8 18 700", "2 14 867", "8 9 942", "1 6 830", "2 27 902", "6 16 805", "14 12 884", "1 17 998", "0 32 732", "32 24 763", "1 29 745", "1 21 950", "4 30 831", "24 31 780", "27 39 826", "21 28 869", "24 44 781", "12 25 926", "7 22 736", "31 40 932", "28 37 901", "2 47 955", "12 26 940", "24 15 779", "16 33 837", "1 45 787", "4 42 934", "10 15 832", "23 19 878", "41 10 783"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 49;
    vector<string> interestingStores = {"22631 38212 18837", "30398 48353 49021", "54022 65864 27601", "60138 70716 12918", "19 17664 48695", "43151 68963 47605", "25379 70717 21930", "14680 34980 21867", "43095 91464 44334", "41142 83634 47561", "16199 65976 39466"};
    vector<string> roads = {"0 1 776", "0 3 947", "0 4 798", "3 7 962", "4 9 902", "7 2 759", "0 8 780", "1 11 929", "8 15 772", "0 19 872", "0 20 733", "9 6 927", "15 17 788", "2 5 921", "2 14 998", "4 26 848", "6 24 987", "7 28 718", "24 10 747", "3 37 830", "3 41 703", "37 32 967", "8 40 928", "19 25 730", "25 18 838", "17 48 836", "10 27 906", "32 43 995", "4 21 826", "43 47 786", "3 29 771", "40 38 786", "5 22 782", "9 13 779", "17 30 997", "18 33 962", "8 23 769", "6 36 943"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 40;
    vector<string> interestingStores = {"37508 55858 57470", "579 48639 20196", "51562 91627 6847", "16234 43115 1665"};
    vector<string> roads = {"0 1 898", "1 2 737", "2 4 982", "2 5 859", "1 7 958", "0 8 978", "0 12 927", "0 10 985", "12 3 789", "3 14 983", "5 18 821", "1 21 888", "1 20 762", "2 26 875", "21 11 895", "3 28 841", "11 24 983", "0 31 830", "28 19 836", "14 29 842", "4 13 826", "8 36 748", "20 15 771", "28 22 756", "18 25 753", "21 38 941", "2 30 772", "38 33 824", "30 23 903", "27 1 977", "22 20 889", "2 19 728", "12 9 773", "11 19 999", "13 5 903", "5 9 990", "3 34 785", "14 10 978", "19 10 819", "13 38 900"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 29;
    vector<string> interestingStores = {"57233 117425 412", "26668 46725 32022", "8478 35472 2325", "48022 93705 31463", "23807 82311 39073", "42200 45829 10416"};
    vector<string> roads = {"0 1 943", "0 3 743", "0 4 759", "0 6 887", "1 9 725", "0 2 947", "6 5 932", "0 14 921", "9 10 904", "4 18 929", "1 17 892", "10 23 873", "3 8 812", "0 12 860", "9 26 877", "9 27 821", "18 13 719", "0 24 883", "9 19 796", "1 25 970", "22 19 770", "14 7 985", "23 1 865", "21 20 989", "23 24 746", "7 28 826", "26 1 751", "20 18 779", "15 6 932", "7 25 854", "14 12 716", "17 8 875", "9 11 778", "21 0 750", "6 26 883", "23 7 705", "27 20 986", "10 8 780", "24 12 885", "23 14 988", "10 16 958"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 43;
    vector<string> interestingStores = {"55667 89232 14254", "57034 110822 47495", "48736 94129 10693", "43787 70889 10753", "30837 40636 41185", "59112 88226 48382", "28155 81312 34344", "19865 37410 27103", "25237 32723 42642", "47057 73621 35253", "46952 83615 53448", "47410 99371 12295", "46905 74761 15819", "7708 65122 4129", "30910 60842 52480", "15944 48222 13946"};
    vector<string> roads = {"0 1 719", "1 2 800", "2 5 746", "2 6 882", "2 8 744", "6 3 714", "0 11 924", "2 14 969", "8 9 894", "5 16 709", "3 15 989", "6 22 745", "6 13 774", "5 10 995", "0 20 727", "3 31 959", "31 33 807", "20 4 780", "5 19 909", "31 36 736", "6 18 705", "31 35 914", "16 24 719", "3 25 755", "22 37 857", "9 38 884", "24 26 709", "11 23 878", "35 28 983", "4 7 789", "35 40 704", "10 42 873", "5 17 762", "36 34 842", "23 2 990", "33 6 911", "38 1 939", "14 5 877"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 38;
    vector<string> interestingStores = {"46403 73309 34376"};
    vector<string> roads = {"0 1 986", "0 3 930", "0 5 905", "1 7 982", "0 9 962", "1 6 857", "6 12 717", "7 15 820", "3 4 975", "7 13 857", "3 11 705", "12 17 757", "7 18 901", "1 26 929", "5 8 786", "12 2 954", "9 32 952", "0 14 859", "9 22 844", "4 36 847", "32 24 723", "2 33 723", "36 20 754", "17 19 879", "4 16 761", "16 10 867", "15 28 943", "30 9 931", "33 23 924", "36 23 833", "22 10 905", "27 22 935", "37 2 833", "1 11 803", "34 30 881", "5 23 856", "37 27 818", "15 34 710"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 26;
    vector<string> interestingStores = {"38541 80159 14994", "6826 15375 54925", "19278 22240 47317"};
    vector<string> roads = {"0 1 889", "0 3 837", "0 2 886", "0 5 743", "2 4 785", "0 6 711", "5 9 950", "6 15 819", "1 17 863", "6 10 924", "9 20 716", "10 22 762", "5 11 793", "2 25 749", "0 7 935", "0 19 708", "17 8 731", "2 8 939", "18 17 981", "10 1 857", "15 21 820", "22 19 779", "16 24 757", "2 3 762", "16 19 765", "18 21 934", "5 20 763", "16 7 726", "8 4 784", "13 16 856", "6 25 929", "5 1 842", "14 18 967", "21 19 802", "0 23 713", "17 19 872", "9 10 808", "24 2 942", "16 15 805", "14 17 862"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 44;
    vector<string> interestingStores = {"2119 59703 12480", "41590 71889 22058", "57058 97868 2946", "30379 85826 44784", "9154 49374 5384", "3876 39738 38930", "9103 37516 44549", "7221 28723 60101", "51773 109639 14982", "27624 35124 46819", "40881 89388 54211", "13701 25692 59980", "24237 81229 12265", "698 32110 46770", "47879 73288 60294"};
    vector<string> roads = {"0 1 878", "1 2 947", "0 4 701", "4 5 769", "1 3 813", "4 8 828", "4 13 807", "0 11 855", "4 9 758", "5 18 996", "18 19 813", "5 21 985", "8 24 904", "21 12 715", "5 20 932", "13 28 865", "5 33 903", "12 7 918", "33 34 742", "12 39 859", "9 36 717", "21 16 731", "5 43 898", "7 42 756", "21 32 986", "12 26 904", "0 27 910", "20 35 915", "1 41 952", "9 37 850", "12 38 718", "35 29 939", "41 40 923", "26 34 719", "33 7 811", "5 31 714", "0 17 726", "22 3 722", "29 15 751"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 47;
    vector<string> interestingStores = {"51070 64529 42292", "21174 27447 41652", "58582 107001 24006", "7325 62153 15815", "55342 99790 58948", "11291 29347 53989", "1663 9511 40666", "1150 16788 15147"};
    vector<string> roads = {"0 1 777", "0 2 775", "1 5 774", "0 6 928", "6 8 789", "6 4 942", "0 11 706", "0 15 823", "1 16 719", "5 10 966", "11 19 723", "8 7 805", "7 21 724", "21 26 949", "11 23 836", "1 29 883", "5 3 881", "10 24 908", "0 32 887", "0 12 776", "2 22 723", "24 40 707", "40 39 843", "16 34 747", "21 46 788", "6 36 895", "16 45 788", "22 17 758", "3 41 982", "17 37 981", "17 18 973", "32 42 897", "23 25 788"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 33;
    vector<string> interestingStores = {"23835 66008 33950", "53798 76641 4017", "57919 60170 52543", "58051 76261 27408", "33999 66793 51169", "1819 24941 52668", "4588 29580 6997", "38348 67694 58314", "24457 69982 14951", "44033 69888 26563", "29689 31056 16149", "43392 76100 31732", "1521 25803 37454"};
    vector<string> roads = {"0 1 865", "1 2 718", "0 3 834", "2 5 987", "3 6 777", "1 4 791", "6 10 801", "2 15 718", "6 8 773", "10 11 882", "0 19 831", "2 13 958", "6 16 959", "11 20 923", "5 24 809", "10 28 998", "1 31 751", "13 18 767", "13 9 827", "16 22 906", "11 32 843", "19 26 798", "11 30 920", "22 8 928", "5 10 820", "6 5 934", "25 11 856", "16 13 846", "6 32 870", "2 7 789", "4 21 731", "13 3 878", "6 14 832", "4 32 723", "20 13 734", "21 14 783", "7 5 731", "3 1 814", "3 20 707"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 27;
    vector<string> interestingStores = {"54891 107459 58810", "40604 83347 28034", "15004 21108 40726", "37637 39826 50131", "43651 76419 22276", "23626 67797 54774", "26989 31535 8146", "54597 79886 34182", "49500 60566 58549", "17130 37195 5683", "48857 57404 1877"};
    vector<string> roads = {"0 1 815", "0 3 938", "1 5 795", "0 6 877", "1 8 996", "1 4 779", "3 9 724", "3 7 784", "6 17 904", "1 11 813", "0 18 734", "1 14 998", "4 13 946", "6 20 831", "20 26 706", "17 10 874", "5 19 936", "18 24 707", "5 22 890", "1 25 748", "6 16 720", "13 21 903", "15 18 867", "21 18 837", "23 26 973", "7 17 731", "23 12 776", "11 7 989", "3 16 899", "25 26 805", "3 5 776", "2 15 850", "2 0 879", "2 22 848", "1 10 747", "3 18 770", "19 25 1000", "1 6 800", "17 8 979", "12 11 949", "25 13 863", "17 5 803"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 27;
    vector<string> interestingStores = {"54910 61355 1927", "22430 28084 13533"};
    vector<string> roads = {"0 1 737", "0 3 908", "1 5 869", "3 2 867", "3 9 899", "9 8 977", "2 12 803", "2 13 877", "3 10 905", "9 7 889", "3 16 744", "5 20 881", "8 19 897", "7 23 787", "20 26 919", "2 25 826", "20 14 939", "14 24 806", "25 4 991", "17 2 886", "8 26 924", "16 18 709", "12 10 963", "10 23 864", "14 5 833", "14 17 810", "8 23 755", "23 6 716", "4 5 900", "5 21 726", "0 20 774", "2 19 827", "11 1 806", "3 21 875", "22 6 783", "9 0 973", "19 24 980", "25 19 707", "24 1 784", "8 16 821", "9 26 863", "14 7 950"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 25;
    vector<string> interestingStores = {"2866 24987 36044", "32349 39676 8697"};
    vector<string> roads = {"0 1 983", "0 2 758", "2 3 736", "1 5 704", "2 9 775", "5 6 876", "9 11 804", "9 13 908", "0 15 942", "0 16 801", "5 21 727", "3 18 759", "21 20 822", "11 22 870", "9 24 917", "18 10 860", "0 8 987", "10 17 885", "10 4 732", "5 23 832", "1 10 916", "22 1 999", "17 6 807", "11 3 926", "16 20 983", "7 9 981", "4 5 760", "24 22 721", "20 5 713", "2 22 905", "12 16 940", "5 8 889", "5 24 941", "21 19 975", "8 15 779", "21 2 836", "9 23 709", "24 16 897", "14 11 787", "15 20 937", "16 8 821"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 35;
    vector<string> interestingStores = {"35750 63134 29606", "2084 42938 14515", "46181 95673 51250", "23697 28640 7276", "2424 11558 21444", "24959 36297 16309", "58247 116207 42545", "9814 52404 10940", "38575 56344 6362", "32068 50210 41154", "32901 51139 1427"};
    vector<string> roads = {"0 1 781", "0 3 769", "1 2 897", "0 5 870", "2 6 876", "5 4 887", "1 10 926", "0 11 834", "6 13 818", "13 8 954", "8 7 733", "4 12 757", "12 21 886", "4 18 735", "1 20 914", "3 31 833", "20 19 816", "6 23 772", "23 15 837", "8 30 977", "2 22 778", "5 25 743", "23 14 776", "4 32 774", "11 33 878", "8 26 933", "30 27 843", "23 28 959", "34 6 762", "5 24 923", "2 18 735", "7 13 789", "32 29 848", "31 26 705", "31 14 792", "29 7 751", "13 22 767", "26 29 944", "8 16 838"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 32;
    vector<string> interestingStores = {"43045 58519 58733"};
    vector<string> roads = {"0 1 941", "1 2 826", "1 5 956", "2 4 912", "1 3 940", "0 8 754", "1 7 751", "1 9 881", "7 13 732", "1 19 911", "9 21 961", "9 23 872", "23 14 718", "3 25 702", "19 20 778", "5 30 815", "30 26 905", "20 28 848", "13 27 714", "21 10 886", "9 15 859", "3 17 776", "28 16 835", "13 28 814", "25 8 840", "27 1 867", "22 21 936", "5 16 765", "10 24 977", "22 31 810", "25 19 840", "14 6 985", "21 5 705", "14 30 852", "2 14 707", "9 24 821", "0 7 874", "16 4 727", "0 25 977", "16 25 852"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 34;
    vector<string> interestingStores = {"35550 62681 56230", "43664 96907 33013", "48141 77875 37859", "31044 71475 16054", "59820 116822 60125"};
    vector<string> roads = {"0 1 801", "1 2 840", "0 4 924", "0 6 871", "4 7 774", "4 11 714", "1 8 909", "8 15 872", "6 10 896", "10 9 905", "2 13 957", "2 14 950", "2 18 701", "1 3 705", "18 23 717", "10 12 901", "4 25 987", "8 24 917", "10 5 891", "9 33 943", "25 32 830", "8 30 934", "4 31 837", "24 15 739", "4 27 941", "8 28 739", "13 1 812", "22 3 846", "27 25 975", "4 26 836", "17 2 822", "16 13 929", "27 23 801", "10 22 898", "32 15 998", "19 29 913"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 45;
    vector<string> interestingStores = {"20192 54261 1566", "17890 35452 28421", "49684 95155 51579", "6881 12553 49036", "29534 79300 17067", "34470 50232 59331", "43177 54968 49425", "23743 45650 55481", "31811 44875 7059", "41358 79915 11678", "50677 53555 43552"};
    vector<string> roads = {"0 1 770", "0 3 880", "1 5 953", "1 2 767", "2 9 761", "3 6 746", "6 8 719", "9 7 790", "2 15 801", "5 19 941", "3 4 732", "3 13 792", "9 25 949", "0 24 893", "5 14 983", "6 11 860", "0 18 819", "14 23 857", "15 33 822", "0 37 713", "8 40 938", "18 27 701", "18 30 934", "13 31 916", "19 34 778", "13 39 729", "24 32 887", "37 26 829", "13 36 970", "5 17 765", "33 12 894", "25 21 896"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 38;
    vector<string> interestingStores = {"26548 52320 47283", "40136 57012 27537", "18870 48984 16435", "489 14196 10118", "46215 71355 57070", "18133 31043 23357", "47664 96040 33485", "20685 41963 38016", "17960 31633 9826", "37971 61150 10635", "34133 67251 19645", "48957 69856 25880", "6135 47804 29496"};
    vector<string> roads = {"0 1 904", "0 2 967", "2 3 850", "0 5 989", "0 6 881", "2 7 948", "7 8 867", "6 11 846", "2 15 761", "2 13 848", "0 16 994", "6 10 882", "5 23 850", "13 14 749", "13 26 981", "0 17 703", "14 30 966", "1 12 741", "13 20 817", "7 29 768", "11 31 841", "29 28 742", "5 35 714", "15 22 846", "12 33 804", "5 37 948", "13 25 810", "31 12 720", "19 2 774", "4 6 891", "33 5 966", "27 18 784", "17 27 955", "30 25 970", "19 8 770", "17 11 789", "2 1 833", "22 16 756", "1 15 887"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int N = 47;
    vector<string> interestingStores = {"8828 40405 5335", "26066 33324 34592", "37396 55903 52715", "58765 66173 41737", "46219 72810 5804", "42959 101786 55418", "59916 84016 57998", "11766 32443 13135"};
    vector<string> roads = {"0 1 839", "1 2 958", "0 3 836", "0 7 735", "3 8 991", "2 4 721", "7 9 850", "8 14 753", "4 16 748", "7 18 769", "0 6 787", "4 15 729", "2 20 745", "6 13 738", "6 12 740", "3 5 954", "5 28 825", "12 25 910", "8 22 779", "14 33 871", "3 32 882", "18 24 968", "6 45 982", "33 37 843", "20 43 936", "4 21 862", "24 26 908", "15 29 959", "43 44 792", "6 35 822", "7 19 997", "28 40 716", "26 23 815", "23 24 810"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int N = 47;
    vector<string> interestingStores = {"59390 87967 6513", "42202 82306 45416", "16013 39251 57053", "24894 83382 57174", "29593 44097 2481", "51670 89191 22152", "4743 38366 53738", "35668 43690 37422", "34042 55046 18830", "30850 89991 45969", "27461 85951 2720"};
    vector<string> roads = {"0 1 790", "0 3 875", "1 4 912", "0 2 746", "0 9 839", "9 11 970", "4 12 820", "4 15 984", "1 14 773", "2 5 921", "12 16 886", "9 18 849", "14 20 894", "12 23 980", "15 28 737", "16 19 771", "18 32 940", "23 24 911", "9 25 829", "12 27 984", "14 35 778", "2 29 920", "15 7 964", "16 6 757", "18 33 817", "27 45 960", "18 13 961", "12 30 908", "35 17 943", "4 8 883", "3 46 858", "13 42 819", "12 39 897", "2 44 937", "44 28 759"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int N = 50;
    vector<string> interestingStores = {"25705 80573 39537", "26170 48474 42358", "33216 89527 56665", "14249 67633 57462", "17567 72139 12054", "35783 68416 27059", "42182 72566 19626", "52938 106271 49080", "8265 34130 52093", "40349 63069 1716", "46842 52435 46391", "5309 54062 49872"};
    vector<string> roads = {"0 1 906", "0 3 718", "1 5 702", "5 6 981", "6 4 895", "4 10 846", "3 11 867", "4 12 840", "4 13 778", "10 15 861", "4 7 878", "3 23 776", "4 16 982", "11 8 723", "15 9 914", "3 14 954", "0 19 835", "4 25 712", "12 37 707", "10 30 728", "13 2 975", "9 18 880", "1 34 921", "13 47 705", "47 36 927", "7 39 757", "8 43 796", "6 24 879", "34 41 989", "4 46 954", "36 48 848", "3 21 882", "21 49 858", "39 20 893", "21 45 769"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int N = 36;
    vector<string> interestingStores = {"46993 68152 21574", "58846 68086 58838", "6664 51065 39538", "9527 69769 11417", "25928 59679 55062", "4957 47550 21773", "52073 52175 46363", "46672 70243 48228", "57019 62661 14712", "7431 38937 29090", "43062 62423 20571"};
    vector<string> roads = {"0 1 738", "0 3 973", "3 4 820", "3 5 819", "5 2 873", "5 8 938", "8 6 968", "5 10 785", "6 9 716", "9 18 953", "8 14 918", "9 21 855", "14 22 721", "2 12 894", "0 19 939", "22 31 751", "4 17 725", "22 35 823", "9 7 771", "31 16 723", "18 20 898", "22 11 918", "16 13 793", "31 27 868", "8 15 859", "19 30 704", "5 25 721", "18 32 733", "34 12 919", "13 28 960", "7 5 814", "33 32 947", "32 20 970", "12 11 711", "24 28 956", "25 26 703", "11 5 889", "23 34 714", "25 2 968", "25 7 935", "26 30 986", "1 3 924"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int N = 36;
    vector<string> interestingStores = {"5612 60248 49391", "33004 63491 1396", "52148 63071 6786", "16388 49397 32261", "39784 74550 5083", "5184 64678 48693", "318 38891 35023", "38527 76781 7695", "37564 78645 30639"};
    vector<string> roads = {"0 1 774", "0 3 724", "3 5 901", "1 4 866", "0 2 709", "1 6 927", "0 8 915", "0 14 726", "4 15 730", "8 13 723", "3 7 935", "13 17 925", "5 21 771", "3 20 838", "17 10 800", "5 29 970", "4 11 801", "11 19 780", "3 12 957", "8 27 886", "4 16 734", "17 28 921", "17 30 925", "2 33 863", "28 23 778", "20 7 733", "22 1 989", "6 4 878", "22 25 846", "3 33 729", "14 8 994", "12 8 725", "23 21 939", "13 28 894", "22 12 914", "19 29 972", "17 15 903"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int N = 35;
    vector<string> interestingStores = {"56933 94782 47039", "56859 115398 9829", "50822 87059 828", "28394 83178 57124", "3279 23937 36529", "47784 48322 53669", "47856 101842 41288", "44173 81006 53672", "503 21484 33632", "53866 68732 6373", "621 21470 13107", "37187 41864 31948", "43143 77153 47245", "34371 57763 3094", "51176 83767 39707", "37433 91027 20956"};
    vector<string> roads = {"0 1 774", "1 2 951", "0 4 853", "0 7 815", "7 5 805", "2 10 816", "0 6 949", "2 8 701", "6 9 930", "1 11 791", "2 15 891", "2 22 752", "6 18 848", "6 12 952", "8 16 934", "12 3 821", "6 26 712", "11 31 858", "11 33 864", "33 21 853", "21 30 779", "31 34 796", "18 20 868", "31 17 849", "12 24 949", "13 33 772", "1 4 818", "19 26 807", "1 31 822", "13 3 890", "8 7 737", "1 7 962", "13 9 907", "32 30 868", "28 12 930", "23 5 962"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int N = 45;
    vector<string> interestingStores = {"43130 59164 51637", "41816 88220 54616", "37307 73971 48170", "42667 56220 39415"};
    vector<string> roads = {"0 1 951", "0 3 725", "0 2 956", "0 6 893", "1 7 776", "1 10 892", "0 13 855", "0 12 935", "0 5 897", "13 15 812", "7 14 878", "15 18 909", "5 20 913", "12 26 871", "1 4 929", "15 24 896", "20 11 819", "20 22 872", "7 29 813", "24 32 757", "20 19 993", "22 30 955", "5 17 978", "12 33 760", "13 34 888", "1 39 795", "7 31 881", "5 28 895", "12 41 941", "33 21 991", "24 43 893", "29 16 942", "20 25 891", "42 4 861", "27 24 717"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int N = 49;
    vector<string> interestingStores = {"8822 19280 32171", "37970 80963 51462", "14738 37399 10639"};
    vector<string> roads = {"0 1 756", "0 3 956", "1 2 982", "3 4 957", "1 7 783", "3 11 995", "0 13 721", "4 10 897", "1 5 825", "3 12 928", "2 20 985", "1 8 982", "1 25 713", "1 24 706", "0 22 961", "0 9 782", "11 6 927", "0 28 984", "13 18 705", "22 19 945", "11 27 927", "8 34 948", "7 17 977", "12 14 803", "4 37 784", "4 48 769", "14 42 728", "48 31 916", "14 35 925", "12 32 805", "35 38 889", "0 46 977", "12 36 750", "9 44 750", "32 41 784", "9 47 884", "48 40 999", "9 23 734", "31 43 859", "36 33 799"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int N = 38;
    vector<string> interestingStores = {"16640 76566 18045", "7209 41988 48097", "17944 52174 21707", "44321 80557 35006", "27586 58748 25799", "2726 39128 37971", "56623 93836 53400", "17148 68948 14739", "3933 19005 12707", "13404 20482 40652", "48101 73686 20534"};
    vector<string> roads = {"0 1 996", "1 2 915", "2 3 836", "1 5 760", "3 6 974", "5 7 947", "2 8 914", "0 13 910", "13 16 713", "0 9 769", "1 15 921", "8 14 833", "3 21 804", "9 23 967", "15 4 969", "7 20 970", "14 29 897", "23 10 740", "5 37 776", "8 28 949", "2 12 705", "8 31 875", "28 26 923", "0 36 747", "8 32 837", "23 19 849", "21 22 994", "35 13 969", "6 25 928", "29 32 895", "0 31 713", "35 22 896", "12 24 754", "20 30 894", "10 11 822", "11 25 906", "36 32 774", "32 5 887", "22 3 840"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int N = 35;
    vector<string> interestingStores = {"14293 71806 48406", "22160 31025 4470", "13298 21786 6854"};
    vector<string> roads = {"0 1 914", "0 2 882", "1 3 894", "1 4 792", "1 9 973", "2 10 801", "3 11 714", "3 12 721", "12 14 874", "9 17 725", "3 13 907", "12 21 954", "14 6 959", "21 24 797", "2 15 835", "0 31 914", "11 26 886", "14 29 866", "13 18 858", "21 23 754", "10 7 808", "7 19 756", "13 32 834", "7 25 716", "1 27 842", "26 25 751", "31 7 974", "0 29 713", "18 28 893", "10 17 771", "28 13 907", "9 6 993", "28 24 794", "8 25 922", "25 13 807", "25 21 762"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int N = 29;
    vector<string> interestingStores = {"57263 90058 20293", "58930 64722 17104", "18001 32525 13960", "27981 39290 16159", "9991 57007 27684", "40363 65826 58200"};
    vector<string> roads = {"0 1 735", "1 3 881", "1 5 860", "0 7 991", "0 4 711", "5 10 763", "1 8 911", "5 14 849", "8 15 852", "3 2 823", "2 16 809", "14 6 848", "15 12 836", "12 20 888", "0 28 749", "20 24 778", "8 19 769", "16 13 777", "1 25 833", "1 11 761", "0 22 892", "18 27 837", "10 0 764", "5 19 951", "15 26 985", "25 10 759", "8 9 707", "10 22 721", "8 20 862", "12 11 921", "8 3 831", "6 24 704", "9 3 927", "9 28 704", "23 20 936", "14 28 798", "18 11 711", "21 5 835", "11 3 910", "24 5 707", "11 20 953", "6 12 923"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int N = 26;
    vector<string> interestingStores = {"35579 47193 34456", "50087 85138 38866"};
    vector<string> roads = {"0 1 899", "0 2 876", "0 5 889", "2 7 913", "1 9 958", "0 3 979", "2 13 971", "2 6 906", "6 14 987", "7 19 958", "2 16 751", "7 23 887", "16 21 747", "23 25 800", "25 8 1000", "3 12 738", "3 4 780", "14 20 845", "3 11 901", "9 24 744", "4 17 778", "9 14 805", "21 17 996", "24 0 856", "17 24 740", "18 21 762", "21 2 1000", "21 6 881", "6 13 793", "13 15 926", "18 20 780", "0 7 876", "13 0 981", "9 5 959", "18 13 809", "21 9 800", "22 6 785", "21 7 735", "2 23 721", "4 5 718", "15 17 868"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int N = 33;
    vector<string> interestingStores = {"8536 37827 32455", "56392 88082 60183", "4668 31748 32238", "16306 65532 45043", "54828 108318 12755", "4571 24764 1635", "49568 91619 6034", "10758 42137 49014"};
    vector<string> roads = {"0 1 968", "0 3 809", "1 5 838", "5 6 850", "0 2 976", "5 9 829", "2 13 733", "0 4 911", "9 16 726", "6 17 738", "0 21 729", "1 7 829", "13 19 819", "2 8 965", "8 28 925", "0 10 967", "10 15 907", "10 11 853", "21 18 800", "6 20 844", "1 22 826", "15 29 796", "10 30 741", "8 11 754", "25 16 804", "27 32 754", "17 22 748", "12 27 895", "18 16 827", "4 32 825", "0 19 936", "31 20 807", "16 31 755", "27 0 899", "4 29 822", "14 19 701", "29 12 855", "3 17 865", "23 29 951", "3 29 864", "1 10 848"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int N = 40;
    vector<string> interestingStores = {"40492 62226 6120", "15725 25475 40029", "32822 70021 36840", "6183 24638 19707"};
    vector<string> roads = {"0 1 963", "1 3 942", "3 5 794", "3 7 884", "5 4 815", "5 9 885", "5 10 723", "10 2 877", "9 15 913", "2 19 889", "1 16 930", "7 22 1000", "15 18 732", "9 13 972", "1 23 847", "15 31 844", "31 20 868", "22 30 783", "10 33 900", "2 11 784", "2 38 716", "38 24 996", "38 17 971", "0 37 901", "15 21 770", "24 8 702", "23 12 737", "10 32 843", "16 39 778", "23 26 870", "1 11 736", "33 21 707", "4 12 910", "8 38 851", "36 22 761", "9 6 919", "15 19 893", "36 12 949"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int N = 32;
    vector<string> interestingStores = {"4924 20837 6687", "16823 37622 4893", "47597 100511 42079", "57398 98939 47723", "43447 98302 19288", "13538 70513 44675", "37216 90708 8602", "53657 61508 31087"};
    vector<string> roads = {"0 1 838", "0 3 926", "0 4 1000", "3 2 802", "3 9 876", "9 6 808", "2 7 943", "7 14 733", "0 13 959", "9 11 934", "11 8 769", "8 16 891", "3 23 877", "7 24 705", "0 15 769", "13 29 777", "23 22 768", "11 19 731", "7 12 763", "4 18 925", "3 5 772", "5 28 710", "28 20 759", "1 26 918", "5 17 874", "11 17 757", "22 29 981", "10 14 710", "20 25 964", "26 25 871", "15 21 949", "1 29 891", "21 10 863", "12 11 733", "14 12 860", "14 25 810", "9 10 765", "0 27 1000", "28 9 812", "22 31 994", "15 3 851", "7 17 946", "31 29 754", "1 30 765"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int N = 27;
    vector<string> interestingStores = {"22949 78820 39159", "9695 63436 14184", "18076 53320 56051", "29958 43216 55381", "17213 71923 46826", "42846 59252 18464", "4084 60146 42341", "50835 103520 13091", "17123 41646 7921", "14927 54172 25017", "49396 75187 33813", "10308 53064 52208", "17724 41586 19586", "4180 29507 10448", "24581 79119 54528"};
    vector<string> roads = {"0 1 767", "1 3 781", "1 2 873", "2 5 868", "2 6 730", "0 4 889", "2 9 947", "2 15 720", "15 10 824", "9 8 969", "3 16 800", "16 20 846", "10 21 803", "21 19 967", "9 25 808", "0 12 923", "15 26 736", "9 13 816", "13 14 852", "10 24 735", "16 2 826", "3 8 742", "26 3 992", "23 0 805", "14 10 818", "6 21 775", "6 16 808", "21 16 732", "11 4 955", "17 7 706", "8 0 829", "6 19 767", "16 24 706", "1 7 870", "17 2 848", "6 0 746", "1 19 931", "16 14 943", "6 18 712", "2 0 747", "18 14 957"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int N = 45;
    vector<string> interestingStores = {"19197 56904 1803", "41903 63552 40411", "6813 62565 46825", "17084 34201 43600", "38291 98514 26339", "6474 20230 43921", "39043 89841 26386", "54103 111192 50142", "20498 56181 45429", "40700 91542 34761", "16324 39959 53463", "38450 39720 56848"};
    vector<string> roads = {"0 1 995", "0 2 792", "1 5 900", "2 6 820", "2 4 818", "6 11 798", "0 8 787", "1 10 978", "6 12 984", "5 19 707", "2 9 939", "5 7 859", "5 21 741", "7 15 991", "9 28 815", "10 17 701", "28 31 923", "12 34 972", "15 3 947", "4 14 988", "11 29 806", "14 42 889", "0 16 982", "19 24 941", "31 44 878", "3 22 783", "4 26 989", "24 18 994", "4 36 954", "24 35 735", "16 43 765", "12 37 977", "0 23 740", "41 27 948", "22 40 996", "43 34 889"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int N = 31;
    vector<string> interestingStores = {"59898 70370 26102", "47281 66016 50886", "25301 41638 28514"};
    vector<string> roads = {"0 1 998", "1 3 780", "1 4 747", "0 7 898", "7 9 996", "1 10 748", "7 2 755", "4 6 801", "6 8 971", "9 17 771", "8 15 812", "17 18 971", "7 5 848", "0 21 868", "4 28 825", "9 20 785", "5 26 705", "7 29 997", "10 16 856", "20 27 996", "26 25 742", "27 23 819", "7 12 977", "14 30 737", "10 14 916", "25 23 985", "17 24 900", "23 10 877", "10 7 925", "29 1 920", "1 30 934", "19 4 841", "29 6 833", "1 16 806", "9 22 994", "3 10 956", "15 20 967", "11 25 986"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int N = 30;
    vector<string> interestingStores = {"30818 60483 56927", "18729 78891 48499", "8883 14272 57957", "1228 40229 18399", "37007 48575 10572", "34721 53320 59164", "39116 44105 37193", "16287 57874 24453", "58421 61817 17979", "151 53807 9471", "21972 49802 19788", "5322 16659 59509", "40771 80232 40606", "51817 52042 46217", "16405 74147 20239", "56702 107476 34897"};
    vector<string> roads = {"0 1 978", "1 2 853", "1 5 963", "0 3 922", "2 4 991", "1 7 992", "4 13 889", "7 15 965", "2 10 967", "15 6 943", "10 20 954", "10 19 804", "6 24 962", "20 11 816", "1 28 975", "7 22 765", "28 27 957", "3 26 781", "7 21 796", "7 16 775", "1 8 860", "11 9 912", "25 7 905", "23 24 828", "9 1 878", "9 20 804", "10 4 718", "24 7 762", "27 5 983", "3 15 747", "3 28 914", "10 23 946", "24 0 720", "0 2 783", "21 13 826", "26 22 718", "17 24 926", "3 20 848"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int N = 36;
    vector<string> interestingStores = {"43945 45908 40696", "8794 27327 34323", "38338 51744 6900", "58861 93692 47300", "26866 78355 58000", "10435 28310 37688", "32941 48531 9950", "5655 6695 34571", "17375 61035 21640", "17677 76371 32739", "48148 78898 38443", "7727 55574 50779", "46017 52253 47507", "36058 39059 17874", "7288 26598 22909"};
    vector<string> roads = {"0 1 917", "0 3 892", "1 2 757", "2 7 859", "3 4 723", "0 5 732", "7 10 968", "7 8 806", "5 17 797", "5 13 980", "5 14 844", "5 20 735", "14 21 992", "5 23 969", "1 6 915", "7 12 994", "6 16 887", "0 11 1000", "4 18 761", "1 25 924", "0 30 785", "21 28 940", "6 9 764", "3 27 773", "10 15 770", "13 34 870", "34 26 785", "30 11 938", "6 23 846", "26 11 808", "14 18 879", "11 24 763", "27 21 800", "6 2 900", "4 21 794", "11 3 960", "19 18 804", "6 17 814", "35 22 975"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int N = 33;
    vector<string> interestingStores = {"14372 45279 45310", "31359 86638 53416", "19506 41082 47105", "9829 48837 27290", "59199 68048 16775", "11553 31094 56522", "38164 54671 13327", "52488 104985 27000", "35468 66327 49470", "8358 27510 15874", "24282 43407 2570"};
    vector<string> roads = {"0 1 732", "1 2 959", "1 4 858", "4 6 936", "1 5 742", "6 8 911", "6 12 715", "8 9 902", "8 17 955", "12 11 790", "4 21 740", "2 20 911", "12 16 786", "1 3 726", "3 19 792", "5 29 873", "16 25 928", "5 24 733", "21 7 879", "29 18 833", "24 10 757", "2 26 705", "1 23 728", "23 31 795", "19 13 705", "21 18 927", "18 28 1000", "6 32 768", "24 18 989", "15 0 982", "32 23 957", "15 26 911", "26 21 836", "5 19 722", "31 16 930", "4 11 959", "14 29 739", "31 29 922", "32 8 804", "14 26 890", "18 4 880"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int N = 40;
    vector<string> interestingStores = {"31402 77421 25380"};
    vector<string> roads = {"0 1 791", "1 2 870", "0 3 811", "0 4 869", "2 6 933", "3 9 721", "6 5 917", "9 12 874", "2 17 859", "17 19 757", "9 18 784", "19 10 831", "10 22 766", "3 15 720", "9 21 729", "3 23 890", "17 32 799", "17 20 706", "9 13 869", "15 38 937", "18 35 788", "22 11 943", "5 37 849", "32 25 882", "38 34 967", "17 36 800", "18 33 876", "32 16 928", "23 29 707", "36 24 937", "34 28 867", "28 4 976", "8 30 926", "1 9 837", "1 26 904", "4 27 988", "11 25 977", "28 24 868", "0 9 918"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int N = 33;
    vector<string> interestingStores = {"25398 30199 21216", "48769 105456 5816", "24863 69992 45930", "44251 96257 6140"};
    vector<string> roads = {"0 1 947", "1 3 995", "0 5 901", "5 4 757", "4 6 884", "0 2 806", "6 13 926", "1 14 949", "13 16 893", "2 11 938", "11 21 954", "3 7 806", "16 19 836", "6 26 867", "11 17 961", "21 30 843", "16 31 713", "19 8 961", "4 22 737", "14 23 960", "11 29 773", "5 32 743", "23 25 745", "22 10 752", "7 2 828", "11 22 842", "26 0 813", "28 17 829", "21 22 876", "23 11 788", "27 31 715", "11 26 970", "26 21 976", "18 12 856", "13 18 768", "15 3 869", "26 19 929", "16 23 820"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int N = 36;
    vector<string> interestingStores = {"50787 111140 7265", "34629 91595 47511", "17985 20218 6227", "57033 70475 9378", "13484 52145 20367", "49741 50835 54687", "37988 53565 36465", "4794 20433 4198", "42754 56190 37768", "52561 57611 11529", "45262 88022 7199", "28057 30127 683", "28781 56187 14826", "2432 24162 59199", "38174 70300 38903"};
    vector<string> roads = {"0 1 864", "1 2 985", "0 3 786", "3 6 927", "3 4 716", "6 7 981", "2 5 754", "2 13 924", "6 9 936", "2 16 721", "7 20 845", "7 14 983", "7 11 737", "2 19 839", "6 25 791", "16 8 885", "11 12 838", "9 18 884", "2 17 952", "11 30 887", "16 27 968", "11 32 809", "11 22 983", "1 35 761", "27 26 803", "6 24 981", "6 33 928", "29 10 917", "35 10 995", "22 12 978", "35 29 814", "0 30 717", "23 33 714", "9 4 700", "6 16 751", "6 4 830"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int N = 43;
    vector<string> interestingStores = {"7258 30660 54628", "21079 46137 19035", "56851 63692 25279", "40830 48327 15270", "44311 62953 9841", "58135 94546 5386", "36402 75139 12649", "32057 42784 27704", "19392 75794 50023", "3807 55840 53943", "44562 93480 56744", "14816 27685 9432"};
    vector<string> roads = {"0 1 725", "0 3 774", "1 4 962", "4 6 920", "0 8 871", "6 7 829", "6 12 976", "3 9 920", "3 5 813", "7 18 799", "3 14 919", "18 19 738", "7 23 925", "19 2 857", "18 21 886", "9 27 991", "0 33 723", "2 22 1000", "21 11 749", "21 30 802", "8 29 959", "19 36 991", "2 20 830", "9 28 887", "36 31 826", "30 34 777", "11 38 754", "36 25 766", "27 41 787", "19 37 779", "28 32 809", "1 35 769", "25 12 992", "35 34 917", "24 38 716", "17 37 904", "32 39 846", "38 28 768", "35 4 986"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int N = 38;
    vector<string> interestingStores = {"33035 63997 58328", "14123 72521 48756", "22019 82087 23750", "28376 62659 21087", "43436 46285 27425", "58495 96954 33217", "10743 32566 10901", "57899 110377 46552", "57935 76928 4240", "50342 58513 19", "17050 73027 1318", "26170 38764 55790", "32674 83160 724", "20170 70748 53384", "19189 58261 49277"};
    vector<string> roads = {"0 1 874", "1 2 750", "1 3 921", "3 4 920", "2 9 888", "2 8 989", "4 12 783", "2 5 748", "9 11 896", "3 14 717", "12 7 977", "1 22 734", "11 17 958", "12 20 981", "0 13 888", "5 23 982", "7 29 732", "1 24 875", "23 21 763", "4 33 770", "8 30 701", "21 26 824", "0 15 784", "30 36 809", "21 25 718", "20 35 723", "33 6 761", "17 7 740", "4 14 882", "8 37 708", "11 23 879", "8 25 973", "2 35 855", "13 27 822", "23 2 774", "1 27 731", "11 20 726"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int N = 44;
    vector<string> interestingStores = {"13555 41159 4171", "20954 71208 2175", "29670 33609 44152", "32427 47914 13159", "6232 29372 31519", "5541 47269 59792", "1596 6074 38840", "26771 58679 4001", "49280 108160 1888", "32056 56397 43784", "12750 59252 13491", "55517 114598 42176", "52727 100662 43490", "12869 45497 7860", "56102 114736 7028", "11413 51142 50926"};
    vector<string> roads = {"0 1 898", "1 2 943", "0 4 883", "4 5 707", "2 8 874", "0 11 756", "5 9 869", "8 15 830", "11 12 960", "2 6 970", "11 20 890", "11 14 894", "14 19 945", "9 23 790", "2 25 983", "12 22 847", "4 21 701", "22 10 990", "9 34 816", "14 16 946", "1 24 737", "11 7 992", "24 40 972", "6 13 758", "16 43 985", "0 29 769", "29 38 799", "0 35 716", "35 3 768", "11 37 905", "20 31 821", "28 41 848", "11 23 930", "30 31 706", "37 30 878", "4 1 742", "9 1 894"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int N = 37;
    vector<string> interestingStores = {"56040 99178 22071", "42547 44895 41994", "654 54594 40256", "29444 32731 24191", "21300 68959 55968", "10473 27165 2460", "59418 118023 3315", "3877 55303 42136", "29541 46241 52784", "112 34213 8503", "34590 81003 42054"};
    vector<string> roads = {"0 1 773", "0 2 757", "2 4 858", "2 5 940", "2 3 815", "5 11 947", "2 7 826", "7 14 963", "11 8 839", "5 15 941", "3 10 755", "5 6 888", "8 20 732", "20 18 928", "14 23 793", "1 12 838", "3 31 978", "0 34 869", "6 16 746", "1 28 791", "7 29 902", "0 30 807", "6 27 811", "8 13 880", "0 35 870", "5 17 982", "29 25 970", "11 26 700", "18 2 717", "12 36 967", "26 16 935", "33 3 909", "8 24 726", "21 24 890", "12 26 740", "18 14 839", "18 34 968"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 27;
    vector<string> interestingStores = {"5160 17406 1872", "43205 65983 21741", "40708 71807 40268", "48021 66074 3447", "5681 11200 54172", "28683 45051 51036", "17522 59017 48699", "4068 47920 3736"};
    vector<string> roads = {"0 1 958", "0 3 727", "1 5 819", "0 6 781", "0 4 890", "5 10 805", "4 7 879", "4 8 726", "8 13 844", "13 12 844", "7 2 728", "10 21 936", "0 25 874", "2 26 943", "7 11 914", "1 24 845", "0 19 847", "0 17 867", "17 18 728", "10 14 997", "19 22 905", "1 21 834", "13 14 762", "13 26 807", "11 9 731", "26 11 754", "14 6 967", "11 10 891", "0 16 931", "21 18 857", "8 23 960", "6 18 771", "22 2 772", "23 16 702", "19 25 856", "11 5 829", "4 18 865", "12 7 800", "23 11 846", "0 24 986", "10 17 992", "20 16 972", "8 15 752"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int N = 16;
    vector<string> interestingStores = {"55 599991 99", "88 599918 16", "90 599938 3", "50 599969 4", "47 599974 6", "86 599915 30", "33 599991 29", "97 599921 10", "91 599986 57", "63 599937 41", "6 599941 74", "50 599924 57", "36 599978 76", "80 599994 75", "19 599907 27", "66 599983 68"};
    vector<string> roads = {"0 1 1", "1 2 1", "2 3 1", "3 4 1", "4 5 1", "5 6 1", "6 7 1", "7 8 1", "8 9 1", "9 10 1", "10 11 1", "11 12 1", "12 13 1", "13 14 1", "14 15 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int N = 16;
    vector<string> interestingStores = {"522 3534 123", "352 555 12", "314 415 64", "3453 5645 3242", "122 346 454", "6666 6667 342", "454 2341 234", "123 456 789", "313 1991 2013", "5 19 2013", "525 625 123", "419 518 6969", "551 643 112", "441 700 123", "591 696 137", "419 518 18"};
    vector<string> roads = {"0 1 12", "1 2 3", "2 3 23", "3 4 34", "4 5 21", "5 6 11", "6 7 11", "7 8 15", "8 9 10", "9 10 5", "10 11 5", "11 12 5", "12 13 5", "13 14 5", "14 15 5"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int N = 50;
    vector<string> interestingStores = {"0 1 1"};
    vector<string> roads = {"0 1 100"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int N = 50;
    vector<string> interestingStores = {"143 1560 45", "882 11205 99", "652 6352 22", "558 28451 77", "390 11103 76", "601 21605 11", "870 15559 62", "402 15658 90", "424 11010 3", "183 27272 86", "427 24185 18", "833 5003 33", "155 17345 22", "977 3346 30", "693 11249 26", "435 7877 50"};
    vector<string> roads = {"41 17 134", "0 19 124", "28 8 162", "14 5 145", "31 27 161", "41 45 142", "27 36 191", "4 2 153", "42 32 21", "16 18 95", "47 26 171", "38 19 112", "17 49 35", "44 3 11", "22 33 73", "14 41 111", "3 18 147", "44 12 157", "37 9 123", "41 29 178", "16 35 190", "42 38 106", "40 42 64", "48 46 5", "40 29 170", "0 6 101", "43 48 29", "23 34 154", "16 26 131", "8 44 39", "26 23 137", "38 18 82", "33 15 39", "8 4 130", "27 6 73", "36 21 145", "24 22 70", "40 11 36", "5 24 31", "30 7 191", "7 37 57", "37 3 183", "22 46 106", "30 13 168", "10 9 24", "20 46 21", "35 1 5", "9 39 102", "25 33 69"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int N = 4;
    vector<string> interestingStores = {"140 141 1", "20 21 10", "10 40 20", "0 10 5"};
    vector<string> roads = {"0 1 70", "1 2 10", "2 3 5"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int N = 50;
    vector<string> interestingStores = {"96 604763 201", "76 604782 599", "35 604789 707", "45 604709 781", "34 604731 485", "87 604730 67", "22 604705 864", "62 604742 511", "52 604774 66", "95 604729 94", "80 604759 843", "62 604708 466", "72 604796 894", "26 604766 606", "83 604730 773", "15 604744 553"};
    vector<string> roads = {"0 1 94", "1 2 18", "2 3 22", "3 4 100", "4 5 97", "5 6 98", "6 7 39", "7 8 2", "8 9 88", "9 10 74", "10 11 85", "11 12 32", "12 13 89", "13 14 52", "14 15 40", "15 16 64", "16 17 84", "17 18 52", "18 19 64", "19 20 85", "20 21 6", "21 22 84", "22 23 11", "23 24 8", "24 25 21", "25 26 38", "26 27 46", "27 28 40", "28 29 12", "29 30 57", "30 31 57", "31 32 86", "32 33 72", "33 34 83", "34 35 79", "35 36 67", "36 37 9", "37 38 97", "38 39 88", "39 40 65", "40 41 74", "41 42 81", "42 43 17", "43 44 60", "44 45 99", "45 46 3", "46 47 58", "47 48 37", "48 49 41", "49 38 67"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int N = 4;
    vector<string> interestingStores = {"5 6 1", "5 16 1", "1 5 11"};
    vector<string> roads = {"0 1 11", "1 2 5", "2 3 3", "3 0 2"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 50;
    vector<string> interestingStores = {"10 20 11", "10 20 11"};
    vector<string> roads = {"49 0 1", "49 1 1", "0 1 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int N = 3;
    vector<string> interestingStores = {"0 100 1"};
    vector<string> roads = {"0 1 10", "1 2 10"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int N = 2;
    vector<string> interestingStores = {"10 11 10", "1 2 10"};
    vector<string> roads = {"0 1 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int N = 50;
    vector<string> interestingStores = {"109588 368232 20485", "314584 364073 20485", "297785 311146 11455", "277494 363216 20485", "112823 284934 20485", "102573 268088 20485", "157705 343721 20485", "8988 357582 20485", "138283 530421 20485", "221983 492327 20485", "16618 252014 20485", "78804 288688 20485", "8410 199798 20485", "150774 468369 20485", "32552 420345 20485", "224072 441206 20485"};
    vector<string> roads = {"4 25 3464", "4 18 10321", "16 41 4833", "28 19 8339", "23 43 6476", "25 40 13904", "49 1 6222", "40 17 3412", "1 7 2223", "32 17 18406", "8 25 18246", "19 20 3520", "23 2 5045", "40 22 16565", "44 16 11519", "10 24 2355", "45 8 4930", "43 39 11455", "9 31 1058", "10 15 17438", "11 20 5011", "14 33 9816", "40 39 14770", "43 4 18766", "41 24 8774", "7 12 17433", "0 40 5495", "28 8 6906", "49 37 16834", "33 29 10546", "31 35 3641", "34 14 20466", "25 10 6277", "14 31 18050", "49 28 4664", "25 43 6064", "48 5 18775", "36 20 18555", "29 26 6182", "35 25 5120", "23 4 18486", "17 13 14500", "5 27 17580", "39 45 12930", "44 41 2004", "4 36 16151", "32 7 4069", "26 5 10840", "10 6 931", "35 6 12955"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int N = 2;
    vector<string> interestingStores = {"0 1 100", "0 1 100"};
    vector<string> roads = {"0 1 10"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int N = 2;
    vector<string> interestingStores = {"100 101 1", "0 1 1"};
    vector<string> roads = {"0 1 100"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int N = 50;
    vector<string> interestingStores = {"0 600000 100", "0 600000 200", "0 600000 300", "0 600000 400", "0 600000 500", "0 600000 600", "0 600000 700", "0 600000 800", "0 600000 900", "0 600000 1000", "0 600000 1100", "0 600000 1200", "0 600000 1300", "0 600000 1400", "0 600000 1500", "0 600000 1600"};
    vector<string> roads = {"0 1 1", "1 2 1", "2 3 1", "3 4 1", "4 5 1", "5 6 1", "6 7 1", "7 8 1", "8 9 1", "9 10 1", "10 11 1", "11 12 1", "12 13 1", "13 14 1", "14 15 1", "15 16 1", "16 17 1", "17 18 1", "18 19 1", "19 20 1", "20 21 1", "21 22 1", "22 23 1", "23 24 1", "24 25 1", "25 26 1", "26 27 1", "27 28 1", "28 29 1", "29 30 1", "30 31 1", "31 32 1", "32 33 1", "33 34 1", "34 35 1", "35 36 1", "36 37 1", "37 38 1", "38 39 1", "39 40 1", "40 41 1", "41 42 1", "42 43 1", "43 44 1", "44 45 1", "45 46 1", "46 47 1", "47 48 1", "48 49 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int N = 50;
    vector<string> interestingStores = {"0 100000 1000", "0 100000 1000", "0 100000 1000", "0 100000 1000", "0 100000 1000", "0 100000 1000", "0 100000 1000", "0 100000 1000", "0 100000 1000", "0 100000 1000", "0 100000 1000", "0 100000 1000", "0 100000 1000", "0 100000 1000", "0 100000 1000", "0 100000 1000"};
    vector<string> roads = {"0 1 1000", "1 2 1000", "2 3 1000", "3 4 1000", "4 5 1000", "5 6 1000", "6 7 1000", "7 8 1000", "8 9 1000", "9 10 1000", "10 11 1000", "11 12 1000", "12 13 1000", "13 14 1000", "14 15 1000", "15 16 1000", "16 17 1000", "17 18 1000", "18 19 1000", "19 20 1000", "20 21 1000", "21 22 1000", "22 23 1000", "23 24 1000", "24 25 1000", "25 26 1000", "26 27 1000", "27 28 1000", "28 29 1000", "29 30 1000", "30 31 1000", "31 32 1000", "32 33 1000", "33 34 1000", "34 35 1000", "35 36 1000", "36 37 1000", "37 38 1000", "38 39 1000", "39 40 1000", "40 41 1000", "41 42 1000", "42 43 1000", "43 44 1000", "44 45 1000", "45 46 1000", "46 47 1000", "47 48 1000", "48 49 1000", "49 0 1000"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int N = 2;
    vector<string> interestingStores = {"5 6 5", "100 101 1"};
    vector<string> roads = {"0 1 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int N = 2;
    vector<string> interestingStores = {"100 110 10", "100 110 10"};
    vector<string> roads = {"0 1 20"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int N = 50;
    vector<string> interestingStores = {"1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1"};
    vector<string> roads = {"49 0 1", "49 1 1", "49 2 1", "49 3 1", "49 4 1", "49 5 1", "49 6 1", "49 7 1", "49 8 1", "49 9 1", "49 10 1", "49 11 1", "49 12 1", "49 13 1", "49 14 1", "49 15 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int N = 50;
    vector<string> interestingStores = {"1 604800 604800"};
    vector<string> roads = {"0 49 604800"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int N = 5;
    vector<string> interestingStores = {"0 7 1", "0 5 1", "0 3 1", "0 1 1", "0 10000 1"};
    vector<string> roads = {"0 1 1", "1 2 1", "2 3 1", "3 4 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int N = 50;
    vector<string> interestingStores = {"143 1560 45", "882 11206 99", "652 6353 22", "558 28451 77", "390 11103 76", "601 21605 11", "870 15559 62", "402 15658 90", "424 11010 3", "183 27272 86", "427 24185 18", "833 5003 33", "155 17345 22", "977 3346 30", "693 11249 26", "435 7877 50"};
    vector<string> roads = {"41 17 134", "0 19 124", "28 8 162", "14 5 145", "31 27 161", "41 45 142", "27 36 191", "4 2 153", "42 32 21", "16 18 95", "47 26 171", "38 19 112", "17 49 35", "44 3 11", "22 33 73", "14 41 111", "3 18 147", "44 12 157", "37 9 123", "41 29 178", "16 35 190", "42 38 106", "40 42 64", "48 46 5", "40 29 170", "0 6 101", "43 48 29", "23 34 154", "16 26 131", "8 44 39", "26 23 137", "38 18 82", "33 15 39", "8 4 130", "27 6 73", "36 21 145", "24 22 70", "40 11 36", "5 24 31", "30 7 191", "7 37 57", "37 3 183", "22 46 106", "30 13 168", "10 9 24", "20 46 21", "35 1 3", "9 39 102", "25 33 69"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int N = 50;
    vector<string> interestingStores = {"0 600000 100", "0 600000 100", "0 600000 100", "0 600000 100", "0 600000 100", "0 600000 100", "0 600000 100", "0 600000 100", "0 600000 100", "0 600000 100", "0 600000 100", "0 600000 100", "0 600000 100", "0 600000 100", "0 600000 100", "0 600000 100"};
    vector<string> roads = {"48 49 4", "47 48 7", "46 48 8", "45 47 6", "44 47 4", "43 46 6", "42 46 7", "41 45 3", "40 45 10", "39 44 2", "38 44 3", "37 43 8", "36 43 1", "35 42 10", "34 42 4", "33 41 7", "32 41 1", "31 40 7", "30 40 3", "29 39 7", "28 39 2", "27 38 9", "26 38 8", "25 37 10", "24 37 3", "23 36 1", "22 36 3", "21 35 4", "20 35 8", "19 34 6", "18 34 10", "17 33 3", "16 33 3", "15 32 9", "14 32 10", "13 31 8", "12 31 4", "11 30 7", "10 30 2", "9 29 3", "8 29 10", "7 28 4", "6 28 2", "5 27 10", "4 27 5", "3 26 8", "2 26 9", "1 25 5", "0 25 6", "0 49 10000"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int N = 2;
    vector<string> interestingStores = {"30 40 100", "20 30 20"};
    vector<string> roads = {"1 0 10"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int N = 2;
    vector<string> interestingStores = {"1000 2000 1000"};
    vector<string> roads = {"1 0 2"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int N = 50;
    vector<string> interestingStores = {"0 604800 100", "0 604800 100", "0 604800 100", "0 604800 100", "0 604800 100", "0 604800 100", "0 604800 100", "0 604800 100", "0 604800 100", "0 604800 100", "0 604800 100", "0 604800 100", "0 604800 100", "0 604800 100", "0 604800 100", "0 604800 100"};
    vector<string> roads = {"0 1 6040", "1 2 6040", "2 3 6040", "3 4 6040", "4 5 6040", "5 6 6040", "6 7 6040", "7 8 6040", "8 9 6040", "9 10 6040", "10 11 6040", "11 12 6040", "12 13 6040", "13 14 6040", "14 15 6040", "15 16 6040", "16 17 6040", "17 18 6040", "18 19 6040", "19 20 6040", "20 21 6040", "21 22 6040", "22 23 6040", "23 24 6040", "24 25 6040", "25 26 6040", "26 27 6040", "27 28 6040", "28 29 6040", "29 30 6040", "30 31 6040", "31 32 6040", "32 33 6040", "33 34 6040", "34 35 6040", "35 36 6040", "36 37 6040", "37 38 6040", "38 39 6040", "39 40 6040", "40 41 6040", "41 42 6040", "42 43 6040", "43 44 6040", "44 45 6040", "45 46 6040", "46 47 6040", "47 48 6040", "48 49 6040"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int N = 2;
    vector<string> interestingStores = {"0 10 10", "0 50 20"};
    vector<string> roads = {"0 1 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 50;
    vector<string> interestingStores = {"1 15000 1000", "1 15000 1000", "1 15000 1000", "1 15000 1000", "1 15000 1000", "1 15000 1000", "1 15000 1000", "1 15000 1000", "1 15000 1000", "1 15000 1000", "1 15000 1000", "1 15000 1000", "1 15000 1000", "1 15000 1000", "1 15000 1000", "1 15000 1000"};
    vector<string> roads = {"0 1 2", "1 2 2", "2 3 1", "3 4 1", "4 5 2", "5 6 1", "6 7 1", "7 8 1", "8 9 1", "9 10 1", "10 11 2", "11 12 2", "12 13 2", "13 14 2", "14 15 2", "15 16 2", "16 17 2", "17 18 1", "18 19 2", "19 20 1", "20 21 2", "21 22 1", "22 23 1", "23 24 2", "24 25 1", "25 26 1", "26 27 2", "27 28 1", "28 29 1", "29 30 2", "30 31 2", "31 32 1", "32 33 2", "33 34 1", "34 35 2", "35 36 1", "36 37 2", "37 38 2", "38 39 2", "39 40 1", "40 41 2", "41 42 2", "42 43 1", "43 44 2", "44 45 2", "45 46 1", "46 47 2", "47 48 2", "48 49 2", "2 5 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int N = 3;
    vector<string> interestingStores = {"1 20 3", "1 20 3"};
    vector<string> roads = {"0 2 1", "2 1 2", "0 1 1000"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 4;
    vector<string> interestingStores = {"0 10000 3", "0 11000 2", "10 99999 4"};
    vector<string> roads = {"3 2 1", "2 1 1", "1 0 1", "0 2 2"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int N = 50;
    vector<string> interestingStores = {"17 300006 5", "15 300013 2", "9 300012 3", "7 300002 3", "3 300019 2", "6 300000 3", "11 300016 4", "9 300007 5", "2 300010 4", "15 300007 5", "2 300002 6", "7 300009 5", "11 300016 5", "13 300009 4", "4 300019 3", "4 300018 4"};
    vector<string> roads = {"0 1 1", "1 2 1", "2 3 1", "3 4 1", "4 5 1", "5 6 1", "6 7 1", "7 8 1", "8 9 1", "9 10 1", "10 11 1", "11 12 1", "12 13 1", "13 14 1", "14 15 1", "15 16 1", "16 17 1", "17 18 1", "18 19 1", "19 20 1", "20 21 1", "21 22 1", "22 23 1", "23 24 1", "24 25 1", "25 26 1", "26 27 1", "27 28 1", "28 29 1", "29 30 1", "30 31 1", "31 32 1", "32 33 1", "33 34 1", "34 35 1", "35 36 1", "36 37 1", "37 38 1", "38 39 1", "39 40 1", "40 41 1", "41 42 1", "42 43 1", "43 44 1", "44 45 1", "45 46 1", "46 47 1", "47 48 1", "48 49 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int N = 50;
    vector<string> interestingStores = {"7 66414 1", "5 268981 2", "3 306863 4", "2 497282 7", "8 477085 6", "15 126506 7", "2 161314 10", "15 353896 5", "8 398815 6", "12 490365 5", "9 171088 1", "13 447179 7", "12 205404 5", "13 112400 5", "9 49677 1", "3 210013 10"};
    vector<string> roads = {"0 1 84", "1 2 87", "2 3 78", "3 4 16", "4 5 94", "5 6 36", "6 7 87", "7 8 93", "8 9 50", "9 10 22", "10 11 63", "11 12 28", "12 13 91", "13 14 60", "14 15 64", "15 16 27", "16 17 41", "17 18 27", "18 19 73", "19 20 37", "20 21 12", "21 22 69", "22 23 68", "23 24 30", "24 25 83", "25 26 31", "26 27 63", "27 28 24", "28 29 68", "29 30 36", "30 31 30", "31 32 3", "32 33 23", "33 34 59", "34 35 70", "35 36 68", "36 37 94", "37 38 57", "38 39 12", "39 40 43", "40 41 30", "41 42 74", "42 43 22", "43 44 20", "44 45 85", "45 46 38", "46 47 99", "47 48 25", "48 49 16"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int N = 2;
    vector<string> interestingStores = {"604739 604800 604800"};
    vector<string> roads = {"1 0 603000"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int N = 2;
    vector<string> interestingStores = {"1 10 5", "9 10 4"};
    vector<string> roads = {"0 1 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int N = 2;
    vector<string> interestingStores = {"0 1 1", "0 1 1"};
    vector<string> roads = {"0 1 1000"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int N = 8;
    vector<string> interestingStores = {"930 933 37", "631 641 32", "902 950 34", "373 546 24", "823 876 14", "352 357 54"};
    vector<string> roads = {"4 5 13", "0 6 13", "1 0 6", "6 4 7", "7 0 10", "3 6 1", "2 7 6", "4 2 4", "1 2 3", "0 3 7", "1 7 1", "5 7 9", "1 4 4", "1 3 5", "7 3 13", "7 4 13", "5 1 14", "3 4 4", "3 5 5", "6 7 7", "5 0 10", "1 6 5", "0 2 8", "0 4 13", "6 5 10", "3 2 2", "6 2 7", "2 5 7"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int N = 3;
    vector<string> interestingStores = {"10 20 10", "5 1000 100"};
    vector<string> roads = {"0 2 1", "1 2 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int N = 3;
    vector<string> interestingStores = {"1 10 10", "10 50 100", "1 2 30"};
    vector<string> roads = {"1 2 10"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 16;
    vector<string> interestingStores = {"1 100000 1", "1 100000 1", "1 100000 1", "1 100000 1", "1 100000 1", "1 100000 1", "1 100000 1", "1 100000 1", "1 100000 1", "1 100000 1", "1 100000 1", "1 100000 1", "1 100000 1", "1 100000 1", "1 100000 1", "1 100000 1"};
    vector<string> roads = {"0 1 1", "1 2 1", "2 3 1", "3 4 1", "4 5 1", "5 6 1", "6 7 1", "7 8 1", "8 9 1", "9 10 1", "10 11 1", "11 12 1", "12 13 1", "13 14 1", "14 15 1", "15 0 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int N = 4;
    vector<string> interestingStores = {"1 3 1", "4 5 1", "7 8 1", "0 1 1"};
    vector<string> roads = {"3 0 1", "3 1 1", "3 2 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int N = 3;
    vector<string> interestingStores = {"1 10 10", "1 55 30", "10 50 100"};
    vector<string> roads = {"1 2 10"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
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
    int N = 2;
    vector<string> interestingStores = {"2 3 1"};
    vector<string> roads = {"0 1 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int N = 50;
    vector<string> interestingStores = {"425172 479159 31290", "551749 604796 13957", "148450 183963 7500", "84718 181816 51731", "516069 520437 14128", "540146 581915 38173", "514228 557183 24881", "140921 286600 18542", "340879 424215 59034", "36405 544320 28089", "208604 283015 43812", "55243 349822 10684", "415243 529417 38477", "421362 573168 8140", "540786 554843 19818", "320060 410619 52628"};
    vector<string> roads = {"35 36 651", "10 11 652", "23 24 162", "39 40 604", "5 6 653", "8 9 562", "18 19 340", "13 14 547", "29 30 85", "22 23 452", "31 32 413", "1 2 299", "6 7 289", "45 46 651", "20 21 353", "19 20 322", "25 26 638", "28 29 375", "47 48 55", "27 28 437", "36 37 95", "32 33 567", "17 18 447", "42 43 192", "4 5 38", "33 34 70", "9 10 327", "2 3 593", "38 39 660", "46 47 577", "44 45 632", "3 4 132", "37 38 574", "11 12 415", "16 17 172", "0 1 375", "40 41 376", "26 27 216", "48 49 71", "21 22 347", "15 16 152", "24 25 591", "12 13 300", "30 31 42", "43 44 497", "14 15 407", "41 42 490", "7 8 615", "34 35 655", "6 46 240"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int N = 3;
    vector<string> interestingStores = {"4 5 1", "2 3 1", "1 2 1"};
    vector<string> roads = {"0 1 1", "1 2 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int N = 50;
    vector<string> interestingStores = {"400531 579294 19762", "545787 600785 9896", "75920 134970 1798", "330018 583782 13332", "19591 282354 3415", "582822 604190 16592", "45375 586007 7154", "313511 511926 9740", "218356 282758 11234", "561077 566538 1882", "234373 594279 2225", "275694 284629 13466", "491415 575032 18856", "97237 342325 4722", "418218 585411 19833", "487189 548053 6392"};
    vector<string> roads = {"0 1 219", "1 2 8953", "2 3 1724", "3 4 8277", "4 5 7967", "5 6 1783", "6 7 7422", "7 8 2553", "8 9 7083", "9 10 2835", "10 11 9645", "11 12 513", "12 13 5303", "13 14 2156", "14 15 5404", "15 16 3312", "16 17 6498", "17 18 2589", "18 19 3645", "19 20 3462", "20 21 7784", "21 22 2044", "22 23 7250", "23 24 1647", "24 25 8544", "25 26 4339", "26 27 8418", "27 28 7012", "28 29 3197", "29 30 1486", "30 31 540", "31 32 3522", "32 33 2082", "33 34 8543", "34 35 8108", "35 36 3081", "36 37 1328", "37 38 3944", "38 39 6030", "39 40 3249", "40 41 951", "41 42 464", "42 43 8926", "43 44 4405", "44 45 6811", "45 46 2093", "46 47 2759", "47 48 7884", "48 49 6118"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int N = 50;
    vector<string> interestingStores = {"1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1", "1 600000 1"};
    vector<string> roads = {"49 0 1", "49 1 1", "49 2 1", "49 3 1", "49 4 1", "49 5 1", "49 6 1", "49 7 1", "49 8 1", "49 9 1", "49 10 1", "49 11 1", "49 12 1", "49 13 1", "49 14 1", "49 15 600001"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int N = 4;
    vector<string> interestingStores = {"1 2 1", "3 4 1", "3 4 1", "5 6 1"};
    vector<string> roads = {"0 1 1", "0 2 1", "2 3 1", "3 0 1"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int N = 2;
    vector<string> interestingStores = {"310 311 200"};
    vector<string> roads = {"0 1 10"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int N = 50;
    vector<string> interestingStores = {"250844 252513 1349", "83964 316244 13437", "80790 217381 36589", "163756 415285 193731", "140011 199523 52888", "138462 277455 30388", "308762 311083 870", "483674 598179 3579", "460470 520708 33113", "519628 599514 71482", "342018 414511 38810", "437974 444039 3524", "29128 401504 220787", "194286 573222 230837", "90409 530832 85268", "71438 81089 9226"};
    vector<string> roads = {"13 10 4826", "11 27 40090", "8 24 28683", "48 0 49304", "25 15 7361", "11 47 25299", "44 38 34452", "17 36 20421", "3 29 13218", "4 12 19953", "46 8 9377", "33 22 9902", "30 3 11799", "39 31 19075", "34 21 2524", "0 31 33859", "11 49 42718", "23 27 17098", "12 49 12614", "48 5 10648", "24 4 27577", "2 48 14542", "37 17 8737", "11 6 37944", "48 16 13357", "31 21 16842", "4 1 45367", "44 46 3998", "28 46 36149", "38 8 47533", "47 44 50227", "46 21 20332", "21 13 24175", "6 3 50137", "24 25 30549", "44 1 1590", "2 24 18732", "20 26 50118", "12 33 20753", "34 1 40454", "30 47 7651", "14 27 19326", "31 30 33710", "9 33 12392", "35 29 29273", "3 31 35293", "10 42 7262", "38 2 7707", "44 24 14198", "40 11 28442"};
    TravellingPurchasingMan* pObj = new TravellingPurchasingMan();
    clock_t start = clock();
    int result = pObj->maxStores(N, interestingStores, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22714443&rd=15499&pm=11050
********************************************************************************
//  SRM 579 (B) 
 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <cassert> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <utility> 
#include <numeric> 
#include <algorithm> 
#include <bitset> 
#include <complex> 
 
using namespace std; 
 
typedef unsigned uint; 
typedef long long Int; 
typedef vector<int> vint; 
typedef pair<int,int> pint; 
#define mp make_pair 
 
template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; } 
template<class T> void chmin(T &t, T f) { if (t > f) t = f; } 
template<class T> void chmax(T &t, T f) { if (t < f) t = f; } 
 
const int INF = 1001001001; 
 
int dist[110][110]; 
 
int M; 
int A[110], B[110], C[110]; 
int dp[100010][30]; 
 
struct TravellingPurchasingMan { 
   
  int maxStores(int N, vector <string> interestingStores, vector <string> roads) { 
    int u, v, w; 
    int c; 
    int p; 
     
    for (u = 0; u < N; ++u) for (v = 0; v < N; ++v) { 
      dist[u][v] = (u != v) ? INF : 0; 
    } 
    for (uint i = 0; i < roads.size(); ++i) { 
      sscanf(roads[i].c_str(), "%d%d%d", &u, &v, &c); 
      chmin(dist[u][v], c); 
      chmin(dist[v][u], c); 
    } 
    for (w = 0; w < N; ++w) for (u = 0; u < N; ++u) for (v = 0; v < N; ++v) { 
      chmin(dist[u][v], dist[u][w] + dist[w][v]); 
    } 
     
    M = interestingStores.size(); 
    for (u = 0; u < M; ++u) { 
      sscanf(interestingStores[u].c_str(), "%d%d%d", &A[u], &B[u], &C[u]); 
    } 
     
    memset(dp, 0x3f, sizeof(dp)); 
    for (u = 0; u < M; ++u) { 
      if (dist[N - 1][u] <= B[u]) { 
        chmin(dp[1 << u][u], max(dist[N - 1][u], A[u]) + C[u]); 
      } 
    } 
    for (p = 1; p < 1 << M; ++p) for (u = 0; u < M; ++u) if (dp[p][u] < INF) { 
      for (v = 0; v < M; ++v) if (!(p & 1 << v)) { 
        if (dp[p][u] + dist[u][v] <= B[v]) { 
          chmin(dp[p | 1 << v][v], max(dp[p][u] + dist[u][v], A[v]) + C[v]); 
        } 
      } 
    } 
     
    int ans = 0; 
    for (p = 1; p < 1 << M; ++p) for (u = 0; u < M; ++u) if (dp[p][u] < INF) { 
      chmax(ans, __builtin_popcount(p)); 
    } 
    return ans; 
     
  } 
   
};

********************************************************************************
*******************************************************************************/
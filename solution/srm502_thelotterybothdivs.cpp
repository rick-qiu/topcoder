/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11359
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

class TheLotteryBothDivs {
public:
    double find(vector<string> goodSuffixes);
};

double TheLotteryBothDivs::find(vector<string> goodSuffixes) {
    double ret;
    return ret;
}


int test0() {
    vector<string> goodSuffixes = {"4"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> goodSuffixes = {"4", "7"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> goodSuffixes = {"47", "47"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> goodSuffixes = {"47", "58", "4747", "502"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.021;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> goodSuffixes = {"000000000"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E-9;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> goodSuffixes = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> goodSuffixes = {"8542861", "1954", "6", "523", "000000000", "5426", "8"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.201100101;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> goodSuffixes = {"612829", "752829", "981832829", "413", "51829", "3829", "62385829", "747829", "8960", "914383829", "6749829", "730829", "696829", "91392829", "50458829", "459829", "351829", "4005", "829", "307", "64", "64829", "35829", "0883", "0859829", "501711829", "81829", "13829", "743829", "94829", "244829", "4370829", "46757829", "829", "62810", "700829", "462039829", "93082829", "2071829", "37588", "356829", "837612829", "5670829", "478829", "856443829", "4829", "2829", "829", "10829", "768475829"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01332;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> goodSuffixes = {"99555", "76", "259775455", "84455", "26", "455", "6055", "3", "8", "3", "1", "55", "17398755", "6155", "60455", "47", "8", "55", "050146755", "6269355", "37", "55", "7", "155", "443494955", "9", "5435455", "88169055", "434955", "8714155", "0111255", "7", "859155", "5266755", "16755", "5", "93", "4555", "77", "17655", "305755", "1", "55", "441046055", "555", "2", "040635555", "45", "55", "255"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.72;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> goodSuffixes = {"212", "397321", "537444", "981", "7322187", "48882187", "2187", "041591", "52187", "1449", "32633", "2187", "846", "577", "16597", "983", "06034", "082187", "9854", "980941", "466005", "6007", "586", "8753", "2902187", "2388", "18100", "58200", "8136", "53645", "32187", "236", "2187", "6011", "931", "10902", "354", "71115", "910925", "1657", "2187", "322443", "76352187", "93", "252187", "68141", "11", "24050", "697508", "7526"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.030008;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> goodSuffixes = {"44742080", "44742080", "844742080", "8758355", "444742080", "302975431", "544742080", "088460", "44742080", "244742080", "044742080", "044742080", "44742080", "0908211", "944742080", "44742080", "744742080", "44742080", "844742080", "744742080", "244742080", "844742080", "744742080", "44742080", "44742080", "374781", "18851731", "644742080", "44742080", "44742080", "81292918", "44742080", "44742080", "44742080", "430530161", "844742080", "44742080", "644742080", "44742080", "285978596", "44742080", "944742080", "496648035", "644742080", "44742080", "521215", "915806253", "644742080", "244742080", "44742080"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 3.235E-6;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> goodSuffixes = {"6712752", "6089", "79", "565", "65", "52697", "082752", "700294", "707349", "2752", "62752", "80647", "2442752", "6104820", "59442752", "2752", "4232", "771", "631254", "658272752", "352", "662752", "82752", "566302752", "2752", "594482752", "979", "11262752", "52", "12752", "14", "4776", "112752", "42752", "90565", "1362662", "3902777", "5912298", "725852752", "4308", "2892752", "92752", "81", "112", "46102", "7146406", "79", "3008032", "957667", "1105150"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0524347;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> goodSuffixes = {"85950", "81770", "95677", "34091", "3155374", "92300", "39835", "96782", "155374", "13315", "54870", "355374", "08558", "33291", "86185", "09820", "70970", "56499", "05800", "76855374", "19314", "70178", "74063", "86198", "93203", "10492", "10489", "92943", "23322", "46518", "83646", "94326", "78541", "88482", "34202", "55374", "49405", "16052", "67324", "90326", "075355374", "90650", "47264", "68833", "44444", "12464", "04026", "95956", "90941", "5355374"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 4.4E-4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> goodSuffixes = {"7987", "959687", "82487", "68", "87", "32055387", "864937187", "1296987", "587", "4715187", "221582587", "7752287", "387", "687", "87", "787", "287", "166687", "2987", "8797587", "9787", "20818887", "7787", "16787", "88186187", "4335787", "5288387", "587", "89787", "987", "20687", "622887", "56787", "171455587", "4", "62187", "74887", "2763487", "451794587", "87", "17", "9987", "48221987", "587", "87", "87", "174287", "1", "87", "45024887"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.23;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> goodSuffixes = {"112", "23554", "733698", "59253698", "02193698", "43698", "3698", "517463698", "63698", "4433", "1213698", "23698", "013698", "3698", "8724", "5513698", "05743698", "156687", "5", "1", "624315", "3698", "983583698", "1", "2613698", "3698", "2396", "49640", "955073698", "95973698", "67344", "7383698", "3698", "3698", "645093698", "0893698", "873698", "53698", "3698", "803698", "1203698", "6633698", "77033698", "892463698", "54216", "8", "7", "82663698", "40033698", "570253698"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.40134;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> goodSuffixes = {"7127902", "3391099", "77", "0649", "9107902", "7324317", "82457802", "7202", "57102", "42059", "5594617", "088007", "3997", "3538", "02", "682602", "70", "989102", "379927", "02", "751802", "502", "16", "6702", "1802", "36363", "9996102", "402", "800662902", "05375", "02", "802194702", "1507202", "764442302", "802", "55997", "2141494", "90192402", "26180002", "59602", "402", "02", "02", "7770", "46380", "52891", "1484502", "16102", "849361202", "79702"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0403624;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> goodSuffixes = {"2", "2", "21", "523589311", "0", "073", "49929311", "636", "5542", "461", "359", "31269311", "23", "2", "559", "657", "17239311", "2977", "217", "41", "8", "967", "0390", "788", "858319311", "54", "6", "602", "31", "5263", "0", "9311", "493", "399311", "0831", "406", "1", "29649311", "3", "22", "519311", "0", "5605", "45", "6803", "79", "088", "81", "049", "5442"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6362;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> goodSuffixes = {"91443519", "91443519", "91443519", "91443519", "391443519", "66583", "91443519", "991443519", "691443519", "97858", "191443519", "491443519", "2915848", "91443519", "091443519", "34454957", "691443519", "91443519", "191443519", "91443519", "91443519", "91443519", "91443519", "291443519", "091443519", "391443519", "52662227", "91443519", "891443519", "860986", "391443519", "91443519", "391443519", "4645566", "91443519", "91443519", "91443519", "091443519", "591443519", "91443519", "91443519", "91443519", "91443519", "591443519", "591443519", "491443519", "4634654", "291443519", "8874169", "91443519"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 2.143E-5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> goodSuffixes = {"627073", "328692", "7453908", "873107", "817740", "366773276", "0083583", "816482", "983624", "553840", "653416", "818976", "26773276", "785171", "268129", "9985072", "664267", "276773276", "976653", "590231", "7308021", "537447", "76773276", "6773276", "716773276", "8173368", "6815935", "766382", "2913257", "8410148", "744443", "173729", "2706486", "042743", "0565496", "107324", "1878681", "298988", "214462", "7176486", "560114", "3519760", "6773276", "554160", "9251235", "438971", "302661", "557751", "359113", "000804"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 3.05E-5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> goodSuffixes = {"480252399", "80252399", "0405", "480252399", "80252399", "780252399", "780252399", "480252399", "80252399", "90589061", "80252399", "80252399", "699039994", "80252399", "80252399", "80252399", "23036", "880252399", "980252399", "80252399", "580252399", "80252399", "180252399", "980252399", "480252399", "7290236", "80252399", "80252399", "480252399", "580252399", "80252399", "80252399", "80252399", "080252399", "80252399", "580252399", "80252399", "480252399", "80252399", "61848", "80252399", "4217", "448728", "780252399", "742578", "80252399", "80252399", "480252399", "980252399", "144511"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 2.23121E-4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> goodSuffixes = {"697349230", "39230", "69230", "9230", "9230", "2279230", "313679230", "7509230", "249230", "649230", "06379230", "79230", "661529230", "49230", "3259230", "9", "67239230", "109230", "9230", "87", "9230", "19230", "639230", "6989230", "129230", "9230", "486209230", "19230", "579230", "5339230", "39479230", "41109230", "20939230", "949230", "849230", "979139230", "649230", "9230", "479230", "2289230", "999230", "9230", "19230", "9230", "029939230", "4010", "549230", "89230", "809230", "989230"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1102;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> goodSuffixes = {"2217991", "952217991", "182217991", "32217991", "9788494", "742217991", "5903011", "2650705", "622217991", "9502820", "2240741", "9016177", "412217991", "12217991", "52217991", "12217991", "5929254", "8412799", "02217991", "2217991", "8632601", "62217991", "3514904", "8870450", "602217991", "4147181", "2217991", "2217991", "2217991", "3844585", "92217991", "0112075", "2217991", "2217991", "02217991", "32217991", "792217991", "4012543", "1540934", "2217991", "12217991", "7736286", "42217991", "22217991", "2217991", "02217991", "2217991", "112217991", "102217991", "0104422"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9E-6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> goodSuffixes = {"451", "67346433", "209", "36433", "646", "072", "970", "759", "405098433", "77797433", "894433", "480591433", "49433", "48392433", "4433", "664", "86433", "101", "0740433", "433", "585433", "009", "7146433", "043994433", "669", "988", "433", "3433", "433", "42433", "992", "576433", "391", "488", "433", "997433", "6396433", "307", "695", "18433", "945386433", "1433", "204", "857", "712", "035", "096576433", "1433", "252433", "338"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.022;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> goodSuffixes = {"6042720", "3042720", "94042720", "062042720", "413042720", "7042720", "29042720", "9808", "8042720", "3042720", "392042720", "042720", "3042720", "5042720", "0042720", "042720", "9042720", "00042720", "3042720", "3042720", "042720", "042720", "8042720", "7042720", "042720", "2331", "64042720", "8042720", "03042720", "368042720", "592042720", "47042720", "71042720", "41042720", "042720", "16042720", "20042720", "4042720", "74042720", "65042720", "042720", "3042720", "88042720", "82326", "86042720", "042720", "2042720", "52042720", "2042720", "0042720"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 2.11E-4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> goodSuffixes = {"59987091", "0380445", "7286125", "73541047", "707286125", "3152010", "07286125", "087286125", "7286125", "497286125", "4035074", "7286125", "607286125", "5684974", "91306689", "7286125", "7286125", "3604383", "23021034", "31053763", "78441251", "037286125", "77286125", "4168226", "47286125", "72589434", "85804148", "1657062", "37286125", "9588059", "67286125", "7286125", "0811034", "93607109", "307286125", "1911797", "2609189", "57286125", "57286125", "7286125", "7286125", "227286125", "7286125", "447286125", "057286125", "7286125", "07286125", "1905824", "9700281", "07286125"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.49E-6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> goodSuffixes = {"5915184", "93177584", "553884", "2366184", "51", "9865384", "38284", "53", "11", "84", "21735384", "84", "84", "286684", "98984", "782984", "74", "6343884", "6671684", "04052884", "97484", "08083084", "01", "627284", "51984", "984", "79384", "8184", "895947684", "88184", "684", "684", "4984", "78", "22", "05754584", "3284", "371384", "01", "9356984", "8284", "444284", "10835784", "042392884", "0484", "84", "2071684", "84", "632684", "61484"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> goodSuffixes = {"65957749", "0", "70", "49", "4907749", "45949", "91", "6071049", "8", "6349", "2449149", "149", "49", "049", "5949", "06", "6", "47", "2149", "80983249", "49", "449497149", "2", "40149", "8549", "49", "812233149", "9", "49", "5549", "49", "53", "5349", "524271749", "9041149", "49", "24314749", "22", "29618849", "5149", "5", "0749", "270512849", "69", "6", "177436949", "49", "10249", "0", "00949"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.63;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> goodSuffixes = {"60482", "82", "212", "17552", "232", "72", "42", "772632", "74172", "14972", "92", "12", "931412", "11451182", "42", "90380372", "440322", "6927272", "46710642", "9652", "370562", "3958642", "583011892", "8122", "63827262", "832", "555402", "6392762", "720272", "8231652", "098503022", "32", "455362", "752", "2572", "9442", "980122", "70436672", "798762", "09612", "1692", "47372", "0586942", "0457852", "2", "8692", "478172", "772", "94622", "37823542"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> goodSuffixes = {"645048595", "048595", "4048595", "51048595", "048595", "500048595", "514048595", "048595", "048595", "048595", "252048595", "048595", "048595", "744048595", "048595", "963048595", "841048595", "048595", "048595", "0048595", "048595", "3048595", "048595", "9048595", "1048595", "048595", "048595", "338048595", "62048595", "6048595", "1048595", "048595", "493048595", "629048595", "40048595", "169048595", "048595", "50048595", "679048595", "95048595", "048595", "6048595", "048595", "261048595", "048595", "5048595", "71048595", "18048595", "5048595", "8048595"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E-6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> goodSuffixes = {"45", "61875", "01732175", "7655", "945", "45", "7299585", "98945", "335", "62260795", "875", "600249155", "6", "5", "6", "00554555", "57895", "25", "84015", "7895", "5", "5", "2943605", "25", "795", "5531035", "4", "025", "4858445", "502073225", "4", "8", "5975", "7", "5", "55", "4", "5", "835", "10167115", "925", "5375", "445", "5", "75", "8456105", "704215", "65", "186265", "043185295"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> goodSuffixes = {"224742001", "637408420", "637408420", "637408420", "503159138", "637408420", "637408420", "637408420", "637408420", "637408420", "637408420", "637408420", "267666558", "637408420", "637408420", "637408420", "637408420", "637408420", "637408420", "637408420", "637408420", "637408420", "637408420", "479889935", "637408420", "637408420", "637408420", "637408420", "637408420", "637408420", "238675896", "949787040", "637408420", "637408420", "637408420", "773405091", "637408420", "637408420", "637408420", "874001187", "637408420", "637408420", "637408420", "637408420", "637408420", "637408420", "637408420", "637408420", "637408420", "637408420"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0E-9;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> goodSuffixes = {"207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939", "207387939"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E-9;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> goodSuffixes = {"5", "5", "2", "9", "7", "6", "6", "6", "7", "7", "8", "5", "5", "0", "3", "6", "7", "4", "8", "1", "6", "1", "3", "1", "0", "4", "4", "3", "1", "1", "5", "8", "7", "5", "3", "7", "0", "4", "3", "2", "6", "8", "6", "1", "3", "8", "1", "4", "5", "3"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> goodSuffixes = {"4914434", "292792", "39982", "663", "18750", "7754", "9877", "50", "057243", "495441", "16716049", "98702", "112784", "58614", "4258", "71410173", "4", "046075", "7179", "1", "4", "643", "19376377", "503157", "5208816", "20859144", "9", "40635506", "34", "357910892", "3869", "49259", "1", "26678554", "9953626", "93353", "7726312", "64816837", "564820588", "0251301", "176", "069", "45", "8", "68", "816907", "35", "8578", "050146703", "7226"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.433235342;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> goodSuffixes = {"854536313", "763537320", "215957861", "601132244", "488893430", "732123669", "025200853", "467292541", "478149664", "659735439", "070382615", "754315212", "162183808", "652183657", "408004383", "591580625", "629642148", "412946718", "609394088", "541449981", "053016137", "086089714", "803518851", "597859643", "737320641", "899934756", "808846028", "343263398", "750868141", "156292900", "760199602", "892648009", "423263125", "844118915", "158129291", "656777815", "420027529", "660250186", "324050586", "420803029", "166122096", "446302152", "731875835", "056579771", "009001918", "618995447", "634514155", "309082119", "983577060", "497911243"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0E-8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> goodSuffixes = {"2", "852111", "1", "2"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> goodSuffixes = {"9", "7", "6", "02", "81", "2"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.41;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> goodSuffixes = {"4", "6", "4", "4", "4", "4", "4", "4", "3", "2", "4", "4", "4", "4", "5", "4", "1", "4", "4", "4", "4", "1", "4", "4", "4", "5"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> goodSuffixes = {"996", "358", "300", "178", "993", "734", "422", "6178", "990", "418", "614", "836", "608"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> goodSuffixes = {"24", "17", "16", "30", "3117", "10", "69", "17", "27417", "17", "15", "54", "53", "17", "95", "60", "27", "74"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> goodSuffixes = {"0", "3", "9", "1", "6", "4", "8", "6", "6", "4", "4", "4", "9", "4", "3", "4", "1", "6", "9", "3", "9", "4", "2", "8", "9", "1", "9", "1", "4", "1", "5", "4", "4", "9", "2", "1", "9", "2", "4", "4", "3"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> goodSuffixes = {"859", "324", "595", "907", "613", "5929", "932", "402", "174929", "439", "500", "9929", "929", "039", "667", "929", "929", "929", "929", "541", "98929", "678", "032", "382929", "929", "387", "22929", "531", "175"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.018;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> goodSuffixes = {"77", "4", "64", "778617", "1497517", "59416617", "5117", "17", "07517", "57227717", "682", "522", "50", "9", "218117", "24", "43357317", "9317", "517917"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.232;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> goodSuffixes = {"75888", "156", "186", "15145", "4998", "05117", "75888", "53462", "275888", "598", "28956", "575888", "651", "0292", "190", "8646", "285", "610", "1947", "793", "23205", "075888", "9775", "0548", "82596", "9382", "75888", "6320", "575888", "575888", "8946", "75888", "71455", "52215", "75888", "959", "5464", "475888", "77748"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0101;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> goodSuffixes = {"1", "1", "2", "2", "2", "0", "2", "7", "2", "0", "3", "5", "7", "9", "2", "0", "5", "7", "8", "7", "8", "0", "2", "0", "4", "7", "4", "2", "2", "4", "2", "2"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> goodSuffixes = {"0"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> goodSuffixes = {"859258807"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E-9;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> goodSuffixes = {"04", "30", "08", "01", "40", "48", "03", "02", "12", "28", "43", "06", "46", "17", "18", "25", "45", "16", "14", "44", "31", "22", "33", "21", "47", "20", "49", "36", "27", "41", "00", "13", "10", "37", "11", "34", "07", "24", "26", "29", "32", "19", "15", "05", "09", "23", "39", "38", "42", "35"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> goodSuffixes = {"89999", "49", "49999", "099", "6", "899", "79", "299", "8", "1", "09999", "69999", "2999", "29999", "99999", "7999", "19999", "29", "79999", "0999", "499", "599", "4999", "89", "4", "799", "699", "09", "1999", "199", "5", "7", "399", "69", "0", "5999", "8999", "6999", "59", "3", "19", "2", "59999", "39999", "3999", "39"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> goodSuffixes = {"8542861", "1954", "6", "523", "000000000", "5426", "8"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.201100101;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> goodSuffixes = {"2", "32", "42"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> goodSuffixes = {"123", "23", "3"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> goodSuffixes = {"4747", "47", "47474747", "0000", "4747"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0101;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> goodSuffixes = {"75", "0", "275", "40275", "43275", "343275", "40275", "50050050", "5005"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1101;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> goodSuffixes = {"1", "2", "1", "47"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> goodSuffixes = {"4747", "47"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> goodSuffixes = {"1", "11"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> goodSuffixes = {"47", "58", "4747", "502"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.021;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> goodSuffixes = {"0", "010", "0002", "00", "000", "0", "011"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1011;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> goodSuffixes = {"4", "44", "444", "4444", "44444", "444444", "4444444", "44444444", "444444444"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> goodSuffixes = {"0122"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E-4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> goodSuffixes = {"211", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> goodSuffixes = {"1", "11", "111", "11", "1"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> goodSuffixes = {"1", "222", "243", "3243", "44243", "133243"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.102;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> goodSuffixes = {"1", "11", "111", "1111", "11111", "111111", "11111111", "1111111", "111111111", "11111", "111111", "111"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> goodSuffixes = {"436", "65464", "645645", "6456", "64564", "64564", "645645", "76575"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001131;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> goodSuffixes = {"99", "9", "999"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> goodSuffixes = {"111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111", "111"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> goodSuffixes = {"1121", "11"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0101;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> goodSuffixes = {"1", "1"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> goodSuffixes = {"0001"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E-4;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> goodSuffixes = {"23", "24", "323"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> goodSuffixes = {"1", "2", "1"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> goodSuffixes = {"4", "74", "674", "8674"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> goodSuffixes = {"84", "4"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> goodSuffixes = {"012", "112", "212", "312", "12"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> goodSuffixes = {"4", "44", "444", "4444"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> goodSuffixes = {"1234", "23"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0101;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> goodSuffixes = {"47", "4747", "47"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> goodSuffixes = {"4", "14", "14"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> goodSuffixes = {"47", "5458", "5447", "58", "4747", "502", "47", "58"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.021;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> goodSuffixes = {"7", "47"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> goodSuffixes = {"47", "27", "37"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> goodSuffixes = {"1", "21", "31", "41", "51", "61", "71", "81", "91", "12", "13", "14", "15"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> goodSuffixes = {"1", "1", "1", "11", "111", "21", "2543", "24357", "137", "2627", "256", "2456", "25", "256", "2", "23", "2", "1", "1", "34", "1", "123", "32", "32", "32", "12", "341", "123", "432", "23", "23", "23", "42", "1234", "1455555", "145555555", "14555", "14555", "123", "123", "1234", "452", "14555555", "256666666"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.232320112;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> goodSuffixes = {"8542861", "1954", "6", "523", "000000000", "5426", "8", "881954", "01010101", "111000", "666", "195"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.202101111;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> goodSuffixes = {"111", "1"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> goodSuffixes = {"0", "00", "000", "0000"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> goodSuffixes = {"111111111"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E-9;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> goodSuffixes = {"123455", "223455", "323455", "123455", "2355", "1545", "748678"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 2.04E-4;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> goodSuffixes = {"05", "5"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> goodSuffixes = {"70000", "0"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> goodSuffixes = {"26", "6"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> goodSuffixes = {"7", "177", "277"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> goodSuffixes = {"6477", "5478", "477", "77", "7"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1001;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> goodSuffixes = {"21", "1"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> goodSuffixes = {"05"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> goodSuffixes = {"0", "00", "000"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> goodSuffixes = {"8542861", "1954", "523", "000000000", "5426", "6", "8"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.201100101;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> goodSuffixes = {"88", "8"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> goodSuffixes = {"2", "20", "200", "2000", "02", "03", "002", "034", "03", "09", "009"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1321;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> goodSuffixes = {"0"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> goodSuffixes = {"0000", "000", "00", "0", "00", "000", "0000", "00000", "0000001"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1000001;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> goodSuffixes = {"4563", "56"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0101;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> goodSuffixes = {"5", "55", "555", "5555"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> goodSuffixes = {"3", "343", "3437", "34378"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10011;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> goodSuffixes = {"347", "47", "247"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> goodSuffixes = {"47", "58", "4729", "502", "58999", "589"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02211;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> goodSuffixes = {"1", "22", "32", "42", "52", "62", "11111111"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.15;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> goodSuffixes = {"36", "436", "536", "7636", "51", "61", "71", "812", "912", "34", "35", "9"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.162;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> goodSuffixes = {"123", "1"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.101;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> goodSuffixes = {"0000", "000", "00", "0", "00", "000", "0000", "00001", "0000010"};
    TheLotteryBothDivs* pObj = new TheLotteryBothDivs();
    clock_t start = clock();
    double result = pObj->find(goodSuffixes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10001;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653720&rd=14431&pm=11359
********************************************************************************
#include <stdio.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
using namespace std;
 
class TheLotteryBothDivs
{
  public:
  double find(vector <string> g)
  {
    int n = g.size();
    map<string, int> accounted;
    double res = 0.0;
    double prob = 1.0;
    for (int i=1; i<=9; i++) {
      prob /= 10;
      for (int j=0; j<n; j++)
        if (g[j].size() == i) {
          int ok = 1;
          for (int k=1; k<=i; k++)
            if (accounted[g[j].substr(g[j].size()-k, k)]) ok = 0;
          accounted[g[j]] = 1;
          if (ok) res += prob;
        }
    }
    return res;
  };
};

********************************************************************************
*******************************************************************************/
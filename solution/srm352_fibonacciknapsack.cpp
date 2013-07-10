/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7481
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

class FibonacciKnapsack {
public:
    long maximalCost(vector<string> items, string C);
};

long FibonacciKnapsack::maximalCost(vector<string> items, string C) {
    long ret;
    return ret;
}


int test0() {
    vector<string> items = {"5 555", "8 195", "13 651"};
    string C = "15";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 750;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> items = {"5 555", "8 195", "13 751"};
    string C = "15";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 751;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> items = {"55 1562", "5 814", "55 1962", "8 996", "2 716", "34 1792"};
    string C = "94";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4568;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> items = {"13 89"};
    string C = "1";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> items = {"32951280099 34851840182", "53316291173 52855220864", "86267571272 86275432313", "139583862445 140310964457", "225851433717 224839833662", "365435296162 367555122387", "591286729879 589330020334", "956722026041 955600572711", "1548008755920 1548165267794", "2504730781961 2503718362316", "4052739537881 4051396608386", "6557470319842 6559347353150", "10610209857723 10610100492663", "17167680177565 17169683238048", "27777890035288 27779743264551", "44945570212853 44943549937426", "72723460248141 72724071593594", "117669030460994 117666914238211", "190392490709135 190393337129114", "308061521170129 308063274753980", "498454011879264 498451999372857", "806515533049393 806515194345674", "1304969544928657 1304967939925373", "2111485077978050 2111486709071689", "3416454622906707 3416452570156355", "5527939700884757 5527938309376261", "8944394323791464 8944394973262345", "1 1", "2 2", "3 3", "5 5", "8 8", "13 14", "21 23", "34 31", "55 51", "89 85", "144 148", "233 243", "377 372", "610 600", "987 960", "1597 1490", "2584 2741", "4181 4542", "6765 7095", "10946 11116", "17711 16508", "28657 27430", "46368 48041"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 9999996514303784;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> items = {"1 1", "2 2", "3 3", "5 5", "8 8", "13 13", "21 20", "34 37", "55 56", "89 84", "144 133", "233 228", "377 393", "610 587", "987 1031", "1597 1579", "2584 2812", "4181 4321", "6765 6480", "10946 10053", "17711 19231", "28657 30976", "46368 43296", "75025 74145", "121393 117082", "196418 202129", "317811 349478", "514229 550698", "832040 800191", "1346269 1290891", "2178309 2107281", "3524578 3667874", "5702887 5241212", "9227465 9694388", "14930352 15448878", "24157817 23173825", "39088169 40271360", "63245986 60486470", "102334155 105820454", "165580141 166547785", "267914296 241952193", "433494437 472718930", "701408733 718384717", "1134903170 1044216097", "1836311903 1689914494", "2971215073 2863714071", "4807526976 4778873392", "7778742049 7186307248", "12586269025 12397382373", "20365011074 18466752436"};
    string C = "26658145585";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 25909763768;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> items = {"1 1", "2 2", "3 3", "5 5", "8 8", "13 14", "21 23", "34 34", "55 53", "89 82", "144 142", "233 235", "377 396", "610 551", "987 1013", "1597 1740", "2584 2442", "4181 4274", "6765 6597", "10946 10777", "17711 16916", "28657 26914", "46368 48685", "75025 74216", "121393 116329", "196418 184797", "317811 316713", "514229 562810", "832040 903812", "1346269 1467109", "2178309 2242274", "3524578 3794603", "5702887 6101405", "9227465 9732172", "14930352 14872594", "24157817 22223120", "39088169 38016695", "63245986 62936636", "102334155 100432094", "165580141 174079566", "267914296 282681693", "433494437 445220144", "701408733 692305452", "1134903170 1123369676", "1836311903 1656472493", "2971215073 2987555400", "4807526976 5258675744", "7778742049 7686222692", "12586269025 11487238088", "20365011074 18373396047"};
    string C = "128321586";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 127671762;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> items = {"1 1", "2 2", "3 3", "5 5", "8 8", "13 14", "21 20", "34 35", "55 58", "89 85", "144 131", "233 251", "377 387", "610 565", "987 1083", "1597 1611", "2584 2531", "4181 4591", "6765 6120", "10946 11603", "17711 16117", "28657 30721", "46368 44862", "75025 81051", "121393 122459", "196418 200047", "317811 302367", "514229 544112", "832040 750914", "1346269 1257213", "2178309 2394003", "3524578 3711488", "5702887 6155515", "9227465 9029070", "14930352 15834904", "24157817 24642138", "39088169 38344308", "63245986 57323835", "102334155 101799139", "165580141 168998600", "267914296 247276306", "433494437 398349374", "701408733 708856848", "1134903170 1181706247", "1836311903 1767653225", "2971215073 2797501472", "4807526976 4578720419", "7778742049 7456837529", "12586269025 11419407566", "20365011074 20327741698"};
    string C = "36417229516";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 35792175786;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> items = {"1 1", "3 3", "8 8", "21 22", "55 58", "144 154", "377 398", "987 1078", "2584 2767", "6765 6246", "17711 17357", "46368 49904", "121393 111673", "317811 315134", "832040 852003", "2178309 2179780", "5702887 5561401", "14930352 13536842", "39088169 36258843", "102334155 94095856", "267914296 263305016", "701408733 686898834", "1836311903 1873835344", "4807526976 4459950680", "12586269025 13081701305", "32951280099 30406291095", "86267571272 78981321516", "225851433717 213523573373", "591286729879 638564057352", "1548008755920 1425704823028", "4052739537881 4064579961123", "10610209857723 10390053437847", "27777890035288 28272247627944", "72723460248141 67233497970436", "190392490709135 174480261235311", "498454011879264 450890031951922", "1304969544928657 1177956759447242", "3416454622906707 3076040435502997", "8944394323791464 8053096735146361", "2 2", "5 5", "13 14", "34 35", "89 84", "233 243", "610 593", "1597 1556", "4181 3995", "10946 10367", "28657 29903"};
    string C = "9001563299090000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 8098231314967143;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> items = {"1 1", "3 3", "8 8", "21 21", "55 52", "144 150", "377 393", "987 1021", "2584 2611", "6765 7256", "17711 16749", "46368 49905", "121393 116358", "317811 344817", "832040 859682", "2178309 2384246", "5702887 5929221", "14930352 16348844", "39088169 35952001", "102334155 108235194", "267914296 290562725", "701408733 650370296", "1836311903 1689483796", "4807526976 5273414934", "12586269025 12290749884", "32951280099 33904549017", "86267571272 86600206204", "225851433717 243494598779", "591286729879 603434002394", "1548008755920 1544473177626", "4052739537881 4284471768036", "10610209857723 9998082476916", "27777890035288 27329885309806", "72723460248141 74289189560416", "190392490709135 208363116701191", "498454011879264 451200536086274", "1304969544928657 1410246998966715", "3416454622906707 3651365113593699", "8944394323791464 8182411795027668", "2 2", "5 5", "13 13", "34 33", "89 81", "233 219", "610 623", "1597 1507", "4181 4495", "10946 11729", "28657 26958"};
    string C = "5177253983543287";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 5388409129786632;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> items = {"1 1", "3 3", "8 8", "21 19", "55 60", "144 134", "377 401", "987 956", "2584 2741", "6765 6724", "17711 17888", "46368 48803", "121393 115089", "317811 298086", "832040 846770", "2178309 1980021", "5702887 5808780", "14930352 15053627", "39088169 41894611", "102334155 102218035", "267914296 261602435", "701408733 675321817", "1836311903 1665579290", "4807526976 4677373220", "12586269025 12698646908", "32951280099 31307729241", "86267571272 92342282283", "225851433717 221570046386", "591286729879 618729920869", "1548008755920 1493316641159", "4052739537881 4365659531554", "10610209857723 11165506325748", "27777890035288 28549763111621", "72723460248141 79820243069060", "190392490709135 200843876437544", "498454011879264 484013245215020", "1304969544928657 1373296540221529", "3416454622906707 3160959940588469", "8944394323791464 9453351648473916", "2 2", "5 5", "13 13", "34 34", "89 96", "233 219", "610 636", "1597 1545", "4181 4050", "10946 11020", "28657 28319"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 10264587355646767;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> items = {"1346269 225793", "317811 750794", "2584 639656", "1597 325486", "610 586837"};
    string C = "840174";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2302773;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> items = {"13 945029", "1346269 955604", "1597 775371", "610 289097", "514229 950657"};
    string C = "685296";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2960154;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> items = {"6765 53657", "610 646643", "514229 303100", "5 49362", "1 427594", "4181 785028", "233 472889", "1597 813890", "144 718205", "1 768323"};
    string C = "492989";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4735591;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> items = {"1597 982037", "144 490175", "5 170953"};
    string C = "807";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 661128;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> items = {"987 409463", "196418 652813"};
    string C = "158242";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 409463;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> items = {"832040 40279", "75025 47625", "233 374552", "5 33802", "317811 10048", "2584 942467"};
    string C = "1160036";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1438725;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> items = {"2584 34469", "21 405282", "5 37122", "21 652203"};
    string C = "2400";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1094607;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> items = {"75025 928683", "17711 430696", "75025 466659", "13 278470", "377 803067"};
    string C = "132168";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2440916;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> items = {"144 230374", "89 70208", "2 105349", "89 584361", "196418 635499", "2584 754875", "21 218724", "233 954934"};
    string C = "46044";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2918825;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> items = {"3 958619", "21 143837", "34 782725", "2 16436"};
    string C = "38";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1741344;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> items = {"13 3947216221196553", "7778742049 5300617698058256", "7778742049 2314042108088470", "591286729879 6836915837292783", "190392490709135 5497157635014606", "1597 9406907217085493", "498454011879264 6684485515094263", "6557470319842 4356732600535569", "39088169 7339643061178026", "514229 2720692051223262", "2584 8271969301874116", "7778742049 3455316532522418", "8 7511022191099343", "13 2291945227062138", "3524578 1992574548651377", "2178309 7812738633580157", "27777890035288 5244402093502967", "8 5131872002863747", "3 3760907914908613", "806515533049393 1729354310928794", "2504730781961 168666274384073", "6765 9378296479429111", "3 42549924670574", "10946 2677152900199816", "5702887 3646321284999119", "10946 9918468972918367", "2584 8702309862414274", "121393 1108729656137238", "21 8678615616847292", "46368 6268252695518274", "591286729879 2806214150098619", "89 4840625884770882", "2584 4390394157313340", "433494437 2300815960486996", "24157817 5736980346355446", "2 3611535031156086", "55 1722013057800999", "1548008755920 6221230670732583", "44945570212853 7779996828252261", "233 940651414830117", "55 3338096145033006", "17711 894296903810146", "46368 2880520649444385", "365435296162 8042287806062956", "6765 2053469718109924", "27777890035288 3238371223957300", "498454011879264 6523797854716989", "1304969544928657 6086277972930234", "121393 2564849120172178", "196418 3163613401003322"};
    string C = "1111734922756210";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 218019124747443224;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> items = {"5527939700884757 5580590160534776", "365435296162 5253130491849750", "28657 2713729882222362", "9227465 6030268386826757", "17167680177565 1710191574567267", "1836311903 5781205657102100", "5 691398073604641", "6557470319842 399999120535189", "53316291173 9291655384314208", "139583862445 3916482001435944", "1134903170 7974728963704436", "20365011074 3476419440982156", "2504730781961 8306909382141431", "75025 6330387461035824", "75025 4791182621147012", "190392490709135 8988815199302077", "806515533049393 9201563876793109", "5 4589134739966225", "514229 1084464104119482", "10610209857723 4986317318631033", "1 822529597320410", "3524578 6851299980143315", "89 5511682772609892", "17711 3897198992508186", "3524578 1437479221927399", "1836311903 8917754229002869", "433494437 7092183600680383", "308061521170129 7431717495967068", "139583862445 8776552028495200", "10610209857723 5695473979141277", "63245986 7753626349945985", "308061521170129 2281880630825841", "5702887 7395621839550061", "89 2280775593085141", "12586269025 5611841483477130", "46368 5597446837161604", "44945570212853 8048267455956471", "14930352 1463409441538902", "3 5792008934446161", "190392490709135 9926297815214785", "514229 6490338598981974", "5527939700884757 8928885902174798", "32951280099 210925630033431", "144 1566106152391577", "10946 3273436514838304", "5527939700884757 7961887313807172", "165580141 272930013689134", "34 3438549764354536", "12586269025 2118473143835681", "28657 3494829032868503"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 237897506712447021;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> items = {"317811 1354155741750856", "5 4454407948830123", "44945570212853 897608394329378", "233 9031434074514343", "3416454622906707 7808547508032060", "39088169 8601999944266374", "2584 7532921949972824", "591286729879 6244857105782331", "24157817 8095141014905829", "1836311903 2657391909952579", "1548008755920 3495090653095023", "27777890035288 4686953862117863", "591286729879 7133765279191961", "3524578 9245070110255233", "13 3119469204133212", "21 2763886158528642", "89 8091252878506676", "2971215073 6725901612731594", "14930352 7614175701727623", "190392490709135 9777340452242410", "610 6969668236627654", "591286729879 7460396251454905", "55 8156695042947416", "832040 3386526110909794", "4807526976 8511543175798883", "9227465 2647681988737985", "2584 1895971334386620", "8 7043693402716122", "1304969544928657 2944537643972869", "17167680177565 278971760756614", "20365011074 8278638528185934", "956722026041 1664909998810057", "1134903170 3313246856395898", "2111485077978050 6470743026132338", "6557470319842 5919263770110759", "121393 9119121417611871", "2504730781961 6911724048838875", "1 1951701849221989", "10946 1632071606113626", "63245986 6442846747190828", "144 9317330419303599", "365435296162 1886408841090590", "233 5079059067338120", "14930352 6703787236082181", "308061521170129 3319349319772908", "55 6419655920335514", "117669030460994 9113526363745160", "267914296 5615445528558781", "53316291173 6754323976070801", "433494437 1914099449052386"};
    string C = "5330000513790244";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 268645762915105951;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> items = {"14930352 2190737072283504", "165580141 1148546895295134", "121393 8412919254229171", "144 4199333945697287", "8944394323791464 9164669593219593", "1 8981859787768325", "4807526976 3174428916512718", "28657 7135105498401751", "121393 2286164785585875", "12586269025 1500256366352612", "27777890035288 7872719893260280", "2111485077978050 3959155630404978", "956722026041 5038950807155107", "610 6173025441424435", "24157817 5578773241792678", "701408733 4609827853745605", "4181 4602365580949988", "233 9749222870292339", "44945570212853 4010110980742806", "14930352 763067312222181", "3 9268105357289596", "139583862445 5218416159368365", "610 9854137579103885", "806515533049393 6461239689920211", "32951280099 1959895561460039", "8944394323791464 6280849895746915", "4181 9258536803179752", "610 3645596076020815", "6765 9945882351236008", "14930352 4789494624555409", "27777890035288 9513962269543589", "17167680177565 5008280869116619", "1548008755920 312168099060870", "5 4479051873432637", "1836311903 9921319348803209", "591286729879 7212370469255603", "34 6840949789501667", "1597 5904054382187970", "610 3463951954609840", "1 1670171774385951", "32951280099 8086392614501899", "28657 154922899673822", "44945570212853 6100114161846868", "832040 2314913021187105", "8944394323791464 4117669681814976", "9227465 6401194522336443", "75025 9452788742261884", "2971215073 3691298999329589", "9227465 705498907296925", "3 9798141939193198"};
    string C = "9547509129202223";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 252819422973776542;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> items = {"2584 7132068717753508", "610 2217369882108320", "1836311903 1534813272304566", "3524578 5582831540541139", "46368 3333346260816252", "17167680177565 3037888269182969", "44945570212853 9635714848406808", "2178309 9541955376492847", "1548008755920 4527839014853359", "13 6173240968393772", "3 5281991399995745", "701408733 8935647119460072", "317811 1761918127749356", "21 5919944023892836", "13 1762385242912703", "1134903170 322291412663893", "1 3756784229763931", "3416454622906707 4001522539986008", "1836311903 8572526473774835", "117669030460994 4259826542355000", "2584 4232182877595766", "433494437 7260890762695355", "13 1419361861449690", "12586269025 2919004138155322", "1836311903 6386256144769618", "7778742049 4042199871872512", "1597 1223315208342239", "39088169 6851438054242891", "2584 5590723805581652", "24157817 488894580716193", "144 6313973946437919", "44945570212853 1580598916812747", "27777890035288 2769198906952542", "190392490709135 7145406279609436", "102334155 5115967692707493", "196418 4798829109364235", "2584 4353904412582403", "3524578 9162072337890210", "701408733 6173518431711111", "308061521170129 6484510104787564", "20365011074 9960382206138867", "6765 326098975736286", "139583862445 4176347745422425", "3416454622906707 228324965276251", "86267571272 8225359676448192", "39088169 7628841666888009", "75025 6073654917886793", "10946 2476328317300146", "956722026041 4276047198188215", "1304969544928657 914640204172665"};
    string C = "963090890675218";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 230745690871707742;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> items = {"2584 6750340280602366", "139583862445 5218873573460919", "21 3219611907283364", "591286729879 6106526336027315", "13 3892213752650289", "5702887 192523188750731", "987 3995053609442796", "4181 3724097054011115", "24157817 7409884521453751", "75025 7644625547133448", "63245986 1824243616644161", "1134903170 2644091684940309", "10610209857723 2355238711588331", "190392490709135 5427768506182702", "317811 5643774232178648", "2178309 177224337285750", "4181 7086584047660881", "72723460248141 4130763987721167", "2971215073 378166797018425", "34 2722543408388777", "17167680177565 3916040122280468", "3416454622906707 5064673416995244", "3 9836489101924235", "21 5485842783320075", "86267571272 94697395380371", "1 9913354629010929", "610 5880919015512932", "28657 9517445255447089", "1346269 5207847745189145", "317811 4191729187809076", "75025 575949822531450", "2 4000925044085927", "514229 5002918034251121", "10610209857723 3061553623631042", "1 3400047525743908", "1836311903 6229616464015310", "4807526976 2556892854658999", "165580141 2111843354028510", "2111485077978050 2820920807373671", "13 2635123978227690", "591286729879 8139408864191776", "1346269 7730638137118374", "514229 2984354771272397", "28657 5472594112795943", "2178309 2215676630684009", "1346269 1787436168890891", "233 6271808449291906", "9227465 6521781505325211", "17711 5773722748201347", "14930352 7313991489236117"};
    string C = "3432464137925372";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 221195718721855164;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> items = {"433494437 7201692158158615", "86267571272 1557859489851836", "1 15753309588112", "1134903170 9609929655855307", "225851433717 3795658420567294", "2504730781961 5969746772420791", "701408733 2164642011803309", "7778742049 2184599728395564", "121393 4546611442232261", "89 6349593172327296", "196418 8651679486162195", "13 1839816345134024", "10946 8943165611801885", "4807526976 2699534467547116", "591286729879 9575439055156517", "956722026041 5834048964274858", "46368 9041372687429956", "17167680177565 9771137027599835", "63245986 9659432081381819", "190392490709135 4342515610114302", "2178309 4524643182403280", "1304969544928657 9094575425530280", "32951280099 6532048224199184", "4181 8308488099870", "10610209857723 1113985166816639", "1836311903 4477831268725020", "75025 3421844967031545", "987 3458878993235149", "5702887 1983362002364754", "86267571272 3052507986458601", "9227465 85281742499483", "2504730781961 7370151337675096", "3524578 5061802470438959", "89 4418876357173674", "165580141 7254082748308024", "8 5649712232731426", "20365011074 9504680747109071", "2504730781961 8611081714239895", "17711 4149428323009626", "53316291173 3926383389376290", "6557470319842 4772170682915590", "1836311903 7667658779205986", "46368 7860146608340975", "39088169 6798346566985911", "75025 4620413229142977", "498454011879264 6023793723357596", "2178309 4189807386011385", "3524578 2533836600539794", "365435296162 9367112010889022", "6765 5584163726960787"};
    string C = "1750906198639295";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 260847349856221185;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> items = {"4807526976 1788791577399485", "987 1709749072488904", "165580141 5198649441313223", "21 1433585963439843", "308061521170129 859965101970064", "4052739537881 49241633560591", "433494437 32101193390413", "86267571272 5689574890487207", "5527939700884757 6110751731704179", "4807526976 8477041951208099", "317811 5928391048409852", "267914296 6114424464269213", "3 763364297139158", "55 7539451756592962", "3524578 7206962264884462", "3 991057653651052", "1836311903 4489517898998020", "34 4748462250426021", "1304969544928657 8258902159600944", "433494437 4382883872181864", "75025 3493358731785439", "1836311903 1647190196182757", "2 2933282310710589", "24157817 279065943530126", "32951280099 4362709621166400", "9227465 3000857164700797", "17711 5156217070496646", "13 5733326618447498", "196418 9996981448436589", "53316291173 3480195809294859", "4807526976 9901814106971077", "24157817 7670068202140809", "433494437 2901240507785533", "20365011074 8910311960666018", "365435296162 7419061514801719", "1304969544928657 4775714301338859", "3524578 3481939670424667", "4807526976 5736993590918746", "28657 5233601684978738", "10946 6158979285342555", "27777890035288 9768191948144476", "7778742049 5809683964843901", "267914296 5654578918710103", "8944394323791464 3284760331755500", "377 2105424322770786", "27777890035288 2267849347021839", "190392490709135 6517974644945838", "514229 7209790376710243", "317811 3600043823767439", "39088169 3871254248095323"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 230850571558245925;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> items = {"308061521170129 5537648992058256", "44945570212853 3374236925190095", "196418 2523676195991369", "190392490709135 3494193696604046", "5527939700884757 8198743567595924", "2971215073 2472017273913486", "806515533049393 2992461025056596", "12586269025 6687328801565038", "2 2987177628304307", "1134903170 725530395688687", "225851433717 1707941688964058", "1548008755920 9799864992206751", "190392490709135 6642627153658148", "8944394323791464 9315642775306817", "21 4749389321650719", "63245986 7844233426145618", "20365011074 1478858693094678", "365435296162 9360677768156905", "5702887 9846457153809298", "10946 1136302871494415", "433494437 359865241962680", "233 6907386629432095", "701408733 2824785553357375", "89 8597476410141327", "34 8956280648319413", "55 7564886273297014", "5 7246588930505009", "377 9847700387660101", "3416454622906707 2654769601821035", "5527939700884757 4841292339776015", "117669030460994 1051439180063238", "1548008755920 6894670370551309", "1134903170 4156784365034462", "806515533049393 8308786453349656", "498454011879264 8731115262289837", "1134903170 3963680748382729", "190392490709135 1562777606147994", "17167680177565 4232189169503264", "610 9908377747567051", "4052739537881 7413675240145642", "10610209857723 8916108289413712", "377 4137100824957400", "317811 9712413826662609", "498454011879264 8419144578938770", "1 3664618012855057", "86267571272 8571193009575648", "433494437 7098065575867016", "832040 362308143675164", "2504730781961 5569306145198306", "5702887 1396434662216177"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 257934526858218449;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> items = {"4181 3215568129579077", "317811 7013408098438560", "498454011879264 7329870579654605", "8944394323791464 9240077615335253", "1836311903 3603431524693307", "139583862445 5505103331903679", "3 1803112568873522", "9227465 4598143185531604", "1597 2760203727101219", "12586269025 9661893816804526", "1548008755920 8885133969086952", "2584 9951004407453701", "2 3163588190652278", "13 5883207593153248", "1836311903 4092289606861433", "102334155 4408101673679080", "165580141 8726769463649604", "498454011879264 7689753937751401", "72723460248141 3337726485576243", "5 2155287556775455", "165580141 8101672637456233", "987 4818076636946422", "24157817 3546356671472379", "44945570212853 52608183390062", "433494437 7135957221695895", "53316291173 3205635117024685", "1134903170 4805641093486333", "2584 5842335508018649", "317811 7968012540786865", "1597 6916961421269684", "832040 6882130011683316", "806515533049393 4534238214733036", "17167680177565 2378840597611816", "806515533049393 8936979331509848", "12586269025 5242112327765893", "121393 6261236338227712", "4052739537881 2834066840854789", "89 8817776285742189", "5527939700884757 1593526022644881", "514229 2053889947815773", "4181 469669440079174", "196418 7186106059785545", "55 4807263792310988", "498454011879264 9911292084387529", "956722026041 6333112739232969", "267914296 1994647343513428", "12586269025 9922288081610815", "6557470319842 6354485502105685", "806515533049393 456112166670559", "34 5514790720113414"};
    string C = "9898870139930526";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 258661418727166060;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> items = {"55 2485171476623686", "1 7502638818155135", "8 2533796449040447", "55 5777029826644651"};
    string C = "40";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 10036435267195582;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> items = {"13 833948041960639"};
    string C = "9";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> items = {"3 5555266989628357", "21 7287296083544998", "2 887449029330684", "13 2797193908661597", "8 2659319354848990", "89 3717642084110204", "55 8336015073226779"};
    string C = "116";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 27522540439241405;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> items = {"89 4069762595813174", "1 1023867735283204", "2 9263883082355702", "8 7350001568117120", "89 6883777871701236"};
    string C = "169";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 24521530257457262;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> items = {"13 7883000161289491", "34 1894833457857704", "8 7504641394671952", "21 8405319817589524", "55 2634357648232937", "13 2576470342110481"};
    string C = "3";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> items = {"55 8129735849841412", "55 5223439863810215"};
    string C = "37";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> items = {"13 6936258348166770", "55 9076158847809526", "2 5250326015048108"};
    string C = "70";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 21262743211024404;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> items = {"34 3403351732675091", "2 5814655156463104", "21 7933496253455274", "3 2204393708396721", "89 1171124659608591", "5 5455338807039555", "3 4942562172691097", "3 6526187235052987", "5 2238344600522618", "8 831760902116753"};
    string C = "170";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 39689454325905038;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> items = {"2 2736802943972321", "34 1372822457077219", "34 6935877870650101", "13 4739169525313338", "89 6303629025700812", "13 9680476729708890", "5 7684176159454550"};
    string C = "9";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 10420979103426871;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> items = {"89 2862521294836713", "2 4455995914171236", "3 5753624374726762", "5 5115098550987838", "89 5236091582947511"};
    string C = "133";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 20560810422833347;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> items = {"44945570212853 4339004123794266", "2971215073 2622658899949747", "2 9204517654926952", "3416454622906707 1092117423526113", "3 2095625820219145", "139583862445 2937630244734164", "196418 989374480765294"};
    string C = "27002342807914";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 17849807100595302;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> items = {"86267571272 5891159839755814", "3 6739667226666545", "1346269 1705343513464951", "701408733 3103429153969593", "8 9242458960453380"};
    string C = "23477295186";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 20790898854554469;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> items = {"17167680177565 6168800072758576", "3 8552337958154429", "2111485077978050 5457181965763711", "1548008755920 3686802939672561", "44945570212853 1789150949563225", "89 4996997741896381"};
    string C = "756375317193209";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 25194089662045172;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> items = {"196418 4120527872815024", "190392490709135 3103722601524802", "433494437 8328676574634692", "806515533049393 4944162248787298", "44945570212853 5058250756504329"};
    string C = "29656491238027";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 12449204447449716;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> items = {"956722026041 4584826216798516", "10946 2842381001701957", "13 5299861634551958", "956722026041 654041176485747", "8944394323791464 6351013123206448", "267914296 6073783385449865", "72723460248141 8657664786408305", "53316291173 1068709343437885"};
    string C = "1105057110331927";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 29181267544834233;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> items = {"4807526976 2041483426921286", "72723460248141 6675895071744833", "9227465 1715734285463873", "806515533049393 131374876606042", "12586269025 7755085346588833", "139583862445 4900678735230380", "8944394323791464 6034203139736221"};
    string C = "3928982809838759";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 23220251742555247;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> items = {"27777890035288 9419696870097445", "53316291173 6312623457097563", "165580141 8848283653257131"};
    string C = "27777900000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 15160907110354694;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> items = {"267914296 4761459669256015", "5702887 2481923615589955", "267914296 9912705082550305", "1346269 6223589410209866"};
    string C = "118680526";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 8705513025799821;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> items = {"2 3631533737402752", "17167680177565 5523223959451811", "8944394323791464 4136108377230477", "267914296 9453957939096761"};
    string C = "803132678468066";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 18608715635951324;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> items = {"86267571272 4811986287787086", "2504730781961 2567758325075839"};
    string C = "2482127866026";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4811986287787086;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> items = {"13 3243729461370540", "34 5364001360273046", "34 7930939812884592", "55 3652750762019563", "1 94210990777682", "34 1552844276314185", "1 6709385287776939", "2 3118343817717492", "21 1882090195086430", "8 5444487163714291", "1 66268306418626", "34 4832617331373138", "8 5657853899248769", "55 2137716588603389", "3 6288895506936178", "5 4757809138206283", "1 6423818276473481", "55 9262894077172905", "55 153599927942681", "34 7122400912766640", "89 3813487683028267", "13 2351407758936646", "8 6541762225554786", "21 9258032969158557", "21 7676730059104446", "8 296282118636618", "55 3597030014971255", "3 3907794124268962", "13 5101255360234878", "2 2733990628544499", "89 9475779830044158", "5 2107049190140712", "2 8915607182956058", "21 7907703032946813", "8 5317601881542821", "8 557551917504772", "21 6778685403887833", "89 9435121254550198", "21 8040579647762260", "2 943127709286298", "1 7275080932408816", "5 6867181364158795", "89 8555312448523356", "8 3859747191451244", "55 5300111381136715", "8 5689369884332306", "89 5160407661794927", "2 8300696660738783", "5 5978603952979098", "1 2615926162215116"};
    string C = "1124";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 248052948402983359;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> items = {"2 3623917492062165", "5 7447247550581064", "1 161057330581078", "34 2780467363305660", "3 3739749113621768", "13 4639815659493246", "3 4728319478113643", "8 1018190857315130", "2 7440829574856338", "8 3542522548964852", "21 1464989729255280", "3 9236903691950360", "89 2027383437287433", "89 1999780114424939", "13 1379445093871666", "8 4177499446650899", "89 5737094801698754", "13 2175184482263617", "1 7120521240368291", "55 1569637064369506", "8 6361307341174506", "2 9151391469892691", "8 1333398983003586", "1 5128356014997348", "3 2073699028929849", "21 7845426573917124", "5 5680371426624894", "34 3458372088997057", "8 8074069951082184", "34 4039231855248640", "2 8390471993550553", "2 1026061595509661", "55 3599147528360180", "3 9501231170178560", "55 7178382202320885", "89 6721156632040262", "5 1589091307026047", "21 6503104385074808", "34 656030839017443", "5 501738910312823", "3 5714515147704542", "55 2988578467691371", "89 9635367871829273", "5 8595732522023259", "13 5407845628349929", "5 218975724429666", "2 2538189746359275", "21 2016626347739523", "89 2958313972888195", "89 2839299376204847"};
    string C = "440";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 182394162846970800;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> items = {"5 4179912616671374", "21 9077735963228218", "34 8084939310107504", "3 2722085080267400", "89 6554051094229096", "2 6206167566766763", "21 5212392302423113", "13 5021997019906876", "21 8148508992257804", "2 8128591644581668", "5 920197208982300", "8 6504017914202530", "3 6833527937423052", "5 5960203959311124", "5 3675259663103070", "3 9190454380112523", "55 6912723373162835", "5 8499577451837170", "13 4215483879380693", "2 6385898383251173", "5 3837516810276641", "8 1988494052304616", "5 6266897779768870", "55 2059420990238984", "21 6302960136955088", "8 1258356647875006", "55 949747448937909", "21 3579326355166572", "3 4126350077511598", "8 3252318738660037", "55 8475783687528299", "3 9240272373700002", "13 4011883886593035", "89 5211673319921340", "3 4590028134760018", "55 6721251017550577", "34 8415710239378565", "8 550367586981724", "89 8175063844444939", "13 724443678081987", "34 5160138011208440", "89 8879162009295336", "55 3381593130882228", "1 7827144277419595", "1 9499313469591004", "13 8162107326351127", "3 664302464835372", "2 5165625780335826", "8 3586837860309778", "21 8198883114998522"};
    string C = "153";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 156803027789181331;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> items = {"55 4418664224944863", "5 9543174283549814", "5 3685611968073633", "34 3105884857986429", "55 3926373731054026", "3 527280248586975", "1 2817908743203201", "5 9012604526987216", "34 1958985210539440", "5 1142799871353998", "34 9549810601103282", "3 5676298046297975", "8 1473406528472802", "5 9564147320274992", "34 3970097543532476", "34 5981445654747961", "5 1319757203561538", "1 1322480427365168", "5 6048744817051904", "55 5168577619671949", "89 5013255021953471", "34 8034533121536693", "21 107583629687371", "21 182155574021010", "8 5648369825471047", "1 5309397868552445", "2 4711763672371144", "55 3359165094247836", "34 5452066029459075", "13 8851588327059215", "21 2931888310801240", "3 5026407515595433", "8 1752276101776687", "89 6954708903545405", "3 563789039450215", "34 9189432418364433", "3 3578928996290819", "21 1617189928378551", "55 512212522595948", "21 688228896198263", "34 5545960722652139", "34 8662709614628783", "34 1610603827452539", "89 2968611666539561", "1 3405465532142269", "5 9708346163110209", "21 6374304536424550", "2 2862748776318922", "55 9781642462620280", "55 4028083016870887"};
    string C = "1099";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 221059062725653202;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> items = {"21 3002687163545530", "2 9783118567695866", "3 5426490879368000", "8 8803330418033206", "21 1149834261436466", "3 9459452319296776", "1 5004613489894455", "89 7445762524363103", "2 2603747910484945", "2 7505118630223250", "3 548598831468617", "1 693945559505307", "3 3856866853102010", "21 5478804707361720", "21 3902856608009088", "34 4571241750183334", "1 3850745883107625", "1 3714227817919743", "3 4528148625189315", "2 1115543408398000", "55 3851187380109434", "1 2856476690107532", "13 7894034479174846", "21 3663076774397727", "8 8436492945659167", "21 9416717958058657", "2 8389437798182037", "5 9373409703019779", "5 1821361369132991", "21 4452679617529370", "8 2941681078253272", "55 1306880864326133", "89 3665196227911712", "55 9633801241362918", "3 2260862676833161", "5 262635967756917", "2 3634276510163400", "55 3635922488820087", "1 6889554085403720", "21 2871205558508613", "21 1358228709222560", "21 5126788522036843", "5 4622368464481222", "34 4839611272649954", "3 8708981696903557", "34 4121210571351317", "21 4503500737829352", "13 107846055708440", "5 6329392703474571", "8 209555019693353"};
    string C = "120";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 150468997352535027;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> items = {"5 555", "8 195", "13 651"};
    string C = "15";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 750;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> items = {"514229 289383", "832040 930886", "1346269 692777", "2178309 636915", "3524578 747793", "5702887 238335", "9227465 885386", "14930352 760492", "24157817 516649", "39088169 641421", "63245986 202362", "102334155 490027", "165580141 368690", "267914296 520059", "433494437 897763", "701408733 513926", "1134903170 180540", "1836311903 383426", "2971215073 89172", "4807526976 455736", "7778742049 5211", "12586269025 595368", "20365011074 702567", "32951280099 956429", "53316291173 465782", "86267571272 21530", "139583862445 722862", "225851433717 665123", "365435296162 174067", "591286729879 703135", "956722026041 513929", "1548008755920 979802", "2504730781961 634022", "4052739537881 723058", "6557470319842 133069", "10610209857723 898167", "17167680177565 961393", "27777890035288 18456", "44945570212853 175011", "72723460248141 478042", "117669030460994 176229", "190392490709135 377373", "308061521170129 484421", "498454011879264 544919", "806515533049393 413784", "1304969544928657 898537", "2111485077978050 575198", "3416454622906707 594324", "5527939700884757 798315", "8944394323791464 664370"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 25033546;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> items = {"32951280099 1", "5702887 1", "1304969544928657 1", "190392490709135 1", "2 1", "2504730781961 1", "72723460248141 1", "1304969544928657 1", "39088169 1", "2971215073 1", "2178309 1", "267914296 1", "514229 1", "196418 1", "10610209857723 1", "498454011879264 1", "3524578 1", "1134903170 1", "3 1", "1836311903 1", "144 1", "17167680177565 1", "13 1", "1836311903 1", "63245986 1", "6557470319842 1", "9227465 1", "8944394323791464 1", "39088169 1", "225851433717 1", "225851433717 1", "34 1", "144 1", "7778742049 1", "2111485077978050 1", "89 1", "1346269 1", "17167680177565 1", "3 1", "44945570212853 1", "1346269 1", "5702887 1", "317811 1", "591286729879 1", "365435296162 1", "144 1", "12586269025 1", "89 1", "53316291173 1", "32951280099 1"};
    string C = "100000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 42;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> items = {"1 798", "2 674", "3 671", "5 298", "8 145", "13 290", "21 543", "34 862", "55 29", "89 853", "144 920", "233 168", "377 733", "610 458", "987 210", "1597 835", "2584 784", "4181 675", "6765 941", "10946 880", "17711 576", "28657 849", "46368 565", "75025 236", "121393 739", "196418 788", "317811 588", "514229 847", "832040 505", "1346269 202"};
    string C = "999999999999999";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 17662;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> items = {"1 1912", "1 5995", "2 23963", "3 6629", "5 9643", "8 14558", "13 12898", "21 26731", "34 27329", "55 4575", "89 32725", "144 752", "1 28121", "1 32483", "2 2852", "3 18996", "5 15297", "8 3151", "13 22191", "21 96", "34 29197", "55 30011", "89 13761", "144 24044", "1 4198", "1 32630", "2 18555", "3 28096", "5 29733", "8 22730", "13 29710", "21 29849", "34 12833", "55 22913", "89 11054", "144 26543", "1 17092", "1 20519", "2 6851", "3 13973", "5 13413", "8 14994", "13 3809", "21 27744", "34 22481", "55 4128", "89 9210", "144 27659"};
    string C = "222";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 565362;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> items = {"1 1", "2 1", "3 1", "5 1", "8 1", "13 1", "21 1", "34 1", "55 1", "89 1", "144 1", "233 1", "377 1", "610 1", "987 1", "1597 1", "2584 1", "4181 1", "6765 1", "10946 1", "17711 1", "28657 1", "46368 1", "75025 1", "121393 1", "196418 1", "317811 1", "514229 1", "832040 1", "1346269 1", "2178309 1", "3524578 1", "5702887 1", "9227465 1", "14930352 1", "24157817 1", "39088169 1", "63245986 1", "102334155 1", "165580141 1", "267914296 1", "433494437 1", "701408733 1", "1134903170 1", "1836311903 1", "2971215073 1", "4807526976 1", "7778742049 1", "12586269025 1", "20365011074 1"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> items = {"1 1", "3 1", "8 1", "21 1", "55 1", "144 1", "377 1", "987 1", "2584 1", "6765 1", "17711 1", "46368 1", "121393 1", "317811 1", "832040 1", "2178309 1", "5702887 1", "14930352 1", "39088169 1", "102334155 1", "267914296 1", "701408733 1", "1836311903 1", "4807526976 1", "12586269025 1", "32951280099 1", "86267571272 1", "225851433717 1", "591286729879 1", "1548008755920 1", "4052739537881 1", "10610209857723 1", "27777890035288 1", "72723460248141 1", "190392490709135 1", "498454011879264 1", "1304969544928657 1", "3416454622906707 1", "8944394323791464 1"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 38;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> items = {"1 41", "2 18467", "3 6334", "5 26500", "8 19169", "13 15724", "21 11478", "34 29358", "55 26962", "89 24464", "144 5705", "233 28145", "377 23281", "610 16827", "987 9961", "1597 491", "2584 2995", "4181 11942", "6765 4827", "10946 5436", "17711 32391", "28657 14604", "46368 3902", "75025 153", "121393 292", "196418 12382", "317811 17421", "514229 18716", "832040 19718", "1346269 19895", "2178309 5447", "3524578 21726", "5702887 14771", "9227465 11538", "14930352 1869", "24157817 19912", "39088169 25667", "63245986 26299", "102334155 17035", "165580141 9894", "267914296 28703", "433494437 23811", "701408733 31322", "1134903170 30333", "1836311903 17673", "2971215073 4664", "4807526976 15141", "7778742049 7711", "12586269025 28253", "20365011074 6868"};
    string C = "100000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 776218;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> items = {"1 1561010756", "2 2072014576", "3 1068729766", "5 226688309", "8 193967313", "13 24510482", "21 838423073", "34 1668279943", "55 1203589472", "89 229118058", "144 1906022075", "233 1703119203", "377 1394870630", "610 1029744837", "987 227622719", "1597 1638473202", "2584 244401522", "4181 617244518", "6765 160334046", "10946 234011408", "17711 214672042", "28657 1480507028", "46368 236260135", "75025 2060101786", "121393 938154237", "196418 935874032", "317811 1570740753", "514229 151090348", "832040 468469687", "1346269 955150262", "2178309 151625011", "3524578 1409545739", "5702887 1143110123", "9227465 1964522422", "14930352 1598599626", "24157817 1222080347", "39088169 410249500", "63245986 136854203", "102334155 1769042599", "165580141 734378516", "267914296 108375386", "433494437 1915439180", "701408733 318288260", "1134903170 104290729", "1836311903 1503255997", "2971215073 465747605", "4807526976 2110853736", "7778742049 2138882950", "12586269025 480494549", "20365011074 1547913811"};
    string C = "99999999999999";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 48486746507;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> items = {"190392490709135 2585", "117669030460994 24711", "72723460248141 1198", "44945570212853 15703", "27777890035288 4525", "17167680177565 4264", "10610209857723 31471", "6557470319842 13536", "4052739537881 20844", "2504730781961 16025", "1548008755920 2257", "956722026041 9825", "591286729879 1209", "365435296162 387", "225851433717 19685", "139583862445 18930", "86267571272 2012", "53316291173 30428", "32951280099 6104", "20365011074 29282", "12586269025 21495", "7778742049 7820", "4807526976 26623", "2971215073 27259", "1836311903 30523", "1134903170 16979", "701408733 17204", "433494437 14215", "267914296 23899", "165580141 27749", "102334155 25313", "63245986 25875", "39088169 31809", "24157817 12632", "14930352 26202", "9227465 15858", "5702887 14593", "3524578 20800", "2178309 32624", "1346269 5765", "1 9123456789", "1 6411", "1 29721", "3 19123456789", "3 19779", "2 3130", "2 5028", "8 1381", "5 22871", "13 24147"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 28247706264;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> items = {"1 1", "1 2", "1 1", "1 2", "1 1", "1 1", "1 1", "1 2", "1 1", "1 2", "1 1", "1 1", "3 3", "8 9", "21 22", "55 55", "144 145", "377 378", "987 987", "2584 2584", "6765 6765", "17711 17712", "46368 46368", "121393 121394", "317811 317812", "832040 832040", "2178309 2178309", "5702887 5702887", "14930352 14930352", "39088169 39088169", "102334155 102334155", "267914296 267914297", "701408733 701408734", "1836311903 1836311903", "4807526976 4807526977", "12586269025 12586269025", "32951280099 32951280099", "86267571272 86267571273", "225851433717 225851433717", "591286729879 591286729879", "1548008755920 1548008755920", "4052739537881 4052739537881", "10610209857723 10610209857723", "27777890035288 27777890035288", "72723460248141 72723460248141", "190392490709135 190392490709135", "498454011879264 498454011879264", "1304969544928657 1304969544928657", "3416454622906707 3416454622906707", "8944394323791464 8944394323791463"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 9750909856840881;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> items = {"1 1998649673", "1 890610174", "2 2145122820", "3 2131960719", "5 1291520122", "8 2001989666", "13 1292287412", "21 1047315948", "34 1505219543", "55 592843673", "89 486402556", "144 1152339665", "233 1098103601", "377 1730337474", "610 1677593854", "987 382090728", "1597 942882179", "2584 242033851", "4181 196170150", "6765 1023300846", "10946 660761035", "17711 1003038648", "28657 395121257", "46368 1762950906", "75025 536674732", "121393 1664234516", "196418 59501594", "317811 968687892", "514229 1256237509", "832040 1329261350", "1346269 110958378", "2178309 1901581365", "3524578 1912882126", "5702887 442107140", "9227465 1842990127", "14930352 688022456", "24157817 677727864", "39088169 1381245266", "63245986 217835686", "102334155 238401968", "165580141 1160636162", "267914296 389483903", "433494437 414082806", "701408733 137358278", "1134903170 157038436", "1836311903 1273861661", "2971215073 1829424765", "4807526976 707387790", "7778742049 1553622396", "12586269025 355475424"};
    string C = "748346296225";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 50857368090;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> items = {"3 3", "5 5", "8 8", "13 13", "21 21", "34 34", "55 55", "89 89", "144 144", "233 233", "377 377", "610 610", "987 987", "1597 1597", "2584 2584", "4181 4181", "6765 6765", "10946 10946", "17711 17711", "28657 28657", "46368 46368", "75025 75025", "121393 121393", "196418 196418", "317811 317811", "514229 514229", "832040 832040", "1346269 1346269", "2178309 2178309", "3524578 3524578", "5702887 5702887", "9227465 9227465", "14930352 14930352", "24157817 24157817", "39088169 39088169", "63245986 63245986", "102334155 102334155", "165580141 165580141", "267914296 267914296", "433494437 433494437", "701408733 701408733", "1134903170 1134903170", "1836311903 1836311903", "2971215073 2971215073", "4807526976 4807526976", "7778742049 7778742049", "12586269025 12586269025", "20365011074 20365011074", "32951280099 32951280099", "53316291173 53316291173"};
    string C = "139283862440";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 139283862438;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> items = {"165580141 8848283653257131", "2 1", "3 1", "5 1", "8 1", "13 1", "21 1", "34 1", "55 1", "89 1", "144 1", "233 1", "377 1", "610 1", "987 1", "1597 1", "2584 1", "4181 1", "6765 1", "10946 1", "17711 1", "28657 1", "46368 1", "75025 1", "121393 1", "196418 1", "317811 1", "514229 1", "832040 1", "1346269 1", "2178309 1", "3524578 1", "5702887 1", "9227465 1", "14930352 1", "24157817 1", "39088169 1", "63245986 1", "102334155 1", "165580141 1", "267914296 1", "433494437 1"};
    string C = "27777900000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 8848283653257172;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> items = {"1 1481765934", "75025 1270216263", "89 812669701", "832040 445349753", "2584 730417257", "165580141 147699712", "3524578 1889772844", "196418 2105754109", "9227465 1949118331", "21 1979932170", "377 1873226918", "34 1486937973", "832040 777206981", "75025 1843638550", "5702887 1883488165", "89 928126552", "514229 1992516191", "121393 849040636", "1 1400427945", "2178309 2038269863", "8 1280937364", "28657 725914711", "39088169 2023351877", "3524578 1840579930", "63245986 1910500676", "233 1856224191", "121393 1718458135", "196418 1764841630", "2178309 185252728", "21 502141744", "987 15934105", "1 904629750", "17711 451230257", "377 561035573", "610 1248402491", "1346269 614127120", "13 1382875696", "89 1436430328", "165580141 120033498", "121393 1277092597", "89 643287357", "121393 1429623094", "13 1888581008", "317811 807426510", "14930352 1853580353", "196418 944216784", "6765 401170802", "144 1225161331", "4181 1339228196", "2584 1182095964"};
    string C = "239946929";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 61152208438;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> items = {"196418 22419592980977", "121393 60083321078674", "1548008755920 76337580226904", "139583862445 98021134882403", "832040 10984166274046", "139583862445 20174171609920", "2971215073 43164685333147", "12586269025 22902804279370", "591286729879 70857542533119", "308061521170129 2165847502180", "86267571272 34951943628320", "377 57291046508349", "139583862445 72403575725957", "514229 1097724350998", "2504730781961 77081768706069", "27777890035288 74796516434851", "55 20566988739985", "190392490709135 28049323024316", "2971215073 16507731468105", "1134903170 46187009864122", "1134903170 26507346877894", "267914296 60952523154604", "308061521170129 35147224542848", "610 81798321055446", "17711 38324965047515", "1304969544928657 38880312744207", "2 16909313448193", "308061521170129 7156956846319", "75025 35835206159951", "32951280099 49815918914822", "6557470319842 90876725587569", "987 99679763471452", "10946 70896161932130", "233 69135534708496", "6765 40769546062310", "86267571272 52202180803546", "832040 9033871705921", "1304969544928657 82621644244652", "10946 14983726108724", "806515533049393 90791093346002", "17711 94463868566657", "3 51225128492860", "121393 20385759500683", "17711 84568315535833", "6765 88058710525904", "34 47303068999466", "14930352 2570628291141", "1548008755920 22799413339512", "8 64311129250791", "806515533049393 20330065598287"};
    string C = "1000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1646486885338712;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> items = {"55 278355642569434", "24157817 463215628976330", "377 951301469665699", "1346269 613950041662031", "10610209857723 276650652928719", "10610209857723 741781603745344", "44945570212853 225473340249875", "1304969544928657 272342267208362", "8 100735871786868", "5702887 395800691399616", "1 212923282238407", "317811 64186686572131", "6557470319842 231815686454692", "12586269025 562904808149855", "377 620377830871910", "4807526976 141782264931141", "1 486759720627878", "1304969544928657 895023105470151", "102334155 705409303351775", "21 717092287139155", "9227465 977476946925165", "2971215073 805649086480364", "2111485077978050 593903902140447", "165580141 684791863934897", "1304969544928657 981176399188562", "2584 364839749447620", "2178309 977588907897253", "12586269025 819165914352591", "10610209857723 348904761596095", "12586269025 358860595797927", "832040 155085729134837", "21 412352935493948", "1 109166279062976", "32951280099 501014898259578", "2971215073 44051511408310", "102334155 64091364581967", "5702887 175739961490066", "117669030460994 935535895318974", "32951280099 59773691174840", "591286729879 874774114619001", "55 596792280924485", "139583862445 76729554849345", "267914296 368917955159180", "196418 597141670192748", "10946 624819051407982", "39088169 570198562416222", "3 111850528166238", "3524578 817261337708018", "12586269025 223760481629991", "2971215073 659234533818200"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 23848532650577200;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> items = {"2 3", "3 4", "5 6", "8 9", "13 14", "21 22", "34 35", "55 56", "89 90", "144 145", "233 234", "377 378", "610 611", "987 988", "1597 1598", "2584 2585", "4181 4182", "6765 6766", "10946 10947", "17711 17712", "28657 28658", "46368 46369", "75025 75026", "121393 121394", "196418 196419", "317811 317812", "514229 514230", "832040 832041", "1346269 1346270", "2178309 2178310", "3524578 3524579", "5702887 5702888", "9227465 9227466", "14930352 14930353", "24157817 24157818", "39088169 39088170", "63245986 63245987", "102334155 102334156", "165580141 165580142", "267914296 267914297", "433494437 433494438", "701408733 701408734", "1134903170 1134903171", "1836311903 1836311904", "2971215073 2971215074", "4807526976 4807526977", "7778742049 7778742050", "12586269025 12586269026", "20365011074 20365011075", "32951280099 32951280100"};
    string C = "12345678901";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 12345678935;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> items = {"433494437 18467", "14930352 26500", "2504730781961 15724", "190392490709135 29358", "377 24464", "24157817 28145", "433494437 16827", "28657 491", "365435296162 11942", "117669030460994 5436", "53316291173 14604", "86267571272 153", "377 12382", "6557470319842 18716", "12586269025 19895", "956722026041 21726", "2 11538", "20365011074 19912", "7778742049 26299", "196418 9894", "5 23811", "5702887 30333", "9227465 4664", "28657 7711", "1134903170 6868", "117669030460994 27644", "701408733 32757", "4181 12859", "1134903170 9741", "10946 778", "72723460248141 3035", "1 1842", "55 30106", "144 8942", "987 22648", "21 23805", "1 6729", "144 15350", "317811 31101", "9227465 3548", "1346269 12623", "8 19954", "72723460248141 11840", "72723460248141 7376", "2 26308", "8 32439", "591286729879 11323", "34 21538", "6765 2082", "165580141 16541"};
    string C = "27777900000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 714080;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> items = {"1 1", "2 2", "3 3", "5 5", "8 8", "13 13", "21 21", "34 34", "55 55", "89 89", "144 144", "233 233", "377 377", "610 610", "987 987", "1597 1597", "2584 2584", "4181 4181", "6765 6765", "10946 10946", "17711 17711", "28657 28657", "46368 46368", "75025 75025", "121393 121393", "196418 196418", "317811 317811", "514229 514229", "832040 832040", "1346269 1346269", "2178309 2178309", "3524578 3524578", "5702887 5702887", "9227465 9227465", "14930352 14930352", "24157817 24157817", "39088169 39088169", "63245986 63245986", "102334155 102334155", "165580141 165580141", "267914296 267914296", "433494437 433494437", "701408733 701408733", "1134903170 1134903170", "1836311903 1836311903", "2971215073 2971215073", "4807526976 4807526976", "7778742049 7778742049", "12586269025 12586269025", "20365011074 20365011074"};
    string C = "53316291170";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 53316291170;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> items = {"196418 196418", "196418 196419", "317811 317811", "317811 317812", "514229 514229", "514229 514230", "832040 832040", "832040 832041", "1346269 1346269", "1346269 1346270", "2178309 2178309", "2178309 2178310", "3524578 3524578", "3524578 3524579", "5702887 5702887", "5702887 5702888", "9227465 9227465", "9227465 9227466", "14930352 14930352", "14930352 14930353", "24157817 24157817", "24157817 24157818", "39088169 39088169", "39088169 39088170", "63245986 63245986", "63245986 63245987", "102334155 102334155", "102334155 102334156", "165580141 165580141", "165580141 165580142", "267914296 267914296", "267914296 267914297", "433494437 433494437", "433494437 433494438", "701408733 701408733", "701408733 701408734", "1134903170 1134903170", "1134903170 1134903171", "1836311903 1836311903", "1836311903 1836311904", "2971215073 2971215073", "2971215073 2971215074", "4807526976 4807526976", "4807526976 4807526977", "7778742049 7778742049", "7778742049 7778742050", "12586269025 12586269025", "12586269025 12586269026", "20365011074 20365011074", "20365011074 20365011075"};
    string C = "65902560198";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 65902560223;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> items = {"1 3137993", "1 8610484620258096", "3 2729212667165441", "3 3186912716179546", "8 3722383542567376", "8 820121547479406", "21 705693384085443", "21 597242329329657", "55 9172847036790647", "55 7746648932792553", "144 6976749784417096", "144 7179828530664130", "377 1626258532949645", "377 4660204524665364", "987 8256764127902948", "987 4817663114918493", "2584 8743350128729420", "2584 7727532697645988", "6765 4925279888793600", "6765 8272766202029689", "17711 1410562214350423", "17711 5008077602167585", "46368 5929345000964899", "46368 7744780065065764", "121393 7704886870810695", "121393 5575077920603009", "317811 6810856559285125", "317811 9554562464405556", "832040 9983711424378049", "832040 6761659529569503", "2178309 858903577232174", "2178309 4952781188168381", "5702887 5099662957332264", "5702887 9531930068483378", "14930352 3387111300760752", "14930352 7053506998893721", "39088169 7740451174957266", "39088169 1977072014364709", "102334155 9135985178419555", "102334155 5892807986470912", "267914296 6893712528783322", "267914296 936437262892015", "701408733 2800253987718465", "701408733 1612342727318830", "1836311903 5436854296079223", "1836311903 1743640015706952", "4807526976 2681213817745731", "4807526976 5767954749815580", "12586269025 2851897515594474", "12586269025 6097651273968996"};
    string C = "12586269025";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 247782871977500638;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> items = {"196418 22419592980977", "121393 60083321078674", "1548008755920 76337580226904", "139583862445 98021134882403", "832040 10984166274046", "139583862445 20174171609920", "2971215073 43164685333147", "12586269025 22902804279370", "591286729879 70857542533119", "308061521170129 2165847502180", "86267571272 34951943628320", "377 57291046508349", "139583862445 72403575725957", "514229 1097724350998", "2504730781961 77081768706069", "27777890035288 74796516434851", "55 20566988739985", "190392490709135 28049323024316", "2971215073 16507731468105", "1134903170 46187009864122", "1134903170 26507346877894", "267914296 60952523154604", "308061521170129 35147224542848", "610 81798321055446", "17711 38324965047515", "1304969544928657 38880312744207", "2 16909313448193", "308061521170129 7156956846319", "75025 35835206159951", "32951280099 49815918914822", "6557470319842 90876725587569", "987 99679763471452", "10946 70896161932130", "233 69135534708496", "6765 40769546062310", "86267571272 52202180803546", "832040 9033871705921", "1304969544928657 82621644244652", "10946 14983726108724", "806515533049393 90791093346002", "17711 94463868566657", "3 51225128492860", "121393 20385759500683", "17711 84568315535833", "6765 88058710525904", "34 47303068999466", "14930352 2570628291141", "1548008755920 22799413339512", "8 64311129250791", "806515533049393 20330065598287"};
    string C = "1000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2150027525512738;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> items = {"514229 514234", "12586269025 12586269020", "165580141 165580136", "956722026041 956722026050", "701408733 701408746", "28657 28657", "2178309 2178321", "17167680177565 17167680177567", "63245986 63245996", "514229 514227", "165580141 165580137", "1134903170 1134903185", "102334155 102334161", "3524578 3524588", "46368 46368", "102334155 102334157", "225851433717 225851433724", "956722026041 956722026041", "12586269025 12586269035", "24157817 24157814", "1134903170 1134903167", "1134903170 1134903173", "17711 17712", "12586269025 12586269031", "317811 317816", "165580141 165580154", "12586269025 12586269022", "121393 121390", "20365011074 20365011081", "1836311903 1836311906", "1836311903 1836311899", "267914296 267914298", "53316291173 53316291182", "20365011074 20365011082", "6557470319842 6557470319849", "5702887 5702889", "225851433717 225851433712", "20365011074 20365011083", "53316291173 53316291185", "9227465 9227463", "14930352 14930359", "4807526976 4807526989", "9227465 9227474", "17711 17723", "196418 196428", "53316291173 53316291171", "317811 317810", "196418 196424", "267914296 267914303", "225851433717 225851433718"};
    string C = "17734330548964";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 17734330544620;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> items = {"34 3748", "24157817 3851", "8 6498", "75025 25392", "1346269 731", "21 15138", "514229 18329", "34 23007", "10946 13729", "63245986 2480", "2178309 22183", "1 30718", "196418 19070", "4807526976 871", "4181 9682", "365435296162 12305", "28657 10521", "1 13886", "2504730781961 25543", "121393 24353", "34 6081", "433494437 9201", "63245986 28949", "13 17211", "32951280099 26088", "3 16508", "1548008755920 21168", "1548008755920 495", "63245986 9891", "32951280099 164", "1548008755920 13422", "165580141 16082", "514229 31531", "53316291173 30830", "4807526976 31629", "21 16892", "53316291173 27998", "17711 2470", "24157817 26924", "2584 11915", "2584 23103", "4181 8793", "34 19662", "12586269025 18718", "144 27762", "53316291173 2907", "102334155 18138", "12586269025 20059", "17711 9921", "9227465 18114"};
    string C = "100000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 484707;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> items = {"196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812", "196418 196418", "317811 317812"};
    string C = "4910450";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4910450;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> items = {"5 53316291173", "8 53316291173", "13 53316291173", "21 53316291173", "34 53316291173", "55 53316291173", "89 53316291173", "144 53316291173", "233 53316291173", "377 53316291173", "610 53316291173", "987 53316291173", "1597 53316291173", "2584 53316291173", "4181 53316291173", "6765 53316291173", "10946 53316291173", "17711 53316291173", "28657 53316291173", "46368 53316291173", "75025 53316291173", "121393 53316291173", "196418 53316291173", "317811 53316291173", "514229 53316291173", "832040 53316291173", "1346269 53316291173", "2178309 53316291173", "3524578 53316291173", "5702887 53316291173", "9227465 53316291173", "14930352 53316291173", "24157817 53316291173", "39088169 53316291173", "63245986 53316291173", "102334155 53316291173", "165580141 53316291173", "267914296 53316291173", "433494437 53316291173", "701408733 53316291173", "1134903170 53316291173", "1836311903 53316291173", "2971215073 53316291173", "4807526976 53316291173", "7778742049 53316291173", "12586269025 53316291173", "20365011074 53316291173", "32951280099 53316291173", "53316291173 53316291173", "86267571272 53316291173"};
    string C = "100000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1759437608709;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> items = {"2971215073 90535019", "5702887 379226784", "4052739537881 811767833", "24157817 60437167", "17711 93555916", "1 528314725", "102334155 443834941", "1836311903 978706111", "27777890035288 819983498", "46368 784283710", "32951280099 882546655", "34 67833764", "8 399119553", "39088169 284974410", "2111485077978050 319994614", "514229 566925857", "10610209857723 428150549", "2504730781961 321602371", "806515533049393 948209318", "17711 420002101", "10946 931844853", "34 950577852", "956722026041 903621240", "806515533049393 73270616", "498454011879264 62359770", "2178309 535886177", "46368 544779683", "46368 605378493", "102334155 723977606", "27777890035288 432629564", "377 906721864", "1597 581675920", "13 338355016", "34 750730732", "4181 874909871", "610 613408567", "4052739537881 396189492", "89 187298285", "75025 276306060", "365435296162 681131411", "701408733 741965933", "4052739537881 660936148"};
    string C = "582026046";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 12850359907;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> items = {"13 625241", "21 220172", "34 612738", "55 476267", "89 689885", "144 604360", "233 971159", "377 373170", "610 517984", "987 990680", "1597 626077", "2584 140077", "4181 166865", "6765 179506", "10946 490228", "17711 519726", "28657 157027", "46368 732292", "75025 882149", "121393 609934", "196418 104057", "317811 772886", "514229 169879", "832040 717917", "1346269 579244", "2178309 634891", "3524578 865003", "5702887 490035", "9227465 683132", "14930352 43846", "24157817 615092", "39088169 918949", "63245986 374544", "102334155 12138", "165580141 227222", "267914296 346643", "433494437 228331", "701408733 220601", "1134903170 724986", "1836311903 288479"};
    string C = "20000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 15112546;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> items = {"121393 255691982", "433494437 879618976", "317811 1037629069", "2971215073 642322679", "14930352 1045822780", "1836311903 762336446", "28657 403660763", "1 1034014197", "63245986 1208733034", "1 593642396", "8 952157417", "3 551709875", "28657 415389016", "4807526976 44503098", "233 1037950391", "267914296 182510897", "121393 969026822", "10946 102019736", "3524578 332005957", "12586269025 913518447", "5702887 1224477812", "55 437158582", "1 1137560211", "987 1099563885", "14930352 852708258", "1 720885908", "21 493309601", "832040 411613483", "2584 840819344", "9227465 624167986", "63245986 702490223", "196418 1152903337", "4181 859777342", "1134903170 1134106000", "2178309 119933437", "2971215073 362129895", "121393 580548524", "4181 605531310", "46368 1048875339", "46368 342529253", "121393 990234074", "2971215073 25545100", "2 528012377", "7778742049 765067683", "8 443665352", "610 381248554", "21 860580647", "8 1300711457", "8 1244078454", "55 27473032"};
    string C = "987654321987";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 34681970438;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> items = {"3 3", "8 8", "21 21", "55 55", "144 144", "377 377", "987 986", "2584 2585", "6765 6765", "17711 17712", "46368 46368", "121393 121394", "317811 317811", "514229 514228", "1346269 1346268", "2178309 2178309", "3524578 3524577", "9227465 9227464", "24157817 24157817", "63245986 63245986", "165580141 165580142", "267914296 267914296", "433494437 433494436", "701408733 701408733", "1134903170 1134903171", "1836311903 1836311903", "4807526976 4807526975", "12586269025 12586269026", "20365011074 20365011074", "53316291173 53316291172", "86267571272 86267571271", "139583862445 139583862447", "225851433717 225851433717", "365435296162 365435296161", "591286729879 591286729879", "956722026041 956722026042", "1548008755920 1548008755921", "2504730781961 2504730781961", "4052739537881 4052739537889", "6557470319842 6557470319842", "10610209857723 10610209857721", "17167680177565 17167680177565", "27777890035288 27777890035288", "44945570212853 44945570212852", "72723460248141 72723460248140", "117669030460994 117669030460993", "190392490709135 190392490709136", "308061521170129 308061521170129", "498454011879264 498454011879266", "806515533049393 806515533049393"};
    string C = "9999999999999999";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2111441213535419;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> items = {"1 2", "2 2", "3 3", "5 5", "8 8", "13 13", "21 21", "34 34", "55 55", "89 89", "144 144", "233 233", "377 377", "610 610", "987 987", "1597 1597", "2584 2584", "4181 4181", "6765 6765", "10946 10946", "17711 17711", "28657 28657", "46368 46368", "75025 75025", "121393 121393", "196418 196418", "317811 317811", "514229 514229", "832040 832040", "1346269 1346269", "2178309 2178309", "3524578 3524578", "5702887 5702887", "9227465 9227465", "14930352 14930352", "24157817 24157817", "39088169 39088169", "63245986 63245986", "102334155 102334155", "165580141 165580141", "267914296 267914296", "433494437 433494437", "701408733 701408733", "1134903170 1134903170", "1836311903 1836311903", "2971215073 2971215073", "4807526976 4807526976", "7778742049 7778742049", "12586269025 12586269025", "20365011074 20365011073"};
    string C = "20365011073";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 20365011074;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> items = {"267914296 6334", "956722026041 15724", "233 26962", "20365011074 28145", "39088169 9961", "46368 11942", "190392490709135 32391", "4181 153", "956722026041 17421", "2111485077978050 19895", "27777890035288 14771", "806515533049393 19912", "8 17035", "44945570212853 23811", "1134903170 17673", "6557470319842 7711", "2584 25547", "3524578 32757", "190392490709135 8723", "190392490709135 778", "308061521170129 22190", "7778742049 30106", "308061521170129 19264", "514229 23805", "365435296162 24370", "6557470319842 31101", "591286729879 19629", "27777890035288 19954", "24157817 4966", "1134903170 26308", "4181 24626", "377 21538", "20365011074 22929", "8 31115", "39088169 22704", "75025 2306", "8 5021", "267914296 19072", "1346269 26777", "32951280099 16512", "165580141 9161", "806515533049393 24767", "17711 4031", "165580141 1150", "987 13966", "5527939700884757 30191", "72723460248141 15457", "267914296 10383", "4807526976 32209", "34 18588"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 891947;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> items = {"1 1", "1 1", "2 2", "3 3", "5 5", "8 8", "13 13", "21 21", "34 34", "55 55", "89 89", "144 144", "233 233", "377 377", "610 610", "987 987", "1597 1597", "2584 2584", "4181 4181", "6765 6765", "10946 10946", "17711 17711", "28657 28657", "46368 46368", "75025 75025", "121393 121393", "196418 196418", "317811 317811", "514229 514229", "832040 832040", "1346269 1346269", "1346269 10000", "2178309 2178309", "3524578 3524578", "5702887 5702887", "9227465 9227465", "14930352 16930352", "14930352 14930351", "24157817 24157817", "39088169 39088169", "63245986 63245986", "102334155 102334155", "165580141 165580141", "267914296 267914296", "433494437 433494437", "701408733 701408733", "1134903170 1134903170", "1836311903 1836311903", "2971215073 2971215073", "4807526976 4807526976"};
    string C = "1836311903";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1838311903;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> items = {"1 2", "2 3", "3 4", "5 6", "8 9", "13 14", "21 22", "34 35", "55 56", "89 90", "144 145", "233 234", "377 378", "610 611", "987 988", "1597 1598", "2584 2585", "4181 4182", "6765 6766", "10946 10947", "17711 17712", "28657 28658", "46368 46369", "75025 75026", "121393 121394", "196418 196419", "317811 317812", "514229 514230", "832040 832041", "1346269 1346270", "2178309 2178310", "3524578 3524579", "5702887 5702888", "9227465 9227466", "14930352 14930353", "24157817 24157818", "39088169 39088170", "63245986 63245987", "102334155 102334156", "165580141 165580142", "267914296 267914297", "433494437 433494438", "701408733 701408734", "1134903170 1134903171", "1836311903 1836311904", "2971215073 2971215074", "4807526976 4807526977", "7778742049 7778742050", "12586269025 12586269026", "20365011074 20365011075"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 53316291221;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> items = {"89 89", "144 144", "233 233", "377 377", "610 610", "987 987", "1597 1597", "2584 2584", "4181 4181", "6765 6765", "10946 10946", "17711 17711", "28657 28657", "46368 46368", "75025 75025", "121393 121393", "196418 196418", "317811 317811", "514229 514229", "832040 832040", "1346269 1346269", "2178309 2178309", "3524578 3524578", "5702887 5702887", "9227465 9227465", "14930352 14930352", "24157817 24157817", "39088169 39088169", "63245986 63245986", "102334155 102334155", "165580141 165580141", "267914296 267914296", "433494437 433494437", "701408733 701408733", "1134903170 1134903170", "1836311903 1836311903", "2971215073 2971215073", "4807526976 4807526976", "7778742049 7778742049", "12586269025 12586269025", "20365011074 20365011074", "32951280099 32951280099", "53316291173 53316291173", "86267571272 86267571272", "139583862445 139583862445", "225851433717 225851433717", "365435296162 365435296162", "591286729879 591286729879", "956722026041 956722026041", "1548008755920 1548008755920"};
    string C = "4052738191468";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4052738191468;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> items = {"1 1804289383", "2 1681692777", "3 1957747793", "3 719885386", "8 596516649", "13 1025202362", "21 783368690", "21 2044897763", "34 1365180540", "55 304089172", "89 35005211", "233 294702567", "233 336465782", "610 278722862", "987 2145174067", "987 1101513929", "1597 1315634022", "4181 1369133069", "4181 1059961393", "6765 628175011", "17711 1131176229", "28657 859484421", "46368 608413784", "46368 1734575198", "75025 149798315", "121393 1129566413", "196418 412776091", "514229 1911759956", "514229 137806862", "1346269 982906996", "2178309 511702305", "3524578 1937477084", "5702887 572660336", "9227465 805750846", "14930352 1100661313", "24157817 1141616124", "39088169 939819582", "63245986 1998898814", "63245986 610515434", "102334155 1374344043", "165580141 1477171087", "267914296 945117276", "433494437 1780695788", "1134903170 491705403", "1836311903 752392754", "1836311903 2053999932", "2971215073 1411549676", "4807526976 943947739", "7778742049 855636226", "20365011074 1469348094"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 53080632549;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> items = {"14930352 421640", "20365011074 464373", "1548008755920 661298", "5702887 578107", "139583862445 108475", "225851433717 322431", "20365011074 354178", "2971215073 20980", "5702887 277332", "9227465 296768", "24157817 184967", "32951280099 563775", "7778742049 205051", "20365011074 197230", "3524578 624877", "225851433717 797925", "591286729879 264847", "1836311903 228179", "24157817 704574", "7778742049 138735", "2504730781961 714398", "39088169 106140", "86267571272 361473", "165580141 576123", "86267571272 172350", "14930352 144965", "591286729879 367999", "2504730781961 981662", "86267571272 71651", "591286729879 738282", "2178309 895583", "4807526976 162841", "102334155 18583", "1134903170 398254", "591286729879 277360", "225851433717 365309", "53316291173 974035", "165580141 486329", "1548008755920 581323", "225851433717 227525", "591286729879 82778", "1134903170 870202", "1836311903 670925", "956722026041 506458", "102334155 500431", "1836311903 117845", "225851433717 834801", "14930352 76361", "24157817 65439", "225851433717 729689"};
    string C = "7463218746987";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 18215473;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> items = {"1 2", "2 2", "3 3", "5 5", "8 8", "13 13", "21 21", "34 34", "55 55", "89 89", "144 144", "233 233", "377 377", "610 610", "987 987", "1597 1597", "2584 2584", "4181 4181", "6765 6765", "10946 10946", "17711 17711", "28657 28657", "46368 46368", "75025 75025", "121393 121393", "196418 196418", "317811 317811", "514229 514229", "832040 832040", "1346269 1346269", "2178309 2178309", "3524578 3524578", "5702887 5702887", "9227465 9227465", "14930352 14930352", "24157817 24157817", "39088169 39088169", "63245986 63245986", "102334155 102334155", "165580141 165580141", "267914296 267914296", "433494437 433494437", "701408733 701408733", "1134903170 1134903170", "1836311903 1836311903", "2971215073 2971215073", "4807526976 4807526976", "7778742049 7778742049", "12586269025 12586269025", "20365011074 20365011074"};
    string C = "1000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 53316291172;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> items = {"8 664370", "832040 566413", "233 803526", "1597 776091", "121393 268980", "6765 759956", "4181 241873", "6765 806862", "317811 999170", "317811 906996", "9227465 497281", "165580141 702305", "3 420925", "3 477084", "3 336327", "196418 660336", "196418 126505", "6765 750846", "5702887 621729", "267914296 661313", "13 925857", "6765 616124", "34 353895", "377 819582", "987 100545", "6765 898814", "514229 233367", "21 515434", "2971215073 990364", "1836311903 344043", "2178309 313750", "102334155 171087", "610 426808", "63245986 117276", "5 947178", "2584 695788", "1346269 393584", "6765 705403", "89 502651", "46368 392754", "55 612399", "75025 999932", "17711 95060", "6765 549676", "2 993368", "144 947739", "3524578 210012", "1 636226", "6765 698586", "433494437 348094"};
    string C = "1000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 27152601;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> items = {"514229 2", "832040 3", "1346269 1", "2178309 7", "3524578 1", "5702887 1", "9227465 1", "14930352 1", "24157817 1", "39088169 1", "63245986 1", "102334155 1", "165580141 1", "267914296 1", "433494437 1", "701408733 1", "1134903170 1", "1836311903 1", "2971215073 1", "4807526976 1", "7778742049 1", "12586269025 1", "20365011074 1", "32951280099 1", "53316291173 1", "86267571272 1", "139583862445 1", "225851433717 1", "365435296162 1", "591286729879 1", "956722026041 1", "1548008755920 1", "2504730781961 1", "4052739537881 1", "6557470319842 1", "10610209857723 1", "17167680177565 1", "27777890035288 1", "44945570212853 1", "72723460248141 1", "117669030460994 1", "190392490709135 1", "308061521170129 1", "498454011879264 3", "806515533049393 1", "1304969544928657 1", "2111485077978050 7", "3416454622906707 2", "5527939700884757 1", "8944394323791464 1"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 66;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> items = {"1 41", "1 467", "2 334", "3 500", "5 169", "8 724", "13 478", "21 358", "34 962", "55 464", "89 705", "144 145", "233 281", "377 827", "610 961", "987 491", "1597 995", "2584 942", "4181 827", "6765 436", "10946 391", "17711 604", "28657 902", "46368 153", "75025 292", "121393 382", "196418 421", "317811 716", "514229 718", "832040 895", "1346269 447", "2178309 726", "3524578 771", "5702887 538", "9227465 869", "14930352 912", "24157817 667", "39088169 299", "63245986 35", "102334155 894"};
    string C = "27777900000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 22739;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> items = {"1 1", "2 2", "3 3", "8 8", "21 21", "55 55", "144 144", "377 377", "987 987", "2584 2584", "6765 6766", "17711 17711", "46368 46367", "121393 121393", "317811 317811", "832040 832040", "2178309 2178309", "5702887 5702887", "14930352 14930352", "39088169 39088169", "102334155 102334155", "267914296 267924296", "433494437 433493437", "701408733 701408733", "1134903170 4644641134903170", "1836311903 1836411903", "2971215073 2971215073", "4807526976 4807526976", "7778742049 7778743049", "12586269025 12586269025", "20365011074 20365011074", "32951280099 32951280099", "53316291173 53316291193", "139583862445 139583862445", "225851433717 225851433717", "365435296162 365435296162", "591286729879 591286729879", "956722026041 956712026041", "2504730781961 2504730781963", "4052739537881 4052739537881", "6557470319842 6557470319842", "10610209857723 10610209857723", "17167680177565 17167680177565", "27777890035288 27777890035288", "44945570212853 44945570211853", "117669030460994 117669030460994", "190392490709135 190392490709135", "308061521170129 308060521170129", "498454011879264 497454011879264", "806515533049393 806515433049393"};
    string C = "500000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 5144638906419006;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> items = {"3 2", "3 3"};
    string C = "3";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> items = {"1 366239366239366", "2 366239366239366", "3 366239366239366", "5 366239366239366", "8 366239366239366", "13 366239366239366", "21 366239366239366", "34 366239366239366", "55 366239366239366", "89 366239366239366", "144 366239366239366", "233 366239366239366", "377 366239366239366", "610 366239366239366", "987 366239366239366", "1597 366239366239366", "2584 366239366239366", "4181 366239366239366", "6765 366239366239366", "10946 366239366239366", "17711 366239366239366", "28657 366239366239366", "46368 366239366239366", "75025 366239366239366", "121393 366239366239366", "196418 366239366239366", "317811 366239366239366", "514229 366239366239366", "832040 366239366239366", "1346269 366239366239366", "2178309 366239366239366", "3524578 366239366239366", "5702887 366239366239366", "9227465 366239366239366", "14930352 366239366239366", "24157817 366239366239366", "39088169 366239366239366", "63245986 366239366239366", "102334155 366239366239366", "165580141 366239366239366", "267914296 366239366239366", "433494437 366239366239366", "701408733 366239366239366", "1134903170 366239366239366", "1836311903 366239366239366", "2971215073 366239366239366", "4807526976 366239366239366", "7778742049 366239366239366", "12586269025 366239366239366", "20365011074 366239366239366"};
    string C = "206961713560";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 18311968311968300;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> items = {"1 1", "2 1", "3 1", "5 1", "8 1", "13 1", "21 1", "34 1", "55 1", "89 1", "144 1", "233 1", "377 1", "610 1", "987 1", "1597 1", "2584 1", "4181 1", "6765 1", "10946 1", "17711 1", "28657 1", "46368 1", "75025 1", "121393 1", "196418 1", "317811 1", "514229 1", "832040 1", "1346269 1", "2178309 1", "3524578 1", "5702887 1", "9227465 1", "14930352 1", "24157817 1", "39088169 1", "63245986 1", "102334155 1", "165580141 1", "267914296 1", "433494437 1", "701408733 1", "1134903170 1", "1836311903 1", "2971215073 1", "4807526976 1", "7778742049 1", "12586269025 1", "20365011074 1"};
    string C = "30000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> items = {"1 5568657551", "2 3741400628", "3 5942175133", "5 6245155410", "8 8106595704", "13 1178329597", "21 3929080459", "34 9387706091", "55 5646925740", "89 4523984742", "144 1314089973", "233 3174878201", "377 8857969359", "610 8496945140", "987 8955575584", "1597 9738099767", "2584 6253335814", "4181 4707238877", "6765 9340249085", "10946 2120050879", "17711 435768029", "28657 879660003", "46368 1098515105", "75025 7067376836", "121393 5057969137", "196418 833815864", "317811 208029023", "514229 1886562748", "832040 99595269", "1346269 7041281216", "2178309 9180929543", "3524578 7793688660", "5702887 3342795133", "9227465 2316556500", "14930352 7844670323", "24157817 206373123", "39088169 2774388716", "63245986 997362794", "102334155 3203328890", "165580141 8506283227", "267914296 8050974852", "433494437 2831131324", "701408733 1305722856", "1134903170 3943171929", "1836311903 9133962484", "2971215073 4708372002", "4807526976 1048615589", "7778742049 4556480557", "12586269025 6734723540", "20365011074 6369936432"};
    string C = "123456789";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 175296418962;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> items = {"832040 832040", "55 44", "5702887 5132598", "7778742049 6222993639", "832040 915244", "956722026041 1052394228645", "701408733 631267859", "12586269025 10069015220", "102334155 81867324", "6557470319842 5901723287857", "17167680177565 13734144142052", "17711 15939", "267914296 294705725", "701408733 701408733", "10610209857723 10610209857723", "27777890035288 22222312028230", "377 301", "139583862445 139583862445", "24157817 24157817", "267914296 241122866", "2584 2067", "4807526976 5288279673", "13 13", "144 144", "2178309 1742647", "8 7", "591286729879 591286729879", "102334155 102334155", "2584 2584", "17167680177565 15450912159808", "6557470319842 5245976255873", "1134903170 907922536", "2504730781961 2003784625568", "13 14", "365435296162 365435296162", "267914296 241122866", "4052739537881 4458013491669", "28657 31522", "6765 6765", "987 888", "4181 4181", "365435296162 401978825778", "3 3", "196418 216059", "165580141 132464112", "55 44", "377 377", "1548008755920 1238407004736", "5702887 5132598", "365435296162 328891766545"};
    string C = "234254556754";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 164536561049;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> items = {"4181 2", "1 5", "121393 10", "55 9", "987 3", "2971215073 6", "514229 2", "433494437 2", "701408733 6", "39088169 8", "8 2", "5 3", "5702887 3", "2584 2", "2971215073 9", "317811 8", "102334155 2", "377 10", "20365011074 8", "1836311903 6", "233 4", "9227465 3", "987 4", "233 2", "6765 4", "1836311903 8", "34 3", "89 8", "433494437 4", "832040 10", "24157817 7", "701408733 1", "21 9", "701408733 1", "12586269025 5", "13 7", "1346269 1", "1 1", "2 7", "12586269025 4", "75025 10", "8 5", "267914296 7", "317811 7", "55 2", "165580141 5", "75025 7", "102334155 8", "5702887 9", "433494437 10"};
    string C = "10000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 244;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> items = {"1 1", "2 2", "3 3", "5 5", "8 8", "13 13", "21 21", "34 34", "55 55", "89 89", "144 144", "233 233", "377 377", "610 610", "987 987", "1597 1597", "2584 2584", "4181 4181", "6765 6765", "10946 10946", "17711 17711", "28657 28657", "46368 46368", "75025 75025", "121393 121393", "196418 196418", "317811 317811", "514229 514229", "832040 832040", "1346269 1346269", "2178309 2178309", "3524578 3524578", "5702887 5702887", "9227465 9227465"};
    string C = "1000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 24157815;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> items = {"10946 1033117505", "39088169 388452414", "17167680177565 1413476559", "13 1685221854", "20365011074 328585340", "10610209857723 903589905", "24157817 2125666089", "55 1947756068", "1548008755920 1876660378", "20365011074 1227151449", "591286729879 1302460437", "28657 565082589", "121393 1179054541", "5702887 651804848", "4807526976 1495591790", "7778742049 512996642", "4807526976 2131066416", "514229 2131965164", "17711 1754175399", "4052739537881 1548702782", "2504730781961 643209571", "139583862445 2042203304", "225851433717 1231551534", "14930352 1546408351", "3 1304745104", "1134903170 1386897834", "1134903170 1266723909", "46368 263711916", "44945570212853 472408449", "144 1675463635", "1346269 1920344691", "20365011074 201742239", "196418 942425685", "956722026041 1153503138", "10610209857723 1855927125", "308061521170129 484394529", "44945570212853 859531312", "21 973045062", "365435296162 74106261", "2971215073 904327463", "89 998045918", "2504730781961 1838573258", "121393 2095722072", "8 415580981", "72723460248141 870318291", "1597 241163466", "196418 2132021245", "1134903170 399623146", "196418 629129461", "102334155 1476080720"};
    string C = "27777900000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 53497788794;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> items = {"1 1", "1 1", "2 4", "3 9", "5 16", "8 25", "13 36", "21 49", "34 64", "55 81", "89 100", "144 121", "233 144", "377 169", "610 196", "987 225", "1597 256", "2584 289", "4181 324", "6765 361", "10946 400", "17711 441", "28657 484", "46368 529", "75025 576", "121393 625", "196418 676", "317811 729", "514229 784", "832040 841", "1346269 900", "2178309 961", "3524578 1024", "5702887 1089", "9227465 1156", "14930352 1225", "24157817 1296", "39088169 1369", "63245986 1444", "102334155 1521", "165580141 1600", "267914296 1681", "433494437 1764", "701408733 1849", "1134903170 1936", "1836311903 2025", "2971215073 2116", "4807526976 2209", "7778742049 2304", "12586269025 2401"};
    string C = "9999999999999999";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 40426;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> items = {"5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123", "5 123"};
    string C = "100";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2460;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> items = {"1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1"};
    string C = "1000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> items = {"498454011879264 1000000000", "498454011879264 1000000000", "498454011879264 1000000000", "498454011879264 1000000000", "498454011879264 1000000000", "498454011879264 1000000000", "498454011879264 1000000000", "498454011879264 1000000000", "498454011879264 1000000000", "498454011879264 1000000000", "806515533049393 1000000000", "806515533049393 1000000000", "806515533049393 1000000000", "806515533049393 1000000000", "806515533049393 1000000000", "806515533049393 1000000000", "806515533049393 1000000000", "806515533049393 1000000000", "806515533049393 1000000000", "806515533049393 1000000000", "1304969544928657 1000000000", "1304969544928657 1000000000", "1304969544928657 1000000000", "1304969544928657 1000000000", "1304969544928657 1000000000", "1304969544928657 1000000000", "1304969544928657 1000000000", "1304969544928657 1000000000", "1304969544928657 1000000000", "1304969544928657 1000000000", "2111485077978050 1000000000", "2111485077978050 1000000000", "2111485077978050 1000000000", "2111485077978050 1000000000", "2111485077978050 1000000000", "2111485077978050 1000000000", "2111485077978050 1000000000", "2111485077978050 1000000000", "2111485077978050 1000000000", "2111485077978050 1000000000", "3416454622906707 1000000000", "3416454622906707 1000000000", "3416454622906707 1000000000", "3416454622906707 1000000000", "3416454622906707 1000000000", "3416454622906707 1000000000", "3416454622906707 1000000000", "3416454622906707 1000000000", "3416454622906707 1000000000", "3416454622906707 1000000000"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 16000000000;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> items = {"1 1", "3 3", "8 8", "21 21", "55 55", "144 144", "377 377", "987 987", "2584 2584", "6765 6765", "17711 17711", "46368 46368", "121393 121393", "317811 317811", "832040 832040", "2178309 2178309", "5702887 5702887", "14930352 14930352", "39088169 39088169", "102334155 102334155", "267914296 267914296", "701408733 701408733", "1836311903 1836311903", "4807526976 4807526976", "12586269025 12586269025", "32951280099 32951280099", "86267571272 86267571272", "225851433717 225851433717", "591286729879 591286729879", "1548008755920 1548008755920", "4052739537881 4052739537881", "10610209857723 10610209857723", "27777890035288 27777890035288", "72723460248141 72723460248141", "190392490709135 190392490709135"};
    string C = "308061511170128";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 308061506239776;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> items = {"28657 208042609", "233 428428949", "514229 1793958355", "267914296 1255063701", "2584 448084510", "196418 1050803247", "377 634882132", "121393 192858938", "121393 2017244079", "55 998335072", "3524578 1107998840", "89 1343955362", "2971215073 1123907813", "13 1546733313", "5702887 176639950", "5 1367267898", "377 981534502", "317811 2114045554", "165580141 671248906", "63245986 909681829", "5 1589192791", "6765 338765781", "233 295108506", "34 736913845", "2584 1555815227", "102334155 1113359566", "1346269 749489098", "7778742049 788788970", "832040 2025206601", "144 1404646583", "196418 1077166679", "75025 198026605", "144 208576528", "267914296 574942054", "4181 1262513301", "28657 1463151754", "75025 527240204", "13 1225292639", "6765 478889474", "2 135712688"};
    string C = "3423423223";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 36206817670;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> items = {"1 1", "3 1", "8 1", "21 1", "55 1", "144 1", "377 1", "987 1", "2584 1", "6765 1", "17711 1", "46368 1", "121393 1", "317811 1", "832040 1", "2178309 1", "5702887 1", "14930352 1", "39088169 1", "102334155 1", "267914296 1", "701408733 1", "1836311903 1", "4807526976 1", "12586269025 1", "32951280099 1", "86267571272 1", "225851433717 1", "591286729879 1", "1548008755920 1", "4052739537881 1", "10610209857723 1", "27777890035288 1"};
    string C = "1000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 33;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> items = {"1 1", "2 2", "3 3", "5 5", "8 8", "13 13", "21 21", "34 34", "55 55", "89 89", "144 144", "233 233", "377 377", "610 610", "987 987", "1597 1597", "2584 2584", "4181 4181", "6765 6765", "10946 10946", "17711 17711", "28657 28657", "46368 46368", "75025 75025", "121393 121393", "196418 196418", "317811 317811", "514229 514229", "832040 832040", "1346269 1346269", "2178309 2178309", "3524578 3524578", "5702887 5702887", "9227465 9227465", "14930352 14930352", "24157817 24157817", "39088169 39088169", "63245986 63245986", "102334155 102334155", "165580141 165580141", "267914296 267914296", "433494437 433494437", "701408733 701408733", "1134903170 1134903170", "1836311903 1836311903", "2971215073 2971215073", "4807526976 4807526976", "7778742049 7778742049", "12586269025 12586269025", "20365011074 20365011074"};
    string C = "50365011074";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 50365011074;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> items = {"2584 4123692034895341", "1836311903 3556096809234315", "1134903170 9276120973578451", "63245986 7003662923665205", "3 9913968451461974", "44945570212853 4919068623675376", "317811 6791502859238813", "139583862445 3733037555794029", "1304969544928657 1342599608888032", "102334155 9598396573119884", "44945570212853 2172374797870850", "1 5083013455545997", "8944394323791464 820477575419299", "1304969544928657 5747357334403089", "75025 2637201614853018", "190392490709135 121244080825024", "32951280099 4876663369833837", "27777890035288 2401274370150052", "806515533049393 33919750743833", "165580141 243622563256337", "2971215073 2711375793044314", "225851433717 3027346852418517", "6557470319842 4816378181045099", "4181 6101218036971904", "591286729879 2480107235672958", "10610209857723 2232919046737682", "53316291173 8125200054572022", "10946 3020923008291867", "27777890035288 6991253908156272", "2971215073 297418923234205", "987 2041545917828673", "46368 1559164720953484", "987 9313067194285931", "39088169 1578035270202823", "2 8346780938073037", "1304969544928657 5911430716863806", "75025 5633856446243773", "701408733 8108753573207036", "63245986 8147989236397316", "12586269025 2729256679055155", "308061521170129 6741112960698163", "63245986 5807638413371588", "4807526976 1509652238554190", "317811 2657752536401248", "10610209857723 7859949761432551", "225851433717 6097705106378893", "1346269 4285584061460857", "121393 8414014943032325", "4052739537881 7305038832845214", "1836311903 2720136740911745"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 230147425079376105;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> items = {"1 2222", "21 2121", "13 1313", "144 144144", "89 8989", "55 5555", "144 8989", "144 8989", "1 1010", "1 222", "2 222", "144 898", "13 1313", "144 8989", "233 323232", "21 2121", "233 8989", "1 1010", "144 999", "55 98989898", "21 212121", "233 78787", "233 7878799", "233 9989898", "233 9898989", "21 2121", "21 898989", "21 8989", "21 98989", "21 898989", "144 898989", "144 8989898", "144 98989", "144 89898", "144 89898", "144 89898", "144 898898", "144 89889", "233 89889", "233 8898989", "233 898989", "233 89889", "233 898989", "233 889898", "233 889898", "233 9999999", "233 101010101011010", "233 898898", "233 88898", "233 898898"};
    string C = "500";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 101010211005369;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> items = {"1 1", "3 3", "8 8", "21 21", "55 55", "144 144", "377 377", "987 987", "2584 2584", "6765 6765", "17711 17711", "46368 46368", "121393 121393", "317811 317811", "832040 832040", "2178309 2178309", "5702887 5702887", "14930352 14930352", "39088169 39088169", "102334155 102334155", "267914296 267914296", "701408733 701408733", "1836311903 1836311903", "4807526976 4807526976", "12586269025 12586269025", "32951280099 32951280099", "86267571272 86267571272", "225851433717 225851433717", "591286729879 591286729879", "1548008755920 1548008755920", "4052739537881 4052739537881", "10610209857723 10610209857723", "27777890035288 27777890035288", "72723460248141 72723460248141", "190392490709135 190392490709135", "498454011879264 498454011879264", "1304969544928657 1304969544928657", "3416454622906707 3416454622906707", "8944394323791464 8944394323791464"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 9750909856840856;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> items = {"2 5949", "3 19892", "5 10276", "8 2438", "13 5308", "21 8378", "34 212", "55 28023", "89 29991", "144 22524", "233 22975", "377 19939", "610 23708", "987 10424", "1597 28282", "2584 9756", "4181 3823", "6765 26109", "10946 10799", "17711 18359", "28657 7735", "46368 1305", "75025 27199", "121393 8860", "196418 25229", "317811 18001", "514229 21547", "832040 21337", "1346269 7952", "2178309 21974", "3524578 17076", "5702887 27580", "9227465 30765", "14930352 30964", "24157817 3649", "39088169 10656", "63245986 7965", "102334155 7051", "165580141 13442", "267914296 4103", "433494437 22190", "701408733 20931", "1134903170 9043", "1836311903 5737", "2971215073 13639", "4807526976 8700", "7778742049 10979", "12586269025 25164", "20365011074 18470", "32951280099 11012"};
    string C = "43133785634";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 737938;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> items = {"89 90", "55 54", "55 54", "34 35", "34 35", "34 35", "34 35", "21 23", "21 23", "21 23", "21 23", "21 23", "21 23", "21 23", "21 23", "13 14", "13 14", "13 14", "13 14", "13 14", "13 14", "13 14", "13 14", "13 14", "13 14", "13 14", "13 14", "13 14", "13 14", "13 14", "13 14", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10", "8 10"};
    string C = "200";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 241;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> items = {"1 3", "1 4", "2 5", "3 6", "5 7", "8 8", "13 9", "21 10", "34 11", "55 12", "89 13", "144 14", "233 15", "377 16", "610 17", "987 18", "1597 19", "2584 20", "4181 21", "6765 22", "10946 23", "17711 24", "28657 25", "46368 26", "75025 27", "121393 28", "196418 29", "317811 30", "514229 31", "832040 32", "1346269 33", "2178309 34", "3524578 35", "5702887 36", "9227465 37", "14930352 38", "24157817 39", "24157817 40", "24157817 41", "24157817 42", "24157817 43", "24157817 44", "24157817 45", "24157817 46", "24157817 47", "24157817 48", "24157817 49", "24157817 50", "24157817 51", "24157817 52"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1375;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> items = {"1 1804289383", "2 846930886", "3 1681692777", "5 1714636915", "8 1957747793", "13 424238335", "21 719885386", "34 1649760492", "55 596516649", "89 1189641421", "144 1025202362", "233 1350490027", "377 783368690", "610 1102520059", "987 2044897763", "1597 1967513926", "2584 1365180540", "4181 1540383426", "6765 304089172", "10946 1303455736", "17711 35005211", "28657 521595368", "46368 294702567", "75025 1726956429", "121393 336465782", "196418 861021530", "317811 278722862", "514229 233665123", "832040 2145174067", "1346269 468703135", "2178309 1101513929", "3524578 1801979802", "5702887 1315634022", "9227465 635723058", "14930352 1369133069", "24157817 1125898167", "39088169 1059961393", "63245986 2089018456", "102334155 628175011", "165580141 1656478042", "267914296 1131176229", "433494437 1653377373", "701408733 859484421", "1134903170 1914544919", "1836311903 608413784", "2971215073 756898537", "4807526976 1734575198", "7778742049 1973594324", "7778742049 1973594324", "7778742049 1973594324"};
    string C = "123123132121";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 59637222194;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> items = {"1 1", "2 2", "3 3", "5 5", "8 8", "13 13", "21 21", "34 34", "55 55", "89 89", "144 144", "233 233", "377 377", "610 610", "987 987", "1597 1597", "2584 2584", "4181 4181", "6765 6765", "10946 10946", "17711 17711", "28657 28657", "46368 46368", "75025 75025", "121393 121393", "196418 196418", "317811 317811", "514229 514229", "832040 832040", "1346269 1346269", "2178309 2178309", "3524578 3524578", "5702887 5702887", "9227465 9227465", "14930352 14930352", "24157817 24157817", "39088169 39088169", "63245986 63245986", "102334155 102334155", "20365011074 20365011074"};
    string C = "20365011075";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 20365011075;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> items = {"1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1"};
    string C = "25";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> items = {"433494437 41", "806515533049393 18467", "591286729879 6334", "2 26500", "1134903170 19169", "1346269 15724", "4181 11478", "377 29358", "196418 26962", "89 24464", "233 5705", "267914296 28145", "117669030460994 23281", "63245986 16827", "9227465 9961", "139583862445 491", "3 2995", "1134903170 11942", "89 4827", "14930352 5436", "86267571272 32391", "8 14604", "9227465 3902", "34 153", "1 292", "2971215073 12382", "7778742049 17421", "832040 18716", "55 19718", "165580141 19895", "2971215073 5447", "2971215073 21726", "196418 14771", "8 11538", "1836311903 1869", "591286729879 19912", "1836311903 25667", "10946 26299", "317811 17035", "165580141 9894", "987 28703", "610 23811", "13 31322", "102334155 30333", "34 17673", "44945570212853 4664", "2178309 15141", "4807526976 7711", "3 28253", "21 6868"};
    string C = "970567237580499";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 776177;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> items = {"117669030460994 100", "1 100", "1 100", "2 100", "3 100", "5 100", "8 100", "13 100", "21 100", "34 100", "55 100", "89 100", "144 100", "233 100", "377 100", "610 100", "987 100", "1597 100", "2584 100", "4181 100", "6765 100", "10946 100", "17711 100", "28657 100", "46368 100", "75025 100", "121393 100", "196418 100", "317811 100", "514229 100", "832040 100", "1346269 100", "2178309 100", "3524578 100", "5702887 100", "9227465 100", "14930352 100", "24157817 100", "39088169 100", "63245986 100", "102334155 100", "165580141 100", "267914296 100", "433494437 100", "701408733 100", "1134903170 100", "1836311903 100", "2971215073 100", "4807526976 100", "7778742049 100"};
    string C = "100000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4900;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> items = {"7778742049 1704330705", "117669030460994 1270686681", "63245986 961987614", "102334155 1731475695", "591286729879 1695785102", "377 366606428", "308061521170129 419483529", "53316291173 1607982871", "233 1556488562", "987 1810827129", "102334155 710287862", "44945570212853 630696495", "17711 436445300", "2 828403077", "514229 1115269391", "102334155 920044991", "27777890035288 2001891364", "2178309 1970261965", "86267571272 1856229021", "13 1630723149", "7778742049 2010403469", "267914296 920986810", "9227465 975881258", "10610209857723 1882346431", "9227465 667137354", "21 1436568986", "2 1211461033", "5 811421603", "4052739537881 321253274", "196418 801650936", "34 1153325280", "4807526976 2108639113", "267914296 1764943952", "2971215073 1824128327", "6765 1338187795", "2584 730736153", "75025 1157213757", "44945570212853 1483510966", "10946 2033208996", "701408733 370497539", "13 616580014", "55 1930287919", "8 1726848358", "86267571272 1328463733", "267914296 86566907", "63245986 1337140649", "121393 1704326949", "5 100141535", "5702887 1082229897", "225851433717 647992931"};
    string C = "1000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 52132127184;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> items = {"2971215073 1268438515", "21 2888802175", "2178309 8130590193", "6765 149591519", "165580141 9041943309", "2584 1145457045", "89 9996431506", "610 3581582513", "2584 9385107117", "14930352 35257122", "55 6550396940", "5702887 4374860382", "6765 5839788808", "1134903170 5299523032", "4181 4052318772", "433494437 7983654469", "377 3555995753", "233 6851546532", "7778742049 5551570639", "2178309 7360775836", "233 7967810926", "4807526976 2339143575", "2 295722932", "39088169 8898406967", "433494437 3303915813", "4807526976 5239071897", "9227465 5024573949", "39088169 2764034206", "233 5659270826", "24157817 7834868445", "196418 3126118609", "2971215073 9233083383", "12586269025 7854515223", "89 1929673942", "267914296 131020250", "39088169 5119821850", "433494437 5809648755", "17711 2645603681", "1836311903 6522144543", "317811 6908090306", "8 8658558313", "4807526976 3161230306", "102334155 1335718443", "55 9683426794", "12586269025 7330952311", "8 738738924", "377 2530679827", "514229 3468142752", "4807526976 8828264217", "6765 6892316498"};
    string C = "124587453698";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 254278200640;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> items = {"39088169 39088169", "24157817 24157817", "24157817 24157817", "14930352 14930352", "9227465 9227465", "5702887 5702887", "3524578 3524578", "2178309 2178309", "1346269 1346269", "832040 832040", "514229 514229", "317811 317811", "196418 196418", "121393 121393", "75025 75025", "46368 46368", "28657 28657", "17711 17711", "10946 10946", "6765 6765", "4181 4181", "2584 2584", "1597 1597", "987 987", "610 610", "377 377", "233 233", "144 144", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1"};
    string C = "10000000000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 126491759;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> items = {"1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1"};
    string C = "20";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> items = {"55 1562", "5 814", "55 1962", "8 996", "2 2716", "34 1792"};
    string C = "94";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 6488;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> items = {"1 2", "1 49", "1 4", "1 47", "1 6", "1 45", "1 8", "1 43", "1 10", "1 41", "1 12", "1 39", "1 14", "1 37", "1 16", "1 35", "1 18", "1 33", "1 20", "1 31", "1 22", "1 29", "1 24", "1 27", "1 26", "1 25", "1 28", "1 23", "1 30", "1 21", "1 32", "1 19", "1 34", "1 17", "1 36", "1 15", "1 38", "1 13", "1 40", "1 11", "1 42", "1 9", "1 44", "1 7", "1 46", "1 5", "1 48", "1 3", "1 50", "1 1"};
    string C = "25";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 950;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> items = {"3 100", "5 100", "8 250", "13 300"};
    string C = "16";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 450;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> items = {"1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1"};
    string C = "1000000000";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> items = {"1 1", "2 2", "3 3", "5 5", "8 8", "13 13", "21 21", "34 34", "55 55", "89 89", "144 144", "233 233", "377 377", "610 610", "987 987", "1597 1597", "2584 2584", "4181 4181", "6765 6765", "10946 10946", "17711 17711", "28657 28657", "46368 46368", "75025 75025", "121393 121393", "196418 196418", "317811 317811", "514229 514229", "832040 832040", "1346269 1346269", "2178309 2178309", "3524578 3524578", "5702887 5702887", "9227465 9227465", "14930352 14930352", "24157817 24157817", "39088169 39088169", "63245986 63245986", "102334155 102334155", "165580141 165580141", "267914296 267914296", "433494437 433494437", "701408733 701408733", "1134903170 1134903170", "1836311903 1836311903", "2971215073 2971215073", "4807526976 4807526976", "7778742049 7778742049", "12586269025 12586269025", "20365011074 20365011074"};
    string C = "32951280099";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 32951280099;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> items = {"1 5", "2 1", "2 3"};
    string C = "4";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> items = {"433494437 956736956393", "267914296 2506567093864", "190392490709135 832417", "14930352 24157830", "433494437 542886", "2 366136704895", "117669030460994 58123818149", "1836311903 86267571882", "377 17167680177565", "317811 12586270622", "956722026041 317813", "1548008755920 20370713961", "7778742049 20365207492", "121393 238", "5702887 9302490", "1836311903 28890", "1134903170 117669030461049", "27777890035288 117669731869727", "4181 21499914244", "233 11001", "72723460248141 196419", "46368 76", "144 86267572259", "102334155 34", "1 233", "17711 346468", "9227465 12587615294", "75025 16", "72723460248141 72723460248285", "317811 1548008755922", "8 591288076148", "139583862445 12586269059", "6765 86433151413", "28657 24157822", "10946 12586390418", "4052739537881 72731238990190", "9227465 644603021052", "2971215073 1842014790", "267914296 63256932", "9227465 11566931883764", "4807526976 10610209857723", "2584 956722222459", "44945570212853 448424789", "377 32953458408", "2 39209562", "1 542886", "4181 118625752487035", "63245986 9302490", "24157817 11035", "832040 102334157"};
    string C = "86267889083";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 283583330069737;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> items = {"55 100", "34 50", "21 25", "13 15", "8 7", "5 4", "3 2"};
    string C = "117";
    FibonacciKnapsack* pObj = new FibonacciKnapsack();
    clock_t start = clock();
    long result = pObj->maximalCost(items, C);
    clock_t end = clock();
    delete pObj;
    long expected = 179;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=10709&pm=7481
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <queue>
#include <complex>
 
using namespace std;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
 
typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef complex<double> pnt;
 
 
class FibonacciKnapsack
{
public:
    long long maximalCost(vector <string> items, string C);
};
 
template<class FI>
ll recurse(FI first, FI last, ll C, bool usedl)
{
    if (first == last)
        return 0LL;
    ll totw = 0, totc = 0;
    for (FI i = first; i < last; i++)
    {
        totw += i->first;
        totc += i->second;
    }
    if (totw <= C)
        return totc;
    else if (first->first <= C && (usedl || (first - 1)->first != first->first))
        return max(recurse(first + 1, last, C - first->first, true) + first->second,
                   recurse(first + 1, last, C, false));
    else
        return recurse(first + 1, last, C, false);
}
 
long long FibonacciKnapsack::maximalCost(vector <string> items, string _C)
{
    ll C = atoll(_C.c_str());
    int N = items.size();
    vector<pii> it(N);
    for (int i = 0; i < N; i++)
    {
        istringstream s(items[i]);
        s >> it[i].first >> it[i].second;
    }
 
    sort(it.begin(), it.end());
    reverse(it.begin(), it.end());
    return recurse(it.begin(), it.end(), C, true);
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/
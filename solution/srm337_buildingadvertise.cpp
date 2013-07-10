/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7473
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

class BuildingAdvertise {
public:
    long getMaxArea(vector<int> h, int n);
};

long BuildingAdvertise::getMaxArea(vector<int> h, int n) {
    long ret;
    return ret;
}


int test0() {
    vector<int> h = {3, 6, 5, 6, 2, 4};
    int n = 6;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> h = {5, 0, 7, 0, 2, 6, 2};
    int n = 7;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> h = {1048589, 2097165};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 104858900000;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> h = {13, 13, 13};
    int n = 8;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 104;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> h = {1, 7, 2, 5, 3, 1};
    int n = 6;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> h = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = 9999;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 1903656;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> h = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n = 12;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> h = {0, 0};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 4324960112;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> h = {0};
    int n = 99999;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 1299974;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> h = {1234548, 207821780, 249912141, 256293564, 272927652, 299240809, 407963849, 438745826, 449951295, 509525212, 547009757, 656538303, 656601508, 677590393, 685803736, 701565953, 704307903, 713095318, 713751801, 721595300, 727041956, 757700509, 757995826, 758352705, 766875189, 767010304, 768870579, 773034556, 775923320, 778424585, 779714797, 782291416, 782394710, 797349774, 797855582, 797898408, 802857461, 803671689, 805774823, 809443412, 816713992, 816739283, 819693083, 819809569, 819875702, 820210058, 821098657, 821547908, 821650473, 822026356};
    int n = 50;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 25604993817;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> h = {122503428, 132008570, 176926312, 181186402, 201368557, 203107757, 204306283, 212746847, 214350911, 221399320, 222118761, 227483644, 252959344, 363347521, 392007864, 395211740, 400990878};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 5419025060;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> h = {2808564, 9309770, 15565484, 25191245, 52588157, 55236440, 131466157, 134318115, 134660875, 147286928, 169877035, 186500566, 311532956, 392231176, 392269990, 452838791, 462678081, 477971731, 500079693, 503747745, 570331405};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 7533629961;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> h = {12924506, 12939702, 12944698, 14203667, 16764014, 42604180, 54403918, 74459886, 118190728, 133810262, 192820822, 401049913, 480593078, 481001501, 485690647, 486886486, 487870292, 512757368, 519456383, 526309129, 606228202, 611017850, 638532970, 641068716, 643007352, 643815816, 643849908, 644572512, 644589754, 645304247, 645800916, 646144984, 646872569, 648390139, 649592036, 651364738, 722073333, 728887982, 736248637, 739465212, 739685728, 739983582, 743306320, 745342396, 751995752, 752591517, 755219940, 759380524, 759385708};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 17781943886;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> h = {12834508, 32772228, 50362036, 61832879, 62201637, 67492700, 195671136, 229754184, 230962160, 236101140, 277057728, 331895328};
    int n = 12;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 1174026816;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> h = {119581054, 121689518, 163038927, 179592738, 183202093, 189572930, 263029139, 263655493, 268586049, 299254492, 304269123, 305888004, 305895071, 324261292, 325639794, 328086563, 413868245, 417262399, 451636189, 454198849, 500451346, 504945798};
    int n = 22;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 4208466224;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> h = {5936320, 33930438, 37982377, 40294703, 91265856, 150274489, 304106803, 320862087, 322445921, 402738921, 405115258, 437543991, 438662824, 457200361, 470541476, 480488853, 574405015, 584311369, 621693094, 643019539, 643739259, 666620337, 678040725, 678042436, 678261192, 721485295, 721527967, 750026890, 755475267, 773351076, 774376448, 778032612, 785166122, 789266735, 803208049, 803825732, 804757040, 812164015, 814419696, 814501368, 819673465, 819682767, 819697420, 819706680, 820769802, 821329412, 823896808, 823905025, 826631962, 826739890};
    int n = 50;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 19933605709;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> h = {32190023, 195444511, 215049479, 220887706, 232467028, 409878829, 409879700, 413296067, 427340715, 431965575, 449120443, 480019256, 514979522, 533398322, 533954129, 538962799, 541409358, 542984876, 542993582, 624427834, 640655901, 667824455, 691439855, 692335864, 696388292, 698284947, 698350886, 700791733, 702816145, 734298009, 752982541, 753850546, 757808171, 757816905, 758040804, 759036768};
    int n = 36;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 12706243699;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> h = {34641212, 218526181, 232648140, 323561957, 360483538, 363644903, 403486499, 405472189, 405509415, 559061293, 562385608, 601785880, 629558308, 654642597, 654853790, 656711346, 659064946, 666648086, 668833686, 781963413};
    int n = 20;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 6149674223;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> h = {20994527, 30200760, 39677055, 99177031, 104382017, 156250533, 171136451, 183225518, 185136137, 213419144, 214542017, 229990595, 289642531, 308989049, 313659867, 325519249, 327190887, 327986996, 331565274, 337261863, 374803101, 374841625, 379150237, 446252064, 492766427, 493803153, 509206178, 509561975, 510342708, 512316562, 513626673, 516543986, 519570841, 528397543, 534481735, 613598616, 613598627, 622649047, 682903385, 684158387, 726191400, 744614794, 763886807, 765534169, 765912303, 767567964, 773868169, 782635524, 783598387};
    int n = 49;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 12319160675;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> h = {824022495, 821988478, 821734556, 821691769, 821332953, 821170891, 821170004, 821169854, 820557034, 820526148, 816569666, 813790751, 807545924, 804552860, 804271677, 804243613, 803923391, 777754672, 756429487, 737204654, 736551919, 723346189, 717069477, 717034080, 714272546, 714239114, 712944553, 701772461, 677504167, 674669850, 673028529, 672640383, 629448659, 603270335, 582296351, 580347081, 543388528, 439124079, 379619297, 379610038, 364484219, 361049651, 125714264, 40194882, 38193708, 37953026, 32047913, 21143775, 6536910, 1405118};
    int n = 50;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 21524492256;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> h = {668351143, 668103203, 665317680, 659048205, 610220840, 583440927, 578835478, 577196680, 572007856, 565783954, 565079102, 564843946, 564091452, 451384061, 451257507, 451219976, 448887881, 433773224, 268589109, 246914965, 218977956};
    int n = 21;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 7807918032;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> h = {736510470, 736088288, 731197154, 713287584, 705987153, 705969268, 698580098, 697076614, 696064903, 662247174, 660112908, 658677249, 647205385, 645369316, 644926682, 643809967, 637891374, 631576817, 606349527, 601868510, 597299655, 426573623, 415104953, 409648657, 407682569, 384345666, 380815865, 364824655, 364175717, 357566673, 357522429, 352191154, 346034657, 102806529, 55449539, 37124772, 2576803};
    int n = 37;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 12543292755;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> h = {779713814, 779499154, 778944064, 778915659, 766263304, 757270854, 751227661, 748478021, 746329595, 746295808, 746291371, 744754295, 720055384, 719717788, 719486673, 719430761, 715281547, 714374382, 712534541, 705148186, 689019887, 675077049, 672916574, 672807683, 660882247, 651096103, 539909170, 530032702, 524206468, 523207222, 413774811, 409843124, 408559872, 400261731, 400002808, 379832679, 313378964, 239161585, 236130858, 194065042, 175034831, 168865646, 135474892, 91525289, 79189863, 74974569, 47316165, 47240709, 43708313};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 16928498678;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> h = {201643240, 196697983, 181719806, 179663525, 145724131, 141086490, 141082592, 139814741, 137725984, 61439610, 35494296, 34794843, 34469177};
    int n = 13;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 1239533856;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> h = {506791073, 447630394, 446207411, 443731508, 441601493, 329842180, 301532113, 291798206, 222639518, 189588721, 103911080, 94535617, 94076593, 89583436, 89199598, 25742283, 16870267, 14549713};
    int n = 18;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 2334385648;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> h = {800572817, 800473633, 793490731, 793307579, 793306848, 793238151, 786132304, 786110183, 785942780, 785504614, 785491983, 785251059, 784004602, 782396993, 781579488, 764477354, 764201413, 763109340, 762119390, 754414508, 752885183, 751481742, 750832392, 745946496, 745509941, 745482715, 745473389, 710234608, 680783423, 679633027, 634944046, 634701383, 632224274, 580864885, 551306454, 546091065, 544522460, 423574167, 415032384, 370227987, 357321814, 328305490, 304520192, 303752570, 282841234, 279210728, 47775673, 21102362, 11267198, 9105866};
    int n = 50;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 20863401042;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> h = {722968228, 714893955, 713916141, 702111312, 701239388, 698861040, 678089499, 678059244, 673961517, 648950265, 645310194, 644726745, 636657484, 623111825, 530691957, 528622174, 527020134, 504014274, 501002856, 500424996, 476447568, 452395902, 451519301, 436360141, 436336226, 414658815, 301076262, 284873804, 273305654, 260805743, 253472710, 243848602, 236771213, 236079029, 209257637, 128781444, 118140371, 75156};
    int n = 38;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 10908405650;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> h = {583002737, 577850457, 534768929, 532786346, 527231318, 526452971, 524707138, 404723573, 396421477, 301602050, 271886652, 271886455, 269963854, 177233011, 150088317, 117689309, 111601752, 85192160, 13179053, 5019562};
    int n = 20;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 3672949966;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> h = {811162506, 810345975, 810124221, 810122459, 807824546, 806753979, 805092740, 805069136, 804509688, 802638978, 801932819, 798824788, 798669335, 798588047, 795463768, 795220561, 795213056, 795083705, 794093811, 782249910, 781964354, 776342197, 769936555, 758868376, 657175154, 656478607, 622643625, 621783688, 617144443, 615513595, 606737171, 479015715, 473477811, 467713216, 425152724, 425149412, 385630851, 385325717, 290741219, 288565977, 276209502, 238418845, 226871975, 215371540, 132136623, 82717122, 42382591, 39028609, 2248536};
    int n = 49;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 18808852301;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> h = {39796, 163560002, 173619249, 173820236, 188431615, 274175852, 514399697, 516615188, 523327124, 523344451, 564971863, 579099804, 580950556, 580994122, 581276995, 630355838, 638554985, 650802721, 704034538, 711029407, 711323315, 731524063, 733233045, 735150201, 735308042, 742788504, 744741161, 747859420, 748847759, 749514685, 783364669, 783938288, 793629020, 797204999, 798752791, 799415597, 800972557, 805141044, 805311738, 376477588, 370076962, 369546633, 369460536, 345711612, 343637875, 337272802, 213917305, 209286160, 156628479, 61503309};
    int n = 50;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 16975190001;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> h = {8397859, 87616400, 102969454, 230959253, 334203878, 426489907, 431137846, 431694759, 432168196, 432201026, 432603283, 444906490, 448242612, 489559866, 502420546, 503524041, 510724484, 513395593, 551334741, 551699494, 553702456, 584666104, 595994094, 618705416, 620967216, 634463692, 634863826, 222516068, 216897479, 186136123, 185545654, 169231067, 166472351, 72404817, 47634081, 42152541, 31771031};
    int n = 37;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 9382777954;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> h = {18907514, 58168831, 58827953, 92350743, 97611236, 273239188, 306423462, 307069263, 392615725, 413792641, 415868696, 75883861, 63726409, 12829537};
    int n = 14;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 1639435128;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> h = {63687029, 80174233, 90287796, 90913132, 94271405, 100856682, 109345938, 250274303, 364694230, 365746109, 398218077, 399893231, 446847829, 447151250, 459028117, 516487487, 520371604, 542927876, 721624912, 721359629, 721157486, 719270824, 709929994, 707722280, 689837999, 684143236, 682535712, 678789450, 653285684, 652347390, 639249659, 638976571, 619228627, 485415809, 480546242, 464794646, 367199367, 331963703, 316624908, 315585916, 309677754, 216420677, 114818791, 105112361, 99064190, 98048203, 96996763, 14780244, 383867};
    int n = 49;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 10724347896;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> h = {1471011, 54260703, 55465890, 66982255, 112931528, 117029925, 247551277, 270869117, 285140068, 275613738, 250944396, 69003628, 68534325, 67948639, 61815435, 61764378, 24982385, 21659673};
    int n = 18;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 1237756385;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> h = {138287130, 139129829, 141386114, 202314985, 222365918, 233759750, 253898453, 264274810, 285548838, 323825193, 363692313, 365291109, 380418870, 389204408, 475462468, 507346723, 522024560, 620752647, 623874598, 624149297, 636035277, 644492990, 648663232, 711982868, 713691966, 716525348, 717586694, 721367841, 721616156, 723878403, 761159270, 763545000, 765999050, 767782183, 770908478, 337137819, 331033718, 323624208, 290125127, 122590695, 17630739, 4560008};
    int n = 42;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 11173547646;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> h = {9796996, 14441307, 21825873, 22233922, 40450644, 127052664, 211500911, 243200811, 272673261, 276441057, 277731449, 298666280, 299576275, 309213825, 316515402, 320174588, 324150810, 410723306, 412026344, 414543651, 429005353, 440207423, 449729850, 466921371, 545880705, 603530175, 630865104, 632357661, 633245006, 633433600, 637732600, 640171590, 654034733, 684620608, 686296798, 690774675, 696741322, 703667131, 706758697, 708394821, 708451838, 708463917, 715626491, 719964610, 720529633, 204455018, 204190454, 201375891, 24951123, 1421546};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 12070603500;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> h = {84381, 142004570, 38008765, 37296330, 20444262, 7070400};
    int n = 6;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 142004570;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> h = {549263, 5598081, 17116679, 17333992, 119664492, 124174597, 537071195, 540165141, 541166767, 564988540, 571189607, 593506937, 593874291, 594403574, 630478626, 637444437, 637451122, 639572204, 646771662, 659599405, 394192394, 237732482, 236063602, 230929669, 32217899, 28601144, 8250605, 5655382};
    int n = 28;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 7518996730;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> h = {52494322, 152428451, 154897331, 155824760, 155947387, 186704239, 201430164, 228211467, 794068433, 790278118, 787481059, 787006528, 786941632, 784845562, 782653329, 781003876, 780612807, 780428694, 780374311, 779313524, 769971018, 760597635, 759744390, 753334167, 709353033, 703395708, 699175753, 692980532, 692916633, 673096341, 653754879, 653328768, 651155504, 649985136, 620949111, 613516712, 577573765, 575779993, 569884100, 566558100, 556962682, 542322527, 507666376, 486929390, 469966133, 468617577, 454597040, 60287111, 18485170};
    int n = 49;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 18438965918;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> h = {1094820, 31668808, 214107496, 232017775, 259801127, 372096649, 394732266, 475552898, 481914696, 539853736, 548732415, 558587678, 561892434, 567865240, 567927991, 571063914, 571573414, 581199389, 582767030, 630156487, 631455437, 646783240, 652967517, 657294897, 658112831, 658136312, 661418336, 579848083, 574475974, 564211654, 546838564, 546778556, 465102894, 423991195, 422725265, 422359991, 371312332, 350849748, 344105608, 336384408, 313255649, 296735252, 291544003, 291346166, 287973401, 280355419, 232723825, 222824992, 221498025, 50400465};
    int n = 35094;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 12416635928;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> h = {5287242, 226288323, 581586694, 582225960, 589968464, 590652477, 591687676, 764517685, 764126732, 761529956, 750381516, 737630277, 735427494, 718675325, 696103636, 691849568, 681518490, 646149822, 610868792, 610560328, 603421414, 600050113, 531517571, 524694658, 520151745, 464608140, 464058283, 460914475, 447685890, 445454689, 436465267, 431552406, 352831806, 352458409, 349634744, 317688949, 314535890, 273106666, 272953985, 209188087, 44107136, 2758963, 628547, 372180};
    int n = 45258;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 13585142675;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> h = {13370487, 18749043, 147602347, 147654263, 172052347, 187495279, 188292567, 237466778, 313735300, 315992522, 316160089, 331620814, 340305988, 355187228, 355260211, 357925534, 366257626, 427609842, 427984310, 450359463, 450978635, 451695241, 520140108, 590535373, 592905875, 642833657, 649312537, 651033524, 665784017, 673670141, 693351261, 694265526, 492934674, 491380040, 490966256, 296750967, 274485828, 202415543, 147764560, 144827570, 142826152, 84905840, 22030544, 19308757};
    int n = 30634;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 8470853100;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> h = {53495152, 72973135, 80419042, 81822095, 136142567, 143779516, 165246394, 334267173, 350540981, 384286146, 755203770, 754935600, 750273190, 742414417, 742176572, 736207967, 732637423, 727469823, 727467299, 725970124, 725950375, 725391821, 724705985, 721909570, 721125705, 714659047, 710124847, 698398429, 695789539, 687208697, 687158236, 494117422, 475388210, 445918721, 411988958, 403149667, 397882533, 368805293, 367482545, 351653691, 337336087, 331179945, 325923743, 322587349, 317469636, 312569929, 117239080, 57327306, 56995857};
    int n = 67461;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 14430322956;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> h = {12076742, 19291849, 619737456, 618723936, 594580371, 580708465, 526573918, 511095722, 457686295, 376060984, 342148846, 329955352, 303280111, 286093122, 250039261, 245119179, 186133980, 171703794, 159017619, 129466927, 120370423, 86165367, 81400984, 64053355, 64040321, 63805509, 58047034, 52986569, 38220322, 37428534, 29338699};
    int n = 48407;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 9293165744;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> h = {449260192, 456238375, 456540587, 473114475, 499660519, 505371951, 564766033, 567741859, 50928337, 47835798, 40899768, 11925678};
    int n = 93397;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 6777382476;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> h = {64881078, 65318755, 279450865, 316295784, 320593214, 528715334, 561551898, 593442976, 635620361, 703279312, 703609502, 703735787, 715819918, 724582724, 730393639, 730505086, 744767176, 745169797, 755142117, 759679016, 713545292, 713453297, 702356301, 701532725, 691157171, 690512805, 688255732, 686228794, 685541226, 648342426, 606936273, 605806080, 602992850, 599931923, 598481578, 498881008, 439798007, 427195129, 340213034, 326112746, 325832338, 314003074, 299915447, 298817952, 295935787, 285556494, 188213721, 187699073, 183193730, 103324284};
    int n = 59460;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 16616403328;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> h = {15178610, 28158962, 68434625, 72984043, 94194302, 105061478, 236321017, 237814515, 242417763, 242418791, 244552351, 484126375, 360169568, 353459899, 85981900, 79601777, 67088544, 65193064};
    int n = 17910;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 4492895200;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> h = {3726753, 4116122, 10521146, 57532081, 29183633, 13992586};
    int n = 87538;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 11075285664;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> h = {105627874, 113989433, 125819125, 252953659, 254086828, 254416772, 288709781, 299102121, 308573687, 330194443, 492670511, 492714991, 493889905, 494134252, 496403269, 496669903, 520429019, 545243137, 556945534, 565840145, 583477815, 585519087, 593585841, 593768482, 688845549, 694286879, 694369691, 698813856, 711077253, 711174811, 711865147, 711961001, 717903235, 718074687, 725790610, 732455422, 764856198, 765646159, 775145257, 775854101, 775984506, 433774568, 413997591, 403043195, 392950552, 369275894, 367685253, 323198913, 57726655};
    int n = 13855;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 15272785841;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> h = {812985928, 812938303, 810573818, 810208221, 800209794, 799226695, 798937738, 784137704, 761580397, 759718300, 758491898, 755956899, 753217363, 740910018, 738991084, 738852546, 738343389, 730021749, 729770473, 727193241, 712114590, 710455013, 707710988, 706130574, 680675681, 680361115, 655674244, 647256303, 645772900, 558142530, 558016944, 556897507, 352161976, 352153229, 227613195, 227562592, 193283943, 193160319, 190004731, 183538645, 171922596, 151199979, 109482154, 56074483, 44195887, 28270066, 25801433, 5543097, 5275708, 1376510};
    int n = 10549;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 18727414100;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> h = {823714983, 823665874, 806326565, 805876648, 805719201, 805681681, 803497333, 802825755, 802574994, 800238212, 795740082, 791837463, 784233632, 784214831, 774045193, 770868909, 770864430, 770578177, 767436271, 765947133, 765946979, 765311250, 763740595, 763625622, 735475091, 732129555, 731857438, 731788595, 722111880, 717582442, 716002065, 712821976, 712758678, 706950483, 685696193, 683942725, 683301278, 682287528, 681020443, 677014216, 653907195, 653169592, 648073901, 644492222, 643359982, 35961470, 5063316};
    int n = 71419;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 28951199190;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> h = {816940363, 816333133, 816048018, 815096302, 813333256, 813183277, 812763353, 812667395, 812584319, 812195125, 810802560, 810417083, 809722952, 801563698, 801449238, 801322134, 800854904, 773730784, 773719770, 760049759, 746478075, 742221453, 727841844, 726321469, 724694947, 705598620, 705336176, 702552527, 701642327, 671753709, 662630345, 650035679, 647474592, 592344817, 541161167, 218255935, 172878374};
    int n = 34744;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 21366661536;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> h = {792334238, 790588057, 789936417, 786514775, 786260725, 785504855, 784776606, 784269056, 782823782, 782683764, 780902874, 780120917, 780017091, 779054191, 778867169, 778867084, 777587249, 774866279, 774170950, 766270030, 750647327, 748745152, 743487640, 743096823, 731835713, 731832905, 731426209, 730820857, 709167535, 707260161, 460030382, 451287757, 450491750, 441154869, 435153986, 433748259, 430742769, 357904599, 357897654, 323689357, 323307817, 311389509, 311071335, 123587536, 87123776, 61973140, 58238894, 20742129, 20208387};
    int n = 38385;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 21217804830;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> h = {48339012, 45202118, 34349217, 18568759, 16728696};
    int n = 91751;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 384932604155;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> h = {274561965, 267608972, 261420338, 261036338, 257543477, 239061061, 222260340, 219832972, 207437494, 207093385, 172137467, 90334894, 87130232, 80146972, 5153593, 3574441};
    int n = 13010;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 9006510760;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> h = {825539810, 825485643, 797493430, 792774093, 791649652, 789699206, 789558597, 789136848, 786176170, 785976368, 785932600, 784715861, 784628407, 780045491, 778932845, 777428591, 776581241, 776498099, 704898878, 701294338, 690900587, 678020607, 678016872, 677819504, 661304464, 658090613, 656182805, 634390196, 610901562, 603233077, 596977826, 596080514, 596040754, 595181162, 583227755, 577945959, 572443999, 571702199, 558932348, 375016225, 374890264, 367526108, 367293392, 326280214, 324123592, 316425157, 28387193, 26407742, 22749607, 9128};
    int n = 20123;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 21798361572;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> h = {799176550, 799040183, 798187575, 797566246, 797407713, 797301556, 796753814, 795214757, 795137932, 783890862, 776826019, 753826000, 744165732, 744026097, 743945192, 742353761, 742287448, 741225229, 738423306, 721317276, 720593729, 712895354, 712043258, 711628533, 707733353, 697881672, 690919326, 690275216, 642337940, 640718018, 640604613, 639581703, 570546812, 562244970, 555186504, 543269320, 543247752, 540521135, 532925079, 388244240, 270725705, 251539647, 249259727, 244207945, 35117474, 30682456, 6469088};
    int n = 25626;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 20784078081;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> h = {573496738, 563318945, 559811273, 553242684, 415748467, 407192787, 390555042, 390547100, 385195369, 380157264, 379955608, 379179494, 255753853, 179551069, 124599872, 104470464, 102865437};
    int n = 37244;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 8894191311;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> h = {819561345, 818431806, 817697815, 817490352, 817322722, 816665661, 816299851, 816192276, 816137140, 815290069, 814259992, 811081015, 810189038, 806795195, 803018699, 798222412, 794103513, 793241794, 749606367, 748480153, 748309853, 743889498, 724988374, 724706125, 722775179, 707762252, 680157384, 679922900, 678010170, 673554432, 626505938, 614198736, 599913376, 595387913, 593242935, 562586239, 527956372, 527949323, 488301669, 485274004, 477018179, 470130893, 456429338, 450651989, 436534368, 435877456, 217559510, 208697710, 12618311};
    int n = 52666;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 20763502725;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> h = {57420614, 58306566, 74167812, 118246677, 121594668, 143211340, 360555811, 416047842, 464211716, 468947185, 507721704, 513790792, 520090815, 570737832, 571913495, 723578864, 733239564, 739439694, 739749079, 740983502, 742493985, 744446660, 750068239, 750370877, 752244996, 761173666, 761336124, 762951892, 777465458, 777957547, 778799753, 779248170, 779585121, 781320810, 781335853, 789056320, 802341804, 803323495, 805442721, 805704108, 805750253, 805764170, 806934364, 808794542, 813199018, 813979612, 814480414, 814484245, 816016154, 28667084};
    int n = 18776;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 24601681376;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> h = {4554124, 7102545, 7157338, 9980868, 79440515, 238591459, 238672760, 303344457, 309490462, 332567379, 551035165, 569171873, 580896606, 580976198, 606984993, 608353087, 608620215, 616029810, 616174510, 623925957, 623942168, 632163682, 649813987, 659300038, 659529124, 695269314, 697688770, 698816245, 715042246, 717257299, 2040924};
    int n = 88835;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 11429467392;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> h = {25616926, 36157174, 38026723, 101511179, 106001367, 233574359, 278382711, 282661757, 283522471, 283999165, 285015698, 285034646, 285148126, 379151883, 386411776, 413473573, 473420154, 474293012, 479054873, 480839139, 503183292, 503278542, 505878566, 517059541, 517269104, 521990120, 535893865, 544163295, 553899499, 553972997, 25969};
    int n = 16151;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 6681185064;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> h = {20566034, 88678306, 116864671, 131263081, 290466606, 293466464, 379278635, 389184533, 389435134, 406242485, 427446386, 429535272, 440709111, 441357175, 446667604, 460291870, 460460002, 568837964, 650131583, 651319030, 653537224, 670869097, 671886278, 678628742, 678822721, 681163343, 682050635, 682295876, 710276196, 712294103, 717777797, 726238336, 729063871, 729942722, 730164837, 730641516, 730731547, 739369548, 745484012, 751311611, 753727669, 756633748, 769248048, 781367232, 782263609, 787454560, 787569118, 788188795, 1049344};
    int n = 31972;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 19503947490;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> h = {140703144, 148939623, 184125266, 339326318, 425372836, 460649649, 519009079, 524946686, 560367756, 569952212, 572430325, 581884732, 582052970, 589463738, 607094266, 85608831};
    int n = 78044;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 156676055349;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> h = {214577359, 216070659, 231994173, 235251484, 252752890, 314112633, 318159148, 329174091, 359437536, 378037703, 381975064, 397760069, 484650365, 493156697, 515964626, 637165941, 638361068, 639882786, 641210001, 645669986, 645739503, 646539665, 656686617, 671538385, 672665738, 672879082, 681336233, 681383759, 683781893, 687805899, 696280963, 702138872, 703308104, 712290939, 737476377, 737544199, 737767733, 738161038, 740849777, 745666671, 745920647, 759765659, 10707014};
    int n = 74627;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 17203480407;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> h = {23717943, 39454077, 76879401, 80545302, 90978729, 137816875, 185172756, 190992548, 214510820, 231410919, 232781940, 268601342, 270310535, 270312871, 274463749, 274963004, 275671128, 292505916, 380231281, 392002881, 393044141, 473011590, 574617865, 575953950, 601247422, 601884892, 603310452, 604055513, 607199283, 609101116, 609501273, 610064704, 612820487, 657967068, 663094618, 663096905, 723812100, 729380961, 737110334, 739106531, 766937167, 768492067, 768523261, 773259708, 789207860, 790098765, 791901964, 792800800, 796480248, 38193341};
    int n = 13523;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 15514682355;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> h = {3910978, 22823824, 24333135, 29396743, 31147392, 45267819, 113991425, 207924895, 322449156, 355530764, 372975964, 372977320, 373338904, 457598061, 531930884, 559834800, 563768537, 564577079, 568102773, 568338240, 584393775, 597292577, 599831006, 605342089, 635908683, 646155237, 735246107, 51948486};
    int n = 21651;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 8067598095;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> h = {132862646, 139410587, 152704167, 154826973, 156663333, 160453943, 161638243, 282234765, 287040991, 287827346, 290143831, 472923208, 506337317, 515711966, 532756377, 533446571, 534507906, 535229821, 591994725, 617864037, 631470297, 633190209, 639331654, 641007718, 644559072, 648313919, 650628645, 650945634, 651203909, 653131213, 667054942, 113992164};
    int n = 37884;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 10161284096;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> h = {530964, 6281690, 10118240, 14219188, 88538833, 97862184, 104737100, 122550985, 297852910, 315303414, 316824176, 317721985, 333656189, 334472113, 350497729, 353374458, 354811323, 375105778, 378644990, 380509095, 425704561, 428453407, 449421502, 490854795, 493134845, 543345756, 543609157, 668656185, 671045573, 678050462, 690585979, 692007813, 692051520, 692152186, 692207672, 692755447, 704637344, 707123645, 727532977, 731126152, 742448244, 757670632, 770560615, 773360036, 775023944, 779777217, 779777357, 780628345, 4499543};
    int n = 14839;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 14041779885;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> h = {7, 3};
    int n = 2;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> h = {10000, 20001};
    int n = 2;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 20001;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> h = {34523, 69045};
    int n = 2;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 69046;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> h = {3, 5};
    int n = 2;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> h = {1};
    int n = 1;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> h = {835454956};
    int n = 1;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 835454956;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> h = {0};
    int n = 1;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> h = {835454956, 835454956, 835454956, 835454956, 835454956, 835454955, 835454956, 835454956};
    int n = 8;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 6683639640;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> h = {383652986, 799475848, 204092746, 31272510, 291727035, 67381747, 453855653, 356256575, 299639654, 808253465, 461064417, 775617369, 445019730, 284700734, 424174089, 17847074, 453389073, 754989009, 247617737, 210242743, 145949021, 139082722, 89608332, 417992802, 468933282, 603849239, 449059504, 353715543, 148520213, 237242779, 25516614, 537289356, 599081203, 386998914, 290879446, 105328164, 244053342, 372127704, 415322038, 726542066, 684534739, 352085537, 592800835, 411575416, 480196023, 628762109, 245636286, 354050009, 301668431, 39736093};
    int n = 97746;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 6134034296;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> h = {355162433, 815281438, 678232139, 101000392, 222698260, 460734630, 35787792, 516432754, 283705795, 256782130, 184700172, 797055677, 421420901, 66985886, 575877098, 283253194, 550725703, 91502427, 666564677, 350170067, 456607777, 153115099, 733555813, 242290976, 264318380, 434975305};
    int n = 97141;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 8155935004;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> h = {814415819, 350169771, 551114223, 72882560, 492921228, 651828619, 238569716, 547903905, 78933896, 568460807, 769348611, 364388406, 235358953, 97863780, 488505765, 321084640, 327749570, 662440457, 110586332, 22288278, 746389527, 62012150, 393164710, 251461647, 120334558, 467150214, 562003295, 711419717, 318381662};
    int n = 93861;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 8825870848;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> h = {821586158, 546254708, 22681996, 422180995, 481636407, 560815240, 154274487, 427908892, 46233174, 219174096, 125519935, 407784552, 835405570, 401346930, 343361829, 449083229, 451177536, 462098170, 792357547, 251599894, 214176176, 571424124, 368575681, 46470433, 330969681, 380848595, 182912491, 835220268, 471530374, 112018822, 566097952, 355604133, 722156322, 719453952, 490624429, 182718218, 669792974, 20585238, 366746883, 801834002, 538526971, 555236557, 688999819, 174208557, 687618362, 769404375, 115223678, 89790045, 660685065};
    int n = 90700;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 9148369040;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> h = {492660704, 414786529, 193597999, 146429592, 645932951, 383192104, 568151961, 195571590, 318862678, 140909299, 558588338, 216204045, 294189972, 74778019, 719211491, 367084690, 632684710, 585976232, 117386090, 607727753, 164312823, 125784357};
    int n = 99784;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 7075023084;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> h = {529857872, 323544978, 435776495, 141640255, 589352319, 557011469, 773631788, 676923535, 76368400, 495878302, 612609231, 760914560, 759833590, 433938144, 599294809, 710888705, 723144437, 577398241, 830408959, 645579062, 652610542, 750023636, 523338950, 797143855, 830532855, 592097132, 36199152, 599234440, 649498309, 833932610, 808640887, 795837115, 789433251, 559040692, 752315374, 360587670, 700639980, 796327871, 488397435, 572020968, 231112280, 823217802, 722229818, 829107864, 503570346, 486447160, 806721562, 741362223, 782315349, 477270694};
    int n = 92082;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 7376948448;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> h = {560422557, 618158219, 750997304, 609177989, 814355611, 494302645, 302403900, 507730753, 806860592, 566319580, 613833451, 808311813, 420750659, 684689090, 536284283, 173488232, 833355973, 823777127, 827958870, 379524488, 274862326, 288964888, 396175642, 637896804, 775907579, 791518705, 517392114, 104066449, 606639953, 535585701, 807574138, 823520307};
    int n = 92512;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 10143651453;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> h = {799425803, 512764365, 684877359, 508263573, 303987974, 659247892, 360045967, 705654111, 557948576, 774175398, 703602841, 766545827, 218814317, 430636251, 760922671, 605120773, 738839201, 803376066, 832565915, 753355663, 451443869, 227767272, 732271660, 203676894, 692476738};
    int n = 92888;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 6085202774;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> h = {752203651, 735495496, 826129921, 484018625, 389919167, 801028825, 683087130, 630534720, 749104953, 379799963, 822924179, 827360029, 403917232, 664631475, 767454321, 745654947, 819426095, 575013420, 438509908, 532240325, 398729291, 680177003, 104162417, 724065162, 546570728, 679966165, 821540334, 790503279, 594527642, 562257533, 834146483, 720738258, 526719071, 695221474, 788698645, 592395048, 763833293, 820221079, 308434788, 804616480, 385647625, 694174672, 637184578, 109437545, 730310185, 728417791, 826692473, 417563901, 616780430};
    int n = 98143;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 8355599186;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> h = {827861030, 612493672, 684601915, 426007383, 247909412, 823282719, 775654182, 228531514, 110256096, 532037922, 500135467, 288843226, 826225249, 786931603, 557419641, 302908314, 460746293, 755990920, 528652975, 486045642, 337179347, 222065184};
    int n = 92905;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 5870392488;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> h = {260526033, 72089169, 6207027, 425227403, 228203894, 85789887, 334570193, 182834121, 319541586, 19915170, 89533888, 254152316, 155723741, 21439006, 295180004, 362819539, 20269927, 150791762, 52288363, 221776291, 112459128, 126174977, 55837705, 401409035, 18953967, 188710963, 676341006, 320095450, 177925488, 22314985, 424816807, 14932908, 20765484, 75725290, 183879275, 173583127, 326352591, 4193176, 113222028, 268866165, 511112432, 372210735, 162736586, 267777921, 311891755, 41623474, 98907598, 17520602, 325407658, 88417119};
    int n = 97201;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 6597965344;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> h = {221017399, 493211792, 136941585, 33492339, 245916127, 153104764, 49091915, 20934547, 2079194, 19129372, 159716735, 658850330, 372530046, 126177680, 48630013, 48833009, 475460429, 37068241, 365019918, 8736645, 609016925, 46628443, 518480306, 17925588, 360079423, 477066926, 94960566, 644766658, 75241499, 4587632, 67383991};
    int n = 93144;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 7392631688;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> h = {7306339, 30566913, 157231923, 173263406, 37641095, 143656866, 626864036, 35601572, 153539878, 21905458, 385708769, 159261867, 164778966, 511073939, 143355685, 167097656, 688018, 362290178, 286543399, 75595432, 79945179, 3652169, 102951744, 199323859, 63828039, 382273683, 492226410, 191739764, 70829692, 302789104};
    int n = 96687;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 8983905760;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> h = {25195431, 10118209, 48457437, 142585485, 35764876, 148635036, 285376675, 799804242, 84607856, 106075241, 244469210, 100660686, 156529031, 50882030, 235004100, 214426129, 764807213, 40821147, 197582883, 32034220, 5425344, 72381366, 10523839, 42398220, 118780794, 65369848, 34121349, 740975481, 20748968, 166066137, 79013955, 42185338, 87327058, 662964699, 19017815, 354379342, 154437232, 14732994, 92083826, 498346039, 316668397, 167138116, 201942740, 7036702, 238406420, 47010899, 339770075, 29547987, 123666760};
    int n = 97658;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 7225588214;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> h = {39595080, 6344398, 61504312, 56340636, 48496641, 111062024, 246885988, 17190445, 687323507, 29604604, 29931882, 184942804, 87571873, 336333167, 18737781, 179467909, 60881991, 7431507, 138557503, 36010742, 189190729, 314252002, 177922717, 309483184, 173187505, 10441784, 24633284, 324316933, 2701435, 378138565, 55875144, 98822194, 46136344, 15672973, 323239653, 510424428, 356125879, 42655572};
    int n = 97571;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 5288373343;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> h = {393759185, 825446997, 239269468, 192810211, 446432745, 88351279, 761802591, 828375638, 464409147, 4740885, 786723568, 614992669, 327836837, 659159334, 304150702, 671415221, 413932783, 367938710, 137242769, 117575155, 215488063, 620574951, 151807414, 375019555, 560927303, 796411623, 121069882, 313332644, 616307725, 65623930, 743140372, 140075631, 53958972, 514658825, 747661810, 420103856, 404049446, 41179905, 356385701, 654266586, 364277436, 788091493, 121199030, 629878306, 194648670, 309793264, 508788339, 489576156, 782501249, 778894441};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 7700692328;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> h = {112010546, 702153988, 453733118, 735131905, 194581414, 829114219, 79854826, 126561574, 264516401};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 427538375220;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> h = {143148318, 51382783, 533609092, 51659775, 294519095, 229202463, 328876997, 1533544, 716978074, 87441880, 366093172, 676294956, 775427672, 228339865, 641105618, 151923931, 202899903, 220095515, 139354747, 121766705, 81201691, 477188797, 753145983};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 9507180555;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> h = {572594600, 146027331, 829689362, 9377701, 216618089, 304351830, 316431643, 177410388, 59072546, 747009108, 703665972, 344879044, 189672793, 61762807, 372792907, 567563655, 427762218, 59448558, 405487985, 806904674, 515728681, 11493460, 797212490, 15298157, 224421837, 100937131, 277754067, 17444761, 801112287, 138228538, 698239885, 602302745, 599353176, 443379465, 828576734, 5000621, 287585314, 262693977, 322392133, 196640438, 445664618, 29125173, 734796589, 30753552, 32571511, 427903646, 363625833, 234495286, 9186476};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 8200506622;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> h = {93147493, 433930707, 312825274, 449983917, 684281059, 504768068, 439557692, 4666083, 88806402, 399863689, 56908331, 309732575, 701590255, 129982509, 481247553, 64576343};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 33992939272;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> h = {5, 0, 5, 0, 5, 0, 5, 5};
    int n = 8;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> h = {1045589, 2097165};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 104561054379;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> h = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 10677888;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> h = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 813367170;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> h = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 38, 29, 30, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 20943624;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> h = {1048589, 2097165, 455, 5456, 46565, 562, 234324, 24234, 43242, 342342, 4234234, 32432243, 21312, 13123, 2312312, 1231, 12, 12312, 12, 123, 123123, 13123, 3123123, 131231231, 13123123, 31231231, 21312312, 3123123, 131231, 131231, 31231231, 12312312, 3123123, 23, 312312, 123123, 3213123, 312312, 123123, 3123123, 3123, 312312, 13123, 312312, 123123, 312312, 12312, 12312, 3123, 123};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 4240950324;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> h = {13};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 1300000;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> h = {8000000};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 8000000;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> h = {1, 1};
    int n = 3;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> h = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 5711062;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> h = {512, 16, 524288, 536870912, 65536, 32768, 4, 4096, 1, 4194304, 8, 8388608, 2048, 2, 16777216, 1024, 67108864, 128, 134217728, 131072, 268435456, 33554432, 256, 262144, 64, 8192, 32, 2097152, 16384, 1048576};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 8062723575;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> h = {1048589, 2097165, 34234234, 3423424, 4534653, 456456, 456476, 7467567, 754765476, 5345345};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 7481376540;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> h = {1, 2};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 5680977137;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> h = {3, 5, 9, 8, 7, 13, 14, 15, 239, 666, 566};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 4839100;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> h = {0, 0, 0, 0};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 1343869824;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> h = {1048589, 2097165};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 104858900000;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> h = {1, 2, 3, 4, 5};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 173986582;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> h = {4895831, 655342, 5635431, 54465464, 354524, 46556, 465632, 6592840, 784598745, 38578495, 5874987, 78944, 53245, 43654, 54355, 342532, 342543, 43523, 4354, 768, 546, 2435, 4365, 56757, 23454, 4657, 46387, 4579, 3587, 2176, 4598, 8947, 580976, 4865, 46820, 439, 4385, 4996, 2357, 46798, 437598, 4379, 43294, 2843, 437502, 984, 32498, 238749, 32189, 4328};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 29315467701;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> h = {5, 0, 7, 0, 2, 6, 2};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 50840064;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> h = {4365456, 324324, 324324, 45664545, 43543, 45645645, 324423, 435435, 32432};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 846150093;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> h = {1234234, 12342, 1, 4334, 10000, 23423432, 1000, 2343240, 12340234, 12343, 24320, 21340, 12342};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 318641420;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> h = {6432, 6352, 413, 63, 84, 675, 3642, 45, 67, 426, 2, 642, 462, 42, 536, 5, 5356, 54, 54, 563, 753, 24, 537, 735, 573, 642, 42, 13, 2, 653, 365, 4, 24, 54, 35, 24, 24, 6, 67, 426, 7, 73, 62, 62, 75, 24, 624, 7, 624, 622};
    int n = 100000;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 10897100;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> h = {50000, 7, 0, 96, 103, 1, 835454955, 4234, 453453, 35345, 32424, 34534, 123, 34534, 2132};
    int n = 90005;
    BuildingAdvertise* pObj = new BuildingAdvertise();
    clock_t start = clock();
    long result = pObj->getMaxArea(h, n);
    clock_t end = clock();
    delete pObj;
    long expected = 835454955;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390467&rd=10661&pm=7473
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <stack> 
#include <string> 
#include <utility> 
#include <vector> 
 
using namespace std; 
 
 
class BuildingAdvertise { 
public: 
   long long getMaxArea( vector <int> h, int n ) { // caret here 
      vector<int> histo(n); 
       
      int j = 0; 
      int m = h.size(); 
      for ( int i=0; i<n; ++i ) { 
         histo[i] = h[j]; 
         int s = (j+1)%m; 
         h[j] = ( ( h[j] ^ h[s] ) + 13 ) % 835454957; 
         j = s; 
      } 
      histo.push_back( 0 ); 
       
      stack<pair<long long, long long> > st; 
      long long best = 0; 
       
      for ( int j=0; j<=n; ++j ) { 
         int dokle = j; 
         while ( !st.empty() && histo[j] <= st.top().first ) { 
            best = max( best, st.top().first * (j-st.top().second) ); 
            dokle = st.top().second; 
            st.pop(); 
         } 
         st.push( make_pair( histo[j], dokle ) ); 
      } 
 
      return best; 
   } 
}; 
 
 
  
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
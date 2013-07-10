/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1519
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

class BinaryCardinality {
public:
    vector<int> arrange(vector<int> numbers);
};

vector<int> BinaryCardinality::arrange(vector<int> numbers) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> numbers = {4};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> numbers = {31, 15, 7, 3, 2};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 7, 15, 31};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> numbers = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 8, 3, 5, 6, 9, 10, 7};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> numbers = {242665, 654565, 143441, 941046, 352005, 556430, 428364, 221286, 598429, 97864, 972766, 99749, 5045, 704958, 131265, 733803, 436797, 27896, 384433, 882598, 381060, 165343, 744979, 348723, 394629, 829451, 950411, 350802, 515108, 632563, 969170, 303503, 431771, 369058, 547436, 1951, 364290, 764409, 880267, 134257, 407296, 668402};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {131265, 143441, 134257, 381060, 394629, 407296, 5045, 99749, 221286, 364290, 369058, 428364, 829451, 950411, 1951, 27896, 97864, 303503, 348723, 350802, 547436, 598429, 352005, 515108, 668402, 165343, 431771, 436797, 556430, 704958, 733803, 744979, 969170, 242665, 384433, 632563, 880267, 654565, 764409, 882598, 941046, 972766};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> numbers = {361803, 721474, 597615, 568278, 134243, 388294, 981360, 470193, 188405, 9666, 84284, 603282, 655586, 900130, 166986, 129229, 906615, 609697, 695144, 92039, 582043, 807275, 595499, 53474, 972222, 617742, 505609, 109347, 379979, 614008, 547048, 920130, 619151, 818698, 750401, 745760, 728923, 879675, 765242, 987266, 317004, 49439, 899456, 406713, 683861, 720516, 849615};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9666, 655586, 721474, 53474, 134243, 166986, 745760, 920130, 987266, 49439, 84284, 547048, 603282, 109347, 317004, 361803, 595499, 609697, 899456, 92039, 379979, 406713, 470193, 582043, 617742, 695144, 750401, 807275, 818698, 900130, 129229, 388294, 505609, 568278, 614008, 619151, 720516, 597615, 683861, 765242, 879675, 981360, 728923, 188405, 849615, 906615, 972222};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> numbers = {656384, 566342, 618946, 959920, 253420, 423611, 240393, 227473, 375823, 385195, 622280, 445544, 739564, 533096, 188079, 20385, 254889, 837623, 262973, 263297, 801685, 422354, 626467, 59373, 887513, 191462, 782374, 296890, 411646, 906240, 328133, 56763, 989824, 599391, 490047, 941355};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {656384, 263297, 533096, 328133, 566342, 906240, 20385, 262973, 989824, 227473, 240393, 445544, 618946, 296890, 385195, 422354, 626467, 739564, 782374, 959920, 254889, 375823, 599391, 622280, 801685, 887513, 56763, 59373, 191462, 941355, 188079, 253420, 411646, 423611, 490047, 837623};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> numbers = {423693, 231794, 208092, 510678, 645858, 340681, 565700, 852778, 516959, 549398, 589495, 654108, 177529, 60619, 717095, 416122, 588452, 807604, 696989, 83230, 718018, 406042, 179834, 279351, 861044, 30674, 865951, 825142, 17680, 384835, 252390, 104937, 717575, 521828, 559065};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17680, 549398, 565700, 83230, 406042, 852778, 231794, 279351, 340681, 807604, 30674, 60619, 104937, 208092, 559065, 588452, 696989, 718018, 861044, 177529, 416122, 423693, 645858, 717095, 717575, 825142, 179834, 252390, 384835, 510678, 521828, 654108, 865951, 516959, 589495};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> numbers = {539280, 524176, 855829, 225551, 845350, 950060, 761018, 918168, 930266, 515855, 336852, 777510, 861408, 699486, 968225, 241916, 782479, 821393, 78783, 947312, 344353, 688225, 511873, 352936, 230047, 68947, 283736, 475815, 448515, 113854, 202557, 73469, 186261};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {344353, 688225, 283736, 539280, 821393, 918168, 68947, 352936, 448515, 861408, 336852, 968225, 225551, 230047, 475815, 845350, 855829, 947312, 186261, 202557, 241916, 511873, 699486, 930266, 73469, 78783, 113854, 761018, 777510, 782479, 524176, 950060, 515855};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> numbers = {811385, 340578, 980086, 545001, 774872, 855585, 13848, 863414, 419523, 190151, 784903, 127461};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13848, 340578, 545001, 855585, 419523, 811385, 127461, 190151, 774872, 863414, 784903, 980086};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> numbers = {539282, 814561, 526230, 832477, 534789, 333637, 270210, 566371, 32878, 578802, 434022, 328417, 939664, 530125, 723948, 953967, 527344};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32878, 534789, 328417, 270210, 526230, 527344, 539282, 566371, 333637, 530125, 939664, 578802, 723948, 814561, 434022, 832477, 953967};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> numbers = {448463, 481594, 823966, 742123, 870991, 708033, 460663, 864555, 967495, 589592};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {708033, 823966, 864555, 481594, 589592, 870991, 967495, 460663, 742123, 448463};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> numbers = {574019, 916912, 699189, 783405, 306633, 422991, 351453, 432396, 644409, 142818, 67933, 397020, 810734, 80347, 770249, 726251, 990928, 792497, 461105, 306331};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {574019, 67933, 432396, 461105, 142818, 770249, 306331, 306633, 397020, 792497, 80347, 422991, 644409, 699189, 726251, 990928, 351453, 783405, 810734, 916912};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> numbers = {650878, 181426, 534763, 910451, 204001, 716388, 849455, 633313, 892786, 863997, 434766, 4189, 986468, 76920, 618471, 108006, 626520, 941568, 572366, 447211, 292940, 268025, 934108, 563576, 840269, 530265, 878983, 751914, 489984, 18079, 987721};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4189, 76920, 181426, 292940, 489984, 941568, 18079, 204001, 434766, 530265, 534763, 563576, 934108, 987721, 108006, 268025, 626520, 633313, 840269, 986468, 716388, 751914, 878983, 447211, 572366, 910451, 849455, 892786, 618471, 650878, 863997};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> numbers = {2, 1, 0, 2, 1, 0, 2, 1, 0, 2, 1, 0};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> numbers = {378115, 479270, 529780, 583384, 477110, 691911, 520499, 251201, 523928, 825523, 248964, 823181, 538646, 915263, 800815, 697522, 424639, 19352, 460777, 122264, 601905, 986166, 416416, 595528, 67261, 807905, 746590, 60910, 584681, 795645, 361302};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19352, 538646, 595528, 248964, 378115, 416416, 479270, 529780, 67261, 251201, 361302, 697522, 122264, 583384, 601905, 800815, 807905, 825523, 986166, 460777, 691911, 746590, 823181, 60910, 477110, 520499, 584681, 795645, 523928, 424639, 915263};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> numbers = {424855, 471658, 478532, 814164, 445176, 642301, 298849, 229861, 329606, 588376, 770049, 370351, 492495, 689789, 721749, 711100, 491241, 87415, 193838, 857302, 789720, 177518, 482841, 49005, 367780, 832651, 286731};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {286731, 770049, 329606, 789720, 229861, 298849, 367780, 478532, 721749, 814164, 471658, 588376, 832651, 857302, 87415, 177518, 193838, 445176, 482841, 689789, 49005, 370351, 492495, 711100, 424855, 642301, 491241};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> numbers = {188713, 845696, 222314, 111015, 200070, 128983, 503260, 419429, 879923, 936476, 544014, 391760, 218957, 381706, 656140, 712339, 858194, 946644};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {656140, 188713, 200070, 544014, 858194, 222314, 381706, 845696, 936476, 111015, 391760, 419429, 218957, 946644, 712339, 879923, 503260, 128983};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> numbers = {999648, 213796, 572496, 885556};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {213796, 572496, 999648, 885556};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> numbers = {706248, 828258, 153563};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {706248, 828258, 153563};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> numbers = {228534, 63398, 763196, 144217, 71031, 666922, 746992, 129594, 10027, 427074, 862421, 641898, 162341, 514340, 192479, 444558, 510228, 794882, 413489, 287445, 708788, 22447, 161146, 869292, 902361, 953812, 618269, 629866, 796868, 586145, 46329, 705530, 161850, 524283, 487710, 894535, 268944, 951671, 276797, 147327};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {794882, 268944, 427074, 796868, 10027, 144217, 161850, 162341, 287445, 444558, 510228, 586145, 666922, 708788, 46329, 71031, 276797, 413489, 514340, 629866, 862421, 869292, 22447, 63398, 129594, 161146, 487710, 641898, 746992, 763196, 894535, 902361, 953812, 228534, 618269, 705530, 951671, 147327, 192479, 524283};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> numbers = {800848, 315369, 922374, 605906, 497643, 291401, 729411, 290742, 87828, 150262, 319766, 470278, 645800, 163447, 277303, 22605, 611919, 882326, 213769, 335593, 108472, 113069, 378750, 774418, 343785, 803767};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22605, 213769, 800848, 87828, 291401, 319766, 729411, 922374, 470278, 774418, 108472, 150262, 645800, 113069, 277303, 335593, 605906, 611919, 803767, 290742, 315369, 343785, 882326, 163447, 378750, 497643};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> numbers = {877768, 929818, 395880, 645974, 67782, 310690, 759592, 777697, 54299, 527846, 306191, 288301, 915754};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {67782, 395880, 54299, 929818, 288301, 306191, 527846, 877768, 310690, 759592, 645974, 915754, 777697};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> numbers = {250583, 216593, 47038, 194273, 283072, 764672, 778956, 560871, 102015, 249961, 494335, 759231};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {283072, 216593, 764672, 249961, 194273, 560871, 778956, 47038, 102015, 250583, 494335, 759231};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> numbers = {535586, 492698, 260321, 561379, 238526, 688330, 377856, 429135, 184004, 465887, 902108, 938416, 899682, 663180, 645814, 110240, 424737, 702513};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {377856, 535586, 688330, 110240, 561379, 184004, 492698, 663180, 702513, 938416, 424737, 429135, 260321, 899682, 238526, 645814, 902108, 465887};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> numbers = {150717, 346573, 349995, 500753, 126293, 771848, 446475, 61660, 788193, 888717, 224261, 616753, 510305, 883624, 500556, 494841, 559679, 238681, 121542, 248782, 79890, 854606, 520298, 941861, 234962, 19377, 147242, 734198, 935112, 974258, 833582, 882633, 445519, 716463, 856192, 108316, 965422, 721759, 586684, 783348, 957229, 470422, 127862, 541102, 603977, 16483};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16483, 856192, 79890, 19377, 224261, 446475, 500753, 541102, 788193, 935112, 61660, 108316, 238681, 616753, 771848, 854606, 121542, 147242, 150717, 234962, 346573, 500556, 510305, 559679, 603977, 833582, 126293, 349995, 445519, 470422, 520298, 721759, 127862, 248782, 494841, 586684, 883624, 888717, 941861, 957229, 734198, 882633, 965422, 974258, 716463, 783348};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> numbers = {724461, 278355, 352826, 412976, 551978, 317609, 993692, 907319, 4093, 716084, 21325, 277292, 209814, 570738};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21325, 412976, 551978, 277292, 317609, 352826, 209814, 570738, 4093, 278355, 716084, 993692, 724461, 907319};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> numbers = {510158, 548866, 244878, 897890, 418364, 775120, 251496, 352805, 513377, 214196, 799947, 264837, 581028, 491449, 798366, 559332, 327414, 306091, 859106, 923180, 47423, 483090, 515582, 137906, 257193, 906471, 426316, 307816, 627317, 966036, 815614, 687923, 355395, 834049, 780162, 204105, 324507, 229275, 376981, 301879, 8451, 322805};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8451, 548866, 264837, 426316, 559332, 137906, 214196, 307816, 352805, 376981, 834049, 204105, 355395, 418364, 923180, 251496, 581028, 627317, 799947, 47423, 244878, 257193, 301879, 306091, 483090, 510158, 513377, 775120, 780162, 798366, 859106, 897890, 322805, 324507, 966036, 687923, 815614, 906471, 229275, 327414, 491449, 515582};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> numbers = {460349, 105110, 93456, 455697, 564385, 306049, 750078, 337081, 340718, 443476, 803921, 838621, 232638, 494923, 996310, 931818, 413149, 571553, 565162, 176996, 117877, 67721, 268478, 260660, 116748, 607450, 173739, 688462, 937366, 287720, 469241};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {67721, 116748, 93456, 803921, 306049, 443476, 564385, 571553, 688462, 105110, 176996, 268478, 287720, 337081, 455697, 607450, 117877, 173739, 460349, 232638, 260660, 340718, 469241, 494923, 565162, 937366, 413149, 838621, 931818, 996310, 750078};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> numbers = {403232, 989000, 456664, 465805, 156419, 200176, 443827, 122325, 96929, 888091, 472301, 880758, 90022, 431089, 686710, 114318, 867887, 531561, 680816, 821096, 783553, 324160, 340080, 980038, 962599, 604419, 541194, 749340, 442152, 216733, 566170, 943173, 86905, 161190, 241869, 821326, 428277, 905486, 625444, 731229, 85575, 721159, 521982, 552937, 96952, 602667};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {541194, 156419, 324160, 340080, 403232, 721159, 531561, 604419, 625444, 821326, 85575, 96929, 200176, 566170, 602667, 680816, 821096, 943173, 86905, 96952, 161190, 241869, 428277, 731229, 905486, 962599, 989000, 90022, 114318, 216733, 431089, 442152, 443827, 465805, 783553, 880758, 888091, 980038, 122325, 472301, 552937, 686710, 749340, 456664, 867887, 521982};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> numbers = {215066, 313116, 473290, 790316, 773271, 988267, 933653, 93044, 672769, 840335, 766616, 998928, 852527};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {672769, 215066, 313116, 790316, 852527, 93044, 473290, 766616, 998928, 840335, 988267, 773271, 933653};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> numbers = {776601, 489996, 291118, 891188, 311857, 978509, 442892, 586376};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {311857, 442892, 586376, 291118, 489996, 891188, 776601, 978509};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> numbers = {607362, 767966, 154445, 770082, 192510, 220713, 173083, 363855, 817316, 128769, 864708, 654155, 117063, 368228, 440415, 240374, 976458, 120591, 797297, 718782, 703718, 783142, 111740, 779811, 741985, 796826, 571560, 264919, 632045, 254329, 346218, 747373, 249976, 155945, 907114, 34336, 309118, 91943, 978846, 226888, 737841, 947542, 727566, 620098, 822927, 950213, 273981, 777058, 942934, 8946};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34336, 607362, 8946, 155945, 770082, 173083, 346218, 571560, 737841, 796826, 117063, 128769, 226888, 249976, 264919, 620098, 727566, 741985, 797297, 817316, 864708, 91943, 111740, 154445, 220713, 273981, 368228, 120591, 254329, 363855, 632045, 779811, 822927, 942934, 976458, 240374, 440415, 703718, 777058, 783142, 947542, 309118, 654155, 747373, 907114, 950213, 192510, 718782, 767966, 978846};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> numbers = {568771, 306719, 831207, 961902, 836054, 359403, 745718, 498420, 600115, 421345, 507853, 577894, 425247};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {600115, 577894, 568771, 836054, 306719, 421345, 745718, 498420, 425247, 831207, 961902, 359403, 507853};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> numbers = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 8, 3, 5, 6, 9, 10, 7};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> numbers = {4, 1};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> numbers = {1024, 3};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1024, 3};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> numbers = {4, 2};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> numbers = {1, 2};
    BinaryCardinality* pObj = new BinaryCardinality();
    clock_t start = clock();
    vector<int> result = pObj->arrange(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=107835&rd=4635&pm=1519
********************************************************************************
#line 2 "BinaryCardinality.cpp" 
#include <string> 
#include <vector> 
#include <sstream> 
#include <iostream> 
#include <algorithm> 
#include <numeric> 
#include <set> 
#include <map> 
using namespace std; 
 
#ifdef _WIN32 
typedef __int64 int64; 
#else 
typedef long long int64; 
#endif 
 
int ones(int n) 
{ 
  int count = 0; 
  while(n) 
  { 
    if(n & 1) 
      count++; 
    n >>= 1; 
  } 
  return count; 
} 
 
bool lt(int a,int b) 
{ 
int aa = ones(a); 
int bb = ones(b); 
if(aa < bb) return true; 
else if(aa > bb) return false; 
else return a < b; 
} 
 
class BinaryCardinality  
{ 
  public: 
  vector <int> arrange(vector <int> numbers)  
  { 
    sort(numbers.begin(),numbers.end(),lt); 
    return numbers; 
  } 
}; 
 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
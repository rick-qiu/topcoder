/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3043
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

class Generators {
public:
    vector<int> find(int p);
};

vector<int> Generators::find(int p) {
    vector<int> ret;
    return ret;
}


int test0() {
    int p = 3;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int p = 5;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int p = 13;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 7, 11};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int p = 19;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 10, 13, 14, 15};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int p = 337;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 15, 19, 20, 22, 23, 29, 31, 33, 34, 44, 45, 46, 51, 53, 60, 61, 67, 68, 70, 71, 73, 80, 83, 87, 89, 90, 93, 99, 101, 106, 109, 114, 116, 118, 120, 124, 130, 132, 134, 139, 143, 151, 152, 154, 160, 161, 166, 171, 176, 177, 183, 185, 186, 194, 198, 203, 205, 207, 213, 217, 219, 221, 223, 228, 231, 236, 238, 244, 247, 248, 250, 254, 257, 264, 266, 267, 269, 270, 276, 277, 284, 286, 291, 292, 293, 303, 304, 306, 308, 314, 315, 317, 318, 322, 327};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int p = 577;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 7, 10, 13, 15, 21, 28, 30, 39, 40, 43, 45, 52, 55, 56, 58, 61, 63, 73, 74, 77, 79, 80, 82, 84, 85, 89, 90, 94, 95, 101, 103, 104, 109, 110, 113, 116, 117, 120, 122, 129, 133, 134, 135, 137, 143, 148, 156, 158, 161, 164, 165, 166, 168, 172, 173, 174, 175, 178, 179, 183, 188, 189, 190, 194, 211, 217, 218, 219, 222, 224, 226, 227, 229, 230, 231, 233, 237, 238, 240, 245, 246, 247, 250, 252, 255, 257, 265, 267, 268, 269, 270, 274, 278, 282, 285, 292, 295, 299, 303, 307, 308, 309, 310, 312, 320, 322, 325, 327, 330, 331, 332, 337, 339, 340, 344, 346, 347, 348, 350, 351, 353, 355, 358, 359, 360, 366, 383, 387, 388, 389, 394, 398, 399, 402, 403, 404, 405, 409, 411, 412, 413, 416, 419, 421, 429, 434, 440, 442, 443, 444, 448, 455, 457, 460, 461, 464, 467, 468, 473, 474, 476, 482, 483, 487, 488, 492, 493, 495, 497, 498, 500, 503, 504, 514, 516, 519, 521, 522, 525, 532, 534, 537, 538, 547, 549, 556, 562, 564, 567, 570, 572};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int p = 199;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6, 15, 22, 30, 34, 38, 39, 41, 44, 48, 54, 68, 69, 71, 73, 75, 77, 84, 87, 95, 97, 99, 105, 108, 110, 113, 118, 119, 120, 127, 129, 133, 134, 142, 143, 146, 148, 149, 150, 152, 153, 154, 163, 164, 166, 167, 168, 170, 173, 176, 179, 183, 185, 186, 189, 190, 192, 195, 197};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int p = 829;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 19, 21, 22, 24, 26, 28, 30, 32, 35, 37, 40, 47, 50, 54, 57, 63, 66, 72, 73, 79, 82, 87, 90, 91, 93, 98, 102, 103, 104, 112, 113, 116, 118, 119, 122, 124, 127, 128, 130, 134, 136, 138, 140, 145, 148, 149, 155, 159, 160, 161, 162, 170, 172, 175, 181, 184, 185, 188, 194, 200, 202, 209, 212, 228, 229, 230, 231, 234, 235, 242, 247, 249, 250, 251, 252, 261, 262, 263, 264, 265, 266, 273, 274, 279, 285, 286, 287, 288, 292, 293, 294, 302, 304, 306, 308, 312, 313, 314, 315, 316, 321, 328, 330, 332, 333, 336, 349, 352, 353, 354, 356, 360, 365, 366, 377, 379, 380, 382, 384, 387, 389, 390, 395, 403, 406, 407, 409, 410, 412, 414, 415, 417, 419, 420, 422, 423, 426, 434, 439, 440, 442, 445, 447, 449, 450, 452, 463, 464, 469, 473, 475, 476, 477, 480, 493, 496, 497, 499, 501, 508, 513, 514, 515, 516, 517, 521, 523, 525, 527, 535, 536, 537, 541, 542, 543, 544, 550, 555, 556, 563, 564, 565, 566, 567, 568, 577, 578, 579, 580, 582, 587, 594, 595, 598, 599, 600, 601, 617, 620, 627, 629, 635, 641, 644, 645, 648, 654, 657, 659, 667, 668, 669, 670, 674, 680, 681, 684, 689, 691, 693, 695, 699, 701, 702, 705, 707, 710, 711, 713, 716, 717, 725, 726, 727, 731, 736, 738, 739, 742, 747, 750, 756, 757, 763, 766, 772, 775, 779, 782, 789, 792, 794, 797, 799, 801, 803, 805, 807, 808, 810, 823, 827};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int p = 601;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 11, 14, 19, 22, 29, 33, 34, 35, 38, 41, 42, 43, 44, 53, 55, 56, 58, 66, 68, 70, 73, 82, 84, 86, 88, 91, 93, 95, 103, 107, 110, 112, 114, 127, 136, 137, 142, 143, 145, 146, 152, 153, 155, 159, 161, 164, 168, 172, 173, 174, 177, 182, 186, 189, 190, 206, 212, 220, 224, 228, 232, 247, 249, 253, 254, 255, 257, 264, 265, 272, 274, 280, 283, 284, 286, 290, 291, 292, 297, 304, 309, 310, 311, 315, 317, 318, 321, 327, 329, 336, 337, 344, 346, 347, 348, 352, 354, 369, 373, 377, 381, 389, 395, 411, 412, 415, 419, 424, 427, 428, 429, 433, 437, 440, 442, 446, 448, 449, 455, 456, 458, 459, 464, 465, 474, 487, 489, 491, 494, 498, 506, 508, 510, 513, 515, 517, 519, 528, 531, 533, 535, 543, 545, 546, 548, 557, 558, 559, 560, 563, 566, 567, 568, 572, 579, 582, 587, 590, 594};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int p = 491;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 7, 8, 10, 18, 19, 21, 22, 23, 24, 26, 28, 29, 30, 34, 40, 47, 50, 54, 57, 59, 62, 67, 69, 72, 73, 74, 76, 78, 82, 84, 86, 87, 88, 89, 90, 92, 95, 98, 102, 103, 112, 116, 119, 120, 122, 130, 140, 141, 142, 145, 149, 150, 151, 157, 160, 166, 167, 170, 171, 173, 177, 188, 189, 191, 193, 194, 198, 201, 207, 209, 211, 212, 214, 216, 217, 219, 222, 228, 235, 242, 246, 247, 250, 252, 254, 258, 264, 266, 267, 271, 273, 276, 281, 285, 286, 287, 292, 296, 299, 304, 306, 307, 309, 311, 317, 319, 322, 323, 326, 328, 330, 335, 336, 337, 343, 344, 348, 352, 356, 357, 358, 359, 360, 364, 366, 367, 368, 370, 374, 383, 384, 385, 391, 392, 397, 398, 406, 408, 412, 416, 420, 421, 423, 426, 427, 430, 431, 433, 436, 439, 442, 443, 446, 447, 452, 453, 455, 458, 460, 466, 475, 476, 478, 480, 486, 487};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int p = 359;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 13, 14, 19, 21, 26, 28, 29, 31, 35, 38, 39, 42, 43, 52, 53, 56, 57, 58, 59, 61, 62, 63, 65, 67, 70, 71, 76, 77, 78, 83, 84, 86, 87, 89, 93, 95, 97, 103, 104, 105, 106, 109, 112, 113, 114, 116, 117, 118, 119, 122, 124, 126, 129, 130, 134, 137, 139, 140, 142, 143, 145, 152, 154, 155, 156, 157, 159, 161, 163, 166, 167, 168, 171, 172, 174, 175, 177, 178, 179, 183, 186, 189, 190, 194, 195, 197, 199, 201, 206, 208, 209, 210, 211, 212, 213, 215, 218, 221, 223, 224, 226, 227, 228, 231, 232, 234, 236, 238, 239, 244, 248, 249, 251, 252, 257, 258, 259, 260, 261, 263, 265, 267, 268, 269, 271, 274, 277, 278, 279, 280, 284, 285, 286, 287, 290, 291, 293, 295, 299, 304, 305, 308, 309, 310, 311, 312, 313, 314, 315, 318, 319, 322, 323, 325, 326, 327, 329, 332, 334, 335, 336, 337, 339, 341, 342, 343, 344, 347, 348, 349, 350, 351, 353, 354, 355, 356, 357};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int p = 919;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 14, 15, 19, 28, 30, 31, 33, 37, 38, 41, 43, 56, 60, 62, 63, 66, 69, 73, 74, 75, 76, 77, 82, 86, 89, 91, 97, 101, 109, 112, 119, 120, 124, 126, 127, 132, 135, 137, 138, 141, 146, 147, 150, 154, 155, 157, 161, 163, 164, 167, 171, 172, 175, 177, 178, 182, 183, 185, 194, 195, 197, 199, 202, 203, 205, 209, 224, 227, 238, 239, 240, 247, 248, 249, 252, 254, 255, 257, 265, 269, 270, 274, 276, 279, 281, 282, 292, 294, 296, 297, 300, 304, 310, 313, 314, 321, 322, 323, 326, 328, 333, 334, 337, 339, 342, 347, 350, 354, 356, 363, 364, 365, 369, 370, 373, 385, 387, 388, 390, 394, 395, 398, 399, 403, 406, 410, 413, 417, 418, 429, 430, 431, 435, 436, 437, 447, 448, 449, 454, 457, 463, 467, 469, 475, 476, 478, 480, 481, 491, 494, 496, 497, 498, 504, 505, 508, 510, 514, 519, 523, 527, 528, 530, 533, 537, 538, 540, 541, 543, 545, 547, 548, 551, 557, 558, 559, 561, 562, 564, 567, 573, 579, 583, 584, 587, 588, 592, 594, 599, 600, 608, 616, 620, 621, 626, 628, 629, 633, 641, 642, 646, 653, 656, 657, 659, 661, 666, 668, 673, 674, 675, 677, 678, 683, 684, 688, 691, 693, 694, 697, 700, 705, 708, 719, 721, 723, 726, 728, 730, 731, 732, 733, 735, 738, 739, 740, 743, 746, 749, 751, 753, 759, 770, 774, 776, 780, 786, 788, 789, 796, 797, 798, 801, 805, 806, 808, 812, 819, 821, 825, 826, 827, 829, 831, 834, 835, 836, 839, 854, 858, 860, 869, 870, 872, 873, 874, 875, 877, 879, 894, 896, 897, 898, 899, 908, 909, 914};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int p = 839;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 13, 17, 22, 26, 29, 31, 33, 34, 39, 41, 44, 51, 52, 55, 58, 62, 65, 66, 67, 68, 71, 77, 78, 79, 82, 83, 85, 87, 88, 89, 91, 93, 97, 99, 102, 103, 104, 107, 109, 110, 113, 116, 117, 119, 123, 124, 130, 131, 132, 134, 136, 139, 142, 145, 149, 151, 153, 154, 155, 156, 157, 158, 163, 164, 165, 166, 167, 170, 173, 174, 176, 178, 181, 182, 186, 191, 194, 195, 198, 199, 201, 203, 204, 205, 206, 208, 209, 213, 214, 217, 218, 220, 226, 229, 231, 232, 233, 234, 237, 238, 239, 246, 247, 248, 249, 251, 253, 255, 260, 261, 262, 263, 264, 267, 268, 269, 272, 273, 275, 277, 278, 279, 284, 287, 290, 291, 297, 298, 299, 302, 306, 307, 308, 309, 310, 312, 314, 316, 321, 323, 325, 326, 327, 328, 330, 331, 332, 334, 335, 339, 340, 346, 348, 349, 351, 352, 353, 355, 356, 357, 359, 362, 364, 367, 369, 372, 379, 382, 383, 385, 388, 389, 390, 391, 393, 395, 396, 397, 398, 401, 402, 406, 407, 408, 409, 410, 412, 415, 416, 417, 418, 419, 425, 426, 428, 434, 435, 436, 439, 440, 445, 447, 452, 453, 455, 458, 459, 461, 462, 463, 464, 465, 466, 468, 469, 471, 473, 474, 476, 478, 479, 481, 485, 489, 492, 494, 495, 496, 497, 498, 501, 502, 503, 506, 510, 515, 517, 519, 520, 521, 522, 524, 526, 528, 534, 535, 536, 538, 539, 543, 544, 545, 546, 547, 550, 551, 553, 554, 556, 557, 558, 559, 563, 565, 568, 569, 573, 574, 580, 581, 582, 583, 585, 587, 589, 594, 595, 596, 597, 598, 599, 603, 604, 609, 611, 612, 614, 615, 616, 617, 618, 620, 623, 624, 627, 628, 629, 632, 637, 639, 642, 643, 646, 647, 649, 650, 651, 652, 654, 655, 656, 659, 660, 662, 664, 667, 668, 670, 671, 677, 678, 679, 680, 687, 689, 691, 692, 693, 695, 696, 698, 699, 701, 702, 704, 706, 710, 711, 712, 713, 714, 717, 718, 719, 721, 724, 725, 727, 728, 731, 733, 734, 738, 739, 741, 743, 744, 745, 747, 749, 753, 755, 758, 759, 763, 764, 765, 766, 767, 769, 770, 775, 776, 778, 779, 780, 782, 783, 785, 786, 789, 790, 791, 792, 793, 794, 796, 797, 799, 801, 802, 803, 804, 807, 809, 811, 812, 814, 815, 816, 818, 819, 820, 821, 823, 824, 825, 827, 829, 830, 831, 832, 833, 834, 835, 836, 837};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int p = 761;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 11, 12, 14, 22, 24, 26, 30, 31, 43, 44, 48, 51, 52, 53, 54, 55, 56, 57, 60, 63, 70, 71, 73, 83, 88, 97, 99, 102, 104, 106, 108, 109, 110, 111, 112, 114, 120, 122, 123, 124, 126, 127, 130, 131, 138, 141, 142, 146, 147, 151, 155, 161, 163, 172, 173, 174, 175, 177, 187, 191, 192, 193, 194, 197, 198, 199, 201, 204, 206, 209, 211, 215, 216, 218, 220, 221, 222, 223, 224, 227, 228, 229, 231, 234, 237, 240, 241, 244, 247, 248, 251, 253, 255, 257, 260, 265, 266, 267, 269, 270, 273, 275, 276, 279, 280, 282, 284, 285, 287, 293, 294, 300, 302, 303, 313, 314, 315, 317, 319, 321, 322, 326, 329, 332, 337, 339, 343, 344, 346, 348, 350, 352, 354, 355, 359, 363, 365, 367, 373, 374, 377, 379, 382, 384, 387, 388, 394, 396, 398, 402, 406, 407, 409, 411, 413, 415, 417, 418, 422, 424, 429, 432, 435, 439, 440, 442, 444, 446, 447, 448, 458, 459, 461, 467, 468, 474, 476, 477, 479, 481, 482, 485, 486, 488, 491, 492, 494, 495, 496, 501, 504, 506, 508, 510, 513, 514, 517, 520, 521, 524, 527, 530, 532, 533, 534, 537, 538, 539, 540, 541, 543, 545, 546, 550, 552, 555, 557, 560, 562, 563, 564, 567, 568, 569, 570, 574, 584, 586, 587, 588, 589, 598, 600, 606, 610, 614, 615, 619, 620, 623, 630, 631, 634, 635, 637, 638, 639, 641, 647, 649, 650, 651, 652, 653, 655, 657, 659, 662, 664, 673, 678, 688, 690, 691, 698, 701, 704, 705, 706, 707, 708, 709, 710, 713, 717, 718, 730, 731, 735, 737, 739, 747, 749, 750, 754, 755};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int p = 181;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 10, 18, 21, 23, 24, 28, 41, 47, 50, 53, 54, 57, 58, 63, 66, 69, 76, 77, 78, 83, 84, 85, 90, 91, 96, 97, 98, 103, 104, 105, 112, 115, 118, 123, 124, 127, 128, 131, 134, 140, 153, 157, 158, 160, 163, 171, 179};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int p = 881;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6, 12, 14, 15, 17, 23, 24, 27, 28, 30, 31, 34, 35, 39, 46, 53, 54, 56, 57, 58, 59, 62, 63, 70, 73, 79, 91, 92, 94, 96, 101, 103, 106, 111, 113, 115, 116, 120, 123, 127, 129, 131, 132, 133, 136, 145, 147, 149, 150, 151, 154, 156, 157, 163, 165, 167, 170, 181, 182, 183, 187, 188, 195, 199, 201, 202, 206, 207, 212, 213, 216, 221, 222, 224, 227, 228, 235, 236, 239, 246, 248, 249, 251, 253, 254, 257, 259, 261, 262, 264, 265, 269, 270, 272, 280, 281, 285, 287, 291, 292, 294, 295, 297, 299, 301, 302, 306, 308, 310, 311, 316, 319, 321, 323, 330, 334, 337, 340, 341, 347, 349, 350, 351, 353, 359, 362, 363, 364, 365, 366, 367, 368, 373, 374, 376, 377, 379, 383, 384, 385, 395, 398, 401, 402, 403, 404, 409, 411, 412, 417, 421, 423, 424, 425, 426, 427, 429, 432, 433, 448, 449, 452, 454, 455, 456, 457, 458, 460, 464, 469, 470, 472, 477, 478, 479, 480, 483, 486, 496, 497, 498, 502, 504, 505, 507, 508, 513, 514, 515, 516, 517, 518, 519, 522, 528, 530, 531, 532, 534, 540, 541, 544, 547, 551, 558, 560, 562, 565, 570, 571, 573, 575, 579, 580, 582, 584, 586, 587, 589, 590, 594, 596, 600, 601, 609, 611, 612, 616, 617, 619, 620, 622, 624, 627, 628, 630, 632, 633, 635, 642, 645, 646, 653, 654, 657, 659, 660, 665, 668, 669, 674, 675, 679, 680, 682, 686, 693, 694, 698, 699, 700, 711, 714, 716, 718, 724, 725, 727, 730, 731, 732, 734, 736, 745, 748, 749, 750, 752, 754, 758, 761, 765, 766, 768, 770, 775, 778, 780, 785, 787, 789, 790, 802, 808, 811, 818, 819, 822, 823, 824, 825, 827, 828, 835, 842, 846, 847, 850, 851, 853, 854, 857, 858, 864, 866, 867, 869, 875, 878};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int p = 727;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10, 19, 20, 21, 31, 35, 37, 38, 39, 40, 42, 45, 51, 58, 59, 62, 70, 74, 75, 76, 77, 78, 80, 83, 84, 85, 89, 102, 107, 115, 116, 118, 124, 129, 141, 143, 147, 148, 149, 150, 154, 156, 165, 166, 168, 170, 171, 178, 180, 183, 187, 189, 191, 193, 201, 203, 204, 214, 217, 219, 223, 229, 230, 232, 236, 239, 247, 248, 251, 258, 261, 265, 271, 275, 277, 279, 280, 283, 286, 287, 291, 294, 300, 304, 305, 307, 308, 309, 311, 312, 315, 317, 320, 327, 330, 332, 333, 335, 336, 339, 340, 342, 355, 356, 357, 360, 366, 373, 374, 378, 379, 381, 382, 383, 386, 393, 401, 402, 405, 406, 408, 417, 421, 428, 434, 435, 437, 438, 455, 457, 458, 459, 460, 464, 465, 472, 473, 475, 478, 483, 487, 489, 493, 494, 496, 499, 501, 502, 503, 507, 509, 516, 517, 518, 519, 521, 522, 527, 531, 533, 539, 541, 542, 550, 553, 554, 555, 558, 560, 564, 566, 574, 581, 582, 588, 591, 592, 593, 596, 600, 601, 605, 608, 610, 614, 615, 616, 618, 623, 627, 629, 630, 633, 634, 640, 641, 654, 659, 660, 664, 666, 667, 670, 671, 672, 675, 677, 678, 680, 684, 697, 699, 701, 702, 710, 712, 713, 714, 720};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int p = 523;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 12, 18, 21, 22, 30, 32, 34, 37, 39, 45, 47, 48, 56, 57, 67, 69, 75, 80, 82, 83, 84, 85, 86, 87, 93, 97, 98, 103, 104, 106, 108, 120, 127, 128, 132, 139, 140, 142, 146, 147, 152, 156, 163, 167, 182, 184, 189, 197, 198, 199, 200, 204, 205, 210, 211, 213, 214, 215, 218, 222, 224, 227, 228, 229, 231, 232, 233, 236, 242, 244, 245, 248, 251, 260, 262, 265, 266, 267, 268, 270, 271, 273, 274, 276, 277, 282, 283, 288, 293, 298, 300, 302, 311, 314, 316, 320, 321, 322, 330, 333, 338, 347, 348, 350, 351, 352, 353, 354, 355, 357, 358, 359, 362, 365, 366, 372, 374, 379, 380, 382, 388, 390, 392, 393, 399, 401, 404, 405, 406, 407, 412, 413, 416, 421, 423, 427, 431, 432, 433, 434, 446, 447, 449, 452, 453, 455, 457, 460, 469, 471, 474, 479, 483, 487, 492, 494, 495, 498, 500, 507, 508, 510, 513, 516, 517, 519};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int p = 313;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 14, 15, 17, 20, 21, 28, 31, 34, 37, 41, 45, 46, 47, 55, 59, 60, 62, 63, 65, 67, 69, 74, 77, 80, 84, 86, 89, 90, 91, 92, 94, 101, 102, 106, 109, 110, 112, 120, 122, 123, 126, 127, 130, 146, 149, 153, 154, 159, 160, 164, 167, 183, 186, 187, 190, 191, 193, 201, 203, 204, 207, 211, 212, 219, 221, 222, 223, 224, 227, 229, 233, 236, 239, 244, 246, 248, 250, 251, 253, 254, 258, 266, 267, 268, 272, 276, 279, 282, 285, 292, 293, 296, 298, 299, 303};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int p = 17;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 6, 7, 10, 11, 12, 14};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int p = 89;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6, 7, 13, 14, 15, 19, 23, 24, 26, 27, 28, 29, 30, 31, 33, 35, 38, 41, 43, 46, 48, 51, 54, 56, 58, 59, 60, 61, 62, 63, 65, 66, 70, 74, 75, 76, 82, 83, 86};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int p = 373;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 6, 11, 14, 15, 24, 26, 32, 34, 35, 42, 43, 44, 47, 53, 54, 57, 60, 61, 62, 65, 72, 76, 77, 78, 79, 80, 82, 85, 92, 98, 99, 102, 105, 110, 118, 127, 128, 131, 132, 135, 141, 143, 149, 150, 151, 155, 159, 162, 166, 168, 171, 172, 174, 178, 180, 182, 183, 186, 187, 190, 191, 193, 195, 199, 201, 202, 205, 207, 211, 214, 218, 222, 223, 224, 230, 232, 238, 241, 242, 245, 246, 255, 263, 268, 271, 274, 275, 281, 288, 291, 293, 294, 295, 296, 297, 301, 308, 311, 312, 313, 316, 319, 320, 326, 329, 330, 331, 338, 339, 341, 347, 349, 358, 359, 362, 367, 368, 371};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int p = 151;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 12, 13, 14, 15, 30, 35, 48, 51, 52, 54, 56, 61, 63, 71, 77, 82, 89, 93, 96, 102, 104, 106, 108, 109, 111, 112, 114, 115, 117, 120, 126, 129, 130, 133, 134, 140, 141, 146};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int p = 167;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10, 13, 15, 17, 20, 23, 26, 30, 34, 35, 37, 39, 40, 41, 43, 45, 46, 51, 52, 53, 55, 59, 60, 67, 68, 69, 70, 71, 73, 74, 78, 79, 80, 82, 83, 86, 90, 91, 92, 95, 101, 102, 103, 104, 105, 106, 109, 110, 111, 113, 117, 118, 119, 120, 123, 125, 129, 131, 134, 135, 136, 138, 139, 140, 142, 143, 145, 146, 148, 149, 151, 153, 155, 156, 158, 159, 160, 161, 163, 164, 165};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int p = 457;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 15, 23, 26, 30, 31, 33, 35, 39, 41, 45, 46, 52, 53, 59, 60, 61, 62, 66, 69, 71, 77, 78, 82, 89, 90, 92, 95, 97, 99, 101, 103, 104, 106, 118, 120, 122, 123, 124, 129, 132, 138, 140, 142, 145, 149, 154, 156, 159, 164, 167, 173, 177, 178, 179, 180, 181, 184, 190, 193, 194, 198, 199, 202, 206, 208, 209, 211, 212, 213, 221, 222, 235, 236, 244, 245, 246, 248, 249, 251, 255, 258, 259, 263, 264, 267, 273, 276, 277, 278, 279, 280, 284, 290, 293, 298, 301, 303, 308, 312, 315, 317, 319, 325, 328, 333, 334, 335, 337, 339, 351, 353, 354, 356, 358, 360, 362, 365, 367, 368, 375, 379, 380, 386, 388, 391, 395, 396, 397, 398, 404, 405, 411, 412, 416, 418, 422, 424, 426, 427, 431, 434, 442, 444};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int p = 113;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 6, 10, 12, 17, 19, 20, 21, 23, 24, 27, 29, 33, 34, 37, 38, 39, 43, 45, 46, 47, 54, 55, 58, 59, 66, 67, 68, 70, 74, 75, 76, 79, 80, 84, 86, 89, 90, 92, 93, 94, 96, 101, 103, 107, 108, 110};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int p = 11;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int p = 389;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 8, 10, 12, 14, 15, 18, 21, 22, 23, 26, 27, 29, 31, 32, 33, 34, 37, 38, 39, 40, 43, 47, 48, 50, 51, 53, 56, 57, 60, 61, 70, 71, 72, 75, 82, 83, 84, 88, 89, 90, 92, 98, 101, 103, 104, 105, 107, 108, 109, 110, 116, 118, 123, 124, 126, 128, 130, 131, 132, 134, 135, 136, 138, 139, 145, 146, 147, 148, 149, 151, 152, 154, 155, 156, 158, 160, 161, 162, 163, 165, 167, 170, 172, 174, 177, 182, 185, 186, 188, 189, 190, 191, 192, 194, 195, 197, 198, 199, 200, 201, 203, 204, 207, 212, 215, 217, 219, 222, 224, 226, 227, 228, 229, 231, 233, 234, 235, 237, 238, 240, 241, 242, 243, 244, 250, 251, 253, 254, 255, 257, 258, 259, 261, 263, 265, 266, 271, 273, 279, 280, 281, 282, 284, 285, 286, 288, 291, 297, 299, 300, 301, 305, 306, 307, 314, 317, 318, 319, 328, 329, 332, 333, 336, 338, 339, 341, 342, 346, 349, 350, 351, 352, 355, 356, 357, 358, 360, 362, 363, 366, 367, 368, 371, 374, 375, 377, 379, 381, 386, 387};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int p = 547;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 7, 12, 17, 18, 20, 22, 23, 32, 33, 37, 43, 45, 48, 50, 57, 58, 61, 63, 70, 71, 75, 77, 88, 91, 92, 95, 104, 108, 109, 112, 124, 134, 141, 146, 147, 152, 153, 159, 162, 163, 168, 170, 175, 180, 186, 198, 200, 201, 203, 207, 211, 219, 220, 221, 223, 228, 229, 230, 234, 235, 241, 246, 258, 260, 262, 271, 272, 274, 278, 281, 283, 288, 291, 297, 298, 320, 322, 333, 334, 337, 339, 341, 345, 354, 356, 357, 358, 359, 363, 364, 370, 371, 373, 376, 381, 387, 389, 390, 392, 397, 403, 404, 405, 407, 408, 410, 412, 417, 420, 425, 428, 429, 431, 432, 434, 436, 437, 448, 450, 461, 465, 469, 471, 473, 474, 478, 480, 481, 485, 487, 491, 494, 496, 498, 511, 513, 522, 528, 531, 532, 541, 543};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int p = 587;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 6, 8, 11, 13, 14, 15, 18, 19, 20, 23, 24, 32, 33, 34, 35, 37, 39, 41, 42, 44, 45, 50, 52, 54, 56, 57, 58, 60, 61, 62, 69, 71, 72, 76, 77, 80, 85, 86, 91, 92, 94, 96, 97, 98, 99, 102, 103, 105, 106, 107, 109, 110, 111, 117, 118, 123, 125, 126, 127, 128, 130, 131, 132, 133, 134, 135, 136, 139, 140, 145, 146, 148, 150, 155, 156, 157, 158, 161, 162, 164, 166, 168, 171, 173, 174, 176, 178, 180, 183, 186, 187, 190, 200, 202, 207, 208, 213, 215, 216, 221, 224, 226, 227, 228, 230, 231, 232, 235, 238, 239, 240, 241, 242, 244, 245, 248, 251, 255, 258, 259, 263, 265, 271, 273, 274, 275, 276, 277, 282, 284, 286, 287, 288, 291, 294, 295, 297, 298, 302, 304, 306, 307, 308, 309, 315, 317, 318, 319, 320, 321, 323, 325, 326, 327, 330, 331, 333, 334, 335, 337, 338, 340, 341, 344, 350, 351, 353, 354, 358, 362, 364, 365, 367, 368, 369, 370, 373, 375, 376, 377, 378, 381, 382, 383, 384, 386, 388, 389, 390, 391, 392, 393, 394, 395, 396, 398, 399, 402, 403, 405, 406, 408, 410, 412, 415, 417, 418, 420, 422, 424, 427, 428, 433, 434, 435, 436, 438, 440, 443, 444, 445, 446, 449, 450, 458, 463, 465, 466, 467, 468, 471, 472, 473, 474, 475, 479, 483, 486, 487, 492, 494, 497, 498, 499, 500, 503, 504, 505, 506, 508, 509, 512, 513, 514, 517, 519, 520, 521, 522, 523, 524, 528, 532, 534, 536, 538, 539, 540, 541, 544, 547, 549, 551, 556, 557, 558, 559, 560, 561, 562, 565, 566, 570, 571, 575, 577, 578, 580, 583, 584};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int p = 619;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 10, 11, 12, 15, 18, 19, 21, 32, 40, 46, 48, 52, 55, 56, 59, 62, 65, 66, 67, 68, 69, 70, 75, 76, 78, 82, 83, 84, 85, 90, 91, 97, 98, 99, 102, 103, 106, 108, 111, 116, 119, 122, 123, 128, 133, 135, 137, 142, 145, 146, 147, 149, 158, 159, 162, 171, 172, 174, 176, 178, 179, 181, 183, 184, 188, 189, 191, 193, 200, 203, 208, 214, 215, 220, 224, 233, 235, 240, 250, 251, 254, 257, 258, 262, 263, 264, 271, 272, 282, 286, 288, 295, 296, 299, 300, 301, 303, 308, 310, 313, 314, 322, 325, 327, 328, 329, 335, 338, 341, 345, 346, 349, 350, 353, 354, 360, 363, 364, 370, 372, 373, 374, 380, 385, 390, 391, 392, 393, 394, 402, 409, 412, 414, 415, 418, 420, 421, 422, 424, 425, 429, 432, 433, 442, 444, 446, 449, 451, 452, 453, 454, 456, 462, 463, 464, 465, 467, 468, 471, 475, 476, 479, 481, 485, 488, 489, 495, 498, 499, 501, 504, 510, 518, 519, 523, 525, 531, 533, 539, 556, 558, 561, 562, 565, 566, 570, 574, 578, 582, 583, 585, 586, 589, 591, 593, 594, 596, 597, 603, 612, 613, 614, 615};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int p = 619;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 10, 11, 12, 15, 18, 19, 21, 32, 40, 46, 48, 52, 55, 56, 59, 62, 65, 66, 67, 68, 69, 70, 75, 76, 78, 82, 83, 84, 85, 90, 91, 97, 98, 99, 102, 103, 106, 108, 111, 116, 119, 122, 123, 128, 133, 135, 137, 142, 145, 146, 147, 149, 158, 159, 162, 171, 172, 174, 176, 178, 179, 181, 183, 184, 188, 189, 191, 193, 200, 203, 208, 214, 215, 220, 224, 233, 235, 240, 250, 251, 254, 257, 258, 262, 263, 264, 271, 272, 282, 286, 288, 295, 296, 299, 300, 301, 303, 308, 310, 313, 314, 322, 325, 327, 328, 329, 335, 338, 341, 345, 346, 349, 350, 353, 354, 360, 363, 364, 370, 372, 373, 374, 380, 385, 390, 391, 392, 393, 394, 402, 409, 412, 414, 415, 418, 420, 421, 422, 424, 425, 429, 432, 433, 442, 444, 446, 449, 451, 452, 453, 454, 456, 462, 463, 464, 465, 467, 468, 471, 475, 476, 479, 481, 485, 488, 489, 495, 498, 499, 501, 504, 510, 518, 519, 523, 525, 531, 533, 539, 556, 558, 561, 562, 565, 566, 570, 574, 578, 582, 583, 585, 586, 589, 591, 593, 594, 596, 597, 603, 612, 613, 614, 615};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int p = 173;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 7, 8, 11, 12, 17, 18, 19, 20, 26, 27, 28, 30, 32, 39, 42, 44, 45, 46, 48, 50, 53, 58, 59, 61, 62, 63, 65, 66, 68, 69, 70, 71, 72, 74, 75, 76, 79, 82, 86, 87, 91, 94, 97, 98, 99, 101, 102, 103, 104, 105, 107, 108, 110, 111, 112, 114, 115, 120, 123, 125, 127, 128, 129, 131, 134, 141, 143, 145, 146, 147, 153, 154, 155, 156, 161, 162, 165, 166, 168, 170, 171};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int p = 997;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 11, 17, 21, 26, 28, 29, 33, 38, 41, 43, 44, 46, 47, 51, 61, 63, 65, 68, 70, 78, 84, 87, 95, 98, 99, 103, 104, 106, 110, 112, 114, 115, 116, 118, 123, 127, 129, 132, 138, 141, 142, 143, 146, 152, 153, 154, 157, 158, 163, 164, 170, 172, 175, 176, 178, 179, 181, 183, 184, 188, 189, 191, 195, 202, 204, 210, 211, 214, 217, 233, 234, 239, 241, 242, 244, 245, 251, 260, 261, 262, 265, 271, 272, 273, 274, 275, 278, 280, 281, 285, 290, 293, 294, 295, 297, 298, 302, 309, 312, 317, 318, 323, 330, 336, 338, 341, 342, 345, 346, 347, 348, 354, 355, 364, 365, 367, 369, 371, 380, 381, 383, 385, 387, 389, 391, 392, 395, 396, 410, 412, 413, 414, 416, 419, 423, 424, 425, 426, 429, 430, 433, 438, 440, 445, 446, 448, 454, 456, 459, 460, 462, 463, 464, 469, 470, 471, 472, 474, 479, 481, 487, 489, 492, 505, 508, 510, 516, 518, 523, 525, 526, 527, 528, 533, 534, 535, 537, 538, 541, 543, 549, 551, 552, 557, 559, 564, 567, 568, 571, 572, 573, 574, 578, 581, 583, 584, 585, 587, 601, 602, 605, 606, 608, 610, 612, 614, 616, 617, 626, 628, 630, 632, 633, 642, 643, 649, 650, 651, 652, 655, 656, 659, 661, 667, 674, 679, 680, 685, 688, 695, 699, 700, 702, 703, 704, 707, 712, 716, 717, 719, 722, 723, 724, 725, 726, 732, 735, 736, 737, 746, 752, 753, 755, 756, 758, 763, 764, 780, 783, 786, 787, 793, 795, 802, 806, 808, 809, 813, 814, 816, 818, 819, 821, 822, 825, 827, 833, 834, 839, 840, 843, 844, 845, 851, 854, 855, 856, 859, 865, 868, 870, 874, 879, 881, 882, 883, 885, 887, 891, 893, 894, 898, 899, 902, 910, 913, 919, 927, 929, 932, 934, 936, 946, 950, 951, 953, 954, 956, 959, 964, 968, 969, 971, 976, 980, 986, 990};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int p = 3;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int p = 337;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 15, 19, 20, 22, 23, 29, 31, 33, 34, 44, 45, 46, 51, 53, 60, 61, 67, 68, 70, 71, 73, 80, 83, 87, 89, 90, 93, 99, 101, 106, 109, 114, 116, 118, 120, 124, 130, 132, 134, 139, 143, 151, 152, 154, 160, 161, 166, 171, 176, 177, 183, 185, 186, 194, 198, 203, 205, 207, 213, 217, 219, 221, 223, 228, 231, 236, 238, 244, 247, 248, 250, 254, 257, 264, 266, 267, 269, 270, 276, 277, 284, 286, 291, 292, 293, 303, 304, 306, 308, 314, 315, 317, 318, 322, 327};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int p = 991;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 11, 12, 22, 23, 28, 34, 41, 48, 54, 57, 63, 68, 73, 75, 83, 85, 88, 89, 92, 94, 96, 99, 108, 109, 120, 129, 131, 133, 135, 140, 146, 147, 148, 149, 156, 159, 164, 170, 174, 175, 176, 177, 178, 181, 182, 184, 185, 186, 191, 193, 194, 198, 201, 203, 206, 207, 220, 221, 224, 228, 230, 240, 252, 281, 286, 294, 300, 301, 307, 312, 319, 321, 323, 331, 350, 351, 357, 363, 365, 366, 369, 371, 381, 383, 384, 388, 390, 401, 409, 412, 413, 425, 426, 436, 437, 439, 440, 445, 448, 455, 456, 457, 460, 462, 463, 465, 466, 469, 474, 485, 486, 489, 491, 495, 497, 499, 504, 507, 513, 514, 515, 516, 519, 523, 524, 537, 539, 547, 550, 560, 570, 571, 572, 575, 592, 593, 597, 598, 600, 604, 606, 611, 612, 614, 617, 630, 631, 633, 636, 642, 653, 664, 665, 666, 669, 671, 674, 677, 678, 686, 694, 701, 703, 707, 708, 709, 712, 715, 717, 718, 723, 724, 727, 728, 731, 732, 735, 736, 741, 743, 746, 747, 750, 752, 755, 765, 772, 777, 779, 781, 787, 791, 802, 804, 819, 820, 822, 823, 826, 829, 830, 833, 836, 837, 846, 847, 852, 861, 863, 864, 868, 869, 870, 874, 887, 889, 891, 901, 911, 915, 922, 924, 929, 933, 938, 942, 946, 948, 955, 966, 970, 972, 975, 978, 981, 986, 987, 989};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int p = 19;
    Generators* pObj = new Generators();
    clock_t start = clock();
    vector<int> result = pObj->find(p);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 10, 13, 14, 15};
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=7218&pm=3043
********************************************************************************
// You will never see how this line looked after 4 challenges failed! 
#include <algorithm> 
#include <vector> 
using namespace std; 
 
typedef vector<int> vi; 
 
#define LS < 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
#line 3 "Generators.cc" 
 
bool isGen(int q, int p) { 
  int x = 1; int t = 0; 
  do { x *= q; x %= p; t++; 
    } 
  while(x != 1); 
  return t == p-1; 
  } 
 
class Generators { 
  public: 
  vector <int> find(int p) { 
    // !FDI 
    vi res; 
    FOR(q,2,p) if(isGen(q,p)) res.push_back(q); 
    return res; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
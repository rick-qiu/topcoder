/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8478
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

class StringsAndTabs {
public:
    vector<string> transformTab(vector<string> tab, vector<int> stringsA, vector<int> stringsB, int d);
};

vector<string> StringsAndTabs::transformTab(vector<string> tab, vector<int> stringsA, vector<int> stringsB, int d) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> tab = {"-----------------", "-------------0-1-", "---------0-2-----", "---0-2-3---------", "-3---------------", "-----------------"};
    vector<int> stringsA = {28, 23, 19, 14, 9, 4};
    vector<int> stringsB = {9};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-3-5-7-8-A-C-E-F-"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> tab = {"-4457754-20024422-4457754-20024200-"};
    vector<int> stringsA = {0};
    vector<int> stringsB = {28, 23, 19, 14, 9, 4};
    int d = 12;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-----------------------------------", "-----------------------------------", "----00---------------00------------", "-223--32-0--02200-223--32-0--020---", "----------33---------------33---33-", "-----------------------------------"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> tab = {"-----------------------------------", "-----------------------------------", "----00---------------00------------", "-223--32-0--02200-223--32-0--020---", "----------33---------------33---33-", "-----------------------------------"};
    vector<int> stringsA = {28, 23, 19, 14, 9, 4};
    vector<int> stringsB = {33, 28, 24, 31};
    int d = 12;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-----------------------------------", "-001--10-----00---001--10-----0----", "---------2002--22---------2002-200-", "----00---------------00------------"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> tab = {"-----0------2-2222--0-------0-", "----0------2---222---5-----55-", "---0------2-----22----9---999-", "--0------2-------2-----E-EEEE-", "-0------2---------------------", "0------2----------------------"};
    vector<int> stringsA = {28, 23, 19, 14, 9, 4};
    vector<int> stringsB = {33, 28, 28};
    int d = 12;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxx-27-xx-049-999x--7777-777x-", "xxx----xx-------5x---------Cx-", "xxx3---xx0-----99x--------CCx-"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> tab = {"---H-----T----Q-----------B-------U---------------", "------E---E---E-E---------Y--------------V--9----W", "-X-----H-ZM--Y---3-------H-------X-B-M-----9-V--O-", "----------8--------T----RT----------1-------U-W---", "---------T--S-----O---T--------------KQ------7-QG-", "------------7----O-------------L--8-U-------9----T", "-----------2---------T--------U--H--------Z----Z--", "6H----V-------HZ-----ZL-AH-W-MEO-8-------------FI5", "B--------V--V---Q-----H-A-M-----I---7--1--B-U--P--", "----O---O--S-V0---------------T---7--T------------", "N-E-----3H6-VA---------E--D-F----------PK-9--T-SA-", "-P---C-B-S---G---------L---7------4--U-N-------V-W", "-------5R---------H------T-0K-P-----R----5L-------", "------H----T-O----6I---------Q--F----0-L---------Y", "-XG---------R-LV--U--ERYX-WAS-HERE------K--Z------", "------2---------P--5-----X-----X---3--36-----A--7-", "-NE---------V----VE----KS-6---0------6-------Y----", "-A---A-----------U---H---K---------8--------------", "---R----O6----JE--------LA-WR-B-----------Z-R--5--", "-----R52----------L-----C--8--------E------PGV----", "--3---------I--8--4---W-------R-Z----------0------", "-M-R-----------------7--X---------------------4Y--", "--0-X----Z-----P---I--3---9--U---K---7--8------U--", "U--------TQ--A----YA-------------8----L-C------IT-", "6--N-N-----UXPD--D------5--U--------8----R-------N", "---------N---I---P-P----TO------3--E----X------V--", "----------------L-O-----Z-5T-----3-QPT-2-------1--", "Z------------C-L------D------Z--0------N----I-5--B", "---T-H---V8------38--H-----------6-------U------7E", "-A--1-Z-----7------D-------2---5-----------P--P---", "-----O--------V------T-FC1------0Y20---C---E---7-N", "2----S1--6----------6F-BJ-N----------A-------T----", "--B83PN-A---F---F-ELZ------P---------8---------XY1", "---R--------6-J---Q--X--I-D-5--9-4---C-2----E-----", "----Y-------4----7----S---6----Z-----K-J----9-----", "------------------SM25-9E--UQ--ZB------------W---B", "--8-G---Y-----I-Q-P--NP---Q--------U--F-----------", "-O--9L----------C---B--V--------------UN--X---Z---", "9----6-----------L----W---K--C-6-----L--6----6----", "DB----A-H1--M-H-------Q--G----Q5-------I-5-S--D---", "---------N-----------2---------R------------V-R---", "-2------2-Q----6-L-----Q25-----K-S----P5--0----G--", "-YG-R2Y----Y-------B--A-GA--6-----A------------S-5", "---0------------------8--B---O----------QM-----O--", "G7----6--EM----------------J-8---------R----------", "-------Q-LN------8------O--------L-0--------0-----", "-----J---0-----Z-----------Z---LJ------8-----R----", "--L-------N-X------N------4-R------S---------B----", "----------M--V---1------------YL--U---4---K--H-OVE", "--------Y-------C--5----I------------2--C---------"};
    vector<int> stringsA = {38, 6, -43, 16, 7, 28, 49, 24, 5, 41, 40, -18, 8, 46, -33, 40, 17, -43, -16, -4, 12, -48, -11, -24, 45, -44, -36, 0, 36, 29, 26, -28, 29, -49, -38, 26, 14, 7, 20, -12, -38, -6, 11, 30, -50, -7, 6, 11, -3, -11};
    vector<int> stringsB = {-42, 40, 2, 29, -32, -31, -43, 34, -3, 27, 25, -37, -41, 21, -8, -11, -14, -29, -49, -16, -21, 8, -14, 19, 47, -46, 48, -48, -45, -12, -18, 15, -34, 31, 29, -27, -23, 21, -37, 32, -10, -34, 38, -31, 39, -37, 9, 1, 21, 33};
    int d = 1;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-0----------0-----------------------------x----x--", "-61G-EG-4I5U9VI25959-G62661H-70A-3-5-247-Dx1-C3x8I", "5-----0-451---4-00-----263-3----------050-x1-04x4A", "------------------------------------------x----x--", "-0---0---------------------------0--------x----x--", "--------------------------0---------------x----x--", "------0---------------------0-------------x---0x--", "26----9-231-3------9--5254---201--3-2-0---x-20-x-5", "-3--0-220----2-2-21-----433----1-----0191-x----x--", "--1--0------------------111----10-10-1--0-x--1-x--", "-----1---00-------1------------21---------x--2-x--", "------------------------------------------x----x--", "-----------------2---1-------0-21---------x----x--", "------------------------------------------x----x--", "-5---3-2-1--30-7---3--3-83724-423--2-2-8-2x-2--x--", "---------1----0---0---2-3---------------0-x--0-x--", "------------------------0-----------------x----x--", "--------------0--------------------0------x-1--x--", "------------------------------------------x----x--", "--0------------------1-0------1--1--------x----x--", "---1-----11---------0----2-----------4----x----x--", "-0----------------30----1-----------3-----x-4--x-4", "---------0---1--0--1----0---------1-------x----x--", "-------1--1-----1---0--------1-0------1---x-0--x--", "5--J-8H-2L0TPOC--664-D----3A68OF1E2-70-JAKx-0C2x4M", "---------------------------------------0--x----x--", "G-7LILH-IK-SVPHCIB7HHV573Q6S8PWQEJL-BN-KDPx7-M7xGX", "------------------------------------------x----x--", "---------------------------------1--------x----x--", "-----------------0---0------------------0-x----x--", "-----------------0-0-0---------0-0---1-0--x----x0-", "2-1-2----02----0-13---0-3-123-30-0--3--0--x210-x-2", "------------------------------------------x----x--", "0--00-------5-----1--------------------0--x----x-0", "1---20------20------0-------0-----0---1---x----x01", "22----12--0--2-------2---2----------------x----x--", "---2-----2--------1------1-1---------3-1--x----x--", "----------0----0------1-------------------x----x--", "------------------------------------------x----x--", "-00---------4---0-0--0-----0--0-----------x----x--", "-10------1------------3-7-60---0-1-102--0-x-4-0x--", "1-----------1----------------------0---1--x10--x--", "-3-0--8----87-4--228-0203434----0--2-00--0x-0--x5C", "-----------------1------1-11-------0------x----x--", "-3--0CE-1--D6C3-2357-F60532G0-0A---5---0--x--C-x5C", "---------2-----------2----2----------1----x----x--", "---3-5-502--24----8---5-7--03-6--1--44---5x446-x-6", "10---0---5----30-------15-------0------6--x---1x--", "--2-230-3-0---010--2--20-13-----321--3-3--x1-2-x3-", "--0-0----4--4-0----2--4-2----0---0--------x----x-5"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> tab = {"501-0--3", "---0-12-"};
    vector<int> stringsA = {12, 0};
    vector<int> stringsB = {0};
    int d = 12;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"TOPCODER"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> tab = {"---H-----T----Q-----------B-------U---------------", "------E---E---E-E---------Y--------------V--9----W", "-X-----H-ZM--Y---3-------H-------X-B-M-----9-V--O-", "----------8--------T----RT----------1-------U-W---", "---------T--S-----O---T--------------KQ------7-QG-", "------------7----O-------------L--8-U-------9----T", "-----------2---------T--------U--H--------Z----Z--", "6H----V-------HZ-----ZL-AH-W-MEO-8-------------FI5", "B--------V--V---Q-----H-A-M-----I---7--1--B-U--P--", "----O---O--S-V0---------------T---7--T------------", "N-E-----3H6-VA---------E--D-F----------PK-9--T-SA-", "-P---C-B-S---G---------L---7------4--U-N-------V-W", "-------5R---------H------T-0K-P-----R----5L-------", "------H----T-O----6I---------Q--F----0-L---------Y", "-XG---------R-LV--U--ERYX-WAS-HERE------K--Z------", "------2---------P--5-----X-----X---3--36-----A--7-", "-NE---------V----VE----KS-6---0------6-------Y----", "-A---A-----------U---H---K---------8--------------", "---R----O6----JE--------LA-WR-B-----------Z-R--5--", "-----R52----------L-----C--8--------E------PGV----", "--3---------I--8--4---W-------R-Z----------0------", "-M-R-----------------7--X---------------------4Y--", "--0-X----Z-----P---I--3---9--U---K---7--8------U--", "U--------TQ--A----YA-------------8----L-C------IT-", "6--N-N-----UXPD--D------5--U--------8----R-------N", "---------N---I---P-P----TO------3--E----X------V--", "----------------L-O-----Z-5T-----3-QPT-2-------1--", "Z------------C-L------D------Z--0------N----I-5--B", "---T-H---V8------38--H-----------6-------U------7E", "-A--1-Z-----7------D-------2---5-----------P--P---", "-----O--------V------T-FC1------0Y20---C---E---7-N", "2----S1--6----------6F-BJ-N----------A-------T----", "--B83PN-A---F---F-ELZ------P---------8---------XY1", "---R--------6-J---Q--X--I-D-5--9-4---C-2----E-----", "----Y-------4----7----S---6----Z-----K-J----9-----", "------------------SM25-9E--UQ--ZB------------W---B", "--8-G---Y-----I-Q-P--NP---Q--------U--F-----------", "-O--9L----------C---B--V--------------UN--X---Z---", "9----6-----------L----W---K--C-6-----L--6----6----", "DB----A-H1--M-H-------Q--G----Q5-------I-5-S--D---", "---------N-----------2---------R------------V-R---", "-2------2-Q----6-L-----Q25-----K-S----P5--0----G--", "-YG-R2Y----Y-------B--A-GA--6-----A------------S-5", "---0------------------8--B---O----------QM-----O--", "G7----6--EM----------------J-8---------R----------", "-------Q-LN------8------O--------L-0--------0-----", "-----J---0-----Z-----------Z---LJ------8-----R----", "--L-------N-X------N------4-R------S---------B----", "----------M--V---1------------YL--U---4---K--H-OVE", "--------Y-------C--5----I------------2--C---------"};
    vector<int> stringsA = {38, 6, -43, 16, 7, 28, 49, 24, 5, 41, 40, -18, 8, 46, -33, 40, 17, -43, -16, -4, 12, -48, -11, -24, 45, -44, -36, 0, 36, 29, 26, -28, 29, -49, -38, 26, 14, 7, 20, -12, -38, -6, 11, 30, -50, -7, 6, 11, -3, -11};
    vector<int> stringsB = {38, 6, -43, 16, 7, 28, 49, 24, 5, 41, 40, -18, 8, 46, -33, 40, 17, -43, -16, -4, 12, -48, -11, -24, 45, -44, -36, 0, 36, 29, 26, -28, 29, -49, -38, 26, 14, 7, 20, -12, -38, -6, 11, 30, -50, -7, 6, 11, -3, -11};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-1--0---1--------11---100-2-0-1----1---0-------1-0", "---------------------------------------0----------", "--------------------------------------------------", "0---0-----3-------0--------0--------------10-----0", "--------------------------------------------------", "-----0------20------0-------0-----0-------------0-", "E-5JGJF-GI-QTNFAG95FFT351O4Q6NUOCHJ-9L-IBNZ5-K5ZEV", "-----1---00-------1-------------1-----------------", "--------00----0---------0--------------0------0-0-", "-0---9B-2-3A39003034-C3020-D---7-1-3-02------91D29", "------2------------2------0-----------------------", "--1------------------2-13------------0---------4--", "--------02--2-----2-----0--0-----1--2----------2--", "5--J-8H-2L0TPOC--664-D----3A68OF1E2-70-JAK3-0C2M4M", "-0---0--------3--2------2722-----0-3--------4-----", "-00---5----54-1-0-35----0101-------3------00----29", "-------2--3----32-0-1-4-0---0201----0-2---2-1--2--", "-0----------0----3---2-------1-32-----------------", "---------1---2--13-2-3--1-----0--02-----3------3--", "-0--0---0------2--------0-2----------0------------", "-----1-1-----0--------1-------------00---1-002-1--", "---------------------------------3-----1----------", "---------1------------1---------------------------", "---3-----33------51525---4-1---5-5---6-5--------5-", "-0-A-8A--C-O3PC--3-3-A0-00-B-1-4-------1-7---6-H2C", "------0---------------------0-----------------0---", "2--------0--2--------0----4--------4---2---21--1--", "10---01---2---3011-----304-4----0-----1-1--2-11---", "---1-----0--0--------121-1----2-1-0--11--1--1--3-1", "0---1-------6----------------------------------1--", "-------------------------------0-------------0----", "22-6--12-60--2-------2---5-----------7-5----------", "1-2-1-------6-----2----------32-------0---0----4-0", "--------------------------------------------------", "--------------------------------------------------", "--1--0------------------111----10-10-1--0----1----", "--1------02----0-1----0-1-1---00-0-----0--2-10---0", "-0-----------------0----0-------------------------", "--2-230-3-0---010--2--20-13-----321--3-3---1-2-13-", "---------1----0---0---------------------0----0----", "--------------------------2--------3-1------------", "-----0------0------0--0--01-1-1-0---------0----0--", "-------------------------------------------------0", "51202---564-6-2-1-14-1654--1-534-2--5-30----53-3-0", "--------------------------------------------------", "-------0-------------------0---0---0-0---0--0-----", "0--------0-----------------------------0----------", "---0------------------------0---------------0----0", "-2----11-----1-1-10----4222----0------020---------", "-10------3---2--------3-2--0---0-1-102--0---4-00--"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> tab = {"-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    vector<int> stringsA = {50};
    vector<int> stringsB = {-50};
    int d = 50;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> tab = {"-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    vector<int> stringsA = {-50};
    vector<int> stringsB = {50};
    int d = -50;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> tab = {"1", "B"};
    vector<int> stringsA = {10, 5};
    vector<int> stringsB = {7, 6};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "5"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> tab = {"1", "B"};
    vector<int> stringsA = {10, 5};
    vector<int> stringsB = {7, 7};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "9"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> tab = {"012345---------", "---------UVWXYZ"};
    vector<int> stringsA = {-2, 2};
    vector<int> stringsB = {0};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xx0123---WXYZxx"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> tab = {"0220----02--", "75--75----57", "------B9B9B9", "--242424----"};
    vector<int> stringsA = {33, 28, 24, 31};
    vector<int> stringsB = {33, 28, 28};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"222222222222", "------------", "555555555555"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> tab = {"5ZY4HSUDYKHTPFPN7Q30ROE94YXWQNBIBIX4ZJ7UBF2LXKL7TS", "NWAXL7ILPM4BE60A4E44E9EXYEUXLK9N0A0WYWZSO32JTAQUXH", "9BVUOA92TUHHWS6XTLLOA6HOZZ3MZSQYLGYA3N7XDBXF5HP2TC", "EY2YG80B6ZMNCHK3J92EVKE4O9OFC41IHJU2O8JZKPOJN9ITPA", "HKZO8TVKARWSCTDER1XFV3AZW0UUOW2H5Q1DO6YGQNAT2ZFS4R", "26N3O2AQBTPICCTUQ3DBT0SHZK8QFD509XR7Y1QPGYXX48TUHH", "WAS057EPP8DOA9B374J1DDUPDBL4QD8AZU61W7QNTJ91C8WTT0", "LAUAD4CQ11R2DQKNCF98IQTLAXAE8EV5UBEPHMQCUQ0ZPQZ1U5", "PEZ4KH6KHVEVZXVG7KTX709H9ZWYE2WGZ8LEEAJHJKWNDMWEVO", "B18MEMJ2YLJWAON4SFSIA5MB0NJ60XYM9VL2XVDW78QMF8TD7H", "4GAGQMVR3NLSIKKJ87E5C1MADBTCUVZGPKXWHJ1QO0XO1O7CJS", "OAVD0W6XU1XF1L8QPW9CTTF91T74CBT6KYUG15WBFZB7NOVER2", "UVPF35HE62DVIAVLPQH2CDO1E05CD9JF2EZPCQOB01WPBK2Y9S", "WNTZOSTALXYPLI3SCQBBW9SDRDFGOLH01JNLTSLE9TJ75GCLSR", "64JGVUIMNFOZHJINAVLOWINXV8UGU57RFA2FC4J8HNHKEU5YNH", "TWL0PKM6PR0S8VMRL3NZ85BLSF30R1H39142WKHU28Y6TRAOSV", "0BZ6TIPXSGFB1YCFQ2V1F5DS8B0EBLEKOGEQ1L49Y47X5GCHYI", "CSWMYNRFEL9VLAYUAYLLWO4QLIV2N040511G4K6A2Z50N4FHYX", "D0M92O2BF1QR0BVFLP88X529EYT2X6GPZD3XPXMC3KXF336F8K", "2ATA46S7VP7NAEXW1O4XD0HMVFSKA0VDERT7H3KHS5U6XD6K09", "RG3G9H6CS6AZXK8Y9YXG53ATO1LAJRISUMB7944QUPGCEH8SA1", "KW3WJIN2Q4B8XRMZIUJQASATQYUW51RAERU2OK6RS0M0J3ERG1", "QPGRW2L5AD4W4RYZB052IY2IKLYFRZ17R8M65W9IDWL96RI5T2", "9SDI946CJ5JLHWTV8YC4LT8DWMCUSCLOER7VXLVLPPGMVHCM9I", "9O3X1LW4Y3OMYIUVM86BF4AWYVW6O1MNDX9RIUZYX483086R0N", "0FNAK2ZM5MUGRG7KSERHVER0ZKFIMG47YOEX46LLFAHO0VC7GN", "EV58JBW14LY9J11U0NYXWETXXZ1TMKK6P2THUI0DU35VVZ9NIQ", "U66JEKZQDW7A668029IBZPU95YUMIXZWZADVTZQIL8AK08D8Y7", "A7T4EKCTWEK0J8V8O5N1JL98CCJFUDBKIITNW670SNZPNU41SR", "CU4XDP4DR0YDEFBP1X052SQU6Z6TFT00C8VKXZYRCE6BBX42NF", "0O05M9ISGNW7C0IWN4CONGRATULATIONSQ721635X7EGXJCDX0", "GBDQGFVXUGZ6KU5LD06NPGALJNL1COKJJEAZZ6C55TT9EIUS3F", "XQNPITL522704NAMM1VR9ZFOR7GYSFINDINGM0L5SBP3UZD24H", "G1TBZGUR0AFEE1AFNGHKVOIA65DFBBSPPPTE2HT3Z2V5899OCP", "3Y3L88TWHNAPYASARMCTO6DSDKHYHJUCOE812I7DEB0AJ9J1VG", "ZVZG2Z47U7OV8DDDR05AS69W2THEB53DPO7X99XMZ5P00FPHE1", "C6KVL8O0RXGB0J4CV9JZJD07TUGFCCN134NCMCL0VYP2K0XQR0", "CGMT0EQ5HO7K0NN218PWJSP1GS76NMLUWWQ8TUA6NF17BWJ7TN", "D5G5LP3M9SECRETTO0HETNAVQ0BOBE8E3HPUN9FAB2EBFGH0IF", "9UETLPZF52JH2HPYICSMESSAGETZ147NX7H1X9YR1AORBR9QCA", "OI6JH606J6GFDQGDQXZ26IJXDCQ5E3J9PU40PUOCX32LOUCJA7", "9COZ3V3K5YTS7L9F074D9CC873GU76SH3DI6WRLJQZPTZPJ5LB", "3JWUNNV95MQ6OHREBFFUN52VIDVUFDHOSAM72656G9TEZMBUGQ", "CZLZPBDUVJAPR3IRORMWQBW9BAZJ87VGRJ4FY78F7HBIPCQILP", "PTENYPU7RIQ523CABUVIUGUBF8D2IB4IA11BH1OHO695L0UFMH", "61GYXMC8H6HB492VFN1YMBSB9BEKFMMU4NOZWX4WQ0ZSEVR936", "22G6ELTEGT1KIZDTLKNPN6WJ94IKSZJCHM6530FFSL1PM6XIJ1", "A6N9BRYDGBMN9FTAZ5HS1LVIMXVH3V3RCVE8QDMPG0FUYGQB5E", "JPC96Q2IKR5RKS6PZD6PAFPKL0T953INE8BAHKRJP7LN2XKBZ3", "3A16PRGH0MTWZ0CN4XYVEYRJKFMV2ALUHXZ424BQXJ6O06OFLY"};
    vector<int> stringsA = {-25, -32, 23, -38, -13, 48, -45, 12, -33, 42, -11, -3, -4, -47, -19, -35, -11, 8, -21, -5, 44, 49, -5, 22, 25, 12, 22, 23, 30, -12, 47, -8, -42, -47, 27, -25, -16, -49, 28, 32, 19, -14, 28, -11, -12, -29, -24, 13, 27, 25};
    vector<int> stringsB = {-25, -32, 23, -38, -13, 48, -45, 12, -33, 42, -11, -3, -4, -47, -19, -35, -11, 8, -21, -5, 44, 49, -5, 22, 25, 12, 22, 23, 30, -12, 47, -8, -42, -47, 27, -25, -16, -49, 28, 32, 19, -14, 28, -11, -12, -29, -24, 13, 27, 25};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GFHGEIBCHHDK8FDJBDDFI79DBCJHHBDDEE8HIAFKHCLFEEJGIA", "JGJKKJFEMKGPBKJKEECHMEEGHELMICEHIHEDJGENIEIIHGJLLC", "9DCBDCIBDBHDGFEFHHGDHDGJJJLMBCJJJGCCGEDFJB8JEGD8JH", "IGKIGJHHIIAHCHBIE9CEKFEKHHEFJBFJGGJCKFJMMBF9IKIJMF", "9IIICGIEIIHJBGDHC9CDHAFCDDFEHB9GDCFFIBHGHCDECIEEHC", "LNCGLGJQRMPQTINVMUMNMFQPSTKQFNSMQSR7RLIQTLNGKDNSHB", "MHQGMFMGDKDNCJDDHDHIIFLBLBDDMDHNJLLCPFOCRGH5CGGMPK", "BFFAEDCDDCIGDBHIAFHEEHIJGFECAEE5DCECEFHCFDDGDHGCDE", "KEJGKIFDLJEI8EFGECBIIEEHDDJMJ7EGGGFCJEFMJDHEIGJHKB", "8IAGBEHEKDEFIDJOKEIHF9HHHGJGGEGFGOHBKBDHG8JEFHAGGC", "CILMGLOHMJKPBKCJGFEGNAJIEKJIHJIGKGIJJFIGLFKFHMGIJF", "OPSPRJQQPNUUJPUQOPNOLTNLPTQKMNNEKPROOQPIQPOOOPQMRK", "OOSQQKOROLQMIQRRMPOOMUMLNRRKKNKDKHRPMQPJJPPKOPQJRL", "GCKB7CGA7ACE9BA596BBFEKAECD6LDACFJF6Q9L4EDB58AC7CJ", "CJLKEKI9GHIJCJHKFCFHLCGGDFJIJECKFDBJLFJGGDIIEEHDHG", "KEIHGJGFJHCH9F9GFABIJEGHFFKGL8DGEGH9JGHJL9IAHHKHMC", "FILMJMPIOJLPDKGOHNEGOBMNLLMJKJNGMHJJLJJGNHMFIMKLLG", "DGIEH9FHECMJEFKJEIDDHLDEIIG9CEG3EFIDFIEAFEEEFEGCGG", "DJMIDLDBFIKJBHIJCEBIMBIGEHKIIEDEEEAKLFIIIEJHFEJFGI", "HNRQKINOMIMLCNFMKNIKKEHJIKNFGLKDJEOKHIKHINIIHLMKGJ", "9HAGCDHFJCGDGGLYNDHGEFGFOLHHGHIFJTG9LBBQK9LFEGFGID", "MWMWNINQRSUUXRSZPUSQSSRTYYUWRQRNQWU9XOPRVXWWVHSTVG", "IOTQNJORMJOMHNOSKOOOMLJMKLRKHMLDJFROLNPIIQLKJQNKNJ", "9C89BBA877FCC7BF8BC9HBGDIIH9B8HHJE9B7CCCH96H7EC6ID", "9CEDGIMDCJHFMHHLMIIHIDFMLKKKGGINJGDCJGDFJC8IIIEDJH", "EFGCFEGDEDKIHDHKCGIGIHIKHGFEFEE7JJFFFGIIHFFODJJDGF", "9DDBDBDCBCHCHFDGHDHCICHGKJHEBCJIKGCB8EDDJA7I9GC8KD", "AEDDEHJEEKIGIFJJMJIIKEHLMLLMGDKNLGDEKHEFLBAKKHG8LI", "GNHNLNSKTNOOTLRQOLTQMLNRPRRQKKNPQSPLNJNQSHRNNQIPRI", "9HLMDJHEHHHIBICGC8CDKAEDEEGDGBBGCBFGICGGKCIDDKDFHF", "6FCELEICPGEJEHIVNBLDCDHISLIKGIOHIQG7QBDQR7LGGDGPIC", "IPTQMLQONKNNDOHOMQJHMGKLKMPIJJMGLHPLKKMGKLKGHLNLJF", "KIOLJHLFGJALFGAKGBEHGJIMJDGBNBIMHKJ9NINKODJ3HKHMNI", "NEPCNGKAFACICIDCC6HJHFNDFDFCLDHFIMGBRHMALGH59GHLLL", "DKFFHNNHENMGPIPPNHIPMKHPLJMOGFINKINHLIGGMBFKJMIDJG", "GLOKFMCDHKHL9GELBGDIK9AGIEJIIDDDFGDLMEGLLEMIFFLGKG", "AGILDHIBIEGHAGFHDAEFJAEEDFHHHCBIEC9GJCHEEDFFDHFEHE", "C3D40BB52977035218D5GBK18776DDC23FA547A5B4157BB7B4", "DMINLNSJJMNLRJRPOLQRNKORQJSOGGJONLPLOJLNOFSLOMJHOJ", "FMIQLLQJRMMMRMPPMKRQMJMPQPRPMJPNPQPKNHMRQHSNLPHQQI", "BEABDCCA89GED9DGADEAIEJFGDFBDBJ9JGAAAFEEHB9J9EC9CB", "9HIJDHHEICGICHDGB9DEH9DDCEFFHA9HCC9FICHHEBEFCGEEID", "FOJOMOTLOPQORLRSPNSSNKORQSSQLILRNLQNOKMOOGSMPOJOQK", "JLMQNMRLQJPPDMIOORHHOFNOMOOJKLNHOJKNMLNINLNIJNOMLI", "CIMNGJKFLIHOBJCHEDEEKBGIEGKFHHFGEFGIIEHHMEKDGMEIJF", "IELHILCDKJGMBJHLFGGGMBDFEBLKIEFHGHBAJEFKHGNGHHLJKD", "GLOKELDDHKNMEGJMDGDINEDIHDMKKGDFGGCKMHHLKELIIGKGJK", "FGFHIGGDDEMIGFIJCGIGKJMKJIGHIFNFNKEFEGKIKGEOFIICGH", "EMHLKNRIHNNKPISPPIQRMKOQLJQPHGJNLLOIOJLJPFLMKNJHMI", "BIFFHLMHDMHFOIQNNJJMLHGMMKMNHHKNLJOEJIIGMDDJIJGDLI"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> tab = {"---------------0-0-1-3-3-1-0---------0-0-------", "-----------------------------3-1-1-3------33---", "0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0---0-0", "-2---2---3---3---2---2---0---0---2---2---0---0-", "---3---3---3---3---3---2---2---0---0-----------", "---------------------------------------3---3---"};
    vector<int> stringsA = {28, 23, 19, 14, 9, 4};
    vector<int> stringsB = {40, 40, 33, 33, 26, 26, 19, 19};
    int d = 14;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-----------------------------------------------", "---------------2-2-3-5-5-3-2-0-----0-2-2--00---", "-----------------------------------------------", "0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-05050-0-0-0---0-0", "-----------------------------------------------", "-4-0-4-0-5-0-5-0-4-0-4---2---2---4---4---2---2-", "-----------------------------------------------", "-----------------------6---6---4---4---2---2---"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> tab = {"HA-----J-E--G8--C-FC8-----4-2A", "FJF1--------7---C-6-1F0---60C5", "-E2----4--4-35-57-F-J-99-3G176", "-378--------3--5G-65-D3---B-7-", "8J-0-----0------3-D3--3-5H0-I-", "-9-----B----3-2-H02-811-F-J186", "9D-8--------B--44-GD3---4---0-", "-B-E---------67-4D7-58FE--B4B-", "-9----------8G8-J-IA5-5-H-JG3-", "-8DJ---A-1--3---7-DI-5G58C5-73", "-E0------F--I2F-1-3-8-0C--J-AI", "2-------3-7-A9----F--41--05ID9", "1C----------G---A-D-I1E--15-1-", "D--C-----A08BD--2-2H----6-3C3-", "17GB----D5--3---H-9-A-2B-24G77", "4FD------E3-C---4-E-87---G1F54", "895----3--4--I--3-8AGG09--6G2-", "4I-------F--4---0-9-A3G--3E-1-", "-F------2---F---C-7-7IFHGIBA9B", "-0-----7----E---8-B--C5---J-4-", "3CE9---F--------JCA-E-B-20E205", "-F----A353F-3-9-D-650-HC--A-E5", "60------A---B---F-F-38-4-2DE0G", "7B4------A-13--B3-3-0-0-A6H-C-", "-2-F---4GG--7-9JB-48C52-J11AI-", "-F-3-------JI---H-0---6-B-GJ7-", "-I-C------6--2--6-8-8A8--5J-6C", "-FI-G----6--H--4B-8-3---7-E-1-", "-0-F-----6--H---3-5-CD--EEI3I-", "074---E---------7-H0GBG900E6C-", "-EG------F------3-3-60E-9-IDH-", "D-H----2----4---A-J-55-6--56E-", "-G----------FF--3-C2A1D---6--H", "HA21----HF--6---0-7-D-J-H-6AD-", "0BH8------B-9--0G-99C-A-3-F-B-", "84----------1-----H-D64---6-C3", "I3-0-----C9--J--J-I-8DJ--7C9E-"};
    vector<int> stringsA = {-3, 7, -8, -2, 6, 5, -7, 1, 5, 0, 6, -4, 6, -11, -11, 4, 10, -10, -3, -10, 6, 6, -11, 4, -3, -1, 1, -6, 8, 2, 1, -4, 2, -4, 6, -3, -2};
    vector<int> stringsB = {35, 17, 12, 36, 9};
    int d = 37;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxx--Ixxxx7xxxxxGxxxxxxxxxxxx", "xxxx---xxxxHxxxxxPxxxxxxxxxxxx", "xxxx---xxxx-xxxxx-xxxxxxxxxxxx", "xxxxB-HxxxxJxxxxxJxxxxxxxxxxxx", "xxxx---xxxx-xxxxx-xxxxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> tab = {"-O---G1--6---U--V-----2G-4-3--CNP5--O--", "E-H--VQ----S-L--A-----1H-B-P--K-Q---HK-", "JLF--L0KD--R---5S------5-CC4O-B-4----8-", "--0--T9-EO9--3--7----HU-M76B--NRT--H-M-", "-CT-6RMT-G-G-O--T-------PQ----A-M---P--", "8-A--SA1-5-971--0-U-8O6B-D2O--DVJ1--K--", "U-9--GO6C7-QLEL-N-J---K--D9---9K5---N--", "-JG--QI-GG-C-F--9-----O--J4T---TU---C--", "QO7-4A2-I--G----7-H--M---7EG---F5V--2H-", "G-4--Q7AJ73--D-IR----53J-2-2S-C11---O--", "--6--GAPDM-G-U--H---FIU--T64-8PNGK---I-", "1-4--DK--8--E--M--7--CI--K7---Q-25-----", "-7P--CHQ-E---T--0A----C--5-5--R29---F--", "--F--EL7---8-L--S------O-8-F--NO9--V2-E", "4----F0-9O-7----4-4----1474---K28---2--"};
    vector<int> stringsA = {9, -44, -4, -20, 3, -5, 8, 8, -6, -44, -20, -31, -7, 24, 25};
    vector<int> stringsB = {7, 28, 4, 30, -12, 45, 49, 40, -10, -15, -4, -5, 13, -1, -20, 18, 31, -27, 18, -10, -13, 24, 19, -21, 36, 30, -27, 8, 3, -6, -24, 40, 34, 19};
    int d = -50;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx0", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx0xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-", "xxx-xxxxxxxxxx-xxxx-xxxxxxxxxxxxxx-xxx-"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> tab = {"HC3C-F3C-C---98E-5H-D7---AC6B53DGE--H-C1-G--87", "DB-D58--AH-7-E---AA-B---7292D--G-----H------F-", "E3D-0--E-8--------8--1---6A56C-DC-----6F----4-", "3--8612--7-1-3---GD--C-G9527-GF--7-6-32---E-9-", "96--3-GA19---1-3--G-840-8207---9AB----1---D-A1", "72-C4-F------F-C9-6----5EF2GD--G9----D-D--F-7-", "HC---1-1-E---8-0BAH--H-60-3EBB-G7--E--81----6-", "198-3203EG---F-H--E-2--8EG-A06-72-----A342--2A", "D169770-B6-H-5-3B7A--H-8633GE8E3C6F3--3-----57", "7G-97-D21D---67--7D-0H-G-B--BE--A-----A--H3-6D", "GCF-8B--3--8---A4A---F-8E8--23-67-GE--A--60-2-", "2C-7503F7F---2B--87--0-C2GB147-37-----2-3H7-1-", "HH-1--B86--H-08--76----G-D6-F--0---A--8--BC-A-", "AA-H-----H-D-C-F-4C---9F-7-10DBH-----107--3---", "B8-G8H---H-9-G2---A---6639CAD--9H---9----6D--1", "76-7--B--A-0-3--F---C--DC7999--G1A-3-B53----A2", "B6-0G3-F-E---6---48-F-BHD245E--E------32--5-CE", "CB-CGD29---H-G-E--8-1---E9238--2A-B7-2H-E-D--A", "0A--2-H-GD-6-6-8-D-----9271-H---E--H--------G4"};
    vector<int> stringsA = {-1, -5, 3, 0, 8, 12, -11, 11, 2, -12, -3, 1, 14, 1, -10, 3, 12, -9, 9};
    vector<int> stringsB = {21, 22, 22, 22, 21, 22, 22, 21, 21, 22, 22, 22, 21, 21, 21, 21, 22, 22, 22, 21, 22, 22, 22, 21, 21, 21, 21, 21, 22, 21, 22, 22, 22, 22};
    int d = 22;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx1---xxx-x0-x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx3---xxx-x1-x-xxxxxx0--xx--x-xxx-xx-xx", "xx-xxxxxx7---xxx-x5-x-xxxxxx1--xx--x-xxx-xx-xx", "xx-xxxxxx7---xxx-x6-x-xxxxxx3--xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx8---xxx-x8-x-xxxxxx5--xx--x-xxx-xx-xx", "xx-xxxxxxB---xxx-xB-x-xxxxxx80-xx--x-xxx-xx-xx", "xx-xxxxxxB-1-xxx-xC-x1xxxxxx90-xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxxC-2-xxx-xD-x4xxxxxxA2-xx--x-xxx-xx-xx", "xx-xxxxxxD-3-xxx-xD-x5xxxxxxB4-xx--x-xxx-xx-xx", "xx-xxxxxxG-5-xxx-xG-x6xxxxxxC8-xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx---xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx0--xx--x-xxx-xx-xx", "xx-xxxxxx----xxx-x--x-xxxxxx0--xx--x-xxx-xx-xx", "xx2xxxxxxH-8-xxx0xI-x6xxxxxxGA-xx7-x-xxx-xx-xx", "xx-xxxxxx--0-xxx-x0-x-xxxxxx0--xx--x0xxx-xx-xx", "xx8xxxxxxI-E-xxx1xK-xCxxxxxxPE2xx8-x-xxx-xx-xx", "xxCxxxxxxM-F-xxxDxK-xCxxxxxxQFCxxD2x-xxx4xx-xx", "xxGxxxxxxQ-J-xxxIxO-xCxxxxxxQGFxxDDx-xxx5xx-xx", "xxJxxxxxxR-V-xxxLxP-xJxxxxxxTHGxxJHxGxxxFxx-xx"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> tab = {"46-6-5-2-2-5415-4------1--1---3---254--04--454--2-", "-64---00-0--226---0-2-215--5--1--2165---5--113-1-0", "41-0--4-64-31-4-----4--6--65--0-----35-61-4-3204--", "024------1--050---4----05-4-3-1---611-2-2-2-34----", "14-1--3--1--------4----11-6-0-1---6---------136--1", "-4-3-----5-32-4----1---5--56--5---5-261-4---25---0", "------0--6--542---63---1--2---0-6-3-0-5-0-0-244---", "--0---2--2-5304--350---2--40--1--45---1-54--353-34", "14----0--3-12-4-----5--2---1--1---1-------1050----", "-21--1---4-52-4-----------3---6---2-3-----2--0-4-5", "442---6--3-13-6-3-5---0-1-0---0-5-415-5-0---100--3", "22-2-21----01-4---2----0--113-5-4-321---5---64----", "-4----1--0-3425-6-4-3---3-32--3---4-2-1--2--03----"};
    vector<int> stringsA = {40, 44, 35, 46, 42, 32, 45, 36, 36, 32, 44, 34, 42};
    vector<int> stringsB = {-12, -18, -16, -11, -18, -18, -8, -5};
    int d = -17;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxU--x--x-xxxx-x-xxx--xx-xxx-x-x-xxx-x-x-x-xxx--x", "xxx---x--x-xxxx-x-xxx--xx-xxx-x-x-xxx-x-x-x-xxx--x", "xxxY--x--x-xxxx-x-xxx--xx-xxx-x-x-xxx-x-x-x-xxx--x", "xxxU-Rx--x-xxxx-x-xxx--xx-xxx-x-x-xxx-x-x-xUxxxU-x", "xxx---x--x-xxxx-x-xxx--xx-xxx-x-x-xxx-x-x-x-xxx--x", "xxx---x--x-xxxx-x-xxx--xx-xxx-x-x-xxx-x-x-x-xxx--x", "xxxY-RxX-x-xxxx-x-xxx-Zxx-xxx-x-xVxxxTxVxVxZxxxUUx", "xxxY-XxWTx-xxxx-xRxxx-Yxx-xxx-x-xYxxxSxTxWxXxxxXUx"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> tab = {"-8--", "CX--", "V--O", "2C--", "-A--", "C2--", "I2CK", "3T2-", "-PX-", "PO--", "I-9-", "--U-", "03--", "-R--", "8X--", "CT-W", "-XC-", "5-1F", "HP-X", "NM--", "GF--", "BG--", "--G-", "-4P-", "JIA-", "90--", "VE--", "I-6-", "41--", "-TP-"};
    vector<int> stringsA = {50, 40, 42, 50, 45, 37, 39, 48, 36, 45, 49, 49, 37, 37, 50, 45, 36, 34, 39, 40, 44, 46, 33, 37, 50, 50, 42, 34, 37, 41};
    vector<int> stringsB = {-5, -8, -10, -7, -16, -8, -6, -10, -12, -9, -17, -16, -13, -8, -11, -6, -13, -7};
    int d = -25;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx", "xxxx"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> tab = {"--012--31031--------2-1---0-2--20-2-0-2330-3-", "022000-1-3--0-2--1--21----1102-110-2-11--1-02", "-0223---30---3--02--00-3023-01-1-0-2--031310-", "113-0--2-----------3--1-1------1------22-000-", "21--0-1--1--00------131---01---133-1--21-0-23", "310220---0---1--3-----0---1-121--3----11--20-", "31-213-02--33---13---12-0-2---12-3-3--23-1033", "331020--0----0--30--002-30-00--1021---2232-0-", "3-313----3--011-301-1-302----1-1-----01--03--", "10032--------3----1-130-0-1----3-001-2-0-212-", "02--1--2-----0---0---11-3-0-1----0--3311-3-13", "1-0113---2---0------322-3--0-0-2-1--0-01--30-", "013-3---3--333--2---320---2-0--0---1--1120--1", "0-0-00--0-00----0---200---03111213---20--0300", "21-30--12---2------0303---3---23-32---23---13", "2-332-3-1-3-21------323---3-1-----23--30---3-", "-31231-12----3------3031--032--3---1--12-223-", "12-00------------0--32--3-0-20-1-3----2----0-", "12333-2-01---0------030--3-22----1-03-1--2-2-", "-32-30--12----------001--1203201---32-2--21--", "1-0-2--21-1-----2---3323202-22--------2----2-", "3-33-0--12------2-0--02-3-2-3--2-1-0--22-3020", "120232----3131--1--3133-2-3-0--1-------1-0-0-", "2-0230332-------20--01101-3-1---302---32-0-31", "1-2-02---2--1----2--231--------0-0-2--33-0-20", "002-0----00100-----2030-30--2---21-3--22---20", "--2112---1--20------200-----20-0--10--03-1-1-", "23022-0------1--1---01-----11213-0-3---0-1233", "0-301--2--11------3-232---02----20-0--3--2-20", "011-1111-2------3---302---2-0-333--20-03-0122", "20101--3-11-----3---02---2-230-3-321--2010---", "310233--0--2-----2---13--23-0--011-0-01301---", "13113---12--0---1--0123--01023-3-----232-0-31", "0-1-3--0---2--2-----000---2-2-1--0--0122-1-31", "30132-0-20--2----3--232---3-2-0-------30-001-", "0-111---22--------1-00--120----------00---0--", "00003--120-20-3----2-33-1-1-10-0---22-12-3-23"};
    vector<int> stringsA = {18, -3, 9, 5, -9, 17, 3, -7, 10, 18, 4, 14, -2, -7, -4, -7, 20, 5, 10, 18, 15, 20, -4, 7, 11, 8, -8, 12, 5, 6, 12, -9, 12, 0, -1, 7, -4};
    vector<int> stringsB = {-44, -9, -9, -38, -14, -37, -31, -39, -43, -23, -35, -22, -38, -40, -20, -28, -40};
    int d = -8;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxxx---xx------x---xxx-x-x-xx-x-x-x--xx-xxxT", "xxxxxLDMxxHADM3-xCKBxxxJxGxJxxJxBxJxJFxxExxxG", "xxxxxMDMxxMKDOC-xELDxxxMxKxOxxJxJxLxLLxxMxxxL", "xxxxxO-Sxx--PR--x---xxx-x-xMxx-x-x-x--xx-xxxT", "xxxxxOGNxxJCGO5-xGHExxxIxKxKxxJxGxKxKGxxGxxxJ", "xxxxxR-Wxx-MQX--xM--xxx-xMxPxx-xLx-x--xx-xxxY", "xxxxxU-UxxGKMX--xP--xxx-xVxUxxLxHxGxLIxx-xxxU", "xxxxxP-Sxx--PP--x---xxx-x-x-xx-x-x-x--xx-xxxU", "xxxxx---xx---Q--x---xxx-x-x-xx-x-x-x--xx-xxxT", "xxxxxSBMxxEGGR--xK-Bxxx-xQxRxxGxDxAxLGxx6xxxN", "xxxxxX-Xxx-KPZ--xP--xxx-xKxPxxLxKx-x-Ixx-xxxX", "xxxxxVDOxxKGKR--xKMCxxxLxQxRxxIxLxCxLLxxAxxxM", "xxxxxR-Uxx--QV--xN--xxx-x-xNxx-x-x-x--xx-xxxV", "xxxxxP--xx---O--x---xxx-x-x-xx-x-x-x--xx-xxxV", "xxxxxTJRxxKIKQB-xJKBxxxMxPxQxxLxLxLxPJxxCxxxN", "xxxxxRCRxxGILV--xO--xxx-xTxWxxJxExExKIxx-xxxS", "xxxxxP-Txx--NP--x---xxx-x-x-xx-x-x-x--xx-xxxV"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> tab = {"39---", "-----", "1---5", "--3--", "81---", "6---6", "6---1", "4----", "946-3", "-07--", "1---2", "1----", "2-9-7", "----9", "4----", "2-9-7", "-5---", "55--3", "-----"};
    vector<int> stringsA = {7, 26, 23, 17, 17, 22, 22, 22, 13, 15, 10, 11, 19, 12, 8, 17, 29, 23, 25};
    vector<int> stringsB = {-20, 14, 20, 20, 10, -18, -4, -22, 15, 11, 18, -22, -22, 22, 7, 0, -5, 1, -5, 20, -5, 4, -12, 15, -2, 20, 25, -2, -7, 3, 3, -20, 19, 3, 16, -22, -14, -11};
    int d = -6;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-----", "--0--", "-----", "0---0", "-1--0", "-----", "-----", "-----", "-----", "212--", "0---0", "-----", "-----", "000-0", "-3---", "-----", "-----", "-----", "-----", "2---0", "-----", "25--2", "-----", "0---0", "-----", "2-0-2", "-3---", "-----", "-----", "1----", "2----", "-----", "0----", "3----", "0-0-1", "-----", "-----", "-----"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> tab = {"-G9--AGJ-9--2LE-2--E3-43B-A-------", "-2--CE-M2----G--F78GEE-D063E-----K", "-3I-6K------E5--8A-5G--GLI2-------", "D----7---1---2--EL-5-A-6J-FB--08--", "-B-7-7-B-4---C1-4HMM--5AI-B---8---", "-J3-A5FA6E--L1--0B-----AL-G3-F----", "-KC--4--9---8J--5-DL---5B-7-------", "4-----0------5D-7D-D---D3AK7-LL---", "-1----2G2-I--H-H4-C-DI-GE-F2-----A", "-K-1-K--LD--I5D-H3-A9--J8DM---L---", "-B3-6K--H----8F565-B5---5-----D---", "-B7-E-1-----H3HM8J-AHG--B--9------", "--4-22-A-63-43M-3G-B6C-CI-J-------", "-6---7-18---21M-5H-BF---8--A------", "----L3-98--IB72--M-JD--KI--------D", "3D-I-----0--9FL9F-------5-B--0-6--", "----BK2FL8---5-L0EF0DE-B4-27------", "-I------92---K--BL-FK2-K7FC9-8J8--", "-H---0-0K---9M4--HI9-G-1L---------", "-----J-A6---3K--9K-E7--CJEG-------", "KM-E-B---17-E0--3--CIC-F5MDK--CI--", "-2F-6--FA----8K-7-27---B2GC-------", "-BG--M71D---22-55E-GHD-2278-------", "--C--C--I-0--K3-F-I2---85--G------", "-H----9LLB---9H-GMAGA--LAAM1--7---", "-C---C--JE-A-7--80-JM--K8---------", "-2--9-----5-LC7-FE-64--L0BF6---0--", "-6H----M7-17-EL-7--4I-M-4F87------", "MH---3-J1K---4--1K-EH--31D-L3-----", "-0---D6-C-7--4--E7--HE-H3-HI-DD---", "-A--4--ML-4-3MF-D3-5K--L6AC---8--E", "84--AA-B-GA--E--9G-J7--48------6--", "B----1--4----E--5--C1---H--K---0--", "--H-G41-70---A-C22GACA-9BKA-------"};
    vector<int> stringsA = {-31, 2, -9, -43, -13, -7, -22, -11, -40, -40, 4, 6, -25, -38, -23, -42, 10, -36, -12, -41, -4, -6, -42, 6, -23, -28, -14, -31, -8, 10, -24, -32, 11, 5};
    vector<int> stringsB = {-16, -21, -21, -18, -20, -15, -18, -16, -13, -18, -13, -22, -13, -21, -15, -19, -18};
    int d = 22;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x", "xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x", "xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x", "xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x", "xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x", "xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x", "xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x", "xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x", "xxxxxxxxxxxBxxxxxxxxxx8xxxxx-xxx-x", "xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x", "xxxxxxxxxxxHxxxxxxxxxxQxxxxx-xxx-x", "xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x", "xxxxxxxxxxxUxxxxxxxxxxRxxxxxUxxx-x", "xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x", "xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x", "xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x", "xxxxxxxxxxx-xxxxxxxxxx-xxxxx-xxx-x"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> tab = {"511230---5----14113-5--4--", "113543---5---23--24-50---5", "45122--4-01--430-15----30-", "042-15-0-0----5-114-4335--", "4302-33--2---24-242-23-1-0", "3401----4224--12-21-5--5--", "45553-----5--2533-3-0--5--", "2-45----145-2-03--2-3021--", "15--3----1---543--2235---1", "102------0---350-44303----", "411--5---14--31-0-4-------", "15111-5--2---230252-2-0--4", "534-3----5---250021--524--", "004-0---1-----15424-0--4--", "24-------53--553--24-4-4--", "012-1-4--3-2--3--45--3-0--", "01020----2----04031-55-0--", "554-334--02--30-053---51--", "25-53-5--5--254-352-3345--", "35523---15--1-3-215015-4-3"};
    vector<int> stringsA = {-12, 11, -23, -31, -22, -10, -37, -3, -26, -18, -22, -21, -19, -34, 1, -36, -8, 3, -19, -26};
    vector<int> stringsB = {-31, 13, 6, -13, -31, -3, 13, 5, 6, -6, -1, -4, -3, -31, 12, -26, 5, -30, 9, -16, -9, 9, 4, -12, 4, -4, -18, -31, 12, 9, -4, -6, -25, 15, 3, -28, -30, -19, -17, -10, -1, -18, -7};
    int d = 8;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--------------------------", "-0-----------1------------", "--------------------------", "33010----1---2102-3-1000--", "--------------------------", "--0-----------------------", "332-11---10--11--310-0-0--", "---------------------0----", "1-------0---1--2--1-2-10--", "---------0----0--0--------", "22-00----2----01--0----1--", "--------------------------", "3011-----3----0-002-------", "--------------------------", "--------------------------", "104-0----1-0--10423-01-2--", "--------------0-----00----", "--------------------------", "--------------------------", "55331----32--531425013-212", "011-101-----00--110-110--0", "---------0----------------", "--------------------------", "22000111-1---121122-11-0--", "---------------0----------", "--------------------------", "15-------1----0---2-------", "--------------------------", "----------0----0-------0--", "2-01-----21---2-2-2-------", "-----0--------------------", "00-0--0--0---01--00--0-0--", "21413-12021---14333--553--", "5579870--9---67--68-941--9", "-----------------0--0--0--", "214-2--------13-242----0--", "2-4-3---------------1-----", "-0----------------0-0-----", "54312---04--0532305-0----2", "12--2----00---00-10-0-----", "23131---3313--11112-2--1--", "354--0---3---53-2-50---0-1", "--0----------00----0-000--"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> tab = {"3-003131----023-001-1-1--1---33-2-2-30-223", "-31-0-132-3-200-03-0--0-00--32-2--2----0--", "3211--3-0-0-203-20-2-00-1----1-0--3-03-1--", "0-0-3-00-----0010-----1-21--03-11--231-33-", "2300----1-1-2-021-01-30-03---0-2---2-1-3-3", "0232-3--2-1--12223-1-11--1--02-1-3----001-", "-13-03-33---12--12----3-21---3-230--1-3312", "33--2211--0---0-13-13-0--0---1-2103-2--0--", "-231331-1-1-0-2-1--0003--1-232-3011--3010-", "32301--21-2---3-11-1-2301--113-2-11-31-20-", "021-113-2---111-2-----3-13---1-3-1----200-", "-0-021-2--0--12-00-------1-----32----200-2", "1-1-2---0-0---1----0-00--2--23-1-2------0-", "-203031--2---12100-3203-3---03-3--1--0-220", "-10300202-3--12-0-23112--3---0-3------1200", "-21--3132----0--0020-30-1----0-1--1-02-03-", "10--2-203-1--21-2--0--1-30--0------323-3--", "0-30131-0-1---2-2302--33-3-----23----311--", "2102--1---1-010-23-2-1---2--31--1111-1-12-", "-01233--0----0-011132---30-0-1-----1-3-31-", "022-1--03-0---3-1--01-11-3---1-0--11-3-02-", "-10-0-1-0-2-----12---0-------2-00-1--0-0-2", "-2-----30-2--11332-2-2-323--13---12--0-2--", "12--3--12---32001--3-32300--11--3-----2---", "-30--------3--1-30--120--3-21113--332-13--", "-12-3-330-2-321-32-30-3-01--31--13-000-0--", "-10-02-01---01--3--1-31-30---2-3--2--2101-", "113---0-01---02-3--0-----1---0-3-----0-3--", "-33---2-2-------02---21-0----333-----0-2--", "-30-2-13023-3-2-20--1----1--13123---01--1-", "22211---3-2-2-3-20--023--0---2-31----0-2--", "-3--30--2-0--3--20-30-1221---0-32---10-2--", "-23---3-1---3-0312-2-22-13---1-1-1-032-32-", "-311-3----1--0-111-3-22-----23----0--3-1--", "-13-031-0----23-00-3-11-13--33--2----2010-", "2-3-2103--0-322-30-01---30---13--3003-20--", "-2220-1---3-2-021--0----02---2--20-----21-", "-1-0-1210-2-3-2-02-0----20-232-1--02-0-0--", "213---2-3---1-1-23-1003--1--322---1--2-11-", "-031---0--1-----20-1--3--0---3310-1-3022--", "-30-333---3---001---3-2221-2-2-030--0323-1", "332-1--10-3---1-1-----2-----------3-3223--", "2---3---1-133-0-21-2-2200----3-3-0---2-0--", "-0210-13--3--1--2--3-03--1---1-200-1-3-23-", "-0-021-01---0-3-0--00--001--20-1-331-32---", "-303--33--0---3-0----1--22--2122-23--3-2--", "-3--0-1---3-32--03--322-01------3------2--"};
    vector<int> stringsA = {13, 13, 28, 25, 27, 22, 16, 14, 11, 14, 22, 23, 20, 36, 26, 16, 33, 20, 36, 24, 29, 14, 19, 25, 29, 10, 22, 17, 13, 35, 19, 10, 16, 15, 13, 28, 31, 21, 27, 10, 15, 12, 15, 30, 26, 10, 34};
    vector<int> stringsB = {47, 41, 39, 41, 41, 40, 39, 39, 42, 44, 43, 44, 50, 45, 39, 47, 41, 47, 43, 42, 48, 42, 45, 44, 46, 43, 45, 47, 43, 40, 43, 40, 47, 42, 40, 47, 40, 40, 50, 46, 46, 47, 42, 50, 44, 44, 50, 45};
    int d = -17;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> tab = {"5--40---1-1-48-0--632-32-4--4--6-5-1599---1-4--97-", "4-4698-19-2--5-8--0-2881-8-----0--8-9743-8-----3-0", "0-1-5--55-9--3-9--23-5-573-74-0---078-9-87---1-2-0", "-080---89----5-4---24--3-3-21--4-00-7-4-36-----5--", "-8262--89-3--5-3-----7076---9----6--8663-7---6-9-6", "--6-7--1--9--5-3-40---297---7--0--7-3104-83----3--", "-0554--21-6--5-7---76--001-8------5-890921---3-1-4", "-4983--6--4021-7--97--773--44-25--681-3--12-6--2--", "75328--19-0--8-5--42--3457-3--8--58-14--84---5-3--", "370-8--84-2--2-1------3478-0--7---10-19-62-159-026", "-6768--92---96-4-3-----20--7--9--697--6--0---0-1-6", "182-5--67-00-6-2---801-747-0--30-225--9-49---7-9--", "38-24--02-0-63-6---5-56357-14-09-5814389----5--5-7", "7-428-----3--8-3--7---0464-1--40-608--52-----94--6", "---89--3--8--8-4---86-645--44----06-144--4--------", "24--47-67--65147--9--123---179-1-31-7-7-0----0-3--"};
    vector<int> stringsA = {-3, -5, -7, -7, -3, -5, -3, -3, -3, -4, -5, -3, -7, -6, -7, -4};
    vector<int> stringsB = {-9, 4, -11, -8, 39, 48, 45, -10, 42, -4, 4, -19, 5, -18, 7, 5, 46, 15, 28, -15, 8, -16, 3, -17, 22, 14, 4, 30, 20, 10, 7, -17, 10, 20, -18, 32};
    int d = 25;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--------------------------------------------------", "---------------I-------H--------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "-------------H-I-------H--------------------------", "--------------------------------------------------", "----H--D--D--H-H-------H----------D---H--------F--", "--------------------------------------------------", "--E-H--ED-F--G-G------CFF--D------C-C-F--D-----E--", "--E-I--G--H--I-H-------HF--E------D---H--------G--", "--------------------------------------------------", "9BBBC--CC-B-9C-C--59789BBB-A7-87-ACAB7C89A---A-9-A", "12-010-13-1-12-1--21011101--0-10-01-233--1--01-310", "--------------------------------------------------", "AAGCH--FF-E--H-G------EFFD-D---B-AE-F-G--F-----F--", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "565576-77-654637-267266767-55-65-56576855620461915", "9CBCD--CB-B--C-D--6988ABBB-88-48-AC9B8C77A---7-9-B", "----I--------H-I-------H--------------G-----------", "-0100--01----0----10-------0100---00011101---0-1--", "46667--88-6247-8--65235978-56-42-6777684663-37-4-6", "BCEBG--DD-D--F-E---A--DEFD-C9--A-DE9DBF--D---9-D-8", "--GBI--EF-F--G-H------FGGE-D-----BF-F-H--F-----G--", "--------------------------------------------------", "DFEEH--ED-D--G-F--AB--EEFD-CC-8A-EEBDBG-BD---A-D-A", "67768--89-7267-8-366435979-66-57-7878785683-68-5-6", "--------------------------------------------------", "--------------------------------------------------"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> tab = {"O-IHI1P--6AP-BH-3---P-7", "L-2L-----12--92E6O15A6-", "LB553-9R4AAPQ2RE--MC-0I", "--5NH-H---2HAO-BQ---3--", "P-NK--C--0D4-5Q-B-4-H2J", "--1-A--E--N-16H-6--MM-3", "M-BI------EFQ7KH-O1F2M-", "--IO-----7H-B7K-C--LNKK", "-Q-----N-M2-QMB-1R8-1I-", "------H-E-NL2K8-7ELO-NE", "M2MQ5----4EEA4--3--PQ--", "O4MA--R-092ELD7----AL-8", "6-H53-M--5F6-BKFP-4-K-O", "0-4-Q-N-I7DR-B6-----M-2", "D-M2N-H-1-E2--H-9RP-H--", "I-KGN-0-9039L4R8L--52-2", "8--E6---8OK--09EDA--59-", "A-03---B0AA1-CI0-F3-I--", "6--O8------7--8PGN1G--M", "D-4I2----MN--HJ-PR-P5-D", "9-MM--DB--8--HP9C9--KR4", "A--DN---4JI0PM6-C--PMLN", "J--2C-B-8-QEMM3-G-M0B-1", "9-BF1-L--0HQNGQ-F---K-K", "O--7--6J-9OEIH2-KJO--F-", "---CI-N1--RM-31-6H-0I--", "--5----8-----P5--2LGQ-E", "P-5O--E-3-DH-7F-H-5-5-J", "I-9N------D2-NE-23--E--", "3-J---G---C1-D7-3--1Q-4", "E--Q2-N---R--RE-88--6QP", "-F-QH----7KF-9F-3--6KJ4", "N--70-PM--9-2F2-5-38L-O", "--H2H-4--06C--1--FGC-DR", "P--O--57-L8N--E--R--J-M", "---K0-M---C0-EGE-9--AD-", "--P-------PC-7Q-QG--K--", "9-R9--8-DF8A-Q6G4---N--", "0--L4--2--HF-6--O5-R0RO", "----3---H-C-9-O----IPGA", "Q--F--9-G9RG--5R0--07-D", "O--66-B-4-9R-8-O76-----", "---C--I---DFQ2--I5--QLK", "4--0----A0QN-1A79---A-Q", "J---M-0--9RO-QB-K---G-3", "---NE-6-HKB5-FF-P-KGB--", "-1D---8--EC7--6-2-4---E", "---I--C-N-F-LI4---5-AR-", "---Q7-D-E-B9--3-F--D3--"};
    vector<int> stringsA = {-5, 5, 0, 7, -4, 4, 1, -1, -4, 3, 6, 11, 3, 0, 12, 3, 8, 3, 11, 4, 3, -7, 11, 9, 3, 11, 13, -2, 13, 11, 2, -7, -4, -2, 2, -6, 9, 5, -6, 13, 14, 2, 5, 8, 6, -4, -3, 0, -8};
    vector<int> stringsB = {46, 34, 46, 29, 42, 47, 32, 29, 31, 28, 26, 36, 38, 33, 33, 40, 42, 40, 29, 37, 35, 42, 47, 41, 41, 47, 36, 41, 27, 41, 37, 36, 26, 36, 28, 29, 31, 38, 28, 40, 32, 45, 32};
    int d = 42;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O4QPM-NEEGxQNRxxNPKNSMN", "L-BM4-E--4xK-IxxI---N-F", "Q4SQM-PFFJxQRSxxOPNPSNN", "---I------x6-IxxA---H--", "Q-MPG-NCGFxPMOxxONCLTJP", "Q6SRN-PGIIxQRSxxOQSOWNO", "A--K--C---xE-IxxH---K-7", "---J------x7-JxxB---I--", "---J------xC-IxxG---K--", "----------x--Fxx----B--", "----------x---xx-------", "K-AM5-E--6xK-HxxH--5O-H", "N-GNE-H-5CxM2JxxJE4FQ4L", "L--N--E---xI-JxxI---M-E", "L--N3-E---xJ-JxxJ---O-G", "N-FNC-I-6BxM7KxxJF4EODK", "Q-NQJ-OEHGxPMPxxOPELTLP", "N-HOD-M-8CxMCKxxKH5EPDK", "---J------xD-JxxC---K--", "M-DOB-H--BxL-JxxKD-FQ-L", "L-AM5-E--5xJ-IxxH---O-G", "R-PQN-PEIIxROTxxQPGQTNR", "UATUO-THPLxSRVxxSTTQXOS", "O-JNF-M-CCxPILxxMI6FRFK", "O-KOF-N-DDxPJMxxMJ7HSFL", "ZHTVU-XMPRxUSXxxUYWQYPT", "M-BN9-F--7xL-HxxH--AQ-I", "Q-LOG-O-EDxQMOxxOJ7JTIO", "----------x--Fxx----A--", "Q-LPH-OAEExQMPxxON8LUJP", "N-FOD-I-2CxM-KxxKF4FR3M", "M-BOA-F--9xL-KxxK5-BR-L", "----------x---xx----A--", "N-DOC-I--CxL-KxxK9-ER-L", "---E------x--Gxx----H--", "---L------xE-KxxE---L--", "5--J------xF-JxxI---L--", "N-GNE0K07CxO9KxxLG5FQBL", "---H------x--GxxA---H--", "N0JOF-M-8CxNIMxxNI6EPEL", "D--M--C---xI-IxxJ---N-C", "O-PPL-MFFHxQNSxxOPJOSNO", "J--N--D---xJ-JxxJ---N-C"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> tab = {"J3I", "-D-", "A--", "N--", "J--", "MHD", "1QP", "88-", "EA-", "---", "-Q4", "FH-", "4-4", "-LK", "--P", "LG-", "E-J", "-A0", "K-F", "BF-", "GM1", "HKN", "---", "--3"};
    vector<int> stringsA = {-26, -42, -27, -23, -32, -28, -33, -24, -28, -35, -41, -43, -38, -38, -23, -30, -37, -43, -42, -45, -31, -39, -35, -27};
    vector<int> stringsB = {-24, -20, -20, -14, -19, -23, -25, -18, -23, -12, -18, -20, -18, -25, -26, -21, -16, -25, -27, -17, -15, -15, -27, -24, -13, -19, -12, -15, -26, -21, -16, -15, -13, -21, -12, -18, -24, -25, -16, -20, -13, -14, -22, -26, -13};
    int d = 18;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---", "---", "---", "FD5", "---", "---", "---", "---", "---", "NJM", "---", "---", "---", "---", "---", "---", "0--", "---", "---", "---", "53-", "A4-", "---", "---", "GED", "--0", "OLM", "B7-", "---", "---", "0--", "BA3", "HFD", "---", "UNW", "---", "---", "--0", "210", "---", "IGF", "GE8", "---", "---", "MHG"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> tab = {"----134-", "-4--72--", "-3--700-", "7---05--", "--6-353-", "----72--", "1---5-0-", "36--02--", "-0--54-7", "-3--00--", "-4--243-", "-2--5503", "-4--1173", "-7--511-", "-5--324-", "----1---"};
    vector<int> stringsA = {21, 29, 10, -5, 6, 41, -12, 36, -5, -14, -11, -6, 10, -13, -8, 21};
    vector<int> stringsB = {-29, -29, -30, -23, -18, -29, -18, -28, -21, -24, -26, -26, -26, -17, -25, -28, -22, -30, -24, -26, -23, -23, -17, -29, -24, -18, -18, -17, -30, -30, -22, -20, -19, -23, -22, -25, -30, -22, -25, -26, -27, -23, -26, -19, -27, -17, -24, -25, -21};
    int d = 5;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxxJ", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxxO", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xx--xxx-", "xxY-xxxZ", "xx--xxx-", "xx--xxx-", "xx--xxx-"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> tab = {"DH-J51G-9KF1L--K-AB-A----M4K4------C0-3-CH-", "K9-71K--J2-86--K-L2-A-42-7FEM-------AC----J", "CA-J6L-LC--27K-7--8-2G----3L8-D---C-2-1B--G", "5--94G--M5-D2--G--0D2-M-KF--D------91-B----", "E--GKM-------J---D7BI-6-7DF-F------I-----34", "-KD4HG--E---J--L--3H--F--D-L------H-1---A-4", "81-1-I--9-EIHB-H-KA-M----4I-B-L----99--I---", "-I-L-5---C-CA----D5F5-84063-2-G------G---IC", "-F-6L----88H-A-1--FC--E-J6-8D-----A-5---9F-", "1D-I-44----E1----51I-A---54-I-F-----F5--M-1", "-G-C494-3--4A--L--H8L-6--IF41-K-----4----5-", "---M05---8--JI-1-HJ5-A6-M6--7-M-----3----47", "-I-F6I--9C--HC---6KMAHJ-79--------F-0-----6", "-60H-GG--2K27--E-KD1-3F-25--------9-G-----G", "-G-GMB--1I7E2--I-I25-6DG-35GF-G----2ME8--4-", "-4-K-M--7B-0C----L2BK-D--CE7J-C---H-3-G--58", "-B-1D8--MJ-15--M--E-6-4-0-6-D-B---M-5--6---", "---DK2-0G--B-7----EBK-3-9G-GM-----0-1--JD0-", "-J-G3E8-HJ0-C----C5-CL--L41JJ----------3I--", "-L-BEA2-25L71F---HC--F---0--6-M---JJC---0-M", "-----I--1-I-I--J--30J-L-3I2A------0-L-----I", "---88J-I-I3M74---3H667H-CF1--------------AF", "-9-CH1--LM-I8--4--63J-F7---53-3-E-5-L----5D", "---F19---F-AFD-L-HE2-43----BH-----7BB---1-6", "-I-K-A--H-K35-9---3-G-A-5L2-K-EI---I-----E2", "-2-C-I--7B-51--G--D-A-C-3-MJ--6-D-7-I-----L", "-G-JIBE--K2K3B-L-CJE-MF-LAIC0-5-----9-51---", "---B1---CI-DJ--A--3-A-5-2-0-7--------4-J-B3", "9--4E------JB-----1--578C2--C-K---G----2-AL", "-MLAD1F-8J--JA-I-1HL--I--KF-C-----MGG-----0", "--2H02--01-KD0----29--2-E1K16-H---E-D----L-", "-4--8J--922JKH-5-D4-A-35BL-8M----H1-3-----7", "---G3FF3-H-610C5-9-H--B--I-E------G3K-K--EI", "M----F-G6--GID-3-GE23I4--1F95-L----J6-----8", "---H67I-0J-247---D7KG-G--H9KL-----961-----E", "-----0--H--AIGME9-LI--CB-C22C-1-----D---D-4", "8AB5MB-I-2-H3J-6-K5AL-A-5C0-A-4---EA1-----B", "D--7B7-80I--H--G-8129-5-69K-F-------26AE6-6", "----LG---BLA17---I-CCG0-CFFI------FF2-5-D-D", "H--DEJC-B03-C8-3--727-D6-9H44-----C-9-----K", "H--ILH---M--B4---0H---L--IC-I-J---7-0-----K", "-M-KBL--K6--17-H--M9--35-M586-6----8C----F7", "---C5FJ0--3FJ4-A--I-B8K--JI---6---C-I-8---J", "---C----0A-1AJ-J--6LH---JM0L7-----E-----L--", "---GBDE403DA1-0F-LGG4----J-7--C---B----M-2C", "---G-8-9H0--DB-H-639CB8JF7M23---0--1----GC-", "BE-5CL--C--M3-----49LF5-E16HH-1-----MH-1-L7", "L6-3AA--KB-AE----E2-B-MD4F--------1-A-6--C3", "---0AE----3-7--5-GD--HE-AE0IG-K---D-57---IB", "-4-G24--D4--D2-305KDCAE--GC1F-3---2-JL---09"};
    vector<int> stringsA = {-31, -41, -28, -9, -25, -38, -34, -23, -25, -29, 5, -15, -16, 7, -48, -21, -28, -13, -37, -40, -24, -37, -11, -2, -16, 4, -10, -40, 8, -7, -42, -3, -45, -22, -21, 5, -8, -36, -41, -27, -5, -3, -49, -9, 5, -7, -25, -17, -26, -20};
    vector<int> stringsB = {-34, -28, -2, 0, -7, -26, -24, -14, -2, -27, -1, -6, -16, -8, -22, -4, -12, -11, -6, -4, -30, -9, -9, -10, -14, 1, -26, -22, -28, -12, -25, -3};
    int d = -23;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x-0-xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x-0-xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x--0xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x12-xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx-x---xxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> tab = {"31-10-1----1-43", "0---1--3-434--3", "1-222--303030--", "3-4402-20-00---", "43-2----1-0112-", "03142--2---4--1", "3-124133--31-32", "4043---3---40--", "134114-434-0011", "---34-----32--2", "2--42-1----1--4", "--323---234---4", "-4030-0----1---", "13-21-2-2--1-42", "----1---3-4--0-", "0-4434----11---", "43-024-0--00123"};
    vector<int> stringsA = {34, 21, 34, 32, 32, 18, 32, 26, 20, 25, 35, 21, 19, 34, 30, 16, 22};
    vector<int> stringsB = {-1, -16, -10, -17, -13, -20, -16, 3, -15, -3, -14, -5, -18, -8};
    int d = -7;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xTUxxRUTSJSxRWV", "x--xx------x---", "xQRxx--RQ-Vx-RS", "x--xx------x---", "xTQxx--ST-Vx-RV", "x--xx------x---", "x--xx-----Qx--S", "xRQxxOQRQRPxOST", "x-Rxx-----Ux--T", "xVTxxMVUTKUxMVW", "xSQxx--R--Vx--V", "xOSxxMXRVMUxLWW", "x--xx------x---", "xQPxxLKPX-XxLVS"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> tab = {"524-4---34-66--32-22", "6-4--1-5122-4--3145-", "555-23-5120-----40--", "2-2301--432----5---4", "-2510---5-1225-6140-", "3-3230---6--6--2--10", "5-5112-3-34-6---532-", "3-2-3--3-63-36-0--56"};
    vector<int> stringsA = {20, 25, 28, 36, 22, 43, 27, 17};
    vector<int> stringsB = {-18, -15, -8, -25, -30, -15, -7, -17, -4, -30, -32, -6, -23, -4, -31, -28, -17, -22, -15, -2, -3, -24, -6, -6, -17, -4, -13, -14, -18, -28, -22, -9, -22, -35, -32, -15, -34, -16, -25};
    int d = -5;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xxM-x--xL-xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx-JxxQ-x--xMPxx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "xUxxxx-UxxZNxO-xTRxx", "xMxxxx-SxxTMxL-xURxx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xxL-x--x--xx", "x-xxxx--xx--x--x--xx", "xLxxxx-TxxR-x--xPRxx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx", "x-xxxx--xx--x--x--xx"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> tab = {"15-33---1---1-73-15-----4--7----2-5--0--5--26--065", "36--7--3576---7-2520-------21-7-535765--1----1-01-", "2454----34-2--1615004---6-016--175-3--0-0--67--2--", "-6-15---05-6--56104------4-7----7-57-50-3-6470-0--", "665-62--0-457--075-5-------6----610--06-7-4434-452", "-4-6---54--0--0136-----4---7--4065--765-1--10262--", "5405-4-50--1--307170----7-576--656---52-5-36--52-7", "425-7---6--0-1-015------7--3--5-5367-3074---7---14", "11-----0-506--373675----0-21----31----4-7--55313--", "-07-6--65004--6047-7-36-3-5-----27-2-0--0-4--6-1-2", "22-2362-1751--15-75---0-5-37---66-54640-3-213-----", "6-251--27215235-06-3----4--67---3--235-05--6-0-0-0", "255------76----22722-7-02--5--6304----7-3-056523--", "23-36---5140--40074-----7--21---1----75-6--567-7--"};
    vector<int> stringsA = {13, 1, -3, -22, -17, 1, 14, -6, 12, -1, 14, -30, -12, -25};
    vector<int> stringsB = {-23, 24, -2, 10, -22, -1, -4, 27, 19, -18, -7, 13, -4, 15, 25, 29, -4, -24, 19, 23, -1, -20, -4, 14, -8, 21};
    int d = -16;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx--0xxx0xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx-1-xxx-xx-0xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx2xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx347xxx6xx-7xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx1xxxxxxxxxxxxx---xxx4xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx1xx-3xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx-0xxxxxxxxxx-xxxxxxxx", "xxxxxx-xxxxxxxxxxxxx---xxx-xx--xxxxxxxxxx-xxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> tab = {"46A76---1-516--79--7A--9A968----68", "2-457---1-5-1---1--8-A-87114--113-", "3-422--A6-0-8-9-3--8-9-9A976----7-", "4A948---1---06-1---3----2727------", "3-0-1---A---9--2----32-817-14-----", "0-858---3-373--A---2-9-87361195-3-", "441AA--9141-8--58--96--79551-----1", "2-6-A--A2-9-A8--98-A-9-27A78-A----", "40089--22-8-8-7----3---72399--31--", "-3754--66---5--20A-35---0501------", "47287--54--2A--0---104-216142-49--", "0-647---7-2954-57--391-30484-----4", "7A760--85-18A-8-3---75-55AAA--3--0", "-5335--65-2------2-8-6-16868--0-95", "9A676--90-A-65--5--93--46388-5-A8-", "8-A61--6A---5--26--2A--05734--A2--", "9-651---4--A17--2--430-484A6------", "1-817--29--99------A7--62244-63-0-", "A6887--06---3--6---5A8-06-A6--4A--", "--803--49--78--5---5-6-53-16--2-A8", "--628---8--13-A2-6-65--21952--8--1", "65743--90-----28---95--054386--5--", "-3624--434--5--8A--25--6-7692-1---", "8-463--939A86-1A6--17A-418A7---43-", "19739--40---60-9-4-1----8A2-------", "7-042--408-53--91--93--07180--9-4-", "5-753--76---6--A---566-86034--7---", "-3A94---3-46A3-6---663-35289--9-6-", "6-9-A---A-5-62-A9--6-0-0783--3----", "0-515--47-57A------5-8-A66180-21--", "--A28--51---0--33--4--84A51A--4-4-", "A397----1-02----6---47-44018--3--A", "1-526--19--780-5---97--07795-67---", "9-500---3A-9-1--0----7-79581--1-3-", "---35---2--52--95--4---01061-547A-", "74465--A1-A05-5-A2-4---77688--A---", "A-656---0---4--17--331--2632--2-31", "--343--43--85--79--9-2-23977-88---", "-2940--60-328-45---0-9-82120--9-69", "-5-11--01--07---A---9--70628-30-0-", "9-51---A0-5-A--26--3-7-52786--6--3", "03596---9-1-1-06---7-2--1-70-23---", "0-213--87-A-4-922--414-05286----8-", "2-5-5--23-3-4-262---89-19541--A--A", "91943--32-A-6--085-A-1--2971-254--", "9A117--51--A--177--7---32674--A---"};
    vector<int> stringsA = {-31, -44, -43, -8, -41, 24, -16, -32, -33, -1, -18, -44, -44, -33, -34, -14, 38, -21, 7, 25, 36, 3, -33, -30, 15, 38, -23, 11, -40, -10, 40, 1, -29, 15, -16, -47, -44, 37, 31, -39, -4, 23, -6, -20, -15, -43};
    vector<int> stringsB = {2, -30, 34, 42, -28, 3, -11, 7, -30, -16, 43, -11, 30, 34, 18, 14, -22, 5, -31, 1, 17, 2, 17, 33, -18, -3, 28, -7, -10};
    int d = -47;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx0xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx", "xxxxx--xxxxxxxxxxx-xxx-xxxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> tab = {"-3--0-14--26452------372--5218504", "5---67-----541--8-4-3150-58681-62", "---54-----26630-----3044--2-65345", "3--1-------2-7-----758-2-47453012", "85-1-5-1--6-52------3016-41-6-575", "---86--0-067228--8-8-548--734-637", "---33--1---1147---27-762--685232-", "-----1-----13-4----2-532--6743543", "----7-----54444-8----774--0118013", "6---7--8---0-552-0---316-01-4--45", "3---7-3----374-----1-633--64-3244", "----3-----0-65------23-0--4318476", "82--7----50413--0---02-4-84860202", "---55--0--70-3-------512-11344-0-", "7-1----6--401-1--5--2844-0811--68", "0----------803-----33768-4408-821", "1---0----3-2150----1-230--486-222", "---46-----260-5--7---0-8-7882-57-", "-1--6----3---44---2-1051--1521-71", "1--6---2-8-453-----6-580-28274-0-", "--1-66-1--2716----751--1--048--68", "-------------3-------406--186084-", "----7--5--5--30--3-1-478-15-32162", "--8-6--7---2713----46440--0-21--5", "0---1-50---41-8------4-2-4635-716", "--4--------3534------456-4743-256", "---3---6--56111--502-202-5211-546", "----4------5807-14-0-175-1-728231", "----5--0--750177-4-3--10--5517-7-", "----76-5---1002--3--8448-86143-10", "0------1-46-31---3----85-2080854-", "-------5--23833------61---8271-72", "----------30----28---663--784616-", "----0--------44----1--26--7083-83", "2---0----6-0277--57-8721-1-338-78", "-------5--380-6--3---510-61-50236", "--1-7--5-06------2-74246-8--20-22", "-------5--65-083---3-5-5-1825-015", "---12--8--56-64--0-27557-61684233", "5---3-----8-335--3-66-45-1863-038", "2--15-----5234------1-55-1205-43-", "-0-------3-406---7--3008--6212803", "-2---5-2-483633----0-464--7554-50"};
    vector<int> stringsA = {-21, 15, -24, -12, 10, -20, -27, 7, -10, -22, -28, -8, 10, -21, -27, 15, 16, -16, 6, 13, -20, 16, 3, -25, 9, 6, 3, -5, -3, -13, -9, -13, 3, 1, 3, -25, 3, 2, 3, 0, -8, 15, 9};
    vector<int> stringsB = {-29, -41, -40, 22, 15, 10, 14, -13, -34, 0, 15, -31, -36, 12, -34, 5, 2, -5, -15, 9, -38, -26, -24, -23, 19, 17, -13, -17, -21, -41};
    int d = 14;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"----R--H--LxxxO------xxx-NxxxVVxx", "-----------xxx-------xxx--xxx--xx", "-----------xxx-------xxx--xxxTSxx", "C72BDE67-D9xxx9-FEBBAxxx-Cxxx9Gxx", "E6--9--8-C7xxx9--5-8Axxx-DxxxCFxx", "9---9--C-7CxxxE-07-9Bxxx-ExxxEGxx", "E---A--9-98xxxA--5-9Axxx-DxxxBFxx", "2-18O-2A--JxxxT--5-M8xxx-NxxxURxx", "----R------xxxQ------xxx--xxxTRxx", "5--2F0-6--BxxxI--51G8xxx-IxxxJIxx", "GA-3B7-A-E8xxxA--729Cxxx-ExxxFHxx", "----Q-----NxxxQ------xxx-NxxxWVxx", "----T------xxxQ------xxx--xxxQRxx", "B---C--A-BAxxxC-05-8Cxxx-DxxxCExx", "----S-----PxxxS------xxx-LxxxVWxx", "3--2C2-6--FxxxE--8-EFxxx-HxxxGHxx", "3--1E--4--GxxxH--6-G7xxx-GxxxJHxx", "3127I--B--GxxxN--9-JCxxx-MxxxNNxx", "---5O--B--IxxxN--7-HAxxx-OxxxWQxx", "A---8--C-0DxxxC--6-ACxxx-ExxxEDxx", "----S------xxxQ------xxx--xxxRSxx", "----P--J--LxxxN------xxx-LxxxUTxx", "----O--H--KxxxQ----B-xxx-TxxxTSxx", "----N--H--NxxxQ----G-xxx-TxxxZXxx", "DA-6CA-6-EBxxxB0565DDxxx-ExxxCIxx", "F913DB-8-F7xxx91255EFxxx-FxxxDKxx", "7-8BO-7D-7MxxxU7-F2MKxxx-SxxxVTxx", "----P--C--HxxxL--9-GAxxx-OxxxVRxx", "----P--F--LxxxO----FAxxx-SxxxYVxx", "-----------xxx-------xxx--xxxU-xx"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> tab = {"P--7B--7F-G----Q--QC---K--B6-K9---P-", "IO-B----7-2----L-EH----C-K0-L-------", "N7-Q6-K--62----Q--AE---K-M----L-3H--", "1F-4H-2-O------I8G004--8-9-09Q--F3--", "-1-PB---BQ-----O-M-F---Q--M-6-9----M", "L2-L--NLQ--F---Q-8NAL--D-IH-6-Q----I", "55-9----79---PD-7APG---6-CI1P-K--P--", "-7-QF--Q8-4D---L--43---O-71O1---0785", "-L-58----GQ----H--A6G-J--J2-E----3--", "O1-4L---H7-----F--KM-----AN---------", "EQ-80--OE-7---IPOCQ-P--N--O-E---H-I-", "M2-88--789-----6-J38-O-P-1G32----H0-", "F7-QG---OF---0-5-65D---I-K-LJ--6----", "2--4N---A-0--DP4-QI-M--P--JON---6-M-", "-9-NF---N3J--EFF-QCCP--F--A-O---9---", "M3-J---ON6NL-F85DHP0G--J-9I7C-3-----", "M--P-----6----5O-H9EC--L--5I0----7--", "AP-FC--DLLDL-C-1-7L54--F-N7DF----N--", "7F-8L---H--G---H-MMB---O-HE------A--", "HI-DL--3QD6----H--9FL-----1-C---8--D", "B9-C1----1N----43146Q-GJ-52PB-O-----", "F--4-----NOH---FJ766N--5-QO5-----Q2-", "G2-HM----KG---N2-AP3E--Q--N-----K---", "7L-9L---QI-----HMCAH7--H-7OPKGN-F---", "FJ-7L----5---CB4--75N----8F-A----H--", "NC-57----B---FGG3FGF---2--NFD--A-H--", "CH-B----5-6--8---A3NQ--1-8N-B-H-H-1-", "DO-9E-Q-E-C--3--DO431--A--------O9J-", "M0-K---DF2C------N6FH--51BA-D-----2-", "-L-OG--A-EJ--EB---5606-F--HCA-----8-"};
    vector<int> stringsA = {-13, -13, -19, -23, -8, 6, -15, 29, -7, 0, -11, 18, 3, 3, 31, 33, 10, 29, 14, 24, 13, -10, -15, 16, 14, -5, 33, 18, 0, 20};
    vector<int> stringsB = {-19, -15, -4};
    int d = -27;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xx-xx-xxxxxx-xxxxxxxx--xxxxxxxxxxxxx", "xx-xx-xxxxxx-xxxxxxxxE0xxxxxxxxxxxxx", "xx-xx-xxxxxx-xxxxxxxxJ6xxxxxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> tab = {"11--6", "31--6", "78-57", "37-42", "84--7", "07-44", "43--0", "-0--8", "2--48", "14-12", "28-72", "55-20", "1---8", "76--0", "12--6", "64--7", "76--5", "76--3", "57-11", "382-6", "5---4", "3--83", "73--7", "42--0", "23617", "18--6", "20--8", "78--2", "-7--6", "58-82", "86--2", "03--0", "01--2", "24-66", "65---", "3---7", "08--8", "45---", "42-42", "77--1"};
    vector<int> stringsA = {-23, 22, 16, 21, 29, 43, 13, 31, -7, -14, -7, 6, -12, -30, -26, 20, 1, 35, 21, 22, 29, 31, -15, -15, 25, -28, -23, -36, -25, 25, -6, 30, 40, 35, 20, -9, 15, -13, -29, 41};
    vector<int> stringsB = {-22, 7, 2, -7, -38, -1, 2, -14, 0, 1};
    int d = -39;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xx7xx", "xx-xx", "xx-xx", "xx-xx", "xx-xx", "xx-xx", "xx-xx", "xx6xx", "xx-xx", "xx-xx"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> tab = {"--AF----9-O772", "C-------J--3H2", "N------K--DKR0", "J-------O--4RR", "8----C6C--DJH3", "1--D----2--C05", "7---6---Q-3DRE", "2-----H---3R1F", "-----7-75--RL6", "2--0--4-N-2RFL", "-----MC1RRRDI3", "-----5CD2-AG4A", "---G---F0--A6-", "3-J----O5-2QC2", "0--RR7R3---H9I", "9--F--L-91BE69", "B------4D--8LD", "Q--Q---I---8RE", "D---P--CA--MQF", "7---------9L-2", "2--5----A--0B-", "3---------06HI", "P--7-3-K7--H9D", "R----DJHED--58", "E--J-G--K-BKER", "L------MN-J511", "F----A-5M--F5I", "M6---E1M--EHJ6", "E--5--IQ8-P427", "1-------C-NEC1", "D----6-2F--7KC", "5--N-7-LR-ACIO", "3------4P--2N5", "J--L-6-P4-AJ6K", "2------HH-C1LP", "L--1--27I--NN3", "H------QRR5KQ6", "A-GF---B6-ADNE", "-------JEOCNI3", "----1---R-P8F4", "--------ECD19L"};
    vector<int> stringsA = {23, 12, 22, 36, 23, 22, 7, 9, 21, 25, 23, 23, 29, 35, 41, 34, 17, 10, 11, 9, 30, 22, 23, 39, 20, 34, 16, 15, 41, 18, 16, 9, 36, 15, 8, 39, 12, 11, 9, 5, 13};
    vector<int> stringsB = {-11, 17, 23, -28, 0};
    int d = -23;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x9Fx1xxxxxxxxx", "x--x-xxxxxxxxx", "x-8xMxxxxxxxxx", "x--xBxxxxxxxxx", "x-AxDxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> tab = {"11----0---1-001---10101-001---0--01-00-1--0---0-", "01-0--0--1---00-011-100-011---0--11-11--1000--1-", "01-1--1--0--010-101-101-1-1-0-1-1-1011-00-0---01", "-11---0------00-11-1-0-01-0---1001--00---10--10-", "11-0-----0--0-0-----0---000---1-011-01----10--01", "0001-01--0----00-11-0---1-0--10--01-10--1-00--01", "0000--0--1---10-0----01-000---0--11-01--0101--1-", "1100--0------10-0---000-0101000--11-10-01-1-0101", "-011--0--0---10-1-1-010-001---10-0--01--000-1---", "10---11------00-00--00--1-1---1--00--1----1-010-", "-0-1-001-0------1-1-010---1---0--0-010---100--0-", "01-0-011------0110--0-1-110---1---1-11--110---1-", "10-0--0--0----111---01---00---0--01-00--0101--01", "-10---0--1---0---0--001--10--1101-0-10----1--00-", "10-0--0-----1-1-0---100-100---1---1-01-00-11--0-", "01101-0-------1-10--101-1100--00-00-01--0-1---0-", "11-1-01--1--0-0-01--011-001---10-01--1-1010-----", "10-1--1--0---100---100--000---101-0011----0--10-", "-1----1----1---1----101--00-0-0--0---0-01-----0-", "11-1--0--1---10------01-100---01--0-01--0----100", "-0-0--0--1---11100-1011-000---1--01-11----00--1-", "010-0-0-------1-----001-11----11-1---0--0--1----", "-0-0--1--0---0--1-1-001001----0-0-0-10-11-10----"};
    vector<int> stringsA = {48, -9, 32, -2, -2, 50, 7, 43, 27, 26, 10, 22, -4, 41, 18, 18, 24, 15, -1, -13, 26, -1, 32};
    vector<int> stringsB = {15, 24, -20, -5, 10, 18, 7, 14, 27, 11, -21, -15, 8, 24, -11};
    int d = 14;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxx-xx--xx--VxxPxx-xxx-xxx--xxE-xx-xx-xx7xx--xx", "xxxx-xx--xx-EVxxNxx6xxx-xxx--xxEMxx0xx-xxDxxGHxx", "xxxx-xx--xx---xxVxx-xxx-xxx--xx--xx-xx-xx-xx--xx", "xxxx-xx--xx--HxxUxx-xxx-xxx--xx7-xx-xx-xxAxx-7xx", "xxxx-xx--xx--UxxRxx-xxx-xxx--xx-2xx-xx-xx1xx--xx", "xxxx-xx--xx-FTxxOxx-xxx-xxx--xxECxx-xx-xx7xx-Cxx", "xxxx-xx--xx--FxxPxx-xxx-xxx--xx--xx-xx-xx-xx--xx", "xxxx-xx--xx0-SxxQxx-xxx-xxx--xx0-xx-xx-xx-xx--xx", "xxxx6xxA-xx-ZZxxUxxZxxxJxxxVUxxSTxxJxx-xxExxUVxx", "xxxx2xx--xx-1UxxRxx2xxx1xxx-2xx11xx-xx-xx2xx-2xx", "xxxx-xx--xx---xxQxx-xxx-xxx--xx--xx-xx-xx-xx--xx", "xxxx-xx--xx--HxxSxx-xxx-xxx--xx--xx-xx-xx-xx--xx", "xxxx-xx--xx--MxxPxx-xxx-xxx--xx--xx-xx-xx-xx--xx", "xxxx-xx1-xx-MYxxNxxHxxx-xxx8MxxHNxx5xx-xxFxxIVxx", "xxxx-xx--xx--GxxWxx-xxx-xxx--xx--xx-xx-xx-xx--xx"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> tab = {"RLE-5J--2-E-------49D-RP---O", "125--6--5-C----V--1T--G----U", "-TF--C--D4EGM--7M-1--OA-70-M", "-FB--D--H6--L-J-7-OO-G-----4", "FL2--B--AC--H-R-7-G-P--TN--F", "0KQ--1H-UBV-5--B--3-K-OL-4-S", "--E--A--JMU-6---R-7RP-37---6", "UFA--K--FFK-J-K1N-7M-21N-C-T", "JPSA-11-S-E-Q-V-3-Q-A7BP---4", "-9E--L--D-L-E-P-G-P-DO-H---7", "I-C--U--RGH-J-O9--SL472F-NVG", "01O0-V--2--N2--DM-G-U37--S-J", "CGF-----9---R---7-U-5R-7M--K", "KQ5--7C-LT3-8---2BSH22ICO--O", "-95--DB-2-I-C-O-7-1T-2-4-U-C", "AI4--O--BJ-5A--TQ-4-0KQQ---N", "B5B45-O-O-M4--661-KQ-6UL---4", "JK6--9-QO-1-G-RU3-F--RP----R", "RE2--CPHD5A-TS--BQ6-N-7B-3-5", "15D4-N--K-6-B-PTT-0-CK-2U-HS", "72G--M--M-E-2-B-P-R-V9-T-AJ-", "8N9--PDI5-FV9---0-1U--GF-6O-", "BHO--0--SP9-O-V4886-5U--HU-5", "7V4--H--M--PM-KS--4-22IK-D-1", "NVH--6--7---M--CA-6KQF-Q-T-3", "59F--0--KT----3-I-N4---B-K-T", "-KJ--D--S-C-----5-VFVL-H-O-H", "RAQ--K--612-O--F2-Q-D6-N---1", "THM--R-101D-O-1-O-J-5PHAUG-7", "QJ1--T--681-D-----V-V-RBR---", "G1B--H--P3IR-MQ33-1-U-FP---2", "5BH--G--P---U---6-D-6BM4--ES", "8E---QV-1-I-5-----U-EEF3-8-7", "219--5--U4V-4-HO--RDTKFG---1", "EOG--C--G2Q-R-9-E-M0OMMPTL-P", "8V6-----D-K-9-M---O--GSG---R", "L4K--E--3U----G-E-4SR-H--N-P", "OU7H-E--H884I-D-M-N1C-REM--6", "MRE--8--C-V-R-IL1-8-S-DHCV-G", "I20--R--ST9-9---U-9-SL7CA--V", "5J9--N-OV81-I---6-FGCN1B---V"};
    vector<int> stringsA = {31, 29, 38, 35, 33, 28, 29, 26, 27, 37, 40, 28, 31, 38, 34, 37, 27, 35, 34, 32, 35, 29, 33, 38, 28, 33, 30, 26, 28, 41, 33, 28, 33, 31, 32, 34, 41, 28, 40, 33, 27};
    vector<int> stringsB = {3, -5, 0, 27, 13, 13, -17, 30, -11, 22, -2, 22};
    int d = -12;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxx--xR-xxxHx-xxx-xxxxxxxx-x", "xxx--x--xxx-x-xxx-xxxxxxxx-x", "xxx--xG-xxxJx-xxx-xxxxxxxx-x", "xxx--xKCxxxLxGxxxAxxxxxxxxFx", "xxx3-xK-xxxHx-xxx-xxxxxxxx-x", "xxx67xK4xxxQx-xxx-xxxxxxxxHx", "xxx--x--xxx-x-xxx-xxxxxxxx-x", "xxx3-xMJxxxLxKxxxIxxxxxxxxTx", "xxx--x--xxx-x-xxx-xxxxxxxx-x", "xxx2-xGDxxxKx-xxx-xxxxxxxxFx", "xxx--x--xxx-x-xxx-xxxxxxxx-x", "xxx32xHHxxxQx-xxx7xxxxxxxxJx"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> tab = {"--------DQ---M-LM19E---C1-MOE", "-J---9--8EO-3--KA-O2-6A-7F3-G", "-4----JM--AM1-Q-F7HQ----G570F", "K----B---------FK-CJ-NNB6II-2", "-----GG-4-35-J-IM-4I-1--7LP9-", "-6---O----------3-7Q-F-BQC-HC", "-P---6--G-0-6--A11QJ-KH-ONFCK", "-N------8-E-N5--JDME----4-GA9", "-5-DNO----8H---D8-P2--J-C02JL", "-----5-C--H-H---0-D8-H--O-Q65", "-B-2-8---------7--KB----6KC5D", "-4-5-----F-6F-----N0----D-K37", "K----O--J3--57DPEH0Q-A--EII78", "-H-6-BQ-4I-Q---04--O-D--HB4DA", "-D-1-8------------2--MB-0JCAN", "-----4BQC-0----F--GD-5--L-K7-", "-7-D-H--4------Q--ME-CK-2F6D-", "-K---B-----H---L4G0J-F--Q-MBD", "FH-JI----J-6---C-O0M-0--28DDJ", "-0---6--F-BK------4A0N--OA4-I", "-B-HDI-L--7----5-1K--QM-F-7AN", "-P-FH-N-M--98--J-627-KQ692HLA"};
    vector<int> stringsA = {-39, -37, -38, -37, -38, -38, -38, -39, -39, -39, -38, -38, -38, -37, -37, -38, -38, -37, -38, -39, -39, -38};
    vector<int> stringsB = {-13, -31, -39, -28, -34, -12, -31, -19, -28, -23, -18, -17};
    int d = 31;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Qx-MOxTSPPMSMPJxxNxx-xUHxxxxx", "-x---x--S-O----xx-xx-x--xxxxx", "-x---x---------xx-xx-x--xxxxx", "-x-N-x--S-ORM--xxLxx-xW-xxxxx", "-x---x--V------xx-xx-x--xxxxx", "Qx-ORxWVRUUWRQVxxTxx4xVHxxxxx", "-x-Q-x--T-OT---xxOxx-x--xxxxx", "-x-O-xN-ORMSI--xxJxx-xU-xxxxx", "-x-Q-x--U-RRP--xxMxx-xX-xxxxx", "-x-N-x--SJNPL--xxMxx-xX-xxxxx", "-x-ONxRMPQLTJF-xxNxx-xVHxxxxx", "Px-PRxTUQTNTPH-xxRxx-xVLxxxxx"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> tab = {"--5-1--3-14", "----0-55-42", "--4-5-25-32", "-23-4--0-42", "--4-1--2--1", "--5-0--0--1", "--0-2-51--5", "--5-1-43-55", "-22-3--2--4", "--5-3-4--21"};
    vector<int> stringsA = {-12, 13, -12, -23, 6, -38, -6, -27, -10, -38};
    vector<int> stringsB = {-9, -20, -24, 8, -14, -2, -20, -3, -13, -34, 9, 13, -20, 14, 6};
    int d = 45;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--x-x-xx-xx", "--x-x-xx-xx", "--x-x-xx-xx", "--x-x-xx-xx", "--x-x-xx-xx", "--x-x-xx-xx", "--x-x-xx-xx", "--x-x-xx-xx", "--x-x-xx-xx", "--x-x-xx-xx", "--x-x-xx-xx", "-Bx-x-xx-xx", "--x-x-xx-xx", "-Nx-x-xx-xx", "--x-x-xx-xx"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> tab = {"--VX-TL4C---V---", "-----I-G5-6QK-T-", "--O-PX-OM-4-04E5", "-----I-A8---9---", "---4V4GGCH-IQ---", "---4--VXT80-A---", "B3--VODOU-9IWS-X", "5I-H21MJS-I-85--", "---M-GR6Q-A-F---", "---TXDXV-HBMJW--", "---W-71P25T-Q--B", "-H---KLI0-Y-9-FT", "----CY-B6---T---"};
    vector<int> stringsA = {-27, 10, 12, 2, 10, -28, -11, -19, 0, -7, 12, -28, 14};
    vector<int> stringsB = {-20, 37, 43, 19, -29, -4, -12, -36, 39, -46, 34, 21, -36, -34, -16, 5, -18};
    int d = -13;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-----KAJL-B-J---", "----------------", "----------------", "----5--4----6---", "28---MIMQ-F-R23-", "---DHBHHD876L8-D", "--3DJIPOJ9F6KF-G", "-----5-D8---5---", "----------------", "---9---A5-5-E---", "-----1----------", "--2A7B-30-729-5-", "-----FGNO---C---", "-A--4NFQU1J-P---", "32-9-JGRM-D-I--4", "---48A9889-AI785", "---3-J8IK-B-H---"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> tab = {"DCFA---1-KFAG--L-", "K4C--A-G-0M-2Q-I-", "E-JC-P5C-D1J-N-D-", "JFIP-4NF----D--7-", "G50H-D-H--LHGL-B-", "A-D8---8-2CI-1-8-", "EH----Q-KL1E84-4-", "HL5P---F--K0D--O-"};
    vector<int> stringsA = {-8, -4, -7, -10, -6, -12, -7, -9};
    vector<int> stringsB = {-1, -19, 0, -11, 0, -6, 8, -16, 3, 3, -10, -19, 13, -30, -26, -15, -6, -29};
    int d = -9;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0-0---------0----", "-----------------", "0----------------", "01----0-----0----", "11-2---2--221--4-", "414--3-2---30--2-", "-----12---1------", "--1----0--1----4-", "---3-----0---3-2-", "4004--101230-4-3-", "6123---6--132----", "---------0-1---6-", "-------------0---", "-----------------", "-------------6---", "--22-0-2-20--3-3-", "4252-4-3-3441--3-", "-----------------"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> tab = {"--2G-959C-BE1H-6F--5--G08F-57-DB-AE1-1---1", "--4A6EEC0-G98F63-A4---5E3G-7G-33--11-E-95G", "--4EH-7H3E-FDB--H893--F6G7-80-6G--93-9--7D", "9-B3812C0--04E-4-C-A4-D0-H-E8-9---0--4--D-", "C-5A-BCF2-D262H22--C8-B20F1H1-G---D4----H6", "8--F04FDC-A6-7-4---E9-EG-52GE-14-45------D", "---GH-9C5HF97D0915DD--C9GF7E--81H--2-E8--C", "6-34-191DE--60----6E--4GE35---G---4C----5H", "6-D6-G63D-01894-------74-22G--2H--5--G---6", "4-20-EG65-BGDF-8E3-E4-60-9----0H--2--G---D", "D--C--A8D--921-5-2-AE-C3-33B--35--7--8--E1", "---B7HF52-6-3G---E-9B-E-5C4ED7AF-----9--D5"};
    vector<int> stringsA = {20, 17, 22, 40, 6, 33, 48, 14, 11, 47, -5, 0};
    vector<int> stringsB = {19, 35, 12, 9, -6, 4, 5, 12, 10};
    int d = -43;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x-xxxxxxxxxxxxxxxxxxx-xxxxxxxxxx3xxx-x-xxx", "x-xxxxxxxxxxxxxxxxxxx-xxxxxxxxxx-xxx-x-xxx", "x-xxxxxxxxxxxxxxxxxxx-xxxxxxxxxx-xxx-x-xxx", "x-xxxxxxxxxxxxxxxxxxx-xxxxxxxxxx-xxx-x-xxx", "x-xxxxxxxxxxxxxxxxxxx-xxxxxxxxxx-xxx-x-xxx", "x-xxxxxxxxxxxxxxxxxxx-xxxxxxxxxx-xxx-x-xxx", "x-xxxxxxxxxxxxxxxxxxx-xxxxxxxxxx-xxx-x-xxx", "x-xxxxxxxxxxxxxxxxxxx-xxxxxxxxxx-xxx-x1xxx", "x-xxxxxxxxxxxxxxxxxxx-xxxxxxxxxx-xxx-x-xxx"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> tab = {"-H40--HC6AD3-K-F", "8--3-07-HHH-68-E", "K-M4-LJCC1---O-6", "3J---N9-6-N--8-1", "-GH---H5L-L--MD0", "K----52---J-K7A3", "-B---4E-I-0--E12", "-JL--5A-0-0--E-2", "--0F----B1----G2", "I8O3-3-9H-8--I-8", "00A---1D5----C5F", "H-35D1AKODF--A--", "-6-J-JF34A---M8M", "-65N--8-KM---C5-", "--GA00G-I-F----H", "J-E2-B--D6K--JJ6", "---B-B0IE-I--G-C", "---A-LEC0O---J3C", "--6--4O-K---2F4D", "--1--LO------8-M", "--FOEEL------1HF", "0--1-EID1-G0C-O2", "0H2--B8O2----BJI", "--O--DNDJAD--6-G", "424O-41-C-2-37-D", "-2NJ--7--2--OF70", "F--3--6GG-K-386K", "O0J--JIF618--DN2", "-F-7-J3-5-D--DNK", "-0---2JGLK---90O", "-O-G--F-IG9----D", "-M-2-2--5--KG-3-", "-I---52AM0K--K-C", "-AM---N-B-----H-", "---9-C-2F----9L0", "4-NA-J6-5-A-94-9", "K2NL--7-B-8--HJF", "-M2M---0N----8-G", "AH-A-9B-17GD-B6O", "6DL2-5GJ--N--AAD", "--FE-3M0-----D5C", "HN4M-G--4-9-405L", "HAL--O-N11K-8O-2", "99-F----M-3--4-E", "---8--8-9-I--74B", "-6NN-I-N1-L---HH", "EK-M-H50J-I-G-C3", "I-F5-6N---EK-KH-"};
    vector<int> stringsA = {-35, -23, -3, 0, 3, -36, -34, -26, -11, -35, -14, -28, 1, -18, -25, -28, -7, -32, -19, -36, -18, -7, -23, -23, -20, 2, -16, -22, -24, -23, -35, -25, -23, -32, -6, -30, -39, -12, -36, -14, -22, -2, -25, -9, -23, -24, -34, -19};
    vector<int> stringsB = {-24, -35, -24, -26, -35, -31, -35, -33, -31, -27, -34, -31, -34, -32, -31, -26, -30, -25, -29, -26, -32, -33, -30};
    int d = 13;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxxMxxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxxXxxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxxDxxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx", "xxxx-xxxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> tab = {"--2--O--F-AAB3B-5-J---8-26------50-4", "O-GKM4--B1-F3-H--------6B---N---M-G-", "-KD-0E-I8--5KN1---G---1GHJ----6-L---", "1-1A5--------IG---4----8D--D--387--2", "M-CF---EG--C8NJ--EO--IDML-------M7-J", "--EE-B-6---8G-A---6-C-4445--I---2G-I", "---F77--6--OB15---8--K--7E-AN-M--3--", "--7ALK-D8----B3---KD-IK--K-A-4--L--8", "A-BJO5--O-CB-J6-J---E2-NGA--CMI-M1--", "--KKH--4---6-G-----9-A-C7M--I---6H--", "--77K6--O--K-MD--14-----ED--D-------", "M0IJB-----E8----3-D--E3-H-H-F---6-1F"};
    vector<int> stringsA = {-8, -1, -4, 14, 5, 11, 7, 5, 3, 0, 3, 8};
    vector<int> stringsB = {22, 18, 19, 19, 25, 24, 30, 27, 21, 21, 22, 26, 23, 24, 27, 24};
    int d = 44;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x-xxxx--x-xxxxx-x-x-xxxxxxxxxxxxxx-x", "x-xxxx--x-xxxxx-x-x-xxxxxxxxxxxxxx-x", "x-xxxx--x-xxxxx-x-x-xxxxxxxxxxxxxx-x", "x-xxxx--x-xxxxx-x-x-xxxxxxxxxxxxxx-x", "x-xxxx-Nx-xxxxx-x-x-xxxxxxxxxxxxxx-x", "x-xxxx--x-xxxxx-x-x-xxxxxxxxxxxxxx-x", "xUxxxx-XxExxxxx-xXxWxxxxxxxxxxxxxxTx", "x-xxxx-Yx-xxxxx-x-x-xxxxxxxxxxxxxx-x", "x-xxxx--x-xxxxx-x-x-xxxxxxxxxxxxxx-x", "x-xxxx--x-xxxxx-x-x-xxxxxxxxxxxxxx-x", "x-xxxx--x-xxxxx-x-x-xxxxxxxxxxxxxx-x", "x-xxxx-Wx-xxxxx-x-x-xxxxxxxxxxxxxx-x", "x-xxxx--x-xxxxx-x-x-xxxxxxxxxxxxxx-x", "x-xxxx--x-xxxxx-x-x-xxxxxxxxxxxxxx-x", "xPxxxx-Zx-xxxxx-xLxQxxxxxxxxxxxxxxQx", "x-xxxx--x-xxxxx-x-x-xxxxxxxxxxxxxx-x"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> tab = {"3D49533-1-H---6--9H7-40-3-D---1--", "---69EB---2-D-8----E-D----C1-3A--"};
    vector<int> stringsA = {-28, -30};
    vector<int> stringsB = {-17, -21, -34, -17, -28, -42, -44, -13, -34, -48, -28, -21, -22, -22, -13, -30, -49, -22, -20, -37, -10, -27, -45, -24, -39, -24, -10, -40, -11, -44, -40, -30, -27, -48, -38, -40, -36, -16, -32, -48, -33, -37, -10, -20, -43, -21, -35, -31, -37, -10};
    int d = 28;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---EFDD---A---G----H-E----K---B--", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "DNEJHMJ-B-R-L-G--JRM-LA-D-N9-BI--"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> tab = {"JB--AAG-ER-HOD9814A-C--82-2C1----F-O-6-4--0QQ6CBHC", "MA---0J-RJO-L6-N6R--P--5-351J---4QM--P-RLNE--K-7QD", "6I---3B-MA9------Q9----B8163J---FE-I-LKNQ-Q-9GI5I-", "ABA--5D-DR0-J0MO-1-NF--E----3-34A728OF1-----9-NPNL", "N--P5AH-6-47-M-IPI--GO-G-3-I8-JH-OQC-QJQ6-L-JA--FA", "-G---75-Q--QL--298--8--B--3-D---B6878QB---5-J8008-", "1----OD-E-2D4--IR8BKG--2-PF-B-4-C5K--1----3-4--DC-", "-9-8-5N-OFQI7M-D-D-56--8--6-M---J-CBPAHN9-2-AR-6RG", "F--M-2I-GO-G--2E-ID-P--O----OM-ALEDA-0N-F-4FM---B5", "JH---1Q-NP6-DF-0-4--E--9----N--51ICNQMA-E---KM-K0O", "A-MDDN6-B-9-N15-AAR-8--4----4E5-GHJCDAF-1-M204RIL-", "C----C5-8-NL9J-RJL-834-7--7-AH-6MKGI-I--O-6-0M-NCK", "E----1N-BQK-FR-Q-R--5--Q--0-O---A57--G--M-2-BLCLH-", "7----C--7-3-O6ONLJ--6B-R--G-K90--ALC-P-D----RQ-GJ-", "I3---5M-O-D--8--O8-65-7L8G--K-D-JIE--I-BO--MG--N5C", "68--2-3-747----LJA-M---J--8-OR--FQK--L--8-P-MN-01L", "FB---N1-4----B-9PF3-O--L-8I-3--0-M25-K--G-F-AD9-7M", "I7-E-AM-AD1-FF--AGE378K---4R5---GOA--P-JDGN9LI2N8E", "93-8AH5-L--PE--FBF-----P--6-K-G-7B2AI2-C--9-0LP22-", "--JB-G--JMH0J38B00--5--Q--3-R8-FJ-J--J------LPH-5H", "-336-FP-IKI-FM-9N9HAO--B--0-C1-KB97--7-4A-J4-CLRQ6", "10---6D-O8--F01RB1--M--I--A-4---B-B--C----OMPF--KO", "-G-7--E-K---9--N31H0A--2----C65-6-MD-P2C--I-JRI-3-", "20--O-2-4---IJ-MOJ-NEK-R-K1-6-H--FL--M28I4J--ALG6-", "K6--CP4-F4--61-RKH957--B--D-K-C-5P68-6----J7--PI4O", "4N1--F--5-F1E---R3--F--7O---O---C9HL-B-B-CO-1M--2I", "6B--797-IO-Q-A---7--0-MC----H---P73--NK-G-5052-RE-", "06--4---5-JAB--CF2-R1--D--I-LF-5-C4P--F1K---52-CCJ", "15--O-OJI-I-E5HEOK--9--KH-5-A2---Q6--MG-I-B9FC96QL", "-3JE-K6-3---6--8FKHEA--EH-6-A-O-LNM--D---G--2---51", "8B---6E-G--92N-R-R--E--O--815-I5-9HG-EP-0-8-21DRLA", "5--2--9-0F--RR-O-F--C-------B4---E5--4-87---ODQ57-", "-5-C7R7-N----GNKFK--B--7---EG----9AF-8--O40-25K16-", "H---GPP-J----HM9NI--M--Q-5--5----CM3-B------93GQ2I", "81-C8---J-CL-C--QH---I-98---Q9M--5-H-J9-I-F-E9PQ1-", "----QK9-KA152OEOG1I-4--7--F5J-HK60B9-44---D--B-97-", "A---1-8-3O3I-C--2H-9HQ-C--9-C----24--E1PM-5-F6J-DH", "3K--LEQ-L-M-A9-IG3--Q9-1-05-I-R4JB8--23-K-51HGQ2HK", "FP--8-N-A-QR6A--OR-390-36-N-NN-8RI-L-8-I-RM-0QO-RK", "HO---09-3-H--Q-P-9--H-------QR--DA-3-L8-3E-0-63-G5", "------1-GA---ELJH1OCR-MQ--3-EG--ORI--E--1---9DOB5E", "P--0I8G-C-2--JM9ICO-P--4--8-H-036-J--L-M7-6-Q98B4-"};
    vector<int> stringsA = {41, -27, 43, 8, -6, 1, 33, 3, 7, -9, 30, -14, 10, 1, 45, 36, 14, -12, -21, 37, -28, -17, 36, 42, -2, 28, 30, -18, -28, 34, -25, 6, -12, 40, 2, 8, -11, -26, -5, 41, 35, 33};
    vector<int> stringsB = {26, 5, 13, 24, 24, 2, 22, 14, 15, -4, 18, -2, -8};
    int d = -16;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxxxxxxxxxxxxxxxxxxxxFxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxCxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxCxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> tab = {"F--------D4--U--E-JQE", "---RJ-B--9CO---GRDRC-", "TH-D--TA-N2TRA--C-1FH", "-3-Q----98E----6B--9-", "-T-B--B--KG--6-9I-J-E", "88-3D--I-9M-----7-A-9", "8D-T1--O-SCN-P--N-N--", "-1-H---O-BL-----3-E--", "---4--TN-O0-----D-5-P", "---R--QI-9I----MKP-M-", "6M-4--9--FQC-P--G63-J", "C9-Q--8--D6B-P--G--DO", "O4-5T--J-C7--1--EN58-", "---A--9--GNT-L--2-MC-", "K---2-RK-GR-----C-0B-", "J--6----2I6----T7GR-B", "1C-L--KD-M5E----70S-R", "MT-6--JI-GH-----D-AD-", "-P-P--K2ULK-----T-5--", "9--C-----48-----LT---", "Q--D--P--2O-----C---I", "I2----LN-M9-7---CO18-", "-I-6--BF-KLC-K-1C0O61", "---9--L--P9--PR-A-2-9", "O2-BK-1M-P9--G-DA-5-2", "-8-S--NA-8N--2--O-E--", "-C--2-9--K9--B-96SP-1", "S--7N-----F0----9ET--", "-1-4R-S--0B8----J4--R", "FB-9--3--6F5-R----4--", "---------NF----2UA9PL", "-D-F4----C0H-C--5----", "ME-9--JT-U0Q----J----", "---S3-52-BD--L----U--", "-A-C---H-T-K----FCLI-", "G--3--D--6A-T--OA-QAT", "QH-QO-E--2P--1--1--N-", "F--1S-0--9P-----OBE-3", "2--T--K--98-----GD6I-", "-3--D-O--E1--2--NO7--", "---O-----67--O--44M-4", "RP-L---9-KMC-R--A7CRB"};
    vector<int> stringsA = {26, 32, 27, 33, 30, 33, 35, 36, 35, 35, 30, 35, 36, 32, 25, 31, 31, 26, 33, 32, 33, 36, 33, 37, 25, 27, 35, 36, 26, 30, 38, 34, 30, 29, 35, 37, 26, 29, 33, 29, 27, 32};
    vector<int> stringsB = {10, -23, -6, 7, 0, -22, -20, -15, 18, -15, -5, -6, 2, -4, -21, -26, -16, -24, -6, -3, 7, -19, 4, -18, -17, -18, 10, -18, -13, -9, -21, 14, -10, -16, 14, -10, 7, -17, 14, 3, -26, -4, 8, -24, 8, 9, 4, -20, -9};
    int d = -25;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JG-OF-LK-OJK-L-5IIOGI", "---------------------", "-8-L--K--OP-----Q-K--", "GC-K4-JD-KKA-E--IDICB", "IG-L--JC-NM--B--N6JE9", "---------------------", "---------LO----------", "---Q-----VR-----T-K--", "LG-LM-LHKLEINJLIPKMKN", "---R-----VU-----T-N--", "GG-M--L--QP-----P-L--", "DD-M--L--PP-----Q-K--", "HE-K0-IA-MK--A--L6IC9", "KG-M--M--QP--6--P-K-6", "---------------------", "---------------------", "---P-----UR-----U-G--", "---------------------", "GG-M--M--QQ-----Q-L--", "JI-O--MD-QP--9--P9LEA", "HC-L5-KF-LLC-I--IEMCC", "---------RO-----P----", "GE-M--LF-LM6-C--KAKDD", "---------SN-----R----", "---M-----SQ-----U----", "---------SR-----S----", "LH-OG-MN-PKL-M-9KOOHN", "---N-----TR-----U----", "---R-----TT-----S-M--", "---N--H--QR-----Q-L--", "---------------------", "KG-ME-JK-MGH-K-9JLKEK", "---O--B--RQ-----P-L--", "---R-----VS-----U-J--", "KI-NI-JK-NHH4L-IKLLIK", "---O--E--RR-----Q-L--", "ID-L6-LG-LLD-J-2JFOCC", "---O-----UR-----U----", "LJ-NK-MK3OIJFL-LNMOKL", "HF-L--LD-MM6-9--K8JEC", "---------------------", "KH-N--MA-RP--8--Q9M-A", "JE-M9-KI-LKC-K-5IEOED", "---------------------", "JE-OC-KJ0MLD-K-6JFPFG", "JE-OC-KJ-OKH-L-5JGOFH", "IF-N3-LF-LM7-H--KBKFD", "---------NP-----M----", "-B-O--I--RR-----S-M--"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> tab = {"-429--40--23B--D3-AB-58-A-0----3-8", "-1-1--92---57-AC9-66-A--A------832", "83-2-4DD-B-A--906-C---DAC------B-C", "-8-B--89CC44--941-77-83-459---234B", "-2----37---1----C-D-679-34-6---A--", "87----14D-7B--1-1-5--A-3D-5----2-C", "-0-1--D9---A----B8C-----A-6------C", "-55-1-174-732-971-62----155-1--3-1", "22----62---A9-B63-38-5---3D-3-56-A", "DC-4---8-B-C--1-02B-B1---59------7", "-2----C0---95-4-3-6A45--997---BA-5", "-6-43-67A6-5--4---5-7C-6D-9---494D", "-C----69-7-B---9-AB4--2-12----86-0", "-3---23----4B-72B----7--134---D7-B", "-6-2--0DC--98-7-D8-033122-D----498", "-6-8A-47A-55--CC8-7B799-C80-2-3919", "-4-1-5DA---65-3-D94--5--078---37-C", "-948--80-A-95---6-9----65-9---B089", "79-C3-54-A-6C-B-7-7C-0--4-A----C69", "-8-4-8307--DB-C-4-52D0-B-A3---4967", "-D97--21--4D--0-0-24-6-3325B---4-9", "-5-6--D----97-1-B-76-1-27A2---6138", "-2-B-045---9--8-6-A--A94-B--0-1B-6", "-5-3--ABB8-0--A4--59-0---5----89-A", "B0----A4---7-----32-0D847D5-1--2-7", "B2----83B--1D-2B9-84944-5D3---A96-", "-0-8--39-8-37-B46-C--6-C8--0---D--", "-86B--0DA--B2-9-759--9--D97--2-3-2", "-B--5-13---B--4---8--0-32-7----1-2", "-79--559---BC--D4B43----AC8----C-5", "-7D---50--84--2-2DA6-71-3-2---0B-C", "A4-5--58---64-A-B-B--A9-8-D1--A6-D", "--4--8B35--81-8-9-7--62-0------9-1", "-3-A--AD---85-B-0-51--D3D47---7B46"};
    vector<int> stringsA = {-5, 23, 24, 23, -3, 18, -4, 15, -15, 5, 7, 13, 27, -3, 22, -18, 15, -11, -6, 23, -8, 1, 17, -11, -14, -5, 12, 24, -1, -1, 2, -2, -6, 28};
    vector<int> stringsB = {1, -5, 20, -2, 17, 0, -1, 23, 13, 16, 3, 12, 20, -6, 13, 23, 21, 7};
    int d = 16;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-x-x--xx---xx-x6x-xH1x95xxx-2-Hx-x", "-x-x--xx---xx-x-x-xE-x--xxx---6x-x", "2x-x-0xxQF-xx-xIxBxL7xMKxxx---ExMx", "-x-x--xx---xx-x-x-xE-x--xxx---8x-x", "0x0x-1xxMF-xx-xFx9xL3xMKxxx2--HxGx", "-x-x--xx---xx-x-x-xF-x7-xxx-0-Gx-x", "-x-x--xx---xx-x-x-xF-x--xxx---Ex0x", "JxDx9LxxRSIxx-xSxNxNIxURxxx-9-SxOx", "-x0x--xx30-xx-x9x-xB-x66xxx---Dx3x", "-x-x--xxJ4-xx-xCx7xH3x7Lxxx3--Ix4x", "0x-x--xx--0xx-x6x2xJ2x98xxx-1-Ix-x", "-x-x--xx3-0xx-x3x-xB-x76xxx---Cx1x", "4x4x0DxxRG6xx-xKxKxPCxMKxxx---LxNx", "-x-x--xx---xx-x-x-xF-x--xxx----x-x", "0x1x02xx920xx-xBx7xK-x9Mxxx2--Kx4x", "PxNx9OxxSSKxx-xTxUxOTxYRxxx5AJSxPx", "DxAx-FxxTTHxx-xMxOxOFxOQxxx---MxOx", "-x2x1-xx1--xx-x3x-xF-x84xxx---Gx-x"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> tab = {"JD-B-A7-5--GA2J1D8DM71-----HB--2-24--3", "J--M3M4-2--1--5-M3-285-6--075--F-3A1-E", "EI-D-2M-3---BFCG1--ED--E-2351-----IE1E", "2-6H--K-C--1-7159--2E0-6-E-3J-78-0B--M", "-6-0--7----48K-EI4-5L-----6-G--E-H1F-9", "4E-2-F-F---LB1--2-1B0--E---ME-63-EL6-5", "JHFM-71--5-5G-D-I-BJ9M-L--0CK--1G2-LEE", "G7-M-4M-1-----2-8-H0M1-0--K8M-8F-J---H", "IB-45-7----KAK86G-F6F6-9----8-L----4-E", "KDI-A-5-7--631-2-JJ5BA-9----8----E--95", "0I-E-5A-M--0361-95K66M7I----K-D4E--C-4", "0GB-H-2----J-4F-6JMIFI-L---4L--8E186-K", "D-BJ--G-9--CG8--B-J3-B-9---5C--8-D--M-", "29-7--B-8--6-B-4--AD8M-I--L-5--7-HCE-7"};
    vector<int> stringsA = {26, 43, 33, 33, 43, 38, 42, 26, 29, 24, 36, 29, 41, 38};
    vector<int> stringsB = {17, -29, -38, 30, -1, 40, 13, -19, -29, 16};
    int d = -3;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxMxExx-x--xxxxxxQxxxx-x--Qxx-OxNxxxEx", "xx-x-xx-x--xxxxxx-xxxx-x---xx--x-xxx-x", "xx-x-xx-x--xxxxxx-xxxx-x---xx--x-xxx-x", "xxJxDxx-x--xxxxxxExxxx-x-2Gxx-GxHxxxNx", "xx-x-xx-x--xxxxxxWxxxx-x--Yxx--x-xxx-x", "xxEx3xxAx4-xxxxxx5xxxx0x-4Gxx-7xFxxxKx", "xxNx-xx-x--xxxxxxPxxxx-x--Qxx-Ix-xxx-x", "xx-x-xx-x--xxxxxx-xxxx-x---xx--x-xxx-x", "xx-x-xx-x--xxxxxx-xxxx-x---xx--x-xxx-x", "xxLxFxx-x--xxxxxxOxxxx-x--Oxx-Lx-xxxEx"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> tab = {"-OA2M--JJ-85-6H-F3-KA5-C----AILMM-N--8-I-JN-------", "-9LF9--C5-2E-1-4-4--OD9F52H--KNL---P5I-L--8---0---", "--K6D-4-A-B4-A---O-25C-NP4--C-KN8G9--K---5A-62L---", "--6---DM--C-FC--D---FPBD-C9B2L2CPBO8-E----A-IFF--C", "-8KP---8---ND9-2IO--3H-6--HB3-M9I----6---O--M----K", "KIG0----M1H0-H------O2-L----P-CC--N-1--N--J--LO--D", "--K2HP--F-1F-PE--9-01M--4-K-A-M2OG7--M---L---P----", "-------1A-FJOC---A--B4FD--NPH92JF-A--A-F--5---B---", "-0----P-8-AH---3E-C-D5-3I57-8-6FD---9M---2---G---F", "-P7PG--30-8K-2--4M--I2-P--K---FDH-8--J---DM--J----", "--C----0H-N1--L--J--2D-KABH---L75-ICO92--F-------8", "------DN--3------G-21L-53J03M-J4D-32---J--H---8--M", "-7H---0B17AMO-------7FOD9B3---0FP-B8------5-D-N---", "---1-P--0-B-HK--J---LG-N--A-3-NAJ09--5-1-FE-1-F---", "--C--BK-M-5A-H--KP-9-I-1--3-E-F32-3--EF1L-4--M---4", "EIIG6-G-PK9C--P----A8D-3--O-B-4FL----NCI--C------1", "--1--7-3--J---------IJGD1D7-0-6H3-DH7I-F-E--4-D--B", "-O68-P--O-PJ-9H-----GN-4--936-D8M9-030AA-4E---6---", "481P--N-I-NBI5---L--8L-FF-9-F-46LEB-6--M--B-44----", "-PG---E2K-PK--7-----N2-M-58-O-84-8---O-O--4---7---", "-G---N8-F-B-----P---3I-N-1MI--PE71L06--FBA---6M---", "-O5----P3-79--E-7--F19--5-K2--OOMN3-D--K-94-----K-", "-PL----M---6-83-----494G8N3-5-83--F2-J-1--A---9L-0", "----P--C6K-BO------AE7-I-IE1H-67----CN-P-96-37M-3A", "6FI----5--1--K--7---D0HA-B6-O-MKE-K--7-G--7-JK---0", "--------C----N---L--OCG41-01I-FH47M-IG---PN------7", "-7OD--L-I--K--A4----8J--L10-9-ALLLP-DB-------8----", "---K--I03-ML6N-2I7--45-D--1IP-LMIO0-34-K-CP--5---3", "-J--B-6-9-6-----KB-1F4-BL-1-0-7HH-N-3M------DH1--B", "--1---2D0--9-O---K--68-B-21-A-J4N-H-H7-9--D-------"};
    vector<int> stringsA = {10, 10, 10, 10, 11, 11, 11, 11, 11, 10, 9, 11, 11, 10, 11, 10, 9, 11, 11, 9, 10, 9, 11, 11, 10, 11, 10, 9, 9, 11};
    vector<int> stringsB = {21, 40, 23, 32, 40, 38, 26, 24, 24, 39, 29, 40, 31, 38, 21, 30, 18, 22, 37, 33, 17, 29, 19, 18, 32, 26, 38, 40, 40, 21, 35, 31, 40, 34, 39, 35, 20, 26, 39, 39, 24, 22, 35};
    int d = 42;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-xxxxxxxx-xxxxx-xx--xxxxxxxxx-x-x-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx-Fxxxxxxxxx-xXxRxxOx-x-xx-Ixx--N", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-x-x-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xTx-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxxDxx-Mxxxxxxxxx-xXxSxxPx-x-xx-Oxx--O", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xUx-xxGx-x-xx--xx--F", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xTx-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-x-x-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-x-x-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xTxKxxJx-x-xx-Exx--K", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xSx-xx-x-x-xx--xx---", "HxxxxxxxxExxxxxFxx-MxxxxxxxxxMxXxTxxPxDx-xx-Qxx--Q", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xSx-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xUxExxIx-x-xx--xx--G", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-x-x-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xSx-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-x-x-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-x-x-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xUx-xxHx-x-xx--xx--G", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xTx-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-x-x-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xSx-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-x-x-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-x-x-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xUx-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xUx-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xUxFxxJx-x-xx--xx--J", "IxxxxxxxxKxxxxxGxx-NxxxxxxxxxUxYxXxxUxNx-xx-Uxx--S", "QxxxxxxxxWxxxxxGxx-QxxxxxxxxxWxZxYxxVxOxNxx-Vxx-GX", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-x-x-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xUx-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xTx-xx-x-x-xx--xx---", "XxxxxxxxxXxxxxxGxxPWxxxxxxxxxXxZxZxxZxSxYxx-ZxxYVZ", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xUx-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx-Dxxxxxxxxx-xVxLxxJx-x-xx-Gxx--L", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xUx-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-x-x-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xUx-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx-Exxxxxxxxx-xXxNxxKx-x-xx-Hxx--N", "-xxxxxxxx-xxxxx-xx-Fxxxxxxxxx-xXxOxxNx-x-xx-Ixx--N", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xVx-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-x-x-xx-x-x-xx--xx---", "-xxxxxxxx-xxxxx-xx--xxxxxxxxx-xVx-xxJx-x-xx--xx--H"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> tab = {"48-D8FB--AB9-", "-E--550H-HI6-", "-7--58-5-7F--", "A0A136-40-F5-", "-E-22C52---D-", "F86A6-H5-6C6-", "-F-99G-7---7-", "D91-0DFF---0-", "15---------9-", "-02-F--E---F-", "3062BI-F4E8G-", "B77-H-0--44--"};
    vector<int> stringsA = {-22, -37, 19, -2, 17, -18, 2, -32, -15, 1, -36, -12};
    vector<int> stringsB = {-49, -41, -41, -12, 30, -15, -8, -36, -16, -2, 13, 30, 21, -49, -28, -4, -22, 26, -12, -25, -35, 17, 25, 12, 3, -23, -12, -9, 3, -15, 13, 15};
    int d = 45;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-x--xxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "ExIQxxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "NxNYxxxxDxxx-", "6x-Fxxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "GxEIxxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "9x--xxxx-xxx-", "6x8Cxxxx-xxx-", "0x--xxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "-x--xxxx-xxx-", "-x-8xxxx-xxx-", "-x--xxxx-xxx-", "-x1-xxxx0xxx-", "-x0-xxxx-xxx-"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> tab = {"9---IH2--5D-3------5-F0----C", "-4--A022-94--E-IB---B9BHA--4", "-5-F-22EH---C-----A-CF-H7--5", "-D-D6CF-F-7-H--2-0--3A1--H-F", "-F1H5G0F5-C----GD-H-0H--99-8", "GCA3217I---F4-7--A-4F4--C1-6", "-843-C3--G--0-26--67----A---", "-GG8AGHDG----H-0-1-83-C-1-7C", "-00-H09A-88-7--8----D7--0F-4", "---88D1--IA-HD-I33--H60--9--", "-D2F4ECG-58--3-9--E---G---DA", "H384ED6DE4GA---F--2732---B-5", "-C-849B8--4----E-----7B-I--3", "HH-DG2I--9-----A---764BGF--B", "-1-8D3CGF---G--3----2-B4-8-G", "-D0B-EDA4----6-2-E2-C56-A8-5", "E89--5AB4-F-1-----0-I-EBBC-5", "-4D--G04-6E--------A0B--49-A", "-GC9-E76C-H-2--C-8I---D-C7-4", "BG--21-D1H--25-2-----E--E--E", "-8-3EB6-FC-G1----BF---H----3", "DG0715-F7C--D--C3-I-A---7-24"};
    vector<int> stringsA = {35, 29, 28, 21, 20, 38, 27, 23, 30, 19, 38, 20, 25, 38, 35, 37, 27, 21, 30, 31, 35, 36};
    vector<int> stringsB = {8, -3, 26, 40, 18, 19, 33, 38, 33, 17, 25, 26, 39, -2, 44, 14, 29, 2, 32, 26, 40, 38, 25, 16, 8, 20, 15, 35, 33, -3, 26, 1, 2, 26, 41, 35, 17, 28, 43, 15};
    int d = -32;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2xxxxxxxxxx-x3-xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "3xxxxxxxxxx0x--xxxxxxxx-xx0x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx0x2-xxxxxxxx-xx0x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx0xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "3xxxxxxxxxx-x6-xxxxxxxx4xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "4xxxxxxxxxx-x35xxxxxxxx5xx-x", "3xxxxxxxxxx1x--xxxxxxxx2xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x-0xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x3-xxxxxxxx-xx-x", "7xxxxxxxxxx-x7-xxxxxxxx5xx4x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "0xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x", "-xxxxxxxxxx-x--xxxxxxxx-xx-x"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> tab = {"--6D-H--2-A-E-C---4-IH6-6-----F-2-9B----"};
    vector<int> stringsA = {40};
    vector<int> stringsB = {-18, -17, -30, -45, -32, -27, -44, -16, -43, -38, -44, -15, -21, -31, -45, -39, -24, -22, -44};
    int d = -25;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x--W-x-x-x---Y-xxx-x-----x-W-xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----", "--xx-x----x-x-x-----xxx-x-----x---xx----"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> tab = {"1-0-122--0----312", "--03-00-03--1-13-", "3---033--2----320", "1---120--1-2--212", "3-1-23---3----202", "--3-031--2----321", "01--211--2-332-3-", "012-220-----2--3-", "3-2--02-3----011-", "3-0--30-03---2-21", "3-11-03--2-----10", "-----30-33--1--0-", "2----02--112-2232", "----120-30-00-101", "0-1---3---01-3-13", "3-1-332--3---3-2-", "0----01-000---02-", "0-0-332--3--1231-", "3-2-03--011013210", "0-2203--110-30103", "3-03-00-0-----13-", "1-0-100--2---303-", "0----13-----2133-", "3-2--10--02---21-"};
    vector<int> stringsA = {13, 17, 18, 14, 17, 22, 13, 23, 24, 18, 13, 12, 12, 24, 21, 18, 24, 24, 13, 12, 13, 13, 19, 15};
    vector<int> stringsB = {3, -6, 16, 18, -6, 12, 7, -3, 19, -4, 21, -4, 11, 6, 13, -5, 1, 13, 7, 14, -3, 4, -3, 15, 10, 9, 15, -6};
    int d = 12;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"N----ON--M-----O-", "-----------------", "J-KAILK-EKACHHLLF", "I-J8JJJ-IIBAIIJJH", "-----------------", "J-H-EKK--F---EHKE", "K-I--LK--K----JL-", "-----S---------T-", "H7I9IJJ-KHEFIHIJH", "---------------S-", "IFHBIIH-IIFFGHIHG", "-----S---------S-", "J-G-FLJ--G---DHLE", "K-J--LK--K----JM-", "J-G-EKK-CJ--CEHJE", "-----------------", "O----PO--O-----Q-", "K-H-EKL-CJ--DFILE", "L-I--LK--K----JL-", "J-G-GJL-BI--DEJKE", "-----SR--------T-", "M----NM--L----LO-", "R----SS--------T-", "I-G-GLK-CI9ADHJLF", "I-G-FJJ--H----IMF", "J-H-FJJ--I----IK-", "I-J-ILL-EIABFHLLG", "-----------------"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> tab = {"38F--18B9E-29---", "9733---B82C-----", "-5------91D-D---", "C-E--6-35--29---", "E-F8-2-E5-44A9--", "DEF0--184-9-2---", "A9F-8-2AA4--8---", "32E08--5A-------", "195--F75FA--7---", "F75---46D---D---", "F-F-A4ADF2E0D---", "4D-F--5D49--0---", "-D5-8-16D--A1---", "9-389-CA4---9---", "-47----A9D-F39--", "FBB40A-8E1------", "FC-A--F98--A6---", "-91D--6E7B88D--3", "3-F-6-A76-C4----"};
    vector<int> stringsA = {-5, 31, 30, -16, 7, 24, 33, 4, -1, -5, 32, -33, 20, 35, 0, 11, 9, -24, 6};
    vector<int> stringsB = {12, -15, 0, -17, 6, -3, 12, -8};
    int d = 18;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxxxxxxxxxxxF--", "xxxxxxxxxxxxx---", "xxxxxxxxxxxxx---", "xxxxxxxxxxxxx---", "xxxxxxxxxxxxx---", "xxxxxxxxxxxxx--0", "xxxxxxxxxxxxxM--", "xxxxxxxxxxxxx---"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> tab = {"-00-00-433-0--0-55332", "403200-025----3-55-21", "0513-3-000----0221-24", "-155-0-422-3-00041--4", "---520-452-0-21401-53", "455-05-425---31-30-30", "42510--321---04-5--04", "-43-4--14------135--1", "4-5-45-332----52222-1", "2-204--245---05013544", "-5122--302---03041-43", "003551-051----413-4-0", "1343-5-545---30-145-4", "3-3344-340------45-30", "2-15-2-411-5-1-43-33-", "251-04-3-3-5--4-25033", "0-3151-344----4-4--5-", "2-5-14-313---43-53--5"};
    vector<int> stringsA = {3, -17, -23, -31, -10, -12, -2, -32, -2, -28, -12, 5, -1, 4, -16, 1, -7, -10};
    vector<int> stringsB = {30, 19, 13, 8, 17, 37, 12, -7, 23, -8, 43, 45, 9};
    int d = 40;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CCx9xx-xxx-0-8x4xxB8x", "LExFxx-xxx---Dx9xx8Gx", "JAxGxx-xxx---Fx-xx-Ix", "I2x6xx-xxx---1x1xx-Bx", "GGxDxx-xxx---Ex2xx0Fx", "66x5xx-xxx---5x3xx77x", "KAxDxx-xxx-0-Dx0xx-Fx", "O-xJxx-xxx----x-xx-Nx", "JHxCxx-xxx-6-Bx5xxHFx", "M-x-xx-xxx----x-xx--x", "22x4xx-xxx-0--x-xx33x", "21x5xx-xxx-1--x1xx42x", "I3xBxx-xxx---3x0xx-Gx"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> tab = {"-8-875A-18--2---4--115A8-8----50-5--5A-", "--3141A-7---B--54--76-90-17---3---0-A26", "---45-0-82------3--7--01-B----5B--13-7-", "-3-6-78-33--3-6-4--2-9-2-0----31-----7-", "----25---1----1307-3B960-89---72----720", "1-4519B--6------70-53-60-11----5----4A-", "0--42A3-B2-8----9--62-74-1A6--1----33--", "--4-844-48-1---6A--3--B--8----29--1--6-", "1B4240-3-9---6-3A--28534-B0----3-----5-", "---82-5-----6---B4-6A-8--81---72-----64", "8-1-80A----09--88--A-A52-5-3--A2----A5-", "8B0--90-47--B--9---1A8A6-5464--0----1A6", "--4B113------2945--5---2-7--------8290-", "-478-9-7-4---10-7--78-AA-2----5--0-824-", "7-49-A6-34-1--303--023B2-2----57-6----9", "-3----5--37-----81-27380-9-1--9B----68-", "---08---2---8-2-9--53-B1-3-----3----B94", "0-9BA-8-29--32--A--28B809A5---96----B42", "--7A9B82---07---4----7-8-0--0-9---A-36-", "-613-11------B8-6--08-60-32----4----B42", "-8AABA6--6----1-9---9-43-72----B-7--95-", "-A-2779--A--2---6---4553-26---23--2-2A-", "---35B--62--0-606A-9--18-8-----A-92-89-", "--1B6--467--21-AB--1-A79-6-----------6-", "--7-515--4--4---91-44-82-512-------0883", "--B7677---------3--0-52--89-7--7-6--88-", "69--074-95-9----3--3--BA13-0--22-B---7-", "--16B73--4----5372-04020-2----70--B-082", "---787--1B--5A--4--6170A-A--9--5-0--34-"};
    vector<int> stringsA = {13, 1, 0, 0, 13, 16, 12, 12, 3, 9, 18, 10, 26, 20, 2, 14, 19, 13, 13, 0, 8, 20, 15, -1, 9, 9, 1, 17, 19};
    vector<int> stringsB = {13, 19, 11, 6, 19, 18, 20, 37, 21, 19, 22, 38, 33, 34, 35, 23, 38, 18, 20, 32, 27, 12, 7};
    int d = 42;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--xxxxx--x----x-x--xxxxx-x----xx--x-xx-", "--xxxxx--x----x-x--xxxxx-x----xx--x-xx-", "--xxxxx--x----x-x--xxxxx-x----xx--x-xx-", "--xxxxx--x----x-x--xxxxx-x----xx--x-xx-", "--xxxxx--x----x-x--xxxxx-x----xx--x-xx-", "--xxxxx--x----x-x--xxxxx-x----xx--x-xx-", "--xxxxx-Rx--P-x-x--xxxxx-xO---xx--x-xx-", "MQxxxxxBQx-ITQxPxO-xxxxx-xRLJ-xx-OxKxxL", "--xxxxx-Tx--Y-xNx--xxxxx-xT---xx--x-xx-", "--xxxxx-Qx--O-x-x--xxxxx-x----xx--x-xx-", "-Nxxxxx-Sx--Z-xQx--xxxxx-xU---xx--x-xxM", "MSxxxxxJPx-MVWxUxO-xxxxx6xQMK-xx-OxWxxN", "IPxxxxx-Ox-CTIxPxM-xxxxx-xQA--xx-Ox-xxM", "KPxxxxx-Ox-ITJxQxN-xxxxx-xQJ--xx-NxBxxL", "KSxxxxxARx-KTMxQxN-xxxxx-xPMK-xx-PxGxxM", "-Pxxxxx-Tx--Y-xPx--xxxxx-xT---xx--x-xxQ", "UYxxxxxVRxPOVXxYxT-xxxxxQxUPW-xx-SxWxxR", "--xxxxx--x----x-x--xxxxx-x----xx--x-xx-", "--xxxxx-Rx--Y-x-x--xxxxx-xP---xx--x-xx-", "HOxxxxx-Ox--QAxPxK-xxxxx-xO---xx-Mx-xxM", "JPxxxxx-Tx--U-xOx--xxxxx-xP---xx-Nx-xxQ", "--xxxxx--x----x-x--xxxxx-x----xx--x-xx-", "--xxxxx--x----x-x--xxxxx-x----xx--x-xx-"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> tab = {"-B8---7-9-30", "-C55-75--D--", "-BC8-55-90F2", "133-G-8-7-9-", "-BD---H---6-", "77A-188-9-45", "---A84C---6-", "-36-8H------", "-F--8-19-1FG", "5440D1-4--15", "FA7G-45--0C-", "5H-AH3A--27-", "-0--HD2GC---", "-0--9DG---69", "28G-C1C--HF-", "16--E4D---A-", "-6F-1078-282", "-4F-ED----1G"};
    vector<int> stringsA = {12, 4, -4, -17, 1, 11, 11, 9, -3, -8, 7, -3, -16, -3, 4, 10, -10, 1};
    vector<int> stringsB = {7, -7, 4, 17, 1, 10, 0, 7, -20, -21, -23, 13, -1, -6, 3, 8, 4, -21, 15, -11, 18, -21, -15, -24, 1, 13, -5};
    int d = -14;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxx---x-----", "xxx0-3x--00-", "xxx---x---1-", "xxx---x-----", "xxx-0-x---0-", "xxx-02x-----", "xxx-00x---1-", "xxx0--x-00--", "xxx-B6x42484", "xxx---x-----", "xxx10-x--111", "xxx---x-----", "xxx--1x----0", "xxx--3x---3-", "xxx-0-x--020", "xxx1--x-----", "xxx-11x-2-2-", "xxx-60x---0-", "xxx---x-----", "xxx132x32-13", "xxx---x-----", "xxx-84x3-354", "xxx-62x1-04-", "xxx--0x-0---", "xxx-10x---21", "xxx---x-----", "xxx032x---33"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> tab = {"01100100--1----11--0--0-1----11", "-1-0--01-0-0-----011-01-0----10", "1010-----0----00-000--0-0--1-10", "-0011--0-0-----1-10---1--0-11--", "010-----1------11----1--1--100-", "-100---0-00-1------1-1--1--1--1", "1-00----0--1------0---1-0--0--0", "11111-10-0--1------1--0-10----0", "0-11--------0-----00-1-----0--0", "0-11-001-0111----0-0--1-0----01", "0101--0--1-------1----1-------0", "1-10-00---1-----0-1---0-0--1-11", "--10-0-1-0--------11-0--1--0--1", "0100--00---------000--0-1--011-", "-0010---11-------111-01-00-1---", "-0001-0--0110----00---0----0--1", "0-10----------0--00--00-0--0-11", "1000-1---10--1---1-0-1110--1-0-", "-100-0-1-------0--10----1--0-01", "0-110-------0--0-1-1-0--0--1-10", "--11---1-01------1---1--1--1-01", "--11--1--0--1----10--1-------10", "1100-----10--0--10-1----0--0---", "--101-----0-1-0---0---0-0----10", "1-10------1----0---1-1000----01", "01-0--10-1-1------1-----00--0-1", "-100--1--111--1---0--10------00", "1011-10--0---------1--11-------", "--00-1-----0---1-0----0------0-", "1-11------0-------01-------0-10", "0110---1-------1--00--0-1------", "10-1-0---0-------00---1----1-01", "0-00-101-10------00--00----1-11", "0011--01----1----00--1--00-0---", "1010-10-0-10----0001-0---1---10", "1-01--00000-------00----1--1-00"};
    vector<int> stringsA = {-8, -17, 7, 9, 7, -22, -20, -19, -7, -23, -12, -20, -4, 10, -20, 8, 7, -14, 15, -20, 5, 15, 9, 10, 17, -11, -19, -6, -15, -23, -13, -10, 8, -18, -22, -5};
    vector<int> stringsB = {12, 23, 38, 44, 33, 32, 17, 15};
    int d = 30;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxxxxxxxxxxx-0xxxxx-xx-xx-x-xx", "xxxxxxxxxxxxx--xxxxx-xx2xx-x-xx", "xxxxxxxxxxxxx12xxxxx-xx-xx-x3xx", "xxxxxxxxxxxxx--xxxxx-xx3xx-x-xx", "xxxxxxxxxxxxx-4xxxxx-xx-xx-x7xx", "xxxxxxxxxxxxx-5xxxxx-xx-xx-x5xx", "xxxxxxxxxxxxx0-xxxxx-xx0xx-x2xx", "xxxxxxxxxxxxx--xxxxx-xx-xx-x-xx"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> tab = {"4-9-5-3--287---31-90--1-6", "3-4---7----3----59-1096-2", "558---0--5-9-8-60---471-5", "---7--0----3------9--5331", "--2---6--8-85--7--6-0-6--", "8-7---55---2---25694-760-", "5-0---7-49-1-3-84---81442", "1-68--1-31-4---517-4-5710", "2--4--5--107-4-49-56010-9", "0-63--9-918675-5-5-9313-3", "------9--2-3---24--2282-6", "3-72--50-9-001-78----0--1", "96535-8--9-----24-6---4-8", "3-8-2----0-69--6416-0-8-8", "-86-3-23-3-5---33-18--9-1", "-1-1-------0-4-9---7-0--0", "697---7---26-3-9-9131-478", "590-4-8--6-----2-500-63-2", "9--72-3--009---57-4-562-1", "0-548-9--227-8-076--4-1-2", "-34-3-3----3---584--0-571", "8-677-0--1-0---195-0-44-1", "--65--14-8-84-678086--8-6", "5-594-1----6---6431--11-4", "35----06-4-0----------030", "4310-----0-472-571--421-4", "2-1---9--9---2--4-----7-3", "-926--0---89---53----3340", "7-27--0-6---26-89--2864-1", "596------618---2093---1-9", "--0---3--4-492-802-0094-6", "0-8---30---1-5-84--0736-3", "-----507---6---30-81649-7", "8--08-8--4-1---16-17083-7", "8-8---2--------69-09-8937", "4-0---0--8-9--40-0--27418", "------2--4-50--43-15-95-0", "1-463-2--4-1---30913--8-1", "0-2---9---34-8-23--2--7-0", "0--76-9--0-6---21701-59-4", "--1---67-6-2------5--2518", "5--8--3--2-6-1-0-59--67-9", "1-3----7---472-980-8420-7", "7-9-4-3--6---0-62-74-9431", "0-6-4-7----9-2-36-1-711-9", "5-54--3--0---1-715---36-1"};
    vector<int> stringsA = {33, 13, 30, -9, 18, 46, 0, 17, -2, -2, -9, 35, 11, 45, 6, 26, 10, -11, 4, 14, -10, 21, 7, 21, -6, 5, 34, 43, 43, -4, 18, -10, 37, 25, 36, 43, 8, 42, -3, 28, 13, -7, -6, -7, 33, 29};
    vector<int> stringsB = {5, -12, -22, -12, 1, -16, -16, -20, -18, -2, 1, 2, -1, -14, -4};
    int d = -20;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxxxHxxOxxxTxMxxxxxxxxxx", "xxxxx-xx-xxx3x-xxxxxxxxxx", "xxxxx-xx-xxx-x-xxxxxxxxxx", "xxxxx-xx-xxx4x5xxxxxxxxxx", "xxxxx-xx-xxx6x-xxxxxxxxxx", "xxxxx-xx-xxx-x-xxxxxxxxxx", "xxxxx-xx0xxx1x-xxxxxxxxxx", "xxxxx-xx-xxx1x-xxxxxxxxxx", "xxxxx-xx-xxx-x-xxxxxxxxxx", "xxxxx-xx-xxx-x-xxxxxxxxxx", "xxxxx-xx-xxxEx-xxxxxxxxxx", "xxxxx-xx-xxxNx-xxxxxxxxxx", "xxxxx-xx1xxx4x-xxxxxxxxxx", "xxxxx-xx1xxx2x-xxxxxxxxxx", "xxxxx-xx-xxx-x-xxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> tab = {"E--OHKP--FQUK--U-I-P-ENN--U-2L-S-K0--JJ-R---", "1--T-4-1-E8H---L-BCSQA-G--0E9--PB0--P--M-U-9", "A-J------U-K---M-NJ0FNF----8-5-CJ1---5-PK-PO", "57-IL--F-DL1--I9-1T--32LF-J-G-DI45-C--A----9", "S--R5S-2-8L3--AP-BGG--L-Q-GF-5-U-E-B5-C-----", "N---R-S----G---E-8E----G--1R3MUI-CN-C------5", "--M-N6---J-NI--9-8HP-F----5-LHP62--K--8F-G-4", "M--LIMF---PS--HD-RLB-BA46-A----BAO-L5T-4G---", "----C----7E----D-A8--9E6M-FQ-8--GGS---HD---0", "---3-EF3--OG--OC-865-0BC6--9I--I-IF4--O-LAC-", "C-1--D---LO4B-6I--41KNK4--PIDE-B-20-CF-P9---", "I-RJ8U-E-CDO--BPB7QO------HCJ--5-S--N-P--H--", "---3LJ-6L676---M-U4G-4-7--L-I--5-LJ7D-K-----", "---T7-RU-I----RF--KNNUEE--F1-----Q--U-L9---B", "H---4J-P-8-3---G-QAE-3-2--4-M--CEF----H--B--"};
    vector<int> stringsA = {-20, 5, -12, -7, -10, 0, -2, -28, 8, -14, 13, -30, 11, -20, 13};
    vector<int> stringsB = {3, -29, 8, 5, -22, -7, -3, 1, -31, -5, -31, -26, -29, -23, -3, -5, 7, 6, -12, -16, -12, -24, -12, -6, -18, 4, -10, -17, -18, -12, -7, -2, -1, -24, -1, -17, 9, -15, -18, -10, -18, -2, -24, -30, -6};
    int d = 32;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "xNxxxxxxxxxxx-xx4xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx", "x-xxxxxxxxxxx-xx-xxxxxxxx-xxxxxxxxxxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> tab = {"06-0-0-7-3---24-1563-54--107-7-1---31753--6366", "-753-72161--------771412----4663---01060--5-52", "7-12-3--12-0-03---043-----6-40-6---1260--0--45", "---2--7264----0-0-225-10-5170-3--3--2-64-2-5-7", "-733--6--3----06401-274732247-60-3-14-1--171-6", "60-4-37---0-----113-06----6732-0-6-05462-51403", "--24-2-070----34-52-5--0----2-3--1-61327--2--6", "---0-0-5--------2-0-136--66-6--3---34156-060--", "1702-36-----7-----524-75--217005---6125562-764", "-3-5-0-023-0--0---5--364--011-36-4-26532--2363", "-721--36-2-4--7---7--7---1-61-5----5-601--27-1", "-156--3-42----76-30-4427---17546-3-5752---25--", "2616-33-3---0-0---0-6-51--214132-0--1117-2-401", "-356--2310--5--7--223566-73--236---11-142-----", "4425-7--00-----6-16-614---0-0----0-07252-237--", "-067-33--76---12--4-7-25-6-7620----14-36-----5", "-4-0----61-3--166-1-4-73-1--3-65---11-54-700-2", "7-53-1707---------2-2-1---616-4--6--3056-7-43-", "0-37-3-5-0-4------2-7064-3-0-300-----46--146--", "256---2-07------016-5-7--1420--4-5-57033--603-", "2202--3--3----7---4-0--1--4-5-4----4366526-607", "-104-----7-027----1---3--7--67-1----4026-7----", "-7-7--25-4------566-4-76--0-6500----00755252-0", "-4------------1---6-2----4--5147---73534--44--", "-30--47156--------017671-13-7--5-54-0042----12", "0246-5-3-4----6-5-6-4737-016-7-0----0131--1---", "-401-1-2-7----3---7-4-4-------1-----7150-327-7", "-501-6---7-55-1---5-7-4--5--2-1----42242---2--", "--44-1-245---32-4-0-43-2--224----32-5-17--7541", "1311---5-4---713--6-6464-5062-5--7-42666-2-723", "2-5--75231-7--4---3-013--55-6-45---750256-----", "1516--3-1----11---4--147-0461522--600214---1-3", "-24------0-0-----725-4727--1-502---13672-03364", "22-2-452557---3---545-0---2-1765--454462-3-60-", "7013-7---2------0-4-2-47-444--------5036-3-0-0", "-065--5--60251761-1-614----0--40-1--2013-----7", "-034-3-5--75--3--5746-6---5-5-56---54-771-646-", "6272--4--5------7-127-45---70-6----2-710-532-2", "557---03-----40-2-5----14--1-734-07-6547--43-7"};
    vector<int> stringsA = {20, 19, 33, 29, 32, 22, 26, 23, 36, 18, 15, 17, 17, 25, 19, 36, 17, 17, 24, 32, 29, 28, 28, 16, 32, 32, 35, 19, 28, 18, 22, 18, 36, 28, 31, 17, 24, 28, 26};
    vector<int> stringsB = {-11, -29, -8, -16, -30, -15, -7, -6, -16, -9, -26, -23, -6, -4, -5, -4, -22, -9, -3, -20, -29, -17, -13, -8, -26, -16, -29, -6, -22, -22, -34, -26, -31, -32, -20, -24, -27, -12, -12, -13, -26, -13, -17, -19, -18};
    int d = -42;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1011-110120--01111211010-2--1211-1121133020111", "------------------4-------------------2-------", "0011-----1----------0-1--0000-0-------11-0-0--", "--12-0-0----------2-------1-2-------1133------", "----------------------------------------------", "1113-101---1--0-1-211121-0102011-1--4134101111", "-000---0000--0--0-0-0-0-0000-01--0--0000-00001", "-----0--------------0-0----0--0-----0--------0", "-014-101-0----0---20---0--2-2100-0-02233--00--", "--0----000--------0-0--0-00--0-----0--21-000--", "-1-1----------1---3---------0-4----22133------", "0203--1-00-0-00---4-213---001-22-0-11242-002-2", "-00--0---0----0---2-0-22---0--0----10--------2", "-100-01--1----00--2-1111----10-0----1020-001-2", "01---01001----0-0-102122---02--0-0-02-20--0-03", "0120-11--4----00--302153--004101----2133-01443", "-2-2--0-00--------4-112-----1-12---21141---1-1", "--11--0000-0-0--00000--0-10-1000--000021000000", "1434-03--43-4----4324142430442-2---333433-0433", "1101-----1----01--3-1020-------1---12031---0--", "------------------4-------------------5-------", "-----0--0---------1-----------------2-32------", "-0-2---0----------2-0-1---0-0-00----3014---0--", "0111--0-01-------00-0-10-111010----0-111-1-0-0", "-213----------1---6---2----13-4----23234---1--", "-024-11200-2--0---310021-1212121-1-022441-2000", "------------------5-----------------5-5-------", "-100-00--0-0--0-0-2-1-32--011000-101100--0---2", "-2-3-01001-------04-2130-0--1-12---21142-00101", "0313-01112-0--01105-2231-1011-12-0-24243-10201", "----------------------------------------------", "-424-----1----2---6-2-3--0223-41---33354--13-0", "----------------------------------------------", "----------------------------------------------", "2101--0--10-00211-3-1120--021011-0-14132-1010-", "1312-00011-1-01-0-5-2130-0102022-0-22343---3-1", "---1--------------3-----------------3241------", "1121--00-3--0-0-1-201-10-20----1---02233-100-0", "1122--2023--00102131201002002--2-1022243-10101", "-102-0-0-3-0--0---2-1-1---0-0-01---03224---1--", "3534-2-1-2121-2---6-324--2223143-1-34464--1412", "1112-000-3-0--0-002-2-10-0100-01---03244-10100", "--21-1--00---0-0002-0000----000--0--213300-0-0", "1101-0-000----100030101--0010001-0-03131-1001-", "0000-10000-00-0---2-0000-0-00000--0-3040-00-00"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> tab = {"-4457754-20024422-4457754-20024200-"};
    vector<int> stringsA = {0};
    vector<int> stringsB = {28, 23, 19, 14, 9, 4};
    int d = 12;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-----------------------------------", "-----------------------------------", "----00---------------00------------", "-223--32-0--02200-223--32-0--020---", "----------33---------------33---33-", "-----------------------------------"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> tab = {"-----------------", "-------------0-1-", "---------0-2-----", "---0-2-3---------", "-3---------------", "-----------------"};
    vector<int> stringsA = {28, 23, 19, 14, 9, 4};
    vector<int> stringsB = {9};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-3-5-7-8-A-C-E-F-"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> tab = {"-----------------------------------", "-----------------------------------", "----00---------------00------------", "-223--32-0--02200-223--32-0--020---", "----------33---------------33---33-", "-----------------------------------"};
    vector<int> stringsA = {28, 23, 19, 14, 9, 4};
    vector<int> stringsB = {33, 28, 24, 31};
    int d = 12;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-----------------------------------", "-001--10-----00---001--10-----0----", "---------2002--22---------2002-200-", "----00---------------00------------"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> tab = {"-----------------------------------", "--------------12-------------------", "----00---------------00------------", "-223--32-0--02200-223--32-0--020---", "----------33---------------33---33-", "-----------------------------------"};
    vector<int> stringsA = {28, 23, 19, 14, 9, 4};
    vector<int> stringsB = {33, 28, 14, 31};
    int d = 12;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"--------------34-------------------", "-001--10-----00---001--10-----0----", "---------CAAC--CC---------CAAC-CAA-", "----00---------------00------------"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> tab = {"4"};
    vector<int> stringsA = {-30};
    vector<int> stringsB = {-50};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> tab = {"ABCDEFGHIFJK03423JOJLIKJKOFD", "ABCDEFGHIFJK03423JOJLIKJKOFD", "ABCDEFGHIFJK03423JOJLIKJKOFD"};
    vector<int> stringsA = {1, 2, 49};
    vector<int> stringsB = {-30, -29, 50, 22, 33, 49};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxxxxxxxxxxVYZXYxxxxxxxxxxx", "xxxxxxxxxxxxVYZXYxxxxxxxxxxx", "xxxxxxxxxxxx-2312xxxxxxxxxxx", "xxxxxxxxxxxx-----xxxxxxxxxxx", "xxxxxxxxxxxx-----xxxxxxxxxxx", "xxxxxxxxxxxx0----xxxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> tab = {"12341", "ZNSHS", "KKS3Z", "32312", "00121", "J1212"};
    vector<int> stringsA = {7, 3, 2, 6, 1, 0};
    vector<int> stringsB = {4, 2, 3, 0, 1, 7, 8, 4, 3, 2, 1, 10, 15, 11, 2};
    int d = 1;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---0-", "-----", "--0-0", "-----", "-----", "2---2", "21201", "---2-", "--0-0", "-0---", "-----", "A01--", "OCH6N", "CCK1L", "00-0-"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> tab = {"0"};
    vector<int> stringsA = {-50};
    vector<int> stringsB = {-50};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> tab = {"--242424----------B9B9B91234", "--------------B9B9B9--------", "--242424----------B9B9B9----", "--------------B9B9B9--------"};
    vector<int> stringsA = {33, 28, 24, 31};
    vector<int> stringsB = {17, 25, 20, 20, 20, 20, 15, 21};
    int d = 2;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"----------------------------", "--CECECE------JHJHLJLJLJBCDE", "----------------------------", "----------------------------", "------------------HF--------", "------------------LJ--------", "----------------------------", "--797979------KIKINLGEGE----"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> tab = {"-0-"};
    vector<int> stringsA = {0};
    vector<int> stringsB = {-30};
    int d = -10;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-K-"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> tab = {"-F-"};
    vector<int> stringsA = {49};
    vector<int> stringsB = {44};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-K-"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> tab = {"Z", "Z"};
    vector<int> stringsA = {0, 1};
    vector<int> stringsB = {0, 1};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Z", "Z"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> tab = {"-----0------2-2222--0-------0-", "----0------2---222---5-----55-", "---0------2-----22----9---999-", "--0------2-------2-----E-EEEE-", "-0------2---------------------", "0------2----------------------"};
    vector<int> stringsA = {28, 23, 19, 14, 9, 4};
    vector<int> stringsB = {33, 28, 28};
    int d = 12;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxx-27-xx-049-999x--7777-777x-", "xxx----xx-------5x---------Cx-", "xxx3---xx0-----99x--------CCx-"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> tab = {"1", "0"};
    vector<int> stringsA = {-30, -30};
    vector<int> stringsB = {-45, -40};
    int d = 0;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F", "B"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> tab = {"----5-3-22", "----------", "1234567--9", "1111-11111", "2345-66666", "9999-99999", "1111111111", "12435-----", "----------", "----------", "12-------9", "123-456789", "98-7654321", "1-2-3-5-6-", "----------", "----------", "1111111111", "2222222222", "3333333333", "9999999999", "7777777777", "6666666666", "5555555555", "7777777777", "----------", "6666666666", "6666666666", "1111111111", "2222222222", "3333333333", "7777777777", "-2-3-4-5-6", "-1-1-1-1-1", "1-1-1-1-1-", "2222222222", "3333333333", "9999999999", "6666666666", "5555555555", "4444444444", "3333333333", "----------", "1111111111"};
    vector<int> stringsA = {-49, -4, 5, 45, 33, 4, 3, 2, 11, 22, 44, 0, 9, 8, 7, 6, 5, 3, 2, 1, 3, 4, 5, 6, 7, 5, 3, 3, 2, 5, 6, 7, 5, 4, 22, 2, 5, 44, 4, 3, 2, 32, 22};
    vector<int> stringsB = {1, 50, -50, 4, -3};
    int d = 49;
    StringsAndTabs* pObj = new StringsAndTabs();
    clock_t start = clock();
    vector<string> result = pObj->transformTab(tab, stringsA, stringsB, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxxxxxxxx", "xxxxxxxxxx", "xxxxxxxxxx", "xxxxxxxxxx", "xxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=13503&pm=8478
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
#include <list>
#include <complex>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef complex<double> pnt;
typedef pair<int, int> pii;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define SZ(x) ((int) (x).size())
 
 
class StringsAndTabs
{
public:
    vector <string> transformTab(vector <string> tab, vector <int> stringsA, vector <int> stringsB, int d);
};
 
static inline char num2char(int n)
{
    return n < 10 ? '0' + n : 'A' + (n - 10);
}
 
static inline int char2num(int n)
{
    return n <= '9' ? n - '0' : n - 'A' + 10;
}
 
vector <string> StringsAndTabs::transformTab(vector <string> tab, vector <int> stringsA, vector <int> stringsB, int d)
{
    int N = tab[0].size();
    int SA = stringsA.size();
    int SB = stringsB.size();
    vector<vector<int> > notes;
    vs out;
 
    notes.resize(N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < SA; j++)
            if (tab[j][i] != '-')
                notes[i].push_back(stringsA[j] + d + char2num(tab[j][i]));
        sort(RA(notes[i]), greater<int>());
    }
 
    out.resize(SB);
    for (int i = 0; i < SB; i++)
        out[i] = string(N, '-');
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < SZ(notes[i]); j++)
        {
            int n = notes[i][j];
            int s;
            int best = -1;
            for (s = SB - 1; s >= 0; s--)
                if (out[s][i] == '-' && n >= stringsB[s] && n <= stringsB[s] + 35)
                {
                    if (best == -1
                        || stringsB[best] < stringsB[s])
                        best = s;
                }
            if (best < 0)
            {
                for (s = 0; s < SB; s++)
                    out[s][i] = 'x';
                break;
            }
            else
            {
                out[best][i] = num2char(n - stringsB[best]);
            }
        }
    }
 
    return out;
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/
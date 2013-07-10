/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6387
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

class XBallGame {
public:
    vector<string> newStatistics(vector<string> placeboard);
};

vector<string> XBallGame::newStatistics(vector<string> placeboard) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> placeboard = {"John-DH", "Jack-SP", "Sam-OF", "John-SP", "John-RP"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"John-DH,RP,SP", "Jack-SP", "Sam-OF", "John-SP,DH,RP", "John-RP,DH,SP"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> placeboard = {"John-DH", "Jack-SP", "Sam-OF", "John-SP", "John-RP", "John-RA", "John-RZ", "Jack-OF", "Sam-SP"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"John-DH,RA,RP,RZ,SP", "Jack-SP,OF", "Sam-OF,SP", "John-SP,DH,RA,RP,RZ", "John-RP,DH,RA,RZ,SP", "John-RA,DH,RP,RZ,SP", "John-RZ,DH,RA,RP,SP", "Jack-OF,SP", "Sam-SP,OF"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> placeboard = {"PFwL-GE", "PFwL-EV", "agXL-SR", "PFwL-CS", "PFwL-FE", "PFwL-MS", "agXL-VS", "agXL-AL", "PFwL-BI", "PFwL-DK", "PFwL-MW", "PFwL-DS", "agXL-XJ", "agXL-PJ", "agXL-CK", "PFwL-KI", "agXL-KP", "agXL-EL", "PFwL-EA"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PFwL-GE,BI,CS,DK,DS,EA,EV,FE,KI,MS,MW", "PFwL-EV,BI,CS,DK,DS,EA,FE,GE,KI,MS,MW", "agXL-SR,AL,CK,EL,KP,PJ,VS,XJ", "PFwL-CS,BI,DK,DS,EA,EV,FE,GE,KI,MS,MW", "PFwL-FE,BI,CS,DK,DS,EA,EV,GE,KI,MS,MW", "PFwL-MS,BI,CS,DK,DS,EA,EV,FE,GE,KI,MW", "agXL-VS,AL,CK,EL,KP,PJ,SR,XJ", "agXL-AL,CK,EL,KP,PJ,SR,VS,XJ", "PFwL-BI,CS,DK,DS,EA,EV,FE,GE,KI,MS,MW", "PFwL-DK,BI,CS,DS,EA,EV,FE,GE,KI,MS,MW", "PFwL-MW,BI,CS,DK,DS,EA,EV,FE,GE,KI,MS", "PFwL-DS,BI,CS,DK,EA,EV,FE,GE,KI,MS,MW", "agXL-XJ,AL,CK,EL,KP,PJ,SR,VS", "agXL-PJ,AL,CK,EL,KP,SR,VS,XJ", "agXL-CK,AL,EL,KP,PJ,SR,VS,XJ", "PFwL-KI,BI,CS,DK,DS,EA,EV,FE,GE,MS,MW", "agXL-KP,AL,CK,EL,PJ,SR,VS,XJ", "agXL-EL,AL,CK,KP,PJ,SR,VS,XJ", "PFwL-EA,BI,CS,DK,DS,EV,FE,GE,KI,MS,MW"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> placeboard = {"a-AA"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a-AA"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> placeboard = {"a-AA", "a-ZZ"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a-AA,ZZ", "a-ZZ,AA"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> placeboard = {"a-AA", "b-AA"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a-AA", "b-AA"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> placeboard = {"ocdDpewXiVoidOaXTieD-BB", "ocdDpewXiVoidOaXTieD-ON", "ocdDpewXiVoidOaXTieD-ZV", "ocdDpewXiVoidOaXTieD-GB", "ocdDpewXiVoidOaXTieD-ZB", "ocdDpewXiVoidOaXTieD-QD", "ocdDpewXiVoidOaXTieD-OQ", "ocdDpewXiVoidOaXTieD-KX", "ocdDpewXiVoidOaXTieD-NQ", "ocdDpewXiVoidOaXTieD-VN", "ocdDpewXiVoidOaXTieD-MB", "ocdDpewXiVoidOaXTieD-QW", "ocdDpewXiVoidOaXTieD-BV", "ocdDpewXiVoidOaXTieD-YQ", "ocdDpewXiVoidOaXTieD-NU", "ocdDpewXiVoidOaXTieD-EF", "ocdDpewXiVoidOaXTieD-TQ", "ocdDpewXiVoidOaXTieD-NY", "ocdDpewXiVoidOaXTieD-OW", "ocdDpewXiVoidOaXTieD-UF"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ocdDpewXiVoidOaXTieD-BB,BV,EF,GB,KX,MB,NQ,NU,NY,ON,OQ,OW,QD,QW,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-ON,BB,BV,EF,GB,KX,MB,NQ,NU,NY,OQ,OW,QD,QW,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-ZV,BB,BV,EF,GB,KX,MB,NQ,NU,NY,ON,OQ,OW,QD,QW,TQ,UF,VN,YQ,ZB", "ocdDpewXiVoidOaXTieD-GB,BB,BV,EF,KX,MB,NQ,NU,NY,ON,OQ,OW,QD,QW,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-ZB,BB,BV,EF,GB,KX,MB,NQ,NU,NY,ON,OQ,OW,QD,QW,TQ,UF,VN,YQ,ZV", "ocdDpewXiVoidOaXTieD-QD,BB,BV,EF,GB,KX,MB,NQ,NU,NY,ON,OQ,OW,QW,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-OQ,BB,BV,EF,GB,KX,MB,NQ,NU,NY,ON,OW,QD,QW,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-KX,BB,BV,EF,GB,MB,NQ,NU,NY,ON,OQ,OW,QD,QW,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-NQ,BB,BV,EF,GB,KX,MB,NU,NY,ON,OQ,OW,QD,QW,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-VN,BB,BV,EF,GB,KX,MB,NQ,NU,NY,ON,OQ,OW,QD,QW,TQ,UF,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-MB,BB,BV,EF,GB,KX,NQ,NU,NY,ON,OQ,OW,QD,QW,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-QW,BB,BV,EF,GB,KX,MB,NQ,NU,NY,ON,OQ,OW,QD,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-BV,BB,EF,GB,KX,MB,NQ,NU,NY,ON,OQ,OW,QD,QW,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-YQ,BB,BV,EF,GB,KX,MB,NQ,NU,NY,ON,OQ,OW,QD,QW,TQ,UF,VN,ZB,ZV", "ocdDpewXiVoidOaXTieD-NU,BB,BV,EF,GB,KX,MB,NQ,NY,ON,OQ,OW,QD,QW,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-EF,BB,BV,GB,KX,MB,NQ,NU,NY,ON,OQ,OW,QD,QW,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-TQ,BB,BV,EF,GB,KX,MB,NQ,NU,NY,ON,OQ,OW,QD,QW,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-NY,BB,BV,EF,GB,KX,MB,NQ,NU,ON,OQ,OW,QD,QW,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-OW,BB,BV,EF,GB,KX,MB,NQ,NU,NY,ON,OQ,QD,QW,TQ,UF,VN,YQ,ZB,ZV", "ocdDpewXiVoidOaXTieD-UF,BB,BV,EF,GB,KX,MB,NQ,NU,NY,ON,OQ,OW,QD,QW,TQ,VN,YQ,ZB,ZV"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> placeboard = {"KulVXknwYlCPceaTqxxA-FB", "KulVXknwYlCPceaTqxxA-FY", "KulVXknwYlCPceaTqxxA-TX", "KulVXknwYlCPceaTqxxA-OP", "KulVXknwYlCPceaTqxxA-ST", "KulVXknwYlCPceaTqxxA-YS", "KulVXknwYlCPceaTqxxA-TF", "KulVXknwYlCPceaTqxxA-FZ", "KulVXknwYlCPceaTqxxA-NI", "KulVXknwYlCPceaTqxxA-BO", "KulVXknwYlCPceaTqxxA-CZ", "KulVXknwYlCPceaTqxxA-JY", "KulVXknwYlCPceaTqxxA-SG", "KulVXknwYlCPceaTqxxA-FH", "KulVXknwYlCPceaTqxxA-CL", "KulVXknwYlCPceaTqxxA-LF", "KulVXknwYlCPceaTqxxA-QD", "KulVXknwYlCPceaTqxxA-PP", "KulVXknwYlCPceaTqxxA-LV"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"KulVXknwYlCPceaTqxxA-FB,BO,CL,CZ,FH,FY,FZ,JY,LF,LV,NI,OP,PP,QD,SG,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-FY,BO,CL,CZ,FB,FH,FZ,JY,LF,LV,NI,OP,PP,QD,SG,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-TX,BO,CL,CZ,FB,FH,FY,FZ,JY,LF,LV,NI,OP,PP,QD,SG,ST,TF,YS", "KulVXknwYlCPceaTqxxA-OP,BO,CL,CZ,FB,FH,FY,FZ,JY,LF,LV,NI,PP,QD,SG,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-ST,BO,CL,CZ,FB,FH,FY,FZ,JY,LF,LV,NI,OP,PP,QD,SG,TF,TX,YS", "KulVXknwYlCPceaTqxxA-YS,BO,CL,CZ,FB,FH,FY,FZ,JY,LF,LV,NI,OP,PP,QD,SG,ST,TF,TX", "KulVXknwYlCPceaTqxxA-TF,BO,CL,CZ,FB,FH,FY,FZ,JY,LF,LV,NI,OP,PP,QD,SG,ST,TX,YS", "KulVXknwYlCPceaTqxxA-FZ,BO,CL,CZ,FB,FH,FY,JY,LF,LV,NI,OP,PP,QD,SG,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-NI,BO,CL,CZ,FB,FH,FY,FZ,JY,LF,LV,OP,PP,QD,SG,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-BO,CL,CZ,FB,FH,FY,FZ,JY,LF,LV,NI,OP,PP,QD,SG,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-CZ,BO,CL,FB,FH,FY,FZ,JY,LF,LV,NI,OP,PP,QD,SG,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-JY,BO,CL,CZ,FB,FH,FY,FZ,LF,LV,NI,OP,PP,QD,SG,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-SG,BO,CL,CZ,FB,FH,FY,FZ,JY,LF,LV,NI,OP,PP,QD,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-FH,BO,CL,CZ,FB,FY,FZ,JY,LF,LV,NI,OP,PP,QD,SG,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-CL,BO,CZ,FB,FH,FY,FZ,JY,LF,LV,NI,OP,PP,QD,SG,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-LF,BO,CL,CZ,FB,FH,FY,FZ,JY,LV,NI,OP,PP,QD,SG,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-QD,BO,CL,CZ,FB,FH,FY,FZ,JY,LF,LV,NI,OP,PP,SG,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-PP,BO,CL,CZ,FB,FH,FY,FZ,JY,LF,LV,NI,OP,QD,SG,ST,TF,TX,YS", "KulVXknwYlCPceaTqxxA-LV,BO,CL,CZ,FB,FH,FY,FZ,JY,LF,NI,OP,PP,QD,SG,ST,TF,TX,YS"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> placeboard = {"uIlwOcGKNSoAobEldfLs-AI", "uIlwOcGKNSoAobEldfLs-GK", "uIlwOcGKNSoAobEldfLs-DT", "uIlwOcGKNSoAobEldfLs-OE", "uIlwOcGKNSoAobEldfLs-GS", "uIlwOcGKNSoAobEldfLs-SG", "uIlwOcGKNSoAobEldfLs-GB", "uIlwOcGKNSoAobEldfLs-MM", "uIlwOcGKNSoAobEldfLs-OP", "uIlwOcGKNSoAobEldfLs-PF", "uIlwOcGKNSoAobEldfLs-XS", "uIlwOcGKNSoAobEldfLs-MT", "uIlwOcGKNSoAobEldfLs-OO", "uIlwOcGKNSoAobEldfLs-LT", "uIlwOcGKNSoAobEldfLs-TV", "uIlwOcGKNSoAobEldfLs-AK", "uIlwOcGKNSoAobEldfLs-XZ", "uIlwOcGKNSoAobEldfLs-EK", "uIlwOcGKNSoAobEldfLs-SV", "uIlwOcGKNSoAobEldfLs-CD"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"uIlwOcGKNSoAobEldfLs-AI,AK,CD,DT,EK,GB,GK,GS,LT,MM,MT,OE,OO,OP,PF,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-GK,AI,AK,CD,DT,EK,GB,GS,LT,MM,MT,OE,OO,OP,PF,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-DT,AI,AK,CD,EK,GB,GK,GS,LT,MM,MT,OE,OO,OP,PF,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-OE,AI,AK,CD,DT,EK,GB,GK,GS,LT,MM,MT,OO,OP,PF,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-GS,AI,AK,CD,DT,EK,GB,GK,LT,MM,MT,OE,OO,OP,PF,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-SG,AI,AK,CD,DT,EK,GB,GK,GS,LT,MM,MT,OE,OO,OP,PF,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-GB,AI,AK,CD,DT,EK,GK,GS,LT,MM,MT,OE,OO,OP,PF,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-MM,AI,AK,CD,DT,EK,GB,GK,GS,LT,MT,OE,OO,OP,PF,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-OP,AI,AK,CD,DT,EK,GB,GK,GS,LT,MM,MT,OE,OO,PF,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-PF,AI,AK,CD,DT,EK,GB,GK,GS,LT,MM,MT,OE,OO,OP,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-XS,AI,AK,CD,DT,EK,GB,GK,GS,LT,MM,MT,OE,OO,OP,PF,SG,SV,TV,XZ", "uIlwOcGKNSoAobEldfLs-MT,AI,AK,CD,DT,EK,GB,GK,GS,LT,MM,OE,OO,OP,PF,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-OO,AI,AK,CD,DT,EK,GB,GK,GS,LT,MM,MT,OE,OP,PF,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-LT,AI,AK,CD,DT,EK,GB,GK,GS,MM,MT,OE,OO,OP,PF,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-TV,AI,AK,CD,DT,EK,GB,GK,GS,LT,MM,MT,OE,OO,OP,PF,SG,SV,XS,XZ", "uIlwOcGKNSoAobEldfLs-AK,AI,CD,DT,EK,GB,GK,GS,LT,MM,MT,OE,OO,OP,PF,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-XZ,AI,AK,CD,DT,EK,GB,GK,GS,LT,MM,MT,OE,OO,OP,PF,SG,SV,TV,XS", "uIlwOcGKNSoAobEldfLs-EK,AI,AK,CD,DT,GB,GK,GS,LT,MM,MT,OE,OO,OP,PF,SG,SV,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-SV,AI,AK,CD,DT,EK,GB,GK,GS,LT,MM,MT,OE,OO,OP,PF,SG,TV,XS,XZ", "uIlwOcGKNSoAobEldfLs-CD,AI,AK,DT,EK,GB,GK,GS,LT,MM,MT,OE,OO,OP,PF,SG,SV,TV,XS,XZ"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> placeboard = {"PSAbXpVbtloYnaxbgIDw-TT", "bsABrmgMUZQnzqbpUqhV-PA", "PSAbXpVbtloYnaxbgIDw-MR", "bsABrmgMUZQnzqbpUqhV-RW", "mcEFrkomfpTZFOexwUjy-FM", "bsABrmgMUZQnzqbpUqhV-UX", "PSAbXpVbtloYnaxbgIDw-HP", "bsABrmgMUZQnzqbpUqhV-LY", "PSAbXpVbtloYnaxbgIDw-PU", "bsABrmgMUZQnzqbpUqhV-WU", "PSAbXpVbtloYnaxbgIDw-IU", "mcEFrkomfpTZFOexwUjy-VX", "rTJMTbviGCwosZtqHVwf-PR", "mcEFrkomfpTZFOexwUjy-MA", "mcEFrkomfpTZFOexwUjy-ZD", "rTJMTbviGCwosZtqHVwf-RB", "PSAbXpVbtloYnaxbgIDw-JH", "mcEFrkomfpTZFOexwUjy-BE", "rTJMTbviGCwosZtqHVwf-JE", "rTJMTbviGCwosZtqHVwf-QT"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PSAbXpVbtloYnaxbgIDw-TT,HP,IU,JH,MR,PU", "bsABrmgMUZQnzqbpUqhV-PA,LY,RW,UX,WU", "PSAbXpVbtloYnaxbgIDw-MR,HP,IU,JH,PU,TT", "bsABrmgMUZQnzqbpUqhV-RW,LY,PA,UX,WU", "mcEFrkomfpTZFOexwUjy-FM,BE,MA,VX,ZD", "bsABrmgMUZQnzqbpUqhV-UX,LY,PA,RW,WU", "PSAbXpVbtloYnaxbgIDw-HP,IU,JH,MR,PU,TT", "bsABrmgMUZQnzqbpUqhV-LY,PA,RW,UX,WU", "PSAbXpVbtloYnaxbgIDw-PU,HP,IU,JH,MR,TT", "bsABrmgMUZQnzqbpUqhV-WU,LY,PA,RW,UX", "PSAbXpVbtloYnaxbgIDw-IU,HP,JH,MR,PU,TT", "mcEFrkomfpTZFOexwUjy-VX,BE,FM,MA,ZD", "rTJMTbviGCwosZtqHVwf-PR,JE,QT,RB", "mcEFrkomfpTZFOexwUjy-MA,BE,FM,VX,ZD", "mcEFrkomfpTZFOexwUjy-ZD,BE,FM,MA,VX", "rTJMTbviGCwosZtqHVwf-RB,JE,PR,QT", "PSAbXpVbtloYnaxbgIDw-JH,HP,IU,MR,PU,TT", "mcEFrkomfpTZFOexwUjy-BE,FM,MA,VX,ZD", "rTJMTbviGCwosZtqHVwf-JE,PR,QT,RB", "rTJMTbviGCwosZtqHVwf-QT,JE,PR,RB"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> placeboard = {"CmqtXkrrDSHIJFeMGeoL-GB", "uwHRtoelBpTdLAjtprxg-NJ", "wHeNmwAFQhzrAuzbjNhy-OO", "JSCyLprbSUneNzuIrkhF-QG", "uwHRtoelBpTdLAjtprxg-FA", "JSCyLprbSUneNzuIrkhF-SS", "CmqtXkrrDSHIJFeMGeoL-KL", "CmqtXkrrDSHIJFeMGeoL-LF", "uwHRtoelBpTdLAjtprxg-IV", "CmqtXkrrDSHIJFeMGeoL-MD", "CmqtXkrrDSHIJFeMGeoL-DF", "CmqtXkrrDSHIJFeMGeoL-FN", "CmqtXkrrDSHIJFeMGeoL-FQ", "uwHRtoelBpTdLAjtprxg-OZ", "JSCyLprbSUneNzuIrkhF-KB", "wHeNmwAFQhzrAuzbjNhy-NI", "uwHRtoelBpTdLAjtprxg-UR", "JSCyLprbSUneNzuIrkhF-AP", "wHeNmwAFQhzrAuzbjNhy-SA", "uwHRtoelBpTdLAjtprxg-NG"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CmqtXkrrDSHIJFeMGeoL-GB,DF,FN,FQ,KL,LF,MD", "uwHRtoelBpTdLAjtprxg-NJ,FA,IV,NG,OZ,UR", "wHeNmwAFQhzrAuzbjNhy-OO,NI,SA", "JSCyLprbSUneNzuIrkhF-QG,AP,KB,SS", "uwHRtoelBpTdLAjtprxg-FA,IV,NG,NJ,OZ,UR", "JSCyLprbSUneNzuIrkhF-SS,AP,KB,QG", "CmqtXkrrDSHIJFeMGeoL-KL,DF,FN,FQ,GB,LF,MD", "CmqtXkrrDSHIJFeMGeoL-LF,DF,FN,FQ,GB,KL,MD", "uwHRtoelBpTdLAjtprxg-IV,FA,NG,NJ,OZ,UR", "CmqtXkrrDSHIJFeMGeoL-MD,DF,FN,FQ,GB,KL,LF", "CmqtXkrrDSHIJFeMGeoL-DF,FN,FQ,GB,KL,LF,MD", "CmqtXkrrDSHIJFeMGeoL-FN,DF,FQ,GB,KL,LF,MD", "CmqtXkrrDSHIJFeMGeoL-FQ,DF,FN,GB,KL,LF,MD", "uwHRtoelBpTdLAjtprxg-OZ,FA,IV,NG,NJ,UR", "JSCyLprbSUneNzuIrkhF-KB,AP,QG,SS", "wHeNmwAFQhzrAuzbjNhy-NI,OO,SA", "uwHRtoelBpTdLAjtprxg-UR,FA,IV,NG,NJ,OZ", "JSCyLprbSUneNzuIrkhF-AP,KB,QG,SS", "wHeNmwAFQhzrAuzbjNhy-SA,NI,OO", "uwHRtoelBpTdLAjtprxg-NG,FA,IV,NJ,OZ,UR"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> placeboard = {"PPxYYYCBSOcYbNqmIeeY-OE", "LubyAluiYWZHEobPrANT-UI", "LubyAluiYWZHEobPrANT-FM", "LubyAluiYWZHEobPrANT-ZL", "PPxYYYCBSOcYbNqmIeeY-TY", "PPxYYYCBSOcYbNqmIeeY-BW", "LubyAluiYWZHEobPrANT-TO", "PPxYYYCBSOcYbNqmIeeY-SZ", "PPxYYYCBSOcYbNqmIeeY-RQ", "PPxYYYCBSOcYbNqmIeeY-FP", "PPxYYYCBSOcYbNqmIeeY-CZ", "LubyAluiYWZHEobPrANT-CQ", "PPxYYYCBSOcYbNqmIeeY-DI", "PPxYYYCBSOcYbNqmIeeY-TH", "LubyAluiYWZHEobPrANT-DQ", "PPxYYYCBSOcYbNqmIeeY-OM", "PPxYYYCBSOcYbNqmIeeY-OK", "PPxYYYCBSOcYbNqmIeeY-SH", "LubyAluiYWZHEobPrANT-CY", "LubyAluiYWZHEobPrANT-KQ"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PPxYYYCBSOcYbNqmIeeY-OE,BW,CZ,DI,FP,OK,OM,RQ,SH,SZ,TH,TY", "LubyAluiYWZHEobPrANT-UI,CQ,CY,DQ,FM,KQ,TO,ZL", "LubyAluiYWZHEobPrANT-FM,CQ,CY,DQ,KQ,TO,UI,ZL", "LubyAluiYWZHEobPrANT-ZL,CQ,CY,DQ,FM,KQ,TO,UI", "PPxYYYCBSOcYbNqmIeeY-TY,BW,CZ,DI,FP,OE,OK,OM,RQ,SH,SZ,TH", "PPxYYYCBSOcYbNqmIeeY-BW,CZ,DI,FP,OE,OK,OM,RQ,SH,SZ,TH,TY", "LubyAluiYWZHEobPrANT-TO,CQ,CY,DQ,FM,KQ,UI,ZL", "PPxYYYCBSOcYbNqmIeeY-SZ,BW,CZ,DI,FP,OE,OK,OM,RQ,SH,TH,TY", "PPxYYYCBSOcYbNqmIeeY-RQ,BW,CZ,DI,FP,OE,OK,OM,SH,SZ,TH,TY", "PPxYYYCBSOcYbNqmIeeY-FP,BW,CZ,DI,OE,OK,OM,RQ,SH,SZ,TH,TY", "PPxYYYCBSOcYbNqmIeeY-CZ,BW,DI,FP,OE,OK,OM,RQ,SH,SZ,TH,TY", "LubyAluiYWZHEobPrANT-CQ,CY,DQ,FM,KQ,TO,UI,ZL", "PPxYYYCBSOcYbNqmIeeY-DI,BW,CZ,FP,OE,OK,OM,RQ,SH,SZ,TH,TY", "PPxYYYCBSOcYbNqmIeeY-TH,BW,CZ,DI,FP,OE,OK,OM,RQ,SH,SZ,TY", "LubyAluiYWZHEobPrANT-DQ,CQ,CY,FM,KQ,TO,UI,ZL", "PPxYYYCBSOcYbNqmIeeY-OM,BW,CZ,DI,FP,OE,OK,RQ,SH,SZ,TH,TY", "PPxYYYCBSOcYbNqmIeeY-OK,BW,CZ,DI,FP,OE,OM,RQ,SH,SZ,TH,TY", "PPxYYYCBSOcYbNqmIeeY-SH,BW,CZ,DI,FP,OE,OK,OM,RQ,SZ,TH,TY", "LubyAluiYWZHEobPrANT-CY,CQ,DQ,FM,KQ,TO,UI,ZL", "LubyAluiYWZHEobPrANT-KQ,CQ,CY,DQ,FM,TO,UI,ZL"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> placeboard = {"sxwYwwDjrDZNzJYiZdpI-NX", "TpdKTxbGNMVnmxGPiuPv-NN", "TpdKTxbGNMVnmxGPiuPv-SE", "sOyOEdHvjabjvfwIEnxa-KS", "TpdKTxbGNMVnmxGPiuPv-HE", "TpdKTxbGNMVnmxGPiuPv-MI", "TpdKTxbGNMVnmxGPiuPv-DD", "sxwYwwDjrDZNzJYiZdpI-YV", "sxwYwwDjrDZNzJYiZdpI-QD", "TpdKTxbGNMVnmxGPiuPv-WL", "TpdKTxbGNMVnmxGPiuPv-RF", "sOyOEdHvjabjvfwIEnxa-ZJ", "TpdKTxbGNMVnmxGPiuPv-BC", "sOyOEdHvjabjvfwIEnxa-KC", "sOyOEdHvjabjvfwIEnxa-IG", "TpdKTxbGNMVnmxGPiuPv-BY", "sxwYwwDjrDZNzJYiZdpI-QB", "sOyOEdHvjabjvfwIEnxa-PC", "sOyOEdHvjabjvfwIEnxa-MC", "TpdKTxbGNMVnmxGPiuPv-GD"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"sxwYwwDjrDZNzJYiZdpI-NX,QB,QD,YV", "TpdKTxbGNMVnmxGPiuPv-NN,BC,BY,DD,GD,HE,MI,RF,SE,WL", "TpdKTxbGNMVnmxGPiuPv-SE,BC,BY,DD,GD,HE,MI,NN,RF,WL", "sOyOEdHvjabjvfwIEnxa-KS,IG,KC,MC,PC,ZJ", "TpdKTxbGNMVnmxGPiuPv-HE,BC,BY,DD,GD,MI,NN,RF,SE,WL", "TpdKTxbGNMVnmxGPiuPv-MI,BC,BY,DD,GD,HE,NN,RF,SE,WL", "TpdKTxbGNMVnmxGPiuPv-DD,BC,BY,GD,HE,MI,NN,RF,SE,WL", "sxwYwwDjrDZNzJYiZdpI-YV,NX,QB,QD", "sxwYwwDjrDZNzJYiZdpI-QD,NX,QB,YV", "TpdKTxbGNMVnmxGPiuPv-WL,BC,BY,DD,GD,HE,MI,NN,RF,SE", "TpdKTxbGNMVnmxGPiuPv-RF,BC,BY,DD,GD,HE,MI,NN,SE,WL", "sOyOEdHvjabjvfwIEnxa-ZJ,IG,KC,KS,MC,PC", "TpdKTxbGNMVnmxGPiuPv-BC,BY,DD,GD,HE,MI,NN,RF,SE,WL", "sOyOEdHvjabjvfwIEnxa-KC,IG,KS,MC,PC,ZJ", "sOyOEdHvjabjvfwIEnxa-IG,KC,KS,MC,PC,ZJ", "TpdKTxbGNMVnmxGPiuPv-BY,BC,DD,GD,HE,MI,NN,RF,SE,WL", "sxwYwwDjrDZNzJYiZdpI-QB,NX,QD,YV", "sOyOEdHvjabjvfwIEnxa-PC,IG,KC,KS,MC,ZJ", "sOyOEdHvjabjvfwIEnxa-MC,IG,KC,KS,PC,ZJ", "TpdKTxbGNMVnmxGPiuPv-GD,BC,BY,DD,HE,MI,NN,RF,SE,WL"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> placeboard = {"MOvmcBFwBPpPXTfQuqAU-GZ", "oAALwZifxLnLGWUwhbIa-MB", "oAALwZifxLnLGWUwhbIa-GE", "MOvmcBFwBPpPXTfQuqAU-GF", "MOvmcBFwBPpPXTfQuqAU-BF", "oAALwZifxLnLGWUwhbIa-WM", "MOvmcBFwBPpPXTfQuqAU-EC", "MOvmcBFwBPpPXTfQuqAU-DF", "MOvmcBFwBPpPXTfQuqAU-ND", "oAALwZifxLnLGWUwhbIa-KG", "oAALwZifxLnLGWUwhbIa-NH", "MOvmcBFwBPpPXTfQuqAU-ZY", "oAALwZifxLnLGWUwhbIa-JL", "MOvmcBFwBPpPXTfQuqAU-VO", "MOvmcBFwBPpPXTfQuqAU-XA", "MOvmcBFwBPpPXTfQuqAU-WK", "MOvmcBFwBPpPXTfQuqAU-OU", "MOvmcBFwBPpPXTfQuqAU-DG", "MOvmcBFwBPpPXTfQuqAU-AE", "MOvmcBFwBPpPXTfQuqAU-TS"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MOvmcBFwBPpPXTfQuqAU-GZ,AE,BF,DF,DG,EC,GF,ND,OU,TS,VO,WK,XA,ZY", "oAALwZifxLnLGWUwhbIa-MB,GE,JL,KG,NH,WM", "oAALwZifxLnLGWUwhbIa-GE,JL,KG,MB,NH,WM", "MOvmcBFwBPpPXTfQuqAU-GF,AE,BF,DF,DG,EC,GZ,ND,OU,TS,VO,WK,XA,ZY", "MOvmcBFwBPpPXTfQuqAU-BF,AE,DF,DG,EC,GF,GZ,ND,OU,TS,VO,WK,XA,ZY", "oAALwZifxLnLGWUwhbIa-WM,GE,JL,KG,MB,NH", "MOvmcBFwBPpPXTfQuqAU-EC,AE,BF,DF,DG,GF,GZ,ND,OU,TS,VO,WK,XA,ZY", "MOvmcBFwBPpPXTfQuqAU-DF,AE,BF,DG,EC,GF,GZ,ND,OU,TS,VO,WK,XA,ZY", "MOvmcBFwBPpPXTfQuqAU-ND,AE,BF,DF,DG,EC,GF,GZ,OU,TS,VO,WK,XA,ZY", "oAALwZifxLnLGWUwhbIa-KG,GE,JL,MB,NH,WM", "oAALwZifxLnLGWUwhbIa-NH,GE,JL,KG,MB,WM", "MOvmcBFwBPpPXTfQuqAU-ZY,AE,BF,DF,DG,EC,GF,GZ,ND,OU,TS,VO,WK,XA", "oAALwZifxLnLGWUwhbIa-JL,GE,KG,MB,NH,WM", "MOvmcBFwBPpPXTfQuqAU-VO,AE,BF,DF,DG,EC,GF,GZ,ND,OU,TS,WK,XA,ZY", "MOvmcBFwBPpPXTfQuqAU-XA,AE,BF,DF,DG,EC,GF,GZ,ND,OU,TS,VO,WK,ZY", "MOvmcBFwBPpPXTfQuqAU-WK,AE,BF,DF,DG,EC,GF,GZ,ND,OU,TS,VO,XA,ZY", "MOvmcBFwBPpPXTfQuqAU-OU,AE,BF,DF,DG,EC,GF,GZ,ND,TS,VO,WK,XA,ZY", "MOvmcBFwBPpPXTfQuqAU-DG,AE,BF,DF,EC,GF,GZ,ND,OU,TS,VO,WK,XA,ZY", "MOvmcBFwBPpPXTfQuqAU-AE,BF,DF,DG,EC,GF,GZ,ND,OU,TS,VO,WK,XA,ZY", "MOvmcBFwBPpPXTfQuqAU-TS,AE,BF,DF,DG,EC,GF,GZ,ND,OU,VO,WK,XA,ZY"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> placeboard = {"NmZPjIqRFlbIuNJnIfTe-JB", "UhFtRGFlazsOKbdKbQje-SB", "swWLJnFfvOtjDSxBxOgn-GG", "BLjbkPNjAErGLaNBXhoN-WG", "sRhkhietXBffpVqevyuX-NG", "WmyFheznsSEiSthxOWWQ-DE", "iGMEbqPJIHjCGmSyhWDL-DT", "SyevYQRTAXiFcrINwQKn-ZV", "sTPgkPZVTFHTNEiNMMaW-ZG", "ZoHHKReHxWLrlCekXzSZ-SN", "zKwLRkJdlqophupWZvEh-QT", "lFEhnPWIICtftANBSefB-FY", "uqorrYkKtzjyjPjdQBQJ-EE", "XAYVxCjjaYuaMuEruiqd-QO", "tIPBwIijrSfhZRIbyeWR-GU", "wcpNJKOOkcPMaKPfMmgd-QM", "fcRwDDaEsKSKCsHqrhcv-CX", "LyQbEJDkjBDmoTVGaKdt-RA", "khqeFpFaKdlESpNFJrww-BD", "UvqilRtmNYSUDunwlYUk-OK"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NmZPjIqRFlbIuNJnIfTe-JB", "UhFtRGFlazsOKbdKbQje-SB", "swWLJnFfvOtjDSxBxOgn-GG", "BLjbkPNjAErGLaNBXhoN-WG", "sRhkhietXBffpVqevyuX-NG", "WmyFheznsSEiSthxOWWQ-DE", "iGMEbqPJIHjCGmSyhWDL-DT", "SyevYQRTAXiFcrINwQKn-ZV", "sTPgkPZVTFHTNEiNMMaW-ZG", "ZoHHKReHxWLrlCekXzSZ-SN", "zKwLRkJdlqophupWZvEh-QT", "lFEhnPWIICtftANBSefB-FY", "uqorrYkKtzjyjPjdQBQJ-EE", "XAYVxCjjaYuaMuEruiqd-QO", "tIPBwIijrSfhZRIbyeWR-GU", "wcpNJKOOkcPMaKPfMmgd-QM", "fcRwDDaEsKSKCsHqrhcv-CX", "LyQbEJDkjBDmoTVGaKdt-RA", "khqeFpFaKdlESpNFJrww-BD", "UvqilRtmNYSUDunwlYUk-OK"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> placeboard = {"mMZFdywftkEVzmypkGmb-FU", "byLbFfJwtmGIFlwgtApv-LC", "VjttprpUTJtvxEHiiWiX-KD", "ALRlNpiYvylZMUYmjvgQ-DG", "byLbFfJwtmGIFlwgtApv-LM", "ITtjYTZlMzUohxWkCeRh-TO", "pHtBZNCSpSQxqZMjEENU-FX", "nlJhdcMSQeQiHIGARbOS-RO", "mSOnxmLCInCYkXKPMmmz-XV", "nlJhdcMSQeQiHIGARbOS-KC", "edBqHhmKHiPlHcnzqbbc-OY", "gzxnxJHCVaFxCkUMtYdY-DM", "rbYPDCXLUCiSRlEpSMSw-SY", "VPoMBskQSadVYfniEOmx-EI", "aDMFtSlwaIQfOICKqBuD-ID", "pDDaLPPheOhuCtDgtjFB-AE", "rbYPDCXLUCiSRlEpSMSw-OG", "reYiYQXyonJAUVkrEEyc-CB", "edBqHhmKHiPlHcnzqbbc-CM", "ijfNuOVLTHzLUgvOHtbK-JV"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mMZFdywftkEVzmypkGmb-FU", "byLbFfJwtmGIFlwgtApv-LC,LM", "VjttprpUTJtvxEHiiWiX-KD", "ALRlNpiYvylZMUYmjvgQ-DG", "byLbFfJwtmGIFlwgtApv-LM,LC", "ITtjYTZlMzUohxWkCeRh-TO", "pHtBZNCSpSQxqZMjEENU-FX", "nlJhdcMSQeQiHIGARbOS-RO,KC", "mSOnxmLCInCYkXKPMmmz-XV", "nlJhdcMSQeQiHIGARbOS-KC,RO", "edBqHhmKHiPlHcnzqbbc-OY,CM", "gzxnxJHCVaFxCkUMtYdY-DM", "rbYPDCXLUCiSRlEpSMSw-SY,OG", "VPoMBskQSadVYfniEOmx-EI", "aDMFtSlwaIQfOICKqBuD-ID", "pDDaLPPheOhuCtDgtjFB-AE", "rbYPDCXLUCiSRlEpSMSw-OG,SY", "reYiYQXyonJAUVkrEEyc-CB", "edBqHhmKHiPlHcnzqbbc-CM,OY", "ijfNuOVLTHzLUgvOHtbK-JV"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> placeboard = {"UIbQExbEsYnJENrcJOiB-DJ", "vGcRujkSHrjeImkGSMQh-IN", "zZPLIeUfLSQUenDQsxRf-TZ", "QrwhokUDledlEptjXhPB-NW", "MMaVYFChlqvMuPATxbxL-AO", "CiZbBAHCuZRvTAeAXMKy-MP", "SxMSPxYryOAvmhlVGuFE-TB", "SWTMtCVvwgBBrsrQiZji-MD", "fAjeUaMaOvdKMlayRvuE-NH", "RxJOBpvbdyPKCQHKYZlv-WF", "fDHOKFslYDlTdbJdUjfG-AX", "pGVoHIxIwGNMLMdwbTCw-RC", "ydovvNWBmzLwaKGMQPEI-AF", "cGGDYMDxNCbwnQtRgodO-KI", "HLtfiQcrYZJXhpXvAVNT-UB", "yedYAqtwMJvNHRNOSHIR-FZ", "FoWiaCaeSFFsSNeofbhj-ID", "AYctgetKBXHqBRWCWgoE-JM", "jdqsmTstOqkqDPUpNXLY-XF", "XfqaQaumSDKltAEfMiYq-VD"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"UIbQExbEsYnJENrcJOiB-DJ", "vGcRujkSHrjeImkGSMQh-IN", "zZPLIeUfLSQUenDQsxRf-TZ", "QrwhokUDledlEptjXhPB-NW", "MMaVYFChlqvMuPATxbxL-AO", "CiZbBAHCuZRvTAeAXMKy-MP", "SxMSPxYryOAvmhlVGuFE-TB", "SWTMtCVvwgBBrsrQiZji-MD", "fAjeUaMaOvdKMlayRvuE-NH", "RxJOBpvbdyPKCQHKYZlv-WF", "fDHOKFslYDlTdbJdUjfG-AX", "pGVoHIxIwGNMLMdwbTCw-RC", "ydovvNWBmzLwaKGMQPEI-AF", "cGGDYMDxNCbwnQtRgodO-KI", "HLtfiQcrYZJXhpXvAVNT-UB", "yedYAqtwMJvNHRNOSHIR-FZ", "FoWiaCaeSFFsSNeofbhj-ID", "AYctgetKBXHqBRWCWgoE-JM", "jdqsmTstOqkqDPUpNXLY-XF", "XfqaQaumSDKltAEfMiYq-VD"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> placeboard = {"PUVdDZwFQHvJHBnnvADO-YD", "pPXTHmfyLLGebqjUEqSY-NS", "ZaNOaWKDhQrcctnHMuuO-UM", "aadvKZPEyLAFlpgBVLkr-YS", "vNWRCwMtltpLLuGglSCd-MA", "pMtZLaEYuKGKaWXyisep-RM", "yYVimQCXOZLigvGNtKAm-MX", "WvddLcmdrTsCdQFjYUHT-JI", "afFqpQoDPTGSsMEecJjF-DD", "NNTzGVwWalMYGeQUZLQO-UV", "mQQQlGaKLFSQTNNYodiU-SL", "oBZbQAbUYbuOHwksIvcY-BO", "wLnWrrBUEDJkOVkvwpbu-OR", "KbInkNBGXdCRXFxpgKei-YU", "jmMxtoaBKQwAQyQTCjXC-UX", "tfuUuQOEVAAftlsKVUur-XD", "jbVzBcoSDDPDoJLaCqXy-RT", "iTybaMnTFiHnPQXksDGz-LY", "KWkTSxoquFjAFNpBpQmW-DU", "HKTDDaHZGgScvjnkltyv-FW"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PUVdDZwFQHvJHBnnvADO-YD", "pPXTHmfyLLGebqjUEqSY-NS", "ZaNOaWKDhQrcctnHMuuO-UM", "aadvKZPEyLAFlpgBVLkr-YS", "vNWRCwMtltpLLuGglSCd-MA", "pMtZLaEYuKGKaWXyisep-RM", "yYVimQCXOZLigvGNtKAm-MX", "WvddLcmdrTsCdQFjYUHT-JI", "afFqpQoDPTGSsMEecJjF-DD", "NNTzGVwWalMYGeQUZLQO-UV", "mQQQlGaKLFSQTNNYodiU-SL", "oBZbQAbUYbuOHwksIvcY-BO", "wLnWrrBUEDJkOVkvwpbu-OR", "KbInkNBGXdCRXFxpgKei-YU", "jmMxtoaBKQwAQyQTCjXC-UX", "tfuUuQOEVAAftlsKVUur-XD", "jbVzBcoSDDPDoJLaCqXy-RT", "iTybaMnTFiHnPQXksDGz-LY", "KWkTSxoquFjAFNpBpQmW-DU", "HKTDDaHZGgScvjnkltyv-FW"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> placeboard = {"JgIsRThVfUFWWWyKRjho-OO", "borlAFAwhPCkughbtrON-QO", "SpZinzdRIOOMpMXUkRWG-VK", "FxnjmGYLRQSsIULUSrZT-RL", "YKHdvnsIykkUZknolnvt-TL", "ZiIAeeAIJnrscPNixgJF-PB", "dNmqmVYybGtxzcYKiJaD-RD", "yWHgHtIXeKcQIlnEOChh-NV", "hsLqNrhwmhdSBcmisyZy-UM", "qigiYFLJtnVeLsxKYPia-ZZ", "XLaJUFIkAVyxFXNnwovN-ZR", "LtyKesJzoWtHIuNtUpGT-VZ", "ZUbxVRzdeooKUhLgGzDa-ZH", "SQJbhbyLHHMjAVBmcjAm-KO", "IAYMsDxxjjrgsvoxIZHO-XT", "MBUSrqDkZUAKZtTZprDF-ZD", "hsLqNrhwmhdSBcmisyZy-CW", "GeqWEvaGhYDPKeQtbqPW-HV", "oDdyqdFoQyDOuHztUIXh-VN", "HGaMCsizuPWgSTSunNtt-IP"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JgIsRThVfUFWWWyKRjho-OO", "borlAFAwhPCkughbtrON-QO", "SpZinzdRIOOMpMXUkRWG-VK", "FxnjmGYLRQSsIULUSrZT-RL", "YKHdvnsIykkUZknolnvt-TL", "ZiIAeeAIJnrscPNixgJF-PB", "dNmqmVYybGtxzcYKiJaD-RD", "yWHgHtIXeKcQIlnEOChh-NV", "hsLqNrhwmhdSBcmisyZy-UM,CW", "qigiYFLJtnVeLsxKYPia-ZZ", "XLaJUFIkAVyxFXNnwovN-ZR", "LtyKesJzoWtHIuNtUpGT-VZ", "ZUbxVRzdeooKUhLgGzDa-ZH", "SQJbhbyLHHMjAVBmcjAm-KO", "IAYMsDxxjjrgsvoxIZHO-XT", "MBUSrqDkZUAKZtTZprDF-ZD", "hsLqNrhwmhdSBcmisyZy-CW,UM", "GeqWEvaGhYDPKeQtbqPW-HV", "oDdyqdFoQyDOuHztUIXh-VN", "HGaMCsizuPWgSTSunNtt-IP"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> placeboard = {"TYYrxgsd-CD", "KYpQGEMqMFWIb-BJ", "qJemxADrZQgEMlAKy-RJ", "qJemxADrZQgEMlAKy-OF"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"TYYrxgsd-CD", "KYpQGEMqMFWIb-BJ", "qJemxADrZQgEMlAKy-RJ,OF", "qJemxADrZQgEMlAKy-OF,RJ"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> placeboard = {"eapv-KC", "Vo-BV"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"eapv-KC", "Vo-BV"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> placeboard = {"VYGahzHXYw-DU", "DvigL-GD", "uwsjn-JG", "gLraJRKmAMBUx-MU", "Wk-KG", "Wk-JO", "Wk-VX", "OfCUrjAdpCpjlpund-RH", "gLraJRKmAMBUx-QW", "HmvHqpNayrDorcDo-SP", "VYGahzHXYw-VP", "nkfEuLf-IX", "KyTgPk-ZU", "OfCUrjAdpCpjlpund-JM", "OfCUrjAdpCpjlpund-EL", "OfCUrjAdpCpjlpund-ZH", "OfCUrjAdpCpjlpund-OA", "Wk-ZS", "nkfEuLf-AO", "OfCUrjAdpCpjlpund-XY", "nkfEuLf-RR", "lCvSuCNPCfCm-UZ", "DvigL-JC", "KyTgPk-BB", "VYGahzHXYw-DA", "DvigL-JZ", "HmvHqpNayrDorcDo-PU", "Wk-SX", "VYGahzHXYw-HH", "lCvSuCNPCfCm-AO", "OfCUrjAdpCpjlpund-NL", "uwsjn-CP", "gLraJRKmAMBUx-DE", "Wk-XS", "uwsjn-MW", "HmvHqpNayrDorcDo-BI", "OfCUrjAdpCpjlpund-DA", "OfCUrjAdpCpjlpund-WB", "gLraJRKmAMBUx-XL", "lCvSuCNPCfCm-XK", "OfCUrjAdpCpjlpund-LD", "OfCUrjAdpCpjlpund-GI"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VYGahzHXYw-DU,DA,HH,VP", "DvigL-GD,JC,JZ", "uwsjn-JG,CP,MW", "gLraJRKmAMBUx-MU,DE,QW,XL", "Wk-KG,JO,SX,VX,XS,ZS", "Wk-JO,KG,SX,VX,XS,ZS", "Wk-VX,JO,KG,SX,XS,ZS", "OfCUrjAdpCpjlpund-RH,DA,EL,GI,JM,LD,NL,OA,WB,XY,ZH", "gLraJRKmAMBUx-QW,DE,MU,XL", "HmvHqpNayrDorcDo-SP,BI,PU", "VYGahzHXYw-VP,DA,DU,HH", "nkfEuLf-IX,AO,RR", "KyTgPk-ZU,BB", "OfCUrjAdpCpjlpund-JM,DA,EL,GI,LD,NL,OA,RH,WB,XY,ZH", "OfCUrjAdpCpjlpund-EL,DA,GI,JM,LD,NL,OA,RH,WB,XY,ZH", "OfCUrjAdpCpjlpund-ZH,DA,EL,GI,JM,LD,NL,OA,RH,WB,XY", "OfCUrjAdpCpjlpund-OA,DA,EL,GI,JM,LD,NL,RH,WB,XY,ZH", "Wk-ZS,JO,KG,SX,VX,XS", "nkfEuLf-AO,IX,RR", "OfCUrjAdpCpjlpund-XY,DA,EL,GI,JM,LD,NL,OA,RH,WB,ZH", "nkfEuLf-RR,AO,IX", "lCvSuCNPCfCm-UZ,AO,XK", "DvigL-JC,GD,JZ", "KyTgPk-BB,ZU", "VYGahzHXYw-DA,DU,HH,VP", "DvigL-JZ,GD,JC", "HmvHqpNayrDorcDo-PU,BI,SP", "Wk-SX,JO,KG,VX,XS,ZS", "VYGahzHXYw-HH,DA,DU,VP", "lCvSuCNPCfCm-AO,UZ,XK", "OfCUrjAdpCpjlpund-NL,DA,EL,GI,JM,LD,OA,RH,WB,XY,ZH", "uwsjn-CP,JG,MW", "gLraJRKmAMBUx-DE,MU,QW,XL", "Wk-XS,JO,KG,SX,VX,ZS", "uwsjn-MW,CP,JG", "HmvHqpNayrDorcDo-BI,PU,SP", "OfCUrjAdpCpjlpund-DA,EL,GI,JM,LD,NL,OA,RH,WB,XY,ZH", "OfCUrjAdpCpjlpund-WB,DA,EL,GI,JM,LD,NL,OA,RH,XY,ZH", "gLraJRKmAMBUx-XL,DE,MU,QW", "lCvSuCNPCfCm-XK,AO,UZ", "OfCUrjAdpCpjlpund-LD,DA,EL,GI,JM,NL,OA,RH,WB,XY,ZH", "OfCUrjAdpCpjlpund-GI,DA,EL,JM,LD,NL,OA,RH,WB,XY,ZH"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> placeboard = {"QoaeNbHIkEgUFQJT-SB", "KjePDjqnopJKUFMGk-HY", "hPFFhVbTkgLOH-AJ", "NxaexT-VK", "NxaexT-NP", "Zn-IQ", "qltnugXEQJyFgYjNH-NR", "QoaeNbHIkEgUFQJT-LB", "NxaexT-LJ", "KjePDjqnopJKUFMGk-TQ", "qltnugXEQJyFgYjNH-QP", "hPFFhVbTkgLOH-EA", "Zn-PJ", "QoaeNbHIkEgUFQJT-CG", "Zn-AH", "qltnugXEQJyFgYjNH-EM", "Zn-UU", "KjePDjqnopJKUFMGk-YH", "wFWvHlDcEImvN-PG", "wFWvHlDcEImvN-KL", "wFWvHlDcEImvN-WT", "rz-TJ", "KjePDjqnopJKUFMGk-WW", "KjePDjqnopJKUFMGk-WV", "KjePDjqnopJKUFMGk-NX", "KjePDjqnopJKUFMGk-TR", "NxaexT-TO", "ELjPTZ-WX", "hPFFhVbTkgLOH-ZV"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"QoaeNbHIkEgUFQJT-SB,CG,LB", "KjePDjqnopJKUFMGk-HY,NX,TQ,TR,WV,WW,YH", "hPFFhVbTkgLOH-AJ,EA,ZV", "NxaexT-VK,LJ,NP,TO", "NxaexT-NP,LJ,TO,VK", "Zn-IQ,AH,PJ,UU", "qltnugXEQJyFgYjNH-NR,EM,QP", "QoaeNbHIkEgUFQJT-LB,CG,SB", "NxaexT-LJ,NP,TO,VK", "KjePDjqnopJKUFMGk-TQ,HY,NX,TR,WV,WW,YH", "qltnugXEQJyFgYjNH-QP,EM,NR", "hPFFhVbTkgLOH-EA,AJ,ZV", "Zn-PJ,AH,IQ,UU", "QoaeNbHIkEgUFQJT-CG,LB,SB", "Zn-AH,IQ,PJ,UU", "qltnugXEQJyFgYjNH-EM,NR,QP", "Zn-UU,AH,IQ,PJ", "KjePDjqnopJKUFMGk-YH,HY,NX,TQ,TR,WV,WW", "wFWvHlDcEImvN-PG,KL,WT", "wFWvHlDcEImvN-KL,PG,WT", "wFWvHlDcEImvN-WT,KL,PG", "rz-TJ", "KjePDjqnopJKUFMGk-WW,HY,NX,TQ,TR,WV,YH", "KjePDjqnopJKUFMGk-WV,HY,NX,TQ,TR,WW,YH", "KjePDjqnopJKUFMGk-NX,HY,TQ,TR,WV,WW,YH", "KjePDjqnopJKUFMGk-TR,HY,NX,TQ,WV,WW,YH", "NxaexT-TO,LJ,NP,VK", "ELjPTZ-WX", "hPFFhVbTkgLOH-ZV,AJ,EA"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> placeboard = {"DdRmsxanpXaL-IV", "Uk-KL", "CqKZnZmaGJpQpfDPYPd-GH", "VPd-MO", "qrvxzjzoh-RM", "NGdJeKcKuVszQ-YJ", "VPd-TR", "DdRmsxanpXaL-UC", "udSX-ZL", "DdRmsxanpXaL-ZH", "NGdJeKcKuVszQ-BE", "DdRmsxanpXaL-QS", "XiWp-ZR", "Uk-RT", "udSX-JN", "NGdJeKcKuVszQ-LW", "DdRmsxanpXaL-OJ", "VPd-YN", "CqKZnZmaGJpQpfDPYPd-WZ", "XiWp-FS", "Uk-HH", "CqKZnZmaGJpQpfDPYPd-VL", "VPd-SX", "NGdJeKcKuVszQ-PE", "AjGfOHziikVOLh-KH", "NGdJeKcKuVszQ-WE", "CqKZnZmaGJpQpfDPYPd-OV", "CqKZnZmaGJpQpfDPYPd-JX"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DdRmsxanpXaL-IV,OJ,QS,UC,ZH", "Uk-KL,HH,RT", "CqKZnZmaGJpQpfDPYPd-GH,JX,OV,VL,WZ", "VPd-MO,SX,TR,YN", "qrvxzjzoh-RM", "NGdJeKcKuVszQ-YJ,BE,LW,PE,WE", "VPd-TR,MO,SX,YN", "DdRmsxanpXaL-UC,IV,OJ,QS,ZH", "udSX-ZL,JN", "DdRmsxanpXaL-ZH,IV,OJ,QS,UC", "NGdJeKcKuVszQ-BE,LW,PE,WE,YJ", "DdRmsxanpXaL-QS,IV,OJ,UC,ZH", "XiWp-ZR,FS", "Uk-RT,HH,KL", "udSX-JN,ZL", "NGdJeKcKuVszQ-LW,BE,PE,WE,YJ", "DdRmsxanpXaL-OJ,IV,QS,UC,ZH", "VPd-YN,MO,SX,TR", "CqKZnZmaGJpQpfDPYPd-WZ,GH,JX,OV,VL", "XiWp-FS,ZR", "Uk-HH,KL,RT", "CqKZnZmaGJpQpfDPYPd-VL,GH,JX,OV,WZ", "VPd-SX,MO,TR,YN", "NGdJeKcKuVszQ-PE,BE,LW,WE,YJ", "AjGfOHziikVOLh-KH", "NGdJeKcKuVszQ-WE,BE,LW,PE,YJ", "CqKZnZmaGJpQpfDPYPd-OV,GH,JX,VL,WZ", "CqKZnZmaGJpQpfDPYPd-JX,GH,OV,VL,WZ"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> placeboard = {"pqqqusPhlBiYQTB-HQ", "SZqyV-QJ", "tiTJQHBleYSysiVZfE-XI", "YLyiSGurCjWYwv-GC", "pqqqusPhlBiYQTB-RW", "YLyiSGurCjWYwv-SC", "tcmVARRMPIOonmXmEZgB-ZN", "tiTJQHBleYSysiVZfE-RT", "XNZGrzbYwlaw-NY", "YLyiSGurCjWYwv-KE", "YLyiSGurCjWYwv-NG", "wwkqLAKxBze-XO", "YLyiSGurCjWYwv-XR", "u-JW", "xfWJcoXQtzDGFgKCRcNi-KE", "u-XX", "tiTJQHBleYSysiVZfE-LL", "tiTJQHBleYSysiVZfE-XN", "xfWJcoXQtzDGFgKCRcNi-HV", "YLyiSGurCjWYwv-PC", "tiTJQHBleYSysiVZfE-PS", "XNZGrzbYwlaw-SW", "pqqqusPhlBiYQTB-UX", "e-XA", "tcmVARRMPIOonmXmEZgB-BA", "tcmVARRMPIOonmXmEZgB-DW", "SZqyV-FC", "u-OS", "tcmVARRMPIOonmXmEZgB-ZT"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"pqqqusPhlBiYQTB-HQ,RW,UX", "SZqyV-QJ,FC", "tiTJQHBleYSysiVZfE-XI,LL,PS,RT,XN", "YLyiSGurCjWYwv-GC,KE,NG,PC,SC,XR", "pqqqusPhlBiYQTB-RW,HQ,UX", "YLyiSGurCjWYwv-SC,GC,KE,NG,PC,XR", "tcmVARRMPIOonmXmEZgB-ZN,BA,DW,ZT", "tiTJQHBleYSysiVZfE-RT,LL,PS,XI,XN", "XNZGrzbYwlaw-NY,SW", "YLyiSGurCjWYwv-KE,GC,NG,PC,SC,XR", "YLyiSGurCjWYwv-NG,GC,KE,PC,SC,XR", "wwkqLAKxBze-XO", "YLyiSGurCjWYwv-XR,GC,KE,NG,PC,SC", "u-JW,OS,XX", "xfWJcoXQtzDGFgKCRcNi-KE,HV", "u-XX,JW,OS", "tiTJQHBleYSysiVZfE-LL,PS,RT,XI,XN", "tiTJQHBleYSysiVZfE-XN,LL,PS,RT,XI", "xfWJcoXQtzDGFgKCRcNi-HV,KE", "YLyiSGurCjWYwv-PC,GC,KE,NG,SC,XR", "tiTJQHBleYSysiVZfE-PS,LL,RT,XI,XN", "XNZGrzbYwlaw-SW,NY", "pqqqusPhlBiYQTB-UX,HQ,RW", "e-XA", "tcmVARRMPIOonmXmEZgB-BA,DW,ZN,ZT", "tcmVARRMPIOonmXmEZgB-DW,BA,ZN,ZT", "SZqyV-FC,QJ", "u-OS,JW,XX", "tcmVARRMPIOonmXmEZgB-ZT,BA,DW,ZN"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> placeboard = {"s-TC", "LCUIxCtHiLXrhi-BG", "OfrIUfIqMapYTOHKxSp-PO", "dlYZAH-DK", "DyXciYY-GJ", "u-NW", "DyXciYY-GK", "OfrIUfIqMapYTOHKxSp-XV", "OfrIUfIqMapYTOHKxSp-AX", "dlYZAH-FA", "LCUIxCtHiLXrhi-QW", "eGDiPTlDbwsOwkyM-NG", "dlYZAH-UN", "OfrIUfIqMapYTOHKxSp-LP", "eGDiPTlDbwsOwkyM-VS", "u-SC"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"s-TC", "LCUIxCtHiLXrhi-BG,QW", "OfrIUfIqMapYTOHKxSp-PO,AX,LP,XV", "dlYZAH-DK,FA,UN", "DyXciYY-GJ,GK", "u-NW,SC", "DyXciYY-GK,GJ", "OfrIUfIqMapYTOHKxSp-XV,AX,LP,PO", "OfrIUfIqMapYTOHKxSp-AX,LP,PO,XV", "dlYZAH-FA,DK,UN", "LCUIxCtHiLXrhi-QW,BG", "eGDiPTlDbwsOwkyM-NG,VS", "dlYZAH-UN,DK,FA", "OfrIUfIqMapYTOHKxSp-LP,AX,PO,XV", "eGDiPTlDbwsOwkyM-VS,NG", "u-SC,NW"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> placeboard = {"WcOoIjRxSblhlgQ-OB", "MPAfpTwfJhyEDMpqXDrV-DS", "khfkLpJwQRc-YC", "kZKPLoLa-GK", "khfkLpJwQRc-ZQ", "WcOoIjRxSblhlgQ-VQ", "wqnNy-JW", "ijmQgA-IE", "wqnNy-ZS", "kZKPLoLa-GN", "kZKPLoLa-XM", "kZKPLoLa-BK", "oKbShRSHYkURnNgJMb-MQ", "zegbCR-BA", "kZKPLoLa-UC", "WcOoIjRxSblhlgQ-WT", "WcOoIjRxSblhlgQ-DT", "oKbShRSHYkURnNgJMb-VF", "kZKPLoLa-JI", "zegbCR-CD", "MPAfpTwfJhyEDMpqXDrV-WZ", "zegbCR-RV", "zegbCR-OU", "xASb-CH", "zegbCR-LP", "MPAfpTwfJhyEDMpqXDrV-DU", "zegbCR-WX", "wqnNy-ZK", "MPAfpTwfJhyEDMpqXDrV-CY", "AQzkmr-OQ"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WcOoIjRxSblhlgQ-OB,DT,VQ,WT", "MPAfpTwfJhyEDMpqXDrV-DS,CY,DU,WZ", "khfkLpJwQRc-YC,ZQ", "kZKPLoLa-GK,BK,GN,JI,UC,XM", "khfkLpJwQRc-ZQ,YC", "WcOoIjRxSblhlgQ-VQ,DT,OB,WT", "wqnNy-JW,ZK,ZS", "ijmQgA-IE", "wqnNy-ZS,JW,ZK", "kZKPLoLa-GN,BK,GK,JI,UC,XM", "kZKPLoLa-XM,BK,GK,GN,JI,UC", "kZKPLoLa-BK,GK,GN,JI,UC,XM", "oKbShRSHYkURnNgJMb-MQ,VF", "zegbCR-BA,CD,LP,OU,RV,WX", "kZKPLoLa-UC,BK,GK,GN,JI,XM", "WcOoIjRxSblhlgQ-WT,DT,OB,VQ", "WcOoIjRxSblhlgQ-DT,OB,VQ,WT", "oKbShRSHYkURnNgJMb-VF,MQ", "kZKPLoLa-JI,BK,GK,GN,UC,XM", "zegbCR-CD,BA,LP,OU,RV,WX", "MPAfpTwfJhyEDMpqXDrV-WZ,CY,DS,DU", "zegbCR-RV,BA,CD,LP,OU,WX", "zegbCR-OU,BA,CD,LP,RV,WX", "xASb-CH", "zegbCR-LP,BA,CD,OU,RV,WX", "MPAfpTwfJhyEDMpqXDrV-DU,CY,DS,WZ", "zegbCR-WX,BA,CD,LP,OU,RV", "wqnNy-ZK,JW,ZS", "MPAfpTwfJhyEDMpqXDrV-CY,DS,DU,WZ", "AQzkmr-OQ"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> placeboard = {"mRpkWbgwiaZvip-XP", "yRxeJpeAtsKhyVKpQmI-OW", "TyrUOMpmbHJqqzz-PL", "YUtedbLKgJWFsl-KE", "yRxeJpeAtsKhyVKpQmI-RY", "wkaNdC-FW", "QngdOdILUNQl-TS", "YUtedbLKgJWFsl-UQ", "mRpkWbgwiaZvip-AF", "yRxeJpeAtsKhyVKpQmI-GY", "FKSZdUFlIAC-VR", "YUtedbLKgJWFsl-YS", "yRxeJpeAtsKhyVKpQmI-GX", "yRxeJpeAtsKhyVKpQmI-BB", "wkaNdC-VM", "YUtedbLKgJWFsl-OO", "mRpkWbgwiaZvip-BQ", "YUtedbLKgJWFsl-WQ", "yRxeJpeAtsKhyVKpQmI-SE", "CvpjIuZRZVKt-VY", "yoCtx-BH", "yoCtx-VY", "CvpjIuZRZVKt-BL", "QngdOdILUNQl-XX", "CvpjIuZRZVKt-QC", "oqINQdQ-AV", "yRxeJpeAtsKhyVKpQmI-ZO", "oqINQdQ-MP", "TyrUOMpmbHJqqzz-PB", "oqINQdQ-XG", "yRxeJpeAtsKhyVKpQmI-SR", "QngdOdILUNQl-PU", "CvpjIuZRZVKt-LZ", "TyrUOMpmbHJqqzz-TM", "FKSZdUFlIAC-NY", "yRxeJpeAtsKhyVKpQmI-NS", "YUtedbLKgJWFsl-VQ", "YUtedbLKgJWFsl-TR", "wkaNdC-OT", "QngdOdILUNQl-NS", "YUtedbLKgJWFsl-LV", "QngdOdILUNQl-DB", "mRpkWbgwiaZvip-WR", "QngdOdILUNQl-QV", "FKSZdUFlIAC-RZ", "wkaNdC-TU", "wkaNdC-BU", "wkaNdC-OC", "wkaNdC-WA", "YUtedbLKgJWFsl-UM"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mRpkWbgwiaZvip-XP,AF,BQ,WR", "yRxeJpeAtsKhyVKpQmI-OW,BB,GX,GY,NS,RY,SE,SR,ZO", "TyrUOMpmbHJqqzz-PL,PB,TM", "YUtedbLKgJWFsl-KE,LV,OO,TR,UM,UQ,VQ,WQ,YS", "yRxeJpeAtsKhyVKpQmI-RY,BB,GX,GY,NS,OW,SE,SR,ZO", "wkaNdC-FW,BU,OC,OT,TU,VM,WA", "QngdOdILUNQl-TS,DB,NS,PU,QV,XX", "YUtedbLKgJWFsl-UQ,KE,LV,OO,TR,UM,VQ,WQ,YS", "mRpkWbgwiaZvip-AF,BQ,WR,XP", "yRxeJpeAtsKhyVKpQmI-GY,BB,GX,NS,OW,RY,SE,SR,ZO", "FKSZdUFlIAC-VR,NY,RZ", "YUtedbLKgJWFsl-YS,KE,LV,OO,TR,UM,UQ,VQ,WQ", "yRxeJpeAtsKhyVKpQmI-GX,BB,GY,NS,OW,RY,SE,SR,ZO", "yRxeJpeAtsKhyVKpQmI-BB,GX,GY,NS,OW,RY,SE,SR,ZO", "wkaNdC-VM,BU,FW,OC,OT,TU,WA", "YUtedbLKgJWFsl-OO,KE,LV,TR,UM,UQ,VQ,WQ,YS", "mRpkWbgwiaZvip-BQ,AF,WR,XP", "YUtedbLKgJWFsl-WQ,KE,LV,OO,TR,UM,UQ,VQ,YS", "yRxeJpeAtsKhyVKpQmI-SE,BB,GX,GY,NS,OW,RY,SR,ZO", "CvpjIuZRZVKt-VY,BL,LZ,QC", "yoCtx-BH,VY", "yoCtx-VY,BH", "CvpjIuZRZVKt-BL,LZ,QC,VY", "QngdOdILUNQl-XX,DB,NS,PU,QV,TS", "CvpjIuZRZVKt-QC,BL,LZ,VY", "oqINQdQ-AV,MP,XG", "yRxeJpeAtsKhyVKpQmI-ZO,BB,GX,GY,NS,OW,RY,SE,SR", "oqINQdQ-MP,AV,XG", "TyrUOMpmbHJqqzz-PB,PL,TM", "oqINQdQ-XG,AV,MP", "yRxeJpeAtsKhyVKpQmI-SR,BB,GX,GY,NS,OW,RY,SE,ZO", "QngdOdILUNQl-PU,DB,NS,QV,TS,XX", "CvpjIuZRZVKt-LZ,BL,QC,VY", "TyrUOMpmbHJqqzz-TM,PB,PL", "FKSZdUFlIAC-NY,RZ,VR", "yRxeJpeAtsKhyVKpQmI-NS,BB,GX,GY,OW,RY,SE,SR,ZO", "YUtedbLKgJWFsl-VQ,KE,LV,OO,TR,UM,UQ,WQ,YS", "YUtedbLKgJWFsl-TR,KE,LV,OO,UM,UQ,VQ,WQ,YS", "wkaNdC-OT,BU,FW,OC,TU,VM,WA", "QngdOdILUNQl-NS,DB,PU,QV,TS,XX", "YUtedbLKgJWFsl-LV,KE,OO,TR,UM,UQ,VQ,WQ,YS", "QngdOdILUNQl-DB,NS,PU,QV,TS,XX", "mRpkWbgwiaZvip-WR,AF,BQ,XP", "QngdOdILUNQl-QV,DB,NS,PU,TS,XX", "FKSZdUFlIAC-RZ,NY,VR", "wkaNdC-TU,BU,FW,OC,OT,VM,WA", "wkaNdC-BU,FW,OC,OT,TU,VM,WA", "wkaNdC-OC,BU,FW,OT,TU,VM,WA", "wkaNdC-WA,BU,FW,OC,OT,TU,VM", "YUtedbLKgJWFsl-UM,KE,LV,OO,TR,UQ,VQ,WQ,YS"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> placeboard = {"FKNt-LZ", "BiKGtlwbW-GT", "UMMISV-VS", "FKNt-XS", "BiKGtlwbW-AV", "UMMISV-FF", "zIOmFFuhE-OX", "lhhHKJkTPV-LS", "UMMISV-SF", "BiKGtlwbW-SE", "FKNt-BE", "FKNt-IP", "ayGc-SU", "WHfzlZtjKoZvLo-GM", "FKNt-WR", "sBpmhxworsYXv-XP", "WHfzlZtjKoZvLo-LO", "UMMISV-WM", "sBpmhxworsYXv-GM", "wFEFjcDbeWG-ZD", "sBpmhxworsYXv-RV", "zIOmFFuhE-LI", "WHfzlZtjKoZvLo-JF"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FKNt-LZ,BE,IP,WR,XS", "BiKGtlwbW-GT,AV,SE", "UMMISV-VS,FF,SF,WM", "FKNt-XS,BE,IP,LZ,WR", "BiKGtlwbW-AV,GT,SE", "UMMISV-FF,SF,VS,WM", "zIOmFFuhE-OX,LI", "lhhHKJkTPV-LS", "UMMISV-SF,FF,VS,WM", "BiKGtlwbW-SE,AV,GT", "FKNt-BE,IP,LZ,WR,XS", "FKNt-IP,BE,LZ,WR,XS", "ayGc-SU", "WHfzlZtjKoZvLo-GM,JF,LO", "FKNt-WR,BE,IP,LZ,XS", "sBpmhxworsYXv-XP,GM,RV", "WHfzlZtjKoZvLo-LO,GM,JF", "UMMISV-WM,FF,SF,VS", "sBpmhxworsYXv-GM,RV,XP", "wFEFjcDbeWG-ZD", "sBpmhxworsYXv-RV,GM,XP", "zIOmFFuhE-LI,OX", "WHfzlZtjKoZvLo-JF,GM,LO"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> placeboard = {"hnYqPakNtJiac-VL", "LhQbnAxILXom-TU", "hnYqPakNtJiac-ND", "ubOzZ-DI", "LhQbnAxILXom-BB", "ubOzZ-VM", "LhQbnAxILXom-PY", "hnYqPakNtJiac-JI", "LhQbnAxILXom-YO", "VIeXZSAmHal-NO", "AILSPeXHsbAtSskhf-SN", "hnYqPakNtJiac-UE", "XOYNRtgzde-GB", "Yvx-SB", "KhPkLXUaDVGCTK-EB", "LhQbnAxILXom-SN", "VIeXZSAmHal-VR", "ubOzZ-XC", "PDbgdOk-ER", "PDbgdOk-IY", "hnYqPakNtJiac-CL", "KhPkLXUaDVGCTK-OY", "Yvx-DW", "LhQbnAxILXom-SM", "PDbgdOk-IK", "hnYqPakNtJiac-EK", "hnYqPakNtJiac-GA", "Yvx-MB", "hnYqPakNtJiac-WS", "ubOzZ-YK", "VIeXZSAmHal-TL", "Yvx-SL", "FEhPJVKfGG-WS", "FEhPJVKfGG-BM", "AILSPeXHsbAtSskhf-PS", "PDbgdOk-OE", "FEhPJVKfGG-HV", "VIeXZSAmHal-LX", "hnYqPakNtJiac-KJ", "FEhPJVKfGG-RJ", "FEhPJVKfGG-YB", "ubOzZ-LO", "KhPkLXUaDVGCTK-DQ", "FEhPJVKfGG-JH", "AILSPeXHsbAtSskhf-ZS", "AILSPeXHsbAtSskhf-IP", "ubOzZ-DT", "VIeXZSAmHal-HD", "LhQbnAxILXom-JD"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hnYqPakNtJiac-VL,CL,EK,GA,JI,KJ,ND,UE,WS", "LhQbnAxILXom-TU,BB,JD,PY,SM,SN,YO", "hnYqPakNtJiac-ND,CL,EK,GA,JI,KJ,UE,VL,WS", "ubOzZ-DI,DT,LO,VM,XC,YK", "LhQbnAxILXom-BB,JD,PY,SM,SN,TU,YO", "ubOzZ-VM,DI,DT,LO,XC,YK", "LhQbnAxILXom-PY,BB,JD,SM,SN,TU,YO", "hnYqPakNtJiac-JI,CL,EK,GA,KJ,ND,UE,VL,WS", "LhQbnAxILXom-YO,BB,JD,PY,SM,SN,TU", "VIeXZSAmHal-NO,HD,LX,TL,VR", "AILSPeXHsbAtSskhf-SN,IP,PS,ZS", "hnYqPakNtJiac-UE,CL,EK,GA,JI,KJ,ND,VL,WS", "XOYNRtgzde-GB", "Yvx-SB,DW,MB,SL", "KhPkLXUaDVGCTK-EB,DQ,OY", "LhQbnAxILXom-SN,BB,JD,PY,SM,TU,YO", "VIeXZSAmHal-VR,HD,LX,NO,TL", "ubOzZ-XC,DI,DT,LO,VM,YK", "PDbgdOk-ER,IK,IY,OE", "PDbgdOk-IY,ER,IK,OE", "hnYqPakNtJiac-CL,EK,GA,JI,KJ,ND,UE,VL,WS", "KhPkLXUaDVGCTK-OY,DQ,EB", "Yvx-DW,MB,SB,SL", "LhQbnAxILXom-SM,BB,JD,PY,SN,TU,YO", "PDbgdOk-IK,ER,IY,OE", "hnYqPakNtJiac-EK,CL,GA,JI,KJ,ND,UE,VL,WS", "hnYqPakNtJiac-GA,CL,EK,JI,KJ,ND,UE,VL,WS", "Yvx-MB,DW,SB,SL", "hnYqPakNtJiac-WS,CL,EK,GA,JI,KJ,ND,UE,VL", "ubOzZ-YK,DI,DT,LO,VM,XC", "VIeXZSAmHal-TL,HD,LX,NO,VR", "Yvx-SL,DW,MB,SB", "FEhPJVKfGG-WS,BM,HV,JH,RJ,YB", "FEhPJVKfGG-BM,HV,JH,RJ,WS,YB", "AILSPeXHsbAtSskhf-PS,IP,SN,ZS", "PDbgdOk-OE,ER,IK,IY", "FEhPJVKfGG-HV,BM,JH,RJ,WS,YB", "VIeXZSAmHal-LX,HD,NO,TL,VR", "hnYqPakNtJiac-KJ,CL,EK,GA,JI,ND,UE,VL,WS", "FEhPJVKfGG-RJ,BM,HV,JH,WS,YB", "FEhPJVKfGG-YB,BM,HV,JH,RJ,WS", "ubOzZ-LO,DI,DT,VM,XC,YK", "KhPkLXUaDVGCTK-DQ,EB,OY", "FEhPJVKfGG-JH,BM,HV,RJ,WS,YB", "AILSPeXHsbAtSskhf-ZS,IP,PS,SN", "AILSPeXHsbAtSskhf-IP,PS,SN,ZS", "ubOzZ-DT,DI,LO,VM,XC,YK", "VIeXZSAmHal-HD,LX,NO,TL,VR", "LhQbnAxILXom-JD,BB,PY,SM,SN,TU,YO"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> placeboard = {"aUspvjdt-HY", "aUspvjdt-EM", "pnQJtuBfh-OR", "pnQJtuBfh-BH", "JVbPwrzMnuvMD-RU", "pnQJtuBfh-QQ", "xgOFlrMyOpRr-WT", "JVbPwrzMnuvMD-BI", "hSOoFAgCobrUrUttg-NP", "oWAUaNde-NQ", "xgOFlrMyOpRr-DL"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aUspvjdt-HY,EM", "aUspvjdt-EM,HY", "pnQJtuBfh-OR,BH,QQ", "pnQJtuBfh-BH,OR,QQ", "JVbPwrzMnuvMD-RU,BI", "pnQJtuBfh-QQ,BH,OR", "xgOFlrMyOpRr-WT,DL", "JVbPwrzMnuvMD-BI,RU", "hSOoFAgCobrUrUttg-NP", "oWAUaNde-NQ", "xgOFlrMyOpRr-DL,WT"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> placeboard = {"GDWoXLjxgKHfEU-ON", "kwOpTWNMPqsY-FA", "BOFdAJPrDeZwq-PC", "kwOpTWNMPqsY-WV", "OgUzCtyxzDfIX-AT", "bBCEjWPSZm-WT", "OgUzCtyxzDfIX-IE", "R-QW", "OgUzCtyxzDfIX-SF", "pIwTbfTtMdlI-VR", "TvqJYBbn-EY", "pIwTbfTtMdlI-VX", "bBCEjWPSZm-IR", "kwOpTWNMPqsY-GO", "pIwTbfTtMdlI-SF", "R-BM", "kwOpTWNMPqsY-KB", "R-BQ"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GDWoXLjxgKHfEU-ON", "kwOpTWNMPqsY-FA,GO,KB,WV", "BOFdAJPrDeZwq-PC", "kwOpTWNMPqsY-WV,FA,GO,KB", "OgUzCtyxzDfIX-AT,IE,SF", "bBCEjWPSZm-WT,IR", "OgUzCtyxzDfIX-IE,AT,SF", "R-QW,BM,BQ", "OgUzCtyxzDfIX-SF,AT,IE", "pIwTbfTtMdlI-VR,SF,VX", "TvqJYBbn-EY", "pIwTbfTtMdlI-VX,SF,VR", "bBCEjWPSZm-IR,WT", "kwOpTWNMPqsY-GO,FA,KB,WV", "pIwTbfTtMdlI-SF,VR,VX", "R-BM,BQ,QW", "kwOpTWNMPqsY-KB,FA,GO,WV", "R-BQ,BM,QW"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> placeboard = {"FEnKXTlLhMz-BE", "TovCgnWXS-PP", "Jx-ZT", "cmowAD-EK", "Jx-ER", "VZDzhrUlTQcZv-MF", "Jx-ZF", "cmowAD-BS", "Jx-FM", "Jx-ZP", "cmowAD-KE", "FEnKXTlLhMz-VH", "FEnKXTlLhMz-CY", "Jx-TD", "AwMuXP-XX", "JJVMqMwtVZkfGuPfGw-CI", "TovCgnWXS-CY", "n-GT", "n-MA", "JJVMqMwtVZkfGuPfGw-OT", "mfxHoKCl-FC", "AwMuXP-DO", "mfxHoKCl-FP", "n-RT", "TovCgnWXS-DL", "mfxHoKCl-TY", "mfxHoKCl-UG", "cmowAD-IN", "USB-XV", "n-QH", "mfxHoKCl-KW", "Jx-JS", "mfxHoKCl-MO", "JJVMqMwtVZkfGuPfGw-ZR"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FEnKXTlLhMz-BE,CY,VH", "TovCgnWXS-PP,CY,DL", "Jx-ZT,ER,FM,JS,TD,ZF,ZP", "cmowAD-EK,BS,IN,KE", "Jx-ER,FM,JS,TD,ZF,ZP,ZT", "VZDzhrUlTQcZv-MF", "Jx-ZF,ER,FM,JS,TD,ZP,ZT", "cmowAD-BS,EK,IN,KE", "Jx-FM,ER,JS,TD,ZF,ZP,ZT", "Jx-ZP,ER,FM,JS,TD,ZF,ZT", "cmowAD-KE,BS,EK,IN", "FEnKXTlLhMz-VH,BE,CY", "FEnKXTlLhMz-CY,BE,VH", "Jx-TD,ER,FM,JS,ZF,ZP,ZT", "AwMuXP-XX,DO", "JJVMqMwtVZkfGuPfGw-CI,OT,ZR", "TovCgnWXS-CY,DL,PP", "n-GT,MA,QH,RT", "n-MA,GT,QH,RT", "JJVMqMwtVZkfGuPfGw-OT,CI,ZR", "mfxHoKCl-FC,FP,KW,MO,TY,UG", "AwMuXP-DO,XX", "mfxHoKCl-FP,FC,KW,MO,TY,UG", "n-RT,GT,MA,QH", "TovCgnWXS-DL,CY,PP", "mfxHoKCl-TY,FC,FP,KW,MO,UG", "mfxHoKCl-UG,FC,FP,KW,MO,TY", "cmowAD-IN,BS,EK,KE", "USB-XV", "n-QH,GT,MA,RT", "mfxHoKCl-KW,FC,FP,MO,TY,UG", "Jx-JS,ER,FM,TD,ZF,ZP,ZT", "mfxHoKCl-MO,FC,FP,KW,TY,UG", "JJVMqMwtVZkfGuPfGw-ZR,CI,OT"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> placeboard = {"AbskEsL-IK", "AbskEsL-NR", "CpuNPVKXZXah-ME", "uFkSwzcclxpVRP-XB", "YnLkHqvsDzGFVjaj-ZX", "AbskEsL-IC", "AbskEsL-VH", "SgWgMGdlLAYdWUWBMk-NF", "CpuNPVKXZXah-UG", "dNJHypSGyBHMIKmRkJS-FD", "YnLkHqvsDzGFVjaj-TF", "xtgCFXokakHpoBZgzc-SZ", "SgWgMGdlLAYdWUWBMk-JH", "ANNfzBXjp-ZR", "xtgCFXokakHpoBZgzc-HH"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AbskEsL-IK,IC,NR,VH", "AbskEsL-NR,IC,IK,VH", "CpuNPVKXZXah-ME,UG", "uFkSwzcclxpVRP-XB", "YnLkHqvsDzGFVjaj-ZX,TF", "AbskEsL-IC,IK,NR,VH", "AbskEsL-VH,IC,IK,NR", "SgWgMGdlLAYdWUWBMk-NF,JH", "CpuNPVKXZXah-UG,ME", "dNJHypSGyBHMIKmRkJS-FD", "YnLkHqvsDzGFVjaj-TF,ZX", "xtgCFXokakHpoBZgzc-SZ,HH", "SgWgMGdlLAYdWUWBMk-JH,NF", "ANNfzBXjp-ZR", "xtgCFXokakHpoBZgzc-HH,SZ"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> placeboard = {"hDaeAYlHmWy-PV", "vKRyftuu-ZV", "zjGHVkTLlsDjVyOzpE-ZC", "qMEEJxXHwehSVswo-GU", "u-AT", "AMFm-YL", "qMEEJxXHwehSVswo-AG", "RIhNAbOZIxSSToFbHBFs-GC", "hDaeAYlHmWy-EU", "qMEEJxXHwehSVswo-PJ", "oehwRXGSihzzMWm-VV", "hDaeAYlHmWy-YR", "u-FE", "oehwRXGSihzzMWm-JE", "oehwRXGSihzzMWm-ZC", "zjGHVkTLlsDjVyOzpE-PS", "hDaeAYlHmWy-QJ", "vKRyftuu-PZ", "zjGHVkTLlsDjVyOzpE-OM", "OQbWGLcnuIkdLVrDbj-BY", "hDaeAYlHmWy-AW", "hDaeAYlHmWy-PZ", "oehwRXGSihzzMWm-WI", "RIhNAbOZIxSSToFbHBFs-NE", "vKRyftuu-XJ", "u-PY", "u-LG", "vKRyftuu-CX", "hDaeAYlHmWy-JE", "RIhNAbOZIxSSToFbHBFs-VV", "hDaeAYlHmWy-GC", "vKRyftuu-GG", "AMFm-VC", "AMFm-IZ", "AMFm-KU", "OQbWGLcnuIkdLVrDbj-HK", "qMEEJxXHwehSVswo-FJ", "PtVLysFp-ZW", "PtVLysFp-NF", "AMFm-RF", "hDaeAYlHmWy-YC", "oehwRXGSihzzMWm-IA", "OQbWGLcnuIkdLVrDbj-QF", "OQbWGLcnuIkdLVrDbj-VH", "hDaeAYlHmWy-RX"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hDaeAYlHmWy-PV,AW,EU,GC,JE,PZ,QJ,RX,YC,YR", "vKRyftuu-ZV,CX,GG,PZ,XJ", "zjGHVkTLlsDjVyOzpE-ZC,OM,PS", "qMEEJxXHwehSVswo-GU,AG,FJ,PJ", "u-AT,FE,LG,PY", "AMFm-YL,IZ,KU,RF,VC", "qMEEJxXHwehSVswo-AG,FJ,GU,PJ", "RIhNAbOZIxSSToFbHBFs-GC,NE,VV", "hDaeAYlHmWy-EU,AW,GC,JE,PV,PZ,QJ,RX,YC,YR", "qMEEJxXHwehSVswo-PJ,AG,FJ,GU", "oehwRXGSihzzMWm-VV,IA,JE,WI,ZC", "hDaeAYlHmWy-YR,AW,EU,GC,JE,PV,PZ,QJ,RX,YC", "u-FE,AT,LG,PY", "oehwRXGSihzzMWm-JE,IA,VV,WI,ZC", "oehwRXGSihzzMWm-ZC,IA,JE,VV,WI", "zjGHVkTLlsDjVyOzpE-PS,OM,ZC", "hDaeAYlHmWy-QJ,AW,EU,GC,JE,PV,PZ,RX,YC,YR", "vKRyftuu-PZ,CX,GG,XJ,ZV", "zjGHVkTLlsDjVyOzpE-OM,PS,ZC", "OQbWGLcnuIkdLVrDbj-BY,HK,QF,VH", "hDaeAYlHmWy-AW,EU,GC,JE,PV,PZ,QJ,RX,YC,YR", "hDaeAYlHmWy-PZ,AW,EU,GC,JE,PV,QJ,RX,YC,YR", "oehwRXGSihzzMWm-WI,IA,JE,VV,ZC", "RIhNAbOZIxSSToFbHBFs-NE,GC,VV", "vKRyftuu-XJ,CX,GG,PZ,ZV", "u-PY,AT,FE,LG", "u-LG,AT,FE,PY", "vKRyftuu-CX,GG,PZ,XJ,ZV", "hDaeAYlHmWy-JE,AW,EU,GC,PV,PZ,QJ,RX,YC,YR", "RIhNAbOZIxSSToFbHBFs-VV,GC,NE", "hDaeAYlHmWy-GC,AW,EU,JE,PV,PZ,QJ,RX,YC,YR", "vKRyftuu-GG,CX,PZ,XJ,ZV", "AMFm-VC,IZ,KU,RF,YL", "AMFm-IZ,KU,RF,VC,YL", "AMFm-KU,IZ,RF,VC,YL", "OQbWGLcnuIkdLVrDbj-HK,BY,QF,VH", "qMEEJxXHwehSVswo-FJ,AG,GU,PJ", "PtVLysFp-ZW,NF", "PtVLysFp-NF,ZW", "AMFm-RF,IZ,KU,VC,YL", "hDaeAYlHmWy-YC,AW,EU,GC,JE,PV,PZ,QJ,RX,YR", "oehwRXGSihzzMWm-IA,JE,VV,WI,ZC", "OQbWGLcnuIkdLVrDbj-QF,BY,HK,VH", "OQbWGLcnuIkdLVrDbj-VH,BY,HK,QF", "hDaeAYlHmWy-RX,AW,EU,GC,JE,PV,PZ,QJ,YC,YR"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> placeboard = {"VYro-AC", "BMKxgtLLYyEvqw-EA", "BVENbXmnrbNisO-WC", "BVENbXmnrbNisO-SK", "BMKxgtLLYyEvqw-FZ", "BMKxgtLLYyEvqw-KY", "qAJpFcTD-OI", "XaHj-NL", "ICjv-UO", "qAJpFcTD-AN", "WyPqZX-XJ", "VYro-GI", "KinSiDhqYQnE-JL", "ICjv-SV", "BVENbXmnrbNisO-XH", "qAJpFcTD-CI", "qAJpFcTD-LE", "XaHj-IA", "qAJpFcTD-FX", "BMKxgtLLYyEvqw-LW", "BVENbXmnrbNisO-WJ", "BMKxgtLLYyEvqw-NR", "BVENbXmnrbNisO-PL", "BMKxgtLLYyEvqw-ZL", "WyPqZX-BB", "ICjv-KI", "WyPqZX-VG", "BMKxgtLLYyEvqw-XD", "WyPqZX-PH", "VYro-QP", "ICjv-NA", "ICjv-QW", "BMKxgtLLYyEvqw-AM", "JvPLdhLNkyxU-PS", "BMKxgtLLYyEvqw-KT", "WyPqZX-IA", "XaHj-QQ", "XIebn-ZL", "BMKxgtLLYyEvqw-SG", "qAJpFcTD-AX", "ICjv-RE"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VYro-AC,GI,QP", "BMKxgtLLYyEvqw-EA,AM,FZ,KT,KY,LW,NR,SG,XD,ZL", "BVENbXmnrbNisO-WC,PL,SK,WJ,XH", "BVENbXmnrbNisO-SK,PL,WC,WJ,XH", "BMKxgtLLYyEvqw-FZ,AM,EA,KT,KY,LW,NR,SG,XD,ZL", "BMKxgtLLYyEvqw-KY,AM,EA,FZ,KT,LW,NR,SG,XD,ZL", "qAJpFcTD-OI,AN,AX,CI,FX,LE", "XaHj-NL,IA,QQ", "ICjv-UO,KI,NA,QW,RE,SV", "qAJpFcTD-AN,AX,CI,FX,LE,OI", "WyPqZX-XJ,BB,IA,PH,VG", "VYro-GI,AC,QP", "KinSiDhqYQnE-JL", "ICjv-SV,KI,NA,QW,RE,UO", "BVENbXmnrbNisO-XH,PL,SK,WC,WJ", "qAJpFcTD-CI,AN,AX,FX,LE,OI", "qAJpFcTD-LE,AN,AX,CI,FX,OI", "XaHj-IA,NL,QQ", "qAJpFcTD-FX,AN,AX,CI,LE,OI", "BMKxgtLLYyEvqw-LW,AM,EA,FZ,KT,KY,NR,SG,XD,ZL", "BVENbXmnrbNisO-WJ,PL,SK,WC,XH", "BMKxgtLLYyEvqw-NR,AM,EA,FZ,KT,KY,LW,SG,XD,ZL", "BVENbXmnrbNisO-PL,SK,WC,WJ,XH", "BMKxgtLLYyEvqw-ZL,AM,EA,FZ,KT,KY,LW,NR,SG,XD", "WyPqZX-BB,IA,PH,VG,XJ", "ICjv-KI,NA,QW,RE,SV,UO", "WyPqZX-VG,BB,IA,PH,XJ", "BMKxgtLLYyEvqw-XD,AM,EA,FZ,KT,KY,LW,NR,SG,ZL", "WyPqZX-PH,BB,IA,VG,XJ", "VYro-QP,AC,GI", "ICjv-NA,KI,QW,RE,SV,UO", "ICjv-QW,KI,NA,RE,SV,UO", "BMKxgtLLYyEvqw-AM,EA,FZ,KT,KY,LW,NR,SG,XD,ZL", "JvPLdhLNkyxU-PS", "BMKxgtLLYyEvqw-KT,AM,EA,FZ,KY,LW,NR,SG,XD,ZL", "WyPqZX-IA,BB,PH,VG,XJ", "XaHj-QQ,IA,NL", "XIebn-ZL", "BMKxgtLLYyEvqw-SG,AM,EA,FZ,KT,KY,LW,NR,XD,ZL", "qAJpFcTD-AX,AN,CI,FX,LE,OI", "ICjv-RE,KI,NA,QW,SV,UO"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> placeboard = {"BJJPEHcZgDqMGeGmOlQ-KY", "BhuUoZLsclzYYLQ-HF", "GuhGmnKbGyXZyCrkhk-IU", "E-NA", "BJJPEHcZgDqMGeGmOlQ-VH"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BJJPEHcZgDqMGeGmOlQ-KY,VH", "BhuUoZLsclzYYLQ-HF", "GuhGmnKbGyXZyCrkhk-IU", "E-NA", "BJJPEHcZgDqMGeGmOlQ-VH,KY"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> placeboard = {"DSfZxsTwfUjc-CR", "DSfZxsTwfUjc-MJ", "uudT-XN", "oHXhhXnAvcVSbfUZntB-JY", "eVXOLUhL-DO", "SkhifCxccoTZxmECdBI-FC", "JObNPNDDZsE-SN", "uudT-OJ", "uudT-HQ", "lCppdk-SL", "eVXOLUhL-JR", "eVXOLUhL-AQ", "lCppdk-NS", "uudT-XD", "uudT-CP", "NLGSeEKVyoTs-WY", "SkhifCxccoTZxmECdBI-PN", "dpjE-QK", "DSfZxsTwfUjc-SO", "NLGSeEKVyoTs-ZH", "SkhifCxccoTZxmECdBI-DE", "eVXOLUhL-AA", "oHXhhXnAvcVSbfUZntB-KD", "NLGSeEKVyoTs-MP", "JObNPNDDZsE-HD", "atBqnNKzNjDc-FY", "DSfZxsTwfUjc-VL", "eVXOLUhL-BQ", "DSfZxsTwfUjc-PT", "lCppdk-LN", "DSfZxsTwfUjc-AH", "atBqnNKzNjDc-UJ", "dpjE-RL"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DSfZxsTwfUjc-CR,AH,MJ,PT,SO,VL", "DSfZxsTwfUjc-MJ,AH,CR,PT,SO,VL", "uudT-XN,CP,HQ,OJ,XD", "oHXhhXnAvcVSbfUZntB-JY,KD", "eVXOLUhL-DO,AA,AQ,BQ,JR", "SkhifCxccoTZxmECdBI-FC,DE,PN", "JObNPNDDZsE-SN,HD", "uudT-OJ,CP,HQ,XD,XN", "uudT-HQ,CP,OJ,XD,XN", "lCppdk-SL,LN,NS", "eVXOLUhL-JR,AA,AQ,BQ,DO", "eVXOLUhL-AQ,AA,BQ,DO,JR", "lCppdk-NS,LN,SL", "uudT-XD,CP,HQ,OJ,XN", "uudT-CP,HQ,OJ,XD,XN", "NLGSeEKVyoTs-WY,MP,ZH", "SkhifCxccoTZxmECdBI-PN,DE,FC", "dpjE-QK,RL", "DSfZxsTwfUjc-SO,AH,CR,MJ,PT,VL", "NLGSeEKVyoTs-ZH,MP,WY", "SkhifCxccoTZxmECdBI-DE,FC,PN", "eVXOLUhL-AA,AQ,BQ,DO,JR", "oHXhhXnAvcVSbfUZntB-KD,JY", "NLGSeEKVyoTs-MP,WY,ZH", "JObNPNDDZsE-HD,SN", "atBqnNKzNjDc-FY,UJ", "DSfZxsTwfUjc-VL,AH,CR,MJ,PT,SO", "eVXOLUhL-BQ,AA,AQ,DO,JR", "DSfZxsTwfUjc-PT,AH,CR,MJ,SO,VL", "lCppdk-LN,NS,SL", "DSfZxsTwfUjc-AH,CR,MJ,PT,SO,VL", "atBqnNKzNjDc-UJ,FY", "dpjE-RL,QK"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> placeboard = {"EaxOStEtuSXjTkBCZSAc-RO", "EaxOStEtuSXjTkBCZSAc-DU", "ntm-EL", "qJgLsfJ-KA", "EaxOStEtuSXjTkBCZSAc-EF", "qJgLsfJ-ID", "qJgLsfJ-SI", "rRQzlJYQbKEFQ-LC", "lh-MX", "ntm-ML", "AyFFJ-IV", "lh-CY", "qJgLsfJ-GR", "rRQzlJYQbKEFQ-LD", "lGM-EW", "rRQzlJYQbKEFQ-DG", "ntm-CG", "AyFFJ-LY", "qJgLsfJ-RD", "SmXdyFZ-IF", "ntm-BE", "qJgLsfJ-TT", "EaxOStEtuSXjTkBCZSAc-MP", "EaxOStEtuSXjTkBCZSAc-LD", "qcD-BL", "AyFFJ-QM", "rRQzlJYQbKEFQ-YQ", "lGM-WB", "qJgLsfJ-BG", "KKEhoiGLjXfsb-YS", "SmXdyFZ-HA", "lGM-LD", "lh-EH", "lGM-EP", "SmXdyFZ-RI", "SmXdyFZ-AS", "SmXdyFZ-XS", "lh-WK", "KKEhoiGLjXfsb-TJ", "lh-EZ", "SmXdyFZ-SA", "qcD-CQ", "qJgLsfJ-NG", "EaxOStEtuSXjTkBCZSAc-DS", "KKEhoiGLjXfsb-BV", "qJgLsfJ-TJ"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EaxOStEtuSXjTkBCZSAc-RO,DS,DU,EF,LD,MP", "EaxOStEtuSXjTkBCZSAc-DU,DS,EF,LD,MP,RO", "ntm-EL,BE,CG,ML", "qJgLsfJ-KA,BG,GR,ID,NG,RD,SI,TJ,TT", "EaxOStEtuSXjTkBCZSAc-EF,DS,DU,LD,MP,RO", "qJgLsfJ-ID,BG,GR,KA,NG,RD,SI,TJ,TT", "qJgLsfJ-SI,BG,GR,ID,KA,NG,RD,TJ,TT", "rRQzlJYQbKEFQ-LC,DG,LD,YQ", "lh-MX,CY,EH,EZ,WK", "ntm-ML,BE,CG,EL", "AyFFJ-IV,LY,QM", "lh-CY,EH,EZ,MX,WK", "qJgLsfJ-GR,BG,ID,KA,NG,RD,SI,TJ,TT", "rRQzlJYQbKEFQ-LD,DG,LC,YQ", "lGM-EW,EP,LD,WB", "rRQzlJYQbKEFQ-DG,LC,LD,YQ", "ntm-CG,BE,EL,ML", "AyFFJ-LY,IV,QM", "qJgLsfJ-RD,BG,GR,ID,KA,NG,SI,TJ,TT", "SmXdyFZ-IF,AS,HA,RI,SA,XS", "ntm-BE,CG,EL,ML", "qJgLsfJ-TT,BG,GR,ID,KA,NG,RD,SI,TJ", "EaxOStEtuSXjTkBCZSAc-MP,DS,DU,EF,LD,RO", "EaxOStEtuSXjTkBCZSAc-LD,DS,DU,EF,MP,RO", "qcD-BL,CQ", "AyFFJ-QM,IV,LY", "rRQzlJYQbKEFQ-YQ,DG,LC,LD", "lGM-WB,EP,EW,LD", "qJgLsfJ-BG,GR,ID,KA,NG,RD,SI,TJ,TT", "KKEhoiGLjXfsb-YS,BV,TJ", "SmXdyFZ-HA,AS,IF,RI,SA,XS", "lGM-LD,EP,EW,WB", "lh-EH,CY,EZ,MX,WK", "lGM-EP,EW,LD,WB", "SmXdyFZ-RI,AS,HA,IF,SA,XS", "SmXdyFZ-AS,HA,IF,RI,SA,XS", "SmXdyFZ-XS,AS,HA,IF,RI,SA", "lh-WK,CY,EH,EZ,MX", "KKEhoiGLjXfsb-TJ,BV,YS", "lh-EZ,CY,EH,MX,WK", "SmXdyFZ-SA,AS,HA,IF,RI,XS", "qcD-CQ,BL", "qJgLsfJ-NG,BG,GR,ID,KA,RD,SI,TJ,TT", "EaxOStEtuSXjTkBCZSAc-DS,DU,EF,LD,MP,RO", "KKEhoiGLjXfsb-BV,TJ,YS", "qJgLsfJ-TJ,BG,GR,ID,KA,NG,RD,SI,TT"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> placeboard = {"CYJzlsUTlzsSrjVT-FK", "b-TT", "AURyYMOuIgiTWXWYz-ZT", "b-OX", "bo-LN", "bMXuJBZw-EZ", "ciqjbsQzAqEUSM-AQ", "guYNcSTNyyvqLspXdSOX-QQ", "qCyceWabAsf-LA", "vFHNdYNJKt-NV", "ciqjbsQzAqEUSM-UL", "NdhBJdj-OF", "ciqjbsQzAqEUSM-WV", "qCyceWabAsf-TM", "mU-GA", "XuKcNrG-MP", "guYNcSTNyyvqLspXdSOX-WV", "bo-UC", "mU-RE", "b-RH", "TxKdnRqrdJQBnCgrKLx-DX", "AURyYMOuIgiTWXWYz-RI", "vFHNdYNJKt-CT", "EjPGBbdSVrIpcMOhBV-IY", "MqDtU-WP", "mU-AF", "KOVisDneowzGNcPkZQ-TI", "NdhBJdj-XS", "NdhBJdj-MF", "cSrWy-PU", "CYJzlsUTlzsSrjVT-HQ", "CYJzlsUTlzsSrjVT-YS", "tRrCpRYesKmYCDZifmkL-UT", "EjPGBbdSVrIpcMOhBV-LZ", "CYJzlsUTlzsSrjVT-PH", "ciqjbsQzAqEUSM-LL", "AURyYMOuIgiTWXWYz-WK", "EjPGBbdSVrIpcMOhBV-KF", "bMXuJBZw-IX", "bMXuJBZw-MC", "bMXuJBZw-RJ", "ciqjbsQzAqEUSM-DF", "sxtCuPheshURcR-XH", "sxtCuPheshURcR-XK", "sxtCuPheshURcR-SH", "Bhk-YM", "NdhBJdj-YO"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CYJzlsUTlzsSrjVT-FK,HQ,PH,YS", "b-TT,OX,RH", "AURyYMOuIgiTWXWYz-ZT,RI,WK", "b-OX,RH,TT", "bo-LN,UC", "bMXuJBZw-EZ,IX,MC,RJ", "ciqjbsQzAqEUSM-AQ,DF,LL,UL,WV", "guYNcSTNyyvqLspXdSOX-QQ,WV", "qCyceWabAsf-LA,TM", "vFHNdYNJKt-NV,CT", "ciqjbsQzAqEUSM-UL,AQ,DF,LL,WV", "NdhBJdj-OF,MF,XS,YO", "ciqjbsQzAqEUSM-WV,AQ,DF,LL,UL", "qCyceWabAsf-TM,LA", "mU-GA,AF,RE", "XuKcNrG-MP", "guYNcSTNyyvqLspXdSOX-WV,QQ", "bo-UC,LN", "mU-RE,AF,GA", "b-RH,OX,TT", "TxKdnRqrdJQBnCgrKLx-DX", "AURyYMOuIgiTWXWYz-RI,WK,ZT", "vFHNdYNJKt-CT,NV", "EjPGBbdSVrIpcMOhBV-IY,KF,LZ", "MqDtU-WP", "mU-AF,GA,RE", "KOVisDneowzGNcPkZQ-TI", "NdhBJdj-XS,MF,OF,YO", "NdhBJdj-MF,OF,XS,YO", "cSrWy-PU", "CYJzlsUTlzsSrjVT-HQ,FK,PH,YS", "CYJzlsUTlzsSrjVT-YS,FK,HQ,PH", "tRrCpRYesKmYCDZifmkL-UT", "EjPGBbdSVrIpcMOhBV-LZ,IY,KF", "CYJzlsUTlzsSrjVT-PH,FK,HQ,YS", "ciqjbsQzAqEUSM-LL,AQ,DF,UL,WV", "AURyYMOuIgiTWXWYz-WK,RI,ZT", "EjPGBbdSVrIpcMOhBV-KF,IY,LZ", "bMXuJBZw-IX,EZ,MC,RJ", "bMXuJBZw-MC,EZ,IX,RJ", "bMXuJBZw-RJ,EZ,IX,MC", "ciqjbsQzAqEUSM-DF,AQ,LL,UL,WV", "sxtCuPheshURcR-XH,SH,XK", "sxtCuPheshURcR-XK,SH,XH", "sxtCuPheshURcR-SH,XH,XK", "Bhk-YM", "NdhBJdj-YO,MF,OF,XS"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> placeboard = {"DUkbZKdNflnqi-NC", "esMJrXBotIw-DO", "MfkCuiYXQmgTlsSDTy-OC", "bLp-QU", "Tj-XX", "RLtIeLmv-JA", "esMJrXBotIw-QX", "sdEKcANL-CS", "sdEKcANL-GQ", "MfkCuiYXQmgTlsSDTy-FD", "mkqoBuneGHYc-QT", "TiHlKxZWcZbKamC-ON", "HFvJnWLTodfW-HY", "HFvJnWLTodfW-UT", "JgXTnzNqq-WA", "bBpeRTJx-SX", "JcrMANXGHxqlAgRAkCou-MS", "Tj-HZ", "RLtIeLmv-PU", "F-OW", "MLVi-II", "HFvJnWLTodfW-EI", "JgXTnzNqq-HG", "mkqoBuneGHYc-CV", "RLtIeLmv-BE", "WlZKCAHKL-HR", "bPPMUhFsTMbdK-OI", "aTeq-RI", "LhwsZuIfgSJXIeSWF-OX", "pfFAKFqK-MS", "gBuqurHfJ-JK", "sdEKcANL-ES", "bPPMUhFsTMbdK-IT", "aTeq-HH", "UVSCDEnbsoFV-UO", "bPPMUhFsTMbdK-IV", "sdEKcANL-YR", "GYaamBaEtkhqWjSv-VA", "DUkbZKdNflnqi-UI", "bPPMUhFsTMbdK-BN", "BKBJklPYJsStt-IO", "bxpyLfBqQXeZggV-YA", "TiHlKxZWcZbKamC-NS", "WlZKCAHKL-JH", "gBuqurHfJ-FU", "MLVi-BM", "sdEKcANL-QK"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DUkbZKdNflnqi-NC,UI", "esMJrXBotIw-DO,QX", "MfkCuiYXQmgTlsSDTy-OC,FD", "bLp-QU", "Tj-XX,HZ", "RLtIeLmv-JA,BE,PU", "esMJrXBotIw-QX,DO", "sdEKcANL-CS,ES,GQ,QK,YR", "sdEKcANL-GQ,CS,ES,QK,YR", "MfkCuiYXQmgTlsSDTy-FD,OC", "mkqoBuneGHYc-QT,CV", "TiHlKxZWcZbKamC-ON,NS", "HFvJnWLTodfW-HY,EI,UT", "HFvJnWLTodfW-UT,EI,HY", "JgXTnzNqq-WA,HG", "bBpeRTJx-SX", "JcrMANXGHxqlAgRAkCou-MS", "Tj-HZ,XX", "RLtIeLmv-PU,BE,JA", "F-OW", "MLVi-II,BM", "HFvJnWLTodfW-EI,HY,UT", "JgXTnzNqq-HG,WA", "mkqoBuneGHYc-CV,QT", "RLtIeLmv-BE,JA,PU", "WlZKCAHKL-HR,JH", "bPPMUhFsTMbdK-OI,BN,IT,IV", "aTeq-RI,HH", "LhwsZuIfgSJXIeSWF-OX", "pfFAKFqK-MS", "gBuqurHfJ-JK,FU", "sdEKcANL-ES,CS,GQ,QK,YR", "bPPMUhFsTMbdK-IT,BN,IV,OI", "aTeq-HH,RI", "UVSCDEnbsoFV-UO", "bPPMUhFsTMbdK-IV,BN,IT,OI", "sdEKcANL-YR,CS,ES,GQ,QK", "GYaamBaEtkhqWjSv-VA", "DUkbZKdNflnqi-UI,NC", "bPPMUhFsTMbdK-BN,IT,IV,OI", "BKBJklPYJsStt-IO", "bxpyLfBqQXeZggV-YA", "TiHlKxZWcZbKamC-NS,ON", "WlZKCAHKL-JH,HR", "gBuqurHfJ-FU,JK", "MLVi-BM,II", "sdEKcANL-QK,CS,ES,GQ,YR"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> placeboard = {"xJvUKsMuDjHsRvZbqGKo-PS", "S-MM", "WmcfofOOTzwufQzid-GS", "SpiorZVcEpklH-MB", "qoCIjMExLYQxEUNxBWj-QU", "PsqbqDerpCwuRoVyk-WQ", "CbxTyr-UF", "CbxTyr-QC", "JnUrSyRLoGh-CX", "CbxTyr-AW", "IPxmWymaxIG-OG", "CbxTyr-JC", "xJvUKsMuDjHsRvZbqGKo-OP", "HFlZkPyDa-FE", "S-FK", "CbxTyr-KS", "xJvUKsMuDjHsRvZbqGKo-FH", "HFlZkPyDa-AE", "JnUrSyRLoGh-PN", "xJvUKsMuDjHsRvZbqGKo-ZW", "JnUrSyRLoGh-JH", "qoCIjMExLYQxEUNxBWj-JN", "qoCIjMExLYQxEUNxBWj-UX", "PsqbqDerpCwuRoVyk-EO", "CbxTyr-MU", "xJvUKsMuDjHsRvZbqGKo-SY", "CbxTyr-QW", "IPxmWymaxIG-HQ", "JnUrSyRLoGh-HG", "SpiorZVcEpklH-NL", "xJvUKsMuDjHsRvZbqGKo-ZV", "WmcfofOOTzwufQzid-FL", "xJvUKsMuDjHsRvZbqGKo-GQ", "HFlZkPyDa-ZB", "lvdScqKKQQICPJ-RM", "JnUrSyRLoGh-UV", "JnUrSyRLoGh-JK", "PsqbqDerpCwuRoVyk-MF", "xJvUKsMuDjHsRvZbqGKo-SB", "IPxmWymaxIG-RT"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xJvUKsMuDjHsRvZbqGKo-PS,FH,GQ,OP,SB,SY,ZV,ZW", "S-MM,FK", "WmcfofOOTzwufQzid-GS,FL", "SpiorZVcEpklH-MB,NL", "qoCIjMExLYQxEUNxBWj-QU,JN,UX", "PsqbqDerpCwuRoVyk-WQ,EO,MF", "CbxTyr-UF,AW,JC,KS,MU,QC,QW", "CbxTyr-QC,AW,JC,KS,MU,QW,UF", "JnUrSyRLoGh-CX,HG,JH,JK,PN,UV", "CbxTyr-AW,JC,KS,MU,QC,QW,UF", "IPxmWymaxIG-OG,HQ,RT", "CbxTyr-JC,AW,KS,MU,QC,QW,UF", "xJvUKsMuDjHsRvZbqGKo-OP,FH,GQ,PS,SB,SY,ZV,ZW", "HFlZkPyDa-FE,AE,ZB", "S-FK,MM", "CbxTyr-KS,AW,JC,MU,QC,QW,UF", "xJvUKsMuDjHsRvZbqGKo-FH,GQ,OP,PS,SB,SY,ZV,ZW", "HFlZkPyDa-AE,FE,ZB", "JnUrSyRLoGh-PN,CX,HG,JH,JK,UV", "xJvUKsMuDjHsRvZbqGKo-ZW,FH,GQ,OP,PS,SB,SY,ZV", "JnUrSyRLoGh-JH,CX,HG,JK,PN,UV", "qoCIjMExLYQxEUNxBWj-JN,QU,UX", "qoCIjMExLYQxEUNxBWj-UX,JN,QU", "PsqbqDerpCwuRoVyk-EO,MF,WQ", "CbxTyr-MU,AW,JC,KS,QC,QW,UF", "xJvUKsMuDjHsRvZbqGKo-SY,FH,GQ,OP,PS,SB,ZV,ZW", "CbxTyr-QW,AW,JC,KS,MU,QC,UF", "IPxmWymaxIG-HQ,OG,RT", "JnUrSyRLoGh-HG,CX,JH,JK,PN,UV", "SpiorZVcEpklH-NL,MB", "xJvUKsMuDjHsRvZbqGKo-ZV,FH,GQ,OP,PS,SB,SY,ZW", "WmcfofOOTzwufQzid-FL,GS", "xJvUKsMuDjHsRvZbqGKo-GQ,FH,OP,PS,SB,SY,ZV,ZW", "HFlZkPyDa-ZB,AE,FE", "lvdScqKKQQICPJ-RM", "JnUrSyRLoGh-UV,CX,HG,JH,JK,PN", "JnUrSyRLoGh-JK,CX,HG,JH,PN,UV", "PsqbqDerpCwuRoVyk-MF,EO,WQ", "xJvUKsMuDjHsRvZbqGKo-SB,FH,GQ,OP,PS,SY,ZV,ZW", "IPxmWymaxIG-RT,HQ,OG"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> placeboard = {"UvmkxWnqHNwW-CM", "GbOCPUoAOtZII-AQ", "HrpvGHCohxSCKAJ-VA", "dsxXmzjcNZfe-LK", "TSCqSUcQTYpBYq-DJ", "kDUFLqoFWXDeySzBqLX-RE", "jRTPetLBJnALKht-JH", "WGiSULcEvwqpUeCz-NT", "S-GY", "O-XH", "LWDyiIVUaD-JV", "WGiSULcEvwqpUeCz-GR", "LdKjvAPxFiXYlXa-YC", "TSCqSUcQTYpBYq-ZF", "BtgRF-VR", "WGiSULcEvwqpUeCz-IW", "YO-OA", "eceuGkyzsMrls-JM", "TSCqSUcQTYpBYq-RA", "AFo-FH", "hKqnYHfqwSIbcddXvlJ-FF", "QgzCKevDEDCgWp-HV", "YO-XI", "hKqnYHfqwSIbcddXvlJ-BS", "BxQubBOAUWcQRTMmTgUV-FV", "QLZGsJONz-VK", "GbOCPUoAOtZII-ZS", "orW-KV", "AFzDblSvTDfeYezrL-ZB", "S-PJ", "QLZGsJONz-HA", "GbOCPUoAOtZII-FO", "mENChGQwoIBMTeEDFK-XU", "GbOCPUoAOtZII-CM", "neeVm-VA", "leryTbMeeNlA-CB", "UvmkxWnqHNwW-ZG", "vurcEUKde-GI", "GbOCPUoAOtZII-ZL", "gyIEfhbDceppHeMt-GV", "O-YW", "LWDyiIVUaD-RH", "HN-OB", "LdKjvAPxFiXYlXa-LQ", "RnMrNnZmZsdCSaFqM-CL", "HrpvGHCohxSCKAJ-LR", "WtD-WG"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"UvmkxWnqHNwW-CM,ZG", "GbOCPUoAOtZII-AQ,CM,FO,ZL,ZS", "HrpvGHCohxSCKAJ-VA,LR", "dsxXmzjcNZfe-LK", "TSCqSUcQTYpBYq-DJ,RA,ZF", "kDUFLqoFWXDeySzBqLX-RE", "jRTPetLBJnALKht-JH", "WGiSULcEvwqpUeCz-NT,GR,IW", "S-GY,PJ", "O-XH,YW", "LWDyiIVUaD-JV,RH", "WGiSULcEvwqpUeCz-GR,IW,NT", "LdKjvAPxFiXYlXa-YC,LQ", "TSCqSUcQTYpBYq-ZF,DJ,RA", "BtgRF-VR", "WGiSULcEvwqpUeCz-IW,GR,NT", "YO-OA,XI", "eceuGkyzsMrls-JM", "TSCqSUcQTYpBYq-RA,DJ,ZF", "AFo-FH", "hKqnYHfqwSIbcddXvlJ-FF,BS", "QgzCKevDEDCgWp-HV", "YO-XI,OA", "hKqnYHfqwSIbcddXvlJ-BS,FF", "BxQubBOAUWcQRTMmTgUV-FV", "QLZGsJONz-VK,HA", "GbOCPUoAOtZII-ZS,AQ,CM,FO,ZL", "orW-KV", "AFzDblSvTDfeYezrL-ZB", "S-PJ,GY", "QLZGsJONz-HA,VK", "GbOCPUoAOtZII-FO,AQ,CM,ZL,ZS", "mENChGQwoIBMTeEDFK-XU", "GbOCPUoAOtZII-CM,AQ,FO,ZL,ZS", "neeVm-VA", "leryTbMeeNlA-CB", "UvmkxWnqHNwW-ZG,CM", "vurcEUKde-GI", "GbOCPUoAOtZII-ZL,AQ,CM,FO,ZS", "gyIEfhbDceppHeMt-GV", "O-YW,XH", "LWDyiIVUaD-RH,JV", "HN-OB", "LdKjvAPxFiXYlXa-LQ,YC", "RnMrNnZmZsdCSaFqM-CL", "HrpvGHCohxSCKAJ-LR,VA", "WtD-WG"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> placeboard = {"CZRJBoTDeUkLyx-AE", "LhmNdXDWok-MG", "iPyniMoxvmelfmCznhN-FV", "APXiSZjMftNmoemS-TI", "HAgSYjZppXBWl-XG", "tLMIlTgTEdVKojKmxnIl-KN", "xLmqYLLpyHlg-HB", "S-RG", "oZ-BI", "qamYJMdiuBsL-VT", "HAgSYjZppXBWl-UM", "S-HW", "mi-AL", "BrdBX-SP", "NiYuXpUhpTzFc-NX", "tLMIlTgTEdVKojKmxnIl-SQ", "OlzXbikDuKmhEk-VZ", "bJrDlRMdl-LI", "HAgSYjZppXBWl-DR", "UxuyGCYBf-XM", "LhmNdXDWok-FY", "hycIUVMwTvRUXIIkWa-MB", "tLMIlTgTEdVKojKmxnIl-HJ", "tLMIlTgTEdVKojKmxnIl-EL", "rKgypjUwvJyoCYIeZ-YY", "LhmNdXDWok-AZ", "xYPvMYZqaq-IF", "hycIUVMwTvRUXIIkWa-UJ", "hycIUVMwTvRUXIIkWa-AO", "UxuyGCYBf-ZT", "bJrDlRMdl-UE", "APXiSZjMftNmoemS-VO", "xYPvMYZqaq-MO", "HTuaWmcRxvYEqZdW-XF", "Pb-LD", "UnDXMlvKQb-UR", "xYPvMYZqaq-JY", "yQGRyxpMOVGReya-KP", "yQGRyxpMOVGReya-NA", "hOu-SN", "CZRJBoTDeUkLyx-RL", "xLmqYLLpyHlg-KZ", "HAgSYjZppXBWl-MA"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CZRJBoTDeUkLyx-AE,RL", "LhmNdXDWok-MG,AZ,FY", "iPyniMoxvmelfmCznhN-FV", "APXiSZjMftNmoemS-TI,VO", "HAgSYjZppXBWl-XG,DR,MA,UM", "tLMIlTgTEdVKojKmxnIl-KN,EL,HJ,SQ", "xLmqYLLpyHlg-HB,KZ", "S-RG,HW", "oZ-BI", "qamYJMdiuBsL-VT", "HAgSYjZppXBWl-UM,DR,MA,XG", "S-HW,RG", "mi-AL", "BrdBX-SP", "NiYuXpUhpTzFc-NX", "tLMIlTgTEdVKojKmxnIl-SQ,EL,HJ,KN", "OlzXbikDuKmhEk-VZ", "bJrDlRMdl-LI,UE", "HAgSYjZppXBWl-DR,MA,UM,XG", "UxuyGCYBf-XM,ZT", "LhmNdXDWok-FY,AZ,MG", "hycIUVMwTvRUXIIkWa-MB,AO,UJ", "tLMIlTgTEdVKojKmxnIl-HJ,EL,KN,SQ", "tLMIlTgTEdVKojKmxnIl-EL,HJ,KN,SQ", "rKgypjUwvJyoCYIeZ-YY", "LhmNdXDWok-AZ,FY,MG", "xYPvMYZqaq-IF,JY,MO", "hycIUVMwTvRUXIIkWa-UJ,AO,MB", "hycIUVMwTvRUXIIkWa-AO,MB,UJ", "UxuyGCYBf-ZT,XM", "bJrDlRMdl-UE,LI", "APXiSZjMftNmoemS-VO,TI", "xYPvMYZqaq-MO,IF,JY", "HTuaWmcRxvYEqZdW-XF", "Pb-LD", "UnDXMlvKQb-UR", "xYPvMYZqaq-JY,IF,MO", "yQGRyxpMOVGReya-KP,NA", "yQGRyxpMOVGReya-NA,KP", "hOu-SN", "CZRJBoTDeUkLyx-RL,AE", "xLmqYLLpyHlg-KZ,HB", "HAgSYjZppXBWl-MA,DR,UM,XG"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> placeboard = {"WhGhrIhHyQrljCV-BU", "cKoGIxuymezXJ-IQ", "cVHaVtVnY-BY", "S-HQ", "xAvrMyHoiQXVuC-FB", "jmfpZy-RN", "vM-BH", "jmfpZy-FQ", "WhGhrIhHyQrljCV-RP", "GsXKmXCdqKNASTuUm-ER", "kntNSYCDojNlm-FO", "qHeXQakfJmKg-KZ", "XoR-VI", "gCUmyELvOfWWJTsuF-VC", "cVHaVtVnY-BM", "MfCUAjGYcent-AI", "xAvrMyHoiQXVuC-RC", "vM-OE", "GsXKmXCdqKNASTuUm-UF", "ZiSmlOGAkOQFR-AI", "UAc-RS", "UAc-BO", "cKoGIxuymezXJ-HV", "XoR-ZN", "BTl-CR", "S-SV", "gCUmyELvOfWWJTsuF-ET", "xbQq-KP", "ZiSmlOGAkOQFR-XU", "kntNSYCDojNlm-OS", "xbQq-HI", "UAc-WF", "xbQq-KB", "P-NB", "ZiSmlOGAkOQFR-MI", "WhGhrIhHyQrljCV-WQ", "RdtYXaudmF-SV", "BTl-HA", "bddbghPTiANNAs-RY", "MfCUAjGYcent-JE", "P-JF", "vM-VN", "GnZqvVRBXerFpX-AT", "UAc-FR", "RdtYXaudmF-UK", "UAc-LT", "qHeXQakfJmKg-HG", "BTl-RD"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WhGhrIhHyQrljCV-BU,RP,WQ", "cKoGIxuymezXJ-IQ,HV", "cVHaVtVnY-BY,BM", "S-HQ,SV", "xAvrMyHoiQXVuC-FB,RC", "jmfpZy-RN,FQ", "vM-BH,OE,VN", "jmfpZy-FQ,RN", "WhGhrIhHyQrljCV-RP,BU,WQ", "GsXKmXCdqKNASTuUm-ER,UF", "kntNSYCDojNlm-FO,OS", "qHeXQakfJmKg-KZ,HG", "XoR-VI,ZN", "gCUmyELvOfWWJTsuF-VC,ET", "cVHaVtVnY-BM,BY", "MfCUAjGYcent-AI,JE", "xAvrMyHoiQXVuC-RC,FB", "vM-OE,BH,VN", "GsXKmXCdqKNASTuUm-UF,ER", "ZiSmlOGAkOQFR-AI,MI,XU", "UAc-RS,BO,FR,LT,WF", "UAc-BO,FR,LT,RS,WF", "cKoGIxuymezXJ-HV,IQ", "XoR-ZN,VI", "BTl-CR,HA,RD", "S-SV,HQ", "gCUmyELvOfWWJTsuF-ET,VC", "xbQq-KP,HI,KB", "ZiSmlOGAkOQFR-XU,AI,MI", "kntNSYCDojNlm-OS,FO", "xbQq-HI,KB,KP", "UAc-WF,BO,FR,LT,RS", "xbQq-KB,HI,KP", "P-NB,JF", "ZiSmlOGAkOQFR-MI,AI,XU", "WhGhrIhHyQrljCV-WQ,BU,RP", "RdtYXaudmF-SV,UK", "BTl-HA,CR,RD", "bddbghPTiANNAs-RY", "MfCUAjGYcent-JE,AI", "P-JF,NB", "vM-VN,BH,OE", "GnZqvVRBXerFpX-AT", "UAc-FR,BO,LT,RS,WF", "RdtYXaudmF-UK,SV", "UAc-LT,BO,FR,RS,WF", "qHeXQakfJmKg-HG,KZ", "BTl-RD,CR,HA"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> placeboard = {"aAVwlizHCSvuuqhI-ZF", "gUOKDmyZvUAlY-QJ", "TVQWmjeqwrAigLxV-HQ", "mtUExsnFqNSXnP-YR", "Zc-AE", "pMYsDrtaRUSJosCmLS-SW", "sNGycB-XS", "xy-GJ", "TVQWmjeqwrAigLxV-NF", "FBVPeSSeZTDrxl-GL", "PALybmUJRCX-HI", "zqKWuNSEhzAkWv-RH", "TVQWmjeqwrAigLxV-ML", "FBVPeSSeZTDrxl-XA", "FBVPeSSeZTDrxl-TA", "PALybmUJRCX-FQ", "c-AN", "DVWBddmnf-WY", "xFhfj-FZ", "UvaVcMdUuZWC-PV", "QecfF-QD", "c-VX", "tHbQl-KZ", "FBVPeSSeZTDrxl-LC", "UvaVcMdUuZWC-DI", "UvaVcMdUuZWC-LP", "QecfF-TC", "c-FW", "dS-RC", "ExMyvbLUKVnImj-GJ", "Zc-RU", "wYLZHK-JP", "oNVpbAXI-UA", "vBHHejRVufI-TS", "mtUExsnFqNSXnP-ZM", "rSQtXJBbYSCLyPiY-AE", "vBHHejRVufI-GQ", "dS-QE", "tHbQl-SW", "DVWBddmnf-JB", "UvaVcMdUuZWC-YE", "tHbQl-BN", "gUOKDmyZvUAlY-PV", "yuOmy-WB", "TyHkXJqAYxizR-IZ", "TVQWmjeqwrAigLxV-TR", "oNVpbAXI-SC"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aAVwlizHCSvuuqhI-ZF", "gUOKDmyZvUAlY-QJ,PV", "TVQWmjeqwrAigLxV-HQ,ML,NF,TR", "mtUExsnFqNSXnP-YR,ZM", "Zc-AE,RU", "pMYsDrtaRUSJosCmLS-SW", "sNGycB-XS", "xy-GJ", "TVQWmjeqwrAigLxV-NF,HQ,ML,TR", "FBVPeSSeZTDrxl-GL,LC,TA,XA", "PALybmUJRCX-HI,FQ", "zqKWuNSEhzAkWv-RH", "TVQWmjeqwrAigLxV-ML,HQ,NF,TR", "FBVPeSSeZTDrxl-XA,GL,LC,TA", "FBVPeSSeZTDrxl-TA,GL,LC,XA", "PALybmUJRCX-FQ,HI", "c-AN,FW,VX", "DVWBddmnf-WY,JB", "xFhfj-FZ", "UvaVcMdUuZWC-PV,DI,LP,YE", "QecfF-QD,TC", "c-VX,AN,FW", "tHbQl-KZ,BN,SW", "FBVPeSSeZTDrxl-LC,GL,TA,XA", "UvaVcMdUuZWC-DI,LP,PV,YE", "UvaVcMdUuZWC-LP,DI,PV,YE", "QecfF-TC,QD", "c-FW,AN,VX", "dS-RC,QE", "ExMyvbLUKVnImj-GJ", "Zc-RU,AE", "wYLZHK-JP", "oNVpbAXI-UA,SC", "vBHHejRVufI-TS,GQ", "mtUExsnFqNSXnP-ZM,YR", "rSQtXJBbYSCLyPiY-AE", "vBHHejRVufI-GQ,TS", "dS-QE,RC", "tHbQl-SW,BN,KZ", "DVWBddmnf-JB,WY", "UvaVcMdUuZWC-YE,DI,LP,PV", "tHbQl-BN,KZ,SW", "gUOKDmyZvUAlY-PV,QJ", "yuOmy-WB", "TyHkXJqAYxizR-IZ", "TVQWmjeqwrAigLxV-TR,HQ,ML,NF", "oNVpbAXI-SC,UA"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> placeboard = {"aWhZUaDEtwLvtXqutMM-XB", "HHcbKOmvXCHHYwavgmr-RM", "fXcYlZmznLbNah-VZ", "RR-MD", "ZXDJqFvmsVsXu-IE", "cUkkOhupwPF-LH", "CtJOeUCtzZADIl-EU", "UIC-ND", "QyIK-UL", "vfuAnYzUBSdBArLxBphB-HZ", "HFBkheFiqhGjQfWfjt-MA", "OqMYDpEnQvliIsMXdq-SP", "G-LT", "mPagWANNc-NW", "vdYFlNSoaVaV-LA", "iVaU-QY", "bCfRGBogqenXfc-ZW", "HFBkheFiqhGjQfWfjt-BW", "YgoZGj-KZ", "EAhGqgbRIEjrzStawPP-NB", "vZRdDxLB-EW", "iVaU-UU", "aWhZUaDEtwLvtXqutMM-HP", "aWhZUaDEtwLvtXqutMM-SO", "wEcSvxUtkVbipjxxrZDt-SE", "uw-UP", "fXcYlZmznLbNah-DJ", "uw-YG", "UIC-CQ", "RR-TK", "EAhGqgbRIEjrzStawPP-FR", "G-IR", "HFBkheFiqhGjQfWfjt-US", "UIC-QQ", "pirEhSPsRuMADB-TP", "vfuAnYzUBSdBArLxBphB-PU", "iVaU-YK", "pXpxCHGnJkJvJEINXIz-LN", "HHcbKOmvXCHHYwavgmr-ZO", "CtJOeUCtzZADIl-CG", "YgoZGj-QX", "AmWs-DF", "mPagWANNc-EM", "QyIK-OV", "LQeojtzBinuNRunzfH-GL", "ZlgNRigvkiOiDbA-GO", "vZRdDxLB-NR", "RR-GZ", "EAhGqgbRIEjrzStawPP-XI", "G-FI"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aWhZUaDEtwLvtXqutMM-XB,HP,SO", "HHcbKOmvXCHHYwavgmr-RM,ZO", "fXcYlZmznLbNah-VZ,DJ", "RR-MD,GZ,TK", "ZXDJqFvmsVsXu-IE", "cUkkOhupwPF-LH", "CtJOeUCtzZADIl-EU,CG", "UIC-ND,CQ,QQ", "QyIK-UL,OV", "vfuAnYzUBSdBArLxBphB-HZ,PU", "HFBkheFiqhGjQfWfjt-MA,BW,US", "OqMYDpEnQvliIsMXdq-SP", "G-LT,FI,IR", "mPagWANNc-NW,EM", "vdYFlNSoaVaV-LA", "iVaU-QY,UU,YK", "bCfRGBogqenXfc-ZW", "HFBkheFiqhGjQfWfjt-BW,MA,US", "YgoZGj-KZ,QX", "EAhGqgbRIEjrzStawPP-NB,FR,XI", "vZRdDxLB-EW,NR", "iVaU-UU,QY,YK", "aWhZUaDEtwLvtXqutMM-HP,SO,XB", "aWhZUaDEtwLvtXqutMM-SO,HP,XB", "wEcSvxUtkVbipjxxrZDt-SE", "uw-UP,YG", "fXcYlZmznLbNah-DJ,VZ", "uw-YG,UP", "UIC-CQ,ND,QQ", "RR-TK,GZ,MD", "EAhGqgbRIEjrzStawPP-FR,NB,XI", "G-IR,FI,LT", "HFBkheFiqhGjQfWfjt-US,BW,MA", "UIC-QQ,CQ,ND", "pirEhSPsRuMADB-TP", "vfuAnYzUBSdBArLxBphB-PU,HZ", "iVaU-YK,QY,UU", "pXpxCHGnJkJvJEINXIz-LN", "HHcbKOmvXCHHYwavgmr-ZO,RM", "CtJOeUCtzZADIl-CG,EU", "YgoZGj-QX,KZ", "AmWs-DF", "mPagWANNc-EM,NW", "QyIK-OV,UL", "LQeojtzBinuNRunzfH-GL", "ZlgNRigvkiOiDbA-GO", "vZRdDxLB-NR,EW", "RR-GZ,MD,TK", "EAhGqgbRIEjrzStawPP-XI,FR,NB", "G-FI,IR,LT"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> placeboard = {"mRUFTBwHVGkQkddp-HR", "au-NW", "jzNwck-PF", "VemrbwUY-ZM", "cAcZfvKLCwOiawFTPu-KR", "pGcNeJGtPStERd-NM", "yugPkoE-SZ", "foedK-RP", "VemrbwUY-JP", "SDTAglivUNZHRvaLkQ-QF", "YyBwb-ZA", "FUwERIjsONXfnqNPFE-FD", "JrIiqOlfkTQXY-IQ", "foedK-CI", "mRUFTBwHVGkQkddp-ZB", "eoMazm-NX", "PAdkeSOUvgwyXQXGz-GL", "IiuFuPcQqrFNT-ZN", "YyBwb-UK", "foedK-XH", "eoMazm-DA", "foedK-UG", "R-RG", "gbfMLNGwXY-TG", "gbfMLNGwXY-OB", "jzNwck-JX", "jiFCC-UY", "U-WF", "SDTAglivUNZHRvaLkQ-OH", "FzhVT-VJ", "pGcNeJGtPStERd-ZE", "ihDfrrQOvksVWCTQDB-YD", "JrIiqOlfkTQXY-TC", "VemrbwUY-TL", "XaDbedNeLmXkV-CR", "Qy-JV", "U-AP", "XlinoHHkC-VP", "YyBwb-JE", "JcUq-LG", "JrIiqOlfkTQXY-YC", "mRUFTBwHVGkQkddp-XX", "FWxsOvnrPSz-IT", "jiFCC-SH", "gkxTTqqfsNMfN-FU", "eoMazm-ZT", "IItelKduONuMqOfHXG-XE"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mRUFTBwHVGkQkddp-HR,XX,ZB", "au-NW", "jzNwck-PF,JX", "VemrbwUY-ZM,JP,TL", "cAcZfvKLCwOiawFTPu-KR", "pGcNeJGtPStERd-NM,ZE", "yugPkoE-SZ", "foedK-RP,CI,UG,XH", "VemrbwUY-JP,TL,ZM", "SDTAglivUNZHRvaLkQ-QF,OH", "YyBwb-ZA,JE,UK", "FUwERIjsONXfnqNPFE-FD", "JrIiqOlfkTQXY-IQ,TC,YC", "foedK-CI,RP,UG,XH", "mRUFTBwHVGkQkddp-ZB,HR,XX", "eoMazm-NX,DA,ZT", "PAdkeSOUvgwyXQXGz-GL", "IiuFuPcQqrFNT-ZN", "YyBwb-UK,JE,ZA", "foedK-XH,CI,RP,UG", "eoMazm-DA,NX,ZT", "foedK-UG,CI,RP,XH", "R-RG", "gbfMLNGwXY-TG,OB", "gbfMLNGwXY-OB,TG", "jzNwck-JX,PF", "jiFCC-UY,SH", "U-WF,AP", "SDTAglivUNZHRvaLkQ-OH,QF", "FzhVT-VJ", "pGcNeJGtPStERd-ZE,NM", "ihDfrrQOvksVWCTQDB-YD", "JrIiqOlfkTQXY-TC,IQ,YC", "VemrbwUY-TL,JP,ZM", "XaDbedNeLmXkV-CR", "Qy-JV", "U-AP,WF", "XlinoHHkC-VP", "YyBwb-JE,UK,ZA", "JcUq-LG", "JrIiqOlfkTQXY-YC,IQ,TC", "mRUFTBwHVGkQkddp-XX,HR,ZB", "FWxsOvnrPSz-IT", "jiFCC-SH,UY", "gkxTTqqfsNMfN-FU", "eoMazm-ZT,DA,NX", "IItelKduONuMqOfHXG-XE"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> placeboard = {"hPxdIMSPR-CX", "uXVQTe-UG", "hHBaXms-VZ", "dKOiZzIqfiOxdXadile-WU", "mlXylJLWaAaUuflgtAG-IX", "mlXylJLWaAaUuflgtAG-YV", "PT-SB", "vjQxzRvcfeGEMt-IB", "RkCiuYfXKgWOMEqeC-FX", "t-EM", "lfIjMP-GF", "TRwp-OL", "mlXylJLWaAaUuflgtAG-LF", "IkEWNrI-DU", "IqZEenduhtgFoFrMzH-RE", "hPxdIMSPR-QB", "PT-XM", "TRwp-UY", "hHBaXms-JV", "hPxdIMSPR-KM", "t-DQ", "PT-BU", "t-SO", "IkEWNrI-VL", "mbjQwLripHELFlC-SB", "IqZEenduhtgFoFrMzH-VZ", "hPxdIMSPR-NV", "mlXylJLWaAaUuflgtAG-CA", "dKOiZzIqfiOxdXadile-ET", "t-LC", "IkEWNrI-TI", "uXVQTe-QF", "TRwp-JS", "dKOiZzIqfiOxdXadile-ZU", "TRwp-YB", "PT-KI", "mlXylJLWaAaUuflgtAG-TO", "t-RX", "RkCiuYfXKgWOMEqeC-RN", "V-YQ", "dKOiZzIqfiOxdXadile-YV", "RkCiuYfXKgWOMEqeC-DA", "uXVQTe-JP"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"hPxdIMSPR-CX,KM,NV,QB", "uXVQTe-UG,JP,QF", "hHBaXms-VZ,JV", "dKOiZzIqfiOxdXadile-WU,ET,YV,ZU", "mlXylJLWaAaUuflgtAG-IX,CA,LF,TO,YV", "mlXylJLWaAaUuflgtAG-YV,CA,IX,LF,TO", "PT-SB,BU,KI,XM", "vjQxzRvcfeGEMt-IB", "RkCiuYfXKgWOMEqeC-FX,DA,RN", "t-EM,DQ,LC,RX,SO", "lfIjMP-GF", "TRwp-OL,JS,UY,YB", "mlXylJLWaAaUuflgtAG-LF,CA,IX,TO,YV", "IkEWNrI-DU,TI,VL", "IqZEenduhtgFoFrMzH-RE,VZ", "hPxdIMSPR-QB,CX,KM,NV", "PT-XM,BU,KI,SB", "TRwp-UY,JS,OL,YB", "hHBaXms-JV,VZ", "hPxdIMSPR-KM,CX,NV,QB", "t-DQ,EM,LC,RX,SO", "PT-BU,KI,SB,XM", "t-SO,DQ,EM,LC,RX", "IkEWNrI-VL,DU,TI", "mbjQwLripHELFlC-SB", "IqZEenduhtgFoFrMzH-VZ,RE", "hPxdIMSPR-NV,CX,KM,QB", "mlXylJLWaAaUuflgtAG-CA,IX,LF,TO,YV", "dKOiZzIqfiOxdXadile-ET,WU,YV,ZU", "t-LC,DQ,EM,RX,SO", "IkEWNrI-TI,DU,VL", "uXVQTe-QF,JP,UG", "TRwp-JS,OL,UY,YB", "dKOiZzIqfiOxdXadile-ZU,ET,WU,YV", "TRwp-YB,JS,OL,UY", "PT-KI,BU,SB,XM", "mlXylJLWaAaUuflgtAG-TO,CA,IX,LF,YV", "t-RX,DQ,EM,LC,SO", "RkCiuYfXKgWOMEqeC-RN,DA,FX", "V-YQ", "dKOiZzIqfiOxdXadile-YV,ET,WU,ZU", "RkCiuYfXKgWOMEqeC-DA,FX,RN", "uXVQTe-JP,QF,UG"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> placeboard = {"rPdCkTON-IZ", "nqyO-TA", "hroFFTPxjauJsOctb-FS", "YbUAHrLOzo-GH", "ACGjnpXrhFtBJOghkygM-IO", "nqyO-LB", "CHCCPPg-RE", "QKYjLAMMhYdk-KI", "GxkXc-UF", "EzurPtHGvRlPXCi-KI", "KgiehZ-BV", "wxNcpNwE-VY", "RdOSGSNMHWvaJ-EG", "k-GW", "EzurPtHGvRlPXCi-EW", "OzkbHXKrbGzqoxBqxC-VO", "CzrbyQazFeiKtDp-MN", "HoBRkxvWBtal-UL", "KudbIlRryCfsfyRWfUv-EW", "ojbmKDddCryduAuSgdb-JF", "XIJHCbiNTYtuZleSP-TO", "IF-IM", "OfJ-LS", "YbUAHrLOzo-RF", "oELplRbonKaMBXMhQO-IV", "CzrbyQazFeiKtDp-NN", "CSxxEJZgJ-MC", "HoBRkxvWBtal-EW", "mEPujrttBdEkffb-UU", "hroFFTPxjauJsOctb-WZ", "IF-NH", "qtxlHHCZQFW-SJ", "haTwFLLA-VP", "RPdSOZUTAfSlmyAuDtV-HY", "mhVPflAwgvoUaGuwIgY-LE", "zPyXafCpEc-BH", "xEFnrY-YH", "w-LF", "LTJUSoOUmw-XO", "CHCCPPg-JZ", "mReYQFTcDKgE-SU", "MXeLyWApKtHShIYmGMSC-CU", "dmzoPZoaGQqHUi-CV", "mReYQFTcDKgE-BJ"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"rPdCkTON-IZ", "nqyO-TA,LB", "hroFFTPxjauJsOctb-FS,WZ", "YbUAHrLOzo-GH,RF", "ACGjnpXrhFtBJOghkygM-IO", "nqyO-LB,TA", "CHCCPPg-RE,JZ", "QKYjLAMMhYdk-KI", "GxkXc-UF", "EzurPtHGvRlPXCi-KI,EW", "KgiehZ-BV", "wxNcpNwE-VY", "RdOSGSNMHWvaJ-EG", "k-GW", "EzurPtHGvRlPXCi-EW,KI", "OzkbHXKrbGzqoxBqxC-VO", "CzrbyQazFeiKtDp-MN,NN", "HoBRkxvWBtal-UL,EW", "KudbIlRryCfsfyRWfUv-EW", "ojbmKDddCryduAuSgdb-JF", "XIJHCbiNTYtuZleSP-TO", "IF-IM,NH", "OfJ-LS", "YbUAHrLOzo-RF,GH", "oELplRbonKaMBXMhQO-IV", "CzrbyQazFeiKtDp-NN,MN", "CSxxEJZgJ-MC", "HoBRkxvWBtal-EW,UL", "mEPujrttBdEkffb-UU", "hroFFTPxjauJsOctb-WZ,FS", "IF-NH,IM", "qtxlHHCZQFW-SJ", "haTwFLLA-VP", "RPdSOZUTAfSlmyAuDtV-HY", "mhVPflAwgvoUaGuwIgY-LE", "zPyXafCpEc-BH", "xEFnrY-YH", "w-LF", "LTJUSoOUmw-XO", "CHCCPPg-JZ,RE", "mReYQFTcDKgE-SU,BJ", "MXeLyWApKtHShIYmGMSC-CU", "dmzoPZoaGQqHUi-CV", "mReYQFTcDKgE-BJ,SU"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> placeboard = {"aL-SE", "VuifSwXOqqKOrcA-JW", "pU-FP", "BLpHnU-OV", "NlugWrgYxuL-NJ", "tStYE-ON", "bHlwGJ-VR", "Qcr-FT", "sBiV-NA", "NlugWrgYxuL-EU", "fjAansHXDGdOMaIedaF-TW", "CyHTMo-IU", "zoJgrP-LL", "JpgLol-IH", "Qcr-HU", "IMQsETflkbkrRKx-WN", "QRFGyQbh-LK", "GfwYNheiGQvk-LY", "VuifSwXOqqKOrcA-IL", "LCBHEYv-AE", "OEMCmVpdnbjwmrytEL-PG", "rh-EL", "OEMCmVpdnbjwmrytEL-FI", "AYr-CC", "GVBPaIu-XE", "zoJgrP-ES", "NlugWrgYxuL-DJ", "Qcr-RS", "sBiV-FO", "QRFGyQbh-IP", "GfwYNheiGQvk-UL", "IMQsETflkbkrRKx-ND", "CyHTMo-OF", "RMZElELvgBsXMmpTgauK-KA", "sBiV-RV", "ygV-EP", "uWkLDV-ER", "ygV-SC", "uWkLDV-OC", "pVUwfgkfFXxnYHrAd-XU", "GSLvlaBe-GI", "rh-RN"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aL-SE", "VuifSwXOqqKOrcA-JW,IL", "pU-FP", "BLpHnU-OV", "NlugWrgYxuL-NJ,DJ,EU", "tStYE-ON", "bHlwGJ-VR", "Qcr-FT,HU,RS", "sBiV-NA,FO,RV", "NlugWrgYxuL-EU,DJ,NJ", "fjAansHXDGdOMaIedaF-TW", "CyHTMo-IU,OF", "zoJgrP-LL,ES", "JpgLol-IH", "Qcr-HU,FT,RS", "IMQsETflkbkrRKx-WN,ND", "QRFGyQbh-LK,IP", "GfwYNheiGQvk-LY,UL", "VuifSwXOqqKOrcA-IL,JW", "LCBHEYv-AE", "OEMCmVpdnbjwmrytEL-PG,FI", "rh-EL,RN", "OEMCmVpdnbjwmrytEL-FI,PG", "AYr-CC", "GVBPaIu-XE", "zoJgrP-ES,LL", "NlugWrgYxuL-DJ,EU,NJ", "Qcr-RS,FT,HU", "sBiV-FO,NA,RV", "QRFGyQbh-IP,LK", "GfwYNheiGQvk-UL,LY", "IMQsETflkbkrRKx-ND,WN", "CyHTMo-OF,IU", "RMZElELvgBsXMmpTgauK-KA", "sBiV-RV,FO,NA", "ygV-EP,SC", "uWkLDV-ER,OC", "ygV-SC,EP", "uWkLDV-OC,ER", "pVUwfgkfFXxnYHrAd-XU", "GSLvlaBe-GI", "rh-RN,EL"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> placeboard = {"OzwzCIIYpgTYE-AO", "hxGKsCbFiuVRSNOg-CE", "wwVdcfhyYLUdBIPZodd-YK", "HcSWSJGycGCBXB-QJ", "hxGKsCbFiuVRSNOg-MW", "yvYGTFNrGpmN-VR", "ULNMOkoTmTUkqFeyzY-CJ", "nGydK-PB", "ykX-NS", "BTIr-QI", "HvLsvmvyH-NU", "DPNDULVDixbuLarnHQJ-SJ", "pqGGhSy-YQ", "QV-XX", "QNynNGqzSRfjYAZcN-ST", "OzwzCIIYpgTYE-BX", "XBNJKsX-TY", "naiZxfJmuLcDJLFX-JK", "m-JV", "wwVdcfhyYLUdBIPZodd-JF", "wC-VG", "ZCQoJVOzTmmxyrRFfvC-EV", "HH-XS", "ULNMOkoTmTUkqFeyzY-ON", "wwVdcfhyYLUdBIPZodd-LA", "nHXPlwPZsYfQBKpfQes-DM", "HH-NE", "KLliaYXtSZdm-HB", "naiZxfJmuLcDJLFX-KG", "ZxxdvTnqadjZYQyS-FI", "KLliaYXtSZdm-BE", "pqGGhSy-BW", "iYiwzf-XF", "iYiwzf-HK", "ANMGXa-VM", "XBNJKsX-OB", "yvYGTFNrGpmN-OK", "nHXPlwPZsYfQBKpfQes-BE", "hxGKsCbFiuVRSNOg-OS", "q-YH", "RnPMqqK-IN", "DcEvFjMimgf-EJ", "pqGGhSy-MW"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OzwzCIIYpgTYE-AO,BX", "hxGKsCbFiuVRSNOg-CE,MW,OS", "wwVdcfhyYLUdBIPZodd-YK,JF,LA", "HcSWSJGycGCBXB-QJ", "hxGKsCbFiuVRSNOg-MW,CE,OS", "yvYGTFNrGpmN-VR,OK", "ULNMOkoTmTUkqFeyzY-CJ,ON", "nGydK-PB", "ykX-NS", "BTIr-QI", "HvLsvmvyH-NU", "DPNDULVDixbuLarnHQJ-SJ", "pqGGhSy-YQ,BW,MW", "QV-XX", "QNynNGqzSRfjYAZcN-ST", "OzwzCIIYpgTYE-BX,AO", "XBNJKsX-TY,OB", "naiZxfJmuLcDJLFX-JK,KG", "m-JV", "wwVdcfhyYLUdBIPZodd-JF,LA,YK", "wC-VG", "ZCQoJVOzTmmxyrRFfvC-EV", "HH-XS,NE", "ULNMOkoTmTUkqFeyzY-ON,CJ", "wwVdcfhyYLUdBIPZodd-LA,JF,YK", "nHXPlwPZsYfQBKpfQes-DM,BE", "HH-NE,XS", "KLliaYXtSZdm-HB,BE", "naiZxfJmuLcDJLFX-KG,JK", "ZxxdvTnqadjZYQyS-FI", "KLliaYXtSZdm-BE,HB", "pqGGhSy-BW,MW,YQ", "iYiwzf-XF,HK", "iYiwzf-HK,XF", "ANMGXa-VM", "XBNJKsX-OB,TY", "yvYGTFNrGpmN-OK,VR", "nHXPlwPZsYfQBKpfQes-BE,DM", "hxGKsCbFiuVRSNOg-OS,CE,MW", "q-YH", "RnPMqqK-IN", "DcEvFjMimgf-EJ", "pqGGhSy-MW,BW,YQ"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> placeboard = {"Bd-WC", "NOOTLiubyhz-RK", "hJhLyOjAccXXW-ZM", "ZhWDyvDkTXILD-ZL", "mcAGMvdVTF-FQ", "ov-QS", "Bd-ET", "rgPVBzDvjgPvgFs-JD", "XgNAq-LG", "ov-AP", "pgHsMUPI-RF", "ov-QF", "sxKKCoMfEks-DM", "cNXJyNwtOn-OO", "mcAGMvdVTF-ZZ", "pgHsMUPI-OQ", "WtXSDYPmMgqFDLpPBxqB-OS", "iDRdyjb-PG", "NOOTLiubyhz-ZZ", "WtXSDYPmMgqFDLpPBxqB-HY", "AxzvuXpEFkbuSKS-AN", "WQInfjRTeVvGxp-EP", "AxzvuXpEFkbuSKS-TZ", "rgPVBzDvjgPvgFs-YW", "QsL-ON", "EBowiregIFdgwkxRb-UD", "rgPVBzDvjgPvgFs-DG", "cNXJyNwtOn-JH", "RZhJQY-AP", "WQInfjRTeVvGxp-DS", "EBowiregIFdgwkxRb-PY", "WQInfjRTeVvGxp-DP", "QsL-BJ", "AxzvuXpEFkbuSKS-WM", "EBowiregIFdgwkxRb-AE", "cNXJyNwtOn-FE", "RZhJQY-JY", "sxKKCoMfEks-GH", "EBowiregIFdgwkxRb-GE", "Bd-JJ", "WtXSDYPmMgqFDLpPBxqB-IC", "cNXJyNwtOn-AB", "NOOTLiubyhz-TA", "XgNAq-VN", "ov-QR", "WQInfjRTeVvGxp-UM", "ZhWDyvDkTXILD-HP", "NOOTLiubyhz-DH", "Bd-SX"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bd-WC,ET,JJ,SX", "NOOTLiubyhz-RK,DH,TA,ZZ", "hJhLyOjAccXXW-ZM", "ZhWDyvDkTXILD-ZL,HP", "mcAGMvdVTF-FQ,ZZ", "ov-QS,AP,QF,QR", "Bd-ET,JJ,SX,WC", "rgPVBzDvjgPvgFs-JD,DG,YW", "XgNAq-LG,VN", "ov-AP,QF,QR,QS", "pgHsMUPI-RF,OQ", "ov-QF,AP,QR,QS", "sxKKCoMfEks-DM,GH", "cNXJyNwtOn-OO,AB,FE,JH", "mcAGMvdVTF-ZZ,FQ", "pgHsMUPI-OQ,RF", "WtXSDYPmMgqFDLpPBxqB-OS,HY,IC", "iDRdyjb-PG", "NOOTLiubyhz-ZZ,DH,RK,TA", "WtXSDYPmMgqFDLpPBxqB-HY,IC,OS", "AxzvuXpEFkbuSKS-AN,TZ,WM", "WQInfjRTeVvGxp-EP,DP,DS,UM", "AxzvuXpEFkbuSKS-TZ,AN,WM", "rgPVBzDvjgPvgFs-YW,DG,JD", "QsL-ON,BJ", "EBowiregIFdgwkxRb-UD,AE,GE,PY", "rgPVBzDvjgPvgFs-DG,JD,YW", "cNXJyNwtOn-JH,AB,FE,OO", "RZhJQY-AP,JY", "WQInfjRTeVvGxp-DS,DP,EP,UM", "EBowiregIFdgwkxRb-PY,AE,GE,UD", "WQInfjRTeVvGxp-DP,DS,EP,UM", "QsL-BJ,ON", "AxzvuXpEFkbuSKS-WM,AN,TZ", "EBowiregIFdgwkxRb-AE,GE,PY,UD", "cNXJyNwtOn-FE,AB,JH,OO", "RZhJQY-JY,AP", "sxKKCoMfEks-GH,DM", "EBowiregIFdgwkxRb-GE,AE,PY,UD", "Bd-JJ,ET,SX,WC", "WtXSDYPmMgqFDLpPBxqB-IC,HY,OS", "cNXJyNwtOn-AB,FE,JH,OO", "NOOTLiubyhz-TA,DH,RK,ZZ", "XgNAq-VN,LG", "ov-QR,AP,QF,QS", "WQInfjRTeVvGxp-UM,DP,DS,EP", "ZhWDyvDkTXILD-HP,ZL", "NOOTLiubyhz-DH,RK,TA,ZZ", "Bd-SX,ET,JJ,WC"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> placeboard = {"chJrBUpkaQx-TJ", "chJrBUpkaQx-WL", "SZOVXygqYoXR-YS", "peJSXiSjdZaOU-KO", "RsF-IA", "RsF-HN", "pLJrJFSAWDpoyehzGx-JR", "SZOVXygqYoXR-FH", "QocsgCucP-FV", "RsF-BO", "chJrBUpkaQx-YB", "tud-NV", "RsF-OR", "SZOVXygqYoXR-TO", "tud-JO", "tud-DU", "pLJrJFSAWDpoyehzGx-VX", "SZOVXygqYoXR-MU", "QocsgCucP-RE", "tud-FA", "peJSXiSjdZaOU-NN", "mVNtatUqDtxXatrVE-MN", "QocsgCucP-WL", "GaYSmQzwyGQoJJwxfn-XI", "pLJrJFSAWDpoyehzGx-AS", "QocsgCucP-LW", "pLJrJFSAWDpoyehzGx-FP", "tud-DE", "QocsgCucP-RC", "tud-KM", "B-ZO", "pLJrJFSAWDpoyehzGx-DH", "SZOVXygqYoXR-BH", "peJSXiSjdZaOU-CV", "chJrBUpkaQx-MZ", "QocsgCucP-FR", "tud-DQ", "SZOVXygqYoXR-KQ", "wChUNbfcqLX-OQ", "peJSXiSjdZaOU-WF", "pLJrJFSAWDpoyehzGx-PO", "GaYSmQzwyGQoJJwxfn-IL", "gWQegM-FG", "pLJrJFSAWDpoyehzGx-NC", "gWQegM-WO", "mVNtatUqDtxXatrVE-PG", "tud-EA"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"chJrBUpkaQx-TJ,MZ,WL,YB", "chJrBUpkaQx-WL,MZ,TJ,YB", "SZOVXygqYoXR-YS,BH,FH,KQ,MU,TO", "peJSXiSjdZaOU-KO,CV,NN,WF", "RsF-IA,BO,HN,OR", "RsF-HN,BO,IA,OR", "pLJrJFSAWDpoyehzGx-JR,AS,DH,FP,NC,PO,VX", "SZOVXygqYoXR-FH,BH,KQ,MU,TO,YS", "QocsgCucP-FV,FR,LW,RC,RE,WL", "RsF-BO,HN,IA,OR", "chJrBUpkaQx-YB,MZ,TJ,WL", "tud-NV,DE,DQ,DU,EA,FA,JO,KM", "RsF-OR,BO,HN,IA", "SZOVXygqYoXR-TO,BH,FH,KQ,MU,YS", "tud-JO,DE,DQ,DU,EA,FA,KM,NV", "tud-DU,DE,DQ,EA,FA,JO,KM,NV", "pLJrJFSAWDpoyehzGx-VX,AS,DH,FP,JR,NC,PO", "SZOVXygqYoXR-MU,BH,FH,KQ,TO,YS", "QocsgCucP-RE,FR,FV,LW,RC,WL", "tud-FA,DE,DQ,DU,EA,JO,KM,NV", "peJSXiSjdZaOU-NN,CV,KO,WF", "mVNtatUqDtxXatrVE-MN,PG", "QocsgCucP-WL,FR,FV,LW,RC,RE", "GaYSmQzwyGQoJJwxfn-XI,IL", "pLJrJFSAWDpoyehzGx-AS,DH,FP,JR,NC,PO,VX", "QocsgCucP-LW,FR,FV,RC,RE,WL", "pLJrJFSAWDpoyehzGx-FP,AS,DH,JR,NC,PO,VX", "tud-DE,DQ,DU,EA,FA,JO,KM,NV", "QocsgCucP-RC,FR,FV,LW,RE,WL", "tud-KM,DE,DQ,DU,EA,FA,JO,NV", "B-ZO", "pLJrJFSAWDpoyehzGx-DH,AS,FP,JR,NC,PO,VX", "SZOVXygqYoXR-BH,FH,KQ,MU,TO,YS", "peJSXiSjdZaOU-CV,KO,NN,WF", "chJrBUpkaQx-MZ,TJ,WL,YB", "QocsgCucP-FR,FV,LW,RC,RE,WL", "tud-DQ,DE,DU,EA,FA,JO,KM,NV", "SZOVXygqYoXR-KQ,BH,FH,MU,TO,YS", "wChUNbfcqLX-OQ", "peJSXiSjdZaOU-WF,CV,KO,NN", "pLJrJFSAWDpoyehzGx-PO,AS,DH,FP,JR,NC,VX", "GaYSmQzwyGQoJJwxfn-IL,XI", "gWQegM-FG,WO", "pLJrJFSAWDpoyehzGx-NC,AS,DH,FP,JR,PO,VX", "gWQegM-WO,FG", "mVNtatUqDtxXatrVE-PG,MN", "tud-EA,DE,DQ,DU,FA,JO,KM,NV"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> placeboard = {"NjnCvrBl-VT", "VVQP-AO", "zjYxYcQXu-PP", "YCuHExBIutOiBNuZTol-EN", "rMxMEHoVEnZsQmEMdBDc-EA", "gsOVzRjYwhU-QC", "VVQP-LS", "rMxMEHoVEnZsQmEMdBDc-HG", "zZutmoo-DM", "XiVPYqzM-ER", "NQCAIoyMdroo-NF", "zjYxYcQXu-HZ", "XItvq-ER", "NQCAIoyMdroo-LH", "rMxMEHoVEnZsQmEMdBDc-FW", "vArCsVWVdZjEuqGhV-OU", "zZutmoo-OQ", "YCuHExBIutOiBNuZTol-BG", "qppDKygUqr-VE", "JgLfS-ZT", "pnTmutQpTzfLyT-CM", "hIkFGQyStwn-MQ", "gsOVzRjYwhU-QZ", "NjnCvrBl-UV", "rMxMEHoVEnZsQmEMdBDc-VN", "fznG-LW", "fznG-WA", "NjnCvrBl-VV", "N-IQ", "N-RT", "zZutmoo-ZT", "VVQP-TK", "zZutmoo-SN", "qppDKygUqr-EO", "hIkFGQyStwn-EP", "oaOtYxebFbSuJDHa-UN", "XiVPYqzM-WS", "zjYxYcQXu-MW", "pnTmutQpTzfLyT-SB", "qppDKygUqr-MV", "pnTmutQpTzfLyT-PL", "gsOVzRjYwhU-AU", "N-SA"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NjnCvrBl-VT,UV,VV", "VVQP-AO,LS,TK", "zjYxYcQXu-PP,HZ,MW", "YCuHExBIutOiBNuZTol-EN,BG", "rMxMEHoVEnZsQmEMdBDc-EA,FW,HG,VN", "gsOVzRjYwhU-QC,AU,QZ", "VVQP-LS,AO,TK", "rMxMEHoVEnZsQmEMdBDc-HG,EA,FW,VN", "zZutmoo-DM,OQ,SN,ZT", "XiVPYqzM-ER,WS", "NQCAIoyMdroo-NF,LH", "zjYxYcQXu-HZ,MW,PP", "XItvq-ER", "NQCAIoyMdroo-LH,NF", "rMxMEHoVEnZsQmEMdBDc-FW,EA,HG,VN", "vArCsVWVdZjEuqGhV-OU", "zZutmoo-OQ,DM,SN,ZT", "YCuHExBIutOiBNuZTol-BG,EN", "qppDKygUqr-VE,EO,MV", "JgLfS-ZT", "pnTmutQpTzfLyT-CM,PL,SB", "hIkFGQyStwn-MQ,EP", "gsOVzRjYwhU-QZ,AU,QC", "NjnCvrBl-UV,VT,VV", "rMxMEHoVEnZsQmEMdBDc-VN,EA,FW,HG", "fznG-LW,WA", "fznG-WA,LW", "NjnCvrBl-VV,UV,VT", "N-IQ,RT,SA", "N-RT,IQ,SA", "zZutmoo-ZT,DM,OQ,SN", "VVQP-TK,AO,LS", "zZutmoo-SN,DM,OQ,ZT", "qppDKygUqr-EO,MV,VE", "hIkFGQyStwn-EP,MQ", "oaOtYxebFbSuJDHa-UN", "XiVPYqzM-WS,ER", "zjYxYcQXu-MW,HZ,PP", "pnTmutQpTzfLyT-SB,CM,PL", "qppDKygUqr-MV,EO,VE", "pnTmutQpTzfLyT-PL,CM,SB", "gsOVzRjYwhU-AU,QC,QZ", "N-SA,IQ,RT"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> placeboard = {"eWWYUfJNcxzGhRM-AZ", "gLXjtnPq-JE", "gLXjtnPq-IC", "eWWYUfJNcxzGhRM-OK", "vdAXAwMo-RU", "XIMyzlUFgRbaiGB-FT", "OHewusvmIu-PQ", "jsmMqUuZPMQNBLkJdRE-ON", "eWWYUfJNcxzGhRM-LR", "NATwzKWBs-ES", "Dn-VK", "HvhVFIuDfxHZh-LX", "jsmMqUuZPMQNBLkJdRE-FZ", "PlaGmwrgsxVoem-CO", "dLwPRTMfeAdGaUukMP-UY", "dLwPRTMfeAdGaUukMP-MW", "cWIjHE-SO", "jpnqpCVMOvbUA-BU", "PGbPrFNcVK-MO", "GSvlkUpioDobfdUIvk-GN", "OHewusvmIu-RX", "DYPn-UA", "mFUFRfOvqBfzqxDP-QG", "mFUFRfOvqBfzqxDP-PU", "dLwPRTMfeAdGaUukMP-ML", "aBmCVETGqJxAWZ-XQ", "D-PE", "OHewusvmIu-TT", "cWIjHE-BH", "gLXjtnPq-NZ", "vdAXAwMo-MO", "D-OZ", "gLXjtnPq-CX", "cWIjHE-JT", "labMURFrmmga-DU", "ydGTxYeo-XB", "cWIjHE-LM", "mFUFRfOvqBfzqxDP-JP", "ydGTxYeo-WH", "jsmMqUuZPMQNBLkJdRE-XB"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"eWWYUfJNcxzGhRM-AZ,LR,OK", "gLXjtnPq-JE,CX,IC,NZ", "gLXjtnPq-IC,CX,JE,NZ", "eWWYUfJNcxzGhRM-OK,AZ,LR", "vdAXAwMo-RU,MO", "XIMyzlUFgRbaiGB-FT", "OHewusvmIu-PQ,RX,TT", "jsmMqUuZPMQNBLkJdRE-ON,FZ,XB", "eWWYUfJNcxzGhRM-LR,AZ,OK", "NATwzKWBs-ES", "Dn-VK", "HvhVFIuDfxHZh-LX", "jsmMqUuZPMQNBLkJdRE-FZ,ON,XB", "PlaGmwrgsxVoem-CO", "dLwPRTMfeAdGaUukMP-UY,ML,MW", "dLwPRTMfeAdGaUukMP-MW,ML,UY", "cWIjHE-SO,BH,JT,LM", "jpnqpCVMOvbUA-BU", "PGbPrFNcVK-MO", "GSvlkUpioDobfdUIvk-GN", "OHewusvmIu-RX,PQ,TT", "DYPn-UA", "mFUFRfOvqBfzqxDP-QG,JP,PU", "mFUFRfOvqBfzqxDP-PU,JP,QG", "dLwPRTMfeAdGaUukMP-ML,MW,UY", "aBmCVETGqJxAWZ-XQ", "D-PE,OZ", "OHewusvmIu-TT,PQ,RX", "cWIjHE-BH,JT,LM,SO", "gLXjtnPq-NZ,CX,IC,JE", "vdAXAwMo-MO,RU", "D-OZ,PE", "gLXjtnPq-CX,IC,JE,NZ", "cWIjHE-JT,BH,LM,SO", "labMURFrmmga-DU", "ydGTxYeo-XB,WH", "cWIjHE-LM,BH,JT,SO", "mFUFRfOvqBfzqxDP-JP,PU,QG", "ydGTxYeo-WH,XB", "jsmMqUuZPMQNBLkJdRE-XB,FZ,ON"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> placeboard = {"IdnchKmeXCrqmjvPpehI-ZH", "qUtvlxBHhyZWEwqwC-VI", "WfjkIbTvqugBtyzBy-FM", "yulwGaCgmfJ-QM", "ARluyQWXIntgvb-JK", "ybzMqIFDlWaYosOHebD-HE", "EmZdCjSRvFaWFxz-WY", "oHOosCJ-ZG", "vpcYZc-HC", "oHOosCJ-AA", "fzZTjWSqArInHfLcR-LS", "qUtvlxBHhyZWEwqwC-TY", "BdLwwRrHReSVHCqp-GK", "yulwGaCgmfJ-JB", "ybzMqIFDlWaYosOHebD-KC", "fzZTjWSqArInHfLcR-UR", "BdLwwRrHReSVHCqp-GD", "jolOeVNUfQeA-QT", "EmZdCjSRvFaWFxz-NV", "oHOosCJ-HM", "slDHIgss-PJ", "vwRlB-DD", "LmgpdAgjXySFtzuoPMX-CR", "uxXyXSWtJhBltlmKp-UH", "Hrq-PO", "uxXyXSWtJhBltlmKp-TV", "btWlyuIkWMJQTzlaK-OF", "WfjkIbTvqugBtyzBy-VS", "zym-BZ", "uxXyXSWtJhBltlmKp-MN", "jolOeVNUfQeA-RV", "vwRlB-JO", "vpcYZc-ST", "gDbcWn-FX", "jolOeVNUfQeA-BM", "AIqGIjuXVJSdpK-PI", "IdnchKmeXCrqmjvPpehI-YJ", "vpcYZc-UC", "fqZmMyEBfmIePGT-ZU", "qUtvlxBHhyZWEwqwC-IF", "IdnchKmeXCrqmjvPpehI-XM", "AIqGIjuXVJSdpK-KK", "UkzyHJfaS-FC", "vpcYZc-FP", "vwRlB-VK", "zym-YQ", "vpcYZc-TH", "UkzyHJfaS-BK"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IdnchKmeXCrqmjvPpehI-ZH,XM,YJ", "qUtvlxBHhyZWEwqwC-VI,IF,TY", "WfjkIbTvqugBtyzBy-FM,VS", "yulwGaCgmfJ-QM,JB", "ARluyQWXIntgvb-JK", "ybzMqIFDlWaYosOHebD-HE,KC", "EmZdCjSRvFaWFxz-WY,NV", "oHOosCJ-ZG,AA,HM", "vpcYZc-HC,FP,ST,TH,UC", "oHOosCJ-AA,HM,ZG", "fzZTjWSqArInHfLcR-LS,UR", "qUtvlxBHhyZWEwqwC-TY,IF,VI", "BdLwwRrHReSVHCqp-GK,GD", "yulwGaCgmfJ-JB,QM", "ybzMqIFDlWaYosOHebD-KC,HE", "fzZTjWSqArInHfLcR-UR,LS", "BdLwwRrHReSVHCqp-GD,GK", "jolOeVNUfQeA-QT,BM,RV", "EmZdCjSRvFaWFxz-NV,WY", "oHOosCJ-HM,AA,ZG", "slDHIgss-PJ", "vwRlB-DD,JO,VK", "LmgpdAgjXySFtzuoPMX-CR", "uxXyXSWtJhBltlmKp-UH,MN,TV", "Hrq-PO", "uxXyXSWtJhBltlmKp-TV,MN,UH", "btWlyuIkWMJQTzlaK-OF", "WfjkIbTvqugBtyzBy-VS,FM", "zym-BZ,YQ", "uxXyXSWtJhBltlmKp-MN,TV,UH", "jolOeVNUfQeA-RV,BM,QT", "vwRlB-JO,DD,VK", "vpcYZc-ST,FP,HC,TH,UC", "gDbcWn-FX", "jolOeVNUfQeA-BM,QT,RV", "AIqGIjuXVJSdpK-PI,KK", "IdnchKmeXCrqmjvPpehI-YJ,XM,ZH", "vpcYZc-UC,FP,HC,ST,TH", "fqZmMyEBfmIePGT-ZU", "qUtvlxBHhyZWEwqwC-IF,TY,VI", "IdnchKmeXCrqmjvPpehI-XM,YJ,ZH", "AIqGIjuXVJSdpK-KK,PI", "UkzyHJfaS-FC,BK", "vpcYZc-FP,HC,ST,TH,UC", "vwRlB-VK,DD,JO", "zym-YQ,BZ", "vpcYZc-TH,FP,HC,ST,UC", "UkzyHJfaS-BK,FC"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> placeboard = {"wNeHBIU-PT", "PeDspLZgJxjqev-MN", "YfNzzovtfrkMW-DX", "nziTDZcERmJ-KA", "CaTbbCwHbzY-DC", "OyHOlNmeeuPycX-NT", "BHKiclktcImwXftHNPh-CG", "RkURf-BH", "YfNzzovtfrkMW-FE", "gHtCSqrUz-OR", "RkURf-HX", "vogtcCrTQeOs-HK", "JhBepuvZSlFdCHli-QO", "PeDspLZgJxjqev-VO", "CaTbbCwHbzY-EN", "eTYc-DG", "yX-CZ", "bnARIXnoxYXigJpzuMe-JX", "OyHOlNmeeuPycX-QO", "wNeHBIU-EH", "gHtCSqrUz-MP", "YfNzzovtfrkMW-GD", "wtIAgVfaLlCBX-QC", "CaTbbCwHbzY-PW", "IglPUCs-RZ", "PeDspLZgJxjqev-KK", "wtIAgVfaLlCBX-LR", "lrehVVxNMlmrlISCfl-AX", "BHKiclktcImwXftHNPh-VI", "YfNzzovtfrkMW-WB", "pCYtyOT-BW", "wtIAgVfaLlCBX-RP", "OyHOlNmeeuPycX-DN", "YfNzzovtfrkMW-KT", "yX-OF", "JhBepuvZSlFdCHli-RS", "PeDspLZgJxjqev-BG", "RkURf-XH", "pCYtyOT-NP", "tVnzWN-LL", "OyHOlNmeeuPycX-BZ", "reUKMN-OC", "bnARIXnoxYXigJpzuMe-KF", "YfNzzovtfrkMW-XH", "vogtcCrTQeOs-DR", "wNeHBIU-XC", "cWmJfVYMluNVDJ-PG", "JhBepuvZSlFdCHli-EE", "mhZdejBeSge-IP"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wNeHBIU-PT,EH,XC", "PeDspLZgJxjqev-MN,BG,KK,VO", "YfNzzovtfrkMW-DX,FE,GD,KT,WB,XH", "nziTDZcERmJ-KA", "CaTbbCwHbzY-DC,EN,PW", "OyHOlNmeeuPycX-NT,BZ,DN,QO", "BHKiclktcImwXftHNPh-CG,VI", "RkURf-BH,HX,XH", "YfNzzovtfrkMW-FE,DX,GD,KT,WB,XH", "gHtCSqrUz-OR,MP", "RkURf-HX,BH,XH", "vogtcCrTQeOs-HK,DR", "JhBepuvZSlFdCHli-QO,EE,RS", "PeDspLZgJxjqev-VO,BG,KK,MN", "CaTbbCwHbzY-EN,DC,PW", "eTYc-DG", "yX-CZ,OF", "bnARIXnoxYXigJpzuMe-JX,KF", "OyHOlNmeeuPycX-QO,BZ,DN,NT", "wNeHBIU-EH,PT,XC", "gHtCSqrUz-MP,OR", "YfNzzovtfrkMW-GD,DX,FE,KT,WB,XH", "wtIAgVfaLlCBX-QC,LR,RP", "CaTbbCwHbzY-PW,DC,EN", "IglPUCs-RZ", "PeDspLZgJxjqev-KK,BG,MN,VO", "wtIAgVfaLlCBX-LR,QC,RP", "lrehVVxNMlmrlISCfl-AX", "BHKiclktcImwXftHNPh-VI,CG", "YfNzzovtfrkMW-WB,DX,FE,GD,KT,XH", "pCYtyOT-BW,NP", "wtIAgVfaLlCBX-RP,LR,QC", "OyHOlNmeeuPycX-DN,BZ,NT,QO", "YfNzzovtfrkMW-KT,DX,FE,GD,WB,XH", "yX-OF,CZ", "JhBepuvZSlFdCHli-RS,EE,QO", "PeDspLZgJxjqev-BG,KK,MN,VO", "RkURf-XH,BH,HX", "pCYtyOT-NP,BW", "tVnzWN-LL", "OyHOlNmeeuPycX-BZ,DN,NT,QO", "reUKMN-OC", "bnARIXnoxYXigJpzuMe-KF,JX", "YfNzzovtfrkMW-XH,DX,FE,GD,KT,WB", "vogtcCrTQeOs-DR,HK", "wNeHBIU-XC,EH,PT", "cWmJfVYMluNVDJ-PG", "JhBepuvZSlFdCHli-EE,QO,RS", "mhZdejBeSge-IP"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> placeboard = {"nRwYGCLnkKzJmvO-WA", "VSxJtozjIVgH-ZL", "pKtaDcNlijekKKry-ED", "nOZF-CI", "MIrdEfaEruRSGmM-HL", "lU-HA", "To-CV", "XgQYCQjpnzrG-QT", "lU-MM", "MIrdEfaEruRSGmM-PH", "RCMpHjrGtRwyLeEO-MI", "kstoUxzamri-MH", "XgQYCQjpnzrG-FJ", "XgQYCQjpnzrG-WH", "RCMpHjrGtRwyLeEO-JV", "qOoDxRPNjyNAk-OF", "ryDaPvQv-CK", "To-UF", "nOZF-IV", "QdCkjzwDul-MK", "iLp-MW", "VSxJtozjIVgH-KI", "pKtaDcNlijekKKry-YL", "MIrdEfaEruRSGmM-XM", "RCMpHjrGtRwyLeEO-CZ", "pKtaDcNlijekKKry-YY", "nRwYGCLnkKzJmvO-GH", "tEjkxeDymIlYLxxae-QL", "VSxJtozjIVgH-BR", "kstoUxzamri-EC", "kstoUxzamri-LS", "qOoDxRPNjyNAk-ZJ", "nRwYGCLnkKzJmvO-PD", "QdCkjzwDul-VL", "RCMpHjrGtRwyLeEO-GR", "bk-AT", "bk-CB", "MIrdEfaEruRSGmM-IO", "XgQYCQjpnzrG-ZJ", "RCMpHjrGtRwyLeEO-SI", "tEjkxeDymIlYLxxae-MD", "bk-HL"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"nRwYGCLnkKzJmvO-WA,GH,PD", "VSxJtozjIVgH-ZL,BR,KI", "pKtaDcNlijekKKry-ED,YL,YY", "nOZF-CI,IV", "MIrdEfaEruRSGmM-HL,IO,PH,XM", "lU-HA,MM", "To-CV,UF", "XgQYCQjpnzrG-QT,FJ,WH,ZJ", "lU-MM,HA", "MIrdEfaEruRSGmM-PH,HL,IO,XM", "RCMpHjrGtRwyLeEO-MI,CZ,GR,JV,SI", "kstoUxzamri-MH,EC,LS", "XgQYCQjpnzrG-FJ,QT,WH,ZJ", "XgQYCQjpnzrG-WH,FJ,QT,ZJ", "RCMpHjrGtRwyLeEO-JV,CZ,GR,MI,SI", "qOoDxRPNjyNAk-OF,ZJ", "ryDaPvQv-CK", "To-UF,CV", "nOZF-IV,CI", "QdCkjzwDul-MK,VL", "iLp-MW", "VSxJtozjIVgH-KI,BR,ZL", "pKtaDcNlijekKKry-YL,ED,YY", "MIrdEfaEruRSGmM-XM,HL,IO,PH", "RCMpHjrGtRwyLeEO-CZ,GR,JV,MI,SI", "pKtaDcNlijekKKry-YY,ED,YL", "nRwYGCLnkKzJmvO-GH,PD,WA", "tEjkxeDymIlYLxxae-QL,MD", "VSxJtozjIVgH-BR,KI,ZL", "kstoUxzamri-EC,LS,MH", "kstoUxzamri-LS,EC,MH", "qOoDxRPNjyNAk-ZJ,OF", "nRwYGCLnkKzJmvO-PD,GH,WA", "QdCkjzwDul-VL,MK", "RCMpHjrGtRwyLeEO-GR,CZ,JV,MI,SI", "bk-AT,CB,HL", "bk-CB,AT,HL", "MIrdEfaEruRSGmM-IO,HL,PH,XM", "XgQYCQjpnzrG-ZJ,FJ,QT,WH", "RCMpHjrGtRwyLeEO-SI,CZ,GR,JV,MI", "tEjkxeDymIlYLxxae-MD,QL", "bk-HL,AT,CB"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> placeboard = {"Sc-EQ", "rlvaLpxFcMjZaBoxh-FJ", "VrmiRg-XV", "cidvXJaKW-CP", "VrmiRg-LQ", "rlvaLpxFcMjZaBoxh-EC", "Sc-WM", "EVDHet-RZ", "cidvXJaKW-KV", "cidvXJaKW-WA", "Sc-KU", "rlvaLpxFcMjZaBoxh-CC", "rlvaLpxFcMjZaBoxh-SI", "rlvaLpxFcMjZaBoxh-HC", "VrmiRg-QZ", "EVDHet-GE", "Sc-BU", "rlvaLpxFcMjZaBoxh-ES", "rlvaLpxFcMjZaBoxh-JZ", "VrmiRg-PS", "VrmiRg-HG", "VrmiRg-GZ", "cidvXJaKW-MK", "cidvXJaKW-TY", "VrmiRg-RY", "VrmiRg-QX", "rlvaLpxFcMjZaBoxh-QB", "Sc-ME", "Sc-DV", "cidvXJaKW-SV", "EVDHet-RK", "Sc-DT", "rlvaLpxFcMjZaBoxh-CY", "rlvaLpxFcMjZaBoxh-JD", "VrmiRg-CZ", "VrmiRg-SE", "Sc-RI", "rlvaLpxFcMjZaBoxh-VC", "rlvaLpxFcMjZaBoxh-MK", "cidvXJaKW-US", "EVDHet-OX", "Sc-AL", "VrmiRg-MO", "VrmiRg-LM", "Sc-OJ", "Sc-EA"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Sc-EQ,AL,BU,DT,DV,EA,KU,ME,OJ,RI,WM", "rlvaLpxFcMjZaBoxh-FJ,CC,CY,EC,ES,HC,JD,JZ,MK,QB,SI,VC", "VrmiRg-XV,CZ,GZ,HG,LM,LQ,MO,PS,QX,QZ,RY,SE", "cidvXJaKW-CP,KV,MK,SV,TY,US,WA", "VrmiRg-LQ,CZ,GZ,HG,LM,MO,PS,QX,QZ,RY,SE,XV", "rlvaLpxFcMjZaBoxh-EC,CC,CY,ES,FJ,HC,JD,JZ,MK,QB,SI,VC", "Sc-WM,AL,BU,DT,DV,EA,EQ,KU,ME,OJ,RI", "EVDHet-RZ,GE,OX,RK", "cidvXJaKW-KV,CP,MK,SV,TY,US,WA", "cidvXJaKW-WA,CP,KV,MK,SV,TY,US", "Sc-KU,AL,BU,DT,DV,EA,EQ,ME,OJ,RI,WM", "rlvaLpxFcMjZaBoxh-CC,CY,EC,ES,FJ,HC,JD,JZ,MK,QB,SI,VC", "rlvaLpxFcMjZaBoxh-SI,CC,CY,EC,ES,FJ,HC,JD,JZ,MK,QB,VC", "rlvaLpxFcMjZaBoxh-HC,CC,CY,EC,ES,FJ,JD,JZ,MK,QB,SI,VC", "VrmiRg-QZ,CZ,GZ,HG,LM,LQ,MO,PS,QX,RY,SE,XV", "EVDHet-GE,OX,RK,RZ", "Sc-BU,AL,DT,DV,EA,EQ,KU,ME,OJ,RI,WM", "rlvaLpxFcMjZaBoxh-ES,CC,CY,EC,FJ,HC,JD,JZ,MK,QB,SI,VC", "rlvaLpxFcMjZaBoxh-JZ,CC,CY,EC,ES,FJ,HC,JD,MK,QB,SI,VC", "VrmiRg-PS,CZ,GZ,HG,LM,LQ,MO,QX,QZ,RY,SE,XV", "VrmiRg-HG,CZ,GZ,LM,LQ,MO,PS,QX,QZ,RY,SE,XV", "VrmiRg-GZ,CZ,HG,LM,LQ,MO,PS,QX,QZ,RY,SE,XV", "cidvXJaKW-MK,CP,KV,SV,TY,US,WA", "cidvXJaKW-TY,CP,KV,MK,SV,US,WA", "VrmiRg-RY,CZ,GZ,HG,LM,LQ,MO,PS,QX,QZ,SE,XV", "VrmiRg-QX,CZ,GZ,HG,LM,LQ,MO,PS,QZ,RY,SE,XV", "rlvaLpxFcMjZaBoxh-QB,CC,CY,EC,ES,FJ,HC,JD,JZ,MK,SI,VC", "Sc-ME,AL,BU,DT,DV,EA,EQ,KU,OJ,RI,WM", "Sc-DV,AL,BU,DT,EA,EQ,KU,ME,OJ,RI,WM", "cidvXJaKW-SV,CP,KV,MK,TY,US,WA", "EVDHet-RK,GE,OX,RZ", "Sc-DT,AL,BU,DV,EA,EQ,KU,ME,OJ,RI,WM", "rlvaLpxFcMjZaBoxh-CY,CC,EC,ES,FJ,HC,JD,JZ,MK,QB,SI,VC", "rlvaLpxFcMjZaBoxh-JD,CC,CY,EC,ES,FJ,HC,JZ,MK,QB,SI,VC", "VrmiRg-CZ,GZ,HG,LM,LQ,MO,PS,QX,QZ,RY,SE,XV", "VrmiRg-SE,CZ,GZ,HG,LM,LQ,MO,PS,QX,QZ,RY,XV", "Sc-RI,AL,BU,DT,DV,EA,EQ,KU,ME,OJ,WM", "rlvaLpxFcMjZaBoxh-VC,CC,CY,EC,ES,FJ,HC,JD,JZ,MK,QB,SI", "rlvaLpxFcMjZaBoxh-MK,CC,CY,EC,ES,FJ,HC,JD,JZ,QB,SI,VC", "cidvXJaKW-US,CP,KV,MK,SV,TY,WA", "EVDHet-OX,GE,RK,RZ", "Sc-AL,BU,DT,DV,EA,EQ,KU,ME,OJ,RI,WM", "VrmiRg-MO,CZ,GZ,HG,LM,LQ,PS,QX,QZ,RY,SE,XV", "VrmiRg-LM,CZ,GZ,HG,LQ,MO,PS,QX,QZ,RY,SE,XV", "Sc-OJ,AL,BU,DT,DV,EA,EQ,KU,ME,RI,WM", "Sc-EA,AL,BU,DT,DV,EQ,KU,ME,OJ,RI,WM"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> placeboard = {"ixmuXfMz-QY", "WYhO-RQ", "WYhO-NI", "RskDnhtWnQAxuKUw-YX", "JGyyiZoGbrL-EI", "RskDnhtWnQAxuKUw-MQ", "RskDnhtWnQAxuKUw-BA", "pLdmjS-EX", "JGyyiZoGbrL-FX", "pLdmjS-OP", "JGyyiZoGbrL-OD", "pLdmjS-JV", "JGyyiZoGbrL-TF", "RskDnhtWnQAxuKUw-QT", "JGyyiZoGbrL-ND", "JGyyiZoGbrL-YN", "ixmuXfMz-XJ", "JGyyiZoGbrL-HM", "ixmuXfMz-QC", "JGyyiZoGbrL-OW", "pLdmjS-CX", "pLdmjS-GU", "JGyyiZoGbrL-KM", "ixmuXfMz-MH", "WYhO-GP", "pLdmjS-LC", "JGyyiZoGbrL-AN", "RskDnhtWnQAxuKUw-FI", "WYhO-CH", "ixmuXfMz-ME", "JGyyiZoGbrL-CW", "pLdmjS-QN", "RskDnhtWnQAxuKUw-TI", "RskDnhtWnQAxuKUw-FV", "ixmuXfMz-LY", "RskDnhtWnQAxuKUw-XW", "ixmuXfMz-GE", "ixmuXfMz-ZK", "WYhO-UQ", "ixmuXfMz-NN", "pLdmjS-BK", "pLdmjS-YB", "WYhO-FO", "WYhO-PS", "JGyyiZoGbrL-KY", "ixmuXfMz-XH"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ixmuXfMz-QY,GE,LY,ME,MH,NN,QC,XH,XJ,ZK", "WYhO-RQ,CH,FO,GP,NI,PS,UQ", "WYhO-NI,CH,FO,GP,PS,RQ,UQ", "RskDnhtWnQAxuKUw-YX,BA,FI,FV,MQ,QT,TI,XW", "JGyyiZoGbrL-EI,AN,CW,FX,HM,KM,KY,ND,OD,OW,TF,YN", "RskDnhtWnQAxuKUw-MQ,BA,FI,FV,QT,TI,XW,YX", "RskDnhtWnQAxuKUw-BA,FI,FV,MQ,QT,TI,XW,YX", "pLdmjS-EX,BK,CX,GU,JV,LC,OP,QN,YB", "JGyyiZoGbrL-FX,AN,CW,EI,HM,KM,KY,ND,OD,OW,TF,YN", "pLdmjS-OP,BK,CX,EX,GU,JV,LC,QN,YB", "JGyyiZoGbrL-OD,AN,CW,EI,FX,HM,KM,KY,ND,OW,TF,YN", "pLdmjS-JV,BK,CX,EX,GU,LC,OP,QN,YB", "JGyyiZoGbrL-TF,AN,CW,EI,FX,HM,KM,KY,ND,OD,OW,YN", "RskDnhtWnQAxuKUw-QT,BA,FI,FV,MQ,TI,XW,YX", "JGyyiZoGbrL-ND,AN,CW,EI,FX,HM,KM,KY,OD,OW,TF,YN", "JGyyiZoGbrL-YN,AN,CW,EI,FX,HM,KM,KY,ND,OD,OW,TF", "ixmuXfMz-XJ,GE,LY,ME,MH,NN,QC,QY,XH,ZK", "JGyyiZoGbrL-HM,AN,CW,EI,FX,KM,KY,ND,OD,OW,TF,YN", "ixmuXfMz-QC,GE,LY,ME,MH,NN,QY,XH,XJ,ZK", "JGyyiZoGbrL-OW,AN,CW,EI,FX,HM,KM,KY,ND,OD,TF,YN", "pLdmjS-CX,BK,EX,GU,JV,LC,OP,QN,YB", "pLdmjS-GU,BK,CX,EX,JV,LC,OP,QN,YB", "JGyyiZoGbrL-KM,AN,CW,EI,FX,HM,KY,ND,OD,OW,TF,YN", "ixmuXfMz-MH,GE,LY,ME,NN,QC,QY,XH,XJ,ZK", "WYhO-GP,CH,FO,NI,PS,RQ,UQ", "pLdmjS-LC,BK,CX,EX,GU,JV,OP,QN,YB", "JGyyiZoGbrL-AN,CW,EI,FX,HM,KM,KY,ND,OD,OW,TF,YN", "RskDnhtWnQAxuKUw-FI,BA,FV,MQ,QT,TI,XW,YX", "WYhO-CH,FO,GP,NI,PS,RQ,UQ", "ixmuXfMz-ME,GE,LY,MH,NN,QC,QY,XH,XJ,ZK", "JGyyiZoGbrL-CW,AN,EI,FX,HM,KM,KY,ND,OD,OW,TF,YN", "pLdmjS-QN,BK,CX,EX,GU,JV,LC,OP,YB", "RskDnhtWnQAxuKUw-TI,BA,FI,FV,MQ,QT,XW,YX", "RskDnhtWnQAxuKUw-FV,BA,FI,MQ,QT,TI,XW,YX", "ixmuXfMz-LY,GE,ME,MH,NN,QC,QY,XH,XJ,ZK", "RskDnhtWnQAxuKUw-XW,BA,FI,FV,MQ,QT,TI,YX", "ixmuXfMz-GE,LY,ME,MH,NN,QC,QY,XH,XJ,ZK", "ixmuXfMz-ZK,GE,LY,ME,MH,NN,QC,QY,XH,XJ", "WYhO-UQ,CH,FO,GP,NI,PS,RQ", "ixmuXfMz-NN,GE,LY,ME,MH,QC,QY,XH,XJ,ZK", "pLdmjS-BK,CX,EX,GU,JV,LC,OP,QN,YB", "pLdmjS-YB,BK,CX,EX,GU,JV,LC,OP,QN", "WYhO-FO,CH,GP,NI,PS,RQ,UQ", "WYhO-PS,CH,FO,GP,NI,RQ,UQ", "JGyyiZoGbrL-KY,AN,CW,EI,FX,HM,KM,ND,OD,OW,TF,YN", "ixmuXfMz-XH,GE,LY,ME,MH,NN,QC,QY,XJ,ZK"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> placeboard = {"HATzDegSxIHV-FU", "aUxevDfTfLJ-ND", "HATzDegSxIHV-BD", "aUxevDfTfLJ-NO", "aUxevDfTfLJ-GK", "aUxevDfTfLJ-XZ", "aUxevDfTfLJ-OP", "aUxevDfTfLJ-DS", "aUxevDfTfLJ-RX", "aUxevDfTfLJ-SC", "zcnllxcsJUaCMrFl-AC", "HATzDegSxIHV-AI", "ULkaklBzRRsqNvdGGTeB-TD", "zcnllxcsJUaCMrFl-EV", "HATzDegSxIHV-XW", "aUxevDfTfLJ-TG", "ULkaklBzRRsqNvdGGTeB-CB", "ULkaklBzRRsqNvdGGTeB-MS", "HATzDegSxIHV-RW", "zcnllxcsJUaCMrFl-QV", "zcnllxcsJUaCMrFl-VH", "ULkaklBzRRsqNvdGGTeB-ZO", "HATzDegSxIHV-PI", "zcnllxcsJUaCMrFl-VR", "aUxevDfTfLJ-TI", "aUxevDfTfLJ-QQ", "HATzDegSxIHV-KN", "HATzDegSxIHV-KQ", "ULkaklBzRRsqNvdGGTeB-JF", "ULkaklBzRRsqNvdGGTeB-BN", "zcnllxcsJUaCMrFl-OD", "HATzDegSxIHV-YN", "aUxevDfTfLJ-FK", "HATzDegSxIHV-AY", "HATzDegSxIHV-OZ", "HATzDegSxIHV-OA", "HATzDegSxIHV-SP", "zcnllxcsJUaCMrFl-QW", "aUxevDfTfLJ-NK", "zcnllxcsJUaCMrFl-IG", "ULkaklBzRRsqNvdGGTeB-PP", "HATzDegSxIHV-CH", "HATzDegSxIHV-CY", "aUxevDfTfLJ-RJ", "HATzDegSxIHV-ZE", "zcnllxcsJUaCMrFl-IX", "zcnllxcsJUaCMrFl-CH", "HATzDegSxIHV-BJ"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HATzDegSxIHV-FU,AI,AY,BD,BJ,CH,CY,KN,KQ,OA,OZ,PI,RW,SP,XW,YN,ZE", "aUxevDfTfLJ-ND,DS,FK,GK,NK,NO,OP,QQ,RJ,RX,SC,TG,TI,XZ", "HATzDegSxIHV-BD,AI,AY,BJ,CH,CY,FU,KN,KQ,OA,OZ,PI,RW,SP,XW,YN,ZE", "aUxevDfTfLJ-NO,DS,FK,GK,ND,NK,OP,QQ,RJ,RX,SC,TG,TI,XZ", "aUxevDfTfLJ-GK,DS,FK,ND,NK,NO,OP,QQ,RJ,RX,SC,TG,TI,XZ", "aUxevDfTfLJ-XZ,DS,FK,GK,ND,NK,NO,OP,QQ,RJ,RX,SC,TG,TI", "aUxevDfTfLJ-OP,DS,FK,GK,ND,NK,NO,QQ,RJ,RX,SC,TG,TI,XZ", "aUxevDfTfLJ-DS,FK,GK,ND,NK,NO,OP,QQ,RJ,RX,SC,TG,TI,XZ", "aUxevDfTfLJ-RX,DS,FK,GK,ND,NK,NO,OP,QQ,RJ,SC,TG,TI,XZ", "aUxevDfTfLJ-SC,DS,FK,GK,ND,NK,NO,OP,QQ,RJ,RX,TG,TI,XZ", "zcnllxcsJUaCMrFl-AC,CH,EV,IG,IX,OD,QV,QW,VH,VR", "HATzDegSxIHV-AI,AY,BD,BJ,CH,CY,FU,KN,KQ,OA,OZ,PI,RW,SP,XW,YN,ZE", "ULkaklBzRRsqNvdGGTeB-TD,BN,CB,JF,MS,PP,ZO", "zcnllxcsJUaCMrFl-EV,AC,CH,IG,IX,OD,QV,QW,VH,VR", "HATzDegSxIHV-XW,AI,AY,BD,BJ,CH,CY,FU,KN,KQ,OA,OZ,PI,RW,SP,YN,ZE", "aUxevDfTfLJ-TG,DS,FK,GK,ND,NK,NO,OP,QQ,RJ,RX,SC,TI,XZ", "ULkaklBzRRsqNvdGGTeB-CB,BN,JF,MS,PP,TD,ZO", "ULkaklBzRRsqNvdGGTeB-MS,BN,CB,JF,PP,TD,ZO", "HATzDegSxIHV-RW,AI,AY,BD,BJ,CH,CY,FU,KN,KQ,OA,OZ,PI,SP,XW,YN,ZE", "zcnllxcsJUaCMrFl-QV,AC,CH,EV,IG,IX,OD,QW,VH,VR", "zcnllxcsJUaCMrFl-VH,AC,CH,EV,IG,IX,OD,QV,QW,VR", "ULkaklBzRRsqNvdGGTeB-ZO,BN,CB,JF,MS,PP,TD", "HATzDegSxIHV-PI,AI,AY,BD,BJ,CH,CY,FU,KN,KQ,OA,OZ,RW,SP,XW,YN,ZE", "zcnllxcsJUaCMrFl-VR,AC,CH,EV,IG,IX,OD,QV,QW,VH", "aUxevDfTfLJ-TI,DS,FK,GK,ND,NK,NO,OP,QQ,RJ,RX,SC,TG,XZ", "aUxevDfTfLJ-QQ,DS,FK,GK,ND,NK,NO,OP,RJ,RX,SC,TG,TI,XZ", "HATzDegSxIHV-KN,AI,AY,BD,BJ,CH,CY,FU,KQ,OA,OZ,PI,RW,SP,XW,YN,ZE", "HATzDegSxIHV-KQ,AI,AY,BD,BJ,CH,CY,FU,KN,OA,OZ,PI,RW,SP,XW,YN,ZE", "ULkaklBzRRsqNvdGGTeB-JF,BN,CB,MS,PP,TD,ZO", "ULkaklBzRRsqNvdGGTeB-BN,CB,JF,MS,PP,TD,ZO", "zcnllxcsJUaCMrFl-OD,AC,CH,EV,IG,IX,QV,QW,VH,VR", "HATzDegSxIHV-YN,AI,AY,BD,BJ,CH,CY,FU,KN,KQ,OA,OZ,PI,RW,SP,XW,ZE", "aUxevDfTfLJ-FK,DS,GK,ND,NK,NO,OP,QQ,RJ,RX,SC,TG,TI,XZ", "HATzDegSxIHV-AY,AI,BD,BJ,CH,CY,FU,KN,KQ,OA,OZ,PI,RW,SP,XW,YN,ZE", "HATzDegSxIHV-OZ,AI,AY,BD,BJ,CH,CY,FU,KN,KQ,OA,PI,RW,SP,XW,YN,ZE", "HATzDegSxIHV-OA,AI,AY,BD,BJ,CH,CY,FU,KN,KQ,OZ,PI,RW,SP,XW,YN,ZE", "HATzDegSxIHV-SP,AI,AY,BD,BJ,CH,CY,FU,KN,KQ,OA,OZ,PI,RW,XW,YN,ZE", "zcnllxcsJUaCMrFl-QW,AC,CH,EV,IG,IX,OD,QV,VH,VR", "aUxevDfTfLJ-NK,DS,FK,GK,ND,NO,OP,QQ,RJ,RX,SC,TG,TI,XZ", "zcnllxcsJUaCMrFl-IG,AC,CH,EV,IX,OD,QV,QW,VH,VR", "ULkaklBzRRsqNvdGGTeB-PP,BN,CB,JF,MS,TD,ZO", "HATzDegSxIHV-CH,AI,AY,BD,BJ,CY,FU,KN,KQ,OA,OZ,PI,RW,SP,XW,YN,ZE", "HATzDegSxIHV-CY,AI,AY,BD,BJ,CH,FU,KN,KQ,OA,OZ,PI,RW,SP,XW,YN,ZE", "aUxevDfTfLJ-RJ,DS,FK,GK,ND,NK,NO,OP,QQ,RX,SC,TG,TI,XZ", "HATzDegSxIHV-ZE,AI,AY,BD,BJ,CH,CY,FU,KN,KQ,OA,OZ,PI,RW,SP,XW,YN", "zcnllxcsJUaCMrFl-IX,AC,CH,EV,IG,OD,QV,QW,VH,VR", "zcnllxcsJUaCMrFl-CH,AC,EV,IG,IX,OD,QV,QW,VH,VR", "HATzDegSxIHV-BJ,AI,AY,BD,CH,CY,FU,KN,KQ,OA,OZ,PI,RW,SP,XW,YN,ZE"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> placeboard = {"Sz-UT", "Sz-PT", "Sz-GA", "Sz-FA", "Sz-ER", "Sz-QQ", "Sz-PY", "Sz-UU", "Sz-YV", "Sz-DO", "Sz-VS", "Sz-GR", "Sz-MZ", "Sz-VM", "Sz-WR", "Sz-BF", "Sz-ZB", "Sz-TV", "Sz-IC", "Sz-GF", "Sz-DC", "Sz-EA", "Sz-HJ", "Sz-PO", "Sz-JB", "Sz-MR", "Sz-GV", "Sz-RW", "Sz-CP", "Sz-CR", "Sz-TN", "Sz-XK", "Sz-OW", "Sz-RO", "Sz-YS", "Sz-QS", "Sz-HN", "Sz-XO", "Sz-PA", "Sz-FL", "Sz-KU", "Sz-NX", "Sz-PK", "Sz-GY", "Sz-HP"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Sz-UT,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-PT,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-GA,BF,CP,CR,DC,DO,EA,ER,FA,FL,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-FA,BF,CP,CR,DC,DO,EA,ER,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-ER,BF,CP,CR,DC,DO,EA,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-QQ,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-PY,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-UU,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-YV,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,ZB", "Sz-DO,BF,CP,CR,DC,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-VS,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,WR,XK,XO,YS,YV,ZB", "Sz-GR,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-MZ,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-VM,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VS,WR,XK,XO,YS,YV,ZB", "Sz-WR,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,XK,XO,YS,YV,ZB", "Sz-BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-ZB,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV", "Sz-TV,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-IC,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-GF,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-DC,BF,CP,CR,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-EA,BF,CP,CR,DC,DO,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-HJ,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-PO,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-JB,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-MR,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-GV,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-RW,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-CP,BF,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-CR,BF,CP,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-TN,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-XK,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XO,YS,YV,ZB", "Sz-OW,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-RO,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-YS,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YV,ZB", "Sz-QS,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-HN,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-XO,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,YS,YV,ZB", "Sz-PA,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-FL,BF,CP,CR,DC,DO,EA,ER,FA,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-KU,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-NX,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-PK,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-GY,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,HJ,HN,HP,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB", "Sz-HP,BF,CP,CR,DC,DO,EA,ER,FA,FL,GA,GF,GR,GV,GY,HJ,HN,IC,JB,KU,MR,MZ,NX,OW,PA,PK,PO,PT,PY,QQ,QS,RO,RW,TN,TV,UT,UU,VM,VS,WR,XK,XO,YS,YV,ZB"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> placeboard = {"SQlGIrfIoEtP-AD", "ZhuZMkBmo-HE", "SQlGIrfIoEtP-AU", "lFNY-WW", "SQlGIrfIoEtP-MT", "HWVqZhG-HS", "nrevStZIGBQtKOEl-FD", "nrevStZIGBQtKOEl-BB", "nrevStZIGBQtKOEl-KE", "nrevStZIGBQtKOEl-LV", "SLNIZWNwc-WS", "SLNIZWNwc-ZG", "ZhuZMkBmo-BF", "HWVqZhG-GH", "HWVqZhG-KP", "HWVqZhG-XU", "ZhuZMkBmo-ZC", "SLNIZWNwc-LD", "nrevStZIGBQtKOEl-FI", "SLNIZWNwc-EF", "ZhuZMkBmo-XP", "nrevStZIGBQtKOEl-MG", "SQlGIrfIoEtP-BI", "HWVqZhG-KX", "nrevStZIGBQtKOEl-QZ", "SQlGIrfIoEtP-TQ", "ZhuZMkBmo-QB", "lFNY-BX", "HWVqZhG-FE", "SQlGIrfIoEtP-HF", "HWVqZhG-LK", "HWVqZhG-FO", "ZhuZMkBmo-NO", "ZhuZMkBmo-DH", "HWVqZhG-WL", "nrevStZIGBQtKOEl-NH", "SLNIZWNwc-DO", "nrevStZIGBQtKOEl-DC", "ZhuZMkBmo-YI", "nrevStZIGBQtKOEl-ND", "SQlGIrfIoEtP-ZY", "ZhuZMkBmo-PM"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SQlGIrfIoEtP-AD,AU,BI,HF,MT,TQ,ZY", "ZhuZMkBmo-HE,BF,DH,NO,PM,QB,XP,YI,ZC", "SQlGIrfIoEtP-AU,AD,BI,HF,MT,TQ,ZY", "lFNY-WW,BX", "SQlGIrfIoEtP-MT,AD,AU,BI,HF,TQ,ZY", "HWVqZhG-HS,FE,FO,GH,KP,KX,LK,WL,XU", "nrevStZIGBQtKOEl-FD,BB,DC,FI,KE,LV,MG,ND,NH,QZ", "nrevStZIGBQtKOEl-BB,DC,FD,FI,KE,LV,MG,ND,NH,QZ", "nrevStZIGBQtKOEl-KE,BB,DC,FD,FI,LV,MG,ND,NH,QZ", "nrevStZIGBQtKOEl-LV,BB,DC,FD,FI,KE,MG,ND,NH,QZ", "SLNIZWNwc-WS,DO,EF,LD,ZG", "SLNIZWNwc-ZG,DO,EF,LD,WS", "ZhuZMkBmo-BF,DH,HE,NO,PM,QB,XP,YI,ZC", "HWVqZhG-GH,FE,FO,HS,KP,KX,LK,WL,XU", "HWVqZhG-KP,FE,FO,GH,HS,KX,LK,WL,XU", "HWVqZhG-XU,FE,FO,GH,HS,KP,KX,LK,WL", "ZhuZMkBmo-ZC,BF,DH,HE,NO,PM,QB,XP,YI", "SLNIZWNwc-LD,DO,EF,WS,ZG", "nrevStZIGBQtKOEl-FI,BB,DC,FD,KE,LV,MG,ND,NH,QZ", "SLNIZWNwc-EF,DO,LD,WS,ZG", "ZhuZMkBmo-XP,BF,DH,HE,NO,PM,QB,YI,ZC", "nrevStZIGBQtKOEl-MG,BB,DC,FD,FI,KE,LV,ND,NH,QZ", "SQlGIrfIoEtP-BI,AD,AU,HF,MT,TQ,ZY", "HWVqZhG-KX,FE,FO,GH,HS,KP,LK,WL,XU", "nrevStZIGBQtKOEl-QZ,BB,DC,FD,FI,KE,LV,MG,ND,NH", "SQlGIrfIoEtP-TQ,AD,AU,BI,HF,MT,ZY", "ZhuZMkBmo-QB,BF,DH,HE,NO,PM,XP,YI,ZC", "lFNY-BX,WW", "HWVqZhG-FE,FO,GH,HS,KP,KX,LK,WL,XU", "SQlGIrfIoEtP-HF,AD,AU,BI,MT,TQ,ZY", "HWVqZhG-LK,FE,FO,GH,HS,KP,KX,WL,XU", "HWVqZhG-FO,FE,GH,HS,KP,KX,LK,WL,XU", "ZhuZMkBmo-NO,BF,DH,HE,PM,QB,XP,YI,ZC", "ZhuZMkBmo-DH,BF,HE,NO,PM,QB,XP,YI,ZC", "HWVqZhG-WL,FE,FO,GH,HS,KP,KX,LK,XU", "nrevStZIGBQtKOEl-NH,BB,DC,FD,FI,KE,LV,MG,ND,QZ", "SLNIZWNwc-DO,EF,LD,WS,ZG", "nrevStZIGBQtKOEl-DC,BB,FD,FI,KE,LV,MG,ND,NH,QZ", "ZhuZMkBmo-YI,BF,DH,HE,NO,PM,QB,XP,ZC", "nrevStZIGBQtKOEl-ND,BB,DC,FD,FI,KE,LV,MG,NH,QZ", "SQlGIrfIoEtP-ZY,AD,AU,BI,HF,MT,TQ", "ZhuZMkBmo-PM,BF,DH,HE,NO,QB,XP,YI,ZC"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> placeboard = {"JnsJatYpaopK-PL", "sZyzDY-XV", "sZyzDY-QR", "WmIQT-NB", "WmIQT-QZ", "WmIQT-QP", "sZyzDY-OR", "JnsJatYpaopK-OV", "WmIQT-BA", "JnsJatYpaopK-TE", "JnsJatYpaopK-FR", "sZyzDY-UZ", "JnsJatYpaopK-SZ", "JnsJatYpaopK-RF", "WmIQT-VW", "WmIQT-BL", "WmIQT-LC", "WmIQT-AC", "WmIQT-MG", "JnsJatYpaopK-ZV", "sZyzDY-JQ", "sZyzDY-FU", "JnsJatYpaopK-FJ", "WmIQT-JP", "sZyzDY-MX", "sZyzDY-OY", "JnsJatYpaopK-OZ", "sZyzDY-CI", "WmIQT-YP", "WmIQT-HE", "sZyzDY-YC", "sZyzDY-ZZ", "WmIQT-LD", "sZyzDY-PC", "sZyzDY-DT", "JnsJatYpaopK-IO", "JnsJatYpaopK-EN", "sZyzDY-FY", "WmIQT-VU", "sZyzDY-PK"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JnsJatYpaopK-PL,EN,FJ,FR,IO,OV,OZ,RF,SZ,TE,ZV", "sZyzDY-XV,CI,DT,FU,FY,JQ,MX,OR,OY,PC,PK,QR,UZ,YC,ZZ", "sZyzDY-QR,CI,DT,FU,FY,JQ,MX,OR,OY,PC,PK,UZ,XV,YC,ZZ", "WmIQT-NB,AC,BA,BL,HE,JP,LC,LD,MG,QP,QZ,VU,VW,YP", "WmIQT-QZ,AC,BA,BL,HE,JP,LC,LD,MG,NB,QP,VU,VW,YP", "WmIQT-QP,AC,BA,BL,HE,JP,LC,LD,MG,NB,QZ,VU,VW,YP", "sZyzDY-OR,CI,DT,FU,FY,JQ,MX,OY,PC,PK,QR,UZ,XV,YC,ZZ", "JnsJatYpaopK-OV,EN,FJ,FR,IO,OZ,PL,RF,SZ,TE,ZV", "WmIQT-BA,AC,BL,HE,JP,LC,LD,MG,NB,QP,QZ,VU,VW,YP", "JnsJatYpaopK-TE,EN,FJ,FR,IO,OV,OZ,PL,RF,SZ,ZV", "JnsJatYpaopK-FR,EN,FJ,IO,OV,OZ,PL,RF,SZ,TE,ZV", "sZyzDY-UZ,CI,DT,FU,FY,JQ,MX,OR,OY,PC,PK,QR,XV,YC,ZZ", "JnsJatYpaopK-SZ,EN,FJ,FR,IO,OV,OZ,PL,RF,TE,ZV", "JnsJatYpaopK-RF,EN,FJ,FR,IO,OV,OZ,PL,SZ,TE,ZV", "WmIQT-VW,AC,BA,BL,HE,JP,LC,LD,MG,NB,QP,QZ,VU,YP", "WmIQT-BL,AC,BA,HE,JP,LC,LD,MG,NB,QP,QZ,VU,VW,YP", "WmIQT-LC,AC,BA,BL,HE,JP,LD,MG,NB,QP,QZ,VU,VW,YP", "WmIQT-AC,BA,BL,HE,JP,LC,LD,MG,NB,QP,QZ,VU,VW,YP", "WmIQT-MG,AC,BA,BL,HE,JP,LC,LD,NB,QP,QZ,VU,VW,YP", "JnsJatYpaopK-ZV,EN,FJ,FR,IO,OV,OZ,PL,RF,SZ,TE", "sZyzDY-JQ,CI,DT,FU,FY,MX,OR,OY,PC,PK,QR,UZ,XV,YC,ZZ", "sZyzDY-FU,CI,DT,FY,JQ,MX,OR,OY,PC,PK,QR,UZ,XV,YC,ZZ", "JnsJatYpaopK-FJ,EN,FR,IO,OV,OZ,PL,RF,SZ,TE,ZV", "WmIQT-JP,AC,BA,BL,HE,LC,LD,MG,NB,QP,QZ,VU,VW,YP", "sZyzDY-MX,CI,DT,FU,FY,JQ,OR,OY,PC,PK,QR,UZ,XV,YC,ZZ", "sZyzDY-OY,CI,DT,FU,FY,JQ,MX,OR,PC,PK,QR,UZ,XV,YC,ZZ", "JnsJatYpaopK-OZ,EN,FJ,FR,IO,OV,PL,RF,SZ,TE,ZV", "sZyzDY-CI,DT,FU,FY,JQ,MX,OR,OY,PC,PK,QR,UZ,XV,YC,ZZ", "WmIQT-YP,AC,BA,BL,HE,JP,LC,LD,MG,NB,QP,QZ,VU,VW", "WmIQT-HE,AC,BA,BL,JP,LC,LD,MG,NB,QP,QZ,VU,VW,YP", "sZyzDY-YC,CI,DT,FU,FY,JQ,MX,OR,OY,PC,PK,QR,UZ,XV,ZZ", "sZyzDY-ZZ,CI,DT,FU,FY,JQ,MX,OR,OY,PC,PK,QR,UZ,XV,YC", "WmIQT-LD,AC,BA,BL,HE,JP,LC,MG,NB,QP,QZ,VU,VW,YP", "sZyzDY-PC,CI,DT,FU,FY,JQ,MX,OR,OY,PK,QR,UZ,XV,YC,ZZ", "sZyzDY-DT,CI,FU,FY,JQ,MX,OR,OY,PC,PK,QR,UZ,XV,YC,ZZ", "JnsJatYpaopK-IO,EN,FJ,FR,OV,OZ,PL,RF,SZ,TE,ZV", "JnsJatYpaopK-EN,FJ,FR,IO,OV,OZ,PL,RF,SZ,TE,ZV", "sZyzDY-FY,CI,DT,FU,JQ,MX,OR,OY,PC,PK,QR,UZ,XV,YC,ZZ", "WmIQT-VU,AC,BA,BL,HE,JP,LC,LD,MG,NB,QP,QZ,VW,YP", "sZyzDY-PK,CI,DT,FU,FY,JQ,MX,OR,OY,PC,QR,UZ,XV,YC,ZZ"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> placeboard = {"bPdD-NX", "bPdD-AY", "bPdD-XC", "CwgvcOQY-EK", "CwgvcOQY-CS", "CwgvcOQY-MB", "CwgvcOQY-IP", "bPdD-BP", "CwgvcOQY-NF", "CwgvcOQY-YW", "bPdD-DH", "bPdD-ZD", "bPdD-JT", "CwgvcOQY-VN", "bPdD-MH", "bPdD-PP", "bPdD-NF", "bPdD-LW", "bPdD-YG", "CwgvcOQY-LB", "CwgvcOQY-UW", "CwgvcOQY-BN", "CwgvcOQY-JK", "CwgvcOQY-XL", "bPdD-VV", "CwgvcOQY-MI", "bPdD-FZ", "CwgvcOQY-HI", "CwgvcOQY-DP", "bPdD-FY", "CwgvcOQY-UR", "bPdD-ZV", "bPdD-UE", "CwgvcOQY-HC", "CwgvcOQY-ZW", "bPdD-WF", "CwgvcOQY-TV", "bPdD-OY", "bPdD-QC", "bPdD-GY", "CwgvcOQY-MM", "CwgvcOQY-AC", "CwgvcOQY-PR", "CwgvcOQY-UK", "CwgvcOQY-SL"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bPdD-NX,AY,BP,DH,FY,FZ,GY,JT,LW,MH,NF,OY,PP,QC,UE,VV,WF,XC,YG,ZD,ZV", "bPdD-AY,BP,DH,FY,FZ,GY,JT,LW,MH,NF,NX,OY,PP,QC,UE,VV,WF,XC,YG,ZD,ZV", "bPdD-XC,AY,BP,DH,FY,FZ,GY,JT,LW,MH,NF,NX,OY,PP,QC,UE,VV,WF,YG,ZD,ZV", "CwgvcOQY-EK,AC,BN,CS,DP,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "CwgvcOQY-CS,AC,BN,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "CwgvcOQY-MB,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "CwgvcOQY-IP,AC,BN,CS,DP,EK,HC,HI,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "bPdD-BP,AY,DH,FY,FZ,GY,JT,LW,MH,NF,NX,OY,PP,QC,UE,VV,WF,XC,YG,ZD,ZV", "CwgvcOQY-NF,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "CwgvcOQY-YW,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,ZW", "bPdD-DH,AY,BP,FY,FZ,GY,JT,LW,MH,NF,NX,OY,PP,QC,UE,VV,WF,XC,YG,ZD,ZV", "bPdD-ZD,AY,BP,DH,FY,FZ,GY,JT,LW,MH,NF,NX,OY,PP,QC,UE,VV,WF,XC,YG,ZV", "bPdD-JT,AY,BP,DH,FY,FZ,GY,LW,MH,NF,NX,OY,PP,QC,UE,VV,WF,XC,YG,ZD,ZV", "CwgvcOQY-VN,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,XL,YW,ZW", "bPdD-MH,AY,BP,DH,FY,FZ,GY,JT,LW,NF,NX,OY,PP,QC,UE,VV,WF,XC,YG,ZD,ZV", "bPdD-PP,AY,BP,DH,FY,FZ,GY,JT,LW,MH,NF,NX,OY,QC,UE,VV,WF,XC,YG,ZD,ZV", "bPdD-NF,AY,BP,DH,FY,FZ,GY,JT,LW,MH,NX,OY,PP,QC,UE,VV,WF,XC,YG,ZD,ZV", "bPdD-LW,AY,BP,DH,FY,FZ,GY,JT,MH,NF,NX,OY,PP,QC,UE,VV,WF,XC,YG,ZD,ZV", "bPdD-YG,AY,BP,DH,FY,FZ,GY,JT,LW,MH,NF,NX,OY,PP,QC,UE,VV,WF,XC,ZD,ZV", "CwgvcOQY-LB,AC,BN,CS,DP,EK,HC,HI,IP,JK,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "CwgvcOQY-UW,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,VN,XL,YW,ZW", "CwgvcOQY-BN,AC,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "CwgvcOQY-JK,AC,BN,CS,DP,EK,HC,HI,IP,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "CwgvcOQY-XL,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,YW,ZW", "bPdD-VV,AY,BP,DH,FY,FZ,GY,JT,LW,MH,NF,NX,OY,PP,QC,UE,WF,XC,YG,ZD,ZV", "CwgvcOQY-MI,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "bPdD-FZ,AY,BP,DH,FY,GY,JT,LW,MH,NF,NX,OY,PP,QC,UE,VV,WF,XC,YG,ZD,ZV", "CwgvcOQY-HI,AC,BN,CS,DP,EK,HC,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "CwgvcOQY-DP,AC,BN,CS,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "bPdD-FY,AY,BP,DH,FZ,GY,JT,LW,MH,NF,NX,OY,PP,QC,UE,VV,WF,XC,YG,ZD,ZV", "CwgvcOQY-UR,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UW,VN,XL,YW,ZW", "bPdD-ZV,AY,BP,DH,FY,FZ,GY,JT,LW,MH,NF,NX,OY,PP,QC,UE,VV,WF,XC,YG,ZD", "bPdD-UE,AY,BP,DH,FY,FZ,GY,JT,LW,MH,NF,NX,OY,PP,QC,VV,WF,XC,YG,ZD,ZV", "CwgvcOQY-HC,AC,BN,CS,DP,EK,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "CwgvcOQY-ZW,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW", "bPdD-WF,AY,BP,DH,FY,FZ,GY,JT,LW,MH,NF,NX,OY,PP,QC,UE,VV,XC,YG,ZD,ZV", "CwgvcOQY-TV,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,UK,UR,UW,VN,XL,YW,ZW", "bPdD-OY,AY,BP,DH,FY,FZ,GY,JT,LW,MH,NF,NX,PP,QC,UE,VV,WF,XC,YG,ZD,ZV", "bPdD-QC,AY,BP,DH,FY,FZ,GY,JT,LW,MH,NF,NX,OY,PP,UE,VV,WF,XC,YG,ZD,ZV", "bPdD-GY,AY,BP,DH,FY,FZ,JT,LW,MH,NF,NX,OY,PP,QC,UE,VV,WF,XC,YG,ZD,ZV", "CwgvcOQY-MM,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "CwgvcOQY-AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "CwgvcOQY-PR,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,SL,TV,UK,UR,UW,VN,XL,YW,ZW", "CwgvcOQY-UK,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,SL,TV,UR,UW,VN,XL,YW,ZW", "CwgvcOQY-SL,AC,BN,CS,DP,EK,HC,HI,IP,JK,LB,MB,MI,MM,NF,PR,TV,UK,UR,UW,VN,XL,YW,ZW"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> placeboard = {"vHdI-OY", "DBInSZVrzXPKel-MZ", "vHdI-LM", "aieMyT-GX", "Amz-DE", "kBxEuBTErWpinyMAszP-BN", "DBInSZVrzXPKel-GF", "DBInSZVrzXPKel-BX", "vHdI-NR", "DBInSZVrzXPKel-YM", "uustjgRUvdGb-VP", "aieMyT-UM", "TVw-QH", "TVw-HP", "aieMyT-MO", "kBxEuBTErWpinyMAszP-OA", "aieMyT-QK", "kBxEuBTErWpinyMAszP-QN", "uustjgRUvdGb-OV", "lZTboWJ-KP", "lZTboWJ-UU", "vHdI-FF", "uustjgRUvdGb-PE", "TVw-UR", "TVw-VW", "gmN-ZC", "kBxEuBTErWpinyMAszP-TZ", "kBxEuBTErWpinyMAszP-OE", "EYCd-YF", "lZTboWJ-QI", "vHdI-QJ", "DBInSZVrzXPKel-SB", "uustjgRUvdGb-FB", "gmN-PM", "gmN-WZ", "aieMyT-GH", "gmN-YU", "EYCd-ST", "Amz-WG", "gmN-ZK", "kBxEuBTErWpinyMAszP-ID", "kBxEuBTErWpinyMAszP-LM", "uustjgRUvdGb-MQ", "DBInSZVrzXPKel-ZB", "Amz-WD", "uustjgRUvdGb-XK", "uustjgRUvdGb-MO", "TVw-VD"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vHdI-OY,FF,LM,NR,QJ", "DBInSZVrzXPKel-MZ,BX,GF,SB,YM,ZB", "vHdI-LM,FF,NR,OY,QJ", "aieMyT-GX,GH,MO,QK,UM", "Amz-DE,WD,WG", "kBxEuBTErWpinyMAszP-BN,ID,LM,OA,OE,QN,TZ", "DBInSZVrzXPKel-GF,BX,MZ,SB,YM,ZB", "DBInSZVrzXPKel-BX,GF,MZ,SB,YM,ZB", "vHdI-NR,FF,LM,OY,QJ", "DBInSZVrzXPKel-YM,BX,GF,MZ,SB,ZB", "uustjgRUvdGb-VP,FB,MO,MQ,OV,PE,XK", "aieMyT-UM,GH,GX,MO,QK", "TVw-QH,HP,UR,VD,VW", "TVw-HP,QH,UR,VD,VW", "aieMyT-MO,GH,GX,QK,UM", "kBxEuBTErWpinyMAszP-OA,BN,ID,LM,OE,QN,TZ", "aieMyT-QK,GH,GX,MO,UM", "kBxEuBTErWpinyMAszP-QN,BN,ID,LM,OA,OE,TZ", "uustjgRUvdGb-OV,FB,MO,MQ,PE,VP,XK", "lZTboWJ-KP,QI,UU", "lZTboWJ-UU,KP,QI", "vHdI-FF,LM,NR,OY,QJ", "uustjgRUvdGb-PE,FB,MO,MQ,OV,VP,XK", "TVw-UR,HP,QH,VD,VW", "TVw-VW,HP,QH,UR,VD", "gmN-ZC,PM,WZ,YU,ZK", "kBxEuBTErWpinyMAszP-TZ,BN,ID,LM,OA,OE,QN", "kBxEuBTErWpinyMAszP-OE,BN,ID,LM,OA,QN,TZ", "EYCd-YF,ST", "lZTboWJ-QI,KP,UU", "vHdI-QJ,FF,LM,NR,OY", "DBInSZVrzXPKel-SB,BX,GF,MZ,YM,ZB", "uustjgRUvdGb-FB,MO,MQ,OV,PE,VP,XK", "gmN-PM,WZ,YU,ZC,ZK", "gmN-WZ,PM,YU,ZC,ZK", "aieMyT-GH,GX,MO,QK,UM", "gmN-YU,PM,WZ,ZC,ZK", "EYCd-ST,YF", "Amz-WG,DE,WD", "gmN-ZK,PM,WZ,YU,ZC", "kBxEuBTErWpinyMAszP-ID,BN,LM,OA,OE,QN,TZ", "kBxEuBTErWpinyMAszP-LM,BN,ID,OA,OE,QN,TZ", "uustjgRUvdGb-MQ,FB,MO,OV,PE,VP,XK", "DBInSZVrzXPKel-ZB,BX,GF,MZ,SB,YM", "Amz-WD,DE,WG", "uustjgRUvdGb-XK,FB,MO,MQ,OV,PE,VP", "uustjgRUvdGb-MO,FB,MQ,OV,PE,VP,XK", "TVw-VD,HP,QH,UR,VW"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> placeboard = {"ZmQNwowmqHb-YJ", "ZBVL-LU", "yWHguRVPBOZCdr-QM", "yWHguRVPBOZCdr-ZS", "iTLfYbFDcvtPAxGR-DC", "ZmQNwowmqHb-OM", "ZmQNwowmqHb-WN", "MrwpJEwF-PJ", "ttlM-EN", "iTLfYbFDcvtPAxGR-XN", "ZiImEtzctYwjF-GZ", "ttlM-WU", "yWHguRVPBOZCdr-PX", "ZmQNwowmqHb-GX", "ZiImEtzctYwjF-HV", "ZmQNwowmqHb-SX", "ZiImEtzctYwjF-JG", "ttlM-RV", "iTLfYbFDcvtPAxGR-PU", "ZmQNwowmqHb-EU", "ZiImEtzctYwjF-TE", "MrwpJEwF-YL", "ZBVL-RW", "yWHguRVPBOZCdr-VO", "ZmQNwowmqHb-EJ", "ZiImEtzctYwjF-AC", "MrwpJEwF-RE", "ZmQNwowmqHb-AO", "yWHguRVPBOZCdr-KE", "yWHguRVPBOZCdr-KV", "ttlM-MP", "ZBVL-HY", "ZBVL-VT", "ZmQNwowmqHb-DP", "ttlM-OE", "iTLfYbFDcvtPAxGR-ZB", "ZmQNwowmqHb-IV", "ZBVL-ZN", "ttlM-RR", "MrwpJEwF-GU", "MrwpJEwF-XO", "MrwpJEwF-EG", "iTLfYbFDcvtPAxGR-IW", "yWHguRVPBOZCdr-WW", "yWHguRVPBOZCdr-AU", "ZBVL-ED"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ZmQNwowmqHb-YJ,AO,DP,EJ,EU,GX,IV,OM,SX,WN", "ZBVL-LU,ED,HY,RW,VT,ZN", "yWHguRVPBOZCdr-QM,AU,KE,KV,PX,VO,WW,ZS", "yWHguRVPBOZCdr-ZS,AU,KE,KV,PX,QM,VO,WW", "iTLfYbFDcvtPAxGR-DC,IW,PU,XN,ZB", "ZmQNwowmqHb-OM,AO,DP,EJ,EU,GX,IV,SX,WN,YJ", "ZmQNwowmqHb-WN,AO,DP,EJ,EU,GX,IV,OM,SX,YJ", "MrwpJEwF-PJ,EG,GU,RE,XO,YL", "ttlM-EN,MP,OE,RR,RV,WU", "iTLfYbFDcvtPAxGR-XN,DC,IW,PU,ZB", "ZiImEtzctYwjF-GZ,AC,HV,JG,TE", "ttlM-WU,EN,MP,OE,RR,RV", "yWHguRVPBOZCdr-PX,AU,KE,KV,QM,VO,WW,ZS", "ZmQNwowmqHb-GX,AO,DP,EJ,EU,IV,OM,SX,WN,YJ", "ZiImEtzctYwjF-HV,AC,GZ,JG,TE", "ZmQNwowmqHb-SX,AO,DP,EJ,EU,GX,IV,OM,WN,YJ", "ZiImEtzctYwjF-JG,AC,GZ,HV,TE", "ttlM-RV,EN,MP,OE,RR,WU", "iTLfYbFDcvtPAxGR-PU,DC,IW,XN,ZB", "ZmQNwowmqHb-EU,AO,DP,EJ,GX,IV,OM,SX,WN,YJ", "ZiImEtzctYwjF-TE,AC,GZ,HV,JG", "MrwpJEwF-YL,EG,GU,PJ,RE,XO", "ZBVL-RW,ED,HY,LU,VT,ZN", "yWHguRVPBOZCdr-VO,AU,KE,KV,PX,QM,WW,ZS", "ZmQNwowmqHb-EJ,AO,DP,EU,GX,IV,OM,SX,WN,YJ", "ZiImEtzctYwjF-AC,GZ,HV,JG,TE", "MrwpJEwF-RE,EG,GU,PJ,XO,YL", "ZmQNwowmqHb-AO,DP,EJ,EU,GX,IV,OM,SX,WN,YJ", "yWHguRVPBOZCdr-KE,AU,KV,PX,QM,VO,WW,ZS", "yWHguRVPBOZCdr-KV,AU,KE,PX,QM,VO,WW,ZS", "ttlM-MP,EN,OE,RR,RV,WU", "ZBVL-HY,ED,LU,RW,VT,ZN", "ZBVL-VT,ED,HY,LU,RW,ZN", "ZmQNwowmqHb-DP,AO,EJ,EU,GX,IV,OM,SX,WN,YJ", "ttlM-OE,EN,MP,RR,RV,WU", "iTLfYbFDcvtPAxGR-ZB,DC,IW,PU,XN", "ZmQNwowmqHb-IV,AO,DP,EJ,EU,GX,OM,SX,WN,YJ", "ZBVL-ZN,ED,HY,LU,RW,VT", "ttlM-RR,EN,MP,OE,RV,WU", "MrwpJEwF-GU,EG,PJ,RE,XO,YL", "MrwpJEwF-XO,EG,GU,PJ,RE,YL", "MrwpJEwF-EG,GU,PJ,RE,XO,YL", "iTLfYbFDcvtPAxGR-IW,DC,PU,XN,ZB", "yWHguRVPBOZCdr-WW,AU,KE,KV,PX,QM,VO,ZS", "yWHguRVPBOZCdr-AU,KE,KV,PX,QM,VO,WW,ZS", "ZBVL-ED,HY,LU,RW,VT,ZN"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> placeboard = {"j-EJ", "j-HO", "FJJej-GO", "FJJej-JL", "FJJej-DP", "j-NU", "FJJej-UR", "FJJej-RP", "j-CL", "FJJej-QO", "FJJej-UQ", "j-AB", "j-OX", "j-CS", "j-VA", "FJJej-CT", "j-SQ", "j-CW", "j-EO", "j-KK", "FJJej-AM", "j-MR", "j-IG", "j-FE", "FJJej-VK", "j-GT", "j-NI", "j-DL", "j-AE", "j-FA", "j-NT", "j-KX", "j-SL", "j-SG", "FJJej-EW", "FJJej-SF", "FJJej-ON", "j-RV", "FJJej-FO", "j-YO", "j-XB", "FJJej-ZG", "j-RI", "j-RL", "j-BL", "j-QD", "j-DO", "j-HE", "j-VB"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"j-EJ,AB,AE,BL,CL,CS,CW,DL,DO,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-HO,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "FJJej-GO,AM,CT,DP,EW,FO,JL,ON,QO,RP,SF,UQ,UR,VK,ZG", "FJJej-JL,AM,CT,DP,EW,FO,GO,ON,QO,RP,SF,UQ,UR,VK,ZG", "FJJej-DP,AM,CT,EW,FO,GO,JL,ON,QO,RP,SF,UQ,UR,VK,ZG", "j-NU,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "FJJej-UR,AM,CT,DP,EW,FO,GO,JL,ON,QO,RP,SF,UQ,VK,ZG", "FJJej-RP,AM,CT,DP,EW,FO,GO,JL,ON,QO,SF,UQ,UR,VK,ZG", "j-CL,AB,AE,BL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "FJJej-QO,AM,CT,DP,EW,FO,GO,JL,ON,RP,SF,UQ,UR,VK,ZG", "FJJej-UQ,AM,CT,DP,EW,FO,GO,JL,ON,QO,RP,SF,UR,VK,ZG", "j-AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-OX,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-CS,AB,AE,BL,CL,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-VA,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VB,XB,YO", "FJJej-CT,AM,DP,EW,FO,GO,JL,ON,QO,RP,SF,UQ,UR,VK,ZG", "j-SQ,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,VA,VB,XB,YO", "j-CW,AB,AE,BL,CL,CS,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-EO,AB,AE,BL,CL,CS,CW,DL,DO,EJ,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-KK,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "FJJej-AM,CT,DP,EW,FO,GO,JL,ON,QO,RP,SF,UQ,UR,VK,ZG", "j-MR,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-IG,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-FE,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "FJJej-VK,AM,CT,DP,EW,FO,GO,JL,ON,QO,RP,SF,UQ,UR,ZG", "j-GT,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-NI,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-DL,AB,AE,BL,CL,CS,CW,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-AE,AB,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-FA,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-NT,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-KX,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-SL,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SQ,VA,VB,XB,YO", "j-SG,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SL,SQ,VA,VB,XB,YO", "FJJej-EW,AM,CT,DP,FO,GO,JL,ON,QO,RP,SF,UQ,UR,VK,ZG", "FJJej-SF,AM,CT,DP,EW,FO,GO,JL,ON,QO,RP,UQ,UR,VK,ZG", "FJJej-ON,AM,CT,DP,EW,FO,GO,JL,QO,RP,SF,UQ,UR,VK,ZG", "j-RV,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,SG,SL,SQ,VA,VB,XB,YO", "FJJej-FO,AM,CT,DP,EW,GO,JL,ON,QO,RP,SF,UQ,UR,VK,ZG", "j-YO,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB", "j-XB,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,YO", "FJJej-ZG,AM,CT,DP,EW,FO,GO,JL,ON,QO,RP,SF,UQ,UR,VK", "j-RI,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-RL,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RV,SG,SL,SQ,VA,VB,XB,YO", "j-BL,AB,AE,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-QD,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-DO,AB,AE,BL,CL,CS,CW,DL,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-HE,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,VB,XB,YO", "j-VB,AB,AE,BL,CL,CS,CW,DL,DO,EJ,EO,FA,FE,GT,HE,HO,IG,KK,KX,MR,NI,NT,NU,OX,QD,RI,RL,RV,SG,SL,SQ,VA,XB,YO"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> placeboard = {"HkpulImBawIOE-II", "nUM-VB", "HkpulImBawIOE-MF", "HkpulImBawIOE-VX", "nUM-EF", "nUM-LI", "nUM-KH", "HkpulImBawIOE-CC", "nUM-JS", "nUM-LK", "HkpulImBawIOE-DW", "HkpulImBawIOE-QZ", "nUM-IV", "HkpulImBawIOE-VK", "HkpulImBawIOE-AV", "HkpulImBawIOE-IO", "nUM-DS", "HkpulImBawIOE-GJ", "HkpulImBawIOE-EF", "nUM-MW", "nUM-AE", "nUM-CV", "HkpulImBawIOE-KE", "nUM-WZ", "HkpulImBawIOE-OA", "nUM-KS", "nUM-FD", "nUM-MF", "HkpulImBawIOE-HR", "nUM-HM", "nUM-IC", "HkpulImBawIOE-IP", "HkpulImBawIOE-EP", "nUM-NN", "HkpulImBawIOE-NU", "nUM-RM", "HkpulImBawIOE-LV", "nUM-MJ", "nUM-DT", "nUM-AP", "HkpulImBawIOE-VV", "nUM-UW", "nUM-DA"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HkpulImBawIOE-II,AV,CC,DW,EF,EP,GJ,HR,IO,IP,KE,LV,MF,NU,OA,QZ,VK,VV,VX", "nUM-VB,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,WZ", "HkpulImBawIOE-MF,AV,CC,DW,EF,EP,GJ,HR,II,IO,IP,KE,LV,NU,OA,QZ,VK,VV,VX", "HkpulImBawIOE-VX,AV,CC,DW,EF,EP,GJ,HR,II,IO,IP,KE,LV,MF,NU,OA,QZ,VK,VV", "nUM-EF,AE,AP,CV,DA,DS,DT,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "nUM-LI,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "nUM-KH,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "HkpulImBawIOE-CC,AV,DW,EF,EP,GJ,HR,II,IO,IP,KE,LV,MF,NU,OA,QZ,VK,VV,VX", "nUM-JS,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "nUM-LK,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,MF,MJ,MW,NN,RM,UW,VB,WZ", "HkpulImBawIOE-DW,AV,CC,EF,EP,GJ,HR,II,IO,IP,KE,LV,MF,NU,OA,QZ,VK,VV,VX", "HkpulImBawIOE-QZ,AV,CC,DW,EF,EP,GJ,HR,II,IO,IP,KE,LV,MF,NU,OA,VK,VV,VX", "nUM-IV,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "HkpulImBawIOE-VK,AV,CC,DW,EF,EP,GJ,HR,II,IO,IP,KE,LV,MF,NU,OA,QZ,VV,VX", "HkpulImBawIOE-AV,CC,DW,EF,EP,GJ,HR,II,IO,IP,KE,LV,MF,NU,OA,QZ,VK,VV,VX", "HkpulImBawIOE-IO,AV,CC,DW,EF,EP,GJ,HR,II,IP,KE,LV,MF,NU,OA,QZ,VK,VV,VX", "nUM-DS,AE,AP,CV,DA,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "HkpulImBawIOE-GJ,AV,CC,DW,EF,EP,HR,II,IO,IP,KE,LV,MF,NU,OA,QZ,VK,VV,VX", "HkpulImBawIOE-EF,AV,CC,DW,EP,GJ,HR,II,IO,IP,KE,LV,MF,NU,OA,QZ,VK,VV,VX", "nUM-MW,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,NN,RM,UW,VB,WZ", "nUM-AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "nUM-CV,AE,AP,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "HkpulImBawIOE-KE,AV,CC,DW,EF,EP,GJ,HR,II,IO,IP,LV,MF,NU,OA,QZ,VK,VV,VX", "nUM-WZ,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB", "HkpulImBawIOE-OA,AV,CC,DW,EF,EP,GJ,HR,II,IO,IP,KE,LV,MF,NU,QZ,VK,VV,VX", "nUM-KS,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "nUM-FD,AE,AP,CV,DA,DS,DT,EF,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "nUM-MF,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MJ,MW,NN,RM,UW,VB,WZ", "HkpulImBawIOE-HR,AV,CC,DW,EF,EP,GJ,II,IO,IP,KE,LV,MF,NU,OA,QZ,VK,VV,VX", "nUM-HM,AE,AP,CV,DA,DS,DT,EF,FD,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "nUM-IC,AE,AP,CV,DA,DS,DT,EF,FD,HM,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "HkpulImBawIOE-IP,AV,CC,DW,EF,EP,GJ,HR,II,IO,KE,LV,MF,NU,OA,QZ,VK,VV,VX", "HkpulImBawIOE-EP,AV,CC,DW,EF,GJ,HR,II,IO,IP,KE,LV,MF,NU,OA,QZ,VK,VV,VX", "nUM-NN,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,RM,UW,VB,WZ", "HkpulImBawIOE-NU,AV,CC,DW,EF,EP,GJ,HR,II,IO,IP,KE,LV,MF,OA,QZ,VK,VV,VX", "nUM-RM,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,UW,VB,WZ", "HkpulImBawIOE-LV,AV,CC,DW,EF,EP,GJ,HR,II,IO,IP,KE,MF,NU,OA,QZ,VK,VV,VX", "nUM-MJ,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MW,NN,RM,UW,VB,WZ", "nUM-DT,AE,AP,CV,DA,DS,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "nUM-AP,AE,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ", "HkpulImBawIOE-VV,AV,CC,DW,EF,EP,GJ,HR,II,IO,IP,KE,LV,MF,NU,OA,QZ,VK,VX", "nUM-UW,AE,AP,CV,DA,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,VB,WZ", "nUM-DA,AE,AP,CV,DS,DT,EF,FD,HM,IC,IV,JS,KH,KS,LI,LK,MF,MJ,MW,NN,RM,UW,VB,WZ"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> placeboard = {"pCGMYLWdB-GZ", "fZuCHKvbcIkS-DX", "GRbNRyUaLVqwlwXix-EX", "cXT-XH", "fZuCHKvbcIkS-XT", "GRbNRyUaLVqwlwXix-NP", "cXT-ZG", "pCGMYLWdB-XT", "cXT-KP", "pCGMYLWdB-FA", "GRbNRyUaLVqwlwXix-RJ", "pCGMYLWdB-UO", "cXT-UI", "GRbNRyUaLVqwlwXix-JR", "fZuCHKvbcIkS-SS", "GRbNRyUaLVqwlwXix-ZE", "GRbNRyUaLVqwlwXix-MD", "cXT-CS", "cXT-HF", "pCGMYLWdB-UR", "GRbNRyUaLVqwlwXix-IF", "pCGMYLWdB-WQ", "pCGMYLWdB-FO", "pCGMYLWdB-YH", "cXT-MV", "GRbNRyUaLVqwlwXix-LL", "GRbNRyUaLVqwlwXix-SM", "cXT-BK", "cXT-OZ", "pCGMYLWdB-MA", "fZuCHKvbcIkS-TY", "GRbNRyUaLVqwlwXix-KG", "pCGMYLWdB-BR", "cXT-SK", "GRbNRyUaLVqwlwXix-RS", "GRbNRyUaLVqwlwXix-GT", "pCGMYLWdB-SF", "pCGMYLWdB-CW", "pCGMYLWdB-QG", "pCGMYLWdB-VW", "fZuCHKvbcIkS-NX", "cXT-JZ", "GRbNRyUaLVqwlwXix-TC", "cXT-HP", "fZuCHKvbcIkS-JJ"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"pCGMYLWdB-GZ,BR,CW,FA,FO,MA,QG,SF,UO,UR,VW,WQ,XT,YH", "fZuCHKvbcIkS-DX,JJ,NX,SS,TY,XT", "GRbNRyUaLVqwlwXix-EX,GT,IF,JR,KG,LL,MD,NP,RJ,RS,SM,TC,ZE", "cXT-XH,BK,CS,HF,HP,JZ,KP,MV,OZ,SK,UI,ZG", "fZuCHKvbcIkS-XT,DX,JJ,NX,SS,TY", "GRbNRyUaLVqwlwXix-NP,EX,GT,IF,JR,KG,LL,MD,RJ,RS,SM,TC,ZE", "cXT-ZG,BK,CS,HF,HP,JZ,KP,MV,OZ,SK,UI,XH", "pCGMYLWdB-XT,BR,CW,FA,FO,GZ,MA,QG,SF,UO,UR,VW,WQ,YH", "cXT-KP,BK,CS,HF,HP,JZ,MV,OZ,SK,UI,XH,ZG", "pCGMYLWdB-FA,BR,CW,FO,GZ,MA,QG,SF,UO,UR,VW,WQ,XT,YH", "GRbNRyUaLVqwlwXix-RJ,EX,GT,IF,JR,KG,LL,MD,NP,RS,SM,TC,ZE", "pCGMYLWdB-UO,BR,CW,FA,FO,GZ,MA,QG,SF,UR,VW,WQ,XT,YH", "cXT-UI,BK,CS,HF,HP,JZ,KP,MV,OZ,SK,XH,ZG", "GRbNRyUaLVqwlwXix-JR,EX,GT,IF,KG,LL,MD,NP,RJ,RS,SM,TC,ZE", "fZuCHKvbcIkS-SS,DX,JJ,NX,TY,XT", "GRbNRyUaLVqwlwXix-ZE,EX,GT,IF,JR,KG,LL,MD,NP,RJ,RS,SM,TC", "GRbNRyUaLVqwlwXix-MD,EX,GT,IF,JR,KG,LL,NP,RJ,RS,SM,TC,ZE", "cXT-CS,BK,HF,HP,JZ,KP,MV,OZ,SK,UI,XH,ZG", "cXT-HF,BK,CS,HP,JZ,KP,MV,OZ,SK,UI,XH,ZG", "pCGMYLWdB-UR,BR,CW,FA,FO,GZ,MA,QG,SF,UO,VW,WQ,XT,YH", "GRbNRyUaLVqwlwXix-IF,EX,GT,JR,KG,LL,MD,NP,RJ,RS,SM,TC,ZE", "pCGMYLWdB-WQ,BR,CW,FA,FO,GZ,MA,QG,SF,UO,UR,VW,XT,YH", "pCGMYLWdB-FO,BR,CW,FA,GZ,MA,QG,SF,UO,UR,VW,WQ,XT,YH", "pCGMYLWdB-YH,BR,CW,FA,FO,GZ,MA,QG,SF,UO,UR,VW,WQ,XT", "cXT-MV,BK,CS,HF,HP,JZ,KP,OZ,SK,UI,XH,ZG", "GRbNRyUaLVqwlwXix-LL,EX,GT,IF,JR,KG,MD,NP,RJ,RS,SM,TC,ZE", "GRbNRyUaLVqwlwXix-SM,EX,GT,IF,JR,KG,LL,MD,NP,RJ,RS,TC,ZE", "cXT-BK,CS,HF,HP,JZ,KP,MV,OZ,SK,UI,XH,ZG", "cXT-OZ,BK,CS,HF,HP,JZ,KP,MV,SK,UI,XH,ZG", "pCGMYLWdB-MA,BR,CW,FA,FO,GZ,QG,SF,UO,UR,VW,WQ,XT,YH", "fZuCHKvbcIkS-TY,DX,JJ,NX,SS,XT", "GRbNRyUaLVqwlwXix-KG,EX,GT,IF,JR,LL,MD,NP,RJ,RS,SM,TC,ZE", "pCGMYLWdB-BR,CW,FA,FO,GZ,MA,QG,SF,UO,UR,VW,WQ,XT,YH", "cXT-SK,BK,CS,HF,HP,JZ,KP,MV,OZ,UI,XH,ZG", "GRbNRyUaLVqwlwXix-RS,EX,GT,IF,JR,KG,LL,MD,NP,RJ,SM,TC,ZE", "GRbNRyUaLVqwlwXix-GT,EX,IF,JR,KG,LL,MD,NP,RJ,RS,SM,TC,ZE", "pCGMYLWdB-SF,BR,CW,FA,FO,GZ,MA,QG,UO,UR,VW,WQ,XT,YH", "pCGMYLWdB-CW,BR,FA,FO,GZ,MA,QG,SF,UO,UR,VW,WQ,XT,YH", "pCGMYLWdB-QG,BR,CW,FA,FO,GZ,MA,SF,UO,UR,VW,WQ,XT,YH", "pCGMYLWdB-VW,BR,CW,FA,FO,GZ,MA,QG,SF,UO,UR,WQ,XT,YH", "fZuCHKvbcIkS-NX,DX,JJ,SS,TY,XT", "cXT-JZ,BK,CS,HF,HP,KP,MV,OZ,SK,UI,XH,ZG", "GRbNRyUaLVqwlwXix-TC,EX,GT,IF,JR,KG,LL,MD,NP,RJ,RS,SM,ZE", "cXT-HP,BK,CS,HF,JZ,KP,MV,OZ,SK,UI,XH,ZG", "fZuCHKvbcIkS-JJ,DX,NX,SS,TY,XT"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> placeboard = {"OjKOGvFuIahovS-EV", "DGZFLg-XY", "DGZFLg-OE", "OqoYSqFhIonNXKQiIo-FO", "DGZFLg-FV", "DGZFLg-SR", "jFQMtsqjnbozWEUlA-NN", "jFQMtsqjnbozWEUlA-GB", "DGZFLg-YB", "OjKOGvFuIahovS-YL", "OjKOGvFuIahovS-XU", "DGZFLg-KN", "OqoYSqFhIonNXKQiIo-TX", "DGZFLg-LN", "jFQMtsqjnbozWEUlA-PF", "OjKOGvFuIahovS-AR", "OqoYSqFhIonNXKQiIo-PF", "OqoYSqFhIonNXKQiIo-RT", "jFQMtsqjnbozWEUlA-UX", "DGZFLg-DY", "DGZFLg-RA", "OjKOGvFuIahovS-ZA", "DGZFLg-AQ", "jFQMtsqjnbozWEUlA-TS", "OjKOGvFuIahovS-JU", "OqoYSqFhIonNXKQiIo-YY", "OqoYSqFhIonNXKQiIo-DL", "jFQMtsqjnbozWEUlA-LW", "jFQMtsqjnbozWEUlA-PM", "OjKOGvFuIahovS-CX", "jFQMtsqjnbozWEUlA-PV", "OjKOGvFuIahovS-DT", "OqoYSqFhIonNXKQiIo-RL", "DGZFLg-LA", "OjKOGvFuIahovS-XZ", "jFQMtsqjnbozWEUlA-YX", "OqoYSqFhIonNXKQiIo-LC", "DGZFLg-WC", "jFQMtsqjnbozWEUlA-XB", "OjKOGvFuIahovS-CD", "jFQMtsqjnbozWEUlA-YR", "OqoYSqFhIonNXKQiIo-QR", "jFQMtsqjnbozWEUlA-KP", "jFQMtsqjnbozWEUlA-WU", "OjKOGvFuIahovS-DC", "jFQMtsqjnbozWEUlA-UO", "OjKOGvFuIahovS-KY"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OjKOGvFuIahovS-EV,AR,CD,CX,DC,DT,JU,KY,XU,XZ,YL,ZA", "DGZFLg-XY,AQ,DY,FV,KN,LA,LN,OE,RA,SR,WC,YB", "DGZFLg-OE,AQ,DY,FV,KN,LA,LN,RA,SR,WC,XY,YB", "OqoYSqFhIonNXKQiIo-FO,DL,LC,PF,QR,RL,RT,TX,YY", "DGZFLg-FV,AQ,DY,KN,LA,LN,OE,RA,SR,WC,XY,YB", "DGZFLg-SR,AQ,DY,FV,KN,LA,LN,OE,RA,WC,XY,YB", "jFQMtsqjnbozWEUlA-NN,GB,KP,LW,PF,PM,PV,TS,UO,UX,WU,XB,YR,YX", "jFQMtsqjnbozWEUlA-GB,KP,LW,NN,PF,PM,PV,TS,UO,UX,WU,XB,YR,YX", "DGZFLg-YB,AQ,DY,FV,KN,LA,LN,OE,RA,SR,WC,XY", "OjKOGvFuIahovS-YL,AR,CD,CX,DC,DT,EV,JU,KY,XU,XZ,ZA", "OjKOGvFuIahovS-XU,AR,CD,CX,DC,DT,EV,JU,KY,XZ,YL,ZA", "DGZFLg-KN,AQ,DY,FV,LA,LN,OE,RA,SR,WC,XY,YB", "OqoYSqFhIonNXKQiIo-TX,DL,FO,LC,PF,QR,RL,RT,YY", "DGZFLg-LN,AQ,DY,FV,KN,LA,OE,RA,SR,WC,XY,YB", "jFQMtsqjnbozWEUlA-PF,GB,KP,LW,NN,PM,PV,TS,UO,UX,WU,XB,YR,YX", "OjKOGvFuIahovS-AR,CD,CX,DC,DT,EV,JU,KY,XU,XZ,YL,ZA", "OqoYSqFhIonNXKQiIo-PF,DL,FO,LC,QR,RL,RT,TX,YY", "OqoYSqFhIonNXKQiIo-RT,DL,FO,LC,PF,QR,RL,TX,YY", "jFQMtsqjnbozWEUlA-UX,GB,KP,LW,NN,PF,PM,PV,TS,UO,WU,XB,YR,YX", "DGZFLg-DY,AQ,FV,KN,LA,LN,OE,RA,SR,WC,XY,YB", "DGZFLg-RA,AQ,DY,FV,KN,LA,LN,OE,SR,WC,XY,YB", "OjKOGvFuIahovS-ZA,AR,CD,CX,DC,DT,EV,JU,KY,XU,XZ,YL", "DGZFLg-AQ,DY,FV,KN,LA,LN,OE,RA,SR,WC,XY,YB", "jFQMtsqjnbozWEUlA-TS,GB,KP,LW,NN,PF,PM,PV,UO,UX,WU,XB,YR,YX", "OjKOGvFuIahovS-JU,AR,CD,CX,DC,DT,EV,KY,XU,XZ,YL,ZA", "OqoYSqFhIonNXKQiIo-YY,DL,FO,LC,PF,QR,RL,RT,TX", "OqoYSqFhIonNXKQiIo-DL,FO,LC,PF,QR,RL,RT,TX,YY", "jFQMtsqjnbozWEUlA-LW,GB,KP,NN,PF,PM,PV,TS,UO,UX,WU,XB,YR,YX", "jFQMtsqjnbozWEUlA-PM,GB,KP,LW,NN,PF,PV,TS,UO,UX,WU,XB,YR,YX", "OjKOGvFuIahovS-CX,AR,CD,DC,DT,EV,JU,KY,XU,XZ,YL,ZA", "jFQMtsqjnbozWEUlA-PV,GB,KP,LW,NN,PF,PM,TS,UO,UX,WU,XB,YR,YX", "OjKOGvFuIahovS-DT,AR,CD,CX,DC,EV,JU,KY,XU,XZ,YL,ZA", "OqoYSqFhIonNXKQiIo-RL,DL,FO,LC,PF,QR,RT,TX,YY", "DGZFLg-LA,AQ,DY,FV,KN,LN,OE,RA,SR,WC,XY,YB", "OjKOGvFuIahovS-XZ,AR,CD,CX,DC,DT,EV,JU,KY,XU,YL,ZA", "jFQMtsqjnbozWEUlA-YX,GB,KP,LW,NN,PF,PM,PV,TS,UO,UX,WU,XB,YR", "OqoYSqFhIonNXKQiIo-LC,DL,FO,PF,QR,RL,RT,TX,YY", "DGZFLg-WC,AQ,DY,FV,KN,LA,LN,OE,RA,SR,XY,YB", "jFQMtsqjnbozWEUlA-XB,GB,KP,LW,NN,PF,PM,PV,TS,UO,UX,WU,YR,YX", "OjKOGvFuIahovS-CD,AR,CX,DC,DT,EV,JU,KY,XU,XZ,YL,ZA", "jFQMtsqjnbozWEUlA-YR,GB,KP,LW,NN,PF,PM,PV,TS,UO,UX,WU,XB,YX", "OqoYSqFhIonNXKQiIo-QR,DL,FO,LC,PF,RL,RT,TX,YY", "jFQMtsqjnbozWEUlA-KP,GB,LW,NN,PF,PM,PV,TS,UO,UX,WU,XB,YR,YX", "jFQMtsqjnbozWEUlA-WU,GB,KP,LW,NN,PF,PM,PV,TS,UO,UX,XB,YR,YX", "OjKOGvFuIahovS-DC,AR,CD,CX,DT,EV,JU,KY,XU,XZ,YL,ZA", "jFQMtsqjnbozWEUlA-UO,GB,KP,LW,NN,PF,PM,PV,TS,UX,WU,XB,YR,YX", "OjKOGvFuIahovS-KY,AR,CD,CX,DC,DT,EV,JU,XU,XZ,YL,ZA"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> placeboard = {"mWQntfNRQieaPkmEbq-UT", "IbUMnbpEuvnjzycHgN-ZD", "IbUMnbpEuvnjzycHgN-JS", "ftTNOSm-AV", "kOIPuYghTms-LA", "vLZHJvuOHAMTJgYUed-UX", "JkyxoC-HO", "ftTNOSm-SC", "IbUMnbpEuvnjzycHgN-RW", "mWQntfNRQieaPkmEbq-MT", "mWQntfNRQieaPkmEbq-RO", "hWppHmf-RK", "XrsGEuTVhDngMssOR-PX", "XrsGEuTVhDngMssOR-TN", "ftTNOSm-EB", "IbUMnbpEuvnjzycHgN-HU", "JkyxoC-OW", "hWppHmf-PE", "JkyxoC-FT", "JkyxoC-OJ", "IbUMnbpEuvnjzycHgN-ED", "vLZHJvuOHAMTJgYUed-QL", "hWppHmf-UY", "hWppHmf-HO", "XrsGEuTVhDngMssOR-MZ", "IbUMnbpEuvnjzycHgN-HJ", "ftTNOSm-NH", "vLZHJvuOHAMTJgYUed-PV", "mWQntfNRQieaPkmEbq-QJ", "IbUMnbpEuvnjzycHgN-ES", "vLZHJvuOHAMTJgYUed-HN", "mWQntfNRQieaPkmEbq-EH", "JkyxoC-VD", "vLZHJvuOHAMTJgYUed-WZ", "hWppHmf-VG", "IbUMnbpEuvnjzycHgN-FO", "IbUMnbpEuvnjzycHgN-CW", "vLZHJvuOHAMTJgYUed-HP", "vLZHJvuOHAMTJgYUed-MM", "mWQntfNRQieaPkmEbq-IS", "hWppHmf-NO", "IbUMnbpEuvnjzycHgN-BM"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"mWQntfNRQieaPkmEbq-UT,EH,IS,MT,QJ,RO", "IbUMnbpEuvnjzycHgN-ZD,BM,CW,ED,ES,FO,HJ,HU,JS,RW", "IbUMnbpEuvnjzycHgN-JS,BM,CW,ED,ES,FO,HJ,HU,RW,ZD", "ftTNOSm-AV,EB,NH,SC", "kOIPuYghTms-LA", "vLZHJvuOHAMTJgYUed-UX,HN,HP,MM,PV,QL,WZ", "JkyxoC-HO,FT,OJ,OW,VD", "ftTNOSm-SC,AV,EB,NH", "IbUMnbpEuvnjzycHgN-RW,BM,CW,ED,ES,FO,HJ,HU,JS,ZD", "mWQntfNRQieaPkmEbq-MT,EH,IS,QJ,RO,UT", "mWQntfNRQieaPkmEbq-RO,EH,IS,MT,QJ,UT", "hWppHmf-RK,HO,NO,PE,UY,VG", "XrsGEuTVhDngMssOR-PX,MZ,TN", "XrsGEuTVhDngMssOR-TN,MZ,PX", "ftTNOSm-EB,AV,NH,SC", "IbUMnbpEuvnjzycHgN-HU,BM,CW,ED,ES,FO,HJ,JS,RW,ZD", "JkyxoC-OW,FT,HO,OJ,VD", "hWppHmf-PE,HO,NO,RK,UY,VG", "JkyxoC-FT,HO,OJ,OW,VD", "JkyxoC-OJ,FT,HO,OW,VD", "IbUMnbpEuvnjzycHgN-ED,BM,CW,ES,FO,HJ,HU,JS,RW,ZD", "vLZHJvuOHAMTJgYUed-QL,HN,HP,MM,PV,UX,WZ", "hWppHmf-UY,HO,NO,PE,RK,VG", "hWppHmf-HO,NO,PE,RK,UY,VG", "XrsGEuTVhDngMssOR-MZ,PX,TN", "IbUMnbpEuvnjzycHgN-HJ,BM,CW,ED,ES,FO,HU,JS,RW,ZD", "ftTNOSm-NH,AV,EB,SC", "vLZHJvuOHAMTJgYUed-PV,HN,HP,MM,QL,UX,WZ", "mWQntfNRQieaPkmEbq-QJ,EH,IS,MT,RO,UT", "IbUMnbpEuvnjzycHgN-ES,BM,CW,ED,FO,HJ,HU,JS,RW,ZD", "vLZHJvuOHAMTJgYUed-HN,HP,MM,PV,QL,UX,WZ", "mWQntfNRQieaPkmEbq-EH,IS,MT,QJ,RO,UT", "JkyxoC-VD,FT,HO,OJ,OW", "vLZHJvuOHAMTJgYUed-WZ,HN,HP,MM,PV,QL,UX", "hWppHmf-VG,HO,NO,PE,RK,UY", "IbUMnbpEuvnjzycHgN-FO,BM,CW,ED,ES,HJ,HU,JS,RW,ZD", "IbUMnbpEuvnjzycHgN-CW,BM,ED,ES,FO,HJ,HU,JS,RW,ZD", "vLZHJvuOHAMTJgYUed-HP,HN,MM,PV,QL,UX,WZ", "vLZHJvuOHAMTJgYUed-MM,HN,HP,PV,QL,UX,WZ", "mWQntfNRQieaPkmEbq-IS,EH,MT,QJ,RO,UT", "hWppHmf-NO,HO,PE,RK,UY,VG", "IbUMnbpEuvnjzycHgN-BM,CW,ED,ES,FO,HJ,HU,JS,RW,ZD"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> placeboard = {"vdCyyOEV-QK", "OBzoOrFGuDr-CS", "idAyNv-CD", "OBzoOrFGuDr-IO", "whklBcwpMg-HL", "whklBcwpMg-SJ", "vnsTDhstFrjDBqsofu-WC", "TyttyTeBoRchW-XF", "TyttyTeBoRchW-FW", "GNljvWTDsaJfYjLVtjJ-ZV", "OBzoOrFGuDr-ZH", "idAyNv-JM", "TyttyTeBoRchW-VE", "whklBcwpMg-QN", "idAyNv-DR", "hiebKmLUXaExL-RY", "HHWJGdEfbFj-BL", "idAyNv-WW", "HHWJGdEfbFj-DG", "HHWJGdEfbFj-JA", "OBzoOrFGuDr-CM", "idAyNv-VK", "TyttyTeBoRchW-UR", "hiebKmLUXaExL-PM", "whklBcwpMg-FK", "hiebKmLUXaExL-YH", "GNljvWTDsaJfYjLVtjJ-FI", "whklBcwpMg-UE", "OBzoOrFGuDr-PK", "hiebKmLUXaExL-ML", "vdCyyOEV-ZJ", "HHWJGdEfbFj-SV", "OBzoOrFGuDr-UN", "idAyNv-TH", "vdCyyOEV-AB", "whklBcwpMg-NW", "ZisccQ-GP", "hiebKmLUXaExL-TU", "vdCyyOEV-FB", "TyttyTeBoRchW-NG"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"vdCyyOEV-QK,AB,FB,ZJ", "OBzoOrFGuDr-CS,CM,IO,PK,UN,ZH", "idAyNv-CD,DR,JM,TH,VK,WW", "OBzoOrFGuDr-IO,CM,CS,PK,UN,ZH", "whklBcwpMg-HL,FK,NW,QN,SJ,UE", "whklBcwpMg-SJ,FK,HL,NW,QN,UE", "vnsTDhstFrjDBqsofu-WC", "TyttyTeBoRchW-XF,FW,NG,UR,VE", "TyttyTeBoRchW-FW,NG,UR,VE,XF", "GNljvWTDsaJfYjLVtjJ-ZV,FI", "OBzoOrFGuDr-ZH,CM,CS,IO,PK,UN", "idAyNv-JM,CD,DR,TH,VK,WW", "TyttyTeBoRchW-VE,FW,NG,UR,XF", "whklBcwpMg-QN,FK,HL,NW,SJ,UE", "idAyNv-DR,CD,JM,TH,VK,WW", "hiebKmLUXaExL-RY,ML,PM,TU,YH", "HHWJGdEfbFj-BL,DG,JA,SV", "idAyNv-WW,CD,DR,JM,TH,VK", "HHWJGdEfbFj-DG,BL,JA,SV", "HHWJGdEfbFj-JA,BL,DG,SV", "OBzoOrFGuDr-CM,CS,IO,PK,UN,ZH", "idAyNv-VK,CD,DR,JM,TH,WW", "TyttyTeBoRchW-UR,FW,NG,VE,XF", "hiebKmLUXaExL-PM,ML,RY,TU,YH", "whklBcwpMg-FK,HL,NW,QN,SJ,UE", "hiebKmLUXaExL-YH,ML,PM,RY,TU", "GNljvWTDsaJfYjLVtjJ-FI,ZV", "whklBcwpMg-UE,FK,HL,NW,QN,SJ", "OBzoOrFGuDr-PK,CM,CS,IO,UN,ZH", "hiebKmLUXaExL-ML,PM,RY,TU,YH", "vdCyyOEV-ZJ,AB,FB,QK", "HHWJGdEfbFj-SV,BL,DG,JA", "OBzoOrFGuDr-UN,CM,CS,IO,PK,ZH", "idAyNv-TH,CD,DR,JM,VK,WW", "vdCyyOEV-AB,FB,QK,ZJ", "whklBcwpMg-NW,FK,HL,QN,SJ,UE", "ZisccQ-GP", "hiebKmLUXaExL-TU,ML,PM,RY,YH", "vdCyyOEV-FB,AB,QK,ZJ", "TyttyTeBoRchW-NG,FW,UR,VE,XF"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> placeboard = {"qTM-YS", "GNDXVGmjtqPFhDUxpJ-UP", "MhkTpqHhlpaXuF-LR", "GNDXVGmjtqPFhDUxpJ-GR", "xRHkbHhrMtpSYmDBUGFj-ME", "bzgEkbEIKdFNiXKF-MB", "bzgEkbEIKdFNiXKF-BT", "qTM-TH", "QxvuxWgJENjvtDa-BR", "bzgEkbEIKdFNiXKF-OV", "MhkTpqHhlpaXuF-YA", "QxvuxWgJENjvtDa-KB", "SJbR-MD", "QxvuxWgJENjvtDa-US", "SJbR-BV", "bzgEkbEIKdFNiXKF-PS", "MhkTpqHhlpaXuF-XJ", "GNDXVGmjtqPFhDUxpJ-HY", "SJbR-IW", "qTM-DR", "MhkTpqHhlpaXuF-TO", "QxvuxWgJENjvtDa-EJ", "QxvuxWgJENjvtDa-NG", "GNDXVGmjtqPFhDUxpJ-CB", "MhkTpqHhlpaXuF-NG", "MhkTpqHhlpaXuF-UG", "bzgEkbEIKdFNiXKF-NA", "WyTzrXzXeZOgnVg-NJ", "GNDXVGmjtqPFhDUxpJ-ZP", "SJbR-TF", "WyTzrXzXeZOgnVg-DV", "xRHkbHhrMtpSYmDBUGFj-HO", "QxvuxWgJENjvtDa-OK", "pdABzXCZSCHOTMEZNaYq-UE", "pdABzXCZSCHOTMEZNaYq-JK", "SJbR-LA", "MhkTpqHhlpaXuF-RZ", "pdABzXCZSCHOTMEZNaYq-XG", "QxvuxWgJENjvtDa-DE", "qTM-WF", "WyTzrXzXeZOgnVg-RF", "qTM-LU"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qTM-YS,DR,LU,TH,WF", "GNDXVGmjtqPFhDUxpJ-UP,CB,GR,HY,ZP", "MhkTpqHhlpaXuF-LR,NG,RZ,TO,UG,XJ,YA", "GNDXVGmjtqPFhDUxpJ-GR,CB,HY,UP,ZP", "xRHkbHhrMtpSYmDBUGFj-ME,HO", "bzgEkbEIKdFNiXKF-MB,BT,NA,OV,PS", "bzgEkbEIKdFNiXKF-BT,MB,NA,OV,PS", "qTM-TH,DR,LU,WF,YS", "QxvuxWgJENjvtDa-BR,DE,EJ,KB,NG,OK,US", "bzgEkbEIKdFNiXKF-OV,BT,MB,NA,PS", "MhkTpqHhlpaXuF-YA,LR,NG,RZ,TO,UG,XJ", "QxvuxWgJENjvtDa-KB,BR,DE,EJ,NG,OK,US", "SJbR-MD,BV,IW,LA,TF", "QxvuxWgJENjvtDa-US,BR,DE,EJ,KB,NG,OK", "SJbR-BV,IW,LA,MD,TF", "bzgEkbEIKdFNiXKF-PS,BT,MB,NA,OV", "MhkTpqHhlpaXuF-XJ,LR,NG,RZ,TO,UG,YA", "GNDXVGmjtqPFhDUxpJ-HY,CB,GR,UP,ZP", "SJbR-IW,BV,LA,MD,TF", "qTM-DR,LU,TH,WF,YS", "MhkTpqHhlpaXuF-TO,LR,NG,RZ,UG,XJ,YA", "QxvuxWgJENjvtDa-EJ,BR,DE,KB,NG,OK,US", "QxvuxWgJENjvtDa-NG,BR,DE,EJ,KB,OK,US", "GNDXVGmjtqPFhDUxpJ-CB,GR,HY,UP,ZP", "MhkTpqHhlpaXuF-NG,LR,RZ,TO,UG,XJ,YA", "MhkTpqHhlpaXuF-UG,LR,NG,RZ,TO,XJ,YA", "bzgEkbEIKdFNiXKF-NA,BT,MB,OV,PS", "WyTzrXzXeZOgnVg-NJ,DV,RF", "GNDXVGmjtqPFhDUxpJ-ZP,CB,GR,HY,UP", "SJbR-TF,BV,IW,LA,MD", "WyTzrXzXeZOgnVg-DV,NJ,RF", "xRHkbHhrMtpSYmDBUGFj-HO,ME", "QxvuxWgJENjvtDa-OK,BR,DE,EJ,KB,NG,US", "pdABzXCZSCHOTMEZNaYq-UE,JK,XG", "pdABzXCZSCHOTMEZNaYq-JK,UE,XG", "SJbR-LA,BV,IW,MD,TF", "MhkTpqHhlpaXuF-RZ,LR,NG,TO,UG,XJ,YA", "pdABzXCZSCHOTMEZNaYq-XG,JK,UE", "QxvuxWgJENjvtDa-DE,BR,EJ,KB,NG,OK,US", "qTM-WF,DR,LU,TH,YS", "WyTzrXzXeZOgnVg-RF,DV,NJ", "qTM-LU,DR,TH,WF,YS"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> placeboard = {"qibgdOmPObdcBCQPMs-KK", "SNmqSacZF-VE", "hREW-VR", "iaX-II", "qibgdOmPObdcBCQPMs-WS", "oXlPItCR-PE", "iaX-TR", "iaX-KI", "qibgdOmPObdcBCQPMs-FI", "iaX-YW", "CivFUbeiZQdueJUzdE-PT", "iaX-XK", "JJCliewvzYNVS-TQ", "PzWCOcruOneQGfTJTKm-GK", "oXlPItCR-GG", "iaX-MA", "oXlPItCR-YM", "JJCliewvzYNVS-GS", "oXlPItCR-VS", "SNmqSacZF-SR", "hREW-YD", "qibgdOmPObdcBCQPMs-AH", "qibgdOmPObdcBCQPMs-IA", "oXlPItCR-TW", "hREW-MI", "gcRmuyCeaYjCfQ-UL", "PzWCOcruOneQGfTJTKm-JY", "qibgdOmPObdcBCQPMs-BK", "qibgdOmPObdcBCQPMs-JT", "oXlPItCR-KH", "JJCliewvzYNVS-UD", "CivFUbeiZQdueJUzdE-IG", "JJCliewvzYNVS-XJ", "PzWCOcruOneQGfTJTKm-JG", "CivFUbeiZQdueJUzdE-BU", "PzWCOcruOneQGfTJTKm-EJ", "SNmqSacZF-FR", "JJCliewvzYNVS-VZ", "SNmqSacZF-BX", "oXlPItCR-QY"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qibgdOmPObdcBCQPMs-KK,AH,BK,FI,IA,JT,WS", "SNmqSacZF-VE,BX,FR,SR", "hREW-VR,MI,YD", "iaX-II,KI,MA,TR,XK,YW", "qibgdOmPObdcBCQPMs-WS,AH,BK,FI,IA,JT,KK", "oXlPItCR-PE,GG,KH,QY,TW,VS,YM", "iaX-TR,II,KI,MA,XK,YW", "iaX-KI,II,MA,TR,XK,YW", "qibgdOmPObdcBCQPMs-FI,AH,BK,IA,JT,KK,WS", "iaX-YW,II,KI,MA,TR,XK", "CivFUbeiZQdueJUzdE-PT,BU,IG", "iaX-XK,II,KI,MA,TR,YW", "JJCliewvzYNVS-TQ,GS,UD,VZ,XJ", "PzWCOcruOneQGfTJTKm-GK,EJ,JG,JY", "oXlPItCR-GG,KH,PE,QY,TW,VS,YM", "iaX-MA,II,KI,TR,XK,YW", "oXlPItCR-YM,GG,KH,PE,QY,TW,VS", "JJCliewvzYNVS-GS,TQ,UD,VZ,XJ", "oXlPItCR-VS,GG,KH,PE,QY,TW,YM", "SNmqSacZF-SR,BX,FR,VE", "hREW-YD,MI,VR", "qibgdOmPObdcBCQPMs-AH,BK,FI,IA,JT,KK,WS", "qibgdOmPObdcBCQPMs-IA,AH,BK,FI,JT,KK,WS", "oXlPItCR-TW,GG,KH,PE,QY,VS,YM", "hREW-MI,VR,YD", "gcRmuyCeaYjCfQ-UL", "PzWCOcruOneQGfTJTKm-JY,EJ,GK,JG", "qibgdOmPObdcBCQPMs-BK,AH,FI,IA,JT,KK,WS", "qibgdOmPObdcBCQPMs-JT,AH,BK,FI,IA,KK,WS", "oXlPItCR-KH,GG,PE,QY,TW,VS,YM", "JJCliewvzYNVS-UD,GS,TQ,VZ,XJ", "CivFUbeiZQdueJUzdE-IG,BU,PT", "JJCliewvzYNVS-XJ,GS,TQ,UD,VZ", "PzWCOcruOneQGfTJTKm-JG,EJ,GK,JY", "CivFUbeiZQdueJUzdE-BU,IG,PT", "PzWCOcruOneQGfTJTKm-EJ,GK,JG,JY", "SNmqSacZF-FR,BX,SR,VE", "JJCliewvzYNVS-VZ,GS,TQ,UD,XJ", "SNmqSacZF-BX,FR,SR,VE", "oXlPItCR-QY,GG,KH,PE,TW,VS,YM"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> placeboard = {"OSKfTwxZdwGDB-OC", "t-YA", "t-HN", "oWNTHLylfFHMMXwRx-PE", "amSZdQduuQxn-YQ", "t-RF", "nxkExmclGOLnjU-VA", "t-TZ", "OSKfTwxZdwGDB-OI", "OSKfTwxZdwGDB-ZV", "qSyCgDXkV-NU", "OSKfTwxZdwGDB-TW", "qSyCgDXkV-KF", "nxkExmclGOLnjU-ZK", "nxkExmclGOLnjU-UU", "amSZdQduuQxn-XQ", "amSZdQduuQxn-TJ", "oWNTHLylfFHMMXwRx-ZA", "MQBCG-ZA", "MQBCG-WT", "OSKfTwxZdwGDB-TO", "amSZdQduuQxn-UJ", "amSZdQduuQxn-BL", "nxkExmclGOLnjU-RW", "MQBCG-PL", "MQBCG-VH", "qSyCgDXkV-GO", "ZhwPOGCyK-CY", "nxkExmclGOLnjU-JP", "t-OW", "MQBCG-PN", "t-DL", "NZRTqhcgjmzazTevHS-VM", "oWNTHLylfFHMMXwRx-IZ", "t-QQ", "t-XE", "ZhwPOGCyK-CE", "OSKfTwxZdwGDB-CM", "ZhwPOGCyK-FD", "amSZdQduuQxn-ZO", "ZhwPOGCyK-AJ", "ZhwPOGCyK-KU", "ZhwPOGCyK-PH", "ZhwPOGCyK-TV", "qSyCgDXkV-XM"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OSKfTwxZdwGDB-OC,CM,OI,TO,TW,ZV", "t-YA,DL,HN,OW,QQ,RF,TZ,XE", "t-HN,DL,OW,QQ,RF,TZ,XE,YA", "oWNTHLylfFHMMXwRx-PE,IZ,ZA", "amSZdQduuQxn-YQ,BL,TJ,UJ,XQ,ZO", "t-RF,DL,HN,OW,QQ,TZ,XE,YA", "nxkExmclGOLnjU-VA,JP,RW,UU,ZK", "t-TZ,DL,HN,OW,QQ,RF,XE,YA", "OSKfTwxZdwGDB-OI,CM,OC,TO,TW,ZV", "OSKfTwxZdwGDB-ZV,CM,OC,OI,TO,TW", "qSyCgDXkV-NU,GO,KF,XM", "OSKfTwxZdwGDB-TW,CM,OC,OI,TO,ZV", "qSyCgDXkV-KF,GO,NU,XM", "nxkExmclGOLnjU-ZK,JP,RW,UU,VA", "nxkExmclGOLnjU-UU,JP,RW,VA,ZK", "amSZdQduuQxn-XQ,BL,TJ,UJ,YQ,ZO", "amSZdQduuQxn-TJ,BL,UJ,XQ,YQ,ZO", "oWNTHLylfFHMMXwRx-ZA,IZ,PE", "MQBCG-ZA,PL,PN,VH,WT", "MQBCG-WT,PL,PN,VH,ZA", "OSKfTwxZdwGDB-TO,CM,OC,OI,TW,ZV", "amSZdQduuQxn-UJ,BL,TJ,XQ,YQ,ZO", "amSZdQduuQxn-BL,TJ,UJ,XQ,YQ,ZO", "nxkExmclGOLnjU-RW,JP,UU,VA,ZK", "MQBCG-PL,PN,VH,WT,ZA", "MQBCG-VH,PL,PN,WT,ZA", "qSyCgDXkV-GO,KF,NU,XM", "ZhwPOGCyK-CY,AJ,CE,FD,KU,PH,TV", "nxkExmclGOLnjU-JP,RW,UU,VA,ZK", "t-OW,DL,HN,QQ,RF,TZ,XE,YA", "MQBCG-PN,PL,VH,WT,ZA", "t-DL,HN,OW,QQ,RF,TZ,XE,YA", "NZRTqhcgjmzazTevHS-VM", "oWNTHLylfFHMMXwRx-IZ,PE,ZA", "t-QQ,DL,HN,OW,RF,TZ,XE,YA", "t-XE,DL,HN,OW,QQ,RF,TZ,YA", "ZhwPOGCyK-CE,AJ,CY,FD,KU,PH,TV", "OSKfTwxZdwGDB-CM,OC,OI,TO,TW,ZV", "ZhwPOGCyK-FD,AJ,CE,CY,KU,PH,TV", "amSZdQduuQxn-ZO,BL,TJ,UJ,XQ,YQ", "ZhwPOGCyK-AJ,CE,CY,FD,KU,PH,TV", "ZhwPOGCyK-KU,AJ,CE,CY,FD,PH,TV", "ZhwPOGCyK-PH,AJ,CE,CY,FD,KU,TV", "ZhwPOGCyK-TV,AJ,CE,CY,FD,KU,PH", "qSyCgDXkV-XM,GO,KF,NU"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> placeboard = {"wQ-CJ", "AdWTRjboyZfSAjyaWj-RY", "wQ-RS", "EbuqCrQvt-LN", "AdWTRjboyZfSAjyaWj-NB", "PRZoOrbtMHOrEAOm-UX", "EbuqCrQvt-KL", "EbuqCrQvt-TK", "wQ-RE", "RqZ-UW", "PRZoOrbtMHOrEAOm-SQ", "AdWTRjboyZfSAjyaWj-RT", "RqZ-SJ", "PRZoOrbtMHOrEAOm-XP", "RqZ-TE", "EbuqCrQvt-JY", "AdWTRjboyZfSAjyaWj-VF", "wQ-ZY", "AdWTRjboyZfSAjyaWj-RQ", "AdWTRjboyZfSAjyaWj-BL", "wQ-HK", "wQ-GK", "PRZoOrbtMHOrEAOm-QB", "EbuqCrQvt-JX", "wQ-ZB", "PRZoOrbtMHOrEAOm-PV", "RqZ-NM", "PRZoOrbtMHOrEAOm-VS", "wQ-DS", "EbuqCrQvt-DN", "EbuqCrQvt-UL", "PRZoOrbtMHOrEAOm-NI", "wQ-CD", "AdWTRjboyZfSAjyaWj-OT", "AdWTRjboyZfSAjyaWj-VO", "AdWTRjboyZfSAjyaWj-QP", "RqZ-ER", "RqZ-XG", "wQ-VN", "PRZoOrbtMHOrEAOm-EI", "AdWTRjboyZfSAjyaWj-DG", "PRZoOrbtMHOrEAOm-YD", "EbuqCrQvt-TH", "EbuqCrQvt-BJ", "AdWTRjboyZfSAjyaWj-NJ"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"wQ-CJ,CD,DS,GK,HK,RE,RS,VN,ZB,ZY", "AdWTRjboyZfSAjyaWj-RY,BL,DG,NB,NJ,OT,QP,RQ,RT,VF,VO", "wQ-RS,CD,CJ,DS,GK,HK,RE,VN,ZB,ZY", "EbuqCrQvt-LN,BJ,DN,JX,JY,KL,TH,TK,UL", "AdWTRjboyZfSAjyaWj-NB,BL,DG,NJ,OT,QP,RQ,RT,RY,VF,VO", "PRZoOrbtMHOrEAOm-UX,EI,NI,PV,QB,SQ,VS,XP,YD", "EbuqCrQvt-KL,BJ,DN,JX,JY,LN,TH,TK,UL", "EbuqCrQvt-TK,BJ,DN,JX,JY,KL,LN,TH,UL", "wQ-RE,CD,CJ,DS,GK,HK,RS,VN,ZB,ZY", "RqZ-UW,ER,NM,SJ,TE,XG", "PRZoOrbtMHOrEAOm-SQ,EI,NI,PV,QB,UX,VS,XP,YD", "AdWTRjboyZfSAjyaWj-RT,BL,DG,NB,NJ,OT,QP,RQ,RY,VF,VO", "RqZ-SJ,ER,NM,TE,UW,XG", "PRZoOrbtMHOrEAOm-XP,EI,NI,PV,QB,SQ,UX,VS,YD", "RqZ-TE,ER,NM,SJ,UW,XG", "EbuqCrQvt-JY,BJ,DN,JX,KL,LN,TH,TK,UL", "AdWTRjboyZfSAjyaWj-VF,BL,DG,NB,NJ,OT,QP,RQ,RT,RY,VO", "wQ-ZY,CD,CJ,DS,GK,HK,RE,RS,VN,ZB", "AdWTRjboyZfSAjyaWj-RQ,BL,DG,NB,NJ,OT,QP,RT,RY,VF,VO", "AdWTRjboyZfSAjyaWj-BL,DG,NB,NJ,OT,QP,RQ,RT,RY,VF,VO", "wQ-HK,CD,CJ,DS,GK,RE,RS,VN,ZB,ZY", "wQ-GK,CD,CJ,DS,HK,RE,RS,VN,ZB,ZY", "PRZoOrbtMHOrEAOm-QB,EI,NI,PV,SQ,UX,VS,XP,YD", "EbuqCrQvt-JX,BJ,DN,JY,KL,LN,TH,TK,UL", "wQ-ZB,CD,CJ,DS,GK,HK,RE,RS,VN,ZY", "PRZoOrbtMHOrEAOm-PV,EI,NI,QB,SQ,UX,VS,XP,YD", "RqZ-NM,ER,SJ,TE,UW,XG", "PRZoOrbtMHOrEAOm-VS,EI,NI,PV,QB,SQ,UX,XP,YD", "wQ-DS,CD,CJ,GK,HK,RE,RS,VN,ZB,ZY", "EbuqCrQvt-DN,BJ,JX,JY,KL,LN,TH,TK,UL", "EbuqCrQvt-UL,BJ,DN,JX,JY,KL,LN,TH,TK", "PRZoOrbtMHOrEAOm-NI,EI,PV,QB,SQ,UX,VS,XP,YD", "wQ-CD,CJ,DS,GK,HK,RE,RS,VN,ZB,ZY", "AdWTRjboyZfSAjyaWj-OT,BL,DG,NB,NJ,QP,RQ,RT,RY,VF,VO", "AdWTRjboyZfSAjyaWj-VO,BL,DG,NB,NJ,OT,QP,RQ,RT,RY,VF", "AdWTRjboyZfSAjyaWj-QP,BL,DG,NB,NJ,OT,RQ,RT,RY,VF,VO", "RqZ-ER,NM,SJ,TE,UW,XG", "RqZ-XG,ER,NM,SJ,TE,UW", "wQ-VN,CD,CJ,DS,GK,HK,RE,RS,ZB,ZY", "PRZoOrbtMHOrEAOm-EI,NI,PV,QB,SQ,UX,VS,XP,YD", "AdWTRjboyZfSAjyaWj-DG,BL,NB,NJ,OT,QP,RQ,RT,RY,VF,VO", "PRZoOrbtMHOrEAOm-YD,EI,NI,PV,QB,SQ,UX,VS,XP", "EbuqCrQvt-TH,BJ,DN,JX,JY,KL,LN,TK,UL", "EbuqCrQvt-BJ,DN,JX,JY,KL,LN,TH,TK,UL", "AdWTRjboyZfSAjyaWj-NJ,BL,DG,NB,OT,QP,RQ,RT,RY,VF,VO"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> placeboard = {"qXxrjfkwNZtOOXXSMJBR-YB", "segqNwLaXslldYqkWvF-LD", "qXxrjfkwNZtOOXXSMJBR-HO", "KKllpULwgxC-CJ", "aLyXRyiIWnHxWqy-OM", "hd-WQ", "qXxrjfkwNZtOOXXSMJBR-PB", "KKllpULwgxC-DO", "hd-HD", "qXxrjfkwNZtOOXXSMJBR-NW", "qXxrjfkwNZtOOXXSMJBR-MN", "yRebvSlyzBW-QN", "qXxrjfkwNZtOOXXSMJBR-SK", "aLyXRyiIWnHxWqy-PL", "plwqTOFlQwxgVT-WV", "UXeq-JL", "KKllpULwgxC-TZ", "KKllpULwgxC-DJ", "hd-VT", "hd-ZC", "UXeq-LM", "yRebvSlyzBW-IW", "qXxrjfkwNZtOOXXSMJBR-BK", "hd-BZ", "KKllpULwgxC-SD", "yRebvSlyzBW-NY", "hd-BD", "UXeq-BJ", "segqNwLaXslldYqkWvF-EC", "hd-CX", "plwqTOFlQwxgVT-ID", "KKllpULwgxC-PJ", "hd-VG", "aLyXRyiIWnHxWqy-PJ", "segqNwLaXslldYqkWvF-BC", "yRebvSlyzBW-BH", "yRebvSlyzBW-EF", "qXxrjfkwNZtOOXXSMJBR-EP", "UXeq-BG", "aLyXRyiIWnHxWqy-DW", "qXxrjfkwNZtOOXXSMJBR-HY", "plwqTOFlQwxgVT-LL", "UXeq-EB", "segqNwLaXslldYqkWvF-MS"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"qXxrjfkwNZtOOXXSMJBR-YB,BK,EP,HO,HY,MN,NW,PB,SK", "segqNwLaXslldYqkWvF-LD,BC,EC,MS", "qXxrjfkwNZtOOXXSMJBR-HO,BK,EP,HY,MN,NW,PB,SK,YB", "KKllpULwgxC-CJ,DJ,DO,PJ,SD,TZ", "aLyXRyiIWnHxWqy-OM,DW,PJ,PL", "hd-WQ,BD,BZ,CX,HD,VG,VT,ZC", "qXxrjfkwNZtOOXXSMJBR-PB,BK,EP,HO,HY,MN,NW,SK,YB", "KKllpULwgxC-DO,CJ,DJ,PJ,SD,TZ", "hd-HD,BD,BZ,CX,VG,VT,WQ,ZC", "qXxrjfkwNZtOOXXSMJBR-NW,BK,EP,HO,HY,MN,PB,SK,YB", "qXxrjfkwNZtOOXXSMJBR-MN,BK,EP,HO,HY,NW,PB,SK,YB", "yRebvSlyzBW-QN,BH,EF,IW,NY", "qXxrjfkwNZtOOXXSMJBR-SK,BK,EP,HO,HY,MN,NW,PB,YB", "aLyXRyiIWnHxWqy-PL,DW,OM,PJ", "plwqTOFlQwxgVT-WV,ID,LL", "UXeq-JL,BG,BJ,EB,LM", "KKllpULwgxC-TZ,CJ,DJ,DO,PJ,SD", "KKllpULwgxC-DJ,CJ,DO,PJ,SD,TZ", "hd-VT,BD,BZ,CX,HD,VG,WQ,ZC", "hd-ZC,BD,BZ,CX,HD,VG,VT,WQ", "UXeq-LM,BG,BJ,EB,JL", "yRebvSlyzBW-IW,BH,EF,NY,QN", "qXxrjfkwNZtOOXXSMJBR-BK,EP,HO,HY,MN,NW,PB,SK,YB", "hd-BZ,BD,CX,HD,VG,VT,WQ,ZC", "KKllpULwgxC-SD,CJ,DJ,DO,PJ,TZ", "yRebvSlyzBW-NY,BH,EF,IW,QN", "hd-BD,BZ,CX,HD,VG,VT,WQ,ZC", "UXeq-BJ,BG,EB,JL,LM", "segqNwLaXslldYqkWvF-EC,BC,LD,MS", "hd-CX,BD,BZ,HD,VG,VT,WQ,ZC", "plwqTOFlQwxgVT-ID,LL,WV", "KKllpULwgxC-PJ,CJ,DJ,DO,SD,TZ", "hd-VG,BD,BZ,CX,HD,VT,WQ,ZC", "aLyXRyiIWnHxWqy-PJ,DW,OM,PL", "segqNwLaXslldYqkWvF-BC,EC,LD,MS", "yRebvSlyzBW-BH,EF,IW,NY,QN", "yRebvSlyzBW-EF,BH,IW,NY,QN", "qXxrjfkwNZtOOXXSMJBR-EP,BK,HO,HY,MN,NW,PB,SK,YB", "UXeq-BG,BJ,EB,JL,LM", "aLyXRyiIWnHxWqy-DW,OM,PJ,PL", "qXxrjfkwNZtOOXXSMJBR-HY,BK,EP,HO,MN,NW,PB,SK,YB", "plwqTOFlQwxgVT-LL,ID,WV", "UXeq-EB,BG,BJ,JL,LM", "segqNwLaXslldYqkWvF-MS,BC,EC,LD"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> placeboard = {"a-AA", "a-ZZ"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a-AA,ZZ", "a-ZZ,AA"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> placeboard = {"PFwL-GE", "PFwL-EV", "agXL-SR", "PFwL-CS", "PFwL-FE", "PFwL-MS", "agXL-VS", "agXL-AL", "PFwL-BI", "PFwL-DK", "PFwL-MW", "PFwL-DS", "agXL-XJ", "agXL-PJ", "agXL-CK", "PFwL-KI", "agXL-KP", "agXL-EL", "PFwL-EA"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PFwL-GE,BI,CS,DK,DS,EA,EV,FE,KI,MS,MW", "PFwL-EV,BI,CS,DK,DS,EA,FE,GE,KI,MS,MW", "agXL-SR,AL,CK,EL,KP,PJ,VS,XJ", "PFwL-CS,BI,DK,DS,EA,EV,FE,GE,KI,MS,MW", "PFwL-FE,BI,CS,DK,DS,EA,EV,GE,KI,MS,MW", "PFwL-MS,BI,CS,DK,DS,EA,EV,FE,GE,KI,MW", "agXL-VS,AL,CK,EL,KP,PJ,SR,XJ", "agXL-AL,CK,EL,KP,PJ,SR,VS,XJ", "PFwL-BI,CS,DK,DS,EA,EV,FE,GE,KI,MS,MW", "PFwL-DK,BI,CS,DS,EA,EV,FE,GE,KI,MS,MW", "PFwL-MW,BI,CS,DK,DS,EA,EV,FE,GE,KI,MS", "PFwL-DS,BI,CS,DK,EA,EV,FE,GE,KI,MS,MW", "agXL-XJ,AL,CK,EL,KP,PJ,SR,VS", "agXL-PJ,AL,CK,EL,KP,SR,VS,XJ", "agXL-CK,AL,EL,KP,PJ,SR,VS,XJ", "PFwL-KI,BI,CS,DK,DS,EA,EV,FE,GE,MS,MW", "agXL-KP,AL,CK,EL,PJ,SR,VS,XJ", "agXL-EL,AL,CK,KP,PJ,SR,VS,XJ", "PFwL-EA,BI,CS,DK,DS,EV,FE,GE,KI,MS,MW"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> placeboard = {"John-DH", "Jack-SP", "Sam-OF", "John-SP", "John-RP"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"John-DH,RP,SP", "Jack-SP", "Sam-OF", "John-SP,DH,RP", "John-RP,DH,SP"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> placeboard = {"a-XX", "a-ZZ", "a-YY", "b-OR", "b-DE", "b-IS"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a-XX,YY,ZZ", "a-ZZ,XX,YY", "a-YY,XX,ZZ", "b-OR,DE,IS", "b-DE,IS,OR", "b-IS,DE,OR"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> placeboard = {"John-DH", "Jack-SP", "Sam-OF", "John-SP", "John-RP", "John-RA", "John-RZ", "Jack-OF", "Sam-SP"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"John-DH,RA,RP,RZ,SP", "Jack-SP,OF", "Sam-OF,SP", "John-SP,DH,RA,RP,RZ", "John-RP,DH,RA,RZ,SP", "John-RA,DH,RP,RZ,SP", "John-RZ,DH,RA,RP,SP", "Jack-OF,SP", "Sam-SP,OF"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> placeboard = {"Jack-SP", "Sam-OF", "John-SP", "John-RP", "John-RA", "John-RZ", "John-DH", "Jack-OF", "Sam-SP"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Jack-SP,OF", "Sam-OF,SP", "John-SP,DH,RA,RP,RZ", "John-RP,DH,RA,RZ,SP", "John-RA,DH,RP,RZ,SP", "John-RZ,DH,RA,RP,SP", "John-DH,RA,RP,RZ,SP", "Jack-OF,SP", "Sam-SP,OF"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> placeboard = {"Jhon-DA", "Jhon-RA", "Jhon-AA"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Jhon-DA,AA,RA", "Jhon-RA,AA,DA", "Jhon-AA,DA,RA"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> placeboard = {"John-AA", "John-AC", "John-AB"};
    XBallGame* pObj = new XBallGame();
    clock_t start = clock();
    vector<string> result = pObj->newStatistics(placeboard);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"John-AA,AB,AC", "John-AC,AA,AB", "John-AB,AA,AC"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15550674&rd=9823&pm=6387
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
using namespace std; 
 
class XBallGame { 
public: 
  vector<string> split( const string& s, const string& delim =" " ) {    vector<string> res;    string t;    for ( int i = 0 ; i != s.size() ; i++ ) {        if ( delim.find( s[i] ) != string::npos ) {            if ( !t.empty() ) {                res.push_back( t );                t = "";            }        } else {            t += s[i];        }    }    if ( !t.empty() ) {        res.push_back(t);    }    return res;} 
    vector <string> newStatistics(vector <string> placeboard) { 
        vector <string> res; 
    vector <string> vs, vs2, vpos; 
     
    string s; 
    for(int i = 0; i<placeboard.size(); i++){ 
      s = placeboard[i]; 
      vpos.clear(); 
      vs = split( placeboard[i], "-"); 
      for(int j = 0; j<placeboard.size(); j++){ 
        if(i!=j){ 
          vs2 = split( placeboard[j], "-"); 
          if( vs[0] == vs2[0]){ 
            vpos.push_back(vs2[1]); 
          } 
        } 
      } 
      sort(vpos.begin(), vpos.end()); 
      for(int k = 0; k<vpos.size(); k++){ 
        s+=","; 
        s+=vpos[k]; 
      } 
      res.push_back(s); 
    } 
        return res; 
    } 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
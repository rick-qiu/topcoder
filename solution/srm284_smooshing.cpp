/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4847
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

class Smooshing {
public:
    int savings(vector<string> program);
};

int Smooshing::savings(vector<string> program) {
    int ret;
    return ret;
}


int test0() {
    vector<string> program = {"MyInt = YrInt; if(MyInt==2*That) MyInt++;", "while(MyInt>3){", " MyDouble = MyShort+MyLong;", "}", "return MyDouble;", "end"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> program = {"Aa = AA2 = Aa3; Now is the the time", " Aa=aA2"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> program = {"Aa = AA2 = Aa 3; Now is the the time", " Aa=aA2", "A = A+2"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> program = {"MyInt3 = MyInt", "MyIntMyInt"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> program = {"now is the time for all good men ", " ", " "};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
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
    vector<string> program = {"AB AB A AA AAA AAAA AAAAA"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = -3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> program = {"C = Cda; CdC=CdCd+2*Cd;"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> program = {"C = Cda; CdC=CdCd+2*Cd;", "Cda =C"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> program = {"AB A AA AAA AAAA AAAAA aaaaa aAAAA AAAAa,AB "};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = -3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> program = {"now is the time for all good men ", " ", ",now"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> program = {"Aa = AA2 = Aa 3; Now is the the time", " Aa=aA2", "A = A+2", "A", "", " "};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> program = {""};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
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
    vector<string> program = {"A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A", "A A A A A A A A A A A A A A A A A A A A A A A A"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
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
    vector<string> program = {"A=AA=AAA=AAAA=AAAAA=AA"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> program = {"for int I = 1 to B if B==2 I++; if(I==B) pr B=B;", "B=2;"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> program = {" ", "Abracadabra = Abra + Cadabra", "if(Abra>Cadabra)Abra=Abracadabra"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> program = {",UcuhyRr,UcuhyRr ,UcuhyRr ,UcuhyRr ,UcuhyRr ", ",UcuhyRr ,UcuhyRr,UcuhyRr,UcuhyRr,UcuhyRr ", ",UcuhyRr,UcuhyRr,UcuhyRr,UcuhyRr,UcuhyRr ,UcuhyRr ", " ,UcuhyRr ,UcuhyRr,UcuhyRr,UcuhyRr,UcuhyRr,UcuhyRr", ",UcuhyRr,UcuhyRr,UcuhyRr,UcuhyRr,UcuhyRr ,UcuhyRr", ",UcuhyRr ,UcuhyRr ,UcuhyRr ,UcuhyRr ,UcuhyRr", ",UcuhyRr ,UcuhyRr,UcuhyRr,UcuhyRr ,UcuhyRr ", " ,UcuhyRr,UcuhyRr,UcuhyRr,UcuhyRr ,UcuhyRr", ",UcuhyRr,UcuhyRr,UcuhyRr ,UcuhyRr,UcuhyRr ", ",UcuhyRr ,UcuhyRr ,UcuhyRr,UcuhyRr,UcuhyRr ", ",UcuhyRr ,UcuhyRr ,UcuhyRr,UcuhyRr ,UcuhyRr", " ,UcuhyRr,UcuhyRr,UcuhyRr ,UcuhyRr ", ",UcuhyRr,UcuhyRr,UcuhyRr,UcuhyRr ,UcuhyRr ", " ,UcuhyRr ,UcuhyRr ,UcuhyRr ,UcuhyRr,UcuhyRr ", " ,UcuhyRr ,UcuhyRr ,UcuhyRr,UcuhyRr ,UcuhyRr ", ",UcuhyRr,UcuhyRr,UcuhyRr,UcuhyRr,UcuhyRr ,UcuhyRr", ",UcuhyRr ,UcuhyRr ,UcuhyRr,UcuhyRr ,UcuhyRr", ",UcuhyRr ,UcuhyRr ,UcuhyRr,UcuhyRr ,UcuhyRr", ",UcuhyRr ,UcuhyRr,UcuhyRr,UcuhyRr ,UcuhyRr", " ,UcuhyRr ,UcuhyRr ,UcuhyRr ,UcuhyRr,UcuhyRr"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 618;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> program = {",HEUG ,LWvdH,D,DgwuGNBGWF,EoykQ ,GokBTggR,Ufbq ", ",MsXEfCYh,HEUG,XOcNrqD,Ufbq,JMT ,DgwuGNBGWF,PW"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> program = {"_MJOSSDNrgTpaJOSCDNrgTpmDNrgTpWKZntAPq[DNrgTp", "a?gKZntAPqcdKZntAPqVHJOSjMKZntAPq|DNrgTpUDNrgTp", "XqKZntAPqhJOS 3|KZntAPq<Gd~6GdZ$7 DNrgTpIKZntAPq", "BDNrgTp'DNrgTpFQDNrgTp:qDNrgTp#DNrgTpcuJOStGd", "A,KZntAPqsKZntAPqEJOS>EGdPBJOS|JOSYjDNrgTp+GdC", "rD8[KZntAPq|tDNrgTp`KZntAPqw@dGd>YeGdMJOS;iJOS[OC5", "NJOS|JOSl JOS}'KZntAPq yDNrgTptJOS|JOSh8DNrgTp:t";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 488;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> program = {"cRiHUEOLlsgVKgReyGp[GFSD&SOIrcNGG[TDMTf'p&", "z8;RiHUEOLlsgwZECenywpYZDOGQjUMrwXDOGQjUMrYBedoehP", "3MS?RkUbw0ZECenywpYdPqKwvTJjzhEKgReyGp*KgReyGp", "'BedoehPsttZECenywpYD3sPqKwvTJjzhlDOGQjUMr", " MSfPGUdMSiRiHUEOLlsg6pBedoehP+PqKwvTJjzhLDOGQjUMr", "TFHoaARe)KgReyGpex)d`RkUbwnZECenywpYiMSHSKgReyGp", "fDOGQjUMr=HoaARePGFSDLRkUbwdHoaAReUBedoehP#", "{;GFSDZmRiHUEOLlsgN}RkUbw^qSOIrcNGGX~HoaARe", "SPGU#*TDMTf1TDMTf6QHoaARe;TDOGQjUMr$PqKwvTJjzh", "%DOGQjUMrUGFSDSGFSDT,RiHUEOLlsgJWHoaAReqRiHUEOLlsg", "^PqKwvTJjzhQSOIrcNGGuBedoehP9MS]ZECenywpY"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 351;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> program = {"'QFyotGpMQaTIWljkYi]JzsnrnA!JzsnrnAPUT}]Eiycqgz";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 368;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> program = {"}JLpcFqf6.VNHnurX{uVNHnurXpJLpcFqf#YjVNHnurXv", "@OHIVNHnurXnVNHnurXxJLpcFqf.RY+JLpcFqf,JLpcFqfvYCY", ".Y7rVNHnurX3ZVNHnurX@VNHnurX7VNHnurX')~JLpcFqfx/Y", "eVVNHnurX<{VNHnurXYY$lJLpcFqf-Y++VNHnurX'JLpcFqff", "'JLpcFqf(?VNHnurXf~uVNHnurX<DY|VNHnurXk|JLpcFqfoQ@", "rRVNHnurX6.Q'Y5JLpcFqfnJLpcFqf|csAoY$+JLpcFqf", "lVNHnurX4YBJLpcFqfXYjS[gY;JLpcFqfAYCVNHnurX", ":VNHnurXlPVJLpcFqf9JLpcFqf*VNHnurXbJLpcFqf)VNHnurX", "^mJLpcFqf3@JLpcFqf.JLpcFqf#VNHnurXAiqVNHnurXAY", "0YD%)YVNHnurXEdVNHnurXbYrJLpcFqfhJLpcFqf3`+", "5VNHnurX Y-JLpcFqfoVNHnurX[GJLpcFqfNZYzCJLpcFqf", "WYlVNHnurX!VNHnurX7Y/XJLpcFqf?YiJLpcFqf9VNHnurX<Y", "6/Y+pYWJLpcFqfbJLpcFqf2GYPlJLpcFqf3JLpcFqf>", "KXvJLpcFqf57VNHnurXvQVNHnurX.JLpcFqfPJLpcFqf/tY", "9F$YoJLpcFqf Yc0Yu2oaa&~M.Y^ 5QRVNHnurX){*JLpcFqf", "3fVNHnurXOY`VNHnurX4JLpcFqfRYtJLpcFqf4YgUVNHnurX6Y", "!JLpcFqfQY+Y=VNHnurXUVNHnurX:VNHnurX+Y[5JLpcFqf", "XJLpcFqfkJLpcFqfqY6'VNHnurXY#YJ5Y:0VNHnurXL HYtY", "XY)';'GVVNHnurX&,yVNHnurX>JLpcFqffYIVNHnurX{Y", "sCJLpcFqfS#JLpcFqf{YjJLpcFqffYdY1OZ^CTJLpcFqf", "IJLpcFqfRYM Y*VNHnurX=uJLpcFqf^Y=VNHnurX7<JLpcFqf", "UlYhVNHnurX1VNHnurX59JLpcFqfgJLpcFqf<YiY'YTYv", ",VNHnurX!VNHnurXoVNHnurXcYDdVNHnurX`uJLpcFqf", "&iJLpcFqffVNHnurXY >ewY7YgJLpcFqfg*Y;LJLpcFqfc", "EJLpcFqfuzvYDVNHnurX {7{YmJIJLpcFqfSVNHnurX", " YsVNHnurX,YoLYs!uYioVNHnurX_KOYT;JLpcFqfI}eYwY", "nYBUY(Y6JLpcFqfrY@VNHnurX6dYPVNHnurX^VNHnurX/f", "6JLpcFqfDJLpcFqfPVNHnurX<VNHnurX8VNHnurX[Y$VNHnurX", "}VNHnurXgYHDWI.A VNHnurX'YO:JLpcFqfGVNHnurX", "uY?UJLpcFqfaY(VNHnurX`JLpcFqfjN8VNHnurX~JLpcFqf*", "wstcoYJYjY>JLpcFqf>*NVNHnurXo7JLpcFqf*3JLpcFqfhYC", "oJLpcFqf+~Y)YMYX,YdJLpcFqfbY.VNHnurXqJLpcFqfvY}![Y", "*VNHnurXfYp#YmeIY|VNHnurXaJLpcFqf[=YpzKFY+ Y", "(YD*JLpcFqf'VNHnurX}tJLpcFqfyVNHnurXiYf7mJLpcFqf", "}Y^EJLpcFqfgJLpcFqficwmJLpcFqfYYMeyVNHnurXDVNHnurX", "<JLpcFqf{VNHnurXZJLpcFqfoJLpcFqf8JLpcFqf2VNHnurX2", "aVNHnurX-QlY6JLpcFqfbYrJLpcFqf`Y/-VNHnurX%qVNHnurX", "UYUJLpcFqfC]VNHnurXbkKKVNHnurXyY:9Y@?JLpcFqf", "+Y'VNHnurXgSYKJLpcFqfZY+B^YWJLpcFqf>wXpJLpcFqf=", "hY)HYFcJLpcFqfj=JLpcFqf$VNHnurX|hlJLpcFqf9VNHnurX/"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 942;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> program = {"2NzQFQ]NzQFQ*>}-NzQFQlP=NzQFQpNzQFQ!UNzQFQ8NzQFQ9C";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 833;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> program = {"|FLtXvSvOd:IuPbTWSvOdFmFLtXJSvOdyCRHVOPxODHVOPxOD", "qySvOd/~:!FLtX<kKXHVOPxODdFLtX:^vFLtXX6FLtX", "wHVOPxOD[FLtX4IuPbTySvOd^IuPbT>c8WrFLtX/DSvOdPSvOd", "g`FLtXMJHVOPxODRFLtX LIuPbTKIuPbT/IuPbTcSvOd", "5HIuPbT[HVOPxODW:,FLtXqZhSvOd2HVOPxODXSvOd#FLtX", "GHVOPxOD'>IuPbTDSvOd2SvOdcSvOdlDIuPbToIuPbT~IuPbT", "W0SvOd*SvOdnIuPbT FLtXnFLtXU*FLtXfFLtX5<HVOPxOD?", "/FLtXcIuPbT@HVOPxODH_FLtX{pwIuPbTT[IuPbT}HVOPxOD", "2FLtXsSvOd:U2nrQMSvOdF6@Lg5FLtXwFLtX~,/P 7HVOPxOD", "e7v&SvOd!{FLtXzFLtXDIuPbT_SvOd;HVOPxODeSvOdqSvOd", "Q8MTWSvOdvHVOPxODhHVOPxODlSvOd|FLtXg&FLtXk'SvOd?", "iHVOPxODC0SvOd?yJHVOPxODA_SvOd4iHVOPxODlvENFLtXG", "8SvOdBHVOPxODLoYHVOPxOD3FLtXYSvOdpIuPbTGuFLtX", "_!HVOPxOD HVOPxOD{SvOdqSvOdiFLtX`FLtX38;/HVOPxODe<", "tHVOPxOD55MSvOdyFLtX}[ ,SvOd>SvOdc+nHVOPxODq", "bSvOd-IuPbT8IuPbTkSvOd2HVOPxODAHVOPxOD*FLtX", "}YFLtX?SvOddHVOPxODufsNIuPbT(IuPbT~tSvOdISvOd", "-eSvOd)SvOdVIuPbT$IuPbTMFLtX0SvOdHvHVOPxODz(SvOd", "mHVOPxOD?FLtXLFLtXnFLtXrHVOPxODF8HVOPxOD''eSvOd", "ID|_SvOdAFLtXFHVOPxOD>HVOPxOD!sFLtXK#IFLtX'HVOPxOD", "u,SvOdvFLtXd($|'HVOPxODxnyHVOPxOD0,_lFLtX:FLtX", ";HVOPxODcIuPbTsHVOPxOD3SvOd~IuPbT(XSvOd72H8KFLtXd;", "ykIuPbT.HVOPxODyIuPbTC;FLtX=HVOPxOD;IuPbTwSvOdX=", "cIuPbT!FLtXmIuPbT*SvOdzSvOd?IuPbTcBHVOPxODRIuPbT", "d~IuPbTxFLtXAHVOPxOD`HVOPxODSQ-FLtXESvOdq4uLU^9", "KFLtX#SvOd$HVOPxOD SvOd02IuPbTlIuPbTN~FLtX4", "RYHVOPxODwHVOPxOD9FLtX_t>IuPbT|hIuPbTfIuPbTEIuPbT", "gFLtX(SvOdWIuPbTtSvOd0SvOd4HVOPxOD*~FLtX!kISvOdT", "it9FLtXE4SvOd1+HVOPxODiFLtXlHVOPxODWflIuPbT%l", "dSvOd)HVOPxODoIuPbT9+IuPbTSvOd^HVOPxOD<WPFLtXT#-", "rIuPbTeu9HVOPxODC)SvOd;nSvOdESvOd31BIuPbT^`JFLtXo~", "!HVOPxODzIuPbT=IuPbTd[HVOPxODuIuPbTY6FExHVOPxOD)<Z", "hFLtXUU1SvOdZrFLtX%FLtXFixO+7(5SvOdIFLtXIFLtXq", "&IuPbT<SvOd}.5+IuPbT3FLtXR:SvOd~sIuPbT#IuPbTMIuPbT";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 969;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> program = {"<HWRtemYbVNTes%VyLzibsa3NTesQLyWKPm4MPmR PmRwAK*", "dFTSHWRtemYbTLnQRtjcEaVyLzibsaXCWA9PmRULyWKPmaLvl>", "hrLnQRtjcEFPmR@CWA'LyWKPmtlNTesG5CWAf^WHWRtemYbW*", "rbVyLzibsaHINTeskLyWKPmcNTeshVyLzibsaCVyLzibsa", "9iHWRtemYb~^PmRE=LyWKPma'4LgUllPQizx+oPODTZxlgq}";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 552;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> program = {"@2VRnugkvIlo+vVRnugkvIloC/MtLQhKwcP2BcmeldH", "o4GvlYZ6CH7VWcTQCwXIGvlYZ,GvlYZByZyMbOCfqaeV", "D$GvlYZbFqVWcTQCwX&ZyMbOCfqaeGSrZTWWIbwMtLQhKwcP", "-NzewCSFyFFANQErqZEWJsLVWcTQCwX)oGSrZTWWId", ".FyFF{zIwUzWsi:NzewC7FCNapCwnaGSrZTWWIWVWcTQCwX", "PQuWwFFyFF5GvlYZt1VWcTQCwXZRGSrZTWWI3ZyMbOCfqae", "/7ZyMbOCfqae&VRnugkvIlo+GSrZTWWIvMtLQhKwcP/HauAoqZ", "LBcmel?/VWcTQCwXl'RIwUzWsihH4IwUzWsi}hVVWcTQCwXD", ">VRnugkvIlowNzewCZGvlYZmFCNapCwntQuWw8QuWw)H7", "{FCNapCwn;YNzewCuGSrZTWWI{Bcmel.NQErqZEWJs2Bcmel", "~FyFF?)MtLQhKwcP!Aoq 'VRnugkvIlof-VRnugkvIlo{J", "8NzewC|QuWwQHhGvlYZ@VRnugkvIloIGSrZTWWIuVWcTQCwX0H", "h+![HJAoqRVRnugkvIloN6<sAoqiIwUzWsibGSrZTWWI'v", "<FyFFuGSrZTWWIyBcmelvVWcTQCwXg5NzewCiBcmel", "_vFCNapCwnvjFyFFPNQErqZEWJsaFyFFTBcmel-FCNapCwn", "y~VWcTQCwXzvVWcTQCwX~NzewC@g2(Bcmel,MtLQhKwcP", ">4FyFFQVRnugkvIloiZyMbOCfqae;gvBcmelg3MtLQhKwcP6o", "4l VRnugkvIloNNQErqZEWJsMNzewCpNQErqZEWJs1", "sVRnugkvIloUFyFF^VWcTQCwXCMtLQhKwcP[MtLQhKwcPf", "JQuWwYMtLQhKwcP@%IwUzWsiUZ:QuWwwVWcTQCwXZ", "rZyMbOCfqaeUZyMbOCfqaeo9%GSrZTWWI&BcmelC-Aoq.", "4NzewC3NQErqZEWJszAoqIGSrZTWWInvjFCNapCwnIQuWw", "bBcmel%AzAoqXZyMbOCfqaefHqBcmelqHVGvlYZ#pVWcTQCwX", "YAZyMbOCfqaeqVWcTQCwX$qQuWwu:Aoq:FyFFcFCNapCwnWk", "9HEJVWcTQCwX7Aoq>LIwUzWsiVIwUzWsiZVWcTQCwXT", "b<rGvlYZcGvlYZeIwUzWsi<FyFFhiFCNapCwn?ZyMbOCfqae", "DNzewCbtNzewC{FCNapCwn|wQuWw#VRnugkvIlo/Bcmel", "ONzewCXSNzewCsNzewCNVWcTQCwXLNQErqZEWJs0MtLQhKwcP", "| NQErqZEWJsRBcmel-QFCNapCwn<)VWcTQCwXNAoqbBcmel", "^NzewC7VRnugkvIlo9cFCNapCwn^H!QuWwcFCNapCwn", "6AoqmVRnugkvIloIBcmel+}$NQErqZEWJsaFCNapCwnvH", "pBcmel>GvlYZTNzewCZVWcTQCwXnVRnugkvIloZVWcTQCwXu", "TpZyMbOCfqaeaFyFFkNQErqZEWJsCNQErqZEWJs-QuWwCQuWw", "lQGvlYZsBcmelHNzewClqHm?VWcTQCwXk(BcmeltZyMbOCfqae", "BPHNzewCXGSrZTWWIEkFCNapCwn`HT'VRnugkvIloM'", "xAoqJNQErqZEWJs&oFyFF>MtLQhKwcPyXFCNapCwn}", "=GvlYZjNzewCD`GSrZTWWIGQuWwZHtNzewCcIwUzWsi", "7^Bcmel,7 Bcmel_NzewCGSrZTWWIMVRnugkvIlo|kH", "TLdHb7c+AU7NQErqZEWJst[pBcmelV3ZyMbOCfqae?s", "5ZyMbOCfqae58H4ZyMbOCfqae VRnugkvIlojFyFF ", ";H IwUzWsi|GvlYZDGSrZTWWIXU!MtLQhKwcP{VRnugkvIlo!=", "ABcmelbH3IwUzWsicGvlYZnBcmelL&NzewC8VRnugkvIlol1~=", "hdFCNapCwnD2FyFFrMIwUzWsi?AoqPNzewCoMtLQhKwcPZH}", "7FyFFQFyFFdGSrZTWWI;FCNapCwnaGSrZTWWIkFyFFMBcmel", "wFyFF1=MtLQhKwcP5VRnugkvIloE> IwUzWsi:QuWw7ZQuWwd", "NHSNQErqZEWJsP`FyFF6NNzewC4NQErqZEWJsdFyFFiFyFFn", "nVRnugkvIloeAoqr_Bcmel#VRnugkvIloVD$[Aoq'FyFF_"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 1352;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> program = {"&IPSjbevTUCv{IPSjbevTUC#0OKPthC9~TXP VyQkqxTnjr4L", "fP2ARAIdtceuE SaaOZWTT{TXPbKPthCEVyQkqxTnjOSH=Dlbe", "nSMTastocT2SHaHARAIdtceujKsFxCVyQkqxTnjPSaaOZWTT'", ":KsFxc/sKsFxgKPthCzvSaaOZWTT6NlAKsFxK-(DNdeKsFxLn", "@DNd:7VyQkqxTnjgIPSjbevTUCuVyQkqxTnjrBe>Nl", "MSMTastocTYDNdcBDlbe@ARAIdtceuuF,qDNdQNlS", "`KPthCy SMTastocTsVyQkqxTnj^SaaOZWTTzTXP[DtNl]R", "mTXP=DNdXARAIdtceu:DlbeHG,0mxXSaaOZWTTpDNd.Dlbe 8a", "QARAIdtceunKPthC$SaaOZWTTyARAIdtceupDNd4GSaaOZWTTV", "6DlbehKsFx#TXP|SH~F1Pi/G,TXPDTXPoDlbeRSMTastocT", "<TXPqdKsFx#ySaaOZWTT:TXP*ARAIdtceu:A Nl{DNd&SH&DNd", "A+VyQkqxTnj3SVyQkqxTnj@KPthCFSHDDNdFKsFxhSaaOZWTT", "SSHeVyQkqxTnjYTXP7<NlyKPthC?*|>U'ARAIdtceud|lDlbe", "hARAIdtceuTARAIdtceuSDlbe&dtARAIdtceun]&KsFxaKPthC", "VIAXDlbe.9kDNdQSH[RwKPthCjd*@DNd*TXPRIPSjbevTUC7", "}YARAIdtceu'tNl?KPthC{1VyQkqxTnj1KPthChSMTastocTw", "$Nl4-SH<KsFxD}IPSjbevTUCF~DNdbKsFxqUVyQkqxTnj/1TH&", "&KPthC?KsFx2Nl)SH`IPSjbevTUC/DNd{pjNl7Nl2", "SARAIdtceu7VyQkqxTnjSDNd+KPthC2jIPSjbevTUC;bDlbe", "OKsFxy,Nl3cKsFxdIPSjbevTUCJfuSHhVyQkqxTnj!Dlbe", "WDlbe+#KsFx+IPSjbevTUCOVyQkqxTnjLVyQkqxTnj NlN", "/VDNd-#IPSjbevTUCxIPSjbevTUC,VyQkqxTnjBNl2NlCDNd", "8 xTXP SaaOZWTT!DNdJVyQkqxTnjf6KPthCbjSMTastocT+", "1IPSjbevTUCGTXPQVyQkqxTnjBIPSjbevTUCe$CKsFxtNlfS", "<a]KPthCvTIPSjbevTUC'IPSjbevTUCYYDlbe eKsFx", "VDlbeUARAIdtceu,IPSjbevTUC&P=4KsFx4SaaOZWTTjSH", "n:$|}]YIPSjbevTUC0SaaOZWTTZusm*[SaaOZWTT?KsFx", "IvKKsFx04SMTastocTPSaaOZWTThVyQkqxTnjOSMTastocTx", "WIPSjbevTUC)IPSjbevTUC{KPthCPIPSjbevTUC:TXP3", "iTXP|KsFx :8DlbeL[yNl)=SH?:jSHX#|*SMTastocT)c", ":DNd]VyQkqxTnjXTXPtIPSjbevTUCDBIPSjbevTUCaKsFx", "'g#DNdQTXPwLTXPQDNd!KPthCNNl*SMTastocTAKPthC%KBDNd", "GSaaOZWTTUDFLSHUKPthC2VSaaOZWTTVSMTastocT", "B(VyQkqxTnjXDNd,dSMTastocT5Nl@HCTXPU*IPSjbevTUC", " ARAIdtceu*SaaOZWTT(TXPKARAIdtceu'NlXxVyQkqxTnj}Nl", "YIPSjbevTUC?SaaOZWTT SMTastocThfDNdBODlbe", "_SH%SaaOZWTTQKsFxp9DNdSIPSjbevTUCOHSHHn;", "yf,SMTastocTaSaaOZWTT]KsFxFDlbeCKPthC0SaaOZWTT", "f>3Dlbe8NlN=xKsFxMANl|Nlv=SHGVyQkqxTnj@ARAIdtceu", "LKsFxoIPSjbevTUCK@IPSjbevTUC`TXPJSMTastocT", "tSMTastocT3SMTastocTfSaaOZWTT|5PKsFxMVyQkqxTnjONl", "~TXPvIPSjbevTUCvDlbex9SMTastocT2nVyQkqxTnj5", "{SHU`SMTastocTqDNd*KsFx`IPSjbevTUC?uIPSjbevTUCn*", "VKsFxLNlMDlbe]IPSjbevTUCFKsFxMRBSH BLSaaOZWTT"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 1183;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> program = {" UrTT:FKiOYm( VLDKpSpFZpZUKiOYm8KiOYmSTwMsIvywLCsD", "Jgy1XvZ`b.hAJYTnXVuqO?VLDKpSppGVNlzE]YZ_UrTTf'Z", "aEMsIvywLCsD;GVNlz//Z3AJYTnXVuqOiiGVNlzFMsIvywLCsD", "jZ(GVNlzjUrTTwKiOYmEMsIvywLCsDOUrTTnAJYTnXVuqO", ";UrTTcJUrTT2MsIvywLCsD3QAJYTnXVuqOpVLDKpSpXVLDKpSp", "[4'JqVLDKpSp%UrTToZy]UAJYTnXVuqODKiOYm{GVNlz%", "zVLDKpSp-UrTTZ=GVNlz%GVNlzWGVNlzDGVNlz4xZg", "f3$GVNlzSGVLDKpSpUAJYTnXVuqO_KiOYmd!GVNlz", "n>=Z+]GVNlz)WGVNlz GVNlzsMsIvywLCsDD0GVNlz&UrTT", "AGVNlzo-AJYTnXVuqO/MsIvywLCsDNMsIvywLCsD>VLDKpSp", "G^GVNlz+UrTT2GVNlz6<GVNlzPGVNlzQZqU<Z=AJYTnXVuqO"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 343;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> program = {";HGQWWV ZG9CP@WdeqHGQWWV8CP^SaPBXBnBm}Bsvv7gZAZx8";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 832;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> program = {"gEAq9NbbZjfuNp.,NYrvleN3KZcRJAyWrsBQDXem0QDXem6", "pfZQrUCajkKZcRJAyWrs)C$oEAqHq@KMIMlUGZfCM54VHax", " KKsqi]YrvleCKFzLx'GYP]DEAq4KZcRJAyWrsHnApHJxYrvle", "{QDXem.EAq@XxGYBKFzLxbMIMlUGZfCMOKZcRJAyWrsAZQrUCa", "MKFzLx7KZcRJAyWrsHEAq!ApHJ:SAeeKZcRJAyWrs;GKFzLx", "t^fEAqv%kKZcRJAyWrs'MIMlUGZfCMzK/VHax@z;jyIKtVHax", "H#WEAqYx{oKoVHax$KUSAe!KFzLxWKZcRJAyWrsW~Yrvle", "HK+KFzLx6SAeHlSAe5GY(KZcRJAyWrsMIMlUGZfCMQDXem", "TNbbZjfuNtQDXemQApHJkKZcRJAyWrsqFEAqcApHJ{SAe", "RZQrUCaYNR>QDXemTFYrvleQVHax,EAq7ZQrUCa=EAqh-KFzLx", "lNbbZjfuNQMIMlUGZfCM&YrvleGApHJsEAqU6`KlQDXemY", "%MIMlUGZfCM7ZQrUCa NbbZjfuNl[r0/YrvledEAqYZQrUCa", "XVHaxM{|_ZQrUCai~wZVHaxg|KZcRJAyWrsjK.NbbZjfuN;", "xNbbZjfuNsMIMlUGZfCMZSAe8YrvlemMIMlUGZfCM{YrvlecGY", "U&NbbZjfuNxKZcRJAyWrsNKZcRJAyWrs!_ ZQrUCa", "w2YrvlesPKFzLx#EAqPGYYK>yVHaxM2[KZcRJAyWrsCrQDXem", "DK+SAe&VHax.K&spNbbZjfuN!NbbZjfuN[NbbZjfuN", "WZQrUCa;QDXem(ApHJA iEAq1EAqtKKFzLxMKZcRJAyWrs;c", "s_QDXem|NbbZjfuN_EAq2VHax]VHaxK0xGYD}KZcRJAyWrs", "<KFzLx>NbbZjfuN}WKFzLx:MIMlUGZfCM@KFzLxWNbbZjfuNe", "!JMIMlUGZfCMqhZQrUCa KZcRJAyWrs0VHaxdMIMlUGZfCM", "YEVHaxiKFzLxHeEAqJ>SAe~EAqkKZcRJAyWrsUKFzLx})bApHJ", "liNbbZjfuNZMIMlUGZfCMnXVHaxnMIMlUGZfCM|8QDXem0&YGY", "rEAq<NbbZjfuNBFApHJLK*wYrvle9ApHJ0MIMlUGZfCM1", "~NbbZjfuNyEAqt!wNbbZjfuN1MIMlUGZfCM+$SAe6ZQrUCa", "pKWMIMlUGZfCMWGY9cmApHJcK<KFzLx9VHax1PVHaxw,KFzLx"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 682;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> program = {"NYHv/YHvDNMTmusWQJ'YHvU-TmusWQJ5JZIwILPtWX=N0dcYHv", "sTmusWQJ/YHvlJZIwILPtW&JZIwILPtW`HFBBDiUqrL", "OTmusWQJVTmusWQJ]N&JZIwILPtWUTmusWQJ`JZIwILPtW", "35HFBBDiUqr>X`HFBBDiUqr&YHvd@bU TmusWQJ!_YHv", "HFYHv]NeTmusWQJFNRTmusWQJ(kN_/YHv{YHvOYHv", "WlN,N8HFBBDiUqryHFBBDiUqr#HFBBDiUqrxHFBBDiUqr", "itvHFBBDiUqrjJZIwILPtWZJZIwILPtW%NKYHvcHFBBDiUqr{", "MHFBBDiUqrG}JZIwILPtWJJZIwILPtWFYHvoN TmusWQJlNi"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> program = {"yMLWMrtn9YvRkehvUqjYSAxQt>MLWMrtn UqjYSAxQtaYvRkeh", "7YvRkehUQFnfdNkcLkMLWMrtnA)8YvRkehlMLWMrtn", "eUqjYSAxQtuYvRkeh82MLWMrtnyMLWMrtnPUqjYSAxQtJ", "xEhYvRkehCMLWMrtn0YvRkeh7UqjYSAxQt/UqjYSAxQtc[ N#", "/MLWMrtn>.e}UqjYSAxQt}FnfdNkcLJ6YvRkeh%1BMLWMrtny", "_NFnfdNkcLZMLWMrtnrFnfdNkcLqUqjYSAxQtC9EUqjYSAxQt", "BYvRkehamFnfdNkcL6+KLCUqjYSAxQt>eUqjYSAxQt4", "yFnfdNkcLVYvRkeh+FnfdNkcLHMLWMrtnYMLWMrtnXYvRkehY", "Mm^nFnfdNkcLfUqjYSAxQtA.E_oMLWMrtn^!FnfdNkcLs", "tUqjYSAxQtbUqjYSAxQt*;^UqjYSAxQtYvRkeh|YvRkeh%5", ":+*UqjYSAxQt$0QMLWMrtnRUqjYSAxQtTYvRkehVMLWMrtnL", "4MLWMrtn%UqjYSAxQt>!MLWMrtnXUqjYSAxQt6YvRkehz", "9UqjYSAxQtKSWYvRkeh{fUqjYSAxQt9rDUqjYSAxQtlk";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 969;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> program = {"Fr#FtVsKEYIv3YqmAkdXep`YjShtXAHKIjFx!PdHyV", "KAHKIjFx6IFOUdbI4[FkBAszuaF[AHKIjFx4CwdsAJ}F&PFFER";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 908;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> program = {"LACAfcXZFrJkCRYhjWZ.GOHITACAfcX(OfLbqj-p6JkCRYhjWZ", "+FtWlS?=FtWl`-ACAfcXwOHbOH^aOH}DJkCRYhjWZiFtWlq{?", ")ACAfcX4OfLbqjwOHkJkCRYhjWZ%OHnFtWl;3FtWlEF", "{0FtWlQOOfLbqj+nFtWl[FtWlbOH0 OfLbqjaF*JDSbUKrVi>", "~F `OH%ACAfcXHACAfcX SbUKrVcOfLbqj>ACAfcXrzACAfcX", "7nFtWluFIP'OfLbqj'ACAfcXD!OHLACAfcXaJkCRYhjWZ^jF", "HOH:HOfLbqj PnFtWl)OHv,OH`SbUKrVtOH{{?ISbUKrV", "6FtWl)FtWl JkCRYhjWZf'FtWl9HOHwFtWl|FtWljFtWlTFtWl", "AFtWlWI M7FKOH$?SbUKrVTFtWlBSbUKrVDSbUKrV>FtWl+pP|", "TJkCRYhjWZsOH/Gi`P;FtWlQF*OH7FtWl0PSbUKrVcc*"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 287;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> program = {"(Nhiw(SdL~kSdLOSdL>Nhiw<ZWnEukhm?,ZWnEukhmlCd.Ta", "[THZWnEukhm:SdLVBZWnEukhmOTbTHSdLlTTANhiw=B[Cd", ">TWXNhiwkNhiw@(ZWnEukhm5TwNhiw`Cd}ZWnEukhmCNhiwJCd";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 781;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> program = {"?NHWYCiu/XFdlWkK~DcZXJmAW}SmAWIHJkKkKZBxEXEeAAXvfw";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 1243;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> program = {"n?LutpTe;COapma3.GuyPkHxCt#2RhQDtIrZsGHJduFp,!", "3JoFf;OapmagUlEAHCLutpTeTUlEAHHGHJduFprJoFfnLutpTe", "ZN[qCGHJduFpfLutpTeWGHJduFp4+m6GuyPkHxCtI$", "x.LutpTe)GHJduFp}RhQDtIr3UlEAH8OapmaFLutpTe&UlEAHa";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> program = {"/HpkaXyxQ~HpkaXyaOE dO7HpkaXyy^9THpkaXywHpkaXy", "vGO(SZHQyOeiGpw1'HpkaXy HpkaXy}ZHQyOeiGpw_!$";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 1068;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> program = {"jXz7KKZvOR)XzDJClkDQQiSUS}FJYZwlYJClkDQQiJ@P";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 694;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> program = {"PRDIivLkb8JmluM#FTzBzsYBbJQxWPTTnAiTLMYuFc", " 5Jdyej;1FTzBzs;WPTTn2=X)m[TLMYuFccRDIivLkbDX", "vOgOlxNmfm<XRzDXaESRisCU2BgFgoTLMYuFc-NcbeNcbJBgF", "FSrxxULqvC/Jmlu;674'NcbuJmluvOgOlxNmfmpXZJ{BgF}", "{FDXaESRisC4/WPTTnd$.FTzBzsZWPTTn^#WPTTnna", "lFTzBzsZNOgOlxNmfm1ADHSHQvTBOgOlxNmfm>TLMYuFc0BbJQ", "<+WPTTnYNcbR_@Ncb! DBbJQfFTzBzs5BbJQ.lC OgOlxNmfmL", "RXv~XqFTzBzsDJdyejmBbJQoULULvZXQUl@9XQX*6dJmlu7Ncb", "rJmlu];BgF1SrxxULqvC^oMRDIivLkbNRDIivLkbgDXaESRisC", "5ADHSHQvT3dX@ULULvZXQUl|]1BbJQpOgOlxNmfmjFTzBzs", "ZBgFbJmlu4BgFkTLMYuFc{ADHSHQvTZDXaESRisC;Jdyejml", "H22|SrxxULqvC7BbJQ|ULULvZXQUlNOgOlxNmfm9FTzBzs", ":*FTzBzsWDXaESRisCOFTzBzs Ncb3BgFoJdyej)ULULvZXQUl", "0GX;Jmlu=SrxxULqvCD!JmluRBbJQ]wBgFvWPTTn?TLMYuFc`", "JNcbrWPTTnXBbJQ6SrxxULqvC-TLMYuFc:ULULvZXQUl/BgF", "C&RDIivLkb&fWPTTn0]SrxxULqvC;FADHSHQvT5Ncb+FTzBzs", "/8?z^DXaESRisC(XGWPTTn_aSrxxULqvC/?TLMYuFc%FTzBzs", "V4TLMYuFcjRDIivLkbvFTzBzs?FTzBzsAJmlu!KmSrxxULqvC", "fRDIivLkbJULULvZXQUlqOgOlxNmfm;JmluE&}}NRDIivLkb", "[Y3JdyejRFTzBzs=Jdyej )SrxxULqvCpJdyejA1FTzBzstjX=", ">Ncb{(AXAAADHSHQvTy]Jmlu^?.JdyejT,NcblV=BbJQ6NcbH", "rWPTTnMBbJQ{FTzBzsJV FTzBzsD5iQ_Jmlu.DXaESRisCxt", "M_Ncb6DXaESRisCBADHSHQvT,WPTTnM4FTzBzs4JRDIivLkb", "%TLMYuFc]Jdyej_BTLMYuFcO%(XkULULvZXQUlQOgOlxNmfmI9", "tFTzBzsIWPTTn(RDIivLkb~OgOlxNmfmTLMYuFcmDXaESRisC", "ZRDIivLkbghTLMYuFco [ULULvZXQUlRrBDXaESRisCYJdyejv", "$TLMYuFccRDIivLkb|ADHSHQvT0#6Jdyej'OgOlxNmfmK", "3DXaESRisCGNcbBbJQ-Jdyej#WPTTnnDXaESRisC", "AADHSHQvTdw>DXaESRisCS7!O]BgF,OOgOlxNmfm~DXaESRisC", "FSrxxULqvC?BbJQcTLMYuFcRDIivLkb#SrxxULqvCcTLMYuFc", "}Jmlu&FTzBzs+OgOlxNmfmIULULvZXQUlaRBbJQ4Ncb/XX6", "|BgF:ULULvZXQUl!fQxwADHSHQvTjBgF. WPTTn4NcbOFTzBzs", "5ADHSHQvTJ3TLMYuFcZ0RDIivLkbkJdyej]QOgOlxNmfm", "iBgFVNcbu'ADHSHQvTYTLMYuFc<{RDIivLkbvBbJQR", "D.XvBbJQs5ADHSHQvT;BbJQ:BbJQESrxxULqvC:$X"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 989;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> program = {"CLVMLzDBomUMHegxmk(MHegxmk`^FARmCTMjDH3Ag?", "YNtkCiGcaQH*NtknbR1QgeMcBxYafGcaQHEZFARmCTMjDHs", "kQgeMcBxYa2AgO<CLVMLzDBomY.~TDW)TDWT<RJBqr3^fGcaQH", "VTDWUPakxHQiM}NtkUAgBYP;^ACAgPAcNtk(YPNNzYErteQ8Ag";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 604;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> program = {"O1%LIx9KNocbRDJhIaB[BvRSCGopgKNocbRDJHKNocbRDJ8Ua", "7KNocbRDJ2LIKVtVqFtN'HLIK_Ua?VtVqFtNGVtVqFtN]IaB", "BhKVWIMgCjVWIMgC!MYXWpfJQf%IaB5kBvRSCGop?zUa", " UanKNocbRDJI{RWpfJQfdPjWVWIMgC4PjQ?BvRSCGop", "OMYiVWIMgCbKNocbRDJunUaXvVWIMgCUgPj*gjBvRSCGop", "H(VWIMgCzVWIMgC3zUazVWIMgCWBvRSCGopMIaB]dpVWIMgC", "KNocbRDJ9BvRSCGop JJsyayFkdMYAM.KNocbRDJ^KNocbRDJ", "ILIwhIaB<*LJJsyayFk>BvRSCGopUKNocbRDJB*Ua ;Ua", "huD6PjoVWIMgC!JJsyayFk(VWIMgC)IaBYegEUaRVWIMgC", " VtVqFtNbPBvRSCGopsKNocbRDJhBvRSCGoprMYXaJPj=HDLI", "%<JJsyayFk2MYGWpfJQfpKNocbRDJCLIZ#LI[MYe7KNocbRDJ", "]VWIMgCx6PWpfJQf>IaBJv%+nBvRSCGopCmJJsyayFk", ",IaBx8VWIMgC9BvRSCGop:BvRSCGop;KNocbRDJ.VtVqFtN'Pj", "1FMY;4JJsyayFkLI,MY5,Ua-MYjKNocbRDJ(/BvRSCGop}MLI", "&LIZIaBQUa&IaBcIaB;MYC84JJsyayFk+LIozBvRSCGopi ", "NUa9)IaBTAUaUPj'LInVWIMgC4UaCMYYBvRSCGopWBvRSCGop", "1KNocbRDJdMY:JJsyayFk3KNocbRDJbIaBN#)crIaB$MYELMY", ")WpfJQf&V!LIhLIXJJsyayFkRWpfJQfAIaB4BvRSCGopTUa{Xy", "VaVtVqFtN2Pj[KNocbRDJwUaYIaB+*6LIHA.+BvRSCGop$Y", "f;-6KBPjaIaBcJJsyayFk,mLIPLIDZJJsyayFksIaBdi9NMY.X", "s5IaB4IaB*JJsyayFk+X}BvRSCGopAMYT2IaB,JJsyayFk", "jLI+LILUa<MY<JJsyayFkJKNocbRDJ,e?Pj[(LI}mBvRSCGopH";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 1070;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> program = {"oQKiMpqtepY/__GKiMpqtepYi3NJKiMpqtepY5KiMpqtepYKb", "'KiMpqtepYaKiMpqtepY*5CKiMpqtepYkKiMpqtepY", "9KiMpqtepY(P=KiMpqtepYguKiMpqtepY5KiMpqtepY", "OKiMpqtepY=uKiMpqtepYeKiMpqtepYGKiMpqtepYB", "pKiMpqtepY#YdKiMpqtepYzKiMpqtepY>xSKiMpqtepY", "neKiMpqtepY`>KiMpqtepYDKiMpqtepYgKiMpqtepYRrF2X", "]KiMpqtepYtKiMpqtepY1CKiMpqtepYOKiMpqtepY", "4WxZ%KiMpqtepY5kAKiMpqtepY7KiMpqtepY4bKiMpqtepY", "ERKiMpqtepY KiMpqtepYrIKiMpqtepY*@6~Fy,-KiMpqtepY", "F(:KiMpqtepYiKiMpqtepY0O|LEKiMpqtepY`3XJ$", "JKiMpqtepY!FKiMpqtepYD>KiMpqtepYO8KiMpqtepY"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 279;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> program = {"uUhxJUhUUhfRymdb'Rymdb{UhAvpUhERymdbFORymdbmDMwfQ", "QMwfQ%8F6Uh?MwfQ GXDJpiUh% MwfQ7MwfQT/%UhhXDJ6MwfQ", "nUh@A Uh%ORymdbe|Uh1(XDJtkMwfQbNMwfQFUhgMwfQi__XDJ", "mMwfQfzUhZMwfQwRymdb^hMwfQ_*MwfQeUhGXDJL<DMwfQ", "<hUhzMwfQ(uXDJRUh9Rymdb.!-#5oXDJ2LMwfQAXDJM__", "vMwfQ=MwfQWlUhYMwfQbXDJ~IMwfQ[mMwfQJe0RymdbmW", "J#RymdbOUhH98UhBXDJ}MwfQ1UhxUh+UhbMwfQhUhRUh<_Uh", "uXDJ{MwfQGRymdbc_UhGUhQ3=MwfQ~RymdbEKoMwfQ~MwfQ", " MwfQRymdbd@XDJXK5MwfQd#MwfQd#|Vb[RymdbiXDJ3XDJ", "GMwfQg~XDJqTUh!UhNRymdbEXDJVV>XDJrMwfQ%fMwfQjUh", "q}{9BMwfQk26Uhl15rXDJJNUh,%qMwfQ8Rymdb9Rymdb(t", "9>MwfQ)G%XDJsUh!XDJkUh}Uh+UhhRymdb'MwfQpUh:CXDJ", "yWMwfQdUh&UhNXUh2SRymdb`UhPQXDJ2Rymdb$XDJ*XDJ=MwfQ", "1XDJMgXDJjUh0XDJBCLUhFRymdbDCXDJ?$UhPDRymdbJG", "tMwfQpXDJuRymdbkRymdbNJugRymdbt_MwfQ.`(Rymdb3BUh#k", "|XDJ,XRymdbUUh4vXDJ=XDJ3RymdbhXDJSMUhvXDJxRymdbbg", "lRymdb2)MwfQGRymdbeUh~XDJk1eUhDXDJuXDJcXDJfRymdb", "yRymdb#`Uh^XDJWUhrMwfQhXDJ3+MwfQf*RymdbynRymdb", "ZXDJCIXDJ1Rymdb5XDJT.>h;RymdbdRymdb$TfMwfQ6qUhu", "fXDJLRymdb'Rymdb) MwfQxXDJ}XXDJEXDJ Uh6UhKTUhVXDJ~";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 864;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> program = {"ooDaSYs#1p_VuNWvI$DENWvIb|FAhuKsDd-]CSDLDEVa", "PNWvI~LMpGObQr~QryVYwPkqpBkL FAhuKsDdNVYwPkqpBkLm", "8LwFAhuKsDdMCD>rD(MIYSCWb6CSDLDEVa0;D-MpGObL", "1GFUKBgdVKBgdlD{&PqerLlBCtuFFAhuKsDdIVYwPkqpBkL", "@Qr4ZNWvI3X)FAhuKsDdcFAhuKsDd MIYSCWbhSYs}MpGObEAC", "cMpGObICtFAhuKsDd3SYslC-AKBgd2Ci5QrW*QrfKBgdbZ", "lCadPqerLlBC$PqerLlBC.KBgdtFAhuKsDd}KBgd MpGOb";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 1170;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> program = {"#KpapKpaWMTT*Fedzo4svMTT=-#Fedzo)lAugEGKpa&Fedzo:", "e;Aug~MTT{,dMTT}jFedzoX+FedzoG_FedzoTKpa}Fedzo";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 955;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> program = {"pJvITJBccNkKcRxxBccNkKcRxuWjBccNkKcRx?PiCOKoSwO", "xhNQo[WQcVkKNlwQ'GBccNkKcRxeUkcBTNqud{ZyiUkcBTNqud", "xQ%{NQoaPbkV?QOUkcBTNqudDWLUePiCOKoSwnJvITFW^JvIT", "pxJvITuPbkVqfBccNkKcRx~UkcBTNqud%FTxwimbRdNQo0", "HUkcBTNqud4UkcBTNqudkJvITDW`Q/tup<@VkKNlyW>", "X|VJvIT;HPiCOKoSw=1lNQonBccNkKcRxSPbkVAFTxwimbRg*4", "Y !NQowVkKNlFJvITV /VkKNlqJvIT ZysWwtQMVkKNl3PbkV", "zTFTxwimbR Q2ZyIeJvIT=W.NQoLCPbkVXW;Q8PiCOKoSw", "2UkcBTNqudp6BccNkKcRx]ZyIZyrZyaVS#SJvITXJvITwNQoN~", "y/NQo,bFTxwimbRXfdFTxwimbR;VkKNlUkcBTNqud0W", "9UkcBTNqude^NQo>WCQ}PiCOKoSw<uUkcBTNqudZUkcBTNqud", "FW^W#3NQo1BccNkKcRx^W@fUkcBTNqudR bNQo8PbkV", ",cNQoN.wTPiCOKoSw,JvITUZyhoUkcBTNqudsIFTxwimbR#^", "<ePbkVhlGBccNkKcRxeNQo/FTxwimbR!PiCOKoSwGFTxwimbR(", "rPiCOKoSwAPbkV<UkcBTNqud{]PiCOKoSw.A&BccNkKcRx2Q", "@NQolQUZy~JvITJpNQoAJvITEVkKNl57UkcBTNqud.},PbkV#W", "cFTxwimbRDFTxwimbR|QQSNFTxwimbR1PbkV>ZyOPbkV7WcNQo", "wRJvITxjiZyuQj_aWGJvITpuWoW&LW^BccNkKcRxOUkcBTNqud", ".-PbkV;FTxwimbRwFTxwimbR?BccNkKcRxhVkKNlNUkcBTNqud", "qJvITCBccNkKcRx+NQoSUkcBTNqud1VkKNl%7eFTxwimbR", "oZylkQx4PiCOKoSwFFTxwimbR~l(ZyUNQosPbkV~FTxwimbR", "1JvIT BUkcBTNqud0UkcBTNqudmNQoMMW#WMZyGJvIT", "*wZy{VkKNlo<VkKNlNQoPPiCOKoSwL4>xZykJvITES", "=PiCOKoSw:E?dBccNkKcRxj`JvIT#8Zy|Oc2$6JvIT|05JvIT", " Q^W2UkcBTNqud Qy QVW%sNQo[~PiCOKoSwqUkcBTNqudiNQo", "8$}NQoeWTBccNkKcRxv{=BccNkKcRxIW7NQoYW-PiCOKoSw<"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 590;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> program = {"T5&YWMXwuYWMXw5YWMXwNwYWMXwl{YWMXw:YWMXwxRYWMXw", "AYWMXwaYWMXwqYWMXw6YWMXw;a{YWMXwBYWMXw|UYWMXw", "-sYWMXw)+YWMXw YWMXw?)YWMXw+FYWMXwiYWMXwU7YWMXw", "#YWMXw]dYWMXw YWMXw5s_YWMXwv?0:YWMXwB9*^_YWMXwlGn", " ~YWMXwKYWMXwYf'VYWMXwFBsYWMXwZdYWMXw,YWMXwTYWMXw", "iYWMXwlYWMXwB9YWMXweRYWMXwbYWMXw&-YWMXw/YWMXw", "DuYWMXwsYWMXw(YWMXw{-YWMXweYWMXwmCYWMXw.eYWMXwA", "7!YWMXwpYWMXw FSYWMXwGYWMXwOO<YWMXwLYWMXw9YWMXw", "UiYWMXwpYWMXw?YWMXweYWMXw: 4sYWMXwLYWMXw/hYWMXw", "CXYWMXwf8YWMXw53|xW>]YWMXw'YWMXw [YWMXwk7tMYWMXw,n", "WYWMXwvr7NYWMXwV.YWMXw@YWMXw!YWMXwHYWMXwLYWMXw=", "}YWMXwXYWMXwkpLYWMXw;YWMXwDYWMXw,Z,wYWMXwyCg[", "t8AVYWMXwzYWMXw)YWMXw|YWMXw9YWMXwSYWMXwn]YWMXw/", "&YWMXwLcan|LYWMXw8YWMXwkYWMXw:$9YWMXwP^YWMXw4", "y'YWMXwj>YWMXwX.f`{BYWMXwDCYWMXw9YWMXw^YWMXw7YWMXw", "DhkYWMXwiHJ[YWMXw;YWMXwMYWMXwjZY{X#uYWMXw=YWMXwF", "zYWMXwlYWMXw9}YWMXwpm(YWMXwiQpYWMXw=YWMXwiYWMXw", "zxYWMXw$=zXYWMXwMYWMXwuYWMXw I(YWMXw';YWMXwoYWMXwo", "{fYWMXwNYWMXw`|YWMXwtYWMXw{YWMXw$YWMXw&YWMXw", "84YWMXwj^YWMXw72YWMXw?l4YWMXw0YWMXwFYWMXwm.iYWMXw4", "-YWMXw0YWMXwoTYWMXwBYWMXw$;YWMXwgYWMXw`&YWMXwqv", "OYWMXw'YWMXwkYWMXwMi%YWMXw YWMXwLYWMXwbnc=YWMXw#", "-YWMXw<YWMXw]2@ YWMXw8(YWMXwMYWMXwjYWMXw-<Pe pUi", "8YWMXw]SYWMXwZYWMXwf*YWMXwD,XYWMXwcQYWMXw3YWMXw", "pYWMXw^bYWMXwYWMXwN]SYWMXw<SYWMXwVYWMXwa*|CYWMXw", "|YWMXwkYWMXw?YWMXwY60zYWMXwzYWMXwBUY~YWMXw3cK", "Z}YWMXwaaYWMXwnYWMXw3YWMXwH@CYWMXw8gu`YWMXw=", "'YWMXwV|YWMXwAYWMXwVYWMXwUWYWMXwt}YWMXw&YYWMXw", "e4 `YWMXwPYWMXwyqTOYWMXw_MYWMXw'`0bYWMXwrYWMXw#sK", "nvYWMXwXjPI>J:0YWMXwC/[hYWMXwsYWMXw0YWMXwqQPYWMXww", "CqYWMXw>2YWMXw-YWMXw<}YWMXwYJij9YWMXw36YWMXw|", "5YWMXwPzYWMXwpYWMXwWYWMXwwVHYWMXw.5kYWMXwf37", "GmMYWMXwwYWMXwZBXXcYWMXwXYWMXwy<YWMXwlYWMXw56YWMXw", "wYWMXw8YWMXwR5YWMXwKYWMXwn,YWMXwNYWMXwT_gYWMXwl7", "|YWMXw?YWMXw(}dS(FMkYWMXw&YWMXwk|YWMXw5.$YWMXw", "BqYWMXwbYWMXw=naYWMXwnYWMXw-YWMXw:5YWMXw YWMXw", " 6}YWMXwsYWMXwxYWMXw 6VYWMXw,Oy5YWMXwx1YWMXw+YWMXw", "a>YWMXw%bYWMXwz/YWMXwNYWMXwUMYWMXwae,)YWMXwIYWMXw}";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 1068;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> program = {"_MJOSSDNrgTpaJOSCDNrgTpmDNrgTpWKZntAPq[DNrgTp", "a?gKZntAPqcdKZntAPqVHJOSjMKZntAPq|DNrgTpUDNrgTp", "XqKZntAPqhJOS 3|KZntAPq<Gd~6GdZ$7 DNrgTpIKZntAPq", "BDNrgTp'DNrgTpFQDNrgTp:qDNrgTp#DNrgTpcuJOStGd", "A,KZntAPqsKZntAPqEJOS>EGdPBJOS|JOSYjDNrgTp+GdC", "rD8[KZntAPq|tDNrgTp`KZntAPqw@dGd>YeGdMJOS;iJOS[OC5", "NJOS|JOSl JOS}'KZntAPq yDNrgTptJOS|JOSh8DNrgTp:t";
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 488;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> program = {"C = Cda; CdC=CdCd+2*Cd;"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> program = {"_MyInt3 = M_3_yInt", "MyIntMy_________________________Int"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> program = {"forAAA", "qsASsqweetret"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> program = {"wHile"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
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
    vector<string> program = {"youFailMiserably"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
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
    vector<string> program = {"AAAAA = Aaaaa;", "Aaaaa += Aaaaa;", "Aaaaa -= blah;"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> program = {"iAB"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> program = {"MyInt = YrInt; if(MyInt==2*That) MyInt++;", "while(MyInt>3){", " MyDouble = MySwhort+MyLong;", "}", "return MyDouble;", "end"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> program = {"aBas = cBas"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> program = {"aAaAa"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
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
    vector<string> program = {"youAreScrewed"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> program = {"Aa", "A", "AA", "AAA", "bAa"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> program = {"__FGJHGFJH=dsakfjskjdfh", "aksjdhfk__ahskfd_99=-dsafkjsdlf(_)(_", "shjsjsghsghdhjd__", "sdkjfhksjdhfk()()()()+_+_+LKJ:LKJ:sadfs___SAJKJ_11"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> program = {"aBc"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
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
    vector<string> program = {"aAa"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> program = {"Abc]Ax"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
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
    vector<string> program = {"A Abc Abc Abc"};
    Smooshing* pObj = new Smooshing();
    clock_t start = clock();
    int result = pObj->savings(program);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=8081&pm=4847
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <queue>
using namespace std;
 
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ii;
#define rev(A) reverse((A).begin(), (A).end())
#define s(A) sort((A).begin(), (A).end())
#define mp make_pair
 
//----------------------------
 
map<string,pair<int,int> > id;
set<string> used;
class Smooshing {
  public:
  int savings(vector <string> a) {
    for (int i = 0; i < a.si; i++) {
      for (int j = 0; j < a[i].si; j++) {
        if (a[i][j] >= 'a' && a[i][j] <= 'z') continue;
        if (a[i][j] >= 'A' && a[i][j] <= 'Z') continue;
        a[i][j] = ' ';
      }
      stringstream S(a[i]);
      string x;
      int n = 0;
      while (S >> x) {
        if (x[0] >= 'A' && x[0] <= 'Z') {
          if (!id.count(x)) {
            id[x] = make_pair(-1, 1000*i + n);
          } else {
            id[x].first--;
          }
        }
        n++;
      }
    }
    vector<pair<pair<int,int>, string> > V;
    for (map<string,pair<int,int> >::iterator i = id.begin(); i != id.end(); ++i) V.push_back(mp(i->second, i->first));
    s(V);
    int save = 0;
    for (int i = 0; i < V.si; i++) {
      string curr;
      int j = 0;
      while (1) {
        curr += V[i].second[j];
        j++;
        if (j == V[i].second.si) j = 0;
        if (used.find(curr) == used.end()) {
          used.insert(curr);
          int each = V[i].second.si - curr.si;
          save += each * -V[i].first.first;
          break;
        }
      }
    }
    return save;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/
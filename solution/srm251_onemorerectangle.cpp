/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4590
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

class OneMoreRectangle {
public:
    int maxCover(vector<string> rectangles, int qa, int qb);
};

int OneMoreRectangle::maxCover(vector<string> rectangles, int qa, int qb) {
    int ret;
    return ret;
}


int test0() {
    vector<string> rectangles = {"1 1 2 2", "2 2 3 3", "3 3 4 4"};
    int qa = 2;
    int qb = 2;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> rectangles = {"1 1 5 5", "1 1 4 2", "1 1 2 4", "2 3 5 5"};
    int qa = 3;
    int qb = 3;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"1 1 4 2", "1 2 2 5", "4 1 5 4", "2 4 5 5"};
    int qa = 3;
    int qb = 3;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> rectangles = {"1 1 4 2", "1 2 2 5", "4 1 5 4", "2 4 5 5"};
    int qa = 4;
    int qb = 4;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> rectangles = {"1 4 6573 345", "23 4366 23545 366783", "54 7895 2565 23567", "3456 345 475457 45767654", "-234 -654885 0 0", "-32654 -43256 -34 -5463", "-10000 -10000 10000 10000"};
    int qa = 100000;
    int qb = 100000;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> rectangles = {};
    int qa = 1;
    int qb = 1;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> rectangles = {"0 0 10 4"};
    int qa = 4;
    int qb = 10;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> rectangles = {"-94895901 87876155 65067637 88426665", "-54007326 -56395732 29209009 -31032297", "37622392 -30063219 95295367 93117486", "-78539315 -96207749 -487902 95639960", "-27897652 40884675 44562157 92258547", "-2977968 5535253 80180451 87614825", "-58049575 -50021476 87031826 52182126", "15665794 18362939 39585139 88207943", "-75595792 2012450 63981712 43533617", "-49933093 -21627201 69430747 20434773", "-89191307 -34192774 14626357 40546894", "-22627859 -32826365 63145291 3534280", "-33585457 -59411379 -13034664 20360086", "-95255456 16355949 -23150319 69492682", "-12330665 -15358849 51216486 75272412", "-18074133 -87922460 19999496 -71297797", "11416701 -66265464 51107882 87294465", "-23512149 -51276566 31495912 42983657", "-67812764 -62764723 -3265267 60816687", "-94313217 -63968403 -53383231 -21868584", "-29504555 -36055130 -20880256 79799585", "-79965475 -94013765 -17258941 51213940", "3076210 -66877130 28435202 -56180355", "-40125635 -30257264 4305227 72110998", "-55038954 -61019601 -7973193 -39636444", "-70608525 21820377 58395756 57602400", "19086094 -14503316 42348562 11165348", "-51304200 16378808 12164979 47326951", "-13903559 -6995434 53331787 45923670", "-36829529 60660648 -2564331 88305992", "-90419058 -11003077 70958872 62775420", "-62767685 -28929169 60667625 74171784"};
    int qa = 97774905;
    int qb = 43896204;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> rectangles = {"36962959 -55322027 47830463 81249280", "-48977284 -38207594 20886208 35227682", "53541461 -81171818 71154002 -57035175", "-5646584 -85319089 95458810 51919028", "-55562124 -41986758 -24393016 53319460", "-45537132 -74088788 -34789663 38892032", "-50550668 -52658001 29078519 -45047298", "-4104786 -20144803 54915918 -4647196", "-32219299 61747887 9032317 91262833", "-3435049 -16058757 1904712 39614084", "-57818098 -35689845 58734227 63322914", "-12389530 46938224 34467390 75236359", "-72526527 -51725004 45092160 77862440", "-14718825 -53022903 4457359 -25403551", "-63259372 10143560 23779191 52250767", "-97370212 -55947684 15272171 70640371", "-51910346 -60511383 -49937192 -12582348", "23292573 -29776309 94817856 -28537781", "14745255 -62794406 42479404 62473040", "-76292522 -90715279 19957457 68160152", "-41054725 -49254146 58966341 -27175283", "-93870109 -6685840 98907739 28038402", "74479194 -15616805 85348001 11425277", "-55445841 -77811701 89349098 56759786", "96284188 34883528 98152227 91938532", "-80991330 -92308732 34340883 -68400925", "-89508171 607633 -77787474 50684919", "-39730144 -3676332 93120237 25350463", "11510459 -35428155 68435906 23160879", "-63019878 -91058998 67854194 82263700", "-75069494 -61423940 -51445780 23499962", "-62831635 -78985935 -58640406 -64635749", "-50163816 -53761342 12775692 -26449415"};
    int qa = 43445048;
    int qb = 38450149;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> rectangles = {"-16471747 -89201949 6930205 -11918768", "-50374414 28007359 77140675 72773644", "-40271908 -29653355 56096644 19192295", "-45218109 19792417 -29987546 41723607", "-77669886 -49008616 53887971 75255206", "-95605555 -31399308 96063449 55488535", "-58024062 -36487868 -12071019 69893283", "-93748653 32782196 -56954550 37379885", "-70637895 38733507 -64441512 91826040", "-88286047 -71468176 -25015739 -57283543", "4576309 -71289425 85350917 98613600", "72135262 -84716022 84790365 87413192", "-37997007 -48460694 72912158 15558873", "-80601123 1052289 -33118176 18936326", "-32712330 -93077495 96006753 -53372207", "-72950215 -39754503 -376675 -211728", "-44237151 26501203 81007112 91471863", "-7222676 34456355 29450501 99301261", "-64778640 -42297423 -30820905 72594318", "76440954 -14043478 77979473 7366653", "31402574 75591232 81514479 82196568", "53438299 -42398866 53833544 20001071", "42966990 -41864076 97901741 74895126", "24433766 -38550657 71824487 49852807", "-18413861 -77963445 -8181229 77487697", "-53379845 54366625 79956728 57186520", "-56937361 -92943624 87795164 -75628431", "-60164605 -57202779 95900923 -38078436", "-72318775 72755199 55426626 97608204", "-45661407 21424792 49377662 31397672", "-69637650 -90835721 -57945314 -25448713", "-99578848 -79979349 -7269696 -28311704", "-87550463 1339883 85156505 75933243", "-89959543 -25054639 64903353 1382034", "-74072454 -52450663 16246377 50750002", "28165282 -85902523 70182192 -77812240", "82479267 41133441 82722129 55708366", "-63575272 -80641150 7674861 20068554", "-95307396 52391564 -424690 66412776", "122609 -98540626 82875272 -76672732", "-97347186 -42758015 62824555 73707237", "-95475253 83514595 -75672258 88635936", "-29768593 -65280475 -10920491 83854549"};
    int qa = 56832343;
    int qb = 92772413;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> rectangles = {"-72358936 15117673 64697633 84369424", "-66634781 -20871811 48690109 87049297", "-93644082 -21966559 5379094 33548581", "-74758070 -10168063 73271307 88059795", "23004543 -72491774 25916319 80911335", "39741354 -66140487 43191746 40189458", "-96826416 -30900596 42435295 31425498", "36395261 -63793546 92066988 -59067341", "-95251531 -62119351 22853386 -45996077", "41329859 -99655753 98691438 -95265220", "-91928163 -69041604 81022953 -65378327", "-40031330 -62564387 -1166673 87015021", "-87707552 -80283353 88137079 18682348", "71263359 -97805423 98445146 -14271908", "-42257969 -68286809 18234310 11687589", "-76012671 -66904226 55013081 76238404", "-69424816 -6244668 -39924551 11121225", "-94893678 -83185609 95801680 -78212564", "71515376 -44122157 96494509 63502333", "50771548 -51083632 66722792 79097752", "-62726427 -26700967 32204399 89516270", "-45657378 -67830416 51391423 -44500750", "16413142 -58708699 60819933 96587659", "16776556 -90462665 84568287 37882955", "-65686528 17361951 -60229870 34952558", "-61552823 -18823519 47161519 89525171", "-29108387 8149553 83976614 80541723", "-69276159 55871599 19060452 64965956", "-32257969 854925 60583618 29868339", "-8345459 -47830340 83543897 9362850", "-58594672 47816020 16437088 58243482", "-56652991 18817573 53973522 39680354", "-36315736 -23402777 49127697 39252177", "27532602 25568363 82990382 43074787", "28823770 -73924212 91419501 -10922120", "73799917 -81627723 79780631 17198821", "-99808924 -9124037 -47693890 29227833", "5702759 70523748 14703853 81944255"};
    int qa = 79250628;
    int qb = 18000249;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"-91916368 -94546153 44547530 -92935849", "-96834659 -42242280 -9132018 84669389", "-24962195 -52993047 83139162 -26504578", "75392688 -80480245 82478103 91994972", "52396863 -69710919 69825543 4207352", "-93564660 -54600830 76420428 20632850", "-67607082 -44191621 -66577689 32431951", "-13098520 -73606938 69102222 19309068", "-22483276 -82109188 -14511594 71711973", "-35385781 3393251 46891494 16673235", "29438914 -57286038 62100281 -27881171", "-10801288 -87278013 -2823146 -39377712", "-98688277 33382497 -57087576 50810445", "-5822258 -87942354 60848078 -13820907", "42463751 -89973201 45324414 -74947959", "-80966184 -44123939 78575304 72319256", "74807536 -95299011 79493278 484636", "-25858868 -67026874 63097652 59993450", "-80088299 13463595 72376396 88160162", "-87806443 -45970170 -12781540 -29757555", "-23984973 25980942 -3789622 75267561", "-23161107 -28738753 4864015 55821855", "-77193047 -93153803 46159297 10656507", "-51527159 -33625091 63963473 -9468736", "-83922984 -19371435 -63700021 38709122", "-29266582 -69016116 -10152080 -15094011", "-75364106 -35217664 -3876208 39903972", "4803575 -99882017 61845287 -38780486"};
    int qa = 35182833;
    int qb = 71456691;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> rectangles = {"-50732060 -87614568 -7856288 16247070", "-72624517 -22765513 -14291051 86827213", "-61894859 -97557062 75278628 -72056414", "-35885503 40516435 -3925100 81189200", "-96047309 54404985 76510556 56734590", "48001407 -95284963 70547183 -26739900", "-24090105 12450467 53652642 55743824", "-81296288 -40754648 -69948613 61935242", "-34334470 -83269699 21864326 -52049510", "-64220107 -81978361 5890611 82137737", "-38524411 -77618890 21526660 7035477", "-7815664 -81200950 68422918 -50948639", "-12719372 -15599886 45494215 1959502", "-41652189 -89556724 34053166 -19020191", "39489256 -29457788 70467683 -16213552", "-61530124 39069188 36427065 99237972", "-98560944 28815235 -80073116 30792627", "-37557545 -17066158 85650745 46473105", "-69908619 -58311602 -68401545 11464060", "26653116 -67407453 34046450 33516948", "-58379023 74907425 -21711651 84644519"};
    int qa = 6842791;
    int qb = 53323749;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> rectangles = {"47578591 -90623757 49700064 -26539951", "-39883752 38238164 -21941470 89279135", "-74192803 -77201539 -10122269 7798981", "43348064 23474791 74965604 78484046", "-40236628 -58469444 -23158083 70587384", "-46815055 45284646 -7445679 67709762", "1367428 89372649 77190768 96947800", "29334855 -96747705 90205064 -48195403", "46252853 12035407 81781465 18720540", "-86701673 64647895 -64024100 95479888", "-20257299 -40315796 -3648215 71830365", "-70821584 -35020212 92943395 67287579", "8586022 -90858763 41501697 29369907", "-74108559 46801032 -57894014 64636606", "-67772749 38743334 -47540682 62926586", "-1281556 -41149749 94238680 76223884", "-98111420 -83989401 -31252182 -22120796", "-33476851 -33083976 88575569 -21241594", "-37533883 54139063 -18269811 75739354", "80154648 -85872570 88455652 -76322831", "-60412356 -49757395 77208691 -27390972", "-97863357 -94047390 -89476479 -61992504", "-41365997 28518969 39974095 51619947", "-44804013 1083991 28357848 16290818", "-25602840 -95468141 1777897 47346371", "15110501 -85243939 20547324 75439767", "10905035 -48508148 17546740 -11646577", "-29281780 -63300958 58457766 50277136", "-94122577 -42191282 -57124809 -1421968", "-30043873 14514885 35848113 28845526", "-37281743 -86190506 -4085765 -8280427", "59562054 -69788047 61989896 22689511", "-47365543 -46572895 -4994960 30131099", "-64054873 -65221543 70257860 -57398054", "-5447412 48994482 -2219534 95078453", "-49319729 9601852 33976488 49470334", "-87616339 -9420200 4009229 44025818", "81113882 -59436862 97658391 79638827", "46039102 -1173773 85753673 86340358", "-60785498 26968457 28212432 40878664", "23978300 -30907033 84113076 70133208", "15022173 -97426601 64657276 14480324"};
    int qa = 58432053;
    int qb = 7325559;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"-50669318 -59250138 -15884308 -35047783", "-24729576 -9514837 72170083 20292330", "-63788378 -67728275 52862613 -10033183", "-97189390 -51629640 -52429170 39414684", "-28023510 -55835535 73544489 77730982", "25425118 -13218095 85215015 1249093", "-66094634 83588446 3487602 90881231", "-21752487 -34815586 9230789 22009049", "-85360573 -24042901 61522441 12614156", "-23841883 -57339551 13213212 -52575394", "-94536743 -35418151 -42714661 99672570", "-54186376 -29167936 60738624 59795429", "-85674535 -41885361 -10378423 89863646", "-54453941 -31721967 -18157688 59198635", "-99441401 -81549383 71282452 73556378", "-81574164 -95702100 -500181 653961", "-4984971 -37724199 90431943 77487753", "-67475479 71257273 14705161 76963169", "-75682796 -64404423 9651869 20580986", "-33766116 -44194382 -11391663 -10801112", "-40183618 -46440304 77503259 48834786", "-86156257 -99938818 -78133186 -71380312", "59072678 -93962455 62804251 -78772580", "-19761347 52316372 50151721 94154423", "16616320 32731337 26854541 75215529", "-43988818 -45249416 -32503711 7015062", "-84445781 -3608204 95286189 46461143", "-5031422 -69863735 76140156 7557668", "-74312749 -93535574 8449839 12925238", "-41949283 -56198400 36314651 -25128853"};
    int qa = 88480995;
    int qb = 59259917;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> rectangles = {"-98449033 -56133613 -31122451 8168584"};
    int qa = 87511663;
    int qb = 37431382;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"11885583 -32698088 52545314 -6199591", "25324955 -66020439 60543101 -17443352"};
    int qa = 66078090;
    int qb = 54804723;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> rectangles = {"-61391104 -76383325 32954802 -8211397", "-60375349 -77643871 75583677 -71920410", "7536218 5602830 64890444 52486770", "-90701538 22324789 -3515432 69323197", "-97845067 -56704016 62563575 74315843", "-95668320 -65010554 64333825 -46171038", "44535646 21139564 74078237 94756270", "-82284264 22698282 -17924495 76084477", "632701 -97134268 65617576 93615321", "-98816716 -64108706 -68963795 68436189", "-1495746 -79743344 20273075 -67617370", "-44223727 -39536885 -32455704 -25464757", "17090968 -56181566 51758587 -27764970", "-62434722 -35204134 37932348 14006205", "-58724187 -89932674 -2502462 -49682863", "49294536 54545951 89616585 99503099", "56995574 29718306 91951927 66371559", "32561659 -81200375 82619679 63012447", "-66914034 -76759291 -41807490 -64252836", "8056751 56279190 36257178 79909420", "59677864 -93649848 92007706 -142810", "-313912 -51845407 84843626 98691568", "-49554467 -29277188 -39811140 22979029", "-70047520 -73683178 72999216 -32888086", "-67135065 -90525797 -16026301 -17943814", "-17741058 -14676093 84943964 60478651", "-3648589 -78291524 -235796 -13448394"};
    int qa = 7219380;
    int qb = 73204665;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> rectangles = {"18648377 -56948259 86319619 90988796", "-27855894 39063194 65324613 71051032", "-69772179 -11541243 8789915 72327220", "-69453880 -92954098 90037457 -11973764", "-72925677 -89418815 55684702 -26568271", "-80110151 -82184131 -5593560 -34026935", "-13917718 -5681102 -6727183 93284563", "12090531 93727486 97588278 96016974"};
    int qa = 39862726;
    int qb = 24759285;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"-65111484 -80505272 -27103043 -43081317", "-72020844 34443218 57785725 36765601", "-31455753 -1546019 70557587 51233161", "35855682 -53832160 51502125 -11115791", "-57453174 -81335945 66714673 -44754834", "-81349137 -21421520 -31719053 47307750", "-7472588 38792402 64506141 98829192", "-95774002 -83856466 59319858 15172474", "-61830837 -90412544 85535460 -8616573", "18439236 -47840439 64823657 -17108248", "-37038712 -91193053 45563039 -33224805", "12657268 -63053203 40528477 26911993", "68148856 27191573 87717228 81537541", "-83469654 36271113 -8706492 50073500", "-97522468 33011543 -62756573 55601182"};
    int qa = 13284713;
    int qb = 86387849;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> rectangles = {"-32600324 -51770044 83179612 59351796", "55575627 31151846 61103690 86100223", "-47925137 11426780 -32145505 13649131", "-80368623 -93016797 25044220 67592397", "-99421858 -85361415 -25390394 -80569089"};
    int qa = 44681475;
    int qb = 15181718;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> rectangles = {"-66038272 -66415887 69222930 -34303982", "-86854981 49245036 -76327166 97849373", "-8794627 -18347458 23959554 16740670", "-16129192 -93578333 89045420 23551918", "-30133892 -47680012 91220729 -8965390", "44646242 -59299977 56319250 -25630682", "45835351 -30081658 88487166 41704783"};
    int qa = 52134492;
    int qb = 87890786;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> rectangles = {"-41259530 -16249038 71801738 55580900", "-97533646 17027803 -69185590 40695165", "-26563490 64991568 77694016 94137185", "-92145153 -29918780 38501556 63581618", "-12520757 -17573634 63485013 3910686", "-34209602 -93859768 62084892 10114534", "-15434560 75818635 21601640 88050937", "44331476 -60426005 53603522 3554807", "-28088557 -11037170 -6932122 4613873", "-90358291 -7713111 -40740727 72877193", "-87365954 -81940252 53510370 78934130", "2908948 -30979199 79676256 44743343", "-7726406 -59199506 54804176 16396868", "-93917805 -94250343 -55245479 80581861", "-97044969 -71280848 8252515 -8074009", "-84888975 43435127 -70181023 67561949", "-76481828 452026 31934245 40187318", "-2180224 35699853 95740545 87345428"};
    int qa = 33773239;
    int qb = 50179965;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> rectangles = {"-86250521 28612950 76492567 83140085", "81123206 -73446106 93333743 -61980826", "43837963 -86555278 52071259 50215105", "92306535 -74047382 98543909 68431862", "-95699850 -30827197 -13500037 6846364", "-58618558 35528027 -4917785 71141129", "5107957 -22080696 68413914 80761167", "-92157523 -17406156 31611629 15156618", "-96629899 -85622535 -9216570 -13802855", "44007346 -77737235 50153271 41095324", "-94586531 -91423784 -87709541 -52460185", "8688301 8745931 67804892 11712461", "-56825837 -95397808 -3099717 -81603330", "-57562252 -38284506 -48866604 64388275", "-9033331 -73791007 25580107 38271378", "11948833 -72519954 85955683 -25621045", "-81829200 -84327993 96056257 65812169", "-77241562 -67893279 68606157 -39165708", "-78926713 50756793 69941725 68031750", "82603452 -94038191 87988955 84120562", "-75626397 -78913114 -52376881 90709958", "-91647539 8898525 -87871535 85633685", "-14460925 -23876913 44906530 83076166", "7644077 -93466130 24056376 -49150372", "-83921175 -71524681 51684379 -34400276", "-48271366 32405332 11586616 84323958", "-91808979 -76145966 83733040 83090284", "-61995362 -89804871 9539417 -4496533", "-52432371 -44548752 -45203273 60049585", "-72251410 -87543364 -24971026 -62679994", "-14575398 -84532528 56581535 -7549596", "-98868921 53266046 10887547 60188940", "68586324 -28827576 76136591 59179047"};
    int qa = 35993049;
    int qb = 65306423;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> rectangles = {"-98220894 -14158075 -80982440 11235204", "-94131060 -46039273 -31398428 35424742", "-33829837 -16357122 72771917 -1755048", "-81710412 -65857304 94041625 36535998", "-6099421 38848194 7272858 69525314", "-58627025 53111644 66669041 72587809", "-97014671 -43758733 98927244 24013852", "94771687 -5466477 99997848 87661135", "-48246950 -40021201 72004988 95701160", "12751520 -70247469 66876148 55903911", "-73118630 -44529100 -63126427 96522844", "-96180635 41251296 32486531 98291267", "-47874128 26536267 -8152872 58286496", "-72303582 -40994120 -10374708 34202998", "-56970163 -48813640 -44108272 -2681359", "24903625 865264 52625438 58365946", "-99352765 -43525528 42417405 -34774142", "-58073255 -12204525 81566173 6455883", "9241881 -58896153 52536470 -43147517", "-93433927 10797984 67609301 44819447", "-35203349 -87988775 748540 41471566", "-9656783 -67979201 33187704 -57913858", "-37910304 -81732475 51588773 -78013734", "-83553410 -81897500 -43107210 78205475", "-63390680 -18070495 35513806 34079688", "-19951014 -60869166 66975965 -56363573", "-58740999 -30768383 6879931 17454424", "-75646131 -42672048 43762793 6165599", "17320289 54825847 76927317 98392995", "19942617 -51364085 90271416 23844426", "-28200352 -76215624 69069786 57297988", "-28564615 -46240931 22080511 70538071", "-56565505 38030269 -42458799 39427256", "-32810443 -77297861 1295436 57304123", "-98411068 -80613232 -75131726 -12884369", "-46274991 -16495451 96621201 30588154", "-97886429 -64897366 -44521577 95340743", "-75526110 -19975119 80725846 37761170"};
    int qa = 8493987;
    int qb = 98848583;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"-2093375 -83370099 60605764 -5228989", "42869454 -17727053 60849955 95609649", "-89778781 -9282389 -24209917 -7888530", "39376140 93881066 89667964 94383109", "79915817 32020182 98113728 96703024", "10916221 -65464255 38364633 67563620", "39246266 -91204462 48460456 41996028", "-92934804 -37391250 54466327 11439000", "-88301666 -49187777 95078403 81342587", "59990852 -93334675 71911940 84766500", "8468082 -46427811 36252852 42237012", "-8837100 -42729776 43927340 -10918143", "-66381472 -69135315 -25694162 65769719", "-10240512 3902799 97235387 76144747", "17587911 -18976014 99425612 -8901030", "-93403184 73620172 -14629997 84425343", "-85032780 -56335703 72947928 58646940", "-8775556 3010524 15634514 6253385", "-2468419 -97393870 70770717 -33105487", "-38422530 -29296541 68079819 9527970", "-6819220 -63990508 85121433 25605331", "-51210577 -50650418 22259636 -41411128", "-78043472 57262525 51294684 70198930", "16381901 -78993262 27469273 39647798", "37841387 -57597712 41705581 -50038339", "-64450501 -28156950 40563759 18623953", "-53840696 -82895696 36397443 70134881", "-97641591 -34711856 -62425680 33298579", "-69650963 -38750269 80959737 47427168", "82388848 -97506387 89067225 -48043027", "-83485846 -17813968 49641354 60818240", "-59542973 -24945446 42829035 68595056", "17056379 -27894410 80960288 -24996335", "-75092244 -10153700 -14683012 90052802", "-76782984 14280630 88662527 34800132", "20469114 72545484 69512413 82830952", "-68712484 -73522151 43510598 13397181", "-71121003 -71073250 83862337 94424885", "47582330 -47662105 63978417 -20457310", "-19526367 -49043246 61326074 75160376", "15120269 9022810 22044494 57224830", "-83283180 14573474 56386290 81563029", "-79574835 -892693 42762940 41689906", "-94804062 -89351408 92307444 -76381138", "36907780 -21940435 95480701 49630769", "19564988 46206553 53651866 60040474", "21566849 -30423547 95336844 67271930", "48415813 -53222439 70316994 -29448063", "47153271 -28784323 56961260 68417210"};
    int qa = 31420470;
    int qb = 35263262;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> rectangles = {"-61405099 -62578160 -20049802 6842936", "-10605587 -60156880 -3493973 59025844", "-68115717 1572528 66949791 78924648", "-58400697 -63685256 -21782114 92645552", "-85579715 -64111737 -32243751 82600382", "-84107289 -92221184 50625387 38633973", "-63722774 -59992439 8063600 22450002", "40988693 -9801149 56141387 -4561794", "15173928 -57860221 81326888 56076696", "32309213 4649395 64462163 14471547", "-82269817 -24834927 84080707 -9386330", "-31777839 -65759096 -3879237 -20309651", "-17211125 -86539642 80009560 56996103", "38089477 -81250319 91432390 67127909", "49854182 27624282 84125081 93723576", "4043130 -91216303 54125979 23183526", "3631522 -51764374 40400891 93203901", "49265454 -22593132 99327188 65820558", "-67299163 -88180180 95460680 71008344", "-31044664 -72930065 54252570 91123524", "-38451541 -91952172 38482484 -5738185", "-33015535 -20796788 44058591 96015152", "-70861850 -90255358 56435184 52428322", "-49362981 -54995936 15111843 -23229252", "-93628921 -91267790 64959563 76975046"};
    int qa = 4574132;
    int qb = 10676826;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> rectangles = {"-56004237 -57448975 -16526045 32020932"};
    int qa = 96594796;
    int qb = 47489218;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> rectangles = {"-37871843 -48340029 19998131 34006929", "-96424188 -91312765 96807608 39057670", "-77071912 -82721704 63907977 31021511", "-81933216 9748091 -63615122 59118718", "10572002 -96086118 64201754 -85939940", "-74514679 -21624967 87152020 19685093"};
    int qa = 50198887;
    int qb = 5853149;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"-92750616 -61161183 84069593 -36567306", "754086 56089234 40943117 70601409", "81158753 -97121570 92313519 60704697", "-37932162 13770492 2690266 15547089", "-14021973 42097483 52889084 82292873", "23587267 -10798456 25292429 70003224", "-97141588 -82575913 49405877 -39513344"};
    int qa = 95741372;
    int qb = 93555132;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> rectangles = {"46585520 30999492 52408901 54296848", "42754011 -64594706 94980629 53214256", "-90605510 -4566671 -37917930 64104231", "-32984990 -54236263 -11733162 88668288", "-50062988 -11692575 -26952143 -4571153", "-37367876 -17450859 4186717 63094191", "-26375771 -42660569 22967227 -1095079", "-12046037 -90689765 11952988 -88502964", "-26350276 -98648874 -15986685 41874262", "28950592 -52427627 81602638 85179610", "-55622312 -42768705 88624557 85323877", "-23646581 -35958616 93355365 -17998190", "-91011696 13513833 16710236 28860716", "-58843052 88791927 -48566780 97030926", "-78038331 -76787599 49066035 -4989302", "-90246388 -15374800 -16211658 15008", "-28911124 -40898926 64944450 -38549232", "42280957 -29429925 64145473 99517672"};
    int qa = 77079032;
    int qb = 25439008;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"-39593643 -91631268 74432814 -23809010", "64402183 -85823965 67031881 3894169", "36854634 -84012775 97004353 76585141", "72247241 -18888268 87238884 99257513", "-98761066 -81947507 -26721771 64599536", "43247172 60868321 97388276 96434107", "-15643351 -89931375 -12903157 80128928", "-67945052 19142587 34917088 78460668", "-85256172 93890347 -2734518 98722539", "-99094321 -15473737 -84444270 12481590", "2375591 -99055417 49465790 7067718", "49710871 8349945 75502543 9864462", "24970513 -85558408 51706431 41410718", "-95415635 -6305837 3493155 98787986", "-74933983 -47086791 -40585407 85974778", "-56871783 -60687485 58251811 55965072", "-37649542 -5130665 63644717 83810792", "50272941 81624075 97316182 88500846", "45065606 -54874724 45113708 22126699", "65635836 12699889 75679428 99045424", "-86177713 -65498908 58664297 -29898664", "-92550886 -81387618 -65771668 -3921481", "-76112984 -46187405 -41936069 8299031", "-97348366 -96034860 -6684448 14614858", "-74377753 -86442367 21221763 -54627656"};
    int qa = 57409771;
    int qb = 82795732;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"-89144633 -14223483 85302327 86324466", "-84870983 -62990494 800783 53614600", "-10302479 -16874731 66751669 94258341", "-51171193 -16278497 50251651 92743520", "-93906093 -68015353 -92357456 38078747", "-42198868 -97750227 59061391 65785471", "-85726156 47143940 37477982 59862959", "-25486806 244753 99500864 2172758", "-88783162 -78493865 -41494977 46025497", "-97174670 -51662805 57795733 57616944", "-22206360 26800783 23906494 51567273", "-93151262 -19332426 53951637 -3121757", "-11320176 -73144700 96595783 -19554535", "-12181327 5965443 82481481 22754428", "-40789659 -94566111 83366476 -13535258", "-71517768 -7687430 46580892 46881446", "36022318 -62038938 97657879 48158489", "-95283429 -44732652 -32788784 -5678936", "20428273 -69980828 48061141 83962030", "-80845169 -44323541 94453484 88503954", "-90704998 -17140837 -10698106 84916738", "-79399756 -88140768 -21593298 -45283324", "38007674 -78816138 94652673 67166854", "-11561591 -61647432 9375297 -8484083", "-28439460 -87499658 13209896 -83325196", "52041660 -92277722 73526603 46599584", "-50718814 -85703601 -22207244 -34950055", "-34337970 -61953960 38432387 -27815962", "-25202048 -15902379 37267880 74961478", "-67102573 -38410721 -52672695 64478914"};
    int qa = 14192005;
    int qb = 11565205;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> rectangles = {"14998495 -64234185 73445804 2789751", "-83465251 -33372309 -10844558 61309054", "-80278757 -36559804 -18772425 50105760", "-84583939 -12358455 -44729871 49908488", "-11043767 -88767256 5055038 78672622", "8002467 -92140618 47266180 19309956", "-10971762 -19825388 90691985 19841602", "978609 -83765203 13837372 85852887", "21294662 -42991264 51672033 -32201056", "-73847717 36733546 28608971 49422136", "-85345840 -77092184 -16276054 -2773548", "73921588 -94474488 94951674 -67965860", "54110978 5170473 78203026 10615446", "-56200215 -31716786 68522756 -6039613", "-16406335 -21613309 79760847 -18222439", "-51520697 -84411439 26656558 71369495", "-30495901 -70528277 86543708 86647431", "-72580856 -15200818 78845186 83859013", "92316207 24446847 98283120 62988854", "-7977749 71026059 17172897 96138384", "22513733 -46449225 49624175 -40494779", "-9613052 -95097711 14755774 -64392401", "-65029328 1080223 81569097 33122102", "89107802 -24197578 99581010 71856627", "-85842366 14884052 -54592814 94974527", "60269355 -69692883 93359488 79966784", "-36517639 -40610864 23637535 -6954829", "-69267883 33542394 -23833403 70865878", "-94220847 82615521 -5034633 89801391", "-65306095 -18622020 52338258 58347368"};
    int qa = 59827162;
    int qb = 45666103;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> rectangles = {"-47129083 4914501 59055494 96571880", "-78613195 -91068259 19156197 83411832", "32600886 -93473972 47360468 -8219840", "-76281215 -67067759 -5763717 45491763", "-85752820 -99084358 15510509 84273163", "-23418432 40213623 -19721458 97327288", "-57325746 -11166912 -27219376 -3543108", "-66692226 -3757395 -4643583 20578174", "-97885743 28830727 -42880747 65232965", "-15193535 -25898683 -5136721 3329811", "-50637360 -64143295 59871537 86792694", "-35662204 -80154741 35844000 -18167691", "81843044 4571017 91952552 25345050", "-66676328 -40511661 32253895 77590277", "24371905 37711258 97995182 63684435", "-66190464 68910288 -40772235 92994153", "-6004536 -43537265 15688619 40592141", "-67815963 -49619683 -11658336 45427776", "-40058502 -97483914 54829008 -8339810", "-72353535 54559630 37377927 62320904", "-71723034 -96002394 97523187 3673081", "47864520 -64871507 52599926 26970932", "-12302355 -65314761 66750151 50144511", "-53623719 -96574659 56473281 84769139", "-51757742 56368346 2116791 84453463", "-98948288 -34931373 1184786 60965026", "32975485 66064997 89409745 84153001", "22721180 10400629 88184060 28543047", "8920417 -24228081 20867602 -12986930", "-82628890 10898542 -15432431 32440248", "32801458 -84780658 50069695 -62335575", "-10069097 3403377 -4322231 59621787", "-92780252 -3846529 -56469161 42409610", "-97720175 -24872649 -86674360 43417884", "-91773378 -41042684 -47184145 -36317133", "-8680185 -40129350 8638327 20237575", "-8881135 -95105165 81384446 67102094"};
    int qa = 89065831;
    int qb = 53299533;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> rectangles = {"-72807285 20430153 8457773 22244992", "-9892415 -73490514 9463018 -29552135", "-62298868 -98058090 2607825 -43648791", "-51311943 -54137071 -11064568 84007320", "19201782 -3583154 38742759 10023640", "75967855 -10719758 90350019 -3804171", "-17524994 -87308477 82844665 -78664520", "600148 9490022 1125601 57061541", "68019061 -6322280 70000226 17919920", "27839322 -82546258 64012808 -17982048", "-77577040 69094081 -8995189 69463132"};
    int qa = 49044830;
    int qb = 61599249;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> rectangles = {"52357170 -79757349 72877459 -78689293", "39004021 8405011 69105651 12286970", "5160697 -99222270 96642012 -74469609", "-76299443 61550233 27768278 95256015", "-73894355 -93302251 -30384094 82895039", "76234496 -84659278 97520222 -35336178", "-53758123 12859541 34602068 46760154", "-10027093 48331174 78321970 64944453", "-61473503 -54884781 16112080 7066963", "-2117388 -63629094 75622543 93364772", "43797578 85957333 55062141 87146787", "42298365 -8176755 85691281 11248529", "3058931 -31356186 42748433 64717538", "-94185243 -58158639 -40672942 -3586922", "-91479984 -85973376 11920924 -1058815", "-47641727 -83843388 -35300100 -421589", "-7147913 -99339933 53474693 6281190", "-49009320 -45859995 44420386 76664222", "20106329 52809034 41951635 87407728", "8859166 -55837947 71175915 -9857790", "-22331638 -20654423 -14674446 97157281", "-51079442 -9160040 -30111644 84709867", "-90494300 -70468447 4029037 51163782", "42010223 -20293012 78599702 -1354130", "-6449151 -29126539 25807208 4360645", "-42160653 -48809854 5660343 -8620061", "11847006 -70421084 19736402 -32236617", "-72311642 -43437461 13971437 23822674", "-78880164 43006034 -29634389 53519586"};
    int qa = 62614816;
    int qb = 82445955;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> rectangles = {"-38237413 22555535 87676715 23761944", "-69807737 25770855 -17564663 67199105", "-95167629 -59710838 91852274 32929032", "-20356974 -77681818 49852306 2105331", "-29438769 -9967073 78272957 22483577", "-45910248 58393859 -8856181 74173285", "8903518 -27336269 83824267 83095913", "-81312565 -70672447 -22656279 -32281371", "-86029539 -29272869 -2600511 41092325", "-34811887 -87046195 60028138 -55417920", "-62763466 -36924687 20160472 60982888", "-90646218 -54184277 -26734915 -8203679", "-98358004 -50528150 -82627412 15117075", "-80540510 -57734998 -24715458 91731350", "-49037506 -52065637 97236194 -9913096", "50184184 -77290504 82544896 32588016", "-83067729 -64070662 -23373671 87186284", "1678770 40319885 2975793 66531096", "60626304 -28194558 97968504 42243337", "6140262 -72957479 50655999 -69181485", "-6698275 -29516905 12577780 45300371", "-47999834 -83759252 -3712438 80918072", "-57614003 45480686 -27728533 75897341", "-92175338 -11321190 -31233944 65488020", "-12233214 -26115791 46292125 -16358948", "-32409644 -33220103 17726690 55115274", "-92765098 -98742124 52674434 -22496282", "-39988464 -75897642 -10192243 -65697331", "-76332011 43795068 -12870421 84284477", "-670967 5982316 11862984 34783962", "-40670472 -8038020 40620203 61108910", "-33292701 -91791376 35087715 -58629644", "38992581 3174160 82257976 80232274", "-98374674 -13963284 34747401 93235060", "-28591490 -34519938 85149719 -16466849", "-73219381 -29863481 -25017464 35280812", "-34023404 -32603672 55432210 86050972", "-63293888 -46419172 95123888 -30488980", "-96540207 8058529 -94958135 60763165", "-56980711 -26438336 -3829415 58374442", "43447513 -75617423 81935473 -43672694", "-27752783 -84608954 57261072 28385219", "-18330563 -96546640 47659932 -8548639"};
    int qa = 20448234;
    int qb = 7698557;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> rectangles = {"-909862 12801242 72274667 21453160", "-75792325 -47383988 38446258 54124719", "-50030902 -94028393 44175162 5702289", "-49655770 -78834511 10930334 66526918", "20138538 -61889076 87844028 79935902", "-44345046 -52909470 22509845 -24120755", "-55862246 -78295937 -53443699 71991947", "1905321 -79193382 38977591 36261348", "-10753070 -68114759 88752504 34172012", "-46608749 -23915745 36378095 1082046", "-67370189 -32498465 13018374 44072529", "29420015 -9352059 50082731 54530691", "12965212 -15473670 85388575 -5636888", "57650170 -94334243 93404161 35889874", "43265001 18660778 44034904 26735807", "-68303923 -24719724 4245280 -6720889", "35976253 -98934199 79929433 -66436940", "-9645782 -98791480 3493060 -13112929", "-30622578 -89276894 -29812395 -70486823", "3866886 -90937978 73955743 35612826", "5542285 37299713 26788050 45098338"};
    int qa = 12509782;
    int qb = 24970804;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> rectangles = {"-56925129 -87342872 93252981 86034331", "-32545938 18584822 13500247 21424129", "20527614 47447752 63046380 99984166", "-97860254 -8424630 -42304253 13955986", "-96989753 20026003 1927564 52873203", "61223644 58687210 94187309 81805653", "-58858960 -59612337 -42253323 59533905", "-23899330 -95488133 46695474 10759172", "61038782 -43953826 61914349 4529497", "-73476433 -67888913 19149780 96493022", "-18581368 -32485444 72631733 33880407", "-65624000 -75462913 -7111871 -43615255", "-18072284 -65435462 22696476 93116256", "-90109432 -9905213 -72308198 54755169", "-68961445 -47194784 -16583746 51982488", "-75562459 -29631421 -3071500 75206396", "-14269891 -56570420 72588846 -908660", "-81043718 -95316183 -74072802 -75064676", "42896447 -40559231 45523847 -35308882", "-97115043 18404222 -67833402 71990709", "-76261699 -91891636 52286079 74452904", "-87082332 -99219927 65537214 28314434", "-97599207 -47597919 -51817840 85800573", "472883 -24368914 8519631 77503207", "-51189723 -42493671 -12767497 45951011", "-97786333 -17867651 98070696 -10303908", "-16462076 -99781908 35479321 -75467145", "-11990069 -4163361 -3829637 64705315", "-34204243 -5776968 64723417 38620074", "-84666314 -11960514 38331829 30063185", "-73336575 -95995950 11969873 56157481", "-34275980 -77837255 59857942 96884179", "-10769766 -75294651 32683951 13201537", "-73933484 -65922921 19609004 -40486192", "13457549 -57924493 93041510 46863410", "-25889611 -12417345 6276206 40493062", "-48177846 8577615 -41586876 53881995"};
    int qa = 10479827;
    int qb = 5574285;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> rectangles = {"-86400526 49024191 35236360 86484669", "-64959419 -44884818 -50231829 -22829652", "39401854 -71642931 48541253 -9031428", "-30785089 -34506661 24622705 -6283668", "-76634528 -34414959 39131098 79650810", "-32469422 33625589 89449536 43373451", "-92617445 89786768 -44110194 94426480", "-35620677 -99044849 38048187 -29428069", "-41884720 8396131 15328635 21125182", "31333153 -33025477 43078273 -18963161", "-64041306 -98734544 85675381 16687545", "-70398638 59056659 2726358 61570644", "-54537448 39647808 36157209 61943076", "-43332610 19058056 -15304349 94725138", "73551237 -66021229 80691249 47498170", "32800695 -72397756 79263880 53132402", "-14735893 -28176091 54007467 30803290", "-27144440 29004719 -14175377 96705332", "50378534 -55306462 93666912 20070124", "-93673863 -18899877 -18147398 99419519", "-43257764 -86339158 7235666 -7410194", "-4733732 -63655888 34280675 -5821334", "68974368 -95591901 89520817 -42727660", "-2613043 44995594 60649245 53509705", "-49513515 27386918 6656129 73695414", "-95953552 -89743607 70839934 -11481371", "-89582795 -46426350 -37309571 74653589", "-78935959 50924175 35103130 58326299", "-59701149 -55183629 52691529 -44301141", "-73399038 -89677590 49269742 -74992703", "-75478944 12139280 6700299 58672286", "-49867375 -84008542 55177445 -31255614", "16428970 -89428367 20557013 55299460", "-26582542 -56872573 -22549445 -26712608"};
    int qa = 36241039;
    int qb = 92805815;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> rectangles = {"-53041507 -77158880 76078040 40038225", "-93709033 -93925886 36029266 73843943", "-86062125 9269298 -32351861 37544618", "-60080065 -87754525 -15373033 -74868574", "-97598776 -95908173 -18337522 -21202559", "-70508831 -20920196 87592269 25963653", "7029671 -61878632 31931320 93669709", "-89923277 -91769230 -51529617 53093013", "-86403304 8459368 4565140 43827202", "-99238529 48776337 3304969 65473544", "42684819 -16235130 79625697 64062387", "-23580433 -40134179 50334871 -12684474", "27257341 -39489748 31233205 42672650"};
    int qa = 84369893;
    int qb = 19932608;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> rectangles = {"2340507 -41242699 87602552 64527921"};
    int qa = 49588194;
    int qb = 78949441;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"-98442206 -87898440 -46046714 63716059", "24091983 -85504878 26306277 5113532", "1343108 -59183354 39012032 -51241609", "70689466 -15615021 87845471 -14048101", "55271232 -75115291 81797325 32078924", "-35288288 44533641 1153705 80400259", "-85357654 -94752128 20221522 38110246", "-95168537 -76423325 -92663796 21361446", "-71787599 -72040786 6167632 95398331", "-86769698 -2247642 -79436902 18812966", "-30620441 -13546949 25696015 49914874", "-96290777 -56794209 12430163 18486056", "-49047061 37154112 74654345 75678787", "-50449932 -93508249 67087162 -4522355", "-81810440 -32795149 -24893295 -25475111", "50392159 -93219463 57383654 42080275", "14692650 -97388661 61149775 -21719503", "72760136 -65087915 82433543 -19141735", "-81638485 -98115619 99034035 -87160078", "415372 -20199820 53902874 26642523", "-4101268 -53430561 17437788 -22228536", "-88058680 -93194078 -31250513 -61138496", "-87465842 -28493532 69653284 49849293", "-49290997 -88106066 -24140314 -44821330", "-82149884 -56042949 64387194 13184936", "-32741240 -1581277 3943831 88814598", "-89788960 10843331 -34516419 28044698", "48013933 -34784649 80551557 15120122", "52113034 463821 60230887 61727944", "19055708 -97135218 24441529 68075508", "-66740220 -71030678 59966832 70830038", "-2384323 12955047 25955173 28636388", "48580236 -46469903 75132900 62854904"};
    int qa = 1770264;
    int qb = 35966991;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> rectangles = {"-74242082 -42096271 8081170 -20653393", "-76206306 -81889197 82481027 9607002", "6471824 -36318955 96236277 97890815", "-61584432 -82282160 96149331 31836963", "-80102306 7318959 28689345 20937778", "-55242299 -59649276 86114586 76061807", "11761011 -84511688 48208179 81900906", "36936878 -21508248 83637214 45946185", "-92753893 2970338 85613624 53382460", "-99773580 -20340269 -39939734 30966812", "22356471 -8141623 42016704 64374265", "-41543353 62775010 33135633 97363572", "30109974 -81086783 50522501 42415009", "-53224596 -17585489 40674721 12350446", "-36150162 57413915 34674923 93682033", "9687471 -7699286 28405135 41067025"};
    int qa = 57925354;
    int qb = 34345804;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"-75841789 48174348 -52295126 99280221", "-99658799 -76447762 33393427 46106689", "-56989203 21729764 35891757 68759805", "18942428 -48475917 88802234 61047532", "-32686315 -40384770 -30217867 -8361114", "-61670670 -59081953 56928104 -18377951", "-45091641 -39192490 55779379 15722418", "-87310078 -19660165 -56191649 -15029942", "16241618 -57258704 61420337 29186891", "-71624159 -27251261 -59562090 77538197", "9385794 13566683 70481513 61643132", "-64668838 -81297711 89339642 42567201", "-27433275 -6606678 25773324 94092634", "-79851999 -40572032 -51745635 -26873320", "-52539845 34194262 83231551 94958780", "-21944717 -14641813 13984235 32222722", "85980498 -92317381 98160670 -51849641", "-17845917 50351756 80465967 50363971", "-79649679 -816675 -46943828 81785677", "-56492806 -41970467 6576826 60622036", "27456696 -93739676 42925924 -83684004"};
    int qa = 3854715;
    int qb = 69078001;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> rectangles = {"-73571508 -42825396 51986678 46839411", "-96357143 78521445 -80545273 91487186", "-79941342 -42020702 -60929616 94936800"};
    int qa = 13169400;
    int qb = 60456883;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> rectangles = {"87499971 17282752 95527279 39072593", "72412289 -71132134 80195681 -54719067", "-83193687 -21557237 38035626 61055736", "-64202064 -93922421 62601314 97817767", "-40889859 -85253770 45307164 -31447234", "-55876108 -8736686 -44597871 59623719", "23364924 -96451273 90518040 38666000", "-94671216 54908062 -11023755 77282869", "-81235915 -64475985 26196757 8368847", "-83223159 -36848190 -67917110 33743464", "-915612 2136792 62925386 21400494", "-52952078 -98534171 59199401 15319921", "-26848817 84040288 -5622504 99517699", "-69786141 -21804601 21679042 10513177", "-60568672 -77241556 76239152 58291894", "-48521910 -44944951 -16034292 53875344", "-64476555 -8066274 92015487 50186024", "65934231 -33412478 66339260 8197856", "66474515 -21374837 80991149 -9205117", "55841022 -20345217 77446386 39248349", "-67303086 -25156615 32790520 54577289", "-59685221 -22855743 28876987 39786199", "-30653931 -82468272 79195821 -65208687", "-36451969 -11680664 77574617 81785265", "-68555938 -93824725 -10460538 -16424944", "56273402 -977211 77238181 29859638", "-10134182 -18998839 31654262 -10600729", "-95167364 -31985787 5926656 96191745", "-54934153 17260181 78719980 84427371", "12819841 80453207 60136333 94914315", "-66956470 4372106 98805785 9431429", "-88312190 -56290604 -54517478 -54735413", "-5705921 -44598986 35928765 -22510225", "-74911018 -70384735 -16149444 -8982289", "-96986875 14722675 -29896802 52973628", "-46133355 40129971 14155401 48162769", "2637616 12623812 90713935 91040769", "-82068946 -29131656 -20484144 89014785", "-56288148 68228296 77286087 70671740", "-74124338 -52001812 -34904942 -304131"};
    int qa = 65662863;
    int qb = 23563202;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"-53759684 -74902578 45477654 6443354", "-30721487 -44208527 19603319 -27536606", "-60372496 -91818523 -7735544 69342570", "-72602970 -96481146 32183784 -49563743", "-54271888 43754056 -21064186 94893007", "-5499245 -40534886 41300630 95734302", "5258140 -50671944 17191995 -42327060", "-82635113 -93232447 -67978898 53932583", "21944611 -33870643 35156420 59614566", "56140812 -83475431 58524494 86979048", "-18409442 49886992 36819404 69180479", "-5978167 -69531760 64446410 6021960", "-43098364 -73920914 93350194 12204835", "-21545522 -85239407 59095856 30286314", "-72138527 -64019114 -55243825 94451794", "-5896468 -40796468 96461605 -3654027", "-78066396 -71156705 -25691919 14591360", "50856195 -35967453 95228675 54059935", "22745650 -48640820 50438584 -28033611", "-13437990 -26782287 34191387 73103143", "8767165 -14243820 11907060 -10638148", "-85331662 -23249986 -54752865 4462445", "-98259109 -7973936 -6693476 65672257", "-4730495 68267079 75254565 68859574", "-40722275 26669275 44306264 68851517", "38339154 20497609 62813163 75421835", "-8936372 2630283 83926328 75461243", "18134251 19846420 86040659 50318100", "54061006 -52699296 84201982 92006582", "-15394370 -51381364 1296435 50291107", "47678048 -87372695 89835994 71588155", "-53596866 -94259254 -33387643 36978046", "-39146088 -84301586 -12432488 -63308177", "-62254891 -86804850 -43701521 14372710", "-47639203 -64250687 99897076 91369052", "-58014210 -40697642 58923950 48622555", "-61526810 20513848 56588659 74472644"};
    int qa = 91507602;
    int qb = 12858889;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> rectangles = {"-20042205 25464192 96870835 61115536", "82371812 -8191959 92159495 69274723", "-58913321 -67166203 29223076 34362865", "-60235274 145136 82887427 73279985", "-13410893 -55641353 52927284 37912069", "-61355396 -65092014 -17457307 -16022944", "-13912327 -6393702 80572260 902393", "7383698 -31291498 24793989 -27792227", "-821198 83977463 82479481 88141979", "-12273192 -99997558 62189106 20707642", "-61776588 44782682 -54447259 84684905", "-98478205 -43635481 -61838199 -6720247", "-69685054 -93713542 47491328 -40643251", "-98504275 -39008556 92380770 18336646", "-41210142 -40292844 56031886 35870159"};
    int qa = 34461616;
    int qb = 31671044;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"-87148340 7928486 -17323714 35791482", "-31728189 -65959329 98125821 -62966278", "24757821 43220898 41876207 67877377", "-10980479 -80434783 93628636 18523741", "-74213757 -98182831 59036322 28792916", "20483774 -47830576 58979284 -17242103", "-32940762 -88071098 93326855 61386819", "-86269955 -35585816 -44010662 24958174", "14596093 -74447299 76544213 -68907460", "-56834223 12793602 14778142 60669286", "-49209922 -61456741 50238388 53645916", "30097230 -29483249 76148530 41047001", "-72301587 -88745073 87473460 21677846", "-39693798 -69672592 72488003 87777631", "-52758054 -660327 34200749 5376742", "-23107082 -25033934 99970765 55265040", "-27443616 5986038 -16988465 60355904", "-17953426 -61376899 8073082 100248", "-7711002 -68729396 51761370 14337982", "-30549588 8764535 48734470 28809936", "-94605607 25792572 -37743364 87831634", "-59093806 -64010692 -57921521 -2770575", "-98264875 -23314938 -82374880 25089897", "4054907 -78511898 86137716 86859096", "31890678 48619897 57144948 65442016", "-96276149 5119099 -20516373 75303476", "-74059285 -59322263 5218785 -41104298", "-43594795 -54493544 63831368 -52721371", "-40869032 -93345848 43034622 95128633", "-53161457 -17087297 -11493924 25047819", "13791758 -59089658 71582699 92053459", "-10797227 -76125821 52940896 -2129327"};
    int qa = 36837679;
    int qb = 36594908;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> rectangles = {"8425999 -51294812 40348984 86114749", "-74142797 -24235566 -29547697 -22464908", "-68740746 20415345 -21456265 54085268", "38029850 -32809279 56300388 84664535", "72855874 -77065747 91612511 -72352355", "-63439128 -78111639 18954271 76517149", "-88218356 -32230949 50554597 99705572", "-61405499 -24119530 -41565671 66939832", "-33401786 15515159 19589863 72300856", "5043000 -28560090 69723248 44811593", "42011242 10019094 98986964 56148478", "-35604857 -84812633 84892764 -67077290", "11625780 -18505415 19448804 43217552", "-66733625 17838664 -13587040 96230664", "-81673216 -65188929 -29840744 78619909", "-86088072 -60383710 47806391 34705552", "-92403491 -66212322 -45179109 -49995641", "-79648872 -41322370 -22554580 35899727", "-81201235 -241764 79593476 50931342", "-97959464 -6705569 22921887 22390159", "-16902121 -39447439 73096617 -32759069", "-97474455 -27773589 -46364446 -15993520", "-43271374 -7799821 10049166 63165247", "-80736248 -51452213 85824277 -46131598", "80957183 -49645212 85163550 -1993720", "-14870604 -82285879 56972689 2168255", "-93295915 -16739845 -25288317 54304074", "-49409873 -79118259 -10337242 53337354", "50697203 -64649661 65896808 18673711", "-73494215 -68031064 -19994133 5801208", "-29502465 -29459353 14763870 98540681"};
    int qa = 19153994;
    int qb = 3013882;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"-82595994 -99802450 73876625 -45086313", "-63649672 -90817207 84541048 -48351350", "-85370024 13607813 12459580 77889785", "-76747706 -36258344 55280398 64101463", "-11933615 -46019772 57757696 -41312591", "-204688 -20259310 74668174 32607732", "-52603119 -83355192 7487031 -70328708", "-99535371 -82666318 47101216 40203848", "-95000398 -42624668 -51961686 91019935"};
    int qa = 61102280;
    int qb = 72673267;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> rectangles = {"36961972 -12798989 70744524 46887719", "-85999385 61442990 66035736 80219717", "-96249655 -67464586 56935788 -6974113", "-74058047 6329640 2545332 89972911", "51243245 -77425575 70849249 -28480552", "-34215609 -58564601 -16911275 65253358", "-95958116 -71822016 -57168436 -16290131", "-48989997 -24037940 48027727 96937678", "-70805113 -69609752 -57704414 34336719"};
    int qa = 90530107;
    int qb = 89241209;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> rectangles = {"-34113507 30045373 -18829752 39353933", "49567048 -72278174 58724987 54369712", "42350270 32314023 92236102 86957407", "-70270778 16327047 53365943 41932696", "-30705849 -23324434 99507023 20520992", "-4519919 -15015445 75145281 12767898", "2093862 -23909498 4376435 33715154", "8473984 -14583722 50692616 29507046", "-97302055 -78183549 -86586679 99896253", "-61615667 -93737416 33707222 -40840818", "-42724378 -30652721 15962977 89261059", "-22353487 -83782064 92413635 -36980573", "-69449247 412945 63859351 21088015", "-85720081 -99553344 -77823206 89271303", "38073658 -29550823 96396365 50774135", "-18790785 -69877641 16944678 82201606", "-82383086 -79553236 17582048 26101328", "-1113942 -67317245 13312337 -56474593", "-1686402 47075999 26563775 53414938"};
    int qa = 34064673;
    int qb = 41653267;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> rectangles = {"1505319 -95005688 40468698 90143178", "-47527999 -82652423 62399145 -23854284", "-13631353 88311069 8909776 90029302", "-68721734 -70053554 31545955 -22494404", "36930129 -68292159 78155419 -4955728", "3027227 -1876399 74173846 -343095", "-23759394 -93089720 -9670395 33164563", "-22781408 -63524767 -4281090 -44372057", "-73467344 -57296114 60500408 -5384383", "-84355141 2871506 50928416 11836379", "-69346298 -67270167 -66012399 50803903"};
    int qa = 91921695;
    int qb = 54937103;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> rectangles = {"-85233476 -97512088 21964668 -3674180", "-92796662 -77644863 -61837015 -46614076", "41245966 11086210 93789247 12050001", "32380572 -95273578 86340698 56993370", "47772238 -2964144 92651007 98484342", "8619247 -43694636 22535195 39295547", "-26894892 -85308661 99596426 -19456473", "38450005 -19775082 61198019 33897331", "12964720 -74365762 98951336 1238185", "48006086 91143996 62935107 92095223", "47740188 -95421708 51983793 -76567957", "78119138 -71018119 95055301 -16143724", "19973800 -86567056 76402988 96691094", "-72493916 -3528421 75372289 2434182", "-86127839 -67062184 47964174 69257681", "20565117 10425279 43741839 30726455", "-99545060 -7401499 -80801389 73206194", "-80105914 -80565268 -5179511 91357344", "12274035 -47599803 19125097 -15821505", "-92278520 -62588201 -71947134 47666365", "-5477789 -10247919 85745962 98271987", "-97358914 -83241920 73269510 11672847", "-25161547 -29606588 38123533 36012449", "-7299310 -11410867 56952308 85124699", "-23490440 -36095747 -21118960 54189479", "-62246986 -18348330 51648413 -16635512", "-20959178 -71364748 72990550 45311392", "-45980775 -70917867 -13699138 48538303", "-57663648 59154761 26940780 68780378", "-87706654 -9221428 23518414 55960360", "-87732277 -74605626 -62333397 26515727", "12967411 14195606 24962661 32884250", "-15993698 -24138687 40197405 -8517108", "16396631 9079949 24759519 48152764", "1540164 18873987 71693639 54432685", "-73215703 -30592135 -53038955 83297055", "-4538999 -48965727 8518427 42927293", "-95603235 46066287 8291893 52203552"};
    int qa = 69050985;
    int qb = 35252288;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> rectangles = {"1 4 6573 345", "23 4366 23545 366783", "54 7895 2565 23567", "3456 345 475457 45767654", "-234 -654885 0 0", "-32654 -43256 -34 -5463", "-10000 -10000 10000 10000"};
    int qa = 100000;
    int qb = 100000;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> rectangles = {"0 0 1 1", "0 1 1 2"};
    int qa = 2;
    int qb = 1;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> rectangles = {"1 4 6573 345", "23 4366 23545 366783", "54 7895 2565 23567", "3456 345 475457 45767654", "-234 -654885 0 0", "-32654 -43256 -34 -5463", "-10000 -10000 10000 10000"};
    int qa = 500000;
    int qb = 90000;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> rectangles = {"1 1 2 2", "2 0 4 3", "4 1 5 2"};
    int qa = 3;
    int qb = 4;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> rectangles = {"1 1 2 2", "1 2 2 3"};
    int qa = 3;
    int qb = 1;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"0 1 1 2", "1 0 2 1"};
    int qa = 2;
    int qb = 2;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> rectangles = {};
    int qa = 10;
    int qb = 10;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"1 1 3 3", "2 -1 4 2"};
    int qa = 5;
    int qb = 5;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"1 1 2 2", "2 2 3 3", "3 3 4 4"};
    int qa = 2;
    int qb = 2;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"0 100000000 200000000 300000000", "200000000 100000000 400000000 300000000", "100000000 0 300000000 200000000", "100000000 200000000 300000000 400000000", "-1000000000 -1000000000 1000000000 1000000000"};
    int qa = 400000000;
    int qb = 400000000;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> rectangles = {"1 1 2 2", "1 2 2 3"};
    int qa = 2;
    int qb = 1;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> rectangles = {"1 1 4 4"};
    int qa = 2;
    int qb = 3;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
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
    vector<string> rectangles = {"1 1 2 5"};
    int qa = 4;
    int qb = 1;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> rectangles = {"0 1 2 3", "3 0 4 2"};
    int qa = 4;
    int qb = 3;
    OneMoreRectangle* pObj = new OneMoreRectangle();
    clock_t start = clock();
    int result = pObj->maxCover(rectangles, qa, qb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11866817&rd=7226&pm=4590
********************************************************************************
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <list>
#include <limits>
 
using namespace std;
 
class OneMoreRectangle
{
public:
  struct Rect
  {
    int x1, y1, x2, y2;
  };
 
  int maxc;
  vector<Rect> rcs;
 
  int findCover(Rect rc)
  {
    int res = 0;
    for (int  i = 0; i != rcs.size(); ++i)
      if (
        rcs[i].x1 >= rc.x1 &&
        rcs[i].x2 <= rc.x2 && 
        rcs[i].y1 >= rc.y1 && 
        rcs[i].y2 <= rc.y2)
        ++res;
 
    return res;
  }
 
  int maxCover(vector <string> rectangles, int qa, int qb)
  {
    
    rcs.clear();
    for (int  i = 0; i!= rectangles.size(); ++i)
    {
      istringstream is(rectangles[i]);
      Rect rc;
      is >> rc.x1 >> rc.y1 >> rc.x2 >> rc.y2;
      rcs.push_back(rc);
    }
 
    maxc = 0;
 
    for (int  i = 0; i != rcs.size(); ++i)
    {
      for (int  j = 0; j != rcs.size(); ++j)
      {
        {
          Rect rc = {rcs[i].x1, rcs[j].y1, rcs[i].x1 + qa, rcs[j].y1 + qb};
          maxc = max (findCover(rc), maxc);
        }
 
        {
          Rect rc = {rcs[i].x1, rcs[j].y1, rcs[i].x1 + qb, rcs[j].y1 + qa};
          maxc = max (findCover(rc), maxc);
        }
      }
    }
 
    return maxc;
  }
protected:
private:
};

********************************************************************************
*******************************************************************************/
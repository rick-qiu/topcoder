/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11740
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

class KingSort {
public:
    vector<string> getSortedList(vector<string> kings);
};

vector<string> KingSort::getSortedList(vector<string> kings) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> kings = {"Louis IX", "Louis VIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Louis VIII", "Louis IX"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> kings = {"Louis IX", "Philippe II"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Louis IX", "Philippe II"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> kings = {"Richard III", "Richard I", "Richard II"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Richard I", "Richard II", "Richard III"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> kings = {"John X", "John I", "John L", "John V"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"John I", "John V", "John X", "John L"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> kings = {"Philippe VI", "Jean II", "Charles V", "Charles VI", "Charles VII", "Louis XI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Charles V", "Charles VI", "Charles VII", "Jean II", "Louis XI", "Philippe VI"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> kings = {"Philippe II", "Philip II"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Philip II", "Philippe II"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> kings = {"Carlos XXI", "Carlos IX", "Carlos XLIX", "Carlos XLIV", "Carlos XXXV", "Carlos XXIX", "Carlos XXXIII", "Carlos XXVI", "Carlos XIII", "Carlos XLVIII", "Carlos XL", "Carlos XXXVIII", "Carlos XI", "Carlos XXIII", "Carlos XXXVII", "Carlos XXVIII", "Carlos XXV", "Carlos XXX", "Carlos XLII", "Carlos XVIII", "Carlos III", "Carlos XV", "Carlos VIII", "Carlos XXIV", "Carlos XLVI", "Carlos II", "Carlos XIV", "Carlos VI", "Carlos L", "Carlos I", "Carlos XXXIX", "Carlos XLVII", "Carlos XXXVI", "Carlos XXVII", "Carlos XX", "Carlos XXII", "Carlos XIX", "Carlos XII", "Carlos XXXIV", "Carlos XVII", "Carlos XVI", "Carlos XXXII", "Carlos X", "Carlos V", "Carlos XXXI", "Carlos IV", "Carlos XLIII", "Carlos XLI", "Carlos XLV", "Carlos VII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Carlos I", "Carlos II", "Carlos III", "Carlos IV", "Carlos V", "Carlos VI", "Carlos VII", "Carlos VIII", "Carlos IX", "Carlos X", "Carlos XI", "Carlos XII", "Carlos XIII", "Carlos XIV", "Carlos XV", "Carlos XVI", "Carlos XVII", "Carlos XVIII", "Carlos XIX", "Carlos XX", "Carlos XXI", "Carlos XXII", "Carlos XXIII", "Carlos XXIV", "Carlos XXV", "Carlos XXVI", "Carlos XXVII", "Carlos XXVIII", "Carlos XXIX", "Carlos XXX", "Carlos XXXI", "Carlos XXXII", "Carlos XXXIII", "Carlos XXXIV", "Carlos XXXV", "Carlos XXXVI", "Carlos XXXVII", "Carlos XXXVIII", "Carlos XXXIX", "Carlos XL", "Carlos XLI", "Carlos XLII", "Carlos XLIII", "Carlos XLIV", "Carlos XLV", "Carlos XLVI", "Carlos XLVII", "Carlos XLVIII", "Carlos XLIX", "Carlos L"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> kings = {"Louis VI", "Louis L", "Louis XIII", "Louis XXXIV", "Louis IV", "Louis XXI", "Louis XXII", "Louis XXXIX", "Louis XXIV", "Louis XXXVIII", "Louis X", "Louis XLIII", "Louis XLIX", "Louis XX", "Louis XXVIII", "Louis VIII", "Louis III", "Louis IX", "Louis XIX", "Louis XLV", "Louis XXV", "Louis XXXVI", "Louis XV", "Louis XXVII", "Louis XXIX", "Louis I", "Louis II", "Louis XI", "Louis XXVI", "Louis XLVIII", "Louis XXIII", "Louis XXXV", "Louis XXXVII", "Louis XXXII", "Louis XVIII", "Louis XLVII", "Louis XXXIII", "Louis XLIV", "Louis VII", "Louis XIV", "Louis XVI", "Louis XXXI", "Louis XXX", "Louis XII", "Louis XLVI", "Louis XVII", "Louis XL", "Louis XLI", "Louis V", "Louis XLII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Louis I", "Louis II", "Louis III", "Louis IV", "Louis V", "Louis VI", "Louis VII", "Louis VIII", "Louis IX", "Louis X", "Louis XI", "Louis XII", "Louis XIII", "Louis XIV", "Louis XV", "Louis XVI", "Louis XVII", "Louis XVIII", "Louis XIX", "Louis XX", "Louis XXI", "Louis XXII", "Louis XXIII", "Louis XXIV", "Louis XXV", "Louis XXVI", "Louis XXVII", "Louis XXVIII", "Louis XXIX", "Louis XXX", "Louis XXXI", "Louis XXXII", "Louis XXXIII", "Louis XXXIV", "Louis XXXV", "Louis XXXVI", "Louis XXXVII", "Louis XXXVIII", "Louis XXXIX", "Louis XL", "Louis XLI", "Louis XLII", "Louis XLIII", "Louis XLIV", "Louis XLV", "Louis XLVI", "Louis XLVII", "Louis XLVIII", "Louis XLIX", "Louis L"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> kings = {"Henry XXXVII", "Henry VII", "Henry X", "Henry XXVI", "Henry IV", "Henry VIII", "Henry XXXIII", "Henry IX", "Henry XLVIII", "Henry XLII", "Henry XLI", "Henry XLIII", "Henry XXXV", "Henry XIV", "Henry XLIV", "Henry XXV", "Henry XXIV", "Henry III", "Henry XXI", "Henry XX", "Henry XXVII", "Henry XXXVIII", "Henry XXX", "Henry XXXIX", "Henry XXIII", "Henry L", "Henry XXII", "Henry I", "Henry II", "Henry XIX", "Henry XXVIII", "Henry XXIX", "Henry XLVI", "Henry V", "Henry XXXIV", "Henry XLIX", "Henry XII", "Henry XL", "Henry XVII", "Henry XV", "Henry XI", "Henry VI", "Henry XXXI", "Henry XVI", "Henry XXXVI", "Henry XXXII", "Henry XIII", "Henry XLVII", "Henry XLV", "Henry XVIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Henry I", "Henry II", "Henry III", "Henry IV", "Henry V", "Henry VI", "Henry VII", "Henry VIII", "Henry IX", "Henry X", "Henry XI", "Henry XII", "Henry XIII", "Henry XIV", "Henry XV", "Henry XVI", "Henry XVII", "Henry XVIII", "Henry XIX", "Henry XX", "Henry XXI", "Henry XXII", "Henry XXIII", "Henry XXIV", "Henry XXV", "Henry XXVI", "Henry XXVII", "Henry XXVIII", "Henry XXIX", "Henry XXX", "Henry XXXI", "Henry XXXII", "Henry XXXIII", "Henry XXXIV", "Henry XXXV", "Henry XXXVI", "Henry XXXVII", "Henry XXXVIII", "Henry XXXIX", "Henry XL", "Henry XLI", "Henry XLII", "Henry XLIII", "Henry XLIV", "Henry XLV", "Henry XLVI", "Henry XLVII", "Henry XLVIII", "Henry XLIX", "Henry L"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> kings = {"Kubus XXVII", "Julka XXXIII", "Michail XVI", "Paul XLVII", "Mimino XL", "Luka XLVIII", "Mary XVII", "Luka VII", "Anne XXXVIII", "Maru XXIV", "Carlos XLVII", "James VII", "Henri XXXVI", "Paul XI", "Usamec XLI", "Genadij VI", "Julka XII", "Francois XXXIV", "Tomek XXX", "Rasto XL", "Anne XLV", "Louis XXIX", "Henri XXIV", "Philippe III", "Carlos XIV", "Tomek IV", "Luka XLIV", "Henri XLIV", "Henri XXII", "Mary XXVI", "Julka XXXI", "Julka XXI", "Paul XXXVIII", "Neal XLI", "Monika XXXVIII", "Lukas XXIV", "Philippe XVI", "Kubus XXXVI", "Rasto XX", "Luka XV", "Stephen XXXI", "Anne IX", "Marek XI", "Michail XLVI", "Paul XXXVI", "Richard X", "Julka XXVII", "Francois XLIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne IX", "Anne XXXVIII", "Anne XLV", "Carlos XIV", "Carlos XLVII", "Francois XXXIV", "Francois XLIII", "Genadij VI", "Henri XXII", "Henri XXIV", "Henri XXXVI", "Henri XLIV", "James VII", "Julka XII", "Julka XXI", "Julka XXVII", "Julka XXXI", "Julka XXXIII", "Kubus XXVII", "Kubus XXXVI", "Louis XXIX", "Luka VII", "Luka XV", "Luka XLIV", "Luka XLVIII", "Lukas XXIV", "Marek XI", "Maru XXIV", "Mary XVII", "Mary XXVI", "Michail XVI", "Michail XLVI", "Mimino XL", "Monika XXXVIII", "Neal XLI", "Paul XI", "Paul XXXVI", "Paul XXXVIII", "Paul XLVII", "Philippe III", "Philippe XVI", "Rasto XX", "Rasto XL", "Richard X", "Stephen XXXI", "Tomek IV", "Tomek XXX", "Usamec XLI"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> kings = {"Robert X", "Ilya VIII", "Zemco XXVII", "Mary XV", "Usamec XLII", "Robert VIII", "Janq XXV", "Usamec XLIX", "Zemco X", "Anne XIV", "Mary II", "Usamec VII", "Ilya XXV", "Robert XLIII", "Philip VI", "Mary VI", "Usamec XXXIV", "Robert XV", "Mary X", "Robert XXVIII", "Philip XXXV", "Anne XLIX", "Ilya XXVI", "Usamec IV", "Robert III", "Philip III", "Anne XXXIII", "Janq XXVIII", "Ilya XI", "Zemco III", "Zemco XXXI", "Usamec XXIII", "Ilya XLVIII", "Janq XLIII", "Janq XVI", "Philip XX", "Usamec XL", "Janq XI", "Philip XIX", "Robert XXXII", "Mary XXIII", "Mary XXIV", "Mary IX", "Ilya XXVIII", "Robert XXXI", "Robert XVII", "Robert XXXIII", "Ilya X", "Philip XV", "Ilya XXX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne XIV", "Anne XXXIII", "Anne XLIX", "Ilya VIII", "Ilya X", "Ilya XI", "Ilya XXV", "Ilya XXVI", "Ilya XXVIII", "Ilya XXX", "Ilya XLVIII", "Janq XI", "Janq XVI", "Janq XXV", "Janq XXVIII", "Janq XLIII", "Mary II", "Mary VI", "Mary IX", "Mary X", "Mary XV", "Mary XXIII", "Mary XXIV", "Philip III", "Philip VI", "Philip XV", "Philip XIX", "Philip XX", "Philip XXXV", "Robert III", "Robert VIII", "Robert X", "Robert XV", "Robert XVII", "Robert XXVIII", "Robert XXXI", "Robert XXXII", "Robert XXXIII", "Robert XLIII", "Usamec IV", "Usamec VII", "Usamec XXIII", "Usamec XXXIV", "Usamec XL", "Usamec XLII", "Usamec XLIX", "Zemco III", "Zemco X", "Zemco XXVII", "Zemco XXXI"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> kings = {"Henri XXI", "Ivan XXI", "Zemco XLII", "Charles XXXI", "Ivan L", "Zemco XL", "Zemco L", "Charles V", "Zemco XXV", "Henri XXVI", "Henri VI", "Charles XXXVI", "Henri XXX", "Ivan XXIX", "Ivan XXXIX", "Ivan XLV", "Charles XXXIX", "Ivan XXXVIII", "Charles XVII", "Henri XXXVIII", "Zemco XI", "Henri VIII", "Ivan XL", "Zemco XLVII", "Henri XXIV", "Henri L", "Charles XV", "Ivan II", "Charles XVIII", "Charles X", "Zemco XXXVIII", "Henri XXIII", "Henri XLII", "Zemco XX", "Charles XX", "Charles XVI", "Ivan XXXVI", "Ivan VII", "Charles XLVI", "Charles XLV", "Zemco XIII", "Ivan XXXIV", "Zemco VI", "Ivan XXVII", "Henri XXXIV", "Ivan XIV", "Charles XXXVIII", "Zemco XXVII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Charles V", "Charles X", "Charles XV", "Charles XVI", "Charles XVII", "Charles XVIII", "Charles XX", "Charles XXXI", "Charles XXXVI", "Charles XXXVIII", "Charles XXXIX", "Charles XLV", "Charles XLVI", "Henri VI", "Henri VIII", "Henri XXI", "Henri XXIII", "Henri XXIV", "Henri XXVI", "Henri XXX", "Henri XXXIV", "Henri XXXVIII", "Henri XLII", "Henri L", "Ivan II", "Ivan VII", "Ivan XIV", "Ivan XXI", "Ivan XXVII", "Ivan XXIX", "Ivan XXXIV", "Ivan XXXVI", "Ivan XXXVIII", "Ivan XXXIX", "Ivan XL", "Ivan XLV", "Ivan L", "Zemco VI", "Zemco XI", "Zemco XIII", "Zemco XX", "Zemco XXV", "Zemco XXVII", "Zemco XXXVIII", "Zemco XL", "Zemco XLII", "Zemco XLVII", "Zemco L"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> kings = {"Fero XXXVII", "Bruce XXX", "Lou VI", "Lou XVII", "Fero XIV", "Lou XXV", "Michail XXXIV", "John XLVI", "John I", "Michail XLII", "Lou XVIII", "Bruce XXVII", "Bruce IX", "Mimino XX", "Michail XIV", "Michail XXXI", "Fero XXIII", "Bruce XXIV", "Mimino I", "Mimino V", "Fero XLII", "Michail XII", "Mimino XXXIV", "John XVII", "Mimino XIII", "Mimino XXXII", "Bruce XII", "Mimino XXXIII", "Lou IX", "Bruce XXV", "John XII", "Fero XLIII", "Mimino II", "Lou XX", "Mimino XXVIII", "John XXVII", "Michail XXV", "Fero I", "Mimino XXXVII", "Mimino XLIV", "John XXV", "Fero XLVII", "Mimino XLV", "Bruce XVIII", "John XVIII", "Michail XVIII", "Mimino XLI", "Michail XXXVII", "Fero XII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bruce IX", "Bruce XII", "Bruce XVIII", "Bruce XXIV", "Bruce XXV", "Bruce XXVII", "Bruce XXX", "Fero I", "Fero XII", "Fero XIV", "Fero XXIII", "Fero XXXVII", "Fero XLII", "Fero XLIII", "Fero XLVII", "John I", "John XII", "John XVII", "John XVIII", "John XXV", "John XXVII", "John XLVI", "Lou VI", "Lou IX", "Lou XVII", "Lou XVIII", "Lou XX", "Lou XXV", "Michail XII", "Michail XIV", "Michail XVIII", "Michail XXV", "Michail XXXI", "Michail XXXIV", "Michail XXXVII", "Michail XLII", "Mimino I", "Mimino II", "Mimino V", "Mimino XIII", "Mimino XX", "Mimino XXVIII", "Mimino XXXII", "Mimino XXXIII", "Mimino XXXIV", "Mimino XXXVII", "Mimino XLI", "Mimino XLIV", "Mimino XLV"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> kings = {"Rasto XXXVI", "Rasto XLV", "Fero XXIX", "Fero I", "Ilya XXXV", "Ilya XLII", "Ilya XXXII", "Rasto XXXVIII", "Philippe XX", "Philippe XXXIII", "Ilya XXIX", "Fero XXIV", "Rasto XV", "Rasto III", "Ilya XXXVI", "Anicka XXXV", "Fero XIII", "Anicka II", "Philip XXXI", "Fero XV", "Ilya XLVII", "Philippe XXII", "Ilya XLIX", "Fero XXVI", "Rasto XXIII", "Anicka XII", "Rasto XL", "Philippe XLIV", "Philip XXXIX", "Anicka XXVI", "Ilya II", "Philippe X", "Fero VIII", "Rasto XVII", "Rasto XII", "Philippe XXV", "Anicka XLII", "Ilya XVI", "Rasto XLVIII", "Ilya XVII", "Philippe L", "Rasto XXV", "Anicka III", "Philippe XII", "Rasto XVIII", "Anicka VII", "Anicka XXVIII", "Philip III", "Rasto VII", "Ilya V"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka II", "Anicka III", "Anicka VII", "Anicka XII", "Anicka XXVI", "Anicka XXVIII", "Anicka XXXV", "Anicka XLII", "Fero I", "Fero VIII", "Fero XIII", "Fero XV", "Fero XXIV", "Fero XXVI", "Fero XXIX", "Ilya II", "Ilya V", "Ilya XVI", "Ilya XVII", "Ilya XXIX", "Ilya XXXII", "Ilya XXXV", "Ilya XXXVI", "Ilya XLII", "Ilya XLVII", "Ilya XLIX", "Philip III", "Philip XXXI", "Philip XXXIX", "Philippe X", "Philippe XII", "Philippe XX", "Philippe XXII", "Philippe XXV", "Philippe XXXIII", "Philippe XLIV", "Philippe L", "Rasto III", "Rasto VII", "Rasto XII", "Rasto XV", "Rasto XVII", "Rasto XVIII", "Rasto XXIII", "Rasto XXV", "Rasto XXXVI", "Rasto XXXVIII", "Rasto XL", "Rasto XLV", "Rasto XLVIII"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> kings = {"Petrzlen XLVIII", "Monika XXX", "Rasto L", "Anne XLII", "Rasto XL", "Thierry XLI", "Victoria XV", "Victoria XLI", "Victoria II", "Robert XXII", "Elizabeth III", "Henri V", "Rasto VII", "William XV", "Rasto XXIII", "Vasyl XXIV", "Tomek XLIV", "Robert VII", "Egor XXXII", "Pawel XVI", "Michail XIV", "Robert V", "Victoria XL", "Anne XI", "Elizabeth VIII", "Elizabeth XXII", "Monika XI", "Zemco XXXIX", "Lukas XIX", "Egor XL", "Victoria XXII", "Vasyl XXXV", "Mary XIII", "Zemco XXXI", "Vasyl XXXIV", "Thierry XXXVI", "Michail XLIII", "James XVIII", "Robert L", "Robert XLIII", "Anne XXII", "Henri XXXIX", "Petrzlen XXIII", "Michail XXXIII", "Vasyl XLVII", "William XIII", "Henri XXX", "Henri XLVI", "Vasyl IV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne XI", "Anne XXII", "Anne XLII", "Egor XXXII", "Egor XL", "Elizabeth III", "Elizabeth VIII", "Elizabeth XXII", "Henri V", "Henri XXX", "Henri XXXIX", "Henri XLVI", "James XVIII", "Lukas XIX", "Mary XIII", "Michail XIV", "Michail XXXIII", "Michail XLIII", "Monika XI", "Monika XXX", "Pawel XVI", "Petrzlen XXIII", "Petrzlen XLVIII", "Rasto VII", "Rasto XXIII", "Rasto XL", "Rasto L", "Robert V", "Robert VII", "Robert XXII", "Robert XLIII", "Robert L", "Thierry XXXVI", "Thierry XLI", "Tomek XLIV", "Vasyl IV", "Vasyl XXIV", "Vasyl XXXIV", "Vasyl XXXV", "Vasyl XLVII", "Victoria II", "Victoria XV", "Victoria XXII", "Victoria XL", "Victoria XLI", "William XIII", "William XV", "Zemco XXXI", "Zemco XXXIX"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> kings = {"Louis XXV", "Kubus XXXIV", "Robert XLVI", "Pawel VII", "Louis XXVII", "Robert XXXIV", "Vasyl XXVIII", "Pawel XXXVII", "Robert XXIII", "John XLVIII", "John XXVIII", "Kubus XXXV", "Vasyl III", "John XXXI", "Robert XLIV", "Robert XLIII", "Robert XIV", "Kubus XIV", "Kubus XXI", "Henry XXI", "Louis XLII", "Robert XXXIII", "Henry XXXIX", "Kubus XLVI", "John VIII", "Louis XXIII", "Pawel XLVI", "Vasyl XLVII", "John XXXVIII", "Robert XXIX", "John XXV", "John XII", "John XXXVI", "Henry XLIX", "Robert XXXI", "Vasyl XXVII", "Henry XI", "Pawel XXI", "Vasyl XXIV", "Robert IV", "Kubus XXIV", "Vasyl XXV", "Louis XXIV", "Pawel VI", "Pawel XXIV", "Kubus V", "Vasyl XXXIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Henry XI", "Henry XXI", "Henry XXXIX", "Henry XLIX", "John VIII", "John XII", "John XXV", "John XXVIII", "John XXXI", "John XXXVI", "John XXXVIII", "John XLVIII", "Kubus V", "Kubus XIV", "Kubus XXI", "Kubus XXIV", "Kubus XXXIV", "Kubus XXXV", "Kubus XLVI", "Louis XXIII", "Louis XXIV", "Louis XXV", "Louis XXVII", "Louis XLII", "Pawel VI", "Pawel VII", "Pawel XXI", "Pawel XXIV", "Pawel XXXVII", "Pawel XLVI", "Robert IV", "Robert XIV", "Robert XXIII", "Robert XXIX", "Robert XXXI", "Robert XXXIII", "Robert XXXIV", "Robert XLIII", "Robert XLIV", "Robert XLVI", "Vasyl III", "Vasyl XXIV", "Vasyl XXV", "Vasyl XXVII", "Vasyl XXVIII", "Vasyl XXXIII", "Vasyl XLVII"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> kings = {"Ilya XLIV", "Bob XXX", "Bob XXXIII", "Vasyl IX", "Zemco XXXVII", "Vasyl XXXIX", "Bob IV", "Kubus XXXI", "Tomek XXVII", "Ilya XL", "Tomek XVI", "Bob XIII", "Bob XXXII", "Paul XV", "Tomek XLIII", "Rasto XLI", "Vasyl XXIII", "Tomek XLIX", "Ilya IX", "James XXI", "Paul XXVIII", "Rasto XXVII", "Bob VI", "Vasyl XXXV", "James XL", "Ilya II", "Vasyl XXXIII", "James XXVI", "Ilya VIII", "Vasyl XXXVII", "Rasto X", "Ilya XXIII", "James XXXVII", "James XXXII", "Paul XXI", "James XLVIII", "Tomek XLII", "Paul XX", "Zemco VII", "Vasyl XVII", "Kubus XVI", "James XIV", "Ilya XXXVIII", "Rasto XLVII", "James XX", "Zemco XLIX", "Ilya XVI", "Bob XVIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bob IV", "Bob VI", "Bob XIII", "Bob XVIII", "Bob XXX", "Bob XXXII", "Bob XXXIII", "Ilya II", "Ilya VIII", "Ilya IX", "Ilya XVI", "Ilya XXIII", "Ilya XXXVIII", "Ilya XL", "Ilya XLIV", "James XIV", "James XX", "James XXI", "James XXVI", "James XXXII", "James XXXVII", "James XL", "James XLVIII", "Kubus XVI", "Kubus XXXI", "Paul XV", "Paul XX", "Paul XXI", "Paul XXVIII", "Rasto X", "Rasto XXVII", "Rasto XLI", "Rasto XLVII", "Tomek XVI", "Tomek XXVII", "Tomek XLII", "Tomek XLIII", "Tomek XLIX", "Vasyl IX", "Vasyl XVII", "Vasyl XXIII", "Vasyl XXXIII", "Vasyl XXXV", "Vasyl XXXVII", "Vasyl XXXIX", "Zemco VII", "Zemco XXXVII", "Zemco XLIX"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> kings = {"Philippe XIV", "Charles X", "Zemco XI", "Stephen VI", "Richard XVIII", "Philip VI", "Zemco XXVIII", "Bob XXXIV", "Stephen XXXI", "Philip XXVIII", "James XXVII", "Charles VI", "Stephen XLVIII", "Zemco XXII", "Goo X", "Bob XXXIII", "Bob XXV", "Charles XIII", "Richard XI", "Philip IV", "Julka XXII", "Philip III", "Julka XX", "Goo XXXV", "Philippe XXXII", "Bob XVI", "Julka XXIII", "Philip XV", "Goo XXXIX", "Charles III", "Charles XXVI", "Zemco XV", "Philip XXXVII", "Philippe XXVII", "Bob XL", "Bob X", "James XLIV", "Stephen III", "Julka XV", "Bob XXIV", "Julka XIV", "Stephen XXXV", "Julka XXXIX", "Richard XXIII", "Philippe XXXIII", "Philip II", "Charles XXIX", "Zemco XXXVII", "Bob XLIX", "Stephen XXXVI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bob X", "Bob XVI", "Bob XXIV", "Bob XXV", "Bob XXXIII", "Bob XXXIV", "Bob XL", "Bob XLIX", "Charles III", "Charles VI", "Charles X", "Charles XIII", "Charles XXVI", "Charles XXIX", "Goo X", "Goo XXXV", "Goo XXXIX", "James XXVII", "James XLIV", "Julka XIV", "Julka XV", "Julka XX", "Julka XXII", "Julka XXIII", "Julka XXXIX", "Philip II", "Philip III", "Philip IV", "Philip VI", "Philip XV", "Philip XXVIII", "Philip XXXVII", "Philippe XIV", "Philippe XXVII", "Philippe XXXII", "Philippe XXXIII", "Richard XI", "Richard XVIII", "Richard XXIII", "Stephen III", "Stephen VI", "Stephen XXXI", "Stephen XXXV", "Stephen XXXVI", "Stephen XLVIII", "Zemco XI", "Zemco XV", "Zemco XXII", "Zemco XXVIII", "Zemco XXXVII"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> kings = {"Anicka XLV", "Elizabeth XI", "Genadij XXIX", "Lou XXXI", "Anicka XI", "Philippe XLVIII", "Marek XXIII", "Elizabeth XII", "Elizabeth XXI", "Philip XV", "Lou XLIII", "Julka XXXIV", "Genadij III", "Philip XLIX", "Mimino XIV", "Michail XLVI", "Mary XXXVI", "Philip XLVI", "Pjotr XVIII", "Maru XXXV", "Genadij XXXIV", "Michail XLIX", "Elizabeth XLIX", "Paul XVI", "Neal XL", "Eryk XLV", "Edward VII", "Dmytro XXIII", "Eryk XXII", "William XXXII", "Paul XLIV", "Pawel XXVIII", "Lovro XLIV", "Marek III", "Richard X", "Kubus XXXIII", "Richard V", "Edward XXV", "Tomek XLV", "Tomek XXXVI", "Mary IX", "Stephen XLIII", "Dmytro VIII", "Philip VII", "Tomek XVII", "Neal XIII", "Henry XLIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XI", "Anicka XLV", "Dmytro VIII", "Dmytro XXIII", "Edward VII", "Edward XXV", "Elizabeth XI", "Elizabeth XII", "Elizabeth XXI", "Elizabeth XLIX", "Eryk XXII", "Eryk XLV", "Genadij III", "Genadij XXIX", "Genadij XXXIV", "Henry XLIII", "Julka XXXIV", "Kubus XXXIII", "Lou XXXI", "Lou XLIII", "Lovro XLIV", "Marek III", "Marek XXIII", "Maru XXXV", "Mary IX", "Mary XXXVI", "Michail XLVI", "Michail XLIX", "Mimino XIV", "Neal XIII", "Neal XL", "Paul XVI", "Paul XLIV", "Pawel XXVIII", "Philip VII", "Philip XV", "Philip XLVI", "Philip XLIX", "Philippe XLVIII", "Pjotr XVIII", "Richard V", "Richard X", "Stephen XLIII", "Tomek XVII", "Tomek XXXVI", "Tomek XLV", "William XXXII"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> kings = {"Charles XXVI", "James XXX", "James III", "Derek XXXVIII", "Fero IV", "Pawel XVIII", "Derek XVIII", "Charles XLVII", "Fero XXXII", "Charles XXXVI", "Charles XLIX", "Fero XXXVI", "Maru XXII", "Fero I", "James XLI", "James XLIX", "Fero XXX", "Fero V", "James XLV", "Derek IX", "Maru VII", "Charles XX", "Pawel III", "James XIX", "Fero III", "Derek XVI", "Pawel XXIV", "Derek XX", "Fero XXII", "Pawel XXII", "Charles XXVII", "Charles XXXIV", "Fero XXIX", "Pawel XLVIII", "Charles XVI", "Charles I", "Derek XLIII", "Maru XLII", "Charles XIII", "Pawel XIV", "Pawel XLV", "Maru XVI", "Fero XXXVIII", "Charles XI", "Fero XIX", "Charles XXXV", "Derek XXVII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Charles I", "Charles XI", "Charles XIII", "Charles XVI", "Charles XX", "Charles XXVI", "Charles XXVII", "Charles XXXIV", "Charles XXXV", "Charles XXXVI", "Charles XLVII", "Charles XLIX", "Derek IX", "Derek XVI", "Derek XVIII", "Derek XX", "Derek XXVII", "Derek XXXVIII", "Derek XLIII", "Fero I", "Fero III", "Fero IV", "Fero V", "Fero XIX", "Fero XXII", "Fero XXIX", "Fero XXX", "Fero XXXII", "Fero XXXVI", "Fero XXXVIII", "James III", "James XIX", "James XXX", "James XLI", "James XLV", "James XLIX", "Maru VII", "Maru XVI", "Maru XXII", "Maru XLII", "Pawel III", "Pawel XIV", "Pawel XVIII", "Pawel XXII", "Pawel XXIV", "Pawel XLV", "Pawel XLVIII"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> kings = {"Anicka XLVIII", "Henri XVII", "Lou XVIII", "William XVII", "William XXXIV", "Luka XXXVII", "Neal I", "Egor XXVI", "Egor VIII", "Lou XXIII", "Eryk XII", "William IX", "Eryk XLVII", "Goo XLII", "Pjotr XLII", "Lovro XII", "William L", "Egor XX", "Egor XXXI", "Stephen XLIV", "Victoria XXXIV", "Genadij XXIII", "Henri XXX", "Neal XV", "Pjotr XXII", "Neal II", "Tomek XLI", "Eryk XXXI", "Pjotr XXXI", "Luka XLIV", "John XI", "Egor III", "Julka XX", "Stephen L", "Anne XI", "Philip XLIII", "Anicka X", "Anne XVIII", "Pjotr XVI", "Rasto XXVII", "Goo XX", "Mary IV", "Bob XXXIII", "Genadij XIII", "Philip XII", "Neal XX", "Stephen XXXVIII", "Philippe XVIII", "Michail XXII", "Michail XXI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka X", "Anicka XLVIII", "Anne XI", "Anne XVIII", "Bob XXXIII", "Egor III", "Egor VIII", "Egor XX", "Egor XXVI", "Egor XXXI", "Eryk XII", "Eryk XXXI", "Eryk XLVII", "Genadij XIII", "Genadij XXIII", "Goo XX", "Goo XLII", "Henri XVII", "Henri XXX", "John XI", "Julka XX", "Lou XVIII", "Lou XXIII", "Lovro XII", "Luka XXXVII", "Luka XLIV", "Mary IV", "Michail XXI", "Michail XXII", "Neal I", "Neal II", "Neal XV", "Neal XX", "Philip XII", "Philip XLIII", "Philippe XVIII", "Pjotr XVI", "Pjotr XXII", "Pjotr XXXI", "Pjotr XLII", "Rasto XXVII", "Stephen XXXVIII", "Stephen XLIV", "Stephen L", "Tomek XLI", "Victoria XXXIV", "William IX", "William XVII", "William XXXIV", "William L"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> kings = {"Anicka XLII", "Anicka IX", "Francois XXII", "Mary XVIII", "Lou X", "Usamec X", "Bob X", "Lou XXVII", "Mary VIII", "Julka XXIII", "Robert VI", "Derek XXVIII", "Michail IX", "Mary XVI", "Bruce III", "Lou XXV", "Makoto XXXII", "Stephen XLVIII", "Paul XXXV", "Lukas XLVI", "Lukas XLIV", "Ilya V", "Edward XI", "Carlos XXXII", "Rasto XXIII", "Dmytro XX", "Petrzlen XI", "Victoria XLVII", "Fero XXIII", "Francois XVII", "Bob XXVII", "Pawel XLVII", "Maru XLVIII", "Robert I", "James XXI", "Dmytro XLIX", "Thierry XLI", "John XXXIII", "Mary XXXIX", "Usamec XII", "Lou XVIII", "Ivan XXIV", "Zemco XLII", "Paul IV", "Stephen XV", "Julka XI", "Henri XVII", "Lou XXXVI", "Makoto XXXIV", "James XXIX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka IX", "Anicka XLII", "Bob X", "Bob XXVII", "Bruce III", "Carlos XXXII", "Derek XXVIII", "Dmytro XX", "Dmytro XLIX", "Edward XI", "Fero XXIII", "Francois XVII", "Francois XXII", "Henri XVII", "Ilya V", "Ivan XXIV", "James XXI", "James XXIX", "John XXXIII", "Julka XI", "Julka XXIII", "Lou X", "Lou XVIII", "Lou XXV", "Lou XXVII", "Lou XXXVI", "Lukas XLIV", "Lukas XLVI", "Makoto XXXII", "Makoto XXXIV", "Maru XLVIII", "Mary VIII", "Mary XVI", "Mary XVIII", "Mary XXXIX", "Michail IX", "Paul IV", "Paul XXXV", "Pawel XLVII", "Petrzlen XI", "Rasto XXIII", "Robert I", "Robert VI", "Stephen XV", "Stephen XLVIII", "Thierry XLI", "Usamec X", "Usamec XII", "Victoria XLVII", "Zemco XLII"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> kings = {"Francois IX", "Petrzlen VIII", "Usamec L", "Francois XVI", "Richard XXXI", "Pjotr VIII", "Henry X", "Dmytro XXVI", "Stephen XLIX", "Richard VIII", "Egor XXIII", "Egor XIX", "Francois XXXIX", "Luka III", "Zemco X", "Egor XVIII", "Vasyl XIV", "Stephen VII", "Dmytro X", "Usamec I", "Vasyl L", "Lou XLVIII", "Pjotr XXXVII", "Richard III", "Stephen X", "Lovro XXIX", "Richard XXXVI", "Zemco XLIV", "Dmytro XXXII", "Usamec XIX", "Lovro XXVI", "Lovro XLIV", "Francois VIII", "Francois VII", "Stephen III", "Rasto XXII", "Pjotr XXII", "John XL", "Egor XVII", "Usamec XII", "Anicka XIV", "Vasyl XL", "Luka XXXI", "Egor XLIX", "Usamec X", "Makoto III", "Richard XLV", "Pawel XIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XIV", "Dmytro X", "Dmytro XXVI", "Dmytro XXXII", "Egor XVII", "Egor XVIII", "Egor XIX", "Egor XXIII", "Egor XLIX", "Francois VII", "Francois VIII", "Francois IX", "Francois XVI", "Francois XXXIX", "Henry X", "John XL", "Lou XLVIII", "Lovro XXVI", "Lovro XXIX", "Lovro XLIV", "Luka III", "Luka XXXI", "Makoto III", "Pawel XIV", "Petrzlen VIII", "Pjotr VIII", "Pjotr XXII", "Pjotr XXXVII", "Rasto XXII", "Richard III", "Richard VIII", "Richard XXXI", "Richard XXXVI", "Richard XLV", "Stephen III", "Stephen VII", "Stephen X", "Stephen XLIX", "Usamec I", "Usamec X", "Usamec XII", "Usamec XIX", "Usamec L", "Vasyl XIV", "Vasyl XL", "Vasyl L", "Zemco X", "Zemco XLIV"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> kings = {"Dmytro XIX", "Eryk XLIII", "Tomek XLV", "Vasyl XV", "Edward XVIII", "Lukas IV", "Janq XLVIII", "Elizabeth XLIX", "Richard XXXVII", "Pjotr XI", "Philippe XL", "Monika XXX", "Lukas VI", "Lou XXVII", "Paul XXXVI", "Tomek XX", "Pawel IX", "Janq XXX", "Stephen XLII", "Robert XI", "Vasyl XI", "John XLVII", "John XXVI", "Pjotr XXXI", "Francois XLI", "Robert XLIV", "Lou XLIV", "Francois XII", "James X", "Richard XL", "Marek XIII", "Janq XXVIII", "Thierry XL", "Paul VIII", "James IX", "Pawel XVIII", "Pawel XLII", "Lou XXXVII", "Marek XXXI", "Bob VI", "Richard XV", "Elizabeth XV", "Usamec XIII", "Robert XXXII", "Lou XXIV", "Thierry XXIV", "Pjotr XIV", "Michail XLVI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bob VI", "Dmytro XIX", "Edward XVIII", "Elizabeth XV", "Elizabeth XLIX", "Eryk XLIII", "Francois XII", "Francois XLI", "James IX", "James X", "Janq XXVIII", "Janq XXX", "Janq XLVIII", "John XXVI", "John XLVII", "Lou XXIV", "Lou XXVII", "Lou XXXVII", "Lou XLIV", "Lukas IV", "Lukas VI", "Marek XIII", "Marek XXXI", "Michail XLVI", "Monika XXX", "Paul VIII", "Paul XXXVI", "Pawel IX", "Pawel XVIII", "Pawel XLII", "Philippe XL", "Pjotr XI", "Pjotr XIV", "Pjotr XXXI", "Richard XV", "Richard XXXVII", "Richard XL", "Robert XI", "Robert XXXII", "Robert XLIV", "Stephen XLII", "Thierry XXIV", "Thierry XL", "Tomek XX", "Tomek XLV", "Usamec XIII", "Vasyl XI", "Vasyl XV"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> kings = {"Francois VI", "Francois XXIII", "Francois XX", "Francois XXV", "Petrzlen XXXIV", "Paul VIII", "Louis XLIII", "Philippe XXXVIII", "Luka I", "Mary XXVIII", "Bruce XXVI", "Tomek V", "Luka XXXVII", "Petrzlen I", "Paul VI", "Mary XXX", "Luka XLII", "Bruce XLI", "Tomek VIII", "Luka XXII", "Bruce XVIII", "Rasto XV", "Maru XLI", "Francois XXIV", "Mary XXIV", "Maru XXXIV", "Louis XXIX", "Francois XL", "Philippe L", "Bruce XXVII", "Maru XXXV", "Tomek IX", "Paul XLIX", "Petrzlen XX", "Petrzlen XXXVII", "Paul XX", "Maru XVIII", "Louis XLI", "Mary XLII", "Luka XVII", "Paul XVII", "Louis XV", "Mary XXXV", "Philippe XV", "Petrzlen XVI", "Mimino XXXVIII", "Philippe VII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bruce XVIII", "Bruce XXVI", "Bruce XXVII", "Bruce XLI", "Francois VI", "Francois XX", "Francois XXIII", "Francois XXIV", "Francois XXV", "Francois XL", "Louis XV", "Louis XXIX", "Louis XLI", "Louis XLIII", "Luka I", "Luka XVII", "Luka XXII", "Luka XXXVII", "Luka XLII", "Maru XVIII", "Maru XXXIV", "Maru XXXV", "Maru XLI", "Mary XXIV", "Mary XXVIII", "Mary XXX", "Mary XXXV", "Mary XLII", "Mimino XXXVIII", "Paul VI", "Paul VIII", "Paul XVII", "Paul XX", "Paul XLIX", "Petrzlen I", "Petrzlen XVI", "Petrzlen XX", "Petrzlen XXXIV", "Petrzlen XXXVII", "Philippe VII", "Philippe XV", "Philippe XXXVIII", "Philippe L", "Rasto XV", "Tomek V", "Tomek VIII", "Tomek IX"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> kings = {"Lovro XLIII", "Zemco VII", "Ivan XXIII", "Edward XV", "Richard XXVI", "Goo XV", "Henri VI", "Lovro XII", "Carlos XXI", "Stephen XXXII", "Stephen XXXIV", "Carlos XLV", "Lovro XXIX", "Lovro XXVIII", "Edward XIV", "Derek XX", "Philippe XXVI", "Henri XLI", "Philippe XXXIV", "Bob XLVII", "Bob XXI", "Goo XLV", "Lou XLII", "Lovro XXXVIII", "Henri XVII", "Lou L", "Bruce XLIII", "Lou II", "Henri XIII", "Lou XXII", "Stephen XLIX", "Lou XII", "Anne XLV", "Lovro XLVI", "Ivan XLIX", "Ivan XIII", "Bob XXXV", "Edward L", "Derek X", "Philippe XXV", "Carlos V", "Stephen XXXV", "Ivan IX", "Lovro XL", "Lou XLIV", "Zemco XXXVI", "Bob XXXVIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne XLV", "Bob XXI", "Bob XXXV", "Bob XXXVIII", "Bob XLVII", "Bruce XLIII", "Carlos V", "Carlos XXI", "Carlos XLV", "Derek X", "Derek XX", "Edward XIV", "Edward XV", "Edward L", "Goo XV", "Goo XLV", "Henri VI", "Henri XIII", "Henri XVII", "Henri XLI", "Ivan IX", "Ivan XIII", "Ivan XXIII", "Ivan XLIX", "Lou II", "Lou XII", "Lou XXII", "Lou XLII", "Lou XLIV", "Lou L", "Lovro XII", "Lovro XXVIII", "Lovro XXIX", "Lovro XXXVIII", "Lovro XL", "Lovro XLIII", "Lovro XLVI", "Philippe XXV", "Philippe XXVI", "Philippe XXXIV", "Richard XXVI", "Stephen XXXII", "Stephen XXXIV", "Stephen XXXV", "Stephen XLIX", "Zemco VII", "Zemco XXXVI"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> kings = {"Vasyl VI", "John XXX", "Vasyl XVII", "Thierry XXIV", "John XXI", "Monika XXVI", "John XXXVII", "Thierry XXXVIII", "Lou L", "Vasyl XVI", "Thierry XXVIII", "Ivan XLII", "Ivan XXIX", "Robert VI", "Robert XXIX", "Lou I", "Makoto XLII", "John XLV", "Vasyl XIV", "Lou XXI", "Ivan XIII", "Vasyl XXIX", "Lou XXXII", "Monika XI", "Robert XXXVIII", "Lou III", "John XXXI", "John XLVIII", "Robert XIII", "Monika XXXIV", "Robert XXVIII", "Lou XV", "Thierry XLIV", "Vasyl XLIV", "John XXIII", "Ivan XIV", "Vasyl XXIV", "John XI", "Thierry XXI", "Vasyl XXXIV", "Monika XVI", "Robert XXXIX", "Lou VIII", "Thierry XVII", "Thierry XXXI", "Vasyl II", "Thierry XII", "Ivan IV", "Monika I"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ivan IV", "Ivan XIII", "Ivan XIV", "Ivan XXIX", "Ivan XLII", "John XI", "John XXI", "John XXIII", "John XXX", "John XXXI", "John XXXVII", "John XLV", "John XLVIII", "Lou I", "Lou III", "Lou VIII", "Lou XV", "Lou XXI", "Lou XXXII", "Lou L", "Makoto XLII", "Monika I", "Monika XI", "Monika XVI", "Monika XXVI", "Monika XXXIV", "Robert VI", "Robert XIII", "Robert XXVIII", "Robert XXIX", "Robert XXXVIII", "Robert XXXIX", "Thierry XII", "Thierry XVII", "Thierry XXI", "Thierry XXIV", "Thierry XXVIII", "Thierry XXXI", "Thierry XXXVIII", "Thierry XLIV", "Vasyl II", "Vasyl VI", "Vasyl XIV", "Vasyl XVI", "Vasyl XVII", "Vasyl XXIV", "Vasyl XXIX", "Vasyl XXXIV", "Vasyl XLIV"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> kings = {"Richard XXXVI", "Genadij XXVIII", "Louis VI", "Anicka L", "Usamec XXXV", "Julka XXX", "Paul XIII", "Eryk XXVII", "Usamec XXI", "Lou XLIII", "Paul XIV", "William III", "Lukas XXXIII", "Richard L", "William XXVIII", "Lou XXIII", "Lukas IV", "Julka XLVII", "Richard XLV", "Genadij XXII", "Genadij XXXIX", "Lou XLVI", "Robert III", "Robert L", "Henri XI", "Henri XXVI", "Anicka XXXVIII", "William XLVI", "Usamec XXXIX", "Anicka IV", "Monika XXII", "Lou XX", "Eryk XLV", "Anicka XLIV", "Usamec XXX", "Louis XVII", "Anicka XIX", "Robert XXV", "Eryk VI", "Usamec XVII", "Ilya II", "Lukas XLVII", "Richard XII", "Usamec XXXVII", "Lukas XLIX", "Lou III", "Lou XXVII", "Ilya VI", "Usamec X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka IV", "Anicka XIX", "Anicka XXXVIII", "Anicka XLIV", "Anicka L", "Eryk VI", "Eryk XXVII", "Eryk XLV", "Genadij XXII", "Genadij XXVIII", "Genadij XXXIX", "Henri XI", "Henri XXVI", "Ilya II", "Ilya VI", "Julka XXX", "Julka XLVII", "Lou III", "Lou XX", "Lou XXIII", "Lou XXVII", "Lou XLIII", "Lou XLVI", "Louis VI", "Louis XVII", "Lukas IV", "Lukas XXXIII", "Lukas XLVII", "Lukas XLIX", "Monika XXII", "Paul XIII", "Paul XIV", "Richard XII", "Richard XXXVI", "Richard XLV", "Richard L", "Robert III", "Robert XXV", "Robert L", "Usamec X", "Usamec XVII", "Usamec XXI", "Usamec XXX", "Usamec XXXV", "Usamec XXXVII", "Usamec XXXIX", "William III", "William XXVIII", "William XLVI"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> kings = {"James XXXIX", "Goo XVI", "Mimino XXIII", "Victoria XXX", "William XXIV", "Charles XXV", "Luka XV", "Mimino XXIX", "Neal XXVI", "Dmytro XLVIII", "Charles XXXVI", "Janq XXVIII", "Charles XLVII", "Lou VI", "Carlos I", "Marek XV", "Goo XLIX", "Michail III", "Carlos XLIII", "Anicka XLIII", "Henry XIV", "Luka VII", "Ilya XXXII", "William III", "Ivan III", "Lou IX", "James XI", "Rasto XX", "Elizabeth XXIII", "Elizabeth XXXVII", "Michail XLIII", "Pjotr XXIX", "Marek XXXIX", "Neal XLVII", "Egor XXIII", "Mimino XXXIII", "Kubus XXXIX", "Kubus XL", "Victoria XVII", "Eryk VII", "Anicka VII", "Anne L", "Henry XLVII", "Lou III", "Mimino V", "Usamec XLIII", "Janq XXIX", "Victoria XXXVI", "Neal XXXIV", "Victoria XLIX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka VII", "Anicka XLIII", "Anne L", "Carlos I", "Carlos XLIII", "Charles XXV", "Charles XXXVI", "Charles XLVII", "Dmytro XLVIII", "Egor XXIII", "Elizabeth XXIII", "Elizabeth XXXVII", "Eryk VII", "Goo XVI", "Goo XLIX", "Henry XIV", "Henry XLVII", "Ilya XXXII", "Ivan III", "James XI", "James XXXIX", "Janq XXVIII", "Janq XXIX", "Kubus XXXIX", "Kubus XL", "Lou III", "Lou VI", "Lou IX", "Luka VII", "Luka XV", "Marek XV", "Marek XXXIX", "Michail III", "Michail XLIII", "Mimino V", "Mimino XXIII", "Mimino XXIX", "Mimino XXXIII", "Neal XXVI", "Neal XXXIV", "Neal XLVII", "Pjotr XXIX", "Rasto XX", "Usamec XLIII", "Victoria XVII", "Victoria XXX", "Victoria XXXVI", "Victoria XLIX", "William III", "William XXIV"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> kings = {"Marek XLII", "Lou XXVII", "Louis XXXVI", "Henry XLV", "Thierry XLI", "Lou XII", "Lovro VI", "Bruce VIII", "Bruce XLIII", "Louis XXIX", "Makoto XXVII", "Makoto XIX", "Derek XLII", "Maru XV", "Thierry L", "Philippe XXIV", "Makoto XXVIII", "Henry X", "Lovro XXI", "Henri XXXVIII", "Francois XLII", "Marek VII", "Charles XI", "Bruce XLI", "Maru XXXII", "Marek XXVIII", "Marek XX", "Thierry XLIX", "John XXIX", "Lovro XXVIII", "Ivan XVIII", "Francois XXVI", "Makoto XVII", "Charles XXIX", "Philippe XXXI", "Louis XX", "John XXVII", "Francois XLVII", "Louis III", "Henry XXXII", "Makoto XXXVIII", "Henry XXXVI", "Maru XXVIII", "John XII", "Lou IV", "Ivan XIX", "Pawel XXV", "Makoto IX", "Bruce XVII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bruce VIII", "Bruce XVII", "Bruce XLI", "Bruce XLIII", "Charles XI", "Charles XXIX", "Derek XLII", "Francois XXVI", "Francois XLII", "Francois XLVII", "Henri XXXVIII", "Henry X", "Henry XXXII", "Henry XXXVI", "Henry XLV", "Ivan XVIII", "Ivan XIX", "John XII", "John XXVII", "John XXIX", "Lou IV", "Lou XII", "Lou XXVII", "Louis III", "Louis XX", "Louis XXIX", "Louis XXXVI", "Lovro VI", "Lovro XXI", "Lovro XXVIII", "Makoto IX", "Makoto XVII", "Makoto XIX", "Makoto XXVII", "Makoto XXVIII", "Makoto XXXVIII", "Marek VII", "Marek XX", "Marek XXVIII", "Marek XLII", "Maru XV", "Maru XXVIII", "Maru XXXII", "Pawel XXV", "Philippe XXIV", "Philippe XXXI", "Thierry XLI", "Thierry XLIX", "Thierry L"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> kings = {"Janq V", "Kubus XXXII", "Genadij XVIII", "Genadij XXXV", "Henry XXVII", "Tomek XXIX", "Pjotr XXXIII", "Anne XIV", "Marek XLVI", "Bob XXII", "Pawel XLVII", "Lukas XLIII", "Anne XXX", "Michail XLVII", "Lou XLIII", "Ivan XLI", "Bruce XVIII", "Victoria L", "Kubus IV", "Thierry XXX", "Pawel XXXIX", "Anne VI", "Monika XLVIII", "Thierry XXVIII", "Petrzlen XI", "Kubus XXXVI", "Robert X", "Bruce XXXVII", "Egor XLVII", "Richard XVIII", "Dmytro XXXV", "Egor XXXI", "Elizabeth III", "Goo III", "Julka XLV", "Julka XXXVI", "Ilya XXXVIII", "Goo XXX", "Monika XVI", "Luka XVI", "Pawel III", "Janq II", "Henry XVIII", "John XLV", "Anne II", "John XXIV", "Usamec XXXIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne II", "Anne VI", "Anne XIV", "Anne XXX", "Bob XXII", "Bruce XVIII", "Bruce XXXVII", "Dmytro XXXV", "Egor XXXI", "Egor XLVII", "Elizabeth III", "Genadij XVIII", "Genadij XXXV", "Goo III", "Goo XXX", "Henry XVIII", "Henry XXVII", "Ilya XXXVIII", "Ivan XLI", "Janq II", "Janq V", "John XXIV", "John XLV", "Julka XXXVI", "Julka XLV", "Kubus IV", "Kubus XXXII", "Kubus XXXVI", "Lou XLIII", "Luka XVI", "Lukas XLIII", "Marek XLVI", "Michail XLVII", "Monika XVI", "Monika XLVIII", "Pawel III", "Pawel XXXIX", "Pawel XLVII", "Petrzlen XI", "Pjotr XXXIII", "Richard XVIII", "Robert X", "Thierry XXVIII", "Thierry XXX", "Tomek XXIX", "Usamec XXXIV", "Victoria L"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> kings = {"Anicka XVII", "Monika XXXVII", "Philip XXV", "Philippe XIII", "Philippe III", "Ilya XV", "Monika XXII", "Ilya XIX", "Mimino XXXIX", "Ilya XVII", "Mimino XXII", "Lovro XLIX", "Philip XLV", "Anicka XXIV", "Mimino XVII", "Ilya XXXVII", "Anicka XVIII", "Robert XXII", "Robert II", "Robert XLVII", "Philippe IX", "Ilya XLI", "Ilya XXXI", "Lovro XII", "Mimino XLV", "Monika XVII", "Lovro XXXIX", "Robert XXVI", "Philip XVI", "Philippe VIII", "Mimino XXVI", "Anicka XI", "Francois V", "Derek XXVIII", "Ilya IV", "Robert XXXII", "Philippe XLV", "Mimino XIX", "Anicka XLIV", "Lovro IX", "Lovro XLVIII", "Philippe XIX", "Philippe V", "Ilya XXII", "Philippe XI", "Francois XLVIII", "Robert XXIX", "Ilya XLVII", "Philip XIII", "Anicka XLVI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XI", "Anicka XVII", "Anicka XVIII", "Anicka XXIV", "Anicka XLIV", "Anicka XLVI", "Derek XXVIII", "Francois V", "Francois XLVIII", "Ilya IV", "Ilya XV", "Ilya XVII", "Ilya XIX", "Ilya XXII", "Ilya XXXI", "Ilya XXXVII", "Ilya XLI", "Ilya XLVII", "Lovro IX", "Lovro XII", "Lovro XXXIX", "Lovro XLVIII", "Lovro XLIX", "Mimino XVII", "Mimino XIX", "Mimino XXII", "Mimino XXVI", "Mimino XXXIX", "Mimino XLV", "Monika XVII", "Monika XXII", "Monika XXXVII", "Philip XIII", "Philip XVI", "Philip XXV", "Philip XLV", "Philippe III", "Philippe V", "Philippe VIII", "Philippe IX", "Philippe XI", "Philippe XIII", "Philippe XIX", "Philippe XLV", "Robert II", "Robert XXII", "Robert XXVI", "Robert XXIX", "Robert XXXII", "Robert XLVII"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> kings = {"Janq XVIII", "Lovro XX", "Henri L", "Bruce XXX", "Henri XIII", "Michail II", "Anicka XLI", "Kubus IV", "Francois XXIX", "Tomek XLV", "James IX", "Maru L", "Tomek VII", "Philip XXII", "Anicka XL", "William XXXI", "Pjotr XVII", "Pjotr XXXIX", "Henri XLII", "Lukas XIV", "Tomek IX", "Henri III", "James XIV", "Lukas XXXIX", "James XLI", "Bruce XXXVIII", "Genadij XXX", "Anicka XIII", "Bruce XV", "Francois XIII", "Philip XLVI", "Kubus VI", "Francois XXVII", "William XIV", "Lukas XLVI", "Janq X", "Vasyl XXXIII", "Kubus XV", "Maru VII", "Vasyl V", "Genadij XIV", "Janq XXXIII", "Genadij XII", "Michail VI", "Maru XLII", "Bruce XXV", "Kubus XXXIII", "Francois XXV", "Vasyl XX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XIII", "Anicka XL", "Anicka XLI", "Bruce XV", "Bruce XXV", "Bruce XXX", "Bruce XXXVIII", "Francois XIII", "Francois XXV", "Francois XXVII", "Francois XXIX", "Genadij XII", "Genadij XIV", "Genadij XXX", "Henri III", "Henri XIII", "Henri XLII", "Henri L", "James IX", "James XIV", "James XLI", "Janq X", "Janq XVIII", "Janq XXXIII", "Kubus IV", "Kubus VI", "Kubus XV", "Kubus XXXIII", "Lovro XX", "Lukas XIV", "Lukas XXXIX", "Lukas XLVI", "Maru VII", "Maru XLII", "Maru L", "Michail II", "Michail VI", "Philip XXII", "Philip XLVI", "Pjotr XVII", "Pjotr XXXIX", "Tomek VII", "Tomek IX", "Tomek XLV", "Vasyl V", "Vasyl XX", "Vasyl XXXIII", "William XIV", "William XXXI"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> kings = {"Bruce XXXIII", "Usamec L", "Louis XXXVII", "Paul XXVI", "Ilya XXXIII", "Bruce X", "Ilya XXXII", "Bruce XLI", "Ilya III", "Bruce XXXIV", "Ilya XXIII", "Pawel IX", "Paul IX", "Bruce VI", "Usamec XXXV", "Usamec XXXIII", "Louis V", "Bruce XXXI", "Bruce XLVIII", "Bob XIX", "Louis XXVI", "Louis XXIII", "Bruce XXIII", "Ilya XLIV", "Bob VI", "Louis II", "Bruce IX", "Usamec XXIX", "Bruce II", "Usamec XXXIV", "Pawel XXVI", "Ilya XII", "Pawel XXXIX", "Ilya IX", "Paul XV", "Ilya XIII", "Bruce XXI", "Louis XXVII", "Usamec XXX", "Pawel V", "Pawel XXXVI", "Pawel X", "Usamec XVIII", "Ilya XLVI", "Usamec XXXVIII", "Bruce XXV", "Usamec XLIII", "Louis XXXII", "Bob XXXVI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bob VI", "Bob XIX", "Bob XXXVI", "Bruce II", "Bruce VI", "Bruce IX", "Bruce X", "Bruce XXI", "Bruce XXIII", "Bruce XXV", "Bruce XXXI", "Bruce XXXIII", "Bruce XXXIV", "Bruce XLI", "Bruce XLVIII", "Ilya III", "Ilya IX", "Ilya XII", "Ilya XIII", "Ilya XXIII", "Ilya XXXII", "Ilya XXXIII", "Ilya XLIV", "Ilya XLVI", "Louis II", "Louis V", "Louis XXIII", "Louis XXVI", "Louis XXVII", "Louis XXXII", "Louis XXXVII", "Paul IX", "Paul XV", "Paul XXVI", "Pawel V", "Pawel IX", "Pawel X", "Pawel XXVI", "Pawel XXXVI", "Pawel XXXIX", "Usamec XVIII", "Usamec XXIX", "Usamec XXX", "Usamec XXXIII", "Usamec XXXIV", "Usamec XXXV", "Usamec XXXVIII", "Usamec XLIII", "Usamec L"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> kings = {"Derek XLVII", "Derek VI", "Louis XXXIX", "Louis XI", "Derek XXX", "Derek IX", "Derek L", "Louis XLIII", "Derek XXXVIII", "Derek XXIV", "Derek XV", "Derek XLI", "Louis XXXVII", "Derek XXII", "Louis XL", "Louis XII", "Derek XX", "Louis XXI", "Louis XLI", "Derek XXXIV", "Louis L", "Louis VIII", "Louis XXV", "Derek XXIX", "Derek XLII", "Louis XXIII", "Derek XXVII", "Louis XXXV", "Louis XXIV", "Louis XXXIII", "Louis X", "Derek XVIII", "Derek XVI", "Louis XVII", "Derek XXXIX", "Louis V", "Derek XLV", "Louis XLIV", "Derek XII", "Louis XLIX", "Louis XXII", "Derek X", "Derek XL", "Derek XVII", "Louis XIX", "Derek XLIV", "Louis III", "Louis IV", "Louis XXXIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Derek VI", "Derek IX", "Derek X", "Derek XII", "Derek XV", "Derek XVI", "Derek XVII", "Derek XVIII", "Derek XX", "Derek XXII", "Derek XXIV", "Derek XXVII", "Derek XXIX", "Derek XXX", "Derek XXXIV", "Derek XXXVIII", "Derek XXXIX", "Derek XL", "Derek XLI", "Derek XLII", "Derek XLIV", "Derek XLV", "Derek XLVII", "Derek L", "Louis III", "Louis IV", "Louis V", "Louis VIII", "Louis X", "Louis XI", "Louis XII", "Louis XVII", "Louis XIX", "Louis XXI", "Louis XXII", "Louis XXIII", "Louis XXIV", "Louis XXV", "Louis XXXIII", "Louis XXXIV", "Louis XXXV", "Louis XXXVII", "Louis XXXIX", "Louis XL", "Louis XLI", "Louis XLIII", "Louis XLIV", "Louis XLIX", "Louis L"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> kings = {"Bruce L", "Zemco XXII", "Neal XXVIII", "Victoria XVII", "Henri XIX", "Francois XXXIII", "Kubus VI", "Ivan XII", "Francois XLIV", "James XXIV", "Richard XXXI", "Michail I", "Henri XX", "Neal XLIII", "Usamec XLV", "Neal IV", "Stephen XX", "William XX", "Maru XXXI", "Francois XXVIII", "Michail XXX", "Lou XXXIII", "Monika XLI", "Anicka V", "Henry IX", "Henri III", "William XV", "Kubus XXII", "Egor XVII", "Stephen XXXVIII", "William II", "Francois II", "William XVI", "Thierry X", "Julka XLI", "Paul XXXII", "Kubus XVI", "Henry XLVI", "Stephen XLVIII", "James XLIX", "Egor XLIX", "Michail XXV", "Neal XLIX", "Monika XIII", "William XXXVIII", "Monika XIV", "Lou XIX", "Paul XIII", "Stephen XLV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka V", "Bruce L", "Egor XVII", "Egor XLIX", "Francois II", "Francois XXVIII", "Francois XXXIII", "Francois XLIV", "Henri III", "Henri XIX", "Henri XX", "Henry IX", "Henry XLVI", "Ivan XII", "James XXIV", "James XLIX", "Julka XLI", "Kubus VI", "Kubus XVI", "Kubus XXII", "Lou XIX", "Lou XXXIII", "Maru XXXI", "Michail I", "Michail XXV", "Michail XXX", "Monika XIII", "Monika XIV", "Monika XLI", "Neal IV", "Neal XXVIII", "Neal XLIII", "Neal XLIX", "Paul XIII", "Paul XXXII", "Richard XXXI", "Stephen XX", "Stephen XXXVIII", "Stephen XLV", "Stephen XLVIII", "Thierry X", "Usamec XLV", "Victoria XVII", "William II", "William XV", "William XVI", "William XX", "William XXXVIII", "Zemco XXII"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> kings = {"Mimino XV", "Henri XVI", "Carlos XX", "Lovro XLII", "Mimino XIII", "Henri XXVIII", "Mimino XX", "Mimino XVII", "Paul XXII", "Victoria XXVIII", "Henri XIX", "Mimino XLVI", "Mimino XXVII", "Mimino XXXIX", "Carlos VI", "Henri XXII", "Victoria XXV", "Mimino XLI", "Paul XLIII", "Edward XXXIV", "Edward XIII", "Henri XXXVIII", "Henri XXXV", "Mimino XLVII", "Edward XXXVII", "Mimino XXI", "Carlos V", "Victoria XIII", "Mimino II", "Paul XXXIX", "Victoria XLVI", "Paul II", "Carlos L", "Henri XLI", "Edward XLIII", "Edward XLVI", "Carlos XXXVIII", "Lovro XXV", "Lovro XVII", "Victoria XII", "Lovro XXII", "Mimino XXIX", "Victoria VI", "Carlos XII", "Paul XXXIII", "Victoria XXVII", "Mimino XXXIII", "Edward VII", "Paul III", "Mimino XL"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Carlos V", "Carlos VI", "Carlos XII", "Carlos XX", "Carlos XXXVIII", "Carlos L", "Edward VII", "Edward XIII", "Edward XXXIV", "Edward XXXVII", "Edward XLIII", "Edward XLVI", "Henri XVI", "Henri XIX", "Henri XXII", "Henri XXVIII", "Henri XXXV", "Henri XXXVIII", "Henri XLI", "Lovro XVII", "Lovro XXII", "Lovro XXV", "Lovro XLII", "Mimino II", "Mimino XIII", "Mimino XV", "Mimino XVII", "Mimino XX", "Mimino XXI", "Mimino XXVII", "Mimino XXIX", "Mimino XXXIII", "Mimino XXXIX", "Mimino XL", "Mimino XLI", "Mimino XLVI", "Mimino XLVII", "Paul II", "Paul III", "Paul XXII", "Paul XXXIII", "Paul XXXIX", "Paul XLIII", "Victoria VI", "Victoria XII", "Victoria XIII", "Victoria XXV", "Victoria XXVII", "Victoria XXVIII", "Victoria XLVI"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> kings = {"Vasyl XLII", "Tomek IV", "William XXX", "Mary XLIV", "Henri XIV", "Janq XXIX", "Thierry XIX", "Richard XXIII", "Bob V", "Edward II", "Tomek XXXVIII", "Zemco X", "Neal IX", "Derek XLIV", "Ilya XXIV", "Neal XXVI", "James IV", "Lukas XXXII", "Genadij XIV", "Fero XLV", "Elizabeth XLVI", "Lukas XII", "Lovro XI", "Derek XLI", "Derek XXI", "Dmytro L", "Zemco XXIX", "Tomek XXX", "Bruce XXIII", "Ilya XV", "Marek XXVI", "Luka XXVI", "Carlos XXX", "Bob XLIX", "Lukas XLII", "Charles XXIII", "John II", "Henry XL", "Monika XXXIII", "Ivan XV", "William XXXIX", "Zemco XXXIV", "Vasyl V", "Monika XXXII", "William XXVII", "Usamec XLIV", "Louis XVI", "Mary XVII", "Lou XXVI", "Anicka XXXIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XXXIII", "Bob V", "Bob XLIX", "Bruce XXIII", "Carlos XXX", "Charles XXIII", "Derek XXI", "Derek XLI", "Derek XLIV", "Dmytro L", "Edward II", "Elizabeth XLVI", "Fero XLV", "Genadij XIV", "Henri XIV", "Henry XL", "Ilya XV", "Ilya XXIV", "Ivan XV", "James IV", "Janq XXIX", "John II", "Lou XXVI", "Louis XVI", "Lovro XI", "Luka XXVI", "Lukas XII", "Lukas XXXII", "Lukas XLII", "Marek XXVI", "Mary XVII", "Mary XLIV", "Monika XXXII", "Monika XXXIII", "Neal IX", "Neal XXVI", "Richard XXIII", "Thierry XIX", "Tomek IV", "Tomek XXX", "Tomek XXXVIII", "Usamec XLIV", "Vasyl V", "Vasyl XLII", "William XXVII", "William XXX", "William XXXIX", "Zemco X", "Zemco XXIX", "Zemco XXXIV"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> kings = {"Louis VII", "Henri XXX", "Louis XLIX", "Goo XXIV", "Derek XLVIII", "Carlos XI", "Goo IX", "Louis IV", "Goo XII", "Louis XXX", "Goo X", "Goo XXXVIII", "Henri XLIX", "Louis XXIII", "Louis XIII", "Henri V", "Carlos XXXIV", "Carlos XII", "Derek XVII", "Louis XXXIV", "Louis XXXIII", "Goo XVII", "Carlos XXXV", "Derek XXXIX", "Henri XI", "Henri I", "Goo IV", "Henri XLVIII", "Henri III", "Derek XLIII", "Carlos XLVII", "Louis L", "Henri XXVIII", "Derek XXIII", "Derek XLII", "Louis XVI", "Henri XIII", "Goo XLIII", "Derek XXV", "Louis XVIII", "Goo VI", "Carlos XXXI", "Carlos XXVIII", "Louis X", "Louis XXVIII", "Goo XIV", "Henri L", "Derek III", "Derek XLI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Carlos XI", "Carlos XII", "Carlos XXVIII", "Carlos XXXI", "Carlos XXXIV", "Carlos XXXV", "Carlos XLVII", "Derek III", "Derek XVII", "Derek XXIII", "Derek XXV", "Derek XXXIX", "Derek XLI", "Derek XLII", "Derek XLIII", "Derek XLVIII", "Goo IV", "Goo VI", "Goo IX", "Goo X", "Goo XII", "Goo XIV", "Goo XVII", "Goo XXIV", "Goo XXXVIII", "Goo XLIII", "Henri I", "Henri III", "Henri V", "Henri XI", "Henri XIII", "Henri XXVIII", "Henri XXX", "Henri XLVIII", "Henri XLIX", "Henri L", "Louis IV", "Louis VII", "Louis X", "Louis XIII", "Louis XVI", "Louis XVIII", "Louis XXIII", "Louis XXVIII", "Louis XXX", "Louis XXXIII", "Louis XXXIV", "Louis XLIX", "Louis L"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> kings = {"Henri XXXII", "Philippe XLIX", "Paul XIII", "Bob XXXII", "Thierry XLIX", "Louis XXXII", "Makoto II", "Maru XXXIX", "Thierry XI", "Maru XL", "Henry XLII", "Eryk XXI", "Vasyl XLIX", "Paul L", "Robert XXIII", "Pawel XLVIII", "Egor I", "Victoria XVII", "Janq XX", "Maru XXXVII", "Bruce L", "Kubus XLI", "Henry XXXV", "Petrzlen XXXII", "Lou L", "Louis V", "Francois XXX", "Bruce XXX", "Lou XX", "John XXIX", "Philippe XLV", "Henry XXVII", "Derek III", "Thierry XXI", "Pawel XL", "Kubus XXXIX", "Henry VIII", "Vasyl XXVII", "Ivan XXXVIII", "Luka XX", "William XXVII", "Mary VII", "Janq XXXIX", "Maru VIII", "Lovro XLVII", "Petrzlen XXXVI", "Philippe XXIX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bob XXXII", "Bruce XXX", "Bruce L", "Derek III", "Egor I", "Eryk XXI", "Francois XXX", "Henri XXXII", "Henry VIII", "Henry XXVII", "Henry XXXV", "Henry XLII", "Ivan XXXVIII", "Janq XX", "Janq XXXIX", "John XXIX", "Kubus XXXIX", "Kubus XLI", "Lou XX", "Lou L", "Louis V", "Louis XXXII", "Lovro XLVII", "Luka XX", "Makoto II", "Maru VIII", "Maru XXXVII", "Maru XXXIX", "Maru XL", "Mary VII", "Paul XIII", "Paul L", "Pawel XL", "Pawel XLVIII", "Petrzlen XXXII", "Petrzlen XXXVI", "Philippe XXIX", "Philippe XLV", "Philippe XLIX", "Robert XXIII", "Thierry XI", "Thierry XXI", "Thierry XLIX", "Vasyl XXVII", "Vasyl XLIX", "Victoria XVII", "William XXVII"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> kings = {"Anicka XI", "Thierry XLIII", "Kubus XXVIII", "John XLVI", "Philip XXII", "Anicka III", "Kubus XXX", "Vasyl XLII", "Marek XL", "Dmytro XLI", "Goo XVII", "Paul XXIX", "Goo L", "Anicka L", "Ilya XXVIII", "Richard XLVI", "Marek XXXIII", "Vasyl II", "Derek XXXVII", "Henri XXXIV", "Neal XXVII", "Ilya XXXVIII", "Eryk XXIX", "Richard XXV", "Kubus XXIX", "Makoto V", "Richard XI", "Kubus VIII", "Marek XXVIII", "Luka VIII", "Anicka XLII", "Marek IX", "Lovro VI", "Kubus X", "Derek XXX", "Dmytro XLII", "Marek II", "William XXIX", "Derek III", "Derek XI", "Philip IX", "Philip XXXIX", "Henri XVIII", "Makoto XXXII", "Philip XVIII", "Paul XXXIX", "Makoto XLVII", "William XXX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka III", "Anicka XI", "Anicka XLII", "Anicka L", "Derek III", "Derek XI", "Derek XXX", "Derek XXXVII", "Dmytro XLI", "Dmytro XLII", "Eryk XXIX", "Goo XVII", "Goo L", "Henri XVIII", "Henri XXXIV", "Ilya XXVIII", "Ilya XXXVIII", "John XLVI", "Kubus VIII", "Kubus X", "Kubus XXVIII", "Kubus XXIX", "Kubus XXX", "Lovro VI", "Luka VIII", "Makoto V", "Makoto XXXII", "Makoto XLVII", "Marek II", "Marek IX", "Marek XXVIII", "Marek XXXIII", "Marek XL", "Neal XXVII", "Paul XXIX", "Paul XXXIX", "Philip IX", "Philip XVIII", "Philip XXII", "Philip XXXIX", "Richard XI", "Richard XXV", "Richard XLVI", "Thierry XLIII", "Vasyl II", "Vasyl XLII", "William XXIX", "William XXX"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> kings = {"Dmytro XXXIX", "Fero XXV", "Ivan XIII", "Maru XLIV", "James II", "Louis III", "Dmytro XLIX", "Maru XVII", "Pjotr II", "Lovro XIV", "Vasyl XXXI", "Francois XXIII", "Carlos XLV", "Lovro XIII", "Julka XLIV", "Lukas XLVII", "Louis V", "Edward XXIV", "Derek IV", "Carlos XXXIX", "Richard XLVIII", "Neal XXXI", "Pjotr IV", "Richard XXXV", "Bruce XXVI", "Genadij XXIV", "Janq XII", "James XLIV", "Rasto XVI", "Goo XXVIII", "Pjotr XIV", "Usamec XVII", "Janq XXXV", "Bruce XXI", "Dmytro XVIII", "Rasto XLII", "Derek XLII", "Bruce XLVIII", "Ivan I", "Rasto L", "Richard XLIII", "Lukas XXIV", "Mary XLVII", "Janq XLVII", "Maru XXXIX", "Bob XXXVI", "Anicka XXXVI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XXXVI", "Bob XXXVI", "Bruce XXI", "Bruce XXVI", "Bruce XLVIII", "Carlos XXXIX", "Carlos XLV", "Derek IV", "Derek XLII", "Dmytro XVIII", "Dmytro XXXIX", "Dmytro XLIX", "Edward XXIV", "Fero XXV", "Francois XXIII", "Genadij XXIV", "Goo XXVIII", "Ivan I", "Ivan XIII", "James II", "James XLIV", "Janq XII", "Janq XXXV", "Janq XLVII", "Julka XLIV", "Louis III", "Louis V", "Lovro XIII", "Lovro XIV", "Lukas XXIV", "Lukas XLVII", "Maru XVII", "Maru XXXIX", "Maru XLIV", "Mary XLVII", "Neal XXXI", "Pjotr II", "Pjotr IV", "Pjotr XIV", "Rasto XVI", "Rasto XLII", "Rasto L", "Richard XXXV", "Richard XLIII", "Richard XLVIII", "Usamec XVII", "Vasyl XXXI"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> kings = {"Vasyl XXXIII", "Eryk XXXI", "Neal XXXIV", "Anicka XXXVII", "Stephen III", "Marek XLVII", "Anne XLIV", "Henri XLVI", "Eryk XXXIV", "Janq XXXIII", "Marek X", "William VI", "Anne XXXVII", "Stephen XXVIII", "Lukas XLIV", "Derek XXXIV", "Louis XXVII", "Genadij XV", "Elizabeth XV", "Charles I", "Henri XXVII", "Monika IX", "James XXI", "Pawel XLII", "Lou V", "Egor XXIII", "Henri XXII", "Elizabeth XLVII", "Tomek XXXII", "Mary XLII", "Anne VIII", "Usamec XII", "Charles VI", "Elizabeth XXXV", "Dmytro XLIX", "William XXXII", "Henri XIII", "Richard VI", "Michail XX", "Eryk XLIX", "Mimino XXVI", "Ivan XXXIII", "Maru XVII", "Pawel XLV", "Elizabeth XXIV", "Anne XIX", "Janq XLVII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XXXVII", "Anne VIII", "Anne XIX", "Anne XXXVII", "Anne XLIV", "Charles I", "Charles VI", "Derek XXXIV", "Dmytro XLIX", "Egor XXIII", "Elizabeth XV", "Elizabeth XXIV", "Elizabeth XXXV", "Elizabeth XLVII", "Eryk XXXI", "Eryk XXXIV", "Eryk XLIX", "Genadij XV", "Henri XIII", "Henri XXII", "Henri XXVII", "Henri XLVI", "Ivan XXXIII", "James XXI", "Janq XXXIII", "Janq XLVII", "Lou V", "Louis XXVII", "Lukas XLIV", "Marek X", "Marek XLVII", "Maru XVII", "Mary XLII", "Michail XX", "Mimino XXVI", "Monika IX", "Neal XXXIV", "Pawel XLII", "Pawel XLV", "Richard VI", "Stephen III", "Stephen XXVIII", "Tomek XXXII", "Usamec XII", "Vasyl XXXIII", "William VI", "William XXXII"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> kings = {"Eryk XXXV", "Derek VIII", "Lukas XLVII", "Eryk XLVI", "Anne II", "Mimino XXX", "Genadij XXII", "Maru X", "Tomek XIV", "Eryk XIII", "Edward XI", "William XXXVII", "Paul XXVII", "Zemco IV", "Robert XXIV", "Stephen XXIV", "Mimino XII", "Maru XV", "William XXV", "Robert X", "Mary XXII", "Francois XXVII", "Derek IX", "Ivan XX", "Thierry VIII", "Mary XXIX", "Robert XXXV", "Fero XXXIII", "Eryk XXIX", "Neal I", "Victoria XVII", "Francois X", "Ivan XXXII", "Kubus XXV", "Rasto XXV", "Maru XIX", "Victoria XLIV", "Bruce XXIII", "Zemco XXIII", "Kubus XX", "Dmytro XXXIX", "Robert XXVI", "Victoria XI", "Anne XXIX", "Edward XXXIV", "William IX", "Henry XXVIII", "William VII", "Genadij XLVIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne II", "Anne XXIX", "Bruce XXIII", "Derek VIII", "Derek IX", "Dmytro XXXIX", "Edward XI", "Edward XXXIV", "Eryk XIII", "Eryk XXIX", "Eryk XXXV", "Eryk XLVI", "Fero XXXIII", "Francois X", "Francois XXVII", "Genadij XXII", "Genadij XLVIII", "Henry XXVIII", "Ivan XX", "Ivan XXXII", "Kubus XX", "Kubus XXV", "Lukas XLVII", "Maru X", "Maru XV", "Maru XIX", "Mary XXII", "Mary XXIX", "Mimino XII", "Mimino XXX", "Neal I", "Paul XXVII", "Rasto XXV", "Robert X", "Robert XXIV", "Robert XXVI", "Robert XXXV", "Stephen XXIV", "Thierry VIII", "Tomek XIV", "Victoria XI", "Victoria XVII", "Victoria XLIV", "William VII", "William IX", "William XXV", "William XXXVII", "Zemco IV", "Zemco XXIII"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> kings = {"Lou XXXII", "Vasyl XLIV", "John L", "Tomek XXIV", "Ivan IX", "Ivan L", "Mary VI", "Henry II", "Genadij XII", "Edward XLVII", "Mimino XLVI", "John XIII", "Philip XLVII", "Fero XXXIX", "Bruce XV", "Egor XII", "Vasyl XIII", "Henri XI", "Lovro XX", "Bruce XXV", "Richard XLVIII", "Bob XL", "Henri XLIV", "Philip XLVI", "Anne XXIV", "Tomek VII", "Maru XIX", "Carlos XXX", "James XXXV", "Henri XXXVIII", "Richard XXXII", "Monika XLVIII", "Carlos X", "Maru III", "James XIV", "Luka XII", "Mimino IV", "Elizabeth VIII", "Francois XXX", "Anne XV", "Henri XL", "Dmytro II", "Henri XLIX", "Maru XL", "Henry XLV", "Fero V", "Luka XLVIII", "Henry V", "Neal XXIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne XV", "Anne XXIV", "Bob XL", "Bruce XV", "Bruce XXV", "Carlos X", "Carlos XXX", "Dmytro II", "Edward XLVII", "Egor XII", "Elizabeth VIII", "Fero V", "Fero XXXIX", "Francois XXX", "Genadij XII", "Henri XI", "Henri XXXVIII", "Henri XL", "Henri XLIV", "Henri XLIX", "Henry II", "Henry V", "Henry XLV", "Ivan IX", "Ivan L", "James XIV", "James XXXV", "John XIII", "John L", "Lou XXXII", "Lovro XX", "Luka XII", "Luka XLVIII", "Maru III", "Maru XIX", "Maru XL", "Mary VI", "Mimino IV", "Mimino XLVI", "Monika XLVIII", "Neal XXIV", "Philip XLVI", "Philip XLVII", "Richard XXXII", "Richard XLVIII", "Tomek VII", "Tomek XXIV", "Vasyl XIII", "Vasyl XLIV"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> kings = {"Lovro XL", "Marek XXI", "Julka XVII", "Petrzlen XII", "Henry XXII", "Pjotr XLVII", "Stephen XVII", "Goo XXXIX", "Robert XIII", "Pjotr XXX", "James XXXII", "Marek XLVIII", "Francois XLVIII", "Thierry X", "Fero XL", "Monika XLVI", "Lukas XXXI", "Anicka XLII", "Michail XXIX", "Thierry VI", "Victoria XLVII", "Monika XIII", "Lukas XLV", "Kubus XXVII", "Marek I", "Elizabeth XLI", "Michail XIV", "Pjotr XX", "Fero VI", "Pjotr III", "Julka II", "Charles XXIX", "Mary XXXVII", "Fero IX", "Louis IV", "Elizabeth XXXIX", "Elizabeth XLII", "Thierry XXI", "Makoto L", "Marek XI", "Robert L", "Rasto XLVIII", "Lou XIX", "Lukas XXXIII", "Charles XL", "Bob XXXII", "Fero XXII", "Neal XXIX", "Monika III"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XLII", "Bob XXXII", "Charles XXIX", "Charles XL", "Elizabeth XXXIX", "Elizabeth XLI", "Elizabeth XLII", "Fero VI", "Fero IX", "Fero XXII", "Fero XL", "Francois XLVIII", "Goo XXXIX", "Henry XXII", "James XXXII", "Julka II", "Julka XVII", "Kubus XXVII", "Lou XIX", "Louis IV", "Lovro XL", "Lukas XXXI", "Lukas XXXIII", "Lukas XLV", "Makoto L", "Marek I", "Marek XI", "Marek XXI", "Marek XLVIII", "Mary XXXVII", "Michail XIV", "Michail XXIX", "Monika III", "Monika XIII", "Monika XLVI", "Neal XXIX", "Petrzlen XII", "Pjotr III", "Pjotr XX", "Pjotr XXX", "Pjotr XLVII", "Rasto XLVIII", "Robert XIII", "Robert L", "Stephen XVII", "Thierry VI", "Thierry X", "Thierry XXI", "Victoria XLVII"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> kings = {"Marek XVI", "Mary XV", "Marek XLIX", "John XLIII", "Tomek I", "Charles XLIV", "Charles XIX", "John XXVIII", "John XLII", "John XVIII", "Derek XLII", "John XXX", "Marek XLIII", "Tomek XLV", "John V", "Tomek XLI", "Mary XIII", "Marek III", "Charles XIII", "Marek II", "Mary XXII", "Derek XLVIII", "Mary XXXI", "Tomek XX", "Mary XXIV", "Tomek XLIII", "Mary XXIII", "John XLVI", "John XXXIII", "Tomek XXII", "Mary XLV", "John XXIII", "Mary IX", "John XXXIV", "Mary VI", "John XLIV", "Charles XLI", "Mary XL", "John II", "Mary I", "Charles XLV", "Mary XVI", "John XVII", "Derek L", "Derek XXV", "Derek XXXV", "Mary IV", "Marek XXIV", "Derek XXVI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Charles XIII", "Charles XIX", "Charles XLI", "Charles XLIV", "Charles XLV", "Derek XXV", "Derek XXVI", "Derek XXXV", "Derek XLII", "Derek XLVIII", "Derek L", "John II", "John V", "John XVII", "John XVIII", "John XXIII", "John XXVIII", "John XXX", "John XXXIII", "John XXXIV", "John XLII", "John XLIII", "John XLIV", "John XLVI", "Marek II", "Marek III", "Marek XVI", "Marek XXIV", "Marek XLIII", "Marek XLIX", "Mary I", "Mary IV", "Mary VI", "Mary IX", "Mary XIII", "Mary XV", "Mary XVI", "Mary XXII", "Mary XXIII", "Mary XXIV", "Mary XXXI", "Mary XL", "Mary XLV", "Tomek I", "Tomek XX", "Tomek XXII", "Tomek XLI", "Tomek XLIII", "Tomek XLV"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> kings = {"Makoto XXIV", "Genadij XXXVII", "Anicka I", "Michail XLV", "Ilya VII", "Francois XXXI", "Maru XXXV", "Maru XLVI", "Michail XXIX", "Lovro IX", "John XIX", "Richard XLVI", "Ilya IV", "Paul XLVIII", "Victoria XII", "Derek IX", "Kubus XXXVI", "Francois I", "Michail I", "Mary XV", "Janq XII", "Bruce VIII", "Michail XLVII", "Luka XVI", "Philippe XXXVI", "Dmytro XXXIX", "Mimino X", "Derek XXIX", "Henri X", "Victoria XXXVI", "Mimino XXIX", "Marek XLVIII", "Rasto XXV", "Julka XL", "Anicka XLVII", "Charles XVII", "Egor XIX", "Genadij VI", "Janq XXX", "Anicka VIII", "Anicka VII", "Charles XIX", "Usamec XXXII", "Pawel XXIII", "Bob VII", "Kubus VII", "Ilya XXXVII", "William XXI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka I", "Anicka VII", "Anicka VIII", "Anicka XLVII", "Bob VII", "Bruce VIII", "Charles XVII", "Charles XIX", "Derek IX", "Derek XXIX", "Dmytro XXXIX", "Egor XIX", "Francois I", "Francois XXXI", "Genadij VI", "Genadij XXXVII", "Henri X", "Ilya IV", "Ilya VII", "Ilya XXXVII", "Janq XII", "Janq XXX", "John XIX", "Julka XL", "Kubus VII", "Kubus XXXVI", "Lovro IX", "Luka XVI", "Makoto XXIV", "Marek XLVIII", "Maru XXXV", "Maru XLVI", "Mary XV", "Michail I", "Michail XXIX", "Michail XLV", "Michail XLVII", "Mimino X", "Mimino XXIX", "Paul XLVIII", "Pawel XXIII", "Philippe XXXVI", "Rasto XXV", "Richard XLVI", "Usamec XXXII", "Victoria XII", "Victoria XXXVI", "William XXI"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> kings = {"Victoria XXXII", "Fero XXIX", "Petrzlen VIII", "Maru VII", "Lovro L", "Bruce XXXVIII", "Bob XXII", "Egor XXXIV", "Genadij XXXIX", "Thierry III", "Carlos XLV", "Zemco XXXI", "Monika XLI", "Lukas XL", "Victoria XXXVI", "Ilya XXXII", "Edward V", "Thierry XLII", "Petrzlen XLV", "Dmytro II", "Charles XI", "Pawel XXXIV", "John XIV", "Egor XXXI", "Edward XXVI", "Anne XVII", "Anne XIX", "Anicka XV", "Bob XIII", "Lukas XLVII", "Michail XLIV", "Michail XXII", "Genadij V", "Louis XVIII", "Anicka XXII", "Usamec XLI", "Zemco XLIV", "Vasyl XVII", "Victoria XLVI", "Lovro XV", "John XLIII", "Louis XXXVI", "Louis II", "Pawel XXXIII", "Anicka VII", "Henry XVI", "Michail XXX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka VII", "Anicka XV", "Anicka XXII", "Anne XVII", "Anne XIX", "Bob XIII", "Bob XXII", "Bruce XXXVIII", "Carlos XLV", "Charles XI", "Dmytro II", "Edward V", "Edward XXVI", "Egor XXXI", "Egor XXXIV", "Fero XXIX", "Genadij V", "Genadij XXXIX", "Henry XVI", "Ilya XXXII", "John XIV", "John XLIII", "Louis II", "Louis XVIII", "Louis XXXVI", "Lovro XV", "Lovro L", "Lukas XL", "Lukas XLVII", "Maru VII", "Michail XXII", "Michail XXX", "Michail XLIV", "Monika XLI", "Pawel XXXIII", "Pawel XXXIV", "Petrzlen VIII", "Petrzlen XLV", "Thierry III", "Thierry XLII", "Usamec XLI", "Vasyl XVII", "Victoria XXXII", "Victoria XXXVI", "Victoria XLVI", "Zemco XXXI", "Zemco XLIV"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> kings = {"Rasto XIV", "William XXI", "Usamec XIV", "Dmytro XVI", "Derek XXXIII", "Fero XXI", "Kubus XXX", "Vasyl XXXIII", "Francois XLIV", "Francois XL", "Elizabeth XLVII", "Elizabeth XXXIII", "Monika X", "Pjotr IV", "Eryk XXXIV", "Vasyl XXV", "Kubus XII", "William XX", "Robert XLII", "Kubus XXII", "Philip XVIII", "Michail XXVII", "Luka XXIV", "Vasyl XLIII", "Tomek I", "Pjotr V", "Dmytro XXXVII", "Elizabeth XL", "Henry XLVI", "Luka XLI", "Henry III", "Monika XIII", "William XXIII", "Petrzlen XXXI", "Derek XV", "Mary VIII", "Derek XXIX", "Lovro IX", "Fero XII", "Pjotr XII", "Paul XVI", "Monika XXIX", "Makoto XLIII", "Michail XLVII", "Lovro XX", "Henry V", "Ivan IV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Derek XV", "Derek XXIX", "Derek XXXIII", "Dmytro XVI", "Dmytro XXXVII", "Elizabeth XXXIII", "Elizabeth XL", "Elizabeth XLVII", "Eryk XXXIV", "Fero XII", "Fero XXI", "Francois XL", "Francois XLIV", "Henry III", "Henry V", "Henry XLVI", "Ivan IV", "Kubus XII", "Kubus XXII", "Kubus XXX", "Lovro IX", "Lovro XX", "Luka XXIV", "Luka XLI", "Makoto XLIII", "Mary VIII", "Michail XXVII", "Michail XLVII", "Monika X", "Monika XIII", "Monika XXIX", "Paul XVI", "Petrzlen XXXI", "Philip XVIII", "Pjotr IV", "Pjotr V", "Pjotr XII", "Rasto XIV", "Robert XLII", "Tomek I", "Usamec XIV", "Vasyl XXV", "Vasyl XXXIII", "Vasyl XLIII", "William XX", "William XXI", "William XXIII"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> kings = {"Richard XXX", "Rasto XXI", "Egor XL", "Philippe III", "Henri XXXVIII", "Richard XIII", "Bruce XLV", "Louis X", "Bruce XXXVIII", "Rasto XXXIX", "Rasto XXV", "Pjotr XXVI", "Philippe L", "Elizabeth XLVIII", "Pjotr XLV", "Rasto XXXV", "Rasto XXIX", "Elizabeth I", "Elizabeth XXV", "Bruce XIX", "Bruce XI", "Egor XIII", "Pjotr VII", "Elizabeth XLI", "Egor XVIII", "Egor XXI", "Richard XIX", "Elizabeth XLIV", "Bruce XXIX", "Richard X", "Elizabeth XXIII", "Pjotr XXXVII", "Philip XXVII", "Philippe XVIII", "Rasto VII", "Egor I", "Ilya XXXVI", "Henri VI", "Rasto XV", "Elizabeth XXVI", "Ilya XV", "Henri XVI", "Henri XXXVI", "Henri XII", "Egor L", "Bruce VII", "Rasto XXXI", "Philip XXIX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bruce VII", "Bruce XI", "Bruce XIX", "Bruce XXIX", "Bruce XXXVIII", "Bruce XLV", "Egor I", "Egor XIII", "Egor XVIII", "Egor XXI", "Egor XL", "Egor L", "Elizabeth I", "Elizabeth XXIII", "Elizabeth XXV", "Elizabeth XXVI", "Elizabeth XLI", "Elizabeth XLIV", "Elizabeth XLVIII", "Henri VI", "Henri XII", "Henri XVI", "Henri XXXVI", "Henri XXXVIII", "Ilya XV", "Ilya XXXVI", "Louis X", "Philip XXVII", "Philip XXIX", "Philippe III", "Philippe XVIII", "Philippe L", "Pjotr VII", "Pjotr XXVI", "Pjotr XXXVII", "Pjotr XLV", "Rasto VII", "Rasto XV", "Rasto XXI", "Rasto XXV", "Rasto XXIX", "Rasto XXXI", "Rasto XXXV", "Rasto XXXIX", "Richard X", "Richard XIII", "Richard XIX", "Richard XXX"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> kings = {"Makoto IX", "Stephen XLVI", "Dmytro XII", "Bruce XXXVI", "Michail VI", "Zemco XVI", "Bruce XXXIV", "Neal III", "Mary IV", "Kubus II", "Lou IX", "Charles XIII", "Pjotr XXII", "Makoto XXX", "Francois XLII", "Anne IX", "Philip XXIX", "Mary XXXIV", "Anicka XXX", "Neal XV", "Bob XXII", "Louis XLIII", "Pawel XLIV", "Bob XXIV", "Henri XI", "Petrzlen XXI", "John XLIII", "Pawel XXVI", "Pjotr XXIX", "Charles XXXIII", "Pjotr XXIV", "Paul XLVIII", "Henri XXXI", "Pjotr XLIX", "Mimino XXIII", "Zemco XXVIII", "Ilya L", "Fero XXII", "Petrzlen XXV", "Charles XX", "Zemco XXXIV", "Thierry XXX", "Henri XVI", "Petrzlen XI", "Derek I", "Elizabeth XXVIII", "Anicka XLIII", "Mary XLVIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XXX", "Anicka XLIII", "Anne IX", "Bob XXII", "Bob XXIV", "Bruce XXXIV", "Bruce XXXVI", "Charles XIII", "Charles XX", "Charles XXXIII", "Derek I", "Dmytro XII", "Elizabeth XXVIII", "Fero XXII", "Francois XLII", "Henri XI", "Henri XVI", "Henri XXXI", "Ilya L", "John XLIII", "Kubus II", "Lou IX", "Louis XLIII", "Makoto IX", "Makoto XXX", "Mary IV", "Mary XXXIV", "Mary XLVIII", "Michail VI", "Mimino XXIII", "Neal III", "Neal XV", "Paul XLVIII", "Pawel XXVI", "Pawel XLIV", "Petrzlen XI", "Petrzlen XXI", "Petrzlen XXV", "Philip XXIX", "Pjotr XXII", "Pjotr XXIV", "Pjotr XXIX", "Pjotr XLIX", "Stephen XLVI", "Thierry XXX", "Zemco XVI", "Zemco XXVIII", "Zemco XXXIV"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> kings = {"Fero XXI", "Maru XV", "John XLIII", "Anicka VI", "Vasyl XXXIII", "Bruce V", "Marek I", "Anicka XXXII", "Neal XXII", "Makoto XLIX", "Mary VII", "Vasyl XIV", "Victoria XXXVIII", "Pjotr XLVII", "Robert XXXII", "Dmytro VIII", "Pjotr XVI", "Philippe XLVIII", "Pjotr XL", "Rasto XX", "Marek XLVII", "Ilya XXXVIII", "Marek XXXVI", "Usamec XXXIV", "Henry XVII", "Thierry II", "Robert X", "Marek XLII", "Fero XXXII", "Egor XVI", "Philip XVI", "Lovro XLVIII", "Kubus XIX", "Henri XLVII", "Dmytro XXIX", "Zemco II", "Rasto XLIII", "Lou XXIII", "Henry XL", "Kubus XIII", "John XXXVIII", "Elizabeth XXIV", "John VI", "Bruce XLI", "Lou IV", "Elizabeth XXXVII", "Lukas V", "Dmytro XLIII", "Zemco XXIX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka VI", "Anicka XXXII", "Bruce V", "Bruce XLI", "Dmytro VIII", "Dmytro XXIX", "Dmytro XLIII", "Egor XVI", "Elizabeth XXIV", "Elizabeth XXXVII", "Fero XXI", "Fero XXXII", "Henri XLVII", "Henry XVII", "Henry XL", "Ilya XXXVIII", "John VI", "John XXXVIII", "John XLIII", "Kubus XIII", "Kubus XIX", "Lou IV", "Lou XXIII", "Lovro XLVIII", "Lukas V", "Makoto XLIX", "Marek I", "Marek XXXVI", "Marek XLII", "Marek XLVII", "Maru XV", "Mary VII", "Neal XXII", "Philip XVI", "Philippe XLVIII", "Pjotr XVI", "Pjotr XL", "Pjotr XLVII", "Rasto XX", "Rasto XLIII", "Robert X", "Robert XXXII", "Thierry II", "Usamec XXXIV", "Vasyl XIV", "Vasyl XXXIII", "Victoria XXXVIII", "Zemco II", "Zemco XXIX"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> kings = {"Charles XV", "John XXX", "Eryk XXXV", "Stephen I", "Stephen X", "Genadij XLIII", "Philip X", "Dmytro XLII", "Dmytro XXIII", "Petrzlen XXIII", "John XIX", "Michail XXIX", "Charles XXIII", "Mimino XVIII", "Philip XL", "Janq XXV", "Mimino XXIX", "Janq XXXVI", "Petrzlen IX", "Makoto XXII", "Kubus XL", "Julka VII", "Edward XI", "Rasto XV", "Kubus I", "Dmytro XXIX", "Egor XLIII", "James II", "Dmytro X", "Julka XXXIII", "Francois III", "Kubus XXXV", "Kubus XVIII", "Stephen XL", "Genadij XVIII", "Fero II", "Richard XXXII", "Rasto XXII", "Lou XXX", "Rasto XXIII", "Mimino IX", "Edward L", "Janq XII", "Luka XLVII", "Genadij X", "Rasto XII", "Lou XXII", "Mimino XXIV", "Mary XXVI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Charles XV", "Charles XXIII", "Dmytro X", "Dmytro XXIII", "Dmytro XXIX", "Dmytro XLII", "Edward XI", "Edward L", "Egor XLIII", "Eryk XXXV", "Fero II", "Francois III", "Genadij X", "Genadij XVIII", "Genadij XLIII", "James II", "Janq XII", "Janq XXV", "Janq XXXVI", "John XIX", "John XXX", "Julka VII", "Julka XXXIII", "Kubus I", "Kubus XVIII", "Kubus XXXV", "Kubus XL", "Lou XXII", "Lou XXX", "Luka XLVII", "Makoto XXII", "Mary XXVI", "Michail XXIX", "Mimino IX", "Mimino XVIII", "Mimino XXIV", "Mimino XXIX", "Petrzlen IX", "Petrzlen XXIII", "Philip X", "Philip XL", "Rasto XII", "Rasto XV", "Rasto XXII", "Rasto XXIII", "Richard XXXII", "Stephen I", "Stephen X", "Stephen XL"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> kings = {"Francois IV", "Derek XVIII", "Thierry XLIII", "Edward IV", "Ivan IV", "Marek XXV", "Derek XI", "Vasyl XL", "Anicka XIII", "Vasyl XXXIV", "Francois XXVI", "Kubus XXIII", "Lovro X", "Fero XLIV", "Lovro XXVI", "Ilya XIX", "Ivan I", "Pjotr VII", "Philip XLVI", "Kubus XLVIII", "Zemco XXVI", "Philip VIII", "Philippe XX", "Lovro XXXI", "Pjotr XVIII", "Derek XXI", "Petrzlen XXXVI", "Ivan VII", "Thierry XIV", "Derek VII", "Lou XVI", "Zemco XXXIX", "Carlos III", "Pjotr I", "Monika XIV", "Marek XXXIII", "Monika XXII", "Monika XXXIV", "Monika II", "Pawel XLIII", "Francois XLVI", "Carlos XIV", "Rasto VII", "Philip XXV", "Petrzlen XIV", "Henry XLVIII", "Ivan X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XIII", "Carlos III", "Carlos XIV", "Derek VII", "Derek XI", "Derek XVIII", "Derek XXI", "Edward IV", "Fero XLIV", "Francois IV", "Francois XXVI", "Francois XLVI", "Henry XLVIII", "Ilya XIX", "Ivan I", "Ivan IV", "Ivan VII", "Ivan X", "Kubus XXIII", "Kubus XLVIII", "Lou XVI", "Lovro X", "Lovro XXVI", "Lovro XXXI", "Marek XXV", "Marek XXXIII", "Monika II", "Monika XIV", "Monika XXII", "Monika XXXIV", "Pawel XLIII", "Petrzlen XIV", "Petrzlen XXXVI", "Philip VIII", "Philip XXV", "Philip XLVI", "Philippe XX", "Pjotr I", "Pjotr VII", "Pjotr XVIII", "Rasto VII", "Thierry XIV", "Thierry XLIII", "Vasyl XXXIV", "Vasyl XL", "Zemco XXVI", "Zemco XXXIX"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> kings = {"Michail XXXVII", "Charles V", "Henri L", "Janq XXII", "Neal XX", "Neal L", "Victoria XXXIII", "Mary XL", "Bruce XII", "Mary XXIV", "Petrzlen IX", "Luka XIV", "Anicka I", "Lukas IV", "Julka XXXIV", "Victoria X", "Eryk XLIII", "Richard XV", "Anicka XXXVI", "Goo XXXIV", "Lukas XXXIII", "Zemco XII", "Monika XXIII", "Pjotr XXXVI", "Thierry XIV", "Francois XXI", "Elizabeth II", "Lukas XXXIV", "Philip XXXII", "Lukas XLIX", "Victoria XXXII", "Kubus XXVIII", "Philippe VI", "Philip X", "Philippe XXVIII", "Lukas XIX", "Bob XXXII", "Thierry XXXIX", "Genadij XI", "Maru XXVII", "Neal XIV", "Richard XLIII", "Pjotr XLIV", "Goo XXXI", "Maru XI", "Janq XLVIII", "Philip XVI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka I", "Anicka XXXVI", "Bob XXXII", "Bruce XII", "Charles V", "Elizabeth II", "Eryk XLIII", "Francois XXI", "Genadij XI", "Goo XXXI", "Goo XXXIV", "Henri L", "Janq XXII", "Janq XLVIII", "Julka XXXIV", "Kubus XXVIII", "Luka XIV", "Lukas IV", "Lukas XIX", "Lukas XXXIII", "Lukas XXXIV", "Lukas XLIX", "Maru XI", "Maru XXVII", "Mary XXIV", "Mary XL", "Michail XXXVII", "Monika XXIII", "Neal XIV", "Neal XX", "Neal L", "Petrzlen IX", "Philip X", "Philip XVI", "Philip XXXII", "Philippe VI", "Philippe XXVIII", "Pjotr XXXVI", "Pjotr XLIV", "Richard XV", "Richard XLIII", "Thierry XIV", "Thierry XXXIX", "Victoria X", "Victoria XXXII", "Victoria XXXIII", "Zemco XII"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> kings = {"Neal XII", "Mimino XL", "Ilya IV", "Ilya XLI", "Bob XXXIV", "Mary XL", "Henry XII", "Neal XLVII", "Henri XL", "Carlos XXV", "Rasto XXV", "James XXXII", "Mimino XLVII", "Charles XXVI", "Mimino XXXV", "Neal XXIII", "Edward XXXI", "Maru XX", "Louis XLIV", "Edward III", "Carlos XLIV", "Richard XXXI", "Monika XXXIII", "Francois XLVII", "Thierry XXXVII", "James XXXIV", "Carlos XXI", "Ilya XXII", "Maru XXVI", "Lou XXII", "Carlos XXVII", "Fero XLIV", "Michail I", "Derek XLVI", "Stephen VIII", "Robert XXXIII", "Richard XXXVI", "Louis XXII", "Zemco II", "Petrzlen XII", "Lukas VIII", "Neal XXXIII", "Lou XLIV", "Ivan I", "Eryk XXII", "Pawel XXIII", "Marek VIII", "William III"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bob XXXIV", "Carlos XXI", "Carlos XXV", "Carlos XXVII", "Carlos XLIV", "Charles XXVI", "Derek XLVI", "Edward III", "Edward XXXI", "Eryk XXII", "Fero XLIV", "Francois XLVII", "Henri XL", "Henry XII", "Ilya IV", "Ilya XXII", "Ilya XLI", "Ivan I", "James XXXII", "James XXXIV", "Lou XXII", "Lou XLIV", "Louis XXII", "Louis XLIV", "Lukas VIII", "Marek VIII", "Maru XX", "Maru XXVI", "Mary XL", "Michail I", "Mimino XXXV", "Mimino XL", "Mimino XLVII", "Monika XXXIII", "Neal XII", "Neal XXIII", "Neal XXXIII", "Neal XLVII", "Pawel XXIII", "Petrzlen XII", "Rasto XXV", "Richard XXXI", "Richard XXXVI", "Robert XXXIII", "Stephen VIII", "Thierry XXXVII", "William III", "Zemco II"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> kings = {"Ivan XLVIII", "Pjotr XVI", "Tomek X", "Makoto XXXVIII", "Philip XLVII", "Bob XXIV", "Louis XXXIII", "William XXXVII", "Bob I", "Paul XLIV", "Pjotr V", "Janq XI", "Bob XXI", "Ivan I", "Eryk XLIV", "Louis XLIII", "Eryk V", "Luka XXXVII", "Pjotr XLIII", "Usamec XLIX", "Henry L", "Rasto XXIX", "Anne XLIV", "Vasyl XLVIII", "Philip VI", "Bob XXXVII", "Thierry XXI", "Henry XXXIII", "Julka XXXIV", "Kubus VII", "Zemco II", "Lovro XXXII", "Bob XLIX", "Louis XL", "Vasyl XLII", "Henry IX", "Mary X", "Edward VI", "Luka XXXIX", "Janq VI", "Edward XXXVI", "Tomek VII", "Charles XIV", "Kubus XII", "Julka XXX", "William IV", "Ivan XIV", "Julka XXXVIII", "Louis XLV", "Paul XLI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne XLIV", "Bob I", "Bob XXI", "Bob XXIV", "Bob XXXVII", "Bob XLIX", "Charles XIV", "Edward VI", "Edward XXXVI", "Eryk V", "Eryk XLIV", "Henry IX", "Henry XXXIII", "Henry L", "Ivan I", "Ivan XIV", "Ivan XLVIII", "Janq VI", "Janq XI", "Julka XXX", "Julka XXXIV", "Julka XXXVIII", "Kubus VII", "Kubus XII", "Louis XXXIII", "Louis XL", "Louis XLIII", "Louis XLV", "Lovro XXXII", "Luka XXXVII", "Luka XXXIX", "Makoto XXXVIII", "Mary X", "Paul XLI", "Paul XLIV", "Philip VI", "Philip XLVII", "Pjotr V", "Pjotr XVI", "Pjotr XLIII", "Rasto XXIX", "Thierry XXI", "Tomek VII", "Tomek X", "Usamec XLIX", "Vasyl XLII", "Vasyl XLVIII", "William IV", "William XXXVII", "Zemco II"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> kings = {"Pjotr XXXIV", "Philip XII", "Pjotr XLV", "Lovro XVI", "Philip XXVI", "Lovro XVIII", "Philip XXVIII", "Philip XXXV", "Pjotr XLII", "Philip XXXIII", "Zemco XIV", "Pjotr X", "Ilya XLII", "Pjotr XXIII", "Lovro XV", "Lovro XXVII", "Lovro XII", "Pjotr XLVIII", "Philip XLI", "Ilya XLIV", "Lovro IV", "Ilya XV", "Zemco XVIII", "Lovro VII", "Philip XI", "Zemco XL", "Zemco XXXIII", "Ilya XXXIV", "Lovro XLII", "Ilya XI", "Ilya XX", "Pjotr XLIV", "Lovro XLIX", "Pjotr II", "Ilya XXXIII", "Lovro XI", "Ilya VIII", "Lovro XXXV", "Philip XLVII", "Zemco XLV", "Ilya III", "Zemco XIX", "Pjotr XLI", "Zemco XXII", "Philip XXXIV", "Pjotr I", "Philip XVII", "Lovro XXXVIII", "Ilya XL", "Philip XV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ilya III", "Ilya VIII", "Ilya XI", "Ilya XV", "Ilya XX", "Ilya XXXIII", "Ilya XXXIV", "Ilya XL", "Ilya XLII", "Ilya XLIV", "Lovro IV", "Lovro VII", "Lovro XI", "Lovro XII", "Lovro XV", "Lovro XVI", "Lovro XVIII", "Lovro XXVII", "Lovro XXXV", "Lovro XXXVIII", "Lovro XLII", "Lovro XLIX", "Philip XI", "Philip XII", "Philip XV", "Philip XVII", "Philip XXVI", "Philip XXVIII", "Philip XXXIII", "Philip XXXIV", "Philip XXXV", "Philip XLI", "Philip XLVII", "Pjotr I", "Pjotr II", "Pjotr X", "Pjotr XXIII", "Pjotr XXXIV", "Pjotr XLI", "Pjotr XLII", "Pjotr XLIV", "Pjotr XLV", "Pjotr XLVIII", "Zemco XIV", "Zemco XVIII", "Zemco XIX", "Zemco XXII", "Zemco XXXIII", "Zemco XL", "Zemco XLV"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> kings = {"Marek XVIII", "Makoto XXVIII", "Anne XXXVIII", "Makoto XXXIV", "Makoto XL", "Marek XXXIV", "Michail XII", "Makoto XXII", "Derek II", "Michail XIII", "Egor XXXVII", "Derek XXXIV", "Egor VII", "Michail XXXIII", "Derek XLVI", "Anne XXI", "Derek XLVII", "Marek XLI", "Marek XLV", "Marek XXVII", "Anne XIII", "Marek III", "Anne VII", "Egor XI", "Egor XL", "Marek XXIX", "Makoto XX", "Marek XLIX", "Egor XXX", "Marek I", "Egor XXXIV", "Derek XXV", "Marek XXVIII", "Michail XVI", "Michail XXII", "Makoto XXIX", "Anne XX", "Marek XL", "Makoto XXXV", "Michail VI", "Anne III", "Egor XLVIII", "Makoto VIII", "Egor XLIX", "Anne XXIII", "Makoto XLVII", "Derek VII", "Makoto XI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne III", "Anne VII", "Anne XIII", "Anne XX", "Anne XXI", "Anne XXIII", "Anne XXXVIII", "Derek II", "Derek VII", "Derek XXV", "Derek XXXIV", "Derek XLVI", "Derek XLVII", "Egor VII", "Egor XI", "Egor XXX", "Egor XXXIV", "Egor XXXVII", "Egor XL", "Egor XLVIII", "Egor XLIX", "Makoto VIII", "Makoto XI", "Makoto XX", "Makoto XXII", "Makoto XXVIII", "Makoto XXIX", "Makoto XXXIV", "Makoto XXXV", "Makoto XL", "Makoto XLVII", "Marek I", "Marek III", "Marek XVIII", "Marek XXVII", "Marek XXVIII", "Marek XXIX", "Marek XXXIV", "Marek XL", "Marek XLI", "Marek XLV", "Marek XLIX", "Michail VI", "Michail XII", "Michail XIII", "Michail XVI", "Michail XXII", "Michail XXXIII"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> kings = {"Bruce XXII", "Henri XX", "Maru XXXVI", "Philippe XL", "Lou XVI", "Lovro XVI", "Kubus XXXII", "Maru XXXIX", "Bob XXXVIII", "Richard XXXIX", "Carlos II", "James XXXIII", "Anne XXIV", "Anne XXVI", "Philip XLVII", "Ilya III", "Kubus XLII", "Julka XIX", "Mary XLVII", "Lukas XVIII", "Zemco L", "Richard II", "Anicka XXXVII", "Genadij XXXII", "Ivan XXI", "Henri XXXI", "Pjotr III", "Philip XIII", "Elizabeth XXIX", "James XLV", "Zemco XXIX", "Fero XVI", "Lukas IX", "Bob XXXIII", "Pjotr XLV", "Lukas XXVII", "Dmytro XXVIII", "William XXII", "Carlos XLII", "Elizabeth XLIX", "Fero XI", "Philippe IV", "Elizabeth XXXI", "Victoria XXXVII", "John XXXIII", "Tomek IX", "Lukas XIV", "Tomek XXXIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XXXVII", "Anne XXIV", "Anne XXVI", "Bob XXXIII", "Bob XXXVIII", "Bruce XXII", "Carlos II", "Carlos XLII", "Dmytro XXVIII", "Elizabeth XXIX", "Elizabeth XXXI", "Elizabeth XLIX", "Fero XI", "Fero XVI", "Genadij XXXII", "Henri XX", "Henri XXXI", "Ilya III", "Ivan XXI", "James XXXIII", "James XLV", "John XXXIII", "Julka XIX", "Kubus XXXII", "Kubus XLII", "Lou XVI", "Lovro XVI", "Lukas IX", "Lukas XIV", "Lukas XVIII", "Lukas XXVII", "Maru XXXVI", "Maru XXXIX", "Mary XLVII", "Philip XIII", "Philip XLVII", "Philippe IV", "Philippe XL", "Pjotr III", "Pjotr XLV", "Richard II", "Richard XXXIX", "Tomek IX", "Tomek XXXIII", "Victoria XXXVII", "William XXII", "Zemco XXIX", "Zemco L"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> kings = {"Richard XXVIII", "Bob XLIX", "Pawel VIII", "Tomek XXIV", "Victoria XLVIII", "Bob XXXVI", "Robert XXIII", "Richard XLII", "Goo XII", "John XVII", "Ivan IX", "Robert XIX", "John XXXVIII", "John VII", "Bob XLII", "Mary XLII", "Goo XXXII", "Bob XXI", "Janq XXXIX", "Goo XIV", "Louis I", "Ivan XXXVI", "Lovro VIII", "Ivan XXX", "Maru XXIII", "Pawel XXXII", "Bob XXXI", "Louis IV", "Victoria VI", "Goo XXII", "Louis IX", "Maru XXVIII", "Marek VII", "Victoria XV", "Louis X", "Tomek III", "Marek IX", "Victoria IX", "Goo VI", "Lovro XXXV", "Edward II", "Robert XXXIX", "John XXXVII", "Janq II", "Ivan XLVI", "Edward XXVI", "Goo XVII", "Edward XXIV", "James XI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bob XXI", "Bob XXXI", "Bob XXXVI", "Bob XLII", "Bob XLIX", "Edward II", "Edward XXIV", "Edward XXVI", "Goo VI", "Goo XII", "Goo XIV", "Goo XVII", "Goo XXII", "Goo XXXII", "Ivan IX", "Ivan XXX", "Ivan XXXVI", "Ivan XLVI", "James XI", "Janq II", "Janq XXXIX", "John VII", "John XVII", "John XXXVII", "John XXXVIII", "Louis I", "Louis IV", "Louis IX", "Louis X", "Lovro VIII", "Lovro XXXV", "Marek VII", "Marek IX", "Maru XXIII", "Maru XXVIII", "Mary XLII", "Pawel VIII", "Pawel XXXII", "Richard XXVIII", "Richard XLII", "Robert XIX", "Robert XXIII", "Robert XXXIX", "Tomek III", "Tomek XXIV", "Victoria VI", "Victoria IX", "Victoria XV", "Victoria XLVIII"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> kings = {"Derek XII", "Marek XXXIII", "Philippe XI", "Philip XXXII", "Philip XXII", "Goo XLII", "Henri V", "Henri IX", "Philip XXVIII", "Julka XXXV", "Marek V", "Dmytro VI", "John XLVII", "Pawel XXXVI", "Julka XXXVIII", "Anne XXX", "Henri XXXIII", "Charles X", "Petrzlen XLIX", "Charles XXI", "Julka XXV", "Philippe XXV", "Luka L", "Petrzlen XV", "Rasto XLVI", "Elizabeth XXVIII", "Luka XXV", "Fero I", "Elizabeth XX", "Lukas XI", "Pjotr XXXVII", "Pjotr XXIII", "Pawel XXV", "Marek XLVIII", "Luka XIV", "John V", "Lukas L", "Anne VI", "Philip XXIV", "Elizabeth III", "Anne L", "Marek XXVII", "Marek I", "Philip XXXI", "Lukas XLIV", "Derek XX", "Carlos L", "Charles XIII", "Julka XXIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne VI", "Anne XXX", "Anne L", "Carlos L", "Charles X", "Charles XIII", "Charles XXI", "Derek XII", "Derek XX", "Dmytro VI", "Elizabeth III", "Elizabeth XX", "Elizabeth XXVIII", "Fero I", "Goo XLII", "Henri V", "Henri IX", "Henri XXXIII", "John V", "John XLVII", "Julka XXIV", "Julka XXV", "Julka XXXV", "Julka XXXVIII", "Luka XIV", "Luka XXV", "Luka L", "Lukas XI", "Lukas XLIV", "Lukas L", "Marek I", "Marek V", "Marek XXVII", "Marek XXXIII", "Marek XLVIII", "Pawel XXV", "Pawel XXXVI", "Petrzlen XV", "Petrzlen XLIX", "Philip XXII", "Philip XXIV", "Philip XXVIII", "Philip XXXI", "Philip XXXII", "Philippe XI", "Philippe XXV", "Pjotr XXIII", "Pjotr XXXVII", "Rasto XLVI"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> kings = {"Janq XXIX", "Petrzlen XXXIV", "Vasyl I", "Victoria XXVIII", "Makoto XL", "Petrzlen XXX", "Victoria XXV", "Edward XX", "Petrzlen XLI", "Edward XVII", "Richard XLIX", "Richard XIII", "Maru IX", "Goo XXXIII", "Makoto XLIX", "Goo IV", "Maru XXI", "Anicka V", "Zemco XLVI", "Victoria XXI", "Genadij XXX", "Petrzlen XXXIII", "Makoto XII", "Henri III", "Anicka XXI", "Henry XXX", "Marek XL", "Anicka XLI", "Goo XVII", "Maru XVI", "Richard XXIV", "Petrzlen XVIII", "Henri L", "Thierry VII", "Edward XXXIV", "Anicka XXV", "Richard XXV", "Anne XXI", "Thierry XXVII", "Anicka XII", "Bob XXIX", "Tomek XL", "Henri XLIII", "Tomek XXXVII", "Goo V", "Tomek XIII", "Thierry VI", "Edward XI", "Henri XXX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka V", "Anicka XII", "Anicka XXI", "Anicka XXV", "Anicka XLI", "Anne XXI", "Bob XXIX", "Edward XI", "Edward XVII", "Edward XX", "Edward XXXIV", "Genadij XXX", "Goo IV", "Goo V", "Goo XVII", "Goo XXXIII", "Henri III", "Henri XXX", "Henri XLIII", "Henri L", "Henry XXX", "Janq XXIX", "Makoto XII", "Makoto XL", "Makoto XLIX", "Marek XL", "Maru IX", "Maru XVI", "Maru XXI", "Petrzlen XVIII", "Petrzlen XXX", "Petrzlen XXXIII", "Petrzlen XXXIV", "Petrzlen XLI", "Richard XIII", "Richard XXIV", "Richard XXV", "Richard XLIX", "Thierry VI", "Thierry VII", "Thierry XXVII", "Tomek XIII", "Tomek XXXVII", "Tomek XL", "Vasyl I", "Victoria XXI", "Victoria XXV", "Victoria XXVIII", "Zemco XLVI"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> kings = {"Ivan XLVII", "Thierry XXV", "Thierry XI", "Thierry XL", "Pawel VI", "Henri XLIX", "Thierry XLV", "Ivan XV", "Thierry XXVI", "Charles IX", "Pawel XI", "Ivan XXXVII", "Charles XXXV", "Henri IV", "Thierry XLI", "Henri VII", "Ivan XI", "Henri XLVII", "Thierry XXIII", "Thierry L", "Henri XXX", "Ivan XXIV", "Charles XII", "Henri II", "Charles XXXVII", "Anne XIII", "Thierry XIV", "Pawel XVII", "Thierry III", "Pawel XLVIII", "Pawel XLIX", "Pawel XXIX", "Henri X", "Anne XI", "Henri XXXV", "Henri XVII", "Thierry IV", "Henri III", "Charles I", "Thierry V", "Henri VI", "Charles L", "Thierry XXXI", "Thierry VI", "Thierry XVII", "Pawel III", "Pawel XLVI", "Pawel IV", "Ivan VII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne XI", "Anne XIII", "Charles I", "Charles IX", "Charles XII", "Charles XXXV", "Charles XXXVII", "Charles L", "Henri II", "Henri III", "Henri IV", "Henri VI", "Henri VII", "Henri X", "Henri XVII", "Henri XXX", "Henri XXXV", "Henri XLVII", "Henri XLIX", "Ivan VII", "Ivan XI", "Ivan XV", "Ivan XXIV", "Ivan XXXVII", "Ivan XLVII", "Pawel III", "Pawel IV", "Pawel VI", "Pawel XI", "Pawel XVII", "Pawel XXIX", "Pawel XLVI", "Pawel XLVIII", "Pawel XLIX", "Thierry III", "Thierry IV", "Thierry V", "Thierry VI", "Thierry XI", "Thierry XIV", "Thierry XVII", "Thierry XXIII", "Thierry XXV", "Thierry XXVI", "Thierry XXXI", "Thierry XL", "Thierry XLI", "Thierry XLV", "Thierry L"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> kings = {"Rasto XXVIII", "Eryk XXXVI", "Ilya XL", "Anne XXXVII", "Petrzlen XIX", "Eryk XXI", "Dmytro XVIII", "Rasto XXVI", "Maru XIII", "Maru XXXII", "Petrzlen XL", "Eryk XLIX", "Lovro I", "Ivan XLII", "Rasto X", "Rasto VIII", "Charles XXVIII", "Lovro XVI", "Lovro XLVIII", "Petrzlen XXII", "Richard XXXV", "Ilya XLVII", "Anne L", "Petrzlen XXXVII", "Eryk XLV", "Henri I", "Charles XIII", "Lovro X", "Petrzlen VIII", "Ivan XXI", "Rasto XXXVI", "Henri XXXIII", "Richard XXVIII", "Henri XLV", "Maru II", "Ilya XXVIII", "Rasto I", "Ilya XXIX", "Eryk XIX", "Ilya L", "Rasto XXIII", "Ilya XVIII", "Anne XXVI", "Rasto XXVII", "Maru XXVI", "Ilya XX", "Henri XXVI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne XXVI", "Anne XXXVII", "Anne L", "Charles XIII", "Charles XXVIII", "Dmytro XVIII", "Eryk XIX", "Eryk XXI", "Eryk XXXVI", "Eryk XLV", "Eryk XLIX", "Henri I", "Henri XXVI", "Henri XXXIII", "Henri XLV", "Ilya XVIII", "Ilya XX", "Ilya XXVIII", "Ilya XXIX", "Ilya XL", "Ilya XLVII", "Ilya L", "Ivan XXI", "Ivan XLII", "Lovro I", "Lovro X", "Lovro XVI", "Lovro XLVIII", "Maru II", "Maru XIII", "Maru XXVI", "Maru XXXII", "Petrzlen VIII", "Petrzlen XIX", "Petrzlen XXII", "Petrzlen XXXVII", "Petrzlen XL", "Rasto I", "Rasto VIII", "Rasto X", "Rasto XXIII", "Rasto XXVI", "Rasto XXVII", "Rasto XXVIII", "Rasto XXXVI", "Richard XXVIII", "Richard XXXV"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> kings = {"Mary IV", "Thierry XVI", "Bruce XLII", "Bruce XXXI", "Mary I", "Philip XLIII", "Pawel XLVIII", "Ilya XIII", "Tomek XXV", "Janq XLVII", "Julka XXXV", "Henri IX", "Richard XL", "Henri XLVIII", "Henri XXIII", "Lou XL", "Mimino II", "Louis XXXV", "Luka I", "Thierry I", "Anne I", "Richard XXXIV", "Henri XXV", "Dmytro XLVII", "Maru XXXIV", "Pawel XI", "Paul XLVI", "Maru XIX", "Lou V", "Thierry XXXIII", "Lou XIV", "Ilya XXXVIII", "Edward XL", "Neal XVI", "Louis XLVII", "Pawel XXX", "Louis XX", "Louis XVIII", "Thierry V", "Dmytro XXVIII", "Luka XLVI", "Neal XXXII", "Neal XXXIII", "Mary XI", "Makoto XXX", "Julka XVI", "Mimino XXVIII", "Dmytro XXV", "Louis XXIX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne I", "Bruce XXXI", "Bruce XLII", "Dmytro XXV", "Dmytro XXVIII", "Dmytro XLVII", "Edward XL", "Henri IX", "Henri XXIII", "Henri XXV", "Henri XLVIII", "Ilya XIII", "Ilya XXXVIII", "Janq XLVII", "Julka XVI", "Julka XXXV", "Lou V", "Lou XIV", "Lou XL", "Louis XVIII", "Louis XX", "Louis XXIX", "Louis XXXV", "Louis XLVII", "Luka I", "Luka XLVI", "Makoto XXX", "Maru XIX", "Maru XXXIV", "Mary I", "Mary IV", "Mary XI", "Mimino II", "Mimino XXVIII", "Neal XVI", "Neal XXXII", "Neal XXXIII", "Paul XLVI", "Pawel XI", "Pawel XXX", "Pawel XLVIII", "Philip XLIII", "Richard XXXIV", "Richard XL", "Thierry I", "Thierry V", "Thierry XVI", "Thierry XXXIII", "Tomek XXV"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> kings = {"Mimino IV", "Kubus XIII", "Richard XXII", "Eryk IV", "Derek III", "Mimino XLVII", "Tomek XXVII", "Francois XLVII", "Francois XLV", "Eryk XI", "Mimino XLVIII", "Derek XLIII", "Derek XXXVII", "Derek XVI", "Derek XLIV", "Eryk XV", "Richard XIII", "Francois XXXIX", "Tomek L", "Kubus X", "Richard XLIX", "Dmytro XVIII", "Francois VI", "Mimino XLII", "Tomek XXI", "Derek XLVIII", "Derek XXIX", "Kubus XLII", "Mimino V", "Francois XVII", "Tomek XXXI", "Tomek IX", "Dmytro VI", "Francois XXV", "Kubus XLV", "Tomek VI", "Dmytro XXVIII", "Mimino XLIV", "Francois XLIV", "Eryk XXXI", "Kubus XXXIV", "Francois XL", "Kubus XXVII", "Dmytro XXVI", "Kubus VI", "Derek XXV", "Richard XVII", "Richard VII", "Eryk VIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Derek III", "Derek XVI", "Derek XXV", "Derek XXIX", "Derek XXXVII", "Derek XLIII", "Derek XLIV", "Derek XLVIII", "Dmytro VI", "Dmytro XVIII", "Dmytro XXVI", "Dmytro XXVIII", "Eryk IV", "Eryk VIII", "Eryk XI", "Eryk XV", "Eryk XXXI", "Francois VI", "Francois XVII", "Francois XXV", "Francois XXXIX", "Francois XL", "Francois XLIV", "Francois XLV", "Francois XLVII", "Kubus VI", "Kubus X", "Kubus XIII", "Kubus XXVII", "Kubus XXXIV", "Kubus XLII", "Kubus XLV", "Mimino IV", "Mimino V", "Mimino XLII", "Mimino XLIV", "Mimino XLVII", "Mimino XLVIII", "Richard VII", "Richard XIII", "Richard XVII", "Richard XXII", "Richard XLIX", "Tomek VI", "Tomek IX", "Tomek XXI", "Tomek XXVII", "Tomek XXXI", "Tomek L"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> kings = {"Petrzlen XXVIII", "Petrzlen XLVII", "Philip XXXVII", "Genadij XLIV", "Julka VII", "Maru XXVIII", "Lovro XIII", "Zemco XLV", "Zemco XLIII", "Dmytro XXIV", "Charles VI", "Philippe XXVII", "Mimino XXXVII", "Philippe II", "Mimino XXXVIII", "Stephen XXVI", "Vasyl XXXIX", "Julka VIII", "Lou XLVI", "Zemco XVII", "Henry XXXVI", "Charles XXXIX", "Dmytro XXXIX", "Ilya XXXIII", "Tomek XVI", "Goo XVI", "Dmytro XXXVI", "Maru XXIX", "Ilya XXX", "Zemco XIII", "Rasto XLI", "Ivan XXXVII", "Derek VII", "Edward XLV", "Edward XLII", "Louis III", "Luka XLV", "Usamec XXV", "Bob XXXVII", "Egor IV", "Henry XXI", "Zemco L", "Egor XLIV", "Paul XLVII", "Eryk XVI", "Anne XXXII", "Dmytro XXXII", "Genadij L", "Philip VI", "Victoria I"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne XXXII", "Bob XXXVII", "Charles VI", "Charles XXXIX", "Derek VII", "Dmytro XXIV", "Dmytro XXXII", "Dmytro XXXVI", "Dmytro XXXIX", "Edward XLII", "Edward XLV", "Egor IV", "Egor XLIV", "Eryk XVI", "Genadij XLIV", "Genadij L", "Goo XVI", "Henry XXI", "Henry XXXVI", "Ilya XXX", "Ilya XXXIII", "Ivan XXXVII", "Julka VII", "Julka VIII", "Lou XLVI", "Louis III", "Lovro XIII", "Luka XLV", "Maru XXVIII", "Maru XXIX", "Mimino XXXVII", "Mimino XXXVIII", "Paul XLVII", "Petrzlen XXVIII", "Petrzlen XLVII", "Philip VI", "Philip XXXVII", "Philippe II", "Philippe XXVII", "Rasto XLI", "Stephen XXVI", "Tomek XVI", "Usamec XXV", "Vasyl XXXIX", "Victoria I", "Zemco XIII", "Zemco XVII", "Zemco XLIII", "Zemco XLV", "Zemco L"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> kings = {"William XLII", "Mary XXXVII", "Elizabeth XXIII", "Michail X", "Lovro XI", "Mary XXXVI", "William X", "Henri XXIII", "Mary XLVI", "Petrzlen XIV", "William II", "Lukas XVII", "Lovro XXX", "Victoria XIV", "William XI", "Mary X", "Pjotr XXVIII", "Mary XXXIII", "Henri XXII", "Michail XX", "Thierry XIV", "Ivan XXXVIII", "Victoria XII", "Mary XV", "Thierry VI", "Victoria XXVI", "Pjotr XXXI", "Thierry XXXVIII", "Thierry XXI", "Michail XXXIII", "Victoria X", "Lukas XVIII", "Mary XXVII", "Mary VII", "Henri XXXIV", "Lukas XX", "Lukas IV", "Thierry XIX", "Elizabeth XXXI", "Petrzlen X", "Victoria XXXIII", "Victoria XV", "William XLIX", "Elizabeth XIII", "Lukas XIII", "Petrzlen XXV", "Ivan V", "Henri XXXIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Elizabeth XIII", "Elizabeth XXIII", "Elizabeth XXXI", "Henri XXII", "Henri XXIII", "Henri XXXIII", "Henri XXXIV", "Ivan V", "Ivan XXXVIII", "Lovro XI", "Lovro XXX", "Lukas IV", "Lukas XIII", "Lukas XVII", "Lukas XVIII", "Lukas XX", "Mary VII", "Mary X", "Mary XV", "Mary XXVII", "Mary XXXIII", "Mary XXXVI", "Mary XXXVII", "Mary XLVI", "Michail X", "Michail XX", "Michail XXXIII", "Petrzlen X", "Petrzlen XIV", "Petrzlen XXV", "Pjotr XXVIII", "Pjotr XXXI", "Thierry VI", "Thierry XIV", "Thierry XIX", "Thierry XXI", "Thierry XXXVIII", "Victoria X", "Victoria XII", "Victoria XIV", "Victoria XV", "Victoria XXVI", "Victoria XXXIII", "William II", "William X", "William XI", "William XLII", "William XLIX"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> kings = {"Thierry X", "Lou XLV", "Lukas XVI", "Louis VII", "Carlos XLIX", "Rasto XLVII", "Bob XXIV", "Philip II", "Dmytro L", "Pawel IX", "Michail XX", "Edward XIV", "Robert XIII", "James IX", "Edward XV", "Marek XLIX", "Francois XLIII", "Goo XLVI", "Zemco XXXV", "Lou XXX", "Michail XLVI", "Stephen XXIX", "Bob XXV", "Edward XXIV", "Philippe XXVIII", "Richard XLI", "Petrzlen X", "Vasyl XIV", "James XLVII", "Zemco II", "Egor XV", "Makoto XXX", "Zemco XLV", "Anne L", "Derek XLIII", "Luka XLIV", "Ilya XXXVIII", "Carlos XXXIX", "Robert XXXIX", "Robert XLIII", "Bruce XVI", "Vasyl XXXVI", "Petrzlen VI", "Paul XXXIV", "Thierry L", "Pjotr VI", "Elizabeth XIX", "Bruce XLVII", "Philippe XXXI", "Edward V"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne L", "Bob XXIV", "Bob XXV", "Bruce XVI", "Bruce XLVII", "Carlos XXXIX", "Carlos XLIX", "Derek XLIII", "Dmytro L", "Edward V", "Edward XIV", "Edward XV", "Edward XXIV", "Egor XV", "Elizabeth XIX", "Francois XLIII", "Goo XLVI", "Ilya XXXVIII", "James IX", "James XLVII", "Lou XXX", "Lou XLV", "Louis VII", "Luka XLIV", "Lukas XVI", "Makoto XXX", "Marek XLIX", "Michail XX", "Michail XLVI", "Paul XXXIV", "Pawel IX", "Petrzlen VI", "Petrzlen X", "Philip II", "Philippe XXVIII", "Philippe XXXI", "Pjotr VI", "Rasto XLVII", "Richard XLI", "Robert XIII", "Robert XXXIX", "Robert XLIII", "Stephen XXIX", "Thierry X", "Thierry L", "Vasyl XIV", "Vasyl XXXVI", "Zemco II", "Zemco XXXV", "Zemco XLV"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> kings = {"Pawel XXXII", "Pawel XXII", "Pawel XV", "Pawel XLII", "Michail XXXII", "Julka XXXVIII", "Lovro XI", "Lovro XXXIX", "Tomek VII", "Michail XII", "Lovro XLIV", "Julka XXXV", "Pawel XX", "Pawel XVII", "Pawel XXXIV", "Michail XXX", "Michail XXVII", "Lovro IV", "Lovro XXXVII", "Tomek XXXV", "Lovro II", "Julka XV", "Julka XVIII", "Pawel XXX", "Julka XXX", "Julka XXXI", "Julka I", "Lovro XXVI", "Julka XLVIII", "Julka XXV", "Tomek XXXVII", "Julka XL", "Michail XXXIX", "Tomek XLII", "Pawel XXI", "Tomek XLI", "Lovro XXIX", "Michail XLV", "Pawel XLIV", "Julka XXXII", "Pawel XIX", "Julka V", "Michail II", "Tomek XII", "Pawel X", "Michail XXIV", "Michail XL", "Lovro XV", "Michail XLIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Julka I", "Julka V", "Julka XV", "Julka XVIII", "Julka XXV", "Julka XXX", "Julka XXXI", "Julka XXXII", "Julka XXXV", "Julka XXXVIII", "Julka XL", "Julka XLVIII", "Lovro II", "Lovro IV", "Lovro XI", "Lovro XV", "Lovro XXVI", "Lovro XXIX", "Lovro XXXVII", "Lovro XXXIX", "Lovro XLIV", "Michail II", "Michail XII", "Michail XXIV", "Michail XXVII", "Michail XXX", "Michail XXXII", "Michail XXXIX", "Michail XL", "Michail XLIII", "Michail XLV", "Pawel X", "Pawel XV", "Pawel XVII", "Pawel XIX", "Pawel XX", "Pawel XXI", "Pawel XXII", "Pawel XXX", "Pawel XXXII", "Pawel XXXIV", "Pawel XLII", "Pawel XLIV", "Tomek VII", "Tomek XII", "Tomek XXXV", "Tomek XXXVII", "Tomek XLI", "Tomek XLII"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> kings = {"Anicka VI", "Makoto XXIX", "Pjotr XLVII", "Usamec XXXIV", "Henri VIII", "Luka XXXIX", "Genadij XLVII", "Eryk XX", "Robert XXIX", "Ivan XLII", "Bruce XV", "Pjotr IX", "Vasyl III", "Derek V", "Vasyl XXX", "Louis XXXIII", "Julka VII", "Pjotr XXVI", "Neal XXII", "Kubus XX", "Charles XLIX", "Bruce XLIV", "Charles XIV", "Rasto XXXIV", "Victoria X", "Victoria XLII", "Monika XXX", "Charles I", "Fero XXX", "Vasyl XI", "Francois XL", "James XXIX", "Maru XXIX", "Bruce XXIV", "Robert XXXIV", "Kubus XVIII", "Philip XXIII", "Anne XII", "Maru XLVII", "Richard XXX", "Monika XXVI", "Richard V", "Pjotr XXXVI", "Pjotr XXVIII", "Genadij XLVIII", "Kubus XXVII", "Henry I"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka VI", "Anne XII", "Bruce XV", "Bruce XXIV", "Bruce XLIV", "Charles I", "Charles XIV", "Charles XLIX", "Derek V", "Eryk XX", "Fero XXX", "Francois XL", "Genadij XLVII", "Genadij XLVIII", "Henri VIII", "Henry I", "Ivan XLII", "James XXIX", "Julka VII", "Kubus XVIII", "Kubus XX", "Kubus XXVII", "Louis XXXIII", "Luka XXXIX", "Makoto XXIX", "Maru XXIX", "Maru XLVII", "Monika XXVI", "Monika XXX", "Neal XXII", "Philip XXIII", "Pjotr IX", "Pjotr XXVI", "Pjotr XXVIII", "Pjotr XXXVI", "Pjotr XLVII", "Rasto XXXIV", "Richard V", "Richard XXX", "Robert XXIX", "Robert XXXIV", "Usamec XXXIV", "Vasyl III", "Vasyl XI", "Vasyl XXX", "Victoria X", "Victoria XLII"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> kings = {"Lukas XVII", "Mary II", "Robert XXII", "Philippe XLVI", "Egor XX", "Thierry XII", "Stephen XXXIV", "Marek XXX", "Thierry XXXI", "Francois V", "Robert I", "Richard XXII", "Ilya I", "Edward XXII", "Bob XXXIV", "Philippe XIX", "Kubus XXXVI", "Mary XXXIII", "Louis XXVI", "Philippe XIII", "Luka XX", "Bruce XXXVII", "Kubus XLIII", "Derek XII", "Robert XII", "James XXX", "Maru L", "Julka IV", "Luka IX", "Michail II", "John XLV", "Neal XIV", "Mary XXIV", "Victoria XIII", "Genadij VIII", "Henry XXXVIII", "Marek XXXVII", "Marek XL", "Rasto XIII", "Philip XXXVII", "William XL", "Marek XV", "Anne XXI", "Luka XXIV", "Maru XLVI", "Mary XLVIII", "Maru XX", "Lovro XIX", "Luka XXIX", "Philip XV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne XXI", "Bob XXXIV", "Bruce XXXVII", "Derek XII", "Edward XXII", "Egor XX", "Francois V", "Genadij VIII", "Henry XXXVIII", "Ilya I", "James XXX", "John XLV", "Julka IV", "Kubus XXXVI", "Kubus XLIII", "Louis XXVI", "Lovro XIX", "Luka IX", "Luka XX", "Luka XXIV", "Luka XXIX", "Lukas XVII", "Marek XV", "Marek XXX", "Marek XXXVII", "Marek XL", "Maru XX", "Maru XLVI", "Maru L", "Mary II", "Mary XXIV", "Mary XXXIII", "Mary XLVIII", "Michail II", "Neal XIV", "Philip XV", "Philip XXXVII", "Philippe XIII", "Philippe XIX", "Philippe XLVI", "Rasto XIII", "Richard XXII", "Robert I", "Robert XII", "Robert XXII", "Stephen XXXIV", "Thierry XII", "Thierry XXXI", "Victoria XIII", "William XL"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> kings = {"Julka XLI", "Philip XLIII", "Julka XII", "Ilya XIII", "Pjotr II", "Egor XXXIV", "Anicka VII", "Henry XXXII", "Neal XX", "Julka XXIV", "James XLII", "Egor XLV", "James XIX", "Louis XXIX", "Anicka XV", "Makoto XX", "Egor XIII", "Egor XLII", "Louis XLVIII", "Egor XXXVIII", "Anicka XII", "Henry XXXIX", "Philip XLVII", "Ilya XXII", "Anicka XLVII", "Makoto XV", "Makoto XI", "Ilya XXX", "Louis XLVII", "Egor XXIV", "Ilya XXVI", "Philip XIX", "Bruce XIII", "James L", "James XLIV", "Edward XXXVII", "Neal XXXV", "Anicka XXXI", "Philip XV", "Makoto XVIII", "Philip XLIX", "Julka XXIII", "Henry XVIII", "Ilya VII", "Egor XXIX", "Bruce IV", "Philip XLVI", "Pjotr XI", "James X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka VII", "Anicka XII", "Anicka XV", "Anicka XXXI", "Anicka XLVII", "Bruce IV", "Bruce XIII", "Edward XXXVII", "Egor XIII", "Egor XXIV", "Egor XXIX", "Egor XXXIV", "Egor XXXVIII", "Egor XLII", "Egor XLV", "Henry XVIII", "Henry XXXII", "Henry XXXIX", "Ilya VII", "Ilya XIII", "Ilya XXII", "Ilya XXVI", "Ilya XXX", "James X", "James XIX", "James XLII", "James XLIV", "James L", "Julka XII", "Julka XXIII", "Julka XXIV", "Julka XLI", "Louis XXIX", "Louis XLVII", "Louis XLVIII", "Makoto XI", "Makoto XV", "Makoto XVIII", "Makoto XX", "Neal XX", "Neal XXXV", "Philip XV", "Philip XIX", "Philip XLIII", "Philip XLVI", "Philip XLVII", "Philip XLIX", "Pjotr II", "Pjotr XI"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> kings = {"Louis XXXIX", "Mimino XLIX", "Pjotr XIX", "Lukas XXXV", "Thierry XXV", "Lukas V", "Anicka XIV", "Lukas L", "Lou XV", "Ivan X", "Lukas XXXVIII", "Julka XXXI", "Pjotr XXXV", "Zemco XXVI", "Anicka XL", "Luka XII", "Henri XVII", "Fero XIII", "Lovro XXXIX", "Luka XX", "Luka XXXVI", "Egor XXIII", "Lou XLVII", "Anicka XXXVIII", "Henri XXI", "Petrzlen XV", "Pawel XV", "Ivan XLVII", "Francois III", "Michail XLVII", "Louis V", "Luka XXXII", "John V", "Ilya XLIII", "Monika I", "Ivan XXXIX", "Pawel XIX", "Victoria XXII", "Luka XIV", "Julka XVI", "Petrzlen XVII", "Edward XLVII", "Neal XXXI", "Thierry II", "Mimino III", "Lou XXXIX", "Derek XXVI", "Derek XXI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XIV", "Anicka XXXVIII", "Anicka XL", "Derek XXI", "Derek XXVI", "Edward XLVII", "Egor XXIII", "Fero XIII", "Francois III", "Henri XVII", "Henri XXI", "Ilya XLIII", "Ivan X", "Ivan XXXIX", "Ivan XLVII", "John V", "Julka XVI", "Julka XXXI", "Lou XV", "Lou XXXIX", "Lou XLVII", "Louis V", "Louis XXXIX", "Lovro XXXIX", "Luka XII", "Luka XIV", "Luka XX", "Luka XXXII", "Luka XXXVI", "Lukas V", "Lukas XXXV", "Lukas XXXVIII", "Lukas L", "Michail XLVII", "Mimino III", "Mimino XLIX", "Monika I", "Neal XXXI", "Pawel XV", "Pawel XIX", "Petrzlen XV", "Petrzlen XVII", "Pjotr XIX", "Pjotr XXXV", "Thierry II", "Thierry XXV", "Victoria XXII", "Zemco XXVI"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> kings = {"Pjotr XVI", "Maru XLVI", "Bruce XXVIII", "Julka XLVI", "Ivan XVII", "Philip XXVII", "Victoria XII", "Zemco XLIII", "Bruce VI", "Bob XXXIX", "John I", "Derek IV", "Marek V", "Vasyl II", "Tomek X", "Pawel XXV", "Edward XXXI", "Ilya XX", "Ivan XXIX", "Victoria XXV", "Marek XVII", "Stephen XXIII", "Julka XXIV", "Mary XI", "Goo XXI", "Michail XXXV", "Monika XXX", "Marek IV", "Makoto XLIII", "Tomek XXXI", "Zemco XII", "Ilya XIX", "William XXIII", "Victoria VII", "Ilya XXXV", "Neal XLIV", "Petrzlen V", "Julka XLI", "Kubus IX", "James XXII", "Janq XIII", "Francois II", "Neal XXIII", "Makoto V", "Victoria VI", "Tomek XVI", "Luka XXX", "Mimino XLVI", "Neal XLIII", "Pawel VI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bob XXXIX", "Bruce VI", "Bruce XXVIII", "Derek IV", "Edward XXXI", "Francois II", "Goo XXI", "Ilya XIX", "Ilya XX", "Ilya XXXV", "Ivan XVII", "Ivan XXIX", "James XXII", "Janq XIII", "John I", "Julka XXIV", "Julka XLI", "Julka XLVI", "Kubus IX", "Luka XXX", "Makoto V", "Makoto XLIII", "Marek IV", "Marek V", "Marek XVII", "Maru XLVI", "Mary XI", "Michail XXXV", "Mimino XLVI", "Monika XXX", "Neal XXIII", "Neal XLIII", "Neal XLIV", "Pawel VI", "Pawel XXV", "Petrzlen V", "Philip XXVII", "Pjotr XVI", "Stephen XXIII", "Tomek X", "Tomek XVI", "Tomek XXXI", "Vasyl II", "Victoria VI", "Victoria VII", "Victoria XII", "Victoria XXV", "William XXIII", "Zemco XII", "Zemco XLIII"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> kings = {"Louis XXIX", "Tomek XXVI", "Marek XVI", "Marek X", "Ilya XXXII", "Francois XVII", "Henri XXXIII", "Henry XIX", "Monika XXXVIII", "Philip X", "Francois XXXVII", "Dmytro XXII", "Anne XXIV", "Egor XXIX", "Pjotr XXXIII", "Anne IX", "Louis XL", "Charles XXX", "Pawel IX", "Ivan V", "James II", "Tomek II", "Philip XIII", "Maru XXIV", "Mimino XLVI", "Charles XVIII", "Tomek XXXVII", "Bob III", "Paul XXIX", "James XLVI", "Francois V", "Ivan XLIX", "Petrzlen IX", "Pawel XXXV", "Lovro XVII", "Lovro VI", "Lukas IX", "Henry XV", "Henri XXXIV", "Thierry XVI", "Monika XXXVII", "Bruce XXX", "Robert VII", "Bruce XXXIV", "Dmytro XV", "Pjotr VIII", "Louis XXVI", "Ilya XXXV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anne IX", "Anne XXIV", "Bob III", "Bruce XXX", "Bruce XXXIV", "Charles XVIII", "Charles XXX", "Dmytro XV", "Dmytro XXII", "Egor XXIX", "Francois V", "Francois XVII", "Francois XXXVII", "Henri XXXIII", "Henri XXXIV", "Henry XV", "Henry XIX", "Ilya XXXII", "Ilya XXXV", "Ivan V", "Ivan XLIX", "James II", "James XLVI", "Louis XXVI", "Louis XXIX", "Louis XL", "Lovro VI", "Lovro XVII", "Lukas IX", "Marek X", "Marek XVI", "Maru XXIV", "Mimino XLVI", "Monika XXXVII", "Monika XXXVIII", "Paul XXIX", "Pawel IX", "Pawel XXXV", "Petrzlen IX", "Philip X", "Philip XIII", "Pjotr VIII", "Pjotr XXXIII", "Robert VII", "Thierry XVI", "Tomek II", "Tomek XXVI", "Tomek XXXVII"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> kings = {"Tomek XLVIII", "Thierry XXXVIII", "Anicka XVIII", "Edward XLVI", "Stephen XIX", "Makoto XX", "Anne XII", "James XLV", "Thierry XXII", "James XIII", "Charles XXV", "Makoto XXVIII", "Anne X", "Lou XXIII", "Stephen XLVI", "James XXII", "Monika I", "Monika XIII", "Edward XLI", "James II", "Monika XVI", "Rasto XXIV", "Philippe I", "Lukas XXIII", "Charles VI", "Makoto IX", "Elizabeth XXV", "Lou IV", "Mary XVI", "Michail XXII", "Stephen XXXVII", "Anicka XXXVI", "Lou XXXIII", "Anicka XXXIX", "Philippe XLII", "James XVIII", "Edward II", "Stephen XLIV", "Makoto XVIII", "Lou VIII", "Lou XXX", "Lou XXVI", "Anne XXXIV", "Lukas XXXIX", "Philippe XVII", "Mary XXXVIII", "Bob VI", "Makoto XLIX", "Monika XX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XVIII", "Anicka XXXVI", "Anicka XXXIX", "Anne X", "Anne XII", "Anne XXXIV", "Bob VI", "Charles VI", "Charles XXV", "Edward II", "Edward XLI", "Edward XLVI", "Elizabeth XXV", "James II", "James XIII", "James XVIII", "James XXII", "James XLV", "Lou IV", "Lou VIII", "Lou XXIII", "Lou XXVI", "Lou XXX", "Lou XXXIII", "Lukas XXIII", "Lukas XXXIX", "Makoto IX", "Makoto XVIII", "Makoto XX", "Makoto XXVIII", "Makoto XLIX", "Mary XVI", "Mary XXXVIII", "Michail XXII", "Monika I", "Monika XIII", "Monika XVI", "Monika XX", "Philippe I", "Philippe XVII", "Philippe XLII", "Rasto XXIV", "Stephen XIX", "Stephen XXXVII", "Stephen XLIV", "Stephen XLVI", "Thierry XXII", "Thierry XXXVIII", "Tomek XLVIII"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> kings = {"Mimino XXV", "Zemco XXVIII", "Michail XXVIII", "Bob XLIV", "Bob XVIII", "Neal XXXV", "Richard XXVII", "Francois XXI", "Neal XXIX", "Egor XXXVII", "Richard XXVI", "Egor XLI", "Pjotr XLIII", "Egor XXXI", "Pjotr XXXIX", "Pjotr XXXVI", "Richard IX", "Francois XXII", "Mimino X", "Michail XXXVIII", "Francois XL", "Egor XLVI", "Mimino XLI", "Richard XXI", "Zemco XXIX", "Mimino L", "Pjotr XXIV", "William XX", "Egor XXIX", "Mary II", "Zemco XXIII", "Zemco XLVI", "Pjotr XLVII", "Bruce XXXIII", "Pjotr XXXIV", "Michail IV", "Michail XII", "Francois I", "Egor XXV", "Egor XIV", "Pjotr XLVIII", "Zemco XXXIX", "Michail XXIII", "Michail XVI", "Egor XLV", "Mary XXV", "Bob X", "William XV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bob X", "Bob XVIII", "Bob XLIV", "Bruce XXXIII", "Egor XIV", "Egor XXV", "Egor XXIX", "Egor XXXI", "Egor XXXVII", "Egor XLI", "Egor XLV", "Egor XLVI", "Francois I", "Francois XXI", "Francois XXII", "Francois XL", "Mary II", "Mary XXV", "Michail IV", "Michail XII", "Michail XVI", "Michail XXIII", "Michail XXVIII", "Michail XXXVIII", "Mimino X", "Mimino XXV", "Mimino XLI", "Mimino L", "Neal XXIX", "Neal XXXV", "Pjotr XXIV", "Pjotr XXXIV", "Pjotr XXXVI", "Pjotr XXXIX", "Pjotr XLIII", "Pjotr XLVII", "Pjotr XLVIII", "Richard IX", "Richard XXI", "Richard XXVI", "Richard XXVII", "William XV", "William XX", "Zemco XXIII", "Zemco XXVIII", "Zemco XXIX", "Zemco XXXIX", "Zemco XLVI"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> kings = {"Paul VI", "Edward XL", "Goo VIII", "Maru XLIII", "Zemco IV", "Carlos XLVII", "Henri XLIII", "Philip VII", "Philip XXXIV", "William XIV", "William XLIX", "Usamec XXXIV", "Robert XII", "Henry XXII", "Michail IV", "Dmytro XXXVII", "Genadij V", "Luka X", "Janq XXXI", "Stephen XV", "Usamec XXV", "Stephen XXIX", "Anne IV", "Kubus XVII", "Elizabeth XLV", "Paul XXXVII", "Charles XXVIII", "Ivan XVII", "Paul XXII", "Dmytro XXVIII", "Marek IV", "Eryk III", "Pjotr XXXV", "Egor I", "Anne XI", "Pjotr XXXIII", "Michail XXXVI", "Anicka XLVI", "Derek XXXIX", "Michail XIII", "Pawel XLV", "Monika XXXIX", "Lovro I", "Charles XLII", "Eryk XXXV", "Anne XIV", "William XXXVII", "Mary XXIII", "James XXV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XLVI", "Anne IV", "Anne XI", "Anne XIV", "Carlos XLVII", "Charles XXVIII", "Charles XLII", "Derek XXXIX", "Dmytro XXVIII", "Dmytro XXXVII", "Edward XL", "Egor I", "Elizabeth XLV", "Eryk III", "Eryk XXXV", "Genadij V", "Goo VIII", "Henri XLIII", "Henry XXII", "Ivan XVII", "James XXV", "Janq XXXI", "Kubus XVII", "Lovro I", "Luka X", "Marek IV", "Maru XLIII", "Mary XXIII", "Michail IV", "Michail XIII", "Michail XXXVI", "Monika XXXIX", "Paul VI", "Paul XXII", "Paul XXXVII", "Pawel XLV", "Philip VII", "Philip XXXIV", "Pjotr XXXIII", "Pjotr XXXV", "Robert XII", "Stephen XV", "Stephen XXIX", "Usamec XXV", "Usamec XXXIV", "William XIV", "William XXXVII", "William XLIX", "Zemco IV"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> kings = {"Lou XII", "Thierry IV", "Derek XLIII", "Derek XLVIII", "Lou XIX", "Michail XXV", "Egor XL", "Egor XXIV", "Mary XIX", "Egor XIV", "Lou XXXVI", "Mimino L", "Mary XV", "Thierry III", "Lovro XIII", "Michail XXX", "William XLVI", "Lukas III", "Derek XXXII", "Derek XXXVII", "Lovro XXV", "Neal II", "Lovro XXIX", "Kubus XXXIX", "Neal XXXIV", "Egor XLVIII", "Mary V", "William II", "Tomek XLI", "Egor XXXIX", "Derek XLVII", "Lukas XXXIV", "Lukas V", "Mimino XII", "Edward XVI", "Lou XLIII", "Mimino XXII", "Louis XXVII", "Michail XII", "Kubus XIV", "Thierry XXIX", "Derek XX", "Lovro VI", "Edward II", "Kubus IX", "Lovro IV", "Thierry XXXVI", "Egor XXIII", "Edward XXVII", "Lukas XLIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Derek XX", "Derek XXXII", "Derek XXXVII", "Derek XLIII", "Derek XLVII", "Derek XLVIII", "Edward II", "Edward XVI", "Edward XXVII", "Egor XIV", "Egor XXIII", "Egor XXIV", "Egor XXXIX", "Egor XL", "Egor XLVIII", "Kubus IX", "Kubus XIV", "Kubus XXXIX", "Lou XII", "Lou XIX", "Lou XXXVI", "Lou XLIII", "Louis XXVII", "Lovro IV", "Lovro VI", "Lovro XIII", "Lovro XXV", "Lovro XXIX", "Lukas III", "Lukas V", "Lukas XXXIV", "Lukas XLIII", "Mary V", "Mary XV", "Mary XIX", "Michail XII", "Michail XXV", "Michail XXX", "Mimino XII", "Mimino XXII", "Mimino L", "Neal II", "Neal XXXIV", "Thierry III", "Thierry IV", "Thierry XXIX", "Thierry XXXVI", "Tomek XLI", "William II", "William XLVI"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> kings = {"Carlos XLIV", "Luka XXX", "Carlos XXX", "John XLII", "John XX", "John XIV", "Carlos XIV", "Carlos VIII", "Luka I", "Louis XLV", "John XXI", "John XXXII", "John XXXIV", "John XI", "John XXIV", "Louis XVIII", "Louis VIII", "Carlos L", "Luka XXV", "Carlos XLVI", "Luka IX", "John XXIX", "Luka XIV", "John I", "John XXV", "Carlos XXIV", "John VII", "Luka XXXIII", "John XLV", "Luka XVIII", "Luka VI", "Louis XXXVII", "Carlos IV", "Carlos XXXVI", "John IV", "Louis XXXI", "Luka XVII", "Louis XXXVIII", "Louis I", "Carlos XXXIX", "John XL", "Luka VII", "John XXVIII", "John XIII", "Carlos I", "Carlos XXVI", "John L"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Carlos I", "Carlos IV", "Carlos VIII", "Carlos XIV", "Carlos XXIV", "Carlos XXVI", "Carlos XXX", "Carlos XXXVI", "Carlos XXXIX", "Carlos XLIV", "Carlos XLVI", "Carlos L", "John I", "John IV", "John VII", "John XI", "John XIII", "John XIV", "John XX", "John XXI", "John XXIV", "John XXV", "John XXVIII", "John XXIX", "John XXXII", "John XXXIV", "John XL", "John XLII", "John XLV", "John L", "Louis I", "Louis VIII", "Louis XVIII", "Louis XXXI", "Louis XXXVII", "Louis XXXVIII", "Louis XLV", "Luka I", "Luka VI", "Luka VII", "Luka IX", "Luka XIV", "Luka XVII", "Luka XVIII", "Luka XXV", "Luka XXX", "Luka XXXIII"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> kings = {"Edward XLVI", "Zemco XXVIII", "Pawel XX", "Pawel XV", "Petrzlen VI", "Fero XXII", "Zemco IV", "Genadij VI", "Charles XXVIII", "Maru XIX", "Elizabeth X", "William XX", "Zemco XVII", "Zemco XLV", "Bruce XVIII", "James XLI", "William XXXV", "Bob XV", "Genadij IV", "Derek L", "Charles XXXIII", "Zemco XXXII", "Luka XXVIII", "William XLV", "Petrzlen XXXIV", "Petrzlen XXXII", "William II", "Fero XIV", "Zemco V", "William XLI", "Genadij XVII", "William XLIII", "Luka XX", "Maru XXII", "Lukas XLVI", "Philip XLVIII", "Derek VIII", "Pawel XXXIII", "James XXXIII", "Charles V", "Marek XXIV", "Zemco XIX", "Maru II", "Bruce VIII", "Derek XXX", "William IX", "Genadij XXVIII", "Elizabeth XLIX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bob XV", "Bruce VIII", "Bruce XVIII", "Charles V", "Charles XXVIII", "Charles XXXIII", "Derek VIII", "Derek XXX", "Derek L", "Edward XLVI", "Elizabeth X", "Elizabeth XLIX", "Fero XIV", "Fero XXII", "Genadij IV", "Genadij VI", "Genadij XVII", "Genadij XXVIII", "James XXXIII", "James XLI", "Luka XX", "Luka XXVIII", "Lukas XLVI", "Marek XXIV", "Maru II", "Maru XIX", "Maru XXII", "Pawel XV", "Pawel XX", "Pawel XXXIII", "Petrzlen VI", "Petrzlen XXXII", "Petrzlen XXXIV", "Philip XLVIII", "William II", "William IX", "William XX", "William XXXV", "William XLI", "William XLIII", "William XLV", "Zemco IV", "Zemco V", "Zemco XVII", "Zemco XIX", "Zemco XXVIII", "Zemco XXXII", "Zemco XLV"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> kings = {"Paul XLV", "Vasyl XLVI", "Marek VII", "Neal XLVII", "Tomek II", "Marek XL", "Mimino XXVIII", "Marek XLI", "Carlos XXXI", "Edward XIV", "Pawel XI", "Usamec XXVIII", "Charles XXXIV", "James XXVII", "Victoria XXX", "Julka XXVII", "Vasyl I", "Louis L", "Stephen XL", "Vasyl II", "Paul XI", "Ilya I", "Lou XLIX", "Elizabeth XVII", "Lou VII", "Maru XLIV", "Elizabeth XXIII", "Maru IX", "Mary XIX", "Goo XIV", "Pawel XLIX", "Carlos XII", "Luka XLVI", "Ivan XXX", "Louis X", "Charles XLI", "Ivan XLVI", "Carlos XVI", "James XXX", "James V", "Zemco XIX", "Derek XXII", "Kubus XLVI", "Makoto XLVIII", "Derek XXXIII", "Bruce XVII", "Victoria XVIII", "Marek XXX", "Marek XXIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bruce XVII", "Carlos XII", "Carlos XVI", "Carlos XXXI", "Charles XXXIV", "Charles XLI", "Derek XXII", "Derek XXXIII", "Edward XIV", "Elizabeth XVII", "Elizabeth XXIII", "Goo XIV", "Ilya I", "Ivan XXX", "Ivan XLVI", "James V", "James XXVII", "James XXX", "Julka XXVII", "Kubus XLVI", "Lou VII", "Lou XLIX", "Louis X", "Louis L", "Luka XLVI", "Makoto XLVIII", "Marek VII", "Marek XXIV", "Marek XXX", "Marek XL", "Marek XLI", "Maru IX", "Maru XLIV", "Mary XIX", "Mimino XXVIII", "Neal XLVII", "Paul XI", "Paul XLV", "Pawel XI", "Pawel XLIX", "Stephen XL", "Tomek II", "Usamec XXVIII", "Vasyl I", "Vasyl II", "Vasyl XLVI", "Victoria XVIII", "Victoria XXX", "Zemco XIX"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> kings = {"Vasyl XL", "Richard XXXVI", "Stephen VIII", "Anicka VIII", "Usamec XVII", "Stephen XLVII", "Henry XL", "Stephen XLII", "Stephen VI", "Philip XXXV", "Vasyl XXXVIII", "Richard XLVI", "Usamec XXIV", "Richard XV", "Anicka XXXI", "Richard XXIX", "Henry XXXIII", "Henry XV", "Philip XXII", "Henry XXXIV", "Henry XXVI", "Stephen X", "Monika XXVII", "James IX", "James XII", "Stephen XLVI", "Henry XXVII", "Fero XIII", "Philip IV", "Fero XLI", "Henry V", "Usamec XV", "Usamec XVI", "James XXXVI", "Fero III", "Anicka XX", "Vasyl XLIV", "Henry XLV", "Usamec XXVI", "Monika XX", "Vasyl XIV", "Stephen XI", "Monika XLI", "Philip III", "Vasyl XLVI", "Stephen XXIV", "Stephen XIII", "James XLIX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka VIII", "Anicka XX", "Anicka XXXI", "Fero III", "Fero XIII", "Fero XLI", "Henry V", "Henry XV", "Henry XXVI", "Henry XXVII", "Henry XXXIII", "Henry XXXIV", "Henry XL", "Henry XLV", "James IX", "James XII", "James XXXVI", "James XLIX", "Monika XX", "Monika XXVII", "Monika XLI", "Philip III", "Philip IV", "Philip XXII", "Philip XXXV", "Richard XV", "Richard XXIX", "Richard XXXVI", "Richard XLVI", "Stephen VI", "Stephen VIII", "Stephen X", "Stephen XI", "Stephen XIII", "Stephen XXIV", "Stephen XLII", "Stephen XLVI", "Stephen XLVII", "Usamec XV", "Usamec XVI", "Usamec XVII", "Usamec XXIV", "Usamec XXVI", "Vasyl XIV", "Vasyl XXXVIII", "Vasyl XL", "Vasyl XLIV", "Vasyl XLVI"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> kings = {"Mimino L", "Maru XXXII", "Victoria L", "Lukas XVII", "Neal XX", "Bob XXXVI", "Neal VIII", "Goo XXI", "Lou XXXVIII", "Henry IV", "Lou XXXII", "Bob XLIII", "Maru XXIX", "Henry XXXIX", "Bruce XXXIX", "Goo XXXIX", "Elizabeth XXV", "Louis XXXIV", "Bruce XLII", "Zemco XXXVIII", "Dmytro XXIII", "Petrzlen XLIII", "Lukas VI", "Neal VII", "Lou X", "Bob III", "Petrzlen XXV", "Goo III", "Francois IV", "Neal L", "Luka I", "Luka II", "Maru XXII", "Henri XIV", "Francois XXV", "Maru XX", "John XXXVII", "Mimino XLI", "Zemco IX", "Marek VIII", "Henry XXXVII", "Lou III", "Lou XXVIII", "John XXXVIII", "Petrzlen XLV", "Lou XLI", "Elizabeth XXIX", "Philip XLIV", "William XVIII", "Neal V"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Bob III", "Bob XXXVI", "Bob XLIII", "Bruce XXXIX", "Bruce XLII", "Dmytro XXIII", "Elizabeth XXV", "Elizabeth XXIX", "Francois IV", "Francois XXV", "Goo III", "Goo XXI", "Goo XXXIX", "Henri XIV", "Henry IV", "Henry XXXVII", "Henry XXXIX", "John XXXVII", "John XXXVIII", "Lou III", "Lou X", "Lou XXVIII", "Lou XXXII", "Lou XXXVIII", "Lou XLI", "Louis XXXIV", "Luka I", "Luka II", "Lukas VI", "Lukas XVII", "Marek VIII", "Maru XX", "Maru XXII", "Maru XXIX", "Maru XXXII", "Mimino XLI", "Mimino L", "Neal V", "Neal VII", "Neal VIII", "Neal XX", "Neal L", "Petrzlen XXV", "Petrzlen XLIII", "Petrzlen XLV", "Philip XLIV", "Victoria L", "William XVIII", "Zemco IX", "Zemco XXXVIII"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> kings = {"Anicka XXXIX", "Richard XXIV", "Petrzlen VI", "Derek XI", "Anne XVIII", "Victoria XLIII", "Egor VII", "Usamec L", "Richard XXVII", "Egor XLVI", "Fero XVI", "Henri XVIII", "Ilya XXVI", "Luka XLI", "Dmytro IX", "Dmytro XX", "Usamec XXIX", "James XXIII", "Zemco IV", "Petrzlen XXXVI", "John XXIV", "Marek XI", "Egor XLVIII", "Richard XXI", "Ivan XIV", "Zemco XXXI", "James XXVIII", "Maru XVII", "Monika XLIX", "Tomek XI", "Henry XX", "Henri XII", "Victoria XIII", "Dmytro L", "Egor XIX", "Tomek IV", "John XXXII", "James X", "Anne I", "Henri XXX", "Fero VI", "Julka XVI", "Marek VIII", "Anne X", "Anicka XIV", "Marek XXV", "Egor XXXIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Anicka XIV", "Anicka XXXIX", "Anne I", "Anne X", "Anne XVIII", "Derek XI", "Dmytro IX", "Dmytro XX", "Dmytro L", "Egor VII", "Egor XIX", "Egor XXXIV", "Egor XLVI", "Egor XLVIII", "Fero VI", "Fero XVI", "Henri XII", "Henri XVIII", "Henri XXX", "Henry XX", "Ilya XXVI", "Ivan XIV", "James X", "James XXIII", "James XXVIII", "John XXIV", "John XXXII", "Julka XVI", "Luka XLI", "Marek VIII", "Marek XI", "Marek XXV", "Maru XVII", "Monika XLIX", "Petrzlen VI", "Petrzlen XXXVI", "Richard XXI", "Richard XXIV", "Richard XXVII", "Tomek IV", "Tomek XI", "Usamec XXIX", "Usamec L", "Victoria XIII", "Victoria XLIII", "Zemco IV", "Zemco XXXI"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> kings = {"Pawel XXXIII", "Mary XLIII", "Pawel IV", "Mary XV", "Pawel XLVIII", "Egor XXI", "Thierry VI", "Michail XL", "Pawel XLV", "Pawel XXXVI", "Egor XLVIII", "Michail XXVII", "Vasyl XVIII", "Pawel XLIII", "Thierry XVII", "Egor I", "Julka XXIII", "Ivan XLIX", "Pawel XXXV", "Egor XLIII", "Michail XXV", "Ivan XXXIII", "Julka XXXI", "Mary XVII", "Pawel XX", "Ivan XXXIX", "Thierry XLIX", "Vasyl XLVIII", "Julka VII", "Egor XLI", "Thierry V", "Thierry XLVII", "Julka XXXIV", "Pawel XXXI", "Vasyl XXIX", "Vasyl XXXII", "Vasyl XLIV", "Mary XXVI", "Vasyl VII", "Egor V", "Julka XXIX", "Pawel XLIX", "Thierry III", "Vasyl XL", "Pawel XXVI", "Mary X", "Egor XL"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Egor I", "Egor V", "Egor XXI", "Egor XL", "Egor XLI", "Egor XLIII", "Egor XLVIII", "Ivan XXXIII", "Ivan XXXIX", "Ivan XLIX", "Julka VII", "Julka XXIII", "Julka XXIX", "Julka XXXI", "Julka XXXIV", "Mary X", "Mary XV", "Mary XVII", "Mary XXVI", "Mary XLIII", "Michail XXV", "Michail XXVII", "Michail XL", "Pawel IV", "Pawel XX", "Pawel XXVI", "Pawel XXXI", "Pawel XXXIII", "Pawel XXXV", "Pawel XXXVI", "Pawel XLIII", "Pawel XLV", "Pawel XLVIII", "Pawel XLIX", "Thierry III", "Thierry V", "Thierry VI", "Thierry XVII", "Thierry XLVII", "Thierry XLIX", "Vasyl VII", "Vasyl XVIII", "Vasyl XXIX", "Vasyl XXXII", "Vasyl XL", "Vasyl XLIV", "Vasyl XLVIII"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> kings = {"Abcdefghijklmnopqrst XLVIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Abcdefghijklmnopqrst XLVIII"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> kings = {"A I"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A I"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> kings = {"Wqgqvdimi XLIX", "Wqgqvdimilygmuf XIX", "Wqg XXV", "Wqgqvdimt XVIII", "Wqgqvdimilygs XXXVIII", "Wqgq XVII", "W XLVII", "Wqgqvdimilygmuf XLIV", "Wqgqvdim XXIV", "Wqgqvdimilygmufw XV", "Wqgqvdim XVII", "Wqg XXI", "Wqg XXXIII", "Wqgqvdimilygm XXXI", "Wqgqvdimilygmu XVIII", "Wqg XXX", "Wqgqvdimilygmufw XIX", "Wqgqvdimilyg XXXIII", "Wx XXII", "Wqgqvdimilygmufwhiyk V", "Wqgqvdimil XXIV", "Wqgqvdimilygmuk XL", "Wq XLV", "Wqgqvdimilygmufw XXXV", "Wqg XLVI", "Wqgqvdimilygmuc XXXVI", "Wqgqvdi XXI", "Wqgqvdimilyg XXXVI", "Wqgqvd XXX", "Wqgqvdimily XLV", "Wqgqvdimilygmufwhiy XI", "Wqgqvdi XIX", "Wqgqvdimilygm XL", "Wqgqv XLV", "Wqgqvdimilygmufwo IX", "Wqgqvdimilygmr XVII", "Wqgqv XXVI", "Wqgqvdimilygmufwhiyk XLIII", "W XII", "Wqgqvdimilygmufwx IV", "Wqgqvdi XLVIII", "Wqgt III", "Wqgqvdimilygmuf XLII", "Wqgqvdimilygm XLVI", "Wz VIII", "Wqgqvdimilygd XXII", "Wq XXIX", "Wqgqvdimilygmc I"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"W XII", "W XLVII", "Wq XXIX", "Wq XLV", "Wqg XXI", "Wqg XXV", "Wqg XXX", "Wqg XXXIII", "Wqg XLVI", "Wqgq XVII", "Wqgqv XXVI", "Wqgqv XLV", "Wqgqvd XXX", "Wqgqvdi XIX", "Wqgqvdi XXI", "Wqgqvdi XLVIII", "Wqgqvdim XVII", "Wqgqvdim XXIV", "Wqgqvdimi XLIX", "Wqgqvdimil XXIV", "Wqgqvdimily XLV", "Wqgqvdimilyg XXXIII", "Wqgqvdimilyg XXXVI", "Wqgqvdimilygd XXII", "Wqgqvdimilygm XXXI", "Wqgqvdimilygm XL", "Wqgqvdimilygm XLVI", "Wqgqvdimilygmc I", "Wqgqvdimilygmr XVII", "Wqgqvdimilygmu XVIII", "Wqgqvdimilygmuc XXXVI", "Wqgqvdimilygmuf XIX", "Wqgqvdimilygmuf XLII", "Wqgqvdimilygmuf XLIV", "Wqgqvdimilygmufw XV", "Wqgqvdimilygmufw XIX", "Wqgqvdimilygmufw XXXV", "Wqgqvdimilygmufwhiy XI", "Wqgqvdimilygmufwhiyk V", "Wqgqvdimilygmufwhiyk XLIII", "Wqgqvdimilygmufwo IX", "Wqgqvdimilygmufwx IV", "Wqgqvdimilygmuk XL", "Wqgqvdimilygs XXXVIII", "Wqgqvdimt XVIII", "Wqgt III", "Wx XXII", "Wz VIII"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> kings = {"Facgwvena V", "Facgp XXIII", "Facgwven XXVII", "Facg XVIII", "Facgwved XLVI", "Facgwv XIII", "Facgwvena XIII", "Facgwve XVII", "Facgwvenavjprjlw XXIV", "Facgwvenavjd XX", "Facgwvenavjprjl III", "Facgwve XXI", "Facgr XIX", "Facgwvenavjprjlwymqg I", "Facgwvenavjprjl XVIII", "Facgwvenavjprjl XLVI", "Facgwvenavjn XXV", "Facgwvenavjprjlwymqg XXXVII", "Facgwvenr XLII", "Fa XLII", "Facgwvenavu XXXIV", "Facgwvenavjprjlwyi XIV", "Facgwvenavj XXIV", "Facgwvenavjprjl XXXIV", "Facgwveno V", "Facgwvenavjprjlwymqg IV", "F XXIII", "Fac XL", "Facgwvenavjprjlw II", "Facgwvenav XLI", "Facgwvena XLVI", "Facgwvenavjprx VIII", "Facgwvex IX", "Facgwven XLIV", "Facgwvenavjp XLIX", "Facgw IX", "Facgwve XXII", "Facgwvenc XXXIII", "Facgwvenavjprjlwymi XL", "Facgwvenavjprjlwy XLII", "Fah VIII", "Facgwvenavjprjw XXVI", "Facgwve XVIII", "Facgwven IV", "Facgwvenavjp XXXIII", "Facgwvena XXXIV", "Facgwv XXXI", "Facgwvena XXXVI", "Facgwvenavjprjn III", "Facgwvenavjprjlwym XV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F XXIII", "Fa XLII", "Fac XL", "Facg XVIII", "Facgp XXIII", "Facgr XIX", "Facgw IX", "Facgwv XIII", "Facgwv XXXI", "Facgwve XVII", "Facgwve XVIII", "Facgwve XXI", "Facgwve XXII", "Facgwved XLVI", "Facgwven IV", "Facgwven XXVII", "Facgwven XLIV", "Facgwvena V", "Facgwvena XIII", "Facgwvena XXXIV", "Facgwvena XXXVI", "Facgwvena XLVI", "Facgwvenav XLI", "Facgwvenavj XXIV", "Facgwvenavjd XX", "Facgwvenavjn XXV", "Facgwvenavjp XXXIII", "Facgwvenavjp XLIX", "Facgwvenavjprjl III", "Facgwvenavjprjl XVIII", "Facgwvenavjprjl XXXIV", "Facgwvenavjprjl XLVI", "Facgwvenavjprjlw II", "Facgwvenavjprjlw XXIV", "Facgwvenavjprjlwy XLII", "Facgwvenavjprjlwyi XIV", "Facgwvenavjprjlwym XV", "Facgwvenavjprjlwymi XL", "Facgwvenavjprjlwymqg I", "Facgwvenavjprjlwymqg IV", "Facgwvenavjprjlwymqg XXXVII", "Facgwvenavjprjn III", "Facgwvenavjprjw XXVI", "Facgwvenavjprx VIII", "Facgwvenavu XXXIV", "Facgwvenc XXXIII", "Facgwveno V", "Facgwvenr XLII", "Facgwvex IX", "Fah VIII"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> kings = {"Fufxjmuauk XXXIX", "Fufxjmuau VII", "Fufxjm XLVIII", "Fufxjmuauurzazapvs XVII", "Fufxjmuauurzaz XXX", "Fufxjmuauux XV", "Fufxjm XXVII", "Fufxjmuy XXV", "Fui XLI", "Fufxjm XXXII", "Fufxjmuauurzas XXII", "Fufxjmuaut XII", "Fufxjmuak XXXIX", "Fufxjmuauurzad L", "Fufxjmuauurzazr L", "Fufxjmuauurz I", "Fufxjmuauurzazapv VI", "Fufxjmuauurzazapvic XLVIII", "Fufxjmuauurzazal XLVIII", "Fufxjz VII", "Fm XXVI", "Fufxjmuauurzaza XLII", "Fufxjmuauurzazapvic XLIX", "Fufxjmuauurzazapvic XXI", "Fufxjmuauurzazap XLIX", "Fufxjmuauurzaz V", "Fufx XVI", "Fufxjmuauurh XXXV", "Fufxjm V", "F XXIV", "Fufxjmuauurzaz XIII", "Fuf XXI", "Fufxjmuauurzazapvic IX", "Fufxjmuauurzazapk XLV", "Fufxjmu XXXV", "Fufxjmut III", "Fufxjmuauurzaza XIII", "Fuf XIV", "Fufxjmuauurzazapvb XLV", "Fufxjmuauurzazapvic XXV", "Fufxjmuauu XXVIII", "Fufxjmuauurzazaz XIV", "Fufxjmuauurzazapvicq XIII", "Fufxjmuauurzaz XLV", "Fufx XLV", "Fufxjn XVII", "Fufxjmuauurzaza XVI", "Fufxjmuauurzazam XXXI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F XXIV", "Fm XXVI", "Fuf XIV", "Fuf XXI", "Fufx XVI", "Fufx XLV", "Fufxjm V", "Fufxjm XXVII", "Fufxjm XXXII", "Fufxjm XLVIII", "Fufxjmu XXXV", "Fufxjmuak XXXIX", "Fufxjmuau VII", "Fufxjmuauk XXXIX", "Fufxjmuaut XII", "Fufxjmuauu XXVIII", "Fufxjmuauurh XXXV", "Fufxjmuauurz I", "Fufxjmuauurzad L", "Fufxjmuauurzas XXII", "Fufxjmuauurzaz V", "Fufxjmuauurzaz XIII", "Fufxjmuauurzaz XXX", "Fufxjmuauurzaz XLV", "Fufxjmuauurzaza XIII", "Fufxjmuauurzaza XVI", "Fufxjmuauurzaza XLII", "Fufxjmuauurzazal XLVIII", "Fufxjmuauurzazam XXXI", "Fufxjmuauurzazap XLIX", "Fufxjmuauurzazapk XLV", "Fufxjmuauurzazapv VI", "Fufxjmuauurzazapvb XLV", "Fufxjmuauurzazapvic IX", "Fufxjmuauurzazapvic XXI", "Fufxjmuauurzazapvic XXV", "Fufxjmuauurzazapvic XLVIII", "Fufxjmuauurzazapvic XLIX", "Fufxjmuauurzazapvicq XIII", "Fufxjmuauurzazapvs XVII", "Fufxjmuauurzazaz XIV", "Fufxjmuauurzazr L", "Fufxjmuauux XV", "Fufxjmut III", "Fufxjmuy XXV", "Fufxjn XVII", "Fufxjz VII", "Fui XLI"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> kings = {"Khuchxmkxbbn VII", "Khuchxmkxbbnk II", "Khuchxmkxbbnk XXXVIII", "Khuchxmh XXXVII", "Khuchxmkj V", "Khuchd XXXIII", "Khuchxmkxbbnkf XXII", "Khuchxmkxbbnkfng XIX", "Khuchxmkxbbnkfngsw XXXIII", "Khub XLVII", "Khuchxmkxbbn XXVI", "Kh XV", "Khuchxmu XVII", "Khuchxmkxbbk XXII", "Khuchxmkxbbnkfngsq XXIV", "Khuchxmkxbbnkfngs XXX", "K XLI", "Khuchxmkxbbnkfngswf XXI", "Khuchxmkxbbnkf XLIII", "Khuchxmkxbbnkfng I", "Khg XXXVI", "Khu XXI", "Khuchxmkxbbnkfnn XIV", "Khuchxmkxbbnkfngsw XXXVIII", "Khuchxmkxbbnkfngsa XXXVI", "Khuchx XLIII", "Khuchxmkxbbnkfngs XV", "Khuchxmkxbbnkfn L", "Kv XLVII", "Khuchxmkx XIII", "Khuchxmkxbbnkn IX", "Khuchxmkxbbv XLVII", "Khuchxmkxbbn XXXI", "Khuchxmkxbbnkfngsw XIV", "Khuchxmkxbbnkfngsw XLIII", "Khuchxmkxbbnkt XIV", "Khuchxmkxbbnkfngswfq XXV", "Khuchxmkxbbnkfnm VIII", "Khuchxmkxbbnkfngswfq VI", "Khuchxmkxbc VII", "Khuchxmkxbbnkf XXXVII", "Khuchxm X", "Khu XXIX", "Khuchxmkxbbnk XLVIII", "Khv XXVII", "Khuchxmkxbbnkfng XXVI", "Khu XXVI", "Khuchxmkxb XXXIII", "Kd XXXIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"K XLI", "Kd XXXIV", "Kh XV", "Khg XXXVI", "Khu XXI", "Khu XXVI", "Khu XXIX", "Khub XLVII", "Khuchd XXXIII", "Khuchx XLIII", "Khuchxm X", "Khuchxmh XXXVII", "Khuchxmkj V", "Khuchxmkx XIII", "Khuchxmkxb XXXIII", "Khuchxmkxbbk XXII", "Khuchxmkxbbn VII", "Khuchxmkxbbn XXVI", "Khuchxmkxbbn XXXI", "Khuchxmkxbbnk II", "Khuchxmkxbbnk XXXVIII", "Khuchxmkxbbnk XLVIII", "Khuchxmkxbbnkf XXII", "Khuchxmkxbbnkf XXXVII", "Khuchxmkxbbnkf XLIII", "Khuchxmkxbbnkfn L", "Khuchxmkxbbnkfng I", "Khuchxmkxbbnkfng XIX", "Khuchxmkxbbnkfng XXVI", "Khuchxmkxbbnkfngs XV", "Khuchxmkxbbnkfngs XXX", "Khuchxmkxbbnkfngsa XXXVI", "Khuchxmkxbbnkfngsq XXIV", "Khuchxmkxbbnkfngsw XIV", "Khuchxmkxbbnkfngsw XXXIII", "Khuchxmkxbbnkfngsw XXXVIII", "Khuchxmkxbbnkfngsw XLIII", "Khuchxmkxbbnkfngswf XXI", "Khuchxmkxbbnkfngswfq VI", "Khuchxmkxbbnkfngswfq XXV", "Khuchxmkxbbnkfnm VIII", "Khuchxmkxbbnkfnn XIV", "Khuchxmkxbbnkn IX", "Khuchxmkxbbnkt XIV", "Khuchxmkxbbv XLVII", "Khuchxmkxbc VII", "Khuchxmu XVII", "Khv XXVII", "Kv XLVII"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> kings = {"Wqistebvse VII", "Wqistebvz XVI", "Wqistebvso VIII", "Wqist XXXVI", "W II", "Wqis I", "Wqistebvsftyzexur XLIII", "Wqistebvsftyzexurlto XXX", "Wqistebvsf XXXVIII", "Wqi VI", "Wqistebvsf XV", "Wqistebvsftyz XXX", "Wqistebvsfty XLIX", "Wqistebvsftyzexu L", "Wqr XIII", "Wqistebvsw XXXIX", "Wqist L", "Wqistebvsf XXVIII", "Wq XX", "Wqistebvsftyzexurltb XXVI", "Wqistebvsfty VI", "Wqistebx VII", "Wqu XXIII", "Wqiste XXVII", "Wqistebvs XLVII", "Wqistebvsftyzexurx XL", "Wqistebvsftyzexuru XXVII", "Wqistebvs XXIX", "Wqis XXVI", "Wq XVI", "Wqistebvs XVI", "Wqistebv I", "Wqistebvo XXXVI", "Wqistebvsftyze XLVII", "Wqistebvsftyzex XXVII", "Wq XXXVI", "W XXVII", "Wqistebvsftyz XVII", "Wqistebvsft XXXVIII", "Wqiste XLI", "Wqistebvs VII", "Wqistebvsftyzexu X", "Wqistebvsftyz XXXI", "Wqistebvsftyzexurlt XXV", "Wqistebvsftyzexu XVI", "Wqistebvsftyzexur XXXII", "Wqistebvsftyzexui XIX", "W X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"W II", "W X", "W XXVII", "Wq XVI", "Wq XX", "Wq XXXVI", "Wqi VI", "Wqis I", "Wqis XXVI", "Wqist XXXVI", "Wqist L", "Wqiste XXVII", "Wqiste XLI", "Wqistebv I", "Wqistebvo XXXVI", "Wqistebvs VII", "Wqistebvs XVI", "Wqistebvs XXIX", "Wqistebvs XLVII", "Wqistebvse VII", "Wqistebvsf XV", "Wqistebvsf XXVIII", "Wqistebvsf XXXVIII", "Wqistebvsft XXXVIII", "Wqistebvsfty VI", "Wqistebvsfty XLIX", "Wqistebvsftyz XVII", "Wqistebvsftyz XXX", "Wqistebvsftyz XXXI", "Wqistebvsftyze XLVII", "Wqistebvsftyzex XXVII", "Wqistebvsftyzexu X", "Wqistebvsftyzexu XVI", "Wqistebvsftyzexu L", "Wqistebvsftyzexui XIX", "Wqistebvsftyzexur XXXII", "Wqistebvsftyzexur XLIII", "Wqistebvsftyzexurlt XXV", "Wqistebvsftyzexurltb XXVI", "Wqistebvsftyzexurlto XXX", "Wqistebvsftyzexuru XXVII", "Wqistebvsftyzexurx XL", "Wqistebvso VIII", "Wqistebvsw XXXIX", "Wqistebvz XVI", "Wqistebx VII", "Wqr XIII", "Wqu XXIII"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> kings = {"Dtnvskodftsfsnzlgh XXII", "Dtnvskodfts XXVIII", "Dtnvskodftsf XLV", "Dtnvskz XLVII", "Dtn XXXVI", "Dtnvskodftsfsnzlght X", "Dtnvskodftsfsn XII", "Dtnvskodftsf XLVII", "Dtnvskodftsfsnzlgh XXXIV", "Dtnvskos XIII", "Dt XXXVIII", "Dtnvskodft XLI", "Dtnvskoda XXIX", "Dtnvskodftsfsnzlghn XXV", "Dtno XXXVI", "Dtnvskoa I", "Dtnvsku L", "Dtnvskods XXXVIII", "Dtnvskodft XXIX", "D XVIII", "Dtnvskodftsfsnzlghc XXIX", "Dt II", "Dtnvsk XXI", "Dtnvskodftsfsnzlg VI", "De XII", "Dtnvskodftsfsnzlgh XXIV", "Dtnvskodftsfsnzf II", "Dtnvskodftsfsnzlgg XLII", "Dtnvskodftsfsnzlghn XII", "Dtnq IV", "Dtnvskodp XXXI", "Dtnvsg XXV", "Dtnvskodftsfsn VI", "Dtnvskodftsfsnzl XL", "Dtnvk XXX", "Dtnvskoq XXXVIII", "Dtnvskodftsfsx XII", "Dtnvskodftsf XXI", "Dtnvskoj XXIV", "Dtnvskodftsfsnzlgh XLVIII", "Dtnvskodftsfsnzlgh XIII", "Dtnvs XLV", "Dtnvskodftsfsnzlghnd XLVI", "Dtnvskodftsfsnzlghnw X", "Dtnvsko XLVII", "Dg XLIII", "Dtnvskodftsfsnzlg XXXV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D XVIII", "De XII", "Dg XLIII", "Dt II", "Dt XXXVIII", "Dtn XXXVI", "Dtno XXXVI", "Dtnq IV", "Dtnvk XXX", "Dtnvs XLV", "Dtnvsg XXV", "Dtnvsk XXI", "Dtnvsko XLVII", "Dtnvskoa I", "Dtnvskoda XXIX", "Dtnvskodft XXIX", "Dtnvskodft XLI", "Dtnvskodfts XXVIII", "Dtnvskodftsf XXI", "Dtnvskodftsf XLV", "Dtnvskodftsf XLVII", "Dtnvskodftsfsn VI", "Dtnvskodftsfsn XII", "Dtnvskodftsfsnzf II", "Dtnvskodftsfsnzl XL", "Dtnvskodftsfsnzlg VI", "Dtnvskodftsfsnzlg XXXV", "Dtnvskodftsfsnzlgg XLII", "Dtnvskodftsfsnzlgh XIII", "Dtnvskodftsfsnzlgh XXII", "Dtnvskodftsfsnzlgh XXIV", "Dtnvskodftsfsnzlgh XXXIV", "Dtnvskodftsfsnzlgh XLVIII", "Dtnvskodftsfsnzlghc XXIX", "Dtnvskodftsfsnzlghn XII", "Dtnvskodftsfsnzlghn XXV", "Dtnvskodftsfsnzlghnd XLVI", "Dtnvskodftsfsnzlghnw X", "Dtnvskodftsfsnzlght X", "Dtnvskodftsfsx XII", "Dtnvskodp XXXI", "Dtnvskods XXXVIII", "Dtnvskoj XXIV", "Dtnvskoq XXXVIII", "Dtnvskos XIII", "Dtnvsku L", "Dtnvskz XLVII"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> kings = {"Lmvsfntioh XV", "Lmvsfntiowjlkihwivtv II", "Lmvsfntiowjlki XI", "Lmvsfntiowj XXIX", "Lu XIV", "Lme XXXIX", "Lmvsfntiowjlkihwivs XVII", "Lmvsfntiowb XXXIII", "Lmvsfntiow XLV", "Lmvsfntiowjlkf IV", "Lmvsfntiow XLIV", "Lmvsfntiowjlkihwi XLVI", "Lmvsfntiowjlkihw XIX", "Lmvsfntiowjlkihwivq XI", "Lmvs XVIII", "Lmvsfntioo XVIII", "Lmvsfntiowjlki III", "Lmvsfntiowjlkih XXVII", "Lmvsfntiowjlkihwi XIII", "Lmvsf XIII", "Lmvsfntiou XLVI", "Lmvsfntiowjlkihwivt V", "Lmvsfntif XLIII", "Lmvsfntiowjlkihwiv II", "Lm IV", "Lmvsfntio XXV", "Lmvsh XIX", "Lmvsfntiowjlkihwir XV", "Lmvsfnt XLVI", "Lmvsfntn XXXIV", "Ld XI", "Lmvsfntio XXXVIII", "Lmv V", "Lmvsfntiowjlk XXIV", "Lmvsfg XVIII", "Lmvsfntiowjlkihwivti XXIX", "Lmvsfntiv XXXVII", "Lmvsfntiowjl VIII", "Lmvs VI", "Lmvsb V", "Lmvsfnti XLV", "Lmvsfm IV", "Lmvsfntiowjls XXXIII", "Lmvsfntiowjlkihwivf XXXII", "Lm XII", "Lmvsfny L", "Lmvsfntiowjp XLIII", "Lmvsfntiowjlkihwit XVIII", "Lmvsfc XXII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ld XI", "Lm IV", "Lm XII", "Lme XXXIX", "Lmv V", "Lmvs VI", "Lmvs XVIII", "Lmvsb V", "Lmvsf XIII", "Lmvsfc XXII", "Lmvsfg XVIII", "Lmvsfm IV", "Lmvsfnt XLVI", "Lmvsfnti XLV", "Lmvsfntif XLIII", "Lmvsfntio XXV", "Lmvsfntio XXXVIII", "Lmvsfntioh XV", "Lmvsfntioo XVIII", "Lmvsfntiou XLVI", "Lmvsfntiow XLIV", "Lmvsfntiow XLV", "Lmvsfntiowb XXXIII", "Lmvsfntiowj XXIX", "Lmvsfntiowjl VIII", "Lmvsfntiowjlk XXIV", "Lmvsfntiowjlkf IV", "Lmvsfntiowjlki III", "Lmvsfntiowjlki XI", "Lmvsfntiowjlkih XXVII", "Lmvsfntiowjlkihw XIX", "Lmvsfntiowjlkihwi XIII", "Lmvsfntiowjlkihwi XLVI", "Lmvsfntiowjlkihwir XV", "Lmvsfntiowjlkihwit XVIII", "Lmvsfntiowjlkihwiv II", "Lmvsfntiowjlkihwivf XXXII", "Lmvsfntiowjlkihwivq XI", "Lmvsfntiowjlkihwivs XVII", "Lmvsfntiowjlkihwivt V", "Lmvsfntiowjlkihwivti XXIX", "Lmvsfntiowjlkihwivtv II", "Lmvsfntiowjls XXXIII", "Lmvsfntiowjp XLIII", "Lmvsfntiv XXXVII", "Lmvsfntn XXXIV", "Lmvsfny L", "Lmvsh XIX", "Lu XIV"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> kings = {"Jamduxlgnxrykmjg XXV", "Jamduxlgnxrykmjgnk XXIV", "Jamduxlgnxrykm III", "Jamduxlgnxrykmjb XLIV", "Jamduxlgnx L", "Jamduxlgnxrykm XXIV", "Jamduxlz XXXVI", "Jamduq XXXII", "Jamduxlgnxrykm XXIX", "Jamduxlgnxryk XLIII", "Jamduxlgnxz XV", "Jamduxlgnxrykmjg XVI", "Jamduxlgnxrykmjgnkot IX", "Jamdux IX", "Jamduxlgn VIII", "Jamduxlgnx X", "Jamduxlgp XLIII", "Jamduxlgnxrq XII", "J XII", "J XXXVI", "Jamduxlgnxt IV", "Jam XV", "Jamduxlgnxryk XXIV", "Jamduxlgnxrykmj XXVI", "Jamd XIX", "Jamduxlgnxrykmjgnp XXXIX", "Jamdu XX", "Jamdug XXVII", "Jamduxlgnxrykmjgnv IV", "Ja XXXII", "Jamduxlgnxry I", "Jamduxlgnxrykmjgnkof II", "Jamduxlgnxrykmjgn XLVI", "Jamduxlgnxr XVI", "Jamduxlgnxry VII", "Jamduxlgnxrykm XXXV", "Jamduxlgnxrykmjgnkoe XLI", "Jamduxlgnxrykmj XLIII", "Jamduxlgnxr XLII", "Jamdk XXXV", "Jamduxlgnxry XIII", "Jamduxlgnxrykmjgnko XXXIV", "Jamduxl XXXVIII", "Jamdux XVI", "Ja L", "Jamduxlgnxrykmjgnko XXVI", "Jamduxlgnx IV", "Jt XXVI", "Jamduxlgnxrykmjgnk XXXV", "Jamduxlgnxrykmjgnkos XXXII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"J XII", "J XXXVI", "Ja XXXII", "Ja L", "Jam XV", "Jamd XIX", "Jamdk XXXV", "Jamdu XX", "Jamdug XXVII", "Jamduq XXXII", "Jamdux IX", "Jamdux XVI", "Jamduxl XXXVIII", "Jamduxlgn VIII", "Jamduxlgnx IV", "Jamduxlgnx X", "Jamduxlgnx L", "Jamduxlgnxr XVI", "Jamduxlgnxr XLII", "Jamduxlgnxrq XII", "Jamduxlgnxry I", "Jamduxlgnxry VII", "Jamduxlgnxry XIII", "Jamduxlgnxryk XXIV", "Jamduxlgnxryk XLIII", "Jamduxlgnxrykm III", "Jamduxlgnxrykm XXIV", "Jamduxlgnxrykm XXIX", "Jamduxlgnxrykm XXXV", "Jamduxlgnxrykmj XXVI", "Jamduxlgnxrykmj XLIII", "Jamduxlgnxrykmjb XLIV", "Jamduxlgnxrykmjg XVI", "Jamduxlgnxrykmjg XXV", "Jamduxlgnxrykmjgn XLVI", "Jamduxlgnxrykmjgnk XXIV", "Jamduxlgnxrykmjgnk XXXV", "Jamduxlgnxrykmjgnko XXVI", "Jamduxlgnxrykmjgnko XXXIV", "Jamduxlgnxrykmjgnkoe XLI", "Jamduxlgnxrykmjgnkof II", "Jamduxlgnxrykmjgnkos XXXII", "Jamduxlgnxrykmjgnkot IX", "Jamduxlgnxrykmjgnp XXXIX", "Jamduxlgnxrykmjgnv IV", "Jamduxlgnxt IV", "Jamduxlgnxz XV", "Jamduxlgp XLIII", "Jamduxlz XXXVI", "Jt XXVI"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> kings = {"Zxzxkptoybdsig VIII", "Zxzxkptoybdo XVI", "Zxzxkptoybdsigja XXXIV", "Zxzxkptoybdsig XLI", "Zxzxkptoybd XXXIII", "Zxzxkptoybdsi VII", "Zx XXXIX", "Zxzxkl XXVIII", "Zxzxkptoybdsigjpjsjw XX", "Zxzxk XXVIII", "Zxzxkptoybds XIX", "Zxzxkptoybdsigjpjs XV", "Zxzxkptoybdsigjpjsjw XXVI", "Zc XLIV", "Zxzxk XLI", "Zxzxkptoybdsigjpj XXIV", "Zx XLVI", "Zxzxkptoybdsigjpj XLV", "Zxzxkptoybdsigjpjsj XLIV", "Zxzxkp XXIV", "Zj VI", "Zxzx XXXVI", "Zxzxkptoybdsigju XLVIII", "Zx XLIII", "Zxzxkptoybdsigjpjs XIX", "Zxzxkptoybdsigjpjc XXIII", "Zxzxkptoyb XIII", "Zxzxkpto XXIX", "Zxzxkptoybdsigjpjso XLIV", "Zxzxkptoybdsk XVI", "Zx XXI", "Zx XVIII", "Zxzxkptoybdsigjpjsjf XXV", "Zxzxkptoybdsigjpjsjw L", "Zxzxkptoybdsigj IV", "Zx XXX", "Zxzxkptoybdsigjpk XLVIII", "Zxzxkptoybdsigjpjsl XLVII", "Zxz XXXVIII", "Zw XXVII", "Zxzxkptoybdsigjpjsj XXI", "Zxzxkptoybds I", "Zxzxkptoybdsigjpjsn XLIV", "Zxzxkptoy XXXII", "Zxzxkptoybdsigjpa XXXIX", "Zxzxkpt XXXVIII", "Zxzxkptoybdsigr V", "Zxzxkptoybdsigjpje XVI", "Zxzxkpt XVIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Zc XLIV", "Zj VI", "Zw XXVII", "Zx XVIII", "Zx XXI", "Zx XXX", "Zx XXXIX", "Zx XLIII", "Zx XLVI", "Zxz XXXVIII", "Zxzx XXXVI", "Zxzxk XXVIII", "Zxzxk XLI", "Zxzxkl XXVIII", "Zxzxkp XXIV", "Zxzxkpt XVIII", "Zxzxkpt XXXVIII", "Zxzxkpto XXIX", "Zxzxkptoy XXXII", "Zxzxkptoyb XIII", "Zxzxkptoybd XXXIII", "Zxzxkptoybdo XVI", "Zxzxkptoybds I", "Zxzxkptoybds XIX", "Zxzxkptoybdsi VII", "Zxzxkptoybdsig VIII", "Zxzxkptoybdsig XLI", "Zxzxkptoybdsigj IV", "Zxzxkptoybdsigja XXXIV", "Zxzxkptoybdsigjpa XXXIX", "Zxzxkptoybdsigjpj XXIV", "Zxzxkptoybdsigjpj XLV", "Zxzxkptoybdsigjpjc XXIII", "Zxzxkptoybdsigjpje XVI", "Zxzxkptoybdsigjpjs XV", "Zxzxkptoybdsigjpjs XIX", "Zxzxkptoybdsigjpjsj XXI", "Zxzxkptoybdsigjpjsj XLIV", "Zxzxkptoybdsigjpjsjf XXV", "Zxzxkptoybdsigjpjsjw XX", "Zxzxkptoybdsigjpjsjw XXVI", "Zxzxkptoybdsigjpjsjw L", "Zxzxkptoybdsigjpjsl XLVII", "Zxzxkptoybdsigjpjsn XLIV", "Zxzxkptoybdsigjpjso XLIV", "Zxzxkptoybdsigjpk XLVIII", "Zxzxkptoybdsigju XLVIII", "Zxzxkptoybdsigr V", "Zxzxkptoybdsk XVI"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> kings = {"Butzafrjvprlocxzqhep XXX", "B XIII", "Butzafrjvprlocxzqh XX", "Buo XLVI", "Butzafrjvprloc XLIII", "Butzafrjvprlocxzqhe XXXVIII", "Butj XXIV", "Butzafrjvprlo XVIII", "Butzafrjvp III", "Butzafrjvprlb XXV", "Butzafrjvprlocxzqho XIII", "Butzafrjvprlocxz XXXII", "Butzafrjvprlocxzq I", "Butzag XLII", "Butzafrjvprlocxzqe I", "Butzafrjvprlocxzqh V", "Butzafrjvprl XLV", "B XLIX", "Buf XL", "Butzafrjvprloc XXIV", "Bua XXII", "Butzafrjvprlocx XXXVII", "Butzafrjvprb XVII", "Butzafrjvprlocxzqhep XIV", "Butzafrjvprlocxzqh XXXIV", "But XLII", "Butzafrjvprlocxzqh II", "Butzafb XLIII", "Butzafrjvprlocxzqhe XLV", "Butzafrjvprlocxz V", "Butzafrh III", "Bute XXXIII", "Butzafrv XXX", "Butzafrjvpr XVII", "Butzafrjvprloq L", "Butzafrjvprl XLIX", "Bs I", "But XXXVII", "But XXIII", "Butzafrjvp XXXVI", "Butzm XXXIV", "Butzafrjvprlo XXX", "Butzafrjvprlocxzqh XLV", "Butzafh XLIV", "Butzafrjvprh XXVI", "Butzafrjv VIII", "Butzafrjvprl XXIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B XIII", "B XLIX", "Bs I", "Bua XXII", "Buf XL", "Buo XLVI", "But XXIII", "But XXXVII", "But XLII", "Bute XXXIII", "Butj XXIV", "Butzafb XLIII", "Butzafh XLIV", "Butzafrh III", "Butzafrjv VIII", "Butzafrjvp III", "Butzafrjvp XXXVI", "Butzafrjvpr XVII", "Butzafrjvprb XVII", "Butzafrjvprh XXVI", "Butzafrjvprl XXIV", "Butzafrjvprl XLV", "Butzafrjvprl XLIX", "Butzafrjvprlb XXV", "Butzafrjvprlo XVIII", "Butzafrjvprlo XXX", "Butzafrjvprloc XXIV", "Butzafrjvprloc XLIII", "Butzafrjvprlocx XXXVII", "Butzafrjvprlocxz V", "Butzafrjvprlocxz XXXII", "Butzafrjvprlocxzq I", "Butzafrjvprlocxzqe I", "Butzafrjvprlocxzqh II", "Butzafrjvprlocxzqh V", "Butzafrjvprlocxzqh XX", "Butzafrjvprlocxzqh XXXIV", "Butzafrjvprlocxzqh XLV", "Butzafrjvprlocxzqhe XXXVIII", "Butzafrjvprlocxzqhe XLV", "Butzafrjvprlocxzqhep XIV", "Butzafrjvprlocxzqhep XXX", "Butzafrjvprlocxzqho XIII", "Butzafrjvprloq L", "Butzafrv XXX", "Butzag XLII", "Butzm XXXIV"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> kings = {"Louis IX", "Louis VIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Louis VIII", "Louis IX"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> kings = {"Ab IV", "Ab XLIV", "Abbd XIV", "Abcd XLIX", "Ab XLIX", "Abcd XL", "Abc XX", "Abcd IX", "Ac XLIX", "Ac IX", "Ab L", "Abc IV", "Abc XIV", "Abc I", "Abc XXI", "Abbd XLIV", "Abcd IV", "Abc XVI", "Ab XIV", "Ab I", "Abc XLIV", "Abbd XLIX", "Abc XI", "Abc VII", "Abc III", "Abc XLIX", "Ac XLIV", "Abbd IX", "Abc XXV", "Abc XIX", "Abc VI", "Abcd L", "Abc X", "Abc IX", "Ac IV", "Abc V", "Abc XIII", "Abcd I", "Abc XV", "Abc II", "Abc XII", "Abc XVII", "Abcd XIV", "Ab XL", "Abbd IV", "Abcd XLIV", "Abc L", "Ab IX", "Abc XL", "Ac XIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ab I", "Ab IV", "Ab IX", "Ab XIV", "Ab XL", "Ab XLIV", "Ab XLIX", "Ab L", "Abbd IV", "Abbd IX", "Abbd XIV", "Abbd XLIV", "Abbd XLIX", "Abc I", "Abc II", "Abc III", "Abc IV", "Abc V", "Abc VI", "Abc VII", "Abc IX", "Abc X", "Abc XI", "Abc XII", "Abc XIII", "Abc XIV", "Abc XV", "Abc XVI", "Abc XVII", "Abc XIX", "Abc XX", "Abc XXI", "Abc XXV", "Abc XL", "Abc XLIV", "Abc XLIX", "Abc L", "Abcd I", "Abcd IV", "Abcd IX", "Abcd XIV", "Abcd XL", "Abcd XLIV", "Abcd XLIX", "Abcd L", "Ac IV", "Ac IX", "Ac XIV", "Ac XLIV", "Ac XLIX"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> kings = {"Aa I", "Aa II", "X X", "Xx XX", "Xx VI", "X V", "C II", "C XLIX", "C IX", "C XIX", "C XXIX", "C XXXIX", "C L", "Abcdefghijklmnopqrst XXXVIII", "I I", "L L", "I II"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Aa I", "Aa II", "Abcdefghijklmnopqrst XXXVIII", "C II", "C IX", "C XIX", "C XXIX", "C XXXIX", "C XLIX", "C L", "I I", "I II", "L L", "X V", "X X", "Xx VI", "Xx XX"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> kings = {"A XLVI", "A XV", "A XLIV", "A XXXIV", "A XIII", "B II"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XIII", "A XV", "A XXXIV", "A XLIV", "A XLVI", "B II"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> kings = {"Fasdfdfiu I", "Fasdfdfiu II", "Fasdfdfiu III", "Fasdfdfiu IV", "Fasdfdfiu V", "Fasdfdfiu VI", "Fasdfdfiu VII", "Fasdfdfiu VIII", "Fasdfdfiu IX", "Fasdfdfiu X", "Ffiul XI", "Ffiul XII", "Ffiul XIII", "Ffiuls XIV", "Ffiuxl XV", "Ffexviiul XVI", "Ffiul XVII", "Ffiul XVIII", "Ffiul XIX", "Ffiul XX", "Fficu XXI", "Fficu XXII", "Fficu XXIII", "Fficu XXIV", "Fficu XXV", "Fficu XXVI", "Fficu XXVII", "Fficu XXVIII", "Fficu XXIX", "Fficu XXX", "Ffidu XLI", "Ffidu XLII", "Ffidu XLIII", "Ffidu XLIV", "Ffidu XLV", "Ffidu XLVI", "Ffidu XLVII", "Ffidu XLVIII", "Ffidu XLIX", "Ffidu L", "Ffixu XXXI", "Ffixu XXXII", "Ffixu XXXIII", "Ffixu XXXIV", "Ffixu XXXV", "Ffixu XXXVI", "Ffixu XXXVII", "Ffixu XXXVIII", "Ffixu XXXIX", "Ffixu XL"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Fasdfdfiu I", "Fasdfdfiu II", "Fasdfdfiu III", "Fasdfdfiu IV", "Fasdfdfiu V", "Fasdfdfiu VI", "Fasdfdfiu VII", "Fasdfdfiu VIII", "Fasdfdfiu IX", "Fasdfdfiu X", "Ffexviiul XVI", "Fficu XXI", "Fficu XXII", "Fficu XXIII", "Fficu XXIV", "Fficu XXV", "Fficu XXVI", "Fficu XXVII", "Fficu XXVIII", "Fficu XXIX", "Fficu XXX", "Ffidu XLI", "Ffidu XLII", "Ffidu XLIII", "Ffidu XLIV", "Ffidu XLV", "Ffidu XLVI", "Ffidu XLVII", "Ffidu XLVIII", "Ffidu XLIX", "Ffidu L", "Ffiul XI", "Ffiul XII", "Ffiul XIII", "Ffiul XVII", "Ffiul XVIII", "Ffiul XIX", "Ffiul XX", "Ffiuls XIV", "Ffiuxl XV", "Ffixu XXXI", "Ffixu XXXII", "Ffixu XXXIII", "Ffixu XXXIV", "Ffixu XXXV", "Ffixu XXXVI", "Ffixu XXXVII", "Ffixu XXXVIII", "Ffixu XXXIX", "Ffixu XL"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> kings = {"I XIX", "I XXI", "I XX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"I XIX", "I XX", "I XXI"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> kings = {"A XL", "A XX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XX", "A XL"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> kings = {"A V", "A IV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A IV", "A V"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> kings = {"Abc XXV", "Abc I", "Abc XX", "Abc L", "Abc XXVI", "Abc XXIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Abc I", "Abc XX", "Abc XXIV", "Abc XXV", "Abc XXVI", "Abc L"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> kings = {"A IV", "A V", "A VI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A IV", "A V", "A VI"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> kings = {"Abc XLVIII", "Abc XLVII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Abc XLVII", "Abc XLVIII"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> kings = {"A L", "A XL"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XL", "A L"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> kings = {"John IV", "John V"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"John IV", "John V"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> kings = {"John XLI", "John XXIX", "John L", "John XXVI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"John XXVI", "John XXIX", "John XLI", "John L"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> kings = {"A XX", "A XIX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XIX", "A XX"};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> kings = {"Name XXVIII", "Name XIV", "Name XXX", "Name XLI", "Name XXXIV", "Name L", "Name III", "Name XXXI", "Name XXXVI", "Name XVIII", "Name IV", "Name XII", "Name XIII", "Name XLVII", "Name XXIII", "Name XLIX", "Name XI", "Name XLII", "Name XXXIX", "Name XV", "Name XX", "Name XLVIII", "Name XXII", "Name XXIV", "Name XVI", "Name XLV", "Name V", "Name XLIII", "Name II", "Name VIII", "Name VI", "Name XVII", "Name XXXVII", "Name XXVII", "Name IX", "Name XXIX", "Name XLIV", "Name XXXV", "Name I", "Name XXV", "Name VII", "Name XXXVIII", "Name XXXII", "Name XL", "Name X", "Name XIX", "Name XXI", "Name XXVI", "Name XXXIII", "Name XLVI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Name I", "Name II", "Name III", "Name IV", "Name V", "Name VI", "Name VII", "Name VIII", "Name IX", "Name X", "Name XI", "Name XII", "Name XIII", "Name XIV", "Name XV", "Name XVI", "Name XVII", "Name XVIII", "Name XIX", "Name XX", "Name XXI", "Name XXII", "Name XXIII", "Name XXIV", "Name XXV", "Name XXVI", "Name XXVII", "Name XXVIII", "Name XXIX", "Name XXX", "Name XXXI", "Name XXXII", "Name XXXIII", "Name XXXIV", "Name XXXV", "Name XXXVI", "Name XXXVII", "Name XXXVIII", "Name XXXIX", "Name XL", "Name XLI", "Name XLII", "Name XLIII", "Name XLIV", "Name XLV", "Name XLVI", "Name XLVII", "Name XLVIII", "Name XLIX", "Name L"};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> kings = {"John X", "John IX", "John L", "John V"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"John V", "John IX", "John X", "John L"};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> kings = {"L XXXI", "L X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"L X", "L XXXI"};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> kings = {"Jorge XL", "Jorge XXXIX", "Jorge XLIX", "Jorge L", "Jorge XXXVIII", "Jorge XIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Jorge XIV", "Jorge XXXVIII", "Jorge XXXIX", "Jorge XL", "Jorge XLIX", "Jorge L"};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> kings = {"A XXIX", "A XXX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XXIX", "A XXX"};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> kings = {"A I", "A XXIX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A I", "A XXIX"};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> kings = {"A XIX", "A XX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XIX", "A XX"};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> kings = {"A XLIX", "A X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A X", "A XLIX"};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> kings = {"Louis IX", "Louis X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Louis IX", "Louis X"};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> kings = {"Aa XXXVI", "Aa XXXIV", "Aa XXXV", "Aa XXXIX", "Aa XXXI", "Aa XXXII", "Aa XXXIII", "Aa XX", "Aa L", "Aa XLIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Aa XX", "Aa XXXI", "Aa XXXII", "Aa XXXIII", "Aa XXXIV", "Aa XXXV", "Aa XXXVI", "Aa XXXIX", "Aa XLIV", "Aa L"};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> kings = {"John L", "John X", "Paul X", "Paul L", "Tom X", "Tom L", "Jessica L", "Jessica X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Jessica X", "Jessica L", "John X", "John L", "Paul X", "Paul L", "Tom X", "Tom L"};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> kings = {"Alex L", "Alex XL"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Alex XL", "Alex L"};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> kings = {"Louis V", "Louis IV", "Louis VI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Louis IV", "Louis V", "Louis VI"};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> kings = {"A XXXV", "A XL"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XXXV", "A XL"};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> kings = {"A XL", "A L", "A II", "A I"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A I", "A II", "A XL", "A L"};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> kings = {"Philippe VI", "Jean II", "Charles V", "Charles L", "Charles XXXIX", "Louis XL", "Charles I"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Charles I", "Charles V", "Charles XXXIX", "Charles L", "Jean II", "Louis XL", "Philippe VI"};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> kings = {"Louis XV", "Louis XX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Louis XV", "Louis XX"};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> kings = {"Philip XIII", "Philip XIV", "Philip XIX", "Philip XII", "Philip XV", "Philip L", "Philip I"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Philip I", "Philip XII", "Philip XIII", "Philip XIV", "Philip XV", "Philip XIX", "Philip L"};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> kings = {"Arthua II", "Arthub I"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Arthua II", "Arthub I"};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> kings = {"A XLII", "A XLIV", "A XLI", "A XL", "A XLVIII", "A XLVI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XL", "A XLI", "A XLII", "A XLIV", "A XLVI", "A XLVIII"};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> kings = {"A V", "A XXIX", "A XII", "A XVI", "A XXV", "A XXXVI", "A XVIII", "A XXXVII", "A XXVII", "A XLIX", "A XXXIV", "A XL", "A XX", "A III", "A XLVIII", "A L", "A XXVI", "A XIX", "A XXXIII", "A XLI", "A VI", "A XXII", "A VIII", "A XIII", "A XV", "A XLIII", "A XXVIII", "A VII", "A XLVI", "A XLV", "A XXXI", "A XXXIX", "A XIV", "A XXXVIII", "A IV", "A XVII", "A XXX", "A XLIV", "A X", "A XXIII", "A IX", "A XXIV", "A XXI", "A XXXV", "A II", "A XI", "A XXXII", "A I", "A XLVII", "A XLII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A I", "A II", "A III", "A IV", "A V", "A VI", "A VII", "A VIII", "A IX", "A X", "A XI", "A XII", "A XIII", "A XIV", "A XV", "A XVI", "A XVII", "A XVIII", "A XIX", "A XX", "A XXI", "A XXII", "A XXIII", "A XXIV", "A XXV", "A XXVI", "A XXVII", "A XXVIII", "A XXIX", "A XXX", "A XXXI", "A XXXII", "A XXXIII", "A XXXIV", "A XXXV", "A XXXVI", "A XXXVII", "A XXXVIII", "A XXXIX", "A XL", "A XLI", "A XLII", "A XLIII", "A XLIV", "A XLV", "A XLVI", "A XLVII", "A XLVIII", "A XLIX", "A L"};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> kings = {"A XL", "A L"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XL", "A L"};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> kings = {"Aderbal IX", "Aderbal X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Aderbal IX", "Aderbal X"};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> kings = {"Phil XLV", "Phil XL", "Phil XLVI", "Phil L"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Phil XL", "Phil XLV", "Phil XLVI", "Phil L"};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> kings = {"Aa I", "Aa II", "Aa III", "Aa IV", "Aa V", "Aa VI", "Aa VII", "Aa VIII", "Aa IX", "Aa X", "Aa XI", "Aa XII", "Aa XIII", "Aa XIV", "Aa XV", "Aa XVI", "Aa XVII", "Aa XVIII", "Aa XIX", "Aa XX", "Aa XXI", "Aa XXII", "Aa XXIII", "Aa XXIV", "Aa XXV", "Aa XXVI", "Aa XXVII", "Aa XXVIII", "Aa XXIX", "Aa XXX", "Aa XXXI", "Aa XXXII", "Aa XXXIII", "Aa XXXIV", "Aa XXXV", "Aa XXXVI", "Aa XXXVII", "Aa XXXVIII", "Aa XXXIX", "Aa XL", "Aa XLI", "Aa XLII", "Aa XLIII", "Aa XLIV", "Aa XLV", "Aa XLVI", "Aa XLVII", "Aa XLVIII", "Aa XLIX", "Aa L"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Aa I", "Aa II", "Aa III", "Aa IV", "Aa V", "Aa VI", "Aa VII", "Aa VIII", "Aa IX", "Aa X", "Aa XI", "Aa XII", "Aa XIII", "Aa XIV", "Aa XV", "Aa XVI", "Aa XVII", "Aa XVIII", "Aa XIX", "Aa XX", "Aa XXI", "Aa XXII", "Aa XXIII", "Aa XXIV", "Aa XXV", "Aa XXVI", "Aa XXVII", "Aa XXVIII", "Aa XXIX", "Aa XXX", "Aa XXXI", "Aa XXXII", "Aa XXXIII", "Aa XXXIV", "Aa XXXV", "Aa XXXVI", "Aa XXXVII", "Aa XXXVIII", "Aa XXXIX", "Aa XL", "Aa XLI", "Aa XLII", "Aa XLIII", "Aa XLIV", "Aa XLV", "Aa XLVI", "Aa XLVII", "Aa XLVIII", "Aa XLIX", "Aa L"};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> kings = {"A XLIV", "A X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A X", "A XLIV"};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> kings = {"Ronaldo IV", "Ronaldo V"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ronaldo IV", "Ronaldo V"};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> kings = {"Rom XLII", "Rom XLIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Rom XLII", "Rom XLIII"};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> kings = {"Ali XXIV", "Ali XXVI", "All X", "All IX", "Alwe V"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ali XXIV", "Ali XXVI", "All IX", "All X", "Alwe V"};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> kings = {"A XLIX", "A I", "A L", "A XL", "A IV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A I", "A IV", "A XL", "A XLIX", "A L"};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> kings = {"Abv V", "Abv XV", "Abv XX", "Rst XXX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Abv V", "Abv XV", "Abv XX", "Rst XXX"};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> kings = {"Louis XLV", "Louis XLIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Louis XLIV", "Louis XLV"};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> kings = {"A X", "A XXXI", "A XXI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A X", "A XXI", "A XXXI"};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> kings = {"A X", "A XX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A X", "A XX"};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> kings = {"Ivan L", "Ivan XLI", "Ivan XLV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ivan XLI", "Ivan XLV", "Ivan L"};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> kings = {"L I", "L IX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"L I", "L IX"};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> kings = {"A XLII", "A XLIV", "A XLI", "A XLIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XLI", "A XLII", "A XLIII", "A XLIV"};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> kings = {"A XV", "A XIV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XIV", "A XV"};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> kings = {"A V", "A IV", "B IV", "B V"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A IV", "A V", "B IV", "B V"};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> kings = {"A XI", "A X", "B X", "B XI", "C X", "C XI", "D XI", "D X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A X", "A XI", "B X", "B XI", "C X", "C XI", "D X", "D XI"};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> kings = {"Louis XXX", "Louis XXXIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Louis XXX", "Louis XXXIII"};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> kings = {"Louis XI", "Louis X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Louis X", "Louis XI"};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> kings = {"A XVII", "A XLVII", "A VII", "A III", "A XIII", "A L", "A XXIII", "A XXVII", "B VII", "B XXVII", "B XVII", "B XLVII", "B XXXVII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A III", "A VII", "A XIII", "A XVII", "A XXIII", "A XXVII", "A XLVII", "A L", "B VII", "B XVII", "B XXVII", "B XXXVII", "B XLVII"};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> kings = {"A X", "A IX", "A XL", "A L", "B IX", "B X", "B L", "B XL"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A IX", "A X", "A XL", "A L", "B IX", "B X", "B XL", "B L"};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> kings = {"Phi IX", "Phi X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Phi IX", "Phi X"};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> kings = {"A XLIX", "A XLI", "A XLII", "A XLIV", "A XLIII", "A XLV", "A XLVI", "A XLVII", "A XLVIII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XLI", "A XLII", "A XLIII", "A XLIV", "A XLV", "A XLVI", "A XLVII", "A XLVIII", "A XLIX"};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> kings = {"Son XIX", "Son XX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Son XIX", "Son XX"};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> kings = {"A XXXIII", "A XXVII", "A XVIII", "A XIII", "A III", "A XXXVII", "A XIV", "A V", "A XLVIII", "A XXXIV", "A VII", "A XXI", "A XLV", "A XLIV", "A XXXI", "A X", "A XLVII", "A XLI", "A XXXVI", "A XXIII", "A XV", "A XXXIX", "A XLII", "A XXVI", "A XL", "A XXIX", "A IX", "A XLIII", "A XXV", "A XIX", "A XXX", "A IV", "A XVI", "A L", "A XVII", "A XX", "A VIII", "A XII", "A XXXV", "A XLIX", "A II", "A XXXII", "A XXIV", "A I", "A XLVI", "A XI", "A XXII", "A XXVIII", "A XXXVIII", "A VI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A I", "A II", "A III", "A IV", "A V", "A VI", "A VII", "A VIII", "A IX", "A X", "A XI", "A XII", "A XIII", "A XIV", "A XV", "A XVI", "A XVII", "A XVIII", "A XIX", "A XX", "A XXI", "A XXII", "A XXIII", "A XXIV", "A XXV", "A XXVI", "A XXVII", "A XXVIII", "A XXIX", "A XXX", "A XXXI", "A XXXII", "A XXXIII", "A XXXIV", "A XXXV", "A XXXVI", "A XXXVII", "A XXXVIII", "A XXXIX", "A XL", "A XLI", "A XLII", "A XLIII", "A XLIV", "A XLV", "A XLVI", "A XLVII", "A XLVIII", "A XLIX", "A L"};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> kings = {"Louis I", "Louis XL", "Louis II", "Louis XLIII", "Louis XXXIX", "Louis XLI", "Louis XXXVIII", "Louis XLII", "Alphonse XL", "Alphonse XXXIX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Alphonse XXXIX", "Alphonse XL", "Louis I", "Louis II", "Louis XXXVIII", "Louis XXXIX", "Louis XL", "Louis XLI", "Louis XLII", "Louis XLIII"};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> kings = {"Phil XLV", "Phil XL", "Phil XLVI", "Phil L", "Phil XXXI", "Phil I", "Phil XLIX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Phil I", "Phil XXXI", "Phil XL", "Phil XLV", "Phil XLVI", "Phil XLIX", "Phil L"};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> kings = {"Luis IX", "Luis X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Luis IX", "Luis X"};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> kings = {"Phi IV", "Phi V"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Phi IV", "Phi V"};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> kings = {"A XI", "A IX", "A X"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A IX", "A X", "A XI"};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> kings = {"A XL", "A X", "A L", "A XX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A X", "A XX", "A XL", "A L"};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> kings = {"Louis XXXI", "Louis XXV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Louis XXV", "Louis XXXI"};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> kings = {"Albert I", "Albert II", "Albert III", "Albert IV", "Albert V", "Albert VI", "Albert VII", "Albert VIII", "Albert IX", "Albert X", "Albert XI", "Albert XII", "Albert XIII", "Albert XIV", "Albert XV", "Albert XVI", "Albert XVII", "Albert XVIII", "Albert XIX", "Albert XX", "Albert XXI", "Albert XXII", "Albert XXIII", "Albert XXIV", "Albert XXV", "Albert XXVI", "Albert XXVII", "Albert XXVIII", "Albert XXIX", "Albert XXX", "Albert XXXI", "Albert XXXII", "Albert XXXIII", "Albert XXXIV", "Albert XXXV", "Albert XXXVI", "Albert XXXVII", "Albert XXXVIII", "Albert XXXIX", "Albert XL", "Albert XLI", "Albert XLII", "Albert XLIII", "Albert XLIV", "Albert XLV", "Albert XLVI", "Albert XLVII", "Albert XLVIII", "Albert XLIX", "Albert L"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Albert I", "Albert II", "Albert III", "Albert IV", "Albert V", "Albert VI", "Albert VII", "Albert VIII", "Albert IX", "Albert X", "Albert XI", "Albert XII", "Albert XIII", "Albert XIV", "Albert XV", "Albert XVI", "Albert XVII", "Albert XVIII", "Albert XIX", "Albert XX", "Albert XXI", "Albert XXII", "Albert XXIII", "Albert XXIV", "Albert XXV", "Albert XXVI", "Albert XXVII", "Albert XXVIII", "Albert XXIX", "Albert XXX", "Albert XXXI", "Albert XXXII", "Albert XXXIII", "Albert XXXIV", "Albert XXXV", "Albert XXXVI", "Albert XXXVII", "Albert XXXVIII", "Albert XXXIX", "Albert XL", "Albert XLI", "Albert XLII", "Albert XLIII", "Albert XLIV", "Albert XLV", "Albert XLVI", "Albert XLVII", "Albert XLVIII", "Albert XLIX", "Albert L"};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> kings = {"Aaa XIX", "Aaa XX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Aaa XIX", "Aaa XX"};
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> kings = {"Louis IX", "Philippe II", "Phillippe XXX", "Phillippe XXXI", "Phillippe XXXII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Louis IX", "Philippe II", "Phillippe XXX", "Phillippe XXXI", "Phillippe XXXII"};
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> kings = {"Karl VI", "Karl IV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Karl IV", "Karl VI"};
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> kings = {"A I", "A XI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A I", "A XI"};
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> kings = {"George XXIV", "George XXV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"George XXIV", "George XXV"};
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> kings = {"A XXIII", "A XXII"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XXII", "A XXIII"};
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> kings = {"A XXXI", "A XXXII", "A XX", "A XXII", "A XXV", "A XXI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A XX", "A XXI", "A XXII", "A XXV", "A XXXI", "A XXXII"};
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> kings = {"Phil XLV", "Phil XL", "Phil XLVI", "Phil L", "Phil XXXI", "Phil I", "Phil XLIX", "Phil XXX"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Phil I", "Phil XXX", "Phil XXXI", "Phil XL", "Phil XLV", "Phil XLVI", "Phil XLIX", "Phil L"};
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> kings = {"V XXII", "V XXVI", "V XXIV", "V XXXIII", "V XXXI", "V XLVIII", "V XXV", "V XLVI", "V XXXIX", "V XVIII", "V XXXV", "V I", "V XXIII", "V XV", "V VIII", "V VI", "V XXXVI", "V XII", "V XLV", "V XLVII", "V XIII", "V II", "V XI", "V XXIX", "V XLII", "V XL", "V XXVII", "V XLIV", "V XXXIV", "V XIX", "V XLIX", "V XXX", "V V", "V XVII", "V XXXVIII", "V VII", "V X", "V XLIII", "V XXXII", "V XX", "V III", "V XXI", "V XXVIII", "V IV", "V XVI", "V IX", "V XIV", "V XXXVII", "V L", "V XLI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"V I", "V II", "V III", "V IV", "V V", "V VI", "V VII", "V VIII", "V IX", "V X", "V XI", "V XII", "V XIII", "V XIV", "V XV", "V XVI", "V XVII", "V XVIII", "V XIX", "V XX", "V XXI", "V XXII", "V XXIII", "V XXIV", "V XXV", "V XXVI", "V XXVII", "V XXVIII", "V XXIX", "V XXX", "V XXXI", "V XXXII", "V XXXIII", "V XXXIV", "V XXXV", "V XXXVI", "V XXXVII", "V XXXVIII", "V XXXIX", "V XL", "V XLI", "V XLII", "V XLIII", "V XLIV", "V XLV", "V XLVI", "V XLVII", "V XLVIII", "V XLIX", "V L"};
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> kings = {"Louis XLVII", "Louis XLV"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Louis XLV", "Louis XLVII"};
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> kings = {"A XL", "A X", "B X", "B XL", "A XI", "B XI"};
    KingSort* pObj = new KingSort();
    clock_t start = clock();
    vector<string> result = pObj->getSortedList(kings);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A X", "A XI", "A XL", "B X", "B XI", "B XL"};
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390467&rd=14722&pm=11740
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <vector>
 
using namespace std;
 
vector<string> split( const string &str, const string &delimeters = " " ) { vector<string> ret; string::size_type pos, end; pos = str.find_first_not_of( delimeters ); while ( pos != string::npos ) { end = str.find_first_of( delimeters, pos+1 ); if ( end == string::npos ) end = str.length(); ret.push_back( str.substr( pos, end-pos ) ); pos = str.find_first_not_of( delimeters, end ); } return ret; }
#define foreach(i,c) for ( typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i )
 
int parse_roman_digit(const char c) {
  if (c == 'I') return 1;
  if (c == 'V') return 5;
  if (c == 'X') return 10;
  if (c == 'L') return 50;
  abort();
}
 
int parse_roman(const string &s) {
  int ret = 0;
  for (int i=0; i<(int)s.size(); ++i) {
    int v = parse_roman_digit(s[i]);
    if (i+1 < (int)s.size() && v < parse_roman_digit(s[i+1])) {
      v = -v;
    }
    ret += v;
  }
  return ret;
}
 
struct KingSort {
  vector <string> getSortedList(vector <string> kings) { // caret here
    vector<pair<string, pair<int, string> > > tosort;
    foreach (it, kings) {
      vector<string> tokens = split(*it);
      tosort.push_back(make_pair(tokens[0], make_pair(parse_roman(tokens[1]), tokens[1])));
    }
    sort(tosort.begin(), tosort.end());
 
    vector<string> result;
    foreach (it, tosort) {
      result.push_back(it->first + ' ' + it->second.second);
    }
    return result;
  }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
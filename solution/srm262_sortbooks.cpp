/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4557
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

class SortBooks {
public:
    vector<int> checkManually(vector<string> field1, vector<string> field2);
};

vector<int> SortBooks::checkManually(vector<string> field1, vector<string> field2) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> field1 = {"J R R Tolkien", "THE Jungle BOOK"};
    vector<string> field2 = {"THE HOBBIT", "RUDYARD KIPLING"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> field1 = {"Scaramouche", "Dan Brown", "War and Peace"};
    vector<string> field2 = {"Rafael Sabatini", "The Da Vinci Code", "Leo Tolstoy"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> field1 = {"a b c", "d e f", "ghijklmn", "opqrstuv", "w x y z", "aaa bbb ccc ddd"};
    vector<string> field2 = {"AA aNd BB", "GO", "Stop the clock", "of", "pizza dinner for two", "andofthe"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> field1 = {"Aesop", "Little Women", "Hans Christian Anderson", "The Arabian Nights", "Peter Christian Asbornsen", "Mr Poppers Penguins", "Enid Bagnold", "Miss Hickory", "Sir James Barrie", "The Wizard of OZ", "Ludwig Bemelmans", "The Five Chinese Brothers", "Edith Nesbit Bland", "The Enchanted Castle", "Edith Nesbit Bland", "Five Children and It", "Michael Bond", "The Children of Green Knowe", "James Boyd", "Caddie Woodlawn", "Walter Brooks", "The Runaway Bunny", "Margaret Wise Brown", "Big Red Barn", "Jean De Brunhoff", "Old Mother West Wind", "Frances Hodgson Burnett", "A Little Princess", "Frances Hodgson Burnett", "Mike Mulligan and His Steam Shovel", "Virginia Lee Burton", "The Enormous Egg", "Eleanor Cameron", "The Happy Orpheline", "Natalie Savage Carlson", "Through the Looking Glass", "Miguel Cervantes", "Secret of the Andes", "Beverly Cleary", "Henry Huggins", "Elizabeth Coatsworth", "The Adventures of Pinocchio", "Barbara Cooney", "The Little Lame Prince", "Paul Creswick", "The Courage of Sarah Noble", "Alice Dagliesh"};
    vector<string> field2 = {"Aesops Fables", "Louisa May Alcott", "Fairy Tales", "Hans Christian Anderson", "East of the Sun and West of the Moon", "Richard and Florence Atwater", "National Velvet", "Carolyn Bailey", "Peter Pan", "Frank L Baum", "Madeline", "Claire Huchet Bishop", "The Railway Children", "Edith Nesbit Bland", "The Story of the Treasure Seekers", "Edith Nesbit Bland", "A Bear Called Paddington", "Lucy Boston", "Drums", "Carol Rylie Brink", "Freddy the Detective", "Margaret Wise Brown", "The Little Fur Family", "Moon Goodnight", "The Story of Babar", "Thornton W Burgess", "Little Lord Fauntleroy", "Frances Hodgson Burnett", "The Secret Garden", "Virginia Lee Burton", "The Little House", "Oliver Butterworth", "The Wonderful Flight to the Mushroom Planet", "Natalie Savage Carlson", "The Family Under the Bridge", "Lewis Carroll", "Don Quixote", "Ann Nolan Clark", "Beezus and Ramona", "Beverly Cleary", "The Cat Who Went to Heaven", "Carlo Collodi", "Chanticleer and the Fox", "Dinah Mulock Craik", "Robin Hood", "Alice Dagliesh", "The Bears on Hemlock Mountain"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 6, 7, 8, 10, 18, 19, 23, 26, 27, 36, 39, 44};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> field1 = {"This is a test of the emergency broadcast system"};
    vector<string> field2 = {"Had this been an actual emergency you would be sad"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> field1 = {"This Star Shall Abide"};
    vector<string> field2 = {"Sylvia Louise Engdahl"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> field1 = {"Lost Horizon"};
    vector<string> field2 = {"James Hilton"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> field1 = {"andy rooney", "joe lofthouse", "Theodore Taylor"};
    vector<string> field2 = {"love of life", "the arrest", "Softly Wandering"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> field1 = {"Alpha Omega", "The Watch", "Secrets", "Somebody Somewhere and Sons"};
    vector<string> field2 = {"The Book", "Of Nothing", "Desires", "Crowded Streets"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> field1 = {"Softwalker"};
    vector<string> field2 = {"Winning"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> field1 = {"A", "B", "C", "oF", "tHe", "anD", "sOFt", "hANDy", "aTHEist"};
    vector<string> field2 = {"SofT", "SandY", "BROtheR", "Often Wrong", "Theodore", "Spandex", "Look Away", "See Spot Sit", "Moving Around"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> field1 = {"Java Two Fifth Edition"};
    vector<string> field2 = {"Herbert Schildt"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> field1 = {"Georgette Heyer", "Captain Blood", "The Black Cauldron", "Michael P Kube McDowell"};
    vector<string> field2 = {"The Nonesuch", "Rafael Sabatini", "Lloyd Alexander", "Star Wars Before The Storm"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> field1 = {"Ignoring Extra Spaces", "Geena Davis"};
    vector<string> field2 = {"Is very Easy to do", "Cutthroat Island"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> field1 = {"The Beggar Queen", "White Fang", "Jack London", "Hannas Daughters"};
    vector<string> field2 = {"Lloyd Alexander", "Jack London", "The Call of the Wild", "Marianne Frederiksson"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> field1 = {"The Great Snow", "The Green Bay Tree", "Without Armor", "The Officer Factory", "The Dark River", "Castle Garac", "The Hurricane", "Dynasty of Death", "Claudia"};
    vector<string> field2 = {"Henry Morton Robinson", "Louis Bromfield", "James Hilton", "Hans Hellmut Kirst", "Nordoff and Hall", "Nicholas Monsaratt", "Nordoff and Hall", "Taylor Caldwell", "Rose Franken"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 5, 6, 8};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> field1 = {"of"};
    vector<string> field2 = {"me"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> field1 = {"me"};
    vector<string> field2 = {"of"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> field1 = {"and"};
    vector<string> field2 = {"and"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> field1 = {"the"};
    vector<string> field2 = {"one two three four"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> field1 = {"one two three four"};
    vector<string> field2 = {"and"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> field1 = {"This and That", "What the heck", "Queen of Hearts"};
    vector<string> field2 = {"Run to me", "Close your gate", "King of Spades"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> field1 = {"Margaret Moore", "Sharon Schulze", "Catherine Archer", "Lyn Stone", "Jacqueline Navin", "Theresa Michaels", "Millie Criswell", "Carolyn Davidson", "Mary McBride", "Judith Stacy"};
    vector<string> field2 = {"A Warriors Kiss", "Lady of the Keep", "The Bride of Spring", "My Ladys Choice", "The Vikings Heart", "Once a Hero", "The Marrying Man", "Tanner Stakes his Claim", "Banderas Bride", "The Blushing Bride"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 5, 8};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> field1 = {"a"};
    vector<string> field2 = {"b"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> field1 = {"Melody Beattie", "Vince Emery", "Jim Davis", "Rafael Sabatini"};
    vector<string> field2 = {"Journey to the Heart", "How to Grow Your Business on the Internet", "Garfield Takes the Cake", "Scaramouche"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> field1 = {"Timothy Zahn", "Kathy Tyers", "Michael A Stackpole", "Dave Wolverton", "Timothy Zahn", "Timothy Zahn", "Kevin J Anderson", "Barbara Hambly", "Kevin J Anderson", "Kevin J Anderson", "Kevin J Anderson", "Vonda N McIntyre", "Roger McBride Allen", "Roger McBride Allen", "Roger McBride Allen"};
    vector<string> field2 = {"Heir to the Empire", "The Truce at Bakura", "Rogue Squadron", "The Courtship of Princess Leia", "Dark Force Rising", "The Last Command", "Jedi Search", "Children of the Jedi", "Darksaber", "Dark Apprentice", "Champions of the Force", "The Crystal Star", "Ambush at Corellia", "Assault at Selonia", "Showdown at Centerpoint"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 6, 8, 9, 12, 13, 14};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> field1 = {"To be or not to be that is the question"};
    vector<string> field2 = {"William Shakespeare"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> field1 = {"a b c d e f g h i j k l m n o p q r s t u v w x yz"};
    vector<string> field2 = {"fifty length title"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> field1 = {"one two three four five six seven eight nine ten"};
    vector<string> field2 = {"eleven twelve thirteen fourteen fifteen sixteen"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> field1 = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y"};
    vector<string> field2 = {"apple", "banana", "car", "dog", "elf", "fun", "good", "hog", "ice", "jar", "kid", "log", "man", "new", "old", "pig", "quiz", "road", "star", "top", "Uranus", "venus", "water", "xray", "zoo", "Aardvark", "Bear", "Cat", "Dog", "Exit", "Funny", "Grin", "Hurry", "Idea", "Jump", "Ka", "Lie", "Me", "No", "Oz", "Pie", "Quad", "Rust", "Star", "Tar", "Ugly", "View", "Woman", "eXodus", "Yam"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> field1 = {"We have seen", "A lot", "of books here", "today"};
    vector<string> field2 = {"We have also seen", "A lot of", "nonsense", "as well"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> field1 = {"Aesop", "Little Women", "Hans Christian Anderson", "The Arabian Nights", "Peter Christian Asbornsen", "Mr Poppers Penguins", "Enid Bagnold", "Miss Hickory", "Sir James Barrie", "The Wizard of OZ", "Ludwig Bemelmans", "The Five Chinese Brothers", "Edith Nesbit Bland", "The Enchanted Castle", "Edith Nesbit Bland", "Five Children and It", "Michael Bond", "The Children of Green Knowe", "James Boyd", "Caddie Woodlawn", "Walter Brooks", "The Runaway Bunny", "Margaret Wise Brown", "Big Red Barn", "Jean De Brunhoff", "Old Mother West Wind", "Frances Hodgson Burnett", "A Little Princess", "Frances Hodgson Burnett", "Mike Mulligan and His Steam Shovel", "Virginia Lee Burton", "The Enormous Egg", "Eleanor Cameron", "The Happy Orpheline", "Natalie Savage Carlson", "Through the Looking Glass", "Miguel Cervantes", "Secret of the Andes", "Beverly Cleary", "Henry Huggins", "Elizabeth Coatsworth", "The Adventures of Pinocchio", "Barbara Cooney", "The Little Lame Prince", "Paul Creswick", "The Courage of Sarah Noble", "Alice Dagliesh"};
    vector<string> field2 = {"Aesops Fables", "Louisa May Alcott", "Fairy Tales", "Hans Christian Anderson", "East of the Sun and West of the Moon", "Richard and Florence Atwater", "National Velvet", "Carolyn Bailey", "Peter Pan", "Frank L Baum", "Madeline", "Claire Huchet Bishop", "The Railway Children", "Edith Nesbit Bland", "The Story of the Treasure Seekers", "Edith Nesbit Bland", "A Bear Called Paddington", "Lucy Boston", "Drums", "Carol Rylie Brink", "Freddy the Detective", "Margaret Wise Brown", "The Little Fur Family", "Moon Goodnight", "The Story of Babar", "Thornton W Burgess", "Little Lord Fauntleroy", "Frances Hodgson Burnett", "The Secret Garden", "Virginia Lee Burton", "The Little House", "Oliver Butterworth", "The Wonderful Flight to the Mushroom Planet", "Natalie Savage Carlson", "The Family Under the Bridge", "Lewis Carroll", "Don Quixote", "Ann Nolan Clark", "Beezus and Ramona", "Beverly Cleary", "The Cat Who Went to Heaven", "Carlo Collodi", "Chanticleer and the Fox", "Dinah Mulock Craik", "Robin Hood", "Alice Dagliesh", "The Bears on Hemlock Mountain"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 6, 7, 8, 10, 18, 19, 23, 26, 27, 36, 39, 44};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> field1 = {"of"};
    vector<string> field2 = {"test"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> field1 = {"J R R Tolkien", "THE Jungle BOOK"};
    vector<string> field2 = {"THE HOBBIT", "OFFF LALA"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> field1 = {"andy rooney", "joe lofthouse", "Theodore Taylor"};
    vector<string> field2 = {"love of life", "the arrest", "Softly Wandering"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
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
    vector<string> field1 = {"Lost Horizon"};
    vector<string> field2 = {"James Hilton"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> field1 = {"the"};
    vector<string> field2 = {"theof"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> field1 = {"Scaramouche", "Dan Brown", "War and"};
    vector<string> field2 = {"Rafael Sabatini", "The Da Vinci Code", "Leo Tolstoy The"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> field1 = {"Mountain Dew is undisputed best drink"};
    vector<string> field2 = {"Sartak the"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> field1 = {"of abc"};
    vector<string> field2 = {"or abc"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> field1 = {"theMK"};
    vector<string> field2 = {"mk The"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> field1 = {"this should be a title long"};
    vector<string> field2 = {"notitle"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> field1 = {"J R R Tolkien", "THE Jungle BOOK"};
    vector<string> field2 = {"THE HOBBIT", "RUDYARAND KIPLING"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> field1 = {"J RR Tolkien", "THE Jungle BOOK"};
    vector<string> field2 = {"THE", "RUDYARD KIPLING"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> field1 = {"a b c"};
    vector<string> field2 = {"the"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> field1 = {"Alexander Greand"};
    vector<string> field2 = {"Alexander Greand"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> field1 = {"Aesop", "Little Women", "Hans Christian Anderson", "The Arabian Nights", "Peter Christian Asbornsen", "Mr Poppers Penguins", "Enid Bagnold", "Miss Hickory", "Sir James Barrie", "The Wizard of OZ", "Ludwig Bemelmans", "The Five Chinese Brothers", "Edith Nesbit Bland", "The Enchanted Castle", "Edith Nesbit Bland", "Five Children and It", "Michael Bond", "The Children of Green Knowe", "James Boyd", "Caddie Woodlawn", "Walter Brooks", "The Runaway Bunny", "Margaret Wise Brown", "Big Red Barn", "Jean De Brunhoff", "Old Mother West Wind", "Frances Hodgson Burnett", "A Little Princess", "Frances Hodgson Burnett", "Mike Mulligan and His Steam Shovel", "Virginia Lee Burton", "The Enormous Egg", "Eleanor Cameron", "The Happy Orpheline", "Natalie Savage Carlson", "Through the Looking Glass", "Miguel Cervantes", "Secret of the Andes", "Beverly Cleary", "Henry Huggins", "Elizabeth Coatsworth", "The Adventures of Pinocchio", "Barbara Cooney", "The Little Lame Prince", "Paul Creswick", "The Courage of Sarah Noble", "Alice Dagliesh", "Ofasd ofasdfsd"};
    vector<string> field2 = {"Aesops Fables", "Louisa May Alcott", "Fairy Tales", "Hans Christian Anderson", "East of the Sun and West of the Moon", "Richard and Florence Atwater", "National Velvet", "Carolyn Bailey", "Peter Pan", "Frank L Baum", "Madeline", "Claire Huchet Bishop", "The Railway Children", "Edith Nesbit Bland", "The Story of the Treasure Seekers", "Edith Nesbit Bland", "A Bear Called Paddington", "Lucy Boston", "Drums", "Carol Rylie Brink", "Freddy the Detective", "Margaret Wise Brown", "The Little Fur Family", "Moon Goodnight", "The Story of Babar", "Thornton W Burgess", "Little Lord Fauntleroy", "Frances Hodgson Burnett", "The Secret Garden", "Virginia Lee Burton", "The Little House", "Oliver Butterworth", "The Wonderful Flight to the Mushroom Planet", "Natalie Savage Carlson", "The Family Under the Bridge", "Lewis Carroll", "Don Quixote", "Ann Nolan Clark", "Beezus and Ramona", "Beverly Cleary", "The Cat Who Went to Heaven", "Carlo Collodi", "Chanticleer and the Fox", "Dinah Mulock Craik", "Robin Hood", "Alice Dagliesh", "The Bears on Hemlock Mountain", "osfadsf ofasdfsd"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 6, 7, 8, 10, 18, 19, 23, 26, 27, 36, 39, 44, 47};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> field1 = {"J R R Tolkien", "jungle THE"};
    vector<string> field2 = {"THE HOBBIT", "RUDYARD KIPLING"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> field1 = {"ofOfF of The and", "ana makrick", "ksdljf kjsdlj kjsdf", "kfdsj la d", "df d"};
    vector<string> field2 = {"ofka andd", "gfdgfd fd", "sdf dsfdsf dsfds", "d d d", "andd"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> field1 = {"J R R Tolkien", "THE Jungle BOOK"};
    vector<string> field2 = {"THE HOBBIT", "OFFF LALAOF"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> field1 = {"THE"};
    vector<string> field2 = {"x"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> field1 = {"This is the test"};
    vector<string> field2 = {"The the the"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> field1 = {"blof blof"};
    vector<string> field2 = {"the big mistery"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> field1 = {"short"};
    vector<string> field2 = {"notitle"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> field1 = {"find or"};
    vector<string> field2 = {"find find"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> field1 = {"test or test", "test or aduh"};
    vector<string> field2 = {"test saya", "test lagi ah"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> field1 = {"an arr"};
    vector<string> field2 = {"is the"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> field1 = {"or son"};
    vector<string> field2 = {"the wells"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> field1 = {"aduh aduh the", "lagi lagi the", "lagi lagi of"};
    vector<string> field2 = {"test saya", "test lagi ah", "judul"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> field1 = {"andy rooney", "joe lofthouse", "Theodore Taylor the"};
    vector<string> field2 = {"love of life", "ther arrest", "Softly Wandering"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> field1 = {"THE"};
    vector<string> field2 = {"HI"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> field1 = {"asdlfj asdf of"};
    vector<string> field2 = {"asdf jks"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> field1 = {"he he", "he he he"};
    vector<string> field2 = {"he he he", "he he"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> field1 = {"ONE TWO THREE"};
    vector<string> field2 = {"THE TITLE"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> field1 = {"J G Tolkien", "THE Jungle BOOK"};
    vector<string> field2 = {"THE HOBBIT", "RUDYARD KIPLING"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> field1 = {"thethe ofofand of"};
    vector<string> field2 = {"the and theof"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> field1 = {"Lost Horizon"};
    vector<string> field2 = {"James Hithelton"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> field1 = {"a"};
    vector<string> field2 = {"the"};
    SortBooks* pObj = new SortBooks();
    clock_t start = clock();
    vector<int> result = pObj->checkManually(field1, field2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390467&rd=7996&pm=4557
********************************************************************************
#include <algorithm> 
#include <cctype> 
#include <iostream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
string strlower( string s ) { for ( string::iterator si=s.begin(); si!=s.end(); ++si ) *si = tolower(*si); return s; } 
vector<string> split( const string &str, const string &delimeters = " " ) { vector<string> ret; string::size_type pos, end; pos = str.find_first_not_of( delimeters ); while ( pos != string::npos ) { end = str.find_first_of( delimeters, pos+1 ); if ( end == string::npos ) end = str.length(); ret.push_back( str.substr( pos, end-pos ) ); pos = str.find_first_not_of( delimeters, end ); } return ret; } 
 
class SortBooks { 
public: 
   bool istitle( string s ) 
   { 
      vector<string> tok = split( strlower( s ) ); 
      return 
         tok.size() > 3 || 
         find( tok.begin(), tok.end(), "the" ) != tok.end() || 
         find( tok.begin(), tok.end(), "and" ) != tok.end() || 
         find( tok.begin(), tok.end(), "of" ) != tok.end(); 
   } 
    
   vector <int> checkManually( vector <string> field1, vector <string> field2 ) { // caret here 
      vector<int> ret; 
      for ( int i=0; i<(int)field1.size(); ++i ) 
         if ( istitle( field1[i] ) == istitle( field2[i] ) ) 
            ret.push_back( i ); 
      return ret; 
   } 
 
    
  
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 7 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/